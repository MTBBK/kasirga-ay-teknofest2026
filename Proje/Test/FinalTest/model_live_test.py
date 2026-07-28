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
from ai_edge_litert.interpreter import Interpreter as EdgeInterpreter

MAIN_UART_PORT = '/dev/ttyUSB2'
STREAM_UART_PORT = '/dev/ttyUSB0'
BAUD_RATE = 921600
LOG_FILE = "fpga_uart_log.txt"

PREPROCESSOR_MODEL_PATH = '/home/mtbbk/Uygulamalar/tflite-micro/tensorflow/lite/micro/examples/micro_speech/models/audio_preprocessor_int8.tflite'
QUANTIZED_MODEL_PATH = '/home/mtbbk/Uygulamalar/tflite-micro/tensorflow/lite/micro/examples/micro_speech/models/micro_speech_quantized.tflite'

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
    recording = sd.rec(int(duration * sample_rate), samplerate=sample_rate, channels=1, dtype='int16')
    sd.wait()
    print("[MIC] Recording finished.")
    return recording.flatten()

def process_audio_to_features(data, preprocessor):
    """Processes raw numpy audio into FPGA-ready bytes and SW-ready arrays."""
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

    return data_bytes, features

def log_uart(line):
    """Prints the raw UART line to the console and saves it to a file."""
    if line:
        print(f"[FPGA] {line}")
        with open(LOG_FILE, "a") as f:
            f.write(line + "\n")

def run_live_inference():
    try:
        main_serial = serial.Serial(MAIN_UART_PORT, BAUD_RATE, timeout=0.5)
        stream_serial = serial.Serial(STREAM_UART_PORT, BAUD_RATE, timeout=0.5)
    except Exception as e:
        print(f"[SYSTEM ERROR] Could not open serial ports: {e}")
        return

    # Clear the log file at the start of a new session
    with open(LOG_FILE, "w") as f:
        f.write("=== NEW SESSION STARTED ===\n")

    print("[PC] Initializing Preprocessor and Software Models...")
    with open(PREPROCESSOR_MODEL_PATH, 'rb') as f:
        preprocessor = PreprocessorInterpreter.from_bytes(f.read())

    software_model = EdgeInterpreter(model_path=QUANTIZED_MODEL_PATH)
    software_model.allocate_tensors()
    sw_input_details = software_model.get_input_details()
    sw_output_details = software_model.get_output_details()

    print("\n" + "="*50)
    print(" FPGA vs. SOFTWARE LIVE MICROPHONE TESTER ")
    print("="*50)

    while True:
        try:
            input("\nPress [ENTER] to start recording (or Ctrl+C to quit)...")

            # 1. Record Audio
            raw_audio = record_audio()

            # 2. Extract Features
            data_bytes, features_array = process_audio_to_features(raw_audio, preprocessor)

			# 3. Software Inference
            expected_shape = sw_input_details[0]['shape']
            input_data = features_array.reshape(expected_shape)
            software_model.set_tensor(sw_input_details[0]['index'], input_data)

            # --- START CPU TIMER ---
            start_sw = time.perf_counter()
            software_model.invoke()
            end_sw = time.perf_counter()
            # --- END CPU TIMER ---

            # Calculate CPU time in milliseconds
            sw_time_ms = (end_sw - start_sw) * 1000

            sw_output = software_model.get_tensor(sw_output_details[0]['index'])
            sw_prediction_index = np.argmax(sw_output[0])

            if sw_prediction_index == 0:
                sw_hex = "0x0000000E"
            elif sw_prediction_index == 1:
                sw_hex = "0x0000000D"
            elif sw_prediction_index == 2:
                sw_hex = "0x0000000B"
            elif sw_prediction_index == 3:
                sw_hex = "0x00000007"
            else:
                sw_hex = "INVALID"

			# 4. FPGA Inference
            start_wait = time.time()
            while True:
                line = main_serial.readline().decode('utf-8', errors='ignore').strip()
                log_uart(line)
                if "READY" in line or time.time() - start_wait > 1.5:
                    break

            # Stream data
            chunk_size = 32
            for i in range(0, len(data_bytes), chunk_size):
                chunk = data_bytes[i : i + chunk_size]
                stream_serial.write(chunk)
                stream_serial.flush()
                time.sleep(0.002)

            # --- START FPGA TIMER ---
            # Start counting exactly when data finishes sending
            start_fpga = time.perf_counter()

            fpga_hex = None
            while True:
                result_line = main_serial.readline().decode('utf-8', errors='ignore').strip()
                log_uart(result_line)

                if "Sonuc:0x" in result_line:
                    # --- END FPGA TIMER ---
                    # Stop counting the moment the answer is parsed
                    end_fpga = time.perf_counter()
                    fpga_hex = "0x" + result_line.split("0x")[1].upper()
                    break

            # Calculate FPGA time in milliseconds
            fpga_time_ms = (end_fpga - start_fpga) * 1000

			# 5. Display Comparison
            sw_word = HEX_TO_WORD.get(sw_hex, "ERROR")
            fpga_word = HEX_TO_WORD.get(fpga_hex, "ERROR")

            # Calculate how many times faster the hardware is
            speedup = sw_time_ms / fpga_time_ms if fpga_time_ms > 0 else 0

            print("\n--------------------------------------------------")
            if fpga_hex == sw_hex:
                print(f"[MATCH] Both systems agree!")
            else:
                print(f"[MISMATCH] Divergence detected in calculation.")

            # Print the results with formatting to 2 decimal places
            print(f"Software TFLite : {sw_word: <7} ({sw_hex}) | Time: {sw_time_ms:>6.2f} ms")
            print(f"Hardware FPGA   : {fpga_word: <7} ({fpga_hex}) | Time: {fpga_time_ms:>6.2f} ms")
            print(f"Performance     : FPGA is {speedup:.2f}x faster than PC CPU!")
            print("--------------------------------------------------")

        except KeyboardInterrupt:
            print("\n[PC] Exiting live test. Goodbye!")
            break
        except Exception as e:
            print(f"\n[ERROR] Something went wrong: {e}")

if __name__ == "__main__":
    run_live_inference()
