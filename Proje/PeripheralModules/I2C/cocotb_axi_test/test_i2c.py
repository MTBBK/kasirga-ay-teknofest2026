import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

async def reset_dut(dut):
    dut.rst_n.value = 0
    await Timer(10, units="ns")
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)
    
    
async def axi_write(dut, addr, data, strb=0xF):
    # Adres ve veri kanallarını hazırla [cite: 2]
    dut.AWADDR.value = addr
    dut.WDATA.value = data
    dut.WSTRB.value = strb
    dut.AWVALID.value = 1
    dut.WVALID.value = 1
    dut.BREADY.value = 1

    # Handshake bekle: AWREADY ve WREADY senin kodunda aynı sinyal [cite: 11, 13]
    while not dut.AWREADY.value:
        await RisingEdge(dut.clk)
    
    await RisingEdge(dut.clk)
    dut.AWVALID.value = 0
    dut.WVALID.value = 0
    
    # Yazma yanıtı (BVALID) bekle [cite: 2, 35-37]
    while not dut.BVALID.value:
        await RisingEdge(dut.clk)
    
    dut._log.info(f"AXI Write: Addr=0x{addr:X}, Data=0x{data:X} DONE")


async def axi_read(dut, addr):
    dut.ARADDR.value = addr
    dut.ARVALID.value = 1
    dut.RREADY.value = 1

    # ARREADY bekle [cite: 11]
    while not dut.ARREADY.value:
        await RisingEdge(dut.clk)
    
    await RisingEdge(dut.clk)
    dut.ARVALID.value = 0

    # RVALID bekle ve veriyi oku [cite: 10, 39-40]
    while not dut.RVALID.value:
        await RisingEdge(dut.clk)
    
    data = dut.RDATA.value
    dut._log.info(f"AXI Read: Addr=0x{addr:X}, Data=0x{data:X}")
    return data


@cocotb.test()
async def run_i2c_test(dut):
    # Saat 50MHz (20ns periyot) [cite: 171]
    cocotb.start_soon(Clock(dut.clk, 20, units="ns").start())
    await reset_dut(dut)

    # 1. Yazmaç Yazma: I2C_ADR (Slave Adres) [cite: 4, 32]
    await axi_write(dut, 0x7004, 0x55) 

    # 2. Yazmaç Yazma: I2C_TDR (Gönderilecek Veri) [cite: 4, 32]
    await axi_write(dut, 0x700C, 0xDEADBEEF)

    # 3. Yazmaç Okuma: Yazdığımız veriyi doğrulayalım
    read_val = await axi_read(dut, 0x7004)
    assert read_val == 0x55, f"Hata: 0x55 beklenen değer, 0x{read_val:X} geldi"

    # 4. İşlemi Başlatma: I2C_CFG üzerinden TX_EN [cite: 5, 26-27]
    await axi_write(dut, 0x7010, 0x1) 

    # 5. Busy Loglama [cite: 17]
    while dut.o_busy.value:
        await RisingEdge(dut.clk)
    
    dut._log.info("I2C Transfer Tamamlandı!")