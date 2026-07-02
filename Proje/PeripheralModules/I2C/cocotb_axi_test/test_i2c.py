import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

async def reset_dut(dut):
    # 1. Tüm girişleri 'X' kalmaması için 0 ile başlat
    dut.AWVALID.value = 0
    dut.WVALID.value = 0
    dut.AWADDR.value = 0
    dut.WDATA.value = 0
    dut.WSTRB.value = 0
    dut.BREADY.value = 0
    dut.ARVALID.value = 0
    dut.ARADDR.value = 0
    dut.RREADY.value = 0
    dut.i_sda_in.value = 1 # I2C hattı default 'çekili' (pull-up) olur

    # 2. Reset işlemini gerçekleştir
    dut.rst_n.value = 0
    await Timer(10, unit="ns") # units -> unit olarak güncellendi
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk) # Sinyallerin oturması için bir çevrim daha bekle
    
    
async def axi_write(dut, addr, data, strb=0xF):
    # Adres ve veri kanallarını hazırla
    dut.AWADDR.value = addr
    dut.WDATA.value = data
    dut.WSTRB.value = strb
    dut.AWVALID.value = 1
    dut.WVALID.value = 1
    dut.BREADY.value = 1

    # Handshake bekle: AWREADY ve WREADY senin kodunda aynı sinyal
    while not dut.AWREADY.value:
        await RisingEdge(dut.clk)
    
    await RisingEdge(dut.clk)
    dut.AWVALID.value = 0
    dut.WVALID.value = 0
    
    # Yazma yanıtı (BVALID) bekle
    while not dut.BVALID.value:
        await RisingEdge(dut.clk)
    
    dut._log.info(f"AXI Write: Addr=0x{addr:X}, Data=0x{data:X} DONE")


async def axi_read(dut, addr):
    dut.ARADDR.value = addr
    dut.ARVALID.value = 1
    dut.RREADY.value = 1

    while not dut.ARREADY.value:
        await RisingEdge(dut.clk)
    
    await RisingEdge(dut.clk)
    dut.ARVALID.value = 0

    while not dut.RVALID.value:
        await RisingEdge(dut.clk)
    
    #önemli
    data = dut.RDATA.value
    dut._log.info(f"AXI Read: Addr=0x{addr:X}, Data=0x{int(data):X}") 
    return int(data)

@cocotb.test()
async def run_i2c_test(dut):
    # Saat 50MHz (20ns periyot) 
    cocotb.start_soon(Clock(dut.clk, 20, units="ns").start())
    await reset_dut(dut)

    # 1. Yazmaç Yazma: I2C_ADR (Slave Adres)
    await axi_write(dut, 0x7004, 0x55) 

    # 2. Yazmaç Yazma: I2C_TDR (Gönderilecek Veri)
    await axi_write(dut, 0x700C, 0xDEADBEEF)

    # 3. Yazmaç Okuma: Yazdığımız veriyi doğrulayalım
    read_val = await axi_read(dut, 0x7004)
    assert read_val == 0x55, f"Hata: 0x55 beklenen değer, 0x{read_val:X} geldi"

    # 4. İşlemi Başlatma: I2C_CFG üzerinden TX_EN 
    await axi_write(dut, 0x7010, 0x1) 

    # test_i2c.py (Satır 89 civarı)
    while not dut.core_busy.value: # Önce meşgul olmasını bekle
        await RisingEdge(dut.clk)

    while dut.core_busy.value:     # Sonra işlemin bitmesini bekle
        await RisingEdge(dut.clk)
        
    dut._log.info("I2C Transfer Tamamlandı!")
