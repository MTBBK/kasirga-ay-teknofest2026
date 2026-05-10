import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer,RisingEdge,FallingEdge,with_timeout,SimTimeoutError
 
async def slave(dut,mode="write",data=[]):#when in write mode slave only sends ack but in read sends data too
    """just a slave"""
    dut._log.info("slave is alive and in " + mode +" mode")    

    for _ in range(8):
        await FallingEdge(dut.o_scl)#7 address+1 read write
    await FallingEdge(dut.o_scl)
    dut.i_sda_in.value=0
    dut._log.info("sent ack")
    await FallingEdge(dut.o_scl)

    if mode == "write":
        dut.i_sda_in.value = 1 # Release SDA so master can send 
        for _ in range(8):
            await FallingEdge(dut.o_scl)
        await FallingEdge(dut.o_scl)
        dut.i_sda_in.value=0
        dut._log.info("sent ack")
        await FallingEdge(dut.o_scl)

    if(mode=="read"): #MSB first
        dut._log.info("sending fake data to master")
        for bit in data:
            dut.i_sda_in.value=bit
            await FallingEdge(dut.o_scl)
        dut.i_sda_in.value=1#so that master can send ack
        await FallingEdge(dut.o_scl)
    
    dut.i_sda_in.value=1#resistor pulls it high

@cocotb.test()
async def test_write(dut):
    """testing writing"""
    cocotb.start_soon(Clock(dut.clk,10,unit="ns").start())
    cocotb.start_soon(slave(dut, mode="write"))
    
    dut.rst_n.value=0
    await Timer(20 ,unit="ns")
    dut.rst_n.value=1
    
    dut.i_tx_en.value=0
    dut.i_rx_en.value=0
    dut.i_slave_addr.value=0
    dut.i_num_bytes.value=0
    dut.i_tx_data.value=0
    
    for _  in range(2): 
        await RisingEdge(dut.clk)
    
    dut._log.info("starting to write")
    dut.i_slave_addr.value=0x55
    dut.i_num_bytes.value=1
    dut.i_tx_data.value=0xAA
    
    await RisingEdge(dut.clk)#because it's start condition
    dut.i_tx_en.value=1
    await RisingEdge(dut.clk)
    dut.i_tx_en.value=0

    try: 
        await with_timeout(RisingEdge(dut.o_tx_done), 200000,"ns")#20*25*4(for safety)
    except SimTimeoutError: 
        assert False, "FSM got stuck"

    for _ in range(2):
        await RisingEdge(dut.clk)
    assert dut.o_busy.value==0,"stuck in busy state"
    dut._log.info("write test is successful")

@cocotb.test()
async def test_read(dut):
    """testing reading"""
    cocotb.start_soon(Clock(dut.clk,10,unit="ns").start())
    byte=[1,0,1,1,1,0,1,1]#0xBB
    cocotb.start_soon(slave(dut,mode="read",data=byte))
    
    dut.rst_n.value=0
    await Timer(20 ,unit="ns")
    dut.rst_n.value=1

    dut.i_tx_en.value=0
    dut.i_rx_en.value=0
    dut.i_slave_addr.value=0
    dut.i_num_bytes.value=0
    dut.i_tx_data.value=0
    
    for _  in range(2): 
        await RisingEdge(dut.clk)

    dut._log.info("starting to read")
    dut.i_slave_addr.value=0x11
    dut.i_num_bytes.value=1
    
    await RisingEdge(dut.clk)#because it's start condition
    dut.i_rx_en.value=1
    await RisingEdge(dut.clk)
    dut.i_rx_en.value=0

    try: 
        await with_timeout(RisingEdge(dut.o_rx_done), 200000,"ns")#20*25*4(for safety)
    except SimTimeoutError: 
        assert False, "FSM got stuck"
    
    read=int(dut.o_rx_data.value)
    assert read==0xBB, "Instead of 0xBB master read " + hex(read)
    dut._log.info("read test is successful")







