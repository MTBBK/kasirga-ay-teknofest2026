#!/usr/bin/env python3
"""
CV32E40P JTAG / Debug Modulu -- Otomatik Dogrulama Scripti
=============================================================

Bu script, calisan bir OpenOCD oturumuna (basys3.cfg ile baslatilmis)
TCL RPC arayuzu (varsayilan port 6666) uzerinden baglanir ve RISC-V
Debug Specification'in temel mekanizmalarini sirayla test eder:

  1) Halt / Resume        -- cekirdegin gercekten durup durmadigi
  2) GPR okuma/yazma      -- register dosyasina tam kontrol
  3) Bellek okuma/yazma   -- mww/mdw, program buffer uzerinden
  4) Debug CSR'lar        -- dcsr.cause alaninin dogru degismesi
  5) Tek adim (step)      -- dcsr.cause=4 ile kanitlanmis step
  6) Donanimsal breakpoint -- trigger modulu, dcsr.cause=2

Kullanim:
  1) Ayri bir terminalde OpenOCD'yi calistirin:
       sudo ./xpack-openocd-0.12.0-4/bin/openocd -f basys3.cfg
     "Listening on port 6666 for tcl connections" satirini gorene
     kadar bekleyin.
  2) Bu scripti calistirin:
       python3 jtag_dogrulama.py

Hicbir harici kutuphane gerektirmez (sadece Python standart kutuphanesi).
"""

import socket
import re
import sys
import time

# ----------------------------------------------------------------
# Ayarlar
# ----------------------------------------------------------------
OPENOCD_HOST = "localhost"
OPENOCD_PORT = 6666          # OpenOCD TCL RPC portu
STEP_PAUSE = 0.6              # Her test arasi bekleme (demo okunabilirligi icin)
DATA_MEM_BASE = 0x00003000    # top.sv: data_memory BASE_ADDRESS
WRITE_TEST_OFFSET = 0x40      # "merhaba" dizesini ezmemek icin ayri bir adres

TERM = b"\x1a"  # OpenOCD TCL RPC mesaj sonlandiricisi


# ----------------------------------------------------------------
# OpenOCD TCL RPC istemcisi
# ----------------------------------------------------------------
class OpenOCDClient:
    def __init__(self, host=OPENOCD_HOST, port=OPENOCD_PORT, timeout=20):
        self.sock = socket.create_connection((host, port), timeout=timeout)
        self.sock.settimeout(timeout)

    def command(self, cmd: str) -> str:
        """Bir OpenOCD komutu gonderir, tam metin cevabini dondurur."""
        self.sock.sendall(cmd.encode("utf-8") + TERM)
        buf = b""
        while not buf.endswith(TERM):
            chunk = self.sock.recv(4096)
            if not chunk:
                break
            buf += chunk
        return buf.rstrip(TERM).decode("utf-8", errors="replace").strip()

    def close(self):
        try:
            self.sock.close()
        except OSError:
            pass


# ----------------------------------------------------------------
# Yardimci fonksiyonlar
# ----------------------------------------------------------------
def extract_hex(text: str):
    """'pc (/32): 0x00001078' gibi bir cevaptan ilk hex degeri cikarir."""
    m = re.search(r"0x([0-9a-fA-F]+)", text)
    if not m:
        return None
    return int(m.group(1), 16)


def extract_mdw_words(text: str):
    """'0x00003000: 6872656d 00616261 ...' formatindan word listesi cikarir."""
    m = re.search(r"0x[0-9a-fA-F]+:\s*((?:[0-9a-fA-F]{8}\s*)+)", text)
    if not m:
        return []
    return [int(w, 16) for w in m.group(1).split()]


DCSR_CAUSE_NAMES = {
    0: "(tanimsiz)",
    1: "ebreak komutu",
    2: "Trigger modulu (donanimsal breakpoint)",
    3: "haltreq (debugger'in halt istegi)",
    4: "step (tek adim mekanizmasi)",
    5: "resethaltreq",
    6: "halt group",
}


def dcsr_cause(dcsr_value: int) -> int:
    return (dcsr_value >> 6) & 0x7


def words_to_ascii(words):
    """32-bit word listesini little-endian ASCII string'e cevirir."""
    out = bytearray()
    for w in words:
        out += w.to_bytes(4, byteorder="little")
    try:
        s = out.split(b"\x00")[0].decode("ascii")
    except UnicodeDecodeError:
        s = repr(out)
    return s


# ----------------------------------------------------------------
# Demo yazdirma yardimcilari
# ----------------------------------------------------------------
PASS = "\033[92m[BASARILI]\033[0m"
FAIL = "\033[91m[HATA]    \033[0m"
INFO = "\033[94m[BILGI]   \033[0m"

results = []  # (test_adi, basarili_mi)


def banner(title):
    print()
    print("=" * 70)
    print(f"  {title}")
    print("=" * 70)
    time.sleep(STEP_PAUSE)


def step_print(label, value, raw=None):
    print(f"    {label}: {value}")
    if raw is not None and (value is None or value == "OKUNAMADI"):
        print(f"        (HAM CEVAP: {raw!r})")
    time.sleep(0.15)


def record(name, ok):
    results.append((name, ok))
    print(PASS if ok else FAIL, name)
    time.sleep(STEP_PAUSE)


# ----------------------------------------------------------------
# Testler
# ----------------------------------------------------------------
def test_connection(oc):
    banner("0) Baglanti ve Cekirdek Tanima")
    idcode_line = oc.command("riscv.cpu curstate")
    step_print("Hedef durumu", idcode_line)
    record("OpenOCD TCL RPC baglantisi kuruldu", True)


def test_halt_resume(oc):
    banner("1) HALT / RESUME -- Cekirdek gercekten duruyor mu?")
    oc.command("halt")
    pc1 = extract_hex(oc.command("reg pc"))
    step_print("Halt sonrasi PC (1. okuma)", hex(pc1) if pc1 is not None else "OKUNAMADI")
    time.sleep(1.0)
    pc2 = extract_hex(oc.command("reg pc"))
    step_print("1 saniye sonra PC (2. okuma)", hex(pc2) if pc2 is not None else "OKUNAMADI")

    ok = (pc1 is not None) and (pc1 == pc2)
    print(INFO, "PC degismedi -> cekirdek gercekten donmus durumda"
          if ok else "PC farkli/okunamadi -> beklenmeyen durum")
    record("Halt sonrasi PC kararli (cekirdek gercekten durdu)", ok)
    return pc1


def test_gpr(oc):
    banner("2) GPR (Genel Amacli Register) Okuma/Yazma")

    reg_name = "t0"  # x5'in ABI karsiligi
    test_val = 0xAABBCCDD

    write_resp = oc.command(f"reg {reg_name} 0x{test_val:08x}")
    read_resp = oc.command(f"reg {reg_name}")
    readback = extract_hex(read_resp)

    step_print(f"{reg_name} (x5) icin yazilan deger", hex(test_val))
    step_print(f"{reg_name} (x5) icin geri okunan",
               hex(readback) if readback is not None else "OKUNAMADI",
               raw=read_resp if readback is None else None)
    if write_resp.strip():
        step_print("Yazma komutunun ham cevabi", repr(write_resp))

    if readback is None:
        # Tanili tum register isimlerini listele (teshis icin)
        reg_list = oc.command("reg")
        print("    -- Tanili register isimleri (teshis icin) --")
        for line in reg_list.splitlines()[:20]:
            print(f"       {line}")
        if len(reg_list.splitlines()) > 20:
            print(f"       ... (+{len(reg_list.splitlines())-20} satir daha)")

    record(f"GPR yazma/okuma dogru ({reg_name} / x5)", readback == test_val)


def test_memory(oc):
    banner("3) Bellek Okuma/Yazma (mww / mdw, program buffer uzerinden)")

    # 3a) Programin kendi verisini, DEGISTIRMEDEN oku (kanit: gercek program verisi)
    resp = oc.command(f"mdw 0x{DATA_MEM_BASE:08x} 4")
    words = extract_mdw_words(resp)
    text = words_to_ascii(words) if words else ""
    step_print(f"0x{DATA_MEM_BASE:08x} adresinden okunan (ham)", resp)
    step_print("Ayni verinin ASCII yorumu", repr(text))
    record("Programin kendi verisi okunabildi", len(words) == 4)

    # 3b) Ayri bir adrese yaz/oku (programin verisini bozmadan)
    write_addr = DATA_MEM_BASE + WRITE_TEST_OFFSET
    test_val = 0xCAFEBABE
    oc.command(f"mww 0x{write_addr:08x} 0x{test_val:08x}")
    resp2 = oc.command(f"mdw 0x{write_addr:08x} 1")
    words2 = extract_mdw_words(resp2)
    readback = words2[0] if words2 else None
    step_print(f"0x{write_addr:08x} adresine yazilan", hex(test_val))
    step_print(f"0x{write_addr:08x} adresinden geri okunan",
               hex(readback) if readback is not None else "OKUNAMADI")
    record("Bellek yazma/okuma dogru (data_memory)", readback == test_val)


def test_debug_csrs(oc):
    banner("4) Debug CSR'lar (dcsr / dpc) -- Halt Sebebi Dogrulamasi")
    oc.command("halt")
    dcsr = extract_hex(oc.command("reg dcsr"))
    dpc = extract_hex(oc.command("reg dpc"))
    cause = dcsr_cause(dcsr) if dcsr is not None else None
    step_print("dcsr", hex(dcsr) if dcsr is not None else "OKUNAMADI")
    step_print("dcsr.cause", f"{cause} -> {DCSR_CAUSE_NAMES.get(cause, '?')}")
    step_print("dpc", hex(dpc) if dpc is not None else "OKUNAMADI")
    record("dcsr.cause = haltreq (3), halt komutuyla girildi", cause == 3)
    return dpc


def test_single_step(oc, pc_before):
    banner("5) Tek Adim (Single-Step) -- dcsr.step Mekanizmasi")
    step_print("Step ONCESI PC", hex(pc_before) if pc_before is not None else "?")
    oc.command("step")
    dcsr_after = extract_hex(oc.command("reg dcsr"))
    pc_after = extract_hex(oc.command("reg pc"))
    cause_after = dcsr_cause(dcsr_after) if dcsr_after is not None else None

    step_print("Step SONRASI dcsr", hex(dcsr_after) if dcsr_after is not None else "OKUNAMADI")
    step_print("Step SONRASI dcsr.cause",
               f"{cause_after} -> {DCSR_CAUSE_NAMES.get(cause_after, '?')}")
    step_print("Step SONRASI PC", hex(pc_after) if pc_after is not None else "?")

    advanced = (pc_before is not None and pc_after is not None and pc_after != pc_before)
    record("dcsr.cause = step (4), step mekanizmasi kanitlandi", cause_after == 4)
    record("PC tek komut ilerledi", advanced)
    return pc_after


def test_hw_breakpoint(oc):
    banner("6) Donanimsal Breakpoint (Trigger Modulu)")

    tselect = extract_hex(oc.command("reg tselect"))
    tdata1 = extract_hex(oc.command("reg tdata1"))
    step_print("tselect", hex(tselect) if tselect is not None else "OKUNAMADI")
    step_print("tdata1 (trigger yapilandirmasi)", hex(tdata1) if tdata1 is not None else "OKUNAMADI")

    # Gecerli, canli bir PC elde etmek icin kisa sure calistir, sonra durdur.
    oc.command("resume")
    time.sleep(0.3)
    oc.command("halt")
    bp_addr = extract_hex(oc.command("reg pc"))
    step_print("Breakpoint icin secilen (canli) adres", hex(bp_addr) if bp_addr else "?")

    if bp_addr is None:
        record("Donanimsal breakpoint testi (adres alinamadi)", False)
        return

    oc.command(f"bp 0x{bp_addr:08x} 4 hw")
    oc.command("resume")
    time.sleep(0.5)

    pc_hit = extract_hex(oc.command("reg pc"))
    dcsr_hit = extract_hex(oc.command("reg dcsr"))
    cause_hit = dcsr_cause(dcsr_hit) if dcsr_hit is not None else None

    step_print("Breakpoint sonrasi PC", hex(pc_hit) if pc_hit is not None else "OKUNAMADI")
    step_print("Breakpoint sonrasi dcsr.cause",
               f"{cause_hit} -> {DCSR_CAUSE_NAMES.get(cause_hit, '?')}")

    oc.command(f"rbp 0x{bp_addr:08x}")

    hit_ok = (pc_hit == bp_addr)
    cause_ok = (cause_hit == 2)
    record("Breakpoint tam adreste durdu", hit_ok)
    record("dcsr.cause = trigger (2), donanimsal breakpoint kanitlandi", cause_ok)


def final_resume(oc):
    banner("7) Kapanis -- Cekirdek Normal Calismaya Devam Ediyor")
    oc.command("resume")
    curstate = oc.command("riscv.cpu curstate")
    step_print("Hedef durumu", curstate)
    record("Cekirdek serbest birakildi (resume)", "running" in curstate.lower())


def print_summary():
    banner("OZET")
    total = len(results)
    passed = sum(1 for _, ok in results if ok)
    for name, ok in results:
        print(f"  {PASS if ok else FAIL} {name}")
    print()
    print(f"  TOPLAM: {passed}/{total} test basarili")
    if passed == total:
        print("  \033[92m>>> TUM TESTLER BASARILI <<<\033[0m")
    else:
        print("  \033[91m>>> BAZI TESTLER BASARISIZ, YUKARIYA BAKIN <<<\033[0m")
    print()


# ----------------------------------------------------------------
# Ana akis
# ----------------------------------------------------------------
def main():
    print()
    print("#" * 70)
    print("#  CV32E40P JTAG / Debug Modulu -- Otomatik Dogrulama Scripti")
    print("#" * 70)
    print(f"\nOpenOCD TCL RPC'ye baglaniliyor ({OPENOCD_HOST}:{OPENOCD_PORT})...")

    try:
        oc = OpenOCDClient()
    except (ConnectionRefusedError, OSError) as e:
        print(f"\n{FAIL} OpenOCD'ye baglanilamadi: {e}")
        print("    Once 'openocd -f basys3.cfg' calistigindan emin olun.")
        sys.exit(1)

    print(f"{PASS} Baglanti kuruldu.\n")
    time.sleep(STEP_PAUSE)

    try:
        test_connection(oc)
        pc_after_halt = test_halt_resume(oc)
        test_gpr(oc)
        test_memory(oc)
        dpc = test_debug_csrs(oc)
        test_single_step(oc, dpc if dpc is not None else pc_after_halt)
        test_hw_breakpoint(oc)
        final_resume(oc)
    except Exception as e:
        print(f"\n{FAIL} Beklenmeyen hata: {e}")
    finally:
        print_summary()
        oc.close()


if __name__ == "__main__":
    main()
