import cocotb
import logging
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge, ReadOnly 
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
# AXI ADRES HARİTASI VE SABİTLER
# =================================================================
ADDR_QSPI_CCR = 0x00090000
ADDR_QSPI_ADR = 0x00090004
ADDR_QSPI_DR  = 0x00090008
ADDR_QSPI_STA = 0x0009000C
ADDR_QSPI_FCR = 0x00090010

def build_ccr(prescaler=2, addr_32=0, width_bytes=4, dummy=0, mode=1, cmd=0, clear=0):
    width = (width_bytes - 1) & 0xFF
    return (clear << 31) | (prescaler << 25) | (addr_32 << 24) | (width << 16) | (dummy << 11) | (mode << 8) | cmd

# =================================================================
# AKILLI SANAL FLASH BELLEK (VIP) - KURŞUN GEÇİRMEZ
# =================================================================
class SmartFlashVIP:
    def __init__(self, dut):
        self.dut = dut
        self.sclk = dut.sclk
        self.io = [dut.qspi_io_0, dut.qspi_io_1, dut.qspi_io_2, dut.qspi_io_3]
        self.memory = {} # Sanal bellek
        
    async def recv(self, lines, num_bits):
        result = 0
        cycles = num_bits // lines
        for _ in range(cycles):
            await RisingEdge(self.sclk)
            await ReadOnly() 
            val = 0
            for j in range(lines - 1, -1, -1): 
                bit_val = self.io[j].value
                try:
                    bit = int(bit_val)
                except ValueError:
                    bit = 1 # 'Z' veya 'X' durumlarında Pull-Up simülasyonu
                val = (val << 1) | bit
            result = (result << lines) | val
        return result

    async def send(self, lines, num_bits, data):
        cycles = num_bits // lines
        for i in range(cycles):
            await FallingEdge(self.sclk)
            chunk = (data >> (num_bits - (i + 1) * lines)) & ((1 << lines) - 1)
            
            if lines == 1:
                self.io[0].value = 0 # MOSI toprağa çekilir
                self.io[1].value = chunk & 1 # MISO veri basar
                self.io[2].value = cocotb.binary.BinaryValue("z")
                self.io[3].value = cocotb.binary.BinaryValue("z")
            elif lines == 2:
                self.io[0].value = chunk & 1
                self.io[1].value = (chunk >> 1) & 1
                self.io[2].value = cocotb.binary.BinaryValue("z")
                self.io[3].value = cocotb.binary.BinaryValue("z")
            else:
                for j in range(4):
                    self.io[j].value = (chunk >> j) & 1
            
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

async def wait_for_done_and_read(axi_master, dut):
    done = False
    for _ in range(200): 
        status_resp = await axi_master.read(ADDR_QSPI_STA, 4)
        if int.from_bytes(status_resp.data, 'little') & 0x01:
            done = True
            break
        await Timer(50, units='ns')
    assert done, "HATA: FSM 'DONE' sinyalini vermedi!"

    await RisingEdge(dut.S_AXI_ACLK)
    await RisingEdge(dut.S_AXI_ACLK)
    read_resp = await axi_master.read(ADDR_QSPI_DR, 4)
    return int.from_bytes(read_resp.data, 'little')

# =================================================================
# TEST 1: SINGLE YAZMA VE OKUMA TESTİ (1-1-1) - ALTIN STANDART
# =================================================================
@cocotb.test()
async def Single_Write_Read_Test(dut):
    axi_master = await setup_test(dut)
    vip = SmartFlashVIP(dut)

    async def vip_behavior():
        while True:
            cmd = await vip.recv(1, 8)
            if cmd == 0x02: 
                addr = await vip.recv(1, 24); data = await vip.recv(1, 32)
                vip.memory[addr] = data
                dut._log.info(f"[VIP] YAZMA ALINDI -> Adres: {hex(addr)}, Veri: {hex(data)}")
            elif cmd == 0x03: 
                addr = await vip.recv(1, 24)
                await vip.send(1, 32, vip.memory.get(addr, 0xDEADBEEF))
    cocotb.start_soon(vip_behavior())

    test_addr, test_data = 0x000000AA, 0x8899AABB
    dut._log.info(f"--- 1. ASAMA: {hex(test_addr)} Adresine {hex(test_data)} Yaziliyor (SINGLE) ---")
    await axi_master.write(ADDR_QSPI_ADR, test_addr.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_DR, test_data.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(mode=1, cmd=0x02).to_bytes(4, 'little'))
    await wait_for_done_and_read(axi_master, dut) 
    
    dut._log.info(f"--- 2. ASAMA: {hex(test_addr)} Adresinden Veri Okunuyor (SINGLE) ---")
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(mode=1, cmd=0x03).to_bytes(4, 'little'))
    read_data = await wait_for_done_and_read(axi_master, dut)
    
    assert read_data == test_data, f"HATA! Beklenen: {hex(test_data)}, Gelen: {hex(read_data)}"
    dut._log.info(">>>> SINGLE WRITE/READ MUKEMMEL ZAFER! <<<<\n")

# =================================================================
# TEST 2: QUAD OKUMA VE DUMMY CYCLE TESTİ (4-4-4) - ALTIN STANDART
# =================================================================
@cocotb.test()
async def Quad_Read_Dummy_Test(dut):
    axi_master = await setup_test(dut)
    vip = SmartFlashVIP(dut)
    test_addr, test_data = 0x00000044, 0xFF00FF00
    vip.memory[test_addr] = test_data 
    
    async def vip_behavior():
        while True: 
            cmd = await vip.recv(4, 8)
            if cmd == 0x6B: 
                addr = await vip.recv(4, 24)
                for _ in range(8): await RisingEdge(dut.sclk) 
                await vip.send(4, 32, vip.memory.get(addr, 0x0))
    cocotb.start_soon(vip_behavior())

    dut._log.info(f"--- QUAD READ TEST: {hex(test_addr)} Adresi 8 Dummy Cycle ile Okunuyor ---")
    await axi_master.write(ADDR_QSPI_ADR, test_addr.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(dummy=8, mode=3, cmd=0x6B).to_bytes(4, 'little'))

    read_data = await wait_for_done_and_read(axi_master, dut)
    assert read_data == test_data, f"HATA! Beklenen: {hex(test_data)}, Gelen: {hex(read_data)}"
    dut._log.info(">>>> QUAD READ & DUMMY CYCLE MUKEMMEL ZAFER! <<<<\n")

# =================================================================
# TEST 3: CORNER CASES & REGRESYON (Dual, Değişken Uzunluk, Hata)
# =================================================================
@cocotb.test()
async def Advanced_Corner_Cases_Test(dut):
    axi_master = await setup_test(dut)
    vip = SmartFlashVIP(dut)

    # 3.1: DUAL MOD (2-2-2) OKUMA
    dut._log.info(">>> STRES TEST 1: Dual Mod (2 Hat) Okuma...")
    test_addr_dual, test_data_dual = 0x123456, 0xABCDEEFF
    async def dual_logic():
        cmd = await vip.recv(2, 8)
        if cmd == 0x3B: 
            addr = await vip.recv(2, 24)
            for _ in range(8): await RisingEdge(dut.sclk) # Dummy Cycle
            await vip.send(2, 32, test_data_dual)
    cocotb.start_soon(dual_logic())

    await axi_master.write(ADDR_QSPI_ADR, test_addr_dual.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(dummy=8, mode=2, cmd=0x3B).to_bytes(4, 'little'))
    res = await wait_for_done_and_read(axi_master, dut)
    assert res == test_data_dual, f"Dual Hata! Beklenen: {hex(test_data_dual)}, Gelen: {hex(res)}"
    dut._log.info("    -> Dual Mod PASS!")

    # 3.2: DEĞİŞKEN UZUNLUK (1 BYTE OKUMA)
    dut._log.info(">>> STRES TEST 2: Hizalanmamış (Unaligned) 1 Byte Okuma...")
    test_addr_byte, test_data_byte = 0x778899, 0x55
    async def single_byte_logic():
        await vip.recv(1, 8); await vip.recv(1, 24) 
        await vip.send(1, 8, test_data_byte) 
    cocotb.start_soon(single_byte_logic())

    await axi_master.write(ADDR_QSPI_ADR, test_addr_byte.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(width_bytes=1, mode=1, cmd=0x03).to_bytes(4, 'little'))
    res = await wait_for_done_and_read(axi_master, dut)
    assert (res & 0xFF) == test_data_byte, f"Byte Hata! Beklenen: {hex(test_data_byte)}, Gelen: {hex(res&0xFF)}"
    dut._log.info("    -> Tek Byte Okuma PASS!")

    # 3.3: RX FIFO OVERFLOW
    dut._log.info(">>> STRES TEST 3: RX FIFO Overflow Koruması...")
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(width_bytes=280, mode=1, cmd=0x03).to_bytes(4, 'little'))
    async def spam_logic():
        await vip.recv(1, 8); await vip.recv(1, 24)
        for _ in range(70): await vip.send(1, 32, 0xAAAAAAAA) 
    cocotb.start_soon(spam_logic())
    
    await Timer(5, units='us') 
    status_resp = await axi_master.read(ADDR_QSPI_STA, 4)
    status_val = int.from_bytes(status_resp.data, 'little')
    assert (status_val >> 8) & 0xF > 0, f"HATA! FIFO taşmasına rağmen hata bayrağı yanmadı! Status: {hex(status_val)}"
    dut._log.info(f"    -> Overflow Başarıyla Engellendi ve Raporlandı (Status: {hex(status_val)}) PASS!")

# =================================================================
# TEST 4: PRESCALER STRES TESTİ (Hız Sınırlarını Zorlama)
# =================================================================
@cocotb.test()
async def Prescaler_Sweep_Test(dut):
    axi_master = await setup_test(dut)
    vip = SmartFlashVIP(dut)

    async def vip_behavior():
        while True:
            cmd = await vip.recv(1, 8)
            if cmd == 0x02: 
                addr = await vip.recv(1, 24); data = await vip.recv(1, 32)
                vip.memory[addr] = data
            elif cmd == 0x03: 
                addr = await vip.recv(1, 24)
                await vip.send(1, 32, vip.memory.get(addr, 0x0))
    cocotb.start_soon(vip_behavior())

    dut._log.info("\n" + "="*50)
    dut._log.info(">>> TEST 4: PRESCALER STRES TESTİ BAŞLIYOR <<<")
    dut._log.info("="*50)

    dut._log.info(">>> AŞAMA 1: Prescaler = 1 (Yüksek Frekans Simülasyonu)")
    addr_0, data_0 = 0x000100, 0x11223344
    await axi_master.write(ADDR_QSPI_ADR, addr_0.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_DR, data_0.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=1, mode=1, cmd=0x02).to_bytes(4, 'little'))
    await wait_for_done_and_read(axi_master, dut) 
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=1, mode=1, cmd=0x03).to_bytes(4, 'little'))
    res_0 = await wait_for_done_and_read(axi_master, dut)
    assert res_0 == data_0, f"Prescaler=1 Hatası! Beklenen: {hex(data_0)}, Gelen: {hex(res_0)}"
    dut._log.info("    -> Prescaler = 1 TESTİ PASS!")

    dut._log.info(">>> AŞAMA 2: Prescaler = 15 (Yavaş Frekans)")
    addr_15, data_15 = 0x000200, 0x99887766
    await axi_master.write(ADDR_QSPI_ADR, addr_15.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_DR, data_15.to_bytes(4, 'little'))
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=15, mode=1, cmd=0x02).to_bytes(4, 'little'))
    await wait_for_done_and_read(axi_master, dut) 
    await axi_master.write(ADDR_QSPI_CCR, build_ccr(prescaler=15, mode=1, cmd=0x03).to_bytes(4, 'little'))
    res_15 = await wait_for_done_and_read(axi_master, dut)
    assert res_15 == data_15, f"Prescaler=15 Hatası! Beklenen: {hex(data_15)}, Gelen: {hex(res_15)}"
    dut._log.info("    -> Prescaler = 15 TESTİ PASS!")
    dut._log.info(">>>> PRESCALER SWEEP TESTİ MÜKEMMEL ZAFER! <<<<")