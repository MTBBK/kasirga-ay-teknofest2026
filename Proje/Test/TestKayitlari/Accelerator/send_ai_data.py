import serial
import time

# Portları senin ayarladığın şekilde bıraktım
MAIN_UART_PORT = '/dev/ttyUSB4'   
STREAM_UART_PORT = '/dev/ttyUSB1' 
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
        main_serial = serial.Serial(MAIN_UART_PORT, BAUD_RATE)
        stream_serial = serial.Serial(STREAM_UART_PORT, BAUD_RATE)
        
        print("[PC] FPGA'den 'READY' tetigi bekleniyor...")
        
        start_time = 0 # Kronometre değişkenini başlatıyoruz
        
        while True:
            line = main_serial.readline().decode('utf-8', errors='ignore').strip()
            if line:
                print(f"[FPGA Log]: {line}")
                
            if line == "READY":
                print("[PC] Tetik alindi! Stream UART uzerinden veri basiliyor...")
                # READY geldiği an yüksek hassasiyetli kronometreyi başlat
                start_time = time.perf_counter()
                break

        # --- DEĞİŞEN KRİTİK KISIM (CHUNK MANTIĞI) ---
        chunk_size = 32 # Veriyi 32 baytlık paketlere bölüyoruz
        for i in range(0, len(data_bytes), chunk_size):
            chunk = data_bytes[i : i + chunk_size]
            stream_serial.write(chunk)
            stream_serial.flush()
            time.sleep(0.002) # FPGA'in veriyi hazmetmesi için 2 milisaniye nefes payı
            
        print("[PC] Veri aktarimi bitti! FPGA isleme basliyor...")
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
                    print(f"[PC] Gecen Toplam Sure (READY -> Ilk Sonuc): {elapsed_time:.4f} saniye\n")
                    is_time_printed = True
                 
                print(f"[FPGA Sonuc]: {result_line}")

    except Exception as e:
        print(f"[SISTEM HATASI]: {e}")

if __name__ == "__main__":
    main()
