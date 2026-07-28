import os
import time
import warnings
import serial
import numpy as np
import sounddevice as sd

# Suppress warnings
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'
warnings.filterwarnings('ignore')

from tflite_micro.python.tflite_micro.runtime import Interpreter as PreprocessorInterpreter

MAIN_UART_PORT = '/dev/ttyUSB1'
STREAM_UART_PORT = '/dev/ttyUSB2'
BAUD_RATE = 921600

PREPROCESSOR_MODEL_PATH = '/home/mtbbk/Uygulamalar/tflite-micro/tensorflow/lite/micro/examples/micro_speech/models/audio_preprocessor_int8.tflite'

# Reverse dictionary to easily print the word instead of the hex code
HEX_TO_WORD = {
    "0x0000000B": "YES",
    "0x00000007": "NO",
    "0x0000000D": "UNKNOWN",
    "0x0000000E": "SILENCE"
}

def record_audio(duration=1.0, sample_rate=16000):
    """Records live audio from the default microphone."""
    print(f"\n[MIC] Recording for {duration} second... SPEAK NOW!")
    # Record 1 channel (mono), 16-bit PCM audio
    recording = sd.rec(int(duration * sample_rate), samplerate=sample_rate, channels=1, dtype='int16')
    sd.wait() # Block execution until the recording finishes
    print("[MIC] Recording finished.")

    # Flatten the array from 2D (samples, channels) to 1D (samples,)
    return recording.flatten()

def process_audio_to_features(data, preprocessor):
    """Processes raw numpy audio directly into FPGA-ready bytes."""
    window_size = 480
    window_stride = 320

    features = np.zeros((49, 40), dtype=np.int8)

    start_index = 0
    end_index = start_index + window_size
    frame_number = 0

    while end_index <= len(data) and frame_number < 49:
        frame = data[start_index:end_index]
        input_data = np.expand_dims(frame, axis=0)

        preprocessor.set_input(input_data, 0)
        preprocessor.invoke()
        output_data = preprocessor.get_output(0)

        features[frame_number] = output_data.flatten()

        start_index += window_stride
        end_index += window_stride
        frame_number += 1

    # Extract straight sequential bytes for the UART stream
    data_bytes = bytearray()
    for val in features.flatten():
        data_bytes.append(int(val) & 0xFF)

    return data_bytes

def run_live_inference():
    try:
        main_serial = serial.Serial(MAIN_UART_PORT, BAUD_RATE, timeout=0.5)
        stream_serial = serial.Serial(STREAM_UART_PORT, BAUD_RATE, timeout=0.5)
    except Exception as e:
        print(f"[SYSTEM ERROR] Could not open serial ports: {e}")
        return

    print("[PC] Initializing Preprocessor Model...")
    with open(PREPROCESSOR_MODEL_PATH, 'rb') as f:
        preprocessor = PreprocessorInterpreter.from_bytes(f.read())

    print("\n" + "="*50)
    print(" FPGA LIVE MICROPHONE TESTER ")
    print("="*50)

    while True:
        try:
            input("\nPress [ENTER] to start recording (or Ctrl+C to quit)...")

            # 1. Record 1 second of audio
            raw_audio = record_audio()

            # 2. Extract Features
            data_bytes = process_audio_to_features(raw_audio, preprocessor)

            # 3. Wait for FPGA READY (with timeout)
            start_wait = time.time()
            while True:
                line = main_serial.readline().decode('utf-8', errors='ignore').strip()
                if "READY" in line or time.time() - start_wait > 1.5:
                    break

            # 4. Stream Data to FPGA
            chunk_size = 32
            for i in range(0, len(data_bytes), chunk_size):
                chunk = data_bytes[i : i + chunk_size]
                stream_serial.write(chunk)
                stream_serial.flush()
                time.sleep(0.002)

            # 5. Wait for the FPGA Result
            fpga_hex = None
            while True:
                result_line = main_serial.readline().decode('utf-8', errors='ignore').strip()
                if "Sonuc:0x" in result_line:
                    fpga_hex = "0x" + result_line.split("0x")[1].upper()
                    break

            # 6. Display Result
            detected_word = HEX_TO_WORD.get(fpga_hex, "ERROR / UNRECOGNIZED HEX")
            print(f">>> FPGA CLASSIFICATION: {detected_word} ({fpga_hex}) <<<")

        except KeyboardInterrupt:
            print("\n[PC] Exiting live test. Goodbye OSMAN!")
            break
        except Exception as e:
            print(f"\n[ERROR] Something went wrong: {e}")

if __name__ == "__main__":
    run_live_inference()
