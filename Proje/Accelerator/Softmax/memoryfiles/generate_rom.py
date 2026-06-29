import math
scale = 0.09173192083835602


def generate_rom_files():
    # 1. Exp ROM (.mem) Üretimi
    # Derinlik: 256, Genişlik: 8-bit
    with open("exp_rom.mem", "w") as f_exp:
        for i in range(256):
            # i değeri, (Xi - Xmax) işleminin mutlak değeridir.
            # Gerçek fark negatif olduğu için -i kullanıyoruz ve Scale ile çarpıyoruz.
            real_val = -i * scale
        
            # Üstel fonksiyonu al ve Q0.8 (255) formatına ölçekle
            exp_val = math.exp(real_val)
            rom_val = round(exp_val * 255)
        
            # Hexadecimal olarak yaz (Örn: FF, 0A)
            f_exp.write(f"{rom_val:02X}\n")

    # 2. Reciprocal ROM (.mem) Üretimi
    # Derinlik: 1024, Genişlik: 16-bit
    with open("reciprocal_rom.mem", "w") as f_recip:
        for i in range(1024):
            if i == 0:
                # Toplamın 0 gelmesi teorik olarak imkansızdır (en az 255 olur),
                # ancak sıfıra bölme (division by zero) hatasını önlemek için 0 atıyoruz.
                val = 0 
            else:
                # Matematiksel formül: (255 / S) * 65536
                val = round((255 * 65536) / i)
                
                # 16-bit sınırını (65535) aşarsa donanım taşmasını önlemek için sabitle (Clip)
                if val > 65535:
                    val = 65535
            
            # Verilog readmemh için 16-bit (4 hane) Hexadecimal formatta yaz
            f_recip.write(f"{val:04X}\n")

    print("Başarılı! 'exp_rom.mem' ve 'reciprocal_rom.mem' dosyaları oluşturuldu.")

if __name__ == "__main__":
    generate_rom_files()
