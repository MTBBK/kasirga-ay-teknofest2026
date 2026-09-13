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

MAIN_UART_PORT = '/dev/ttyUSB3'
STREAM_UART_PORT = '/dev/ttyUSB0'
BAUD_RATE = 921600

PREPROCESSOR_MODEL_PATH = 'ModelFiles/audio_preprocessor_int8.tflite'
QUANTIZED_MODEL_PATH = 'ModelFiles/micro_speech_quantized.tflite'


def get_pc_specs():
    """Dynamically fetches CPU model, core count, and RAM from the Linux system."""
    cpu_model = "Unknown CPU"
    ram_gb = 0.0
    try:
        with open("/proc/cpuinfo", "r") as f:
            for line in f:
                if "model name" in line:
                    cpu_model = line.split(":")[1].strip()
                    break
        with open("/proc/meminfo", "r") as f:
            for line in f:
                if "MemTotal" in line:
                    # Convert KB to GB
                    ram_gb = round(int(line.split()[1]) / (1024**2), 1)
                    break
    except Exception:
        pass

    return cpu_model, os.cpu_count(), ram_gb

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

	# Reverse lookup to convert Hex back to string categories for the Confusion Matrix
    hex_to_category = {v: k for k, v in categories.items()}
    pred_categories = list(categories.keys()) + ["INVALID"]

    fpga_cm = {cat: {p: 0 for p in pred_categories} for cat in categories.keys()}
    sw_cm = {cat: {p: 0 for p in pred_categories} for cat in categories.keys()}

    # Tracking FPGA Accuracy, Software Accuracy, and Cumulative Time
    results = {
        cat: {
            "fpga_correct": 0,
            "fpga_false": 0,
            "sw_correct": 0,
            "sw_false": 0,
            "mismatches": 0,
            "mismatch_fpga_true_sw_false": 0,
            "mismatch_fpga_false_sw_true": 0,
            "mismatch_both_false": 0,
            "total_files": 0,
            "fpga_time_total_ms": 0.0,
            "fpga_uart_time_total_ms": 0.0,
            "sw_time_total_ms": 0.0,
            "sw_cycles_total": 0,
            "fpga_cycles_total": 0,
            "fpga_accel_cycles_total": 0,
            "fpga_stream_cycles_total": 0,
            "fpga_loader_cycles_total": 0,
            "fpga_wb_cycles_total": 0
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

            # Variables to hold actual hardware cycles
            hw_inference_cycles = 0
            hw_accel_cycles = 0
            hw_stream_cycles = 0
            hw_loader_cycles = 0
            hw_wb_cycles = 0


            while True:
                result_line = main_serial.readline().decode('utf-8', errors='ignore').strip()

                # Safely parse hardware cycles to prevent crashes from UART corruption
                try:
                    if "Hizlandirici cevrim sayisi:" in result_line:
                        hw_accel_cycles = int(result_line.split(":")[1].strip())
                    elif "Uart_stream cevrim sayisi:" in result_line:
                        hw_stream_cycles = int(result_line.split(":")[1].strip())
                    elif "Loader cevrim sayisi:" in result_line:
                        hw_loader_cycles = int(result_line.split(":")[1].strip())
                    elif "Inference cevrim sayisi:" in result_line:
                        hw_inference_cycles = int(result_line.split(":")[1].strip())
                    elif "write_back cevrim sayisi:" in result_line:
                        hw_wb_cycles = int(result_line.split(":")[1].strip())
                except (IndexError, ValueError):
                    # If UART drops the ':' or the number is corrupted, ignore it
                    pass

                # Parse the final string result mapped from the C code and convert to expected Hex
                if "Result is: SILENCE" in result_line:
                    end_fpga = time.perf_counter()
                    fpga_hex = "0x0000000E"
                    break
                elif "UNKNOWN" in result_line:
                    end_fpga = time.perf_counter()
                    fpga_hex = "0x0000000D"
                    break
                elif "Result is: YES" in result_line:
                    end_fpga = time.perf_counter()
                    fpga_hex = "0x0000000B"
                    break
                elif "Result is: NO" in result_line:
                    end_fpga = time.perf_counter()
                    fpga_hex = "0x00000007"
                    break

			# Calculate and accumulate both times
            fpga_time_ms = (hw_inference_cycles / 50000.0)
            fpga_uart_time_ms = (end_fpga - start_fpga_with_uart) * 1000

            results[category]["fpga_time_total_ms"] += fpga_time_ms
            results[category]["fpga_uart_time_total_ms"] += fpga_uart_time_ms

            # Accumulate all cycles
            results[category]["fpga_cycles_total"] += hw_inference_cycles
            results[category]["fpga_accel_cycles_total"] += hw_accel_cycles
            results[category]["fpga_stream_cycles_total"] += hw_stream_cycles
            results[category]["fpga_loader_cycles_total"] += hw_loader_cycles
            results[category]["fpga_wb_cycles_total"] += hw_wb_cycles

			# --- 4. COMPARISON & EVALUATION ---
            fpga_pass = (expected_hex == fpga_hex)
            sw_pass   = (expected_hex == sw_hex)

            # Track Correct/False for FPGA
            if fpga_pass: results[category]["fpga_correct"] += 1
            else:         results[category]["fpga_false"] += 1

            # Track Correct/False for Software
            if sw_pass:   results[category]["sw_correct"] += 1
            else:         results[category]["sw_false"] += 1

            print_str = f"[{'MATCH' if fpga_hex == sw_hex else 'MISMATCH'}] {file_name} | "
            print_str += f"FPGA: {fpga_hex} {'(Pass)' if fpga_pass else '(Fail)'} | "
            print_str += f"SW: {sw_hex} {'(Pass)' if sw_pass else '(Fail)'}"
            print(print_str)

            # Map hex back to string for confusion matrix tracking
            fpga_pred_str = hex_to_category.get(fpga_hex, "INVALID")
            sw_pred_str = hex_to_category.get(sw_hex, "INVALID")

            fpga_cm[category][fpga_pred_str] += 1
            sw_cm[category][sw_pred_str] += 1

            # If the hardware and software give different answers, categorize the mismatch
            if fpga_hex != sw_hex:
                results[category]["mismatches"] += 1

                if fpga_pass and not sw_pass:
                    results[category]["mismatch_fpga_true_sw_false"] += 1
                elif not fpga_pass and sw_pass:
                    results[category]["mismatch_fpga_false_sw_true"] += 1
                elif not fpga_pass and not sw_pass:
                    # Both failed, but they gave different wrong answers
                    results[category]["mismatch_both_false"] += 1

	# --- 5. GENERATE COMPREHENSIVE REPORT ---
    global_total_files = 0
    global_fpga_time = 0.0
    global_fpga_uart_time = 0.0
    global_sw_time = 0.0
    global_sw_cycles = 0

    global_fpga_cycles = 0
    global_fpga_accel_cycles = 0
    global_fpga_stream_cycles = 0
    global_fpga_loader_cycles = 0
    global_fpga_wb_cycles = 0

    global_fpga_correct = 0
    global_fpga_false = 0
    global_sw_correct = 0
    global_sw_false = 0

    global_mismatches = 0
    global_mismatch_fpga_t_sw_f = 0
    global_mismatch_fpga_f_sw_t = 0
    global_mismatch_both_f = 0

    for cat in categories.keys():
        global_total_files += results[cat]['total_files']
        global_fpga_time += results[cat]['fpga_time_total_ms']
        global_fpga_uart_time += results[cat]['fpga_uart_time_total_ms']
        global_sw_time += results[cat]['sw_time_total_ms']
        global_sw_cycles += results[cat]['sw_cycles_total']

        global_fpga_cycles += results[cat]['fpga_cycles_total']
        global_fpga_accel_cycles += results[cat]['fpga_accel_cycles_total']
        global_fpga_stream_cycles += results[cat]['fpga_stream_cycles_total']
        global_fpga_loader_cycles += results[cat]['fpga_loader_cycles_total']
        global_fpga_wb_cycles += results[cat]['fpga_wb_cycles_total']

        global_fpga_correct += results[cat]['fpga_correct']
        global_fpga_false += results[cat]['fpga_false']
        global_sw_correct += results[cat]['sw_correct']
        global_sw_false += results[cat]['sw_false']

        global_mismatches += results[cat]['mismatches']
        global_mismatch_fpga_t_sw_f += results[cat]['mismatch_fpga_true_sw_false']
        global_mismatch_fpga_f_sw_t += results[cat]['mismatch_fpga_false_sw_true']
        global_mismatch_both_f += results[cat]['mismatch_both_false']

    if global_total_files == 0:
        print("No tests were run.")
        return

	# Calculate Global Averages & Throughput
    avg_fpga_ms = global_fpga_time / global_total_files
    avg_fpga_uart_ms = global_fpga_uart_time / global_total_files
    avg_sw_ms = global_sw_time / global_total_files

    avg_sw_cycles = global_sw_cycles / global_total_files

    # Calculate granular hardware averages
    avg_fpga_cycles = global_fpga_cycles / global_total_files
    avg_fpga_accel = global_fpga_accel_cycles / global_total_files
    avg_fpga_stream = global_fpga_stream_cycles / global_total_files
    avg_fpga_loader = global_fpga_loader_cycles / global_total_files
    avg_fpga_wb = global_fpga_wb_cycles / global_total_files

    # Calculate how many cycles the PC uses compared to the FPGA pure inference
    cycle_ratio = avg_sw_cycles / avg_fpga_cycles if avg_fpga_cycles > 0 else 0

    fpga_ips = 1000.0 / avg_fpga_uart_ms if avg_fpga_uart_ms > 0 else 0
    sw_ips = 1000.0 / avg_sw_ms if avg_sw_ms > 0 else 0

    uart_overhead_ms = avg_fpga_uart_ms - avg_fpga_ms
    uart_overhead_pct = (uart_overhead_ms / avg_fpga_uart_ms) * 100 if avg_fpga_uart_ms > 0 else 0

    fpga_accuracy = (global_fpga_correct / global_total_files) * 100
    sw_accuracy = (global_sw_correct / global_total_files) * 100
    hw_sw_equivalence = ((global_total_files - global_mismatches) / global_total_files) * 100
    overall_speedup = avg_sw_ms / avg_fpga_ms if avg_fpga_ms > 0 else 0

    print("\n" + "="*60)
    print(" " * 12 + "FPGA AI ACCELERATOR EVALUATION REPORT")
    print("="*60)

    cpu_model, cores, ram_gb = get_pc_specs()

    print("\n0. TEST ENVIRONMENT SPECIFICATIONS")
    print("-" * 60)
    print("[Software Node - Work PC]")
    print(f"  -> CPU : {cpu_model} ({cores} Logical Cores)")
    print(f"  -> RAM : {ram_gb} GB System Memory")
    print("[Hardware Node - FPGA]")
    print(f"  -> FPGA: Digilent Basys 3 (Xilinx Artix-7 XC7A35T)")
    print(f"  -> BRAM: 225 KB Maximum (1,800 Kbits)")
    print(f"  -> DSP : 90 Slices Maximum")
    print(f"  -> Freq: 50 MHz (via Clocking Wizard, System 100 MHz)")

    print("\n1. DATASET & CATEGORY BREAKDOWN")
    print("-" * 60)
    print(f"Total Audio Files Processed: {global_total_files}")
    for cat in categories.keys():
        tot = results[cat]['total_files']
        if tot > 0:
            cat_fpga_acc = (results[cat]['fpga_correct'] / tot) * 100
            cat_sw_acc = (results[cat]['sw_correct'] / tot) * 100
            print(f"  -> {cat.capitalize():<8}: {tot:>5} files | FPGA Acc: {cat_fpga_acc:>5.2f}% | SW Acc: {cat_sw_acc:>5.2f}%")

    print("\n2. EXECUTION PERFORMANCE & ARCHITECTURAL EFFICIENCY")
    print("-" * 60)
    print(f"Software Baseline (PC)     : {avg_sw_ms:.4f} ms per inference")
    print(f"  -> PC Cycle Cost         : ~{avg_sw_cycles:,.0f} CPU cycles")
    print(f"FPGA Pure Compute Latency  : {avg_fpga_ms:.4f} ms per inference")
    print("  -> FPGA Cycle Breakdown  :")
    print(f"       - Uart Stream       : {avg_fpga_stream:,.0f} cycles")
    print(f"       - Loader            : {avg_fpga_loader:,.0f} cycles")
    print(f"       - Inference         : {avg_fpga_cycles:,.0f} cycles")
    print(f"       - Write-Back        : {avg_fpga_wb:,.0f} cycles")
    print(f"       - Total Accelerator : {avg_fpga_accel:,.0f} cycles")
    print(f"UART I/O Transfer Time     : {uart_overhead_ms:.4f} ms")
    print(f"I/O Bottleneck Percentage  : {uart_overhead_pct:.1f}% of total End-to-End time")
    print(f"FPGA End-to-End Latency    : {avg_fpga_uart_ms:.4f} ms ({fpga_ips:.1f} IPS includes UART)")
    print(f"Raw Time Acceleration      : {overall_speedup:.4f}x Faster than PC")
    if cycle_ratio > 0:
        print(f"Architectural Efficiency   : PC requires {cycle_ratio:.2f}x as many clock cycles as FPGA Inference")

    print("\n3. ACCURACY & HARDWARE-SOFTWARE EQUIVALENCE")
    print("-" * 60)
    print(f"Absolute FPGA Accuracy     : {fpga_accuracy:.2f}%")
    print(f"  -> Correct: {global_fpga_correct} | False: {global_fpga_false}")
    print(f"Absolute PC SW Accuracy    : {sw_accuracy:.2f}%")
    print(f"  -> Correct: {global_sw_correct} | False: {global_sw_false}")

    print(f"\nBit-Accurate Equivalence   : {hw_sw_equivalence:.2f}% ({global_mismatches} Total Mismatches)")
    print("Mismatch Breakdown:")
    print(f"  -> FPGA Correct, SW Wrong     : {global_mismatch_fpga_t_sw_f}")
    print(f"  -> FPGA Wrong, SW Correct     : {global_mismatch_fpga_f_sw_t}")
    print(f"  -> Both Wrong (Diff Answers)  : {global_mismatch_both_f}")

    print("\nFPGA Confusion Matrix (Expected vs Predicted):")
    headers = "".join([f"{p[:7]:>9}" for p in pred_categories])
    # Add a TOTAL column header
    print(f"         {headers} |   TOTAL")
    print(f"---------+{'-'*len(headers)}-+--------")

    # Print each row with its specific total file count
    for actual in categories.keys():
        if results[actual]['total_files'] > 0:
            row_str = "".join([f"{fpga_cm[actual][p]:>9}" for p in pred_categories])
            tot = results[actual]['total_files']
            print(f"{actual[:7]:>8} |{row_str} | {tot:>7}")

    # Calculate and print the total number of times the FPGA predicted each category
    col_totals = {p: sum(fpga_cm[a][p] for a in categories.keys()) for p in pred_categories}
    col_str = "".join([f"{col_totals[p]:>9}" for p in pred_categories])

    print(f"---------+{'-'*len(headers)}-+--------")
    print(f" PREDICT |{col_str} | {global_total_files:>7}")

    print("\n" + "="*60 + "\n")

if __name__ == "__main__":
    test_fpga_and_software()
