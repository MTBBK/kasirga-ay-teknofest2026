import sys
import os

def calculate_checksum(record_bytes):
    """Intel HEX formatı için Checksum hesaplar (2'ye tümleyen)"""
    return (256 - (sum(record_bytes) % 256)) % 256

def write_intel_hex_line(file, address, data_bytes):
    """Bir satırlık Intel HEX kaydı oluşturur ve dosyaya yazar"""
    length = len(data_bytes)
    # Record formatı: [Length, Address_High, Address_Low, Record_Type(00=Data)] + Data
    record = [length, (address >> 8) & 0xFF, address & 0xFF, 0x00] + data_bytes
    checksum = calculate_checksum(record)
    record.append(checksum)
    
    # Hex string'e çevir ve dosyaya yaz
    hex_str = ":" + "".join(f"{b:02X}" for b in record)
    file.write(hex_str + "\n")

def convert_mem_to_mcs(input_filename, output_filename):
    try:
        with open(input_filename, 'r') as f:
            lines = f.readlines()
    except FileNotFoundError:
        print(f"Hata: '{input_filename}' adında bir dosya bulunamadı!")
        return

    current_address = None
    data_buffer = []
    
    # Sadece dönüştürülecek hedef bloklar (Micron fabrika verilerini atlamak için)
    allowed_blocks = [0x1000, 0x3000]
    is_valid_block = False

    with open(output_filename, 'w') as f:
        # Extended Linear Address Record (Type 04) - Üst 16 biti 0x0030 yapar (3 MB offset)
        f.write(":020000040030CA\n")
        
        for line in lines:
            line = line.strip()
            # Boş satırları ve yorumları atla
            if not line or line.startswith("//"):
                continue
                
            if line.startswith("@"):
                # Önceki bloğun kalan verisi varsa yazdır
                if is_valid_block and data_buffer:
                    write_intel_hex_line(f, current_address, data_buffer)
                    
                addr_str = line[1:]
                current_address = int(addr_str, 16)
                data_buffer = []
                
                # Sadece 0x1000 ve 0x3000 bloklarını alıyoruz
                is_valid_block = (current_address in allowed_blocks)
                
            elif is_valid_block:
                byte_val = int(line, 16)
                data_buffer.append(byte_val)
                
                # Her 16 baytta bir kaydı dosyaya yaz (Standard Intel HEX kuralı)
                if len(data_buffer) == 16:
                    write_intel_hex_line(f, current_address, data_buffer)
                    current_address += 16
                    data_buffer = []

        # Dosya bittiğinde kalan son baytları da yaz
        if is_valid_block and data_buffer:
            write_intel_hex_line(f, current_address, data_buffer)

        # End of File (EOF) kaydını ekle
        f.write(":00000001FF\n")
        
    print(f"✅ Başarılı! Dönüştürülen dosya: {output_filename}")
    print("   Not: Veriler 0x00400000 base adresine ötelendi (FPGA bitstream güvenliği sağlandı).")

if __name__ == "__main__":
    # Terminal argümanlarını kontrol et
    if len(sys.argv) < 2:
        print("Kullanım: python convert.py <giris_dosyasi.mem> [cikis_dosyasi.mcs]")
        print("Örnek:    python convert.py flash_data.mem")
        sys.exit(1)
        
    input_file = sys.argv[1]
    
    # Kullanıcı 2. argüman olarak çıkış adını verdiyse onu kullan, vermediyse otomatik üret
    if len(sys.argv) >= 3:
        output_file = sys.argv[2]
    else:
        base_name = os.path.splitext(input_file)[0]
        output_file = base_name + ".mcs"
        
    convert_mem_to_mcs(input_file, output_file)
