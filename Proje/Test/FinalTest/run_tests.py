import os
import sys
import glob
import time
import warnings
from hwcounter import count

os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'
warnings.filterwarnings('ignore')

import serial
import numpy as np
import librosa

# Import both interpreters
from tflite_micro.python.tflite_micro.runtime import Interpreter as PreprocessorInterpreter
from ai_edge_litert.interpreter import Interpreter as EdgeInterpreter

MAIN_UART_PORT = '/dev/ttyUSB4'
STREAM_UART_PORT = '/dev/ttyUSB1'
BAUD_RATE = 921600

PREPROCESSOR_MODEL_PATH = 'ModelFiles/audio_preprocessor_int8.tflite'
QUANTIZED_MODEL_PATH = 'ModelFiles/micro_speech_quantized.tflite'

def process_wav_to_features(wav_path, preprocessor):
    """Processes audio and returns both the bytearray (for FPGA) and the NumPy array (for Software)."""
    data, sr = librosa.load(wav_path, sr=16000)
    data = (data * 32767.0).astype(np.int16)

    if len(data.shape) > 1:
        data = data[:, 0]

    if len(data) > 16000:
        data = data[:16000]
    elif len(data) < 16000:
        data = np.pad(data, (0, 16000 - len(data)))

    window_size = 480
    window_stride = 320

    input_dtype = np.int8
    features = np.zeros((49, 40), dtype=input_dtype)

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

    # No more chunking or reversing. We send the bytes in the exact
    # order the original TFLite model generated them.
    data_bytes = bytearray()
    for val in features.flatten():
        data_bytes.append(int(val) & 0xFF)

    return data_bytes, features

def dump_all_tensors(interpreter, file_name_prefix, output_dir="katman_cikti"):
    """Dumps all tensor layers to text files if a mismatch occurs, based on your logic."""
    os.makedirs(output_dir, exist_ok=True)
    print(f"\n[DEBUG] Mismatch detected! Saving tensor outputs for {file_name_prefix}...")

    for detail in interpreter.get_tensor_details():
        tensor_index = detail["index"]
        tensor_name = detail["name"].replace("/", "_").replace(":", "_")

        try:
            tensor_data = interpreter.get_tensor(tensor_index)
            file_name = f"{file_name_prefix}_tensor_{tensor_index:03d}_{tensor_name}"
            file_path = os.path.join(output_dir, file_name)

            flat_data = tensor_data.flatten()
            fmt_type = "%d" if np.issubdtype(tensor_data.dtype, np.integer) else "%.6f"
            np.savetxt(file_path + ".txt", flat_data, fmt=fmt_type)

        except ValueError:
            pass # Skip tensors that cannot be read directly

def test_fpga_and_software():
    try:
        main_serial = serial.Serial(MAIN_UART_PORT, BAUD_RATE, timeout=0.5)
        stream_serial = serial.Serial(STREAM_UART_PORT, BAUD_RATE, timeout=0.5)
    except Exception as e:
        print(f"[SYSTEM ERROR] Could not open serial ports: {e}")
        return

    print("[PC] Initializing TensorFlow Lite Models...")

    # 1. Load Preprocessor Model
    with open(PREPROCESSOR_MODEL_PATH, 'rb') as f:
        preprocessor = PreprocessorInterpreter.from_bytes(f.read())

    # 2. Load Quantized Model with tensor preservation active
    software_model = EdgeInterpreter(
        model_path=QUANTIZED_MODEL_PATH,
        experimental_preserve_all_tensors=True
    )
    software_model.allocate_tensors()

    sw_input_details = software_model.get_input_details()
    sw_output_details = software_model.get_output_details()

    categories = {
        "yes": "0x0000000B",     # 1011 in binary
        "no":  "0x00000007",     # 0111 in binary
        "unknown": "0x0000000D", # 1101 in binary
        "silence": "0x0000000E"  # 1110 in binary
    }

    # Tracking FPGA Accuracy, Software Accuracy, and Cumulative Time
    results = {
        cat: {
            "fpga_correct": 0,
            "sw_correct": 0,
            "mismatches": 0,
            "total_files": 0,
            "fpga_time_total_ms": 0.0,
            "fpga_uart_time_total_ms": 0.0,
            "sw_time_total_ms": 0.0,
            "sw_cycles_total": 0
        } for cat in categories.keys()
    }

    for category, expected_hex in categories.items():
        wav_files = sorted(glob.glob(f"{category}/*.wav"))
        if len(wav_files) == 0:
            continue # Skip categories with no files to keep the console clean

        print(f"\n{'='*50}")
        print(f"--- Starting tests for '{category}' folder ({len(wav_files)} files) ---")
        print(f"{'='*50}")

        for wav_file in wav_files:
            file_name = os.path.basename(wav_file)
            file_prefix = file_name.replace(".wav", "")
            results[category]["total_files"] += 1

            # --- 1. DATA PREPARATION ---
            try:
                data_bytes, features_array = process_wav_to_features(wav_file, preprocessor)
            except Exception as e:
                print(f"[ERROR] Failed to process audio {file_name}: {e}")
                continue

            # --- 2. SOFTWARE INFERENCE ---
            expected_shape = sw_input_details[0]['shape']
            input_data = features_array.reshape(expected_shape)
            software_model.set_tensor(sw_input_details[0]['index'], input_data)

            # Timer Start: SW
            start_sw = time.perf_counter()
            start_sw_cycles = count()

            software_model.invoke()

            end_sw_cycles = count()
            end_sw = time.perf_counter()
            # Timer End: SW

            sw_time_ms = (end_sw - start_sw) * 1000
            sw_cycles = end_sw_cycles - start_sw_cycles

            results[category]["sw_time_total_ms"] += sw_time_ms
            results[category]["sw_cycles_total"] += sw_cycles

            sw_output = software_model.get_tensor(sw_output_details[0]['index'])
            sw_prediction_index = np.argmax(sw_output[0])

            # Map the TFLite output index to your custom one-cold hex logic
            if sw_prediction_index == 0:
                sw_hex = "0x0000000E"  # Silence
            elif sw_prediction_index == 1:
                sw_hex = "0x0000000D"  # Unknown
            elif sw_prediction_index == 2:
                sw_hex = "0x0000000B"  # Yes
            elif sw_prediction_index == 3:
                sw_hex = "0x00000007"  # No
            else:
                sw_hex = "INVALID"


			# --- 3. FPGA INFERENCE ---
            # Wait for FPGA READY
            start_wait = time.time()
            while True:
                line = main_serial.readline().decode('utf-8', errors='ignore').strip()
                if "READY" in line or time.time() - start_wait > 1.5:
                    break

            start_fpga_with_uart = time.perf_counter()

            # Stream data
            chunk_size = 32
            for i in range(0, len(data_bytes), chunk_size):
                chunk = data_bytes[i : i + chunk_size]
                stream_serial.write(chunk)
                stream_serial.flush()

			# Timer Start: FPGA (Starts immediately after data finishes sending)
            start_fpga = time.perf_counter()
            fpga_hex = None
            while True:
                result_line = main_serial.readline().decode('utf-8', errors='ignore').strip()

                # Make the search tolerant of spaces
                if "Sonuc:" in result_line and "0x" in result_line:
                    end_fpga = time.perf_counter()
                    fpga_hex = "0x" + result_line.split("0x")[1].upper()
                    break

            # Calculate and accumulate both times
            fpga_time_ms = (end_fpga - start_fpga) * 1000
            fpga_uart_time_ms = (end_fpga - start_fpga_with_uart) * 1000

            results[category]["fpga_time_total_ms"] += fpga_time_ms
            results[category]["fpga_uart_time_total_ms"] += fpga_uart_time_ms

            # --- 4. COMPARISON & EVALUATION ---
            fpga_pass = (expected_hex == fpga_hex)
            sw_pass   = (expected_hex == sw_hex)

            if fpga_pass: results[category]["fpga_correct"] += 1
            if sw_pass:   results[category]["sw_correct"] += 1

            print_str = f"[{'MATCH' if fpga_hex == sw_hex else 'MISMATCH'}] {file_name} | "
            print_str += f"FPGA: {fpga_hex} {'(Pass)' if fpga_pass else '(Fail)'} | "
            print_str += f"SW: {sw_hex} {'(Pass)' if sw_pass else '(Fail)'}"
            print(print_str)

            # If the hardware and software give different answers, dump the layers for debugging
            if fpga_hex != sw_hex:
                results[category]["mismatches"] += 1
                dump_all_tensors(software_model, file_prefix)

	# --- 5. PRINT FINAL STATISTICS ---
    print("\n" + "="*50)
    print("FINAL ACCURACY, COMPARISON & SPEED RESULTS")
    print("="*50)

    global_total_files = 0
    global_fpga_time = 0.0
    global_fpga_uart_time = 0.0  # <-- NEW
    global_sw_time = 0.0

    for cat in categories.keys():
        f_count = results[cat]['fpga_correct']
        s_count = results[cat]['sw_correct']
        m_count = results[cat]['mismatches']
        total_files = results[cat]['total_files']

        if total_files == 0:
            continue

        global_total_files += total_files
        global_fpga_time += results[cat]['fpga_time_total_ms']
        global_fpga_uart_time += results[cat]['fpga_uart_time_total_ms']
        global_sw_time += results[cat]['sw_time_total_ms']

        avg_fpga_ms = results[cat]['fpga_time_total_ms'] / total_files
        avg_fpga_uart_ms = results[cat]['fpga_uart_time_total_ms'] / total_files
        avg_sw_ms = results[cat]['sw_time_total_ms'] / total_files
        avg_sw_cycles = results[cat]['sw_cycles_total'] / total_files

        speed_multiplier = avg_sw_ms / avg_fpga_ms if avg_fpga_ms > 0 else 0

        print(f"Directory '{cat}' ({total_files} files):")
        print(f"  - FPGA Correct Answers : {f_count}")
        print(f"  - SW Correct Answers   : {s_count}")
        print(f"  - Total Mismatches     : {m_count}")
        print(f"  - Avg SW Speed         : {avg_sw_ms:.10f} ms")
        print(f"  - Avg SW Cycles        : {int(avg_sw_cycles):,} cycles")
        print(f"  - Avg FPGA (Compute)   : {avg_fpga_ms:.10f} ms")
        print(f"  - Avg FPGA (+ UART)    : {avg_fpga_uart_ms:.10f} ms")
        if speed_multiplier > 0:
            print(f"  - Performance          : FPGA is {speed_multiplier:.10f}x faster\n")


    if global_total_files > 0:
        overall_avg_fpga = global_fpga_time / global_total_files
        overall_avg_sw = global_sw_time / global_total_files
        overall_speedup = overall_avg_sw / overall_avg_fpga if overall_avg_fpga > 0 else 0

        print("-" * 50)
        print(f"OVERALL SYSTEM ACCELERATION:")
        print(f"Across {global_total_files} tests, the FPGA accelerator is on average")
        print(f"{overall_speedup:.10f}x faster than the PC Software Model!")
        print("-" * 50)

if __name__ == "__main__":
    test_fpga_and_software()
