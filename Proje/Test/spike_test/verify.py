import re

def parse_spike(filename):
    results = []
    pattern = re.compile(r"0x([0-9a-fA-F]+)\s+\(0x([0-9a-fA-F]+)\)")
    with open(filename, 'r') as f:
        for line in f:
            match = pattern.search(line)
            if match:
                pc_val = int(match.group(1), 16)
                opcode = match.group(2).lower()
                if pc_val >= 0x80000000:
                    normalized_pc = hex(pc_val - 0x80000000).replace('0x', '').zfill(8)
                    results.append((normalized_pc, opcode))
    return results

def parse_vivado(filename):
    """Vivado logundan TRACER: ön ekini temizleyerek PC ve Opcode çeker."""
    results = []
    # Yeni format: TRACER: PC=0x00000000 OP=0x80020137
    pattern = re.compile(r"PC=0x([0-9a-fA-F]+)\s+OP=0x([0-9a-fA-F]+)")
    
    with open(filename, 'r') as f:
        for line in f:
            match = pattern.search(line)
            if match:
                pc = match.group(1).lower().zfill(8)
                op = match.group(2).lower().zfill(8)
                results.append((pc, op))
    return results

def compare():
    try:
        spike_data = parse_spike('spike.log')
        vivado_data = parse_vivado('vivado_trace.log')
    except FileNotFoundError as e:
        print(f"Hata: {e.filename} bulunamadi!")
        return

    print(f"--- Dogrulama Basladi ---")
    print(f"Spike (Normalize) komut: {len(spike_data)}")
    print(f"Vivado komut: {len(vivado_data)}")
    print("-" * 30)

    limit = min(len(spike_data), len(vivado_data))
    mismatches = 0

    for i in range(limit):
        s_pc, s_op = spike_data[i]
        v_pc, v_op = vivado_data[i]

        if s_pc != v_pc or s_op != v_op:
            print(f"[!] HATA: Adim {i}")
            print(f"    BEKLENEN (Spike) : PC=0x{s_pc}, OP=0x{s_op}")
            print(f"    GERCEK   (Vivado): PC=0x{v_pc}, OP=0x{v_op}")
            mismatches += 1
            if mismatches >= 5:
                print("\nCok fazla hata bulundu, islem durduruldu.")
                break

    if mismatches == 0 and limit > 0:
        print("\n[SUCCESS] TEBRIKLER! Donanim ve Yazilim simülasyonlari birebir uyusuyor.")
    elif limit == 0:
        print("\n[?] UYARI: Karsilastirilacak veri bulunamadi. Loglari kontrol edin.")
    else:
        print(f"\n[FAILED] Toplam {mismatches} adimda uyumsuzluk tespit edildi.")

if __name__ == "__main__":
    compare()
