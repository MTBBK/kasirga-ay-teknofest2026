import serial
import time
import sys
import os
import subprocess

MAIN_UART_PORT = '/dev/ttyUSB2'
STREAM_UART_PORT = '/dev/ttyUSB0'
BAUD_RATE = 921600

def main():
    if len(sys.argv) < 2:
        print("Kullanım: python3 send_ai_data.py <dosya_yolu>")
        sys.exit(1)

    input_file = sys.argv[1]

    if not os.path.exists(input_file):
        print(f"[HATA] Dosya bulunamadı: {input_file}")
        sys.exit(1)

    _, ext = os.path.splitext(input_file)
    ext = ext.lower()

    mem_file_to_read = input_file

    if ext == '.wav':
        print(f"[PC] Ses dosyası tespit edildi. Bellek (MEM) dosyasına çeviriliyor...")

        # Define output .mem filename based on input filename
        mem_file_to_read = os.path.splitext(input_file)[0] + ".mem"

        try:
            # Execute the conversion script
            subprocess.run([sys.executable, "tflm_wav_to_mem.py", input_file, mem_file_to_read], check=True)
            print(f"[PC] Çeviri başarılı. Oluşturulan dosya: {mem_file_to_read}")
        except subprocess.CalledProcessError as e:
            print(f"[HATA] tflm_wav_to_mem.py çalıştırılırken hata oluştu: {e}")
            sys.exit(1)

    # Handle valid direct files
    elif ext not in ['.mem', '.txt']:
        print(f"[HATA] Desteklenmeyen dosya formatı: {ext}. Lütfen .wav, .mem veya .txt kullanın.")
        sys.exit(1)

    # Read the data from the .mem / .txt file
    data_bytes = bytearray()
    try:
        with open(mem_file_to_read, "r") as f:
            for line in f:
                line = line.strip()
                if line:
                    data_bytes.append(int(line, 16))
        print(f"[PC] Dosyadan {len(data_bytes)} bayt veri okundu.")
    except FileNotFoundError:
        print(f"[HATA] {mem_file_to_read} dosyası bulunamadı!")
        return
    except ValueError:
        print(f"[HATA] {mem_file_to_read} dosyası geçersiz veri içeriyor. Değerler HEX formatında olmalı!")
        return

    try:
        main_serial = serial.Serial(MAIN_UART_PORT, BAUD_RATE)
        stream_serial = serial.Serial(STREAM_UART_PORT, BAUD_RATE)

        print("[PC] FPGA'den 'READY' tetiği bekleniyor...")

        start_time = 0 # Kronometre değişkenini başlatıyoruz

        while True:
            line = main_serial.readline().decode('utf-8', errors='ignore').strip()
            if line:
                print(f"[FPGA Log]: {line}")

            if line == "READY":
                print("[PC] UART Stream üzerinden veri basılıyor...")
                # READY geldiği an yüksek hassasiyetli kronometreyi başlat
                start_time = time.perf_counter()
                break

        chunk_size = 32 # Veriyi 32 baytlık paketlere bölüyoruz
        for i in range(0, len(data_bytes), chunk_size):
            chunk = data_bytes[i : i + chunk_size]
            stream_serial.write(chunk)
            stream_serial.flush()
            #time.sleep(0.002) # FPGA'in veriyi hazmetmesi için 2 milisaniye nefes payı

        print("[PC] Veri aktarımı bitti! FPGA işleme başlıyor...")
        # --------------------------------------------

        # İlk sonucu aldığımızda süreyi sadece bir kere basmak için kontrol bayrağı
        is_time_printed = False

        while True:
            result_line = main_serial.readline().decode('utf-8', errors='ignore').strip()
            if result_line:
                # Sonuç geldiği an süreyi durdur ve hesapla
                if not is_time_printed:
                    end_time = time.perf_counter()
                    elapsed_time = end_time - start_time
                    print(f"\n[PC] --- KRONOMETRE SONUCU ---")
                    print(f"[PC] Geçen Toplam Süre (READY -> İlk Sonuç): {elapsed_time:.4f} saniye\n")
                    is_time_printed = True

                print(f"[FPGA Sonuç]: {result_line}")

    except Exception as e:
        print(f"[SİSTEM HATASI]: {e}")

if __name__ == "__main__":
    main()
