import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

@cocotb.test()
async def gpio_full_test(dut):
    # 1. Saat Sinyalini Başlat (100MHz -> 10ns periyot)
    clock = Clock(dut.clk, 10, units="ns")
    cocotb.start_soon(clock.start())

    # 2. Reset Uygula (Şartnameye göre aktif düşük rst_i)
    dut.rst_i.value = 0
    dut.AWVALID.value = 0
    dut.WVALID.value = 0
    dut.ARVALID.value = 0
    dut.BREADY.value = 1
    dut.RREADY.value = 1
    await Timer(20, units="ns")
    dut.rst_i.value = 1
    await RisingEdge(dut.clk)

    # 3. TEST: GPIO_ODR'ye Yazma (Offset 0x04)
    dut._log.info("Test 1: ODR Yazmacina 0xABCD yaziliyor...")
    dut.AWADDR.value = 0x04
    dut.AWVALID.value = 1
    dut.WDATA.value = 0xABCD
    dut.WVALID.value = 1
    dut.WSTRB.value = 0xF # Tüm baytlar geçerli

    # El sıkışma bekle (AWREADY ve WREADY)
    while not (dut.AWREADY.value and dut.WREADY.value):
        await RisingEdge(dut.clk)
    
    await RisingEdge(dut.clk)
    dut.AWVALID.value = 0
    dut.WVALID.value = 0

    # Çıkış pinlerini kontrol et (16-bit)
    await Timer(5, units="ns")
    assert dut.output_pins.value == 0xABCD, f"Hata! ODR cikisi: {hex(dut.output_pins.value)}"
    dut._log.info("Test 1 basarili: Pinler 0xABCD oldu.")

    # 4. TEST: GPIO_IDR'den Okuma (Offset 0x00)
    dut._log.info("Test 2: IDR Yazmacindan okuma yapiliyor...")
    dut.input_pins.value = 0x5566 # Giriş pinlerine veri ver
    
    dut.ARADDR.value = 0x00
    dut.ARVALID.value = 1
    
    while not dut.ARREADY.value:
        await RisingEdge(dut.clk)
    
    await RisingEdge(dut.clk)
    dut.ARVALID.value = 0

    while not dut.RVALID.value:
        await RisingEdge(dut.clk)

    # Üst 16 bit 0 olmalı
    assert dut.RDATA.value == 0x00005566, f"Hata! Okunan IDR: {hex(dut.RDATA.value)}"
    dut._log.info("Test 2 basarili: IDR dogru okundu (0x00005566).")

    dut._log.info("Tüm GPIO testleri basariyla tamamlandi!")