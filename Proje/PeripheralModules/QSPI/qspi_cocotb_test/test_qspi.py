import cocotb
import logging
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge, ReadOnly, with_timeout
from cocotbext.axi import AxiLiteBus, AxiLiteMaster 

# =================================================================
# LOGLARI DOSYAYA YAZDIRMA AYARI
# =================================================================
sim_log = logging.getLogger("cocotb")
file_handler = logging.FileHandler("simulation_results.log", mode='w')
formatter = logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')
file_handler.setFormatter(formatter)
sim_log.addHandler(file_handler)

# =================================================================
# ENUMLAR VE SABİTLER (DÜZELTİLDİ: Register Modu vs Fiziksel Hat)
# =================================================================
# AXI CCR Register'ına yazılacak mod değerleri
MODE_SINGLE = 1
MODE_DUAL   = 2
MODE_QUAD   = 3

# VIP'nin fiziksel olarak kullanacağı kablo (line) sayıları
L_SINGLE = 1
L_DUAL   = 2
L_QUAD   = 4

ADDR_QSPI_CCR = 0x00090000
ADDR_QSPI_ADR = 0x00090004
ADDR_QSPI_DR  = 0x00090008
ADDR_QSPI_STA = 0x0009000C
ADDR_QSPI_FCR = 0x00090010

def build_ccr(prescaler=2, addr_32=0, width_bytes=4, dummy=0, mode=MODE_SINGLE, cmd=0, clear=0):
    width = (width_bytes - 1) & 0xFF
    return (clear << 31) | (prescaler << 25) | (addr_32 << 24) | (width << 16) | (dummy << 11) | (mode << 8) | cmd

# =================================================================
# AKILLI SANAL FLASH BELLEK (VIP)
# =================================================================
class SmartFlashVIP:
    def __init__(self, dut):
        self.dut = dut
        self.sclk = dut.sclk
        self.io = [dut.qspi_io_0, dut.qspi_io_1, dut.qspi_io_2, dut.qspi_io_3]
        self.memory = {} 
        
    async def recv(self, lines, num_bits):
        result = 0
        cycles = num_bits // lines
        for _ in range(cycles):
            await with_timeout(RisingEdge(self.sclk), 10, "us")
            await ReadOnly() 
            val = 0
            for j in range(lines - 1, -1, -1): 
                bit_val = self.io[j].value
                try:
                    bit = int(bit_val)
                except ValueError:
                    bit = 1 
                val = (val << 1) | bit
            result = (result << lines) | val
        return result

    async def send(self, lines, num_bits, data):
        cycles = num_bits // lines
        for i in range(cycles):
            await with_timeout(FallingEdge(self.sclk), 10, "us")
            chunk = (data >> (num_bits - (i + 1) * lines)) & ((1 << lines) - 1)
            
            if lines == L_SINGLE:
                self.io[0].value = 0 
                self.io[1].value = chunk & 1 
                self.io[2].value = cocotb.binary.BinaryValue("z")
                self.io[3].value = cocotb.binary.BinaryValue("z")
            elif lines == L_DUAL:
                self.io[0].value = chunk & 1
                self.io[1].value = (chunk >> 1) & 1
                self.io[2].value = cocotb.binary.BinaryValue("z")
                self.io[3].value = cocotb.binary.BinaryValue("z")
            else:
                for j in range(4):
                    self.io[j].value = (chunk >> j) & 1

    async def release_bus(self):
        await FallingEdge(self.sclk)
        for j in range(4):
            self.io[j].value = cocotb.binary.BinaryValue("z")

# =================================================================
# YARDIMCI FONKSİYONLAR
# =================================================================
async def setup_test(dut):
    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 20, units="ns").start()) 
    dut.S_AXI_ARESETN.value = 0
    await Timer(100, units='ns')
    dut.S_AXI_ARESETN.value = 1
    await Timer(40, units='ns')
    axi_master = AxiLiteMaster(AxiLiteBus.from_prefix(dut, "S_AXI"), dut.S_AXI_ACLK, dut.S_AXI_ARESETN, reset_active_level=False)
    await axi_master.write(ADDR_QSPI_FCR, (0x03).to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_FCR, (0x00).to_bytes(4, 'little'))
    return axi_master

async def wait_done(axi_master):
    done = False
    for _ in range(2000): 
        status_resp = await axi_master.read(ADDR_QSPI_STA, 4)
        if int.from_bytes(status_resp.data, 'little') & 0x01:
            done = True
            break
        await Timer(50, units='ns')
    assert done, "HATA: FSM 'DONE' sinyalini vermedi (Timeout)!"

async def wait_for_done_and_read(axi_master, dut):
    await wait_done(axi_master)
    await RisingEdge(dut.S_AXI_ACLK)
    await RisingEdge(dut.S_AXI_ACLK)
    read_resp = await axi_master.read(ADDR_QSPI_DR, 4)
    return int.from_bytes(read_resp.data, 'little')

# =================================================================
# TESTLER
# =================================================================

@cocotb.test()
async def Single_Write_Read_Test(dut):
    axi_master = await setup_test(dut)
    vip = SmartFlashVIP(dut)

    async def vip_behavior():
        while True:
            cmd = await vip.recv(L_SINGLE, 8) 
            if cmd == 0x02: 
                addr = await vip.recv(L_SINGLE, 24); data = await vip.recv(L_SINGLE, 32)
                vip.memory[addr] = data
            elif cmd == 0x03: 
                addr = await vip.recv(L_SINGLE, 24)
                await vip.send(L_SINGLE, 32, vip.memory.get(addr, 0xDEADBEEF))
                await vip.release_bus()
                
    vip_task = cocotb.start_soon(vip_behavior())

    test_addr, test_data = 0x000000AA, 0x8899AABB
    await axi_master.write(ADDR_QSPI_ADR, test_addr.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_DR, test_data.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(mode=MODE_SINGLE, cmd=0x02).to_bytes(4, 'little'))
    await wait_done(axi_master) 
    
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(mode=MODE_SINGLE, cmd=0x03).to_bytes(4, 'little'))
    read_data = await wait_for_done_and_read(axi_master, dut)
    
    assert read_data == test_data, f"HATA! Beklenen: {hex(test_data)}, Gelen: {hex(read_data)}"
    vip_task.kill()

@cocotb.test()
async def Quad_Read_Dummy_Test(dut):
    axi_master = await setup_test(dut)
    vip = SmartFlashVIP(dut)
    test_addr, test_data = 0x00000044, 0xFF00FF00
    vip.memory[test_addr] = test_data 
    
    async def vip_behavior():
        while True: 
            cmd = await vip.recv(L_QUAD, 8) 
            if cmd == 0x6B: 
                addr = await vip.recv(L_QUAD, 24)
                for _ in range(8): await RisingEdge(dut.sclk) 
                await vip.send(L_QUAD, 32, vip.memory.get(addr, 0x0))
                await vip.release_bus()
                
    vip_task = cocotb.start_soon(vip_behavior())

    await axi_master.write(ADDR_QSPI_ADR, test_addr.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(dummy=8, mode=MODE_QUAD, cmd=0x6B).to_bytes(4, 'little'))

    read_data = await wait_for_done_and_read(axi_master, dut)
    assert read_data == test_data, f"HATA! Beklenen: {hex(test_data)}, Gelen: {hex(read_data)}"
    vip_task.kill()

@cocotb.test()
async def Advanced_Corner_Cases_Test(dut):
    axi_master = await setup_test(dut)
    vip = SmartFlashVIP(dut)

    # --- 3.1: DUAL MOD KONTROLÜ ---
    dut._log.info(">>> STRES TEST 1: Dual Mod (2 Hat) Okuma...")
    test_addr_dual, test_data_dual = 0x123456, 0xABCDEEFF
    async def dual_logic():
        await FallingEdge(dut.cs) # Senkronizasyon garantisi
        cmd = await vip.recv(L_DUAL, 8) 
        if cmd == 0x3B: 
            addr = await vip.recv(L_DUAL, 24)
            for _ in range(8): await RisingEdge(dut.sclk) 
            await vip.send(L_DUAL, 32, test_data_dual)
            await vip.release_bus()
            
    vip_task_1 = cocotb.start_soon(dual_logic())

    await axi_master.write(ADDR_QSPI_ADR, test_addr_dual.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(dummy=8, mode=MODE_DUAL, cmd=0x3B).to_bytes(4, 'little'))
    res = await wait_for_done_and_read(axi_master, dut)
    assert res == test_data_dual, f"Dual Hata! Beklenen: {hex(test_data_dual)}, Gelen: {hex(res)}"
    vip_task_1.kill()

    # --- 3.2: TEK BYTE (UNALIGNED) OKUMA KONTROLÜ ---
    dut._log.info(">>> STRES TEST 2: Tek Byte (Unaligned) Okuma...")
    test_addr_byte, test_data_byte = 0x778899, 0x55
    async def single_byte_logic():
        await FallingEdge(dut.cs)
        await vip.recv(L_SINGLE, 8); await vip.recv(L_SINGLE, 24) 
        await vip.send(L_SINGLE, 8, test_data_byte) 
        await vip.release_bus()
        
    vip_task_2 = cocotb.start_soon(single_byte_logic())

    await axi_master.write(ADDR_QSPI_ADR, test_addr_byte.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(width_bytes=1, mode=MODE_SINGLE, cmd=0x03).to_bytes(4, 'little'))
    res = await wait_for_done_and_read(axi_master, dut)
    assert (res & 0xFF) == test_data_byte, f"Byte Hata! Beklenen: {hex(test_data_byte)}, Gelen: {hex(res&0xFF)}"
    vip_task_2.kill()

    # --- 3.3: SPAM/OVERFLOW KÖŞE DURUMU KONTROLÜ (2 AŞAMALI TAŞIRMA) ---
    dut._log.info(">>> STRES TEST 3: SPAM/Overflow Testi (2 Aşamalı)...")
    
    async def spam_logic():
        while True:
            await FallingEdge(dut.cs)
            cmd = await vip.recv(L_SINGLE, 8)
            if cmd == 0x03:
                addr = await vip.recv(L_SINGLE, 24)
                for _ in range(100): await vip.send(L_SINGLE, 32, 0xAAAAAAAA) 
                await vip.release_bus()
        
    vip_task_3 = cocotb.start_soon(spam_logic())
    
    # 1. Aşama: FIFO'yu Tamamen Doldur (255 byte)
    await axi_master.write(ADDR_QSPI_ADR, (0x04).to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=0, width_bytes=255, mode=MODE_SINGLE, cmd=0x03).to_bytes(4, 'little'))
    await wait_done(axi_master) 
    
    # 2. Aşama: Doluyken 1 kelime daha okutup taşır
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=0, width_bytes=3, mode=MODE_SINGLE, cmd=0x03).to_bytes(4, 'little'))
    await Timer(5, units='us') 
    
    status_resp = await axi_master.read(ADDR_QSPI_STA, 4)
    status_val = int.from_bytes(status_resp.data, 'little')
    
    rx_overflow = (status_val >> 11) & 0x1
    assert rx_overflow == 1, f"HATA! FIFO taşmasına rağmen RX Overflow bayrağı (bit 11) yanmadı! Status: {hex(status_val)}"
    
    vip_task_3.kill()

@cocotb.test()
async def Prescaler_Sweep_Test(dut):
    axi_master = await setup_test(dut)
    vip = SmartFlashVIP(dut)

    async def vip_behavior():
        while True:
            cmd = await vip.recv(L_SINGLE, 8)
            if cmd == 0x02: 
                addr = await vip.recv(L_SINGLE, 24); data = await vip.recv(L_SINGLE, 32)
                vip.memory[addr] = data
            elif cmd == 0x03: 
                addr = await vip.recv(L_SINGLE, 24)
                await vip.send(L_SINGLE, 32, vip.memory.get(addr, 0x0))
                await vip.release_bus()
                
    vip_task = cocotb.start_soon(vip_behavior())

    addr_0, data_0 = 0x000100, 0x11223344
    await axi_master.write(ADDR_QSPI_ADR, addr_0.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_DR, data_0.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=1, mode=MODE_SINGLE, cmd=0x02).to_bytes(4, 'little'))
    await wait_done(axi_master) 
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=1, mode=MODE_SINGLE, cmd=0x03).to_bytes(4, 'little'))
    res_0 = await wait_for_done_and_read(axi_master, dut)
    assert res_0 == data_0, f"Prescaler=1 Hatası! Beklenen: {hex(data_0)}, Gelen: {hex(res_0)}"

    addr_15, data_15 = 0x000200, 0x99887766
    await axi_master.write(ADDR_QSPI_ADR, addr_15.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_DR, data_15.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=15, mode=MODE_SINGLE, cmd=0x02).to_bytes(4, 'little'))
    await wait_done(axi_master) 
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=15, mode=MODE_SINGLE, cmd=0x03).to_bytes(4, 'little'))
    res_15 = await wait_for_done_and_read(axi_master, dut)
    assert res_15 == data_15, f"Prescaler=15 Hatası! Beklenen: {hex(data_15)}, Gelen: {hex(res_15)}"
    vip_task.kill()

@cocotb.test()
async def Register_Access_And_Reset_Test(dut):
    axi_master = await setup_test(dut)

    test_addr = 0x12345678
    await axi_master.write(ADDR_QSPI_ADR, test_addr.to_bytes(4, 'little'))
    read_addr = await axi_master.read(ADDR_QSPI_ADR, 4)
    assert int.from_bytes(read_addr.data, 'little') == test_addr, "ADR Register okuma hatasi!"

    test_ccr = build_ccr(prescaler=5, mode=MODE_DUAL, cmd=0xAB)
    await axi_master.write(ADDR_QSPI_CCR, test_ccr.to_bytes(4, 'little'))
    read_ccr = await axi_master.read(ADDR_QSPI_CCR, 4)
    assert int.from_bytes(read_ccr.data, 'little') == test_ccr, "CCR Register okuma hatasi!"

@cocotb.test()
async def FIFO_Error_Status_Test(dut):
    """Test 6: 4'lü FIFO Entegre Stres Testi (Güncellenmiş Bit 10 ve 11)"""
    axi_master = await setup_test(dut)
    dut._log.info("\n" + "="*60)
    dut._log.info("--- TEST 6: FIFO DONANIM HATALARI TESTİ ---")
    dut._log.info("="*60)

    # --- 6.1: AXI-SIDE RX UNDERFLOW ---
    status_resp = await axi_master.read(ADDR_QSPI_STA, 4)
    status_val = int.from_bytes(status_resp.data, 'little')
    assert (status_val & (1 << 5)), "HATA: RX FIFO empty bayrağı yanmadı!"
    dut._log.info("-> AXI RX Underflow/Empty Durumu PASS")

    # --- 6.2: AXI-SIDE TX OVERFLOW ---
    for i in range(70): await axi_master.write(ADDR_QSPI_DR, i.to_bytes(4, 'little'))
    status_resp = await axi_master.read(ADDR_QSPI_STA, 4)
    status_val = int.from_bytes(status_resp.data, 'little')
    assert (status_val & (1 << 6)), "HATA: TX FIFO full bayrağı yanmadı!"
    dut._log.info("-> AXI TX Overflow/Full Durumu PASS")

    axi_master = await setup_test(dut)

    # --- 6.3: QSPI-CORE TX UNDERFLOW (BIT 10) ---
    dut._log.info(">>> 6.3: QSPI Core TX Underflow Testi (Bit 10)...")
    await axi_master.write(ADDR_QSPI_ADR, (0x04).to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=0, mode=MODE_SINGLE, cmd=0x02).to_bytes(4, 'little'))
    await Timer(2, units='us')
    
    status_val = int.from_bytes((await axi_master.read(ADDR_QSPI_STA, 4)).data, 'little')
    tx_underflow = (status_val >> 10) & 0x1
    assert tx_underflow == 1, f"HATA: Bit 10 yanmadı! Status: {bin(status_val)}"
    dut._log.info("-> QSPI Core TX Underflow (Bit 10) PASS")

    axi_master = await setup_test(dut)

    # --- 6.4: QSPI-CORE RX OVERFLOW (BIT 11) ---
    dut._log.info(">>> 6.4: QSPI Core RX Overflow Testi (2 Aşamalı Taşırma)...")
    vip = SmartFlashVIP(dut)
    
    # VIP her okuma isteğinde durmadan veri basacak
    async def spam_logic():
        from test_qspi import L_SINGLE
        while True:
            cmd = await vip.recv(L_SINGLE, 8)
            if cmd == 0x03:
                addr = await vip.recv(L_SINGLE, 24)
                # İstediği kadar veri basabilmesi için 100 kelime gönderiyoruz
                for _ in range(100): await vip.send(L_SINGLE, 32, 0xAAAAAAAA)
                await vip.release_bus()

    vip_task = cocotb.start_soon(spam_logic())

    # 1. AŞAMA: FIFO'yu TAMAMEN DOLDUR (64 Word = width 255)
    dut._log.info("    -> 1. Aşama: RX FIFO %100 Dolduruluyor...")
    await axi_master.write(ADDR_QSPI_ADR, (0x04).to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=0, width_bytes=255, mode=MODE_SINGLE, cmd=0x03).to_bytes(4, 'little'))
    await wait_done(axi_master) # İşlem bitti, FIFO şu an tam kapasite dolu.

    # 2. AŞAMA: FIFO DOLUYKEN 1 KELİME DAHA OKUMAYA ÇALIŞ (Taşma Anı!)
    dut._log.info("    -> 2. Aşama: Dolu FIFO'ya fazladan okuma emri veriliyor (Overflow!)...")
    await axi_master.write(ADDR_QSPI_ADR, (0x08).to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=0, width_bytes=3, mode=MODE_SINGLE, cmd=0x03).to_bytes(4, 'little'))

    await Timer(2, units='us') # FSM'in hatayı fark edip bayrağı yakması için bekle
    
    # STATÜYÜ KONTROL ET
    status_val = int.from_bytes((await axi_master.read(ADDR_QSPI_STA, 4)).data, 'little')
    rx_overflow = (status_val >> 11) & 0x1
    
    dut._log.info(f"    -> RX Overflow Sonrasi Status: {hex(status_val)}")
    assert rx_overflow == 1, f"HATA: Bit 11 yanmadı! Status: {bin(status_val)}"
    dut._log.info("    -> QSPI Core RX Overflow (Bit 11) PASS")
    
    vip_task.kill()

    dut._log.info("\n" + "*"*60)
    dut._log.info("🏆 4'LÜ FIFO ENTEGRE STRES TEST PAKETİ BAŞARIYLA GEÇTİ! 🏆")
    dut._log.info("*"*60 + "\n")

@cocotb.test()
async def Boot_Read_Sequence_Test(dut):
    axi_master = await setup_test(dut)
    vip = SmartFlashVIP(dut)

    boot_address = 0x00000000
    vip.memory[boot_address]     = 0x11223344  
    vip.memory[boot_address + 4] = 0x55667788  

    async def boot_flash_behavior():
        cmd = await vip.recv(L_SINGLE, 8)
        if cmd == 0x6B: 
            addr = await vip.recv(L_SINGLE, 24)
            for _ in range(8): 
                await RisingEdge(dut.sclk)
            
            await vip.send(L_QUAD, 32, vip.memory.get(addr, 0))
            await vip.send(L_QUAD, 32, vip.memory.get(addr + 4, 0))
            await vip.release_bus()
            
    vip_task = cocotb.start_soon(boot_flash_behavior())

    await axi_master.write(ADDR_QSPI_ADR, boot_address.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(dummy=8, width_bytes=8, mode=MODE_SINGLE, cmd=0x6B).to_bytes(4, 'little'))

    await wait_done(axi_master)
    
    await RisingEdge(dut.S_AXI_ACLK)
    first_word_resp = await axi_master.read(ADDR_QSPI_DR, 4)
    first_word = int.from_bytes(first_word_resp.data, 'little')
    
    await RisingEdge(dut.S_AXI_ACLK)
    await RisingEdge(dut.S_AXI_ACLK)
    second_word_resp = await axi_master.read(ADDR_QSPI_DR, 4)
    second_word = int.from_bytes(second_word_resp.data, 'little')

    assert first_word == 0x11223344, f"Boot Ilk Kelime Hatasi! Beklenen: 0x11223344, Gelen: {hex(first_word)}"
    assert second_word == 0x55667788, f"Boot Ikinci Kelime Hatasi! Beklenen: 0x55667788, Gelen: {hex(second_word)}"

    dut._log.info(">>>> BOOT-READ (QOR) AKISI TESTI MUKEMMEL ZAFER! <<<<\n")
    vip_task.kill()