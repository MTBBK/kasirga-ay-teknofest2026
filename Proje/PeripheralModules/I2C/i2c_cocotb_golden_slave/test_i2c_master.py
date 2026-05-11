import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge, with_timeout, SimTimeoutError
from cocotbext.i2c import I2cMemory

@cocotb.test()
async def test_write(dut):
    """slave testing writing"""
    cocotb.start_soon(Clock(dut.clk, 20, unit="ns").start())
    
    slave = I2cMemory(
        sda=dut.slave_sda_i, 
        sda_o=dut.slave_sda_o, 
        scl=dut.slave_scl_i, 
        scl_o=dut.slave_scl_o, 
        addr=0x55, 
        size=256
    )
    
    dut.rst_n.value=0
    await Timer(20,unit="ns")
    dut.rst_n.value=1
    
    dut.i_tx_en.value=0
    dut.i_rx_en.value=0
    dut.i_slave_addr.value=0
    dut.i_num_bytes.value=0
    dut.i_tx_data.value=0
    
    for _ in range(2): 
        await RisingEdge(dut.clk)
    
    dut.i_slave_addr.value=0x55
    dut.i_num_bytes.value=2
    dut.i_tx_data.value=0xAA00 
    
    await RisingEdge(dut.clk)
    dut.i_tx_en.value = 1
    await RisingEdge(dut.clk)
    dut.i_tx_en.value = 0

    try: 
        await with_timeout(RisingEdge(dut.o_tx_done), 200000, "ns")#25*20*4
    except SimTimeoutError: 
        assert False, "fsm got stuck"

    for _ in range(2):
        await RisingEdge(dut.clk)
    assert dut.o_busy.value == 0, "stuck in busy state"
    
    written_data = slave.mem[0]
    assert written_data == 0xAA, "slave memory got "+ hex(written_data) +" instead of 0xaa!"
    dut._log.info("write test is successful")


@cocotb.test()
async def test_read(dut):
    """golden slave testing reading"""
    cocotb.start_soon(Clock(dut.clk, 20, unit="ns").start())
    

    slave = I2cMemory(
        sda=dut.slave_sda_i, 
        sda_o=dut.slave_sda_o, 
        scl=dut.slave_scl_i, 
        scl_o=dut.slave_scl_o, 
        addr=0x11, 
        size=256
    )
    
    slave.mem[0] = 0xBB
    
    dut.rst_n.value = 0
    await Timer(40, unit="ns")
    dut.rst_n.value = 1

    dut.i_tx_en.value = 0
    dut.i_rx_en.value = 0
    dut.i_slave_addr.value = 0
    dut.i_num_bytes.value = 0
    dut.i_tx_data.value = 0
    
    for _ in range(2): 
        await RisingEdge(dut.clk)

    dut._log.info("starting to read")
    dut.i_slave_addr.value = 0x11
    dut.i_num_bytes.value = 1
    
    await RisingEdge(dut.clk)
    dut.i_rx_en.value = 1
    await RisingEdge(dut.clk)
    dut.i_rx_en.value = 0

    try: 
        await with_timeout(RisingEdge(dut.o_rx_done), 200000, "ns")
    except SimTimeoutError: 
        assert False, "fsm got stuck"
    
    read = int(dut.o_rx_data.value)
    assert read == 0xBB, "Instead of 0xBB master read " + hex(read)
    dut._log.info("read test is successful")
