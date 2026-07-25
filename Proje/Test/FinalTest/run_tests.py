import os
import sys
import glob
import subprocess
import serial
import time

# UART configurations matching your environment
MAIN_UART_PORT = '/dev/ttyUSB2'
STREAM_UART_PORT = '/dev/ttyUSB0'
BAUD_RATE = 921600

def test_fpga_accelerator():
    try:
        # Open serial connections outside the loop to avoid resetting the FPGA
        main_serial = serial.Serial(MAIN_UART_PORT, BAUD_RATE, timeout=1)
        stream_serial = serial.Serial(STREAM_UART_PORT, BAUD_RATE, timeout=1)
    except Exception as e:
        print(f"[SYSTEM ERROR] Could not open serial ports: {e}")
        return

    # Define the expected binary and hex outputs for each category
    categories = {
        "yes": {"bin": "0111", "hex": "7"},
        "no":  {"bin": "1011", "hex": "B"}
    }

    # Tracking dictionaries for true/false counts
    results = {
        "yes": {"true": 0, "false": 0},
        "no":  {"true": 0, "false": 0}
    }

    for category, expected in categories.items():
        wav_files = glob.glob(f"{category}/*.wav")
        print(f"\n{'='*40}")
        print(f"--- Starting tests for '{category}' folder ({len(wav_files)} files) ---")
        print(f"{'='*40}")

        for wav_file in wav_files:
            mem_file = "ai_data.txt"

            # 1. Generate mem file using the tflm script
            try:
                # Calls: python tflm_wav_to_mem.py <input.wav> <output.mem>
                subprocess.run(
                    [sys.executable, "tflm_wav_to_mem.py", wav_file, mem_file],
                    check=True,
                    stdout=subprocess.DEVNULL # Keeps the console clean from script prints
                )
            except subprocess.CalledProcessError:
                print(f"[ERROR] Failed to generate mem file for {wav_file}")
                continue

            # 2. Read the generated hex data
            data_bytes = bytearray()
            with open(mem_file, "r") as f:
                for line in f:
                    line = line.strip()
                    if line:
                        data_bytes.append(int(line, 16))

            # 3. Wait for the FPGA "READY" trigger
            ready_received = False
            while not ready_received:
                line = main_serial.readline().decode('utf-8', errors='ignore').strip()
                if "READY" in line:
                    ready_received = True

            # 4. Stream data to FPGA in 32-byte chunks with 2ms delays
            chunk_size = 32
            for i in range(0, len(data_bytes), chunk_size):
                chunk = data_bytes[i : i + chunk_size]
                stream_serial.write(chunk)
                stream_serial.flush()
                time.sleep(0.002)  # FPGA digestion buffer

            # 5. Await and evaluate the result
            result_received = False
            while not result_received:
                result_line = main_serial.readline().decode('utf-8', errors='ignore').strip()

                if result_line:
                    # Check if the result line contains any of the known valid outputs
                    if any(val in result_line.upper() for val in ["0111", "1011", "7", "B"]):
                        # Verify if it matches the EXPECTED output
                        if expected["bin"] in result_line or expected["hex"] in result_line.upper():
                            results[category]["true"] += 1
                            print(f"[PASS] {wav_file} -> Recognized as '{category}' ({result_line})")
                        else:
                            results[category]["false"] += 1
                            print(f"[FAIL] {wav_file} -> Misclassified ({result_line})")

                        result_received = True

                    # Edge case: FPGA resets or misses sending a result and loops back to READY
                    elif "READY" in result_line:
                        print(f"[WARN] Got unexpected READY instead of result for {wav_file}")
                        break

    # Print the final calculated statistics
    print("\n" + "="*40)
    print("FINAL ACCURACY RESULTS")
    print("="*40)

    for cat in categories.keys():
        t_count = results[cat]['true']
        f_count = results[cat]['false']
        total = t_count + f_count
        accuracy = (t_count / total * 100) if total > 0 else 0

        print(f"Directory '{cat}':")
        print(f"  - Correct (True)  : {t_count}")
        print(f"  - Incorrect (False): {f_count}")
        print(f"  - Accuracy        : {accuracy:.2f}%\n")

if __name__ == "__main__":
    test_fpga_accelerator()
