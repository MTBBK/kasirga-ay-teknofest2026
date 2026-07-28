import os
import time
import io
import warnings
import serial
import numpy as np
import librosa
import subprocess
from flask import Flask, request, jsonify, render_template
from tflite_micro.python.tflite_micro.runtime import Interpreter as PreprocessorInterpreter
from ai_edge_litert.interpreter import Interpreter as EdgeInterpreter

# Suppress warnings
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'
warnings.filterwarnings('ignore')

app = Flask(__name__)

# --- CONFIGURATION ---
MAIN_UART_PORT = '/dev/ttyUSB1'
STREAM_UART_PORT = '/dev/ttyUSB2'
BAUD_RATE = 921600
PREPROCESSOR_MODEL_PATH = '/home/mtbbk/Uygulamalar/tflite-micro/tensorflow/lite/micro/examples/micro_speech/models/audio_preprocessor_int8.tflite'
QUANTIZED_MODEL_PATH = '/home/mtbbk/Uygulamalar/tflite-micro/tensorflow/lite/micro/examples/micro_speech/models/micro_speech_quantized.tflite'

HEX_TO_WORD = {
    "0x0000000B": "YES",
    "0x00000007": "NO",
    "0x0000000D": "UNKNOWN",
    "0x0000000E": "SILENCE"
}

# --- INITIALIZATION ---
print("[SYSTEM] Initializing models and serial ports...")

# Create the audios folder if it doesn't exist
os.makedirs("audios", exist_ok=True)

with open(PREPROCESSOR_MODEL_PATH, 'rb') as f:
    preprocessor = PreprocessorInterpreter.from_bytes(f.read())

# Initialize Software Model
software_model = EdgeInterpreter(model_path=QUANTIZED_MODEL_PATH)
software_model.allocate_tensors()
sw_input_details = software_model.get_input_details()
sw_output_details = software_model.get_output_details()

try:
    main_serial = serial.Serial(MAIN_UART_PORT, BAUD_RATE, timeout=0.5)
    stream_serial = serial.Serial(STREAM_UART_PORT, BAUD_RATE, timeout=0.5)
except Exception as e:
    print(f"[FATAL ERROR] Could not open serial ports: {e}")

# --- HELPER FUNCTIONS ---
def process_audio_to_bytes(wav_path):
    # Load audio directly from the temporary WAV file
    data, sr = librosa.load(wav_path, sr=16000)
    data = (data * 32767.0).astype(np.int16)

    if len(data.shape) > 1:
        data = data[:, 0]

    if len(data) > 16000:
        data = data[:16000]
    elif len(data) < 16000:
        data = np.pad(data, (0, 16000 - len(data)))

    features = np.zeros((49, 40), dtype=np.int8)
    start_index = 0
    end_index = 480
    frame_number = 0

    while end_index <= len(data) and frame_number < 49:
        frame = data[start_index:end_index]
        input_data = np.expand_dims(frame, axis=0)

        preprocessor.set_input(input_data, 0)
        preprocessor.invoke()
        output_data = preprocessor.get_output(0)

        features[frame_number] = output_data.flatten()
        start_index += 320
        end_index += 320
        frame_number += 1

    data_bytes = bytearray()
    for val in features.flatten():
        data_bytes.append(int(val) & 0xFF)

    return data_bytes, features

# --- ROUTES ---
@app.route('/')
def index():
    return render_template('index.html')

@app.route('/api/infer', methods=['POST'])
def infer():
    if 'audio' not in request.files:
        return jsonify({"error": "No audio file provided"}), 400

    audio_file = request.files['audio']

    # Generate a unique timestamp for the files
    timestamp = time.strftime("%Y%m%d_%H%M%S")

    # Save the raw browser WebM file to disk temporarily
    webm_path = f"temp_{timestamp}.webm"

    # Target path for the permanent WAV file in the 'audios' directory
    wav_path = os.path.join("audios", f"audio_{timestamp}.wav")

    audio_file.save(webm_path)

    try:
        # Convert WebM to a 16kHz Mono WAV file using FFmpeg
        subprocess.run([
            'ffmpeg', '-y', '-i', webm_path,
            '-ar', '16000', '-ac', '1', wav_path
        ], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)

        # 1. Prepare Data from the new WAV file
        data_bytes, features_array = process_audio_to_bytes(wav_path)

        # 2. Software Inference
        expected_shape = sw_input_details[0]['shape']
        input_data = features_array.reshape(expected_shape)
        software_model.set_tensor(sw_input_details[0]['index'], input_data)

        start_sw = time.perf_counter()
        software_model.invoke()
        end_sw = time.perf_counter()
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

        sw_word = HEX_TO_WORD.get(sw_hex, "ERROR")

        # 3. Wait for FPGA READY
        start_wait = time.time()
        while True:
            line = main_serial.readline().decode('utf-8', errors='ignore').strip()
            if "READY" in line or time.time() - start_wait > 1.5:
                break

        # 4. Stream to FPGA
        chunk_size = 32
        for i in range(0, len(data_bytes), chunk_size):
            chunk = data_bytes[i : i + chunk_size]
            stream_serial.write(chunk)
            stream_serial.flush()
            time.sleep(0.002)

        # 5. Read Result
        start_fpga = time.perf_counter()
        fpga_hex = None
        while True:
            result_line = main_serial.readline().decode('utf-8', errors='ignore').strip()
            if "Sonuc:0x" in result_line:
                end_fpga = time.perf_counter()
                fpga_hex = "0x" + result_line.split("0x")[1].upper()
                break

        fpga_time_ms = (end_fpga - start_fpga) * 1000
        fpga_word = HEX_TO_WORD.get(fpga_hex, "ERROR")

        speedup = sw_time_ms / fpga_time_ms if fpga_time_ms > 0 else 0
        match = (fpga_hex == sw_hex)

        return jsonify({
            "fpga": {
                "word": fpga_word,
                "hex": fpga_hex,
                "time_ms": f"{fpga_time_ms:.2f}"
            },
            "software": {
                "word": sw_word,
                "hex": sw_hex,
                "time_ms": f"{sw_time_ms:.2f}"
            },
            "speedup": f"{speedup:.2f}",
            "match": match
        })

    except Exception as e:
        return jsonify({"error": str(e)}), 500
    finally:
        # Cleanup ONLY the temporary webm file. The WAV file remains saved in /audios
        if os.path.exists(webm_path):
            os.remove(webm_path)

if __name__ == '__main__':
    # Run locally on port 5000
    app.run(host='127.0.0.1', port=5000, debug=False)
