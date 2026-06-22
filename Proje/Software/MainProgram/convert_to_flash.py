import os

def process_verilog_mem(input_file):
    if not os.path.exists(input_file):
        print(f"Uyari: '{input_file}' bulunamadi. Atlaniyor...")
        return 0, []

    raw_bytes = []
    
    # 1. Objcopy dosyasındaki tüm ham baytları tek bir listede topla
    with open(input_file, 'r') as f_in:
        for line in f_in:
            line = line.strip()
            # Boş satırları veya @ ile başlayan adres etiketlerini atla
            if not line or line.startswith('@'):
                continue
            # Satırdaki boşlukla ayrılmış tüm baytları listeye ekle (Örn: ['37', '51', '00', '00'])
            raw_bytes.extend(line.split())

    formatted_bytes = []
    word_count = 0

    # 2. Ham baytları 4'erli gruplar (32-bit kelimeler) halinde işle
    # Eğer eksik bayt kaldıysa 4'ün katına tamamla
    while len(raw_bytes) % 4 != 0:
        raw_bytes.append("00")

    for i in range(0, len(raw_bytes), 4):
        # 4 baytlık kelimeyi al (Little-Endian bayt dizilimi gelir: örn ['37', '51', '00', '00'])
        chunk = raw_bytes[i:i+4]
        
        # QSPI kontrolcüsünün shift mantığı için kelimeyi ters çevir (Big-Endian yap: ['00', '00', '51', '37'])
        chunk.reverse()
        
        # Büyük harfe çevirerek ana listeye ekle
        formatted_bytes.extend([b.upper().zfill(2) for b in chunk])
        word_count += 1

    return word_count, formatted_bytes

def count_to_hex_bytes(count):
    """Kelime sayısını 32-bit Big-Endian formatında 4 byte'a böler."""
    hex_str = format(count, '08X')
    return [hex_str[0:2], hex_str[2:4], hex_str[4:6], hex_str[6:8]]

def generate_flash_mem():
    output_file = "flash.mem"
    
    # GCC/Objcopy'den çıkan gerçek .mem dosyalarını işle
    ins_count, ins_bytes = process_verilog_mem("instruction.mem")
    data_count, data_bytes = process_verilog_mem("data.mem")
    
    with open(output_file, 'w') as f_out:
        
        # --- Buyruk Belleği (Instruction) Bölümü ---
        f_out.write("//--- 0x1000 Adresinden İtibaren Buyruk Belleği (Instructions) ---\n")
        f_out.write("@1000\n")
        if ins_count > 0:
            # Otomatik hesaplanan Word Count'u en başa 4 byte olarak ekle
            for b in count_to_hex_bytes(ins_count):
                f_out.write(f"{b}\n")
            # Gerçek buyruk baytlarını yaz
            for b in ins_bytes:
                f_out.write(f"{b}\n")
        f_out.write("\n")
        
        # --- Veri Belleği (Data) Bölümü ---
        f_out.write("//--- 0x3000 Adresinde Veri Belleği (Data Memory) ---\n")
        f_out.write("@3000\n")
        if data_count > 0:
            # Otomatik hesaplanan Word Count'u en başa 4 byte olarak ekle
            for b in count_to_hex_bytes(data_count):
                f_out.write(f"{b}\n")
            # Gerçek veri baytlarını yaz
            for b in data_bytes:
                f_out.write(f"{b}\n")
        f_out.write("\n")
        
        # --- Micron Fabrika Verileri ---
        micron_data = """//--- Micron Modelinin Kendi İçindeki Fabrika Gereksinimleri ---
@00
00
01
@08
A5
5A
@00FFFE
00
00
@010000
AA
BB
@080000
00
01
02
03
04
@080FFE
80
81
@08F000
90
91
@08FFFE
9E
9F
@090000
10
11
@FFFFFA
0A
0B
0C
0D
0E
0F"""
        f_out.write(micron_data + "\n")

    print(f"Başarılı! {ins_count} gerçek buyruk ve {data_count} veri kelimesi düzeltilerek '{output_file}' dosyasına yazıldı.")

if __name__ == "__main__":
    generate_flash_mem()
