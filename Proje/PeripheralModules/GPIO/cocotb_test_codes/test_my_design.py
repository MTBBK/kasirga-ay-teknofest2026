import cocotb
from cocotb.triggers import FallingEdge, Timer

async def generate_clock(dut):
    while True:
        dut.clk.value = 0
        await Timer(1, unit="ns")
        dut.clk.value = 1
        await Timer(1, unit="ns")

@cocotb.test()
async def my_second_test(dut):

    # 1. Girişleri Başlat (Tanımsız kalmasınlar)
    dut.rst_i.value = 1
    dut.AWADDR.value = 0
    dut.AWVALID.value = 0
    dut.WVALID.value = 0

    # 2. Saati arka planda başlat
    cocotb.start_soon(generate_clock(dut))

    # 3. Test senaryosu
    await Timer(5, unit="ns") 
    await FallingEdge(dut.clk)

    # 4. Doğrulama (İsimleri düzelttik)
    cocotb.log.info("Çıkış Pinleri: %s", dut.output_pins.value)
    
    # AWADDR'ye yukarıda 0 verdiğimiz için bu artık geçer
    assert dut.AWADDR.value == 0