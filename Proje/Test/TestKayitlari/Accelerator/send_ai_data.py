import serial
import time

MAIN_UART_PORT = '/dev/ttyUSB2'   
STREAM_UART_PORT = '/dev/ttyUSB0' 
BAUD_RATE = 921600                

def main():
    data_bytes = bytearray()
    try:
        with open("ai_data.txt", "r") as f:
            for line in f:
                line = line.strip() 
                if line:
                    data_bytes.append(int(line, 16))
        print(f"[PC] Dosyadan {len(data_bytes)} bayt veri okundu.")
    except FileNotFoundError:
        print("[HATA] ai_data.txt dosyasi bulunamadi!")
        return

    try:
        main_serial = serial.Serial(MAIN_UART_PORT, BAUD_RATE, timeout=0.1)
        stream_serial = serial.Serial(STREAM_UART_PORT, BAUD_RATE)
        
        time.sleep(1)
        main_serial.reset_input_buffer()
        stream_serial.reset_input_buffer()
        
        # MIMIC THE HARNESS: Wait 50ms to let the MCU print READY and open the AXI stream
        print("[PC] FPGA'in hazirlanmasi icin 50ms bekleniyor...")
        time.sleep(0.05) 
        
        start_time = time.perf_counter()

        print("[PC] Stream UART uzerinden veri basiliyor (Preamble YOK)...")
        
        chunk_size = 1024 
        for i in range(0, len(data_bytes), chunk_size):
            chunk = data_bytes[i : i + chunk_size]
            stream_serial.write(chunk)
            stream_serial.flush()
            
        print("[PC] Veri aktarimi bitti! FPGA isleme basliyor...")
        
        is_time_printed = False 
        
        while True:
            result_line = main_serial.readline().decode('utf-8', errors='ignore').strip()
            if result_line:
                if not is_time_printed and "Result is:" in result_line:
                    end_time = time.perf_counter()
                    elapsed_time = end_time - start_time
                    print(f"\n[PC] --- KRONOMETRE SONUCU ---")
                    print(f"[PC] Gecen Toplam Sure: {elapsed_time:.4f} saniye\n")
                    is_time_printed = True
                 
                print(f"[FPGA Log/Sonuc]: {result_line}")

    except Exception as e:
        print(f"[SISTEM HATASI]: {e}")

if __name__ == "__main__":
    main()
