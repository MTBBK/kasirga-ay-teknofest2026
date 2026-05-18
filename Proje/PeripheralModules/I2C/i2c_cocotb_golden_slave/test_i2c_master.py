import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge, with_timeout, SimTimeoutError
from cocotbext.i2c import I2cMemory

@cocotb.test()
async def test_nack(dut):
    """testing if o_error pulses when slave nacks the address"""
    cocotb.start_soon(Clock(dut.clk,20,unit="ns").start())

    # slave is at 0x55, master will send to 0x44, no slave will respond
    slave=I2cMemory(
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

    dut.i_slave_addr.value=0x44
    dut.i_num_bytes.value=1
    dut.i_tx_data.value=0xAB

    await RisingEdge(dut.clk)
    dut.i_tx_en.value=1
    await RisingEdge(dut.clk)
    dut.i_tx_en.value=0

    try:
            await with_timeout(RisingEdge(dut.o_error),200000,"ns")
    except SimTimeoutError:
        assert False,"o_error never fired, nack was not detected"

    # tx_done shouldnt be 1 since it was aborted
    await RisingEdge(dut.clk)
    assert dut.o_tx_done.value==0,"o_tx_done should not fire when nack occurs"
    assert dut.o_busy.value==0,"master should be back in S_IDLE after nack"
    dut._log.info("nack test passed")


@cocotb.test()
async def test_num_bytes_zero(dut):
    """i_num_bytes=0 should be rounded up to 1, master should complete"""
    cocotb.start_soon(Clock(dut.clk,20,unit="ns").start())

    slave=I2cMemory(
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
    dut.i_num_bytes.value=0       # should round it up to 1
    dut.i_tx_data.value=0x00000042

    await RisingEdge(dut.clk)
    dut.i_tx_en.value=1
    await RisingEdge(dut.clk)
    dut.i_tx_en.value=0

    try:
        await with_timeout(RisingEdge(dut.o_tx_done),200000,"ns")
    except SimTimeoutError:
        assert False,"fsm stuck i_num_bytes=0 was not rounded up to 1"

    await RisingEdge(dut.clk)
    assert dut.o_error.value == 0,"o_error should not fire"
    assert dut.o_busy.value == 0, "master should be in S_IDLE after transfer"
    
    # No slave memory assertion here because I2cMemory(cocotbext-i2c) treats the first byte after the address as a memory offset, because it's EEPROM slave, not a data byte. With i_num_bytes=1 (rounded up from 0), only 0x42 is sent, I2cMemory consumes it as the write pointer and no data byte follows, so nothing lands in memory.A negative check is still possible to confirm no accidental write occurred:
    assert slave.mem[0x42]==0x00,"only the address byte was sent, mem[0x42] should be unwritten"    

    dut._log.info("num_bytes=0 rounded  up to 1 test passed")


@cocotb.test()
async def test_num_bytes_overflow(dut):
    """i_num_bytes=7 should be rounded down to 4.
    Because of the property of the test model that is explained in the previous test
    The 4 bytes sent are:
      0x11:consumed as memory address(write will start at mem[0x11])
      0x22:written to mem[0x11]
      0x33:written to mem[0x12]
      0x44:written to mem[0x13]
    That is why we only assert 3 memory locations even though 4 bytes were sent."""
    cocotb.start_soon(Clock(dut.clk, 20, unit="ns").start())

    slave=I2cMemory(
        sda=dut.slave_sda_i,
        sda_o=dut.slave_sda_o,
        scl=dut.slave_scl_i,
        scl_o=dut.slave_scl_o,
        addr=0x55,
        size=256
    )

    # Filling memeory values so we can detect accidental out of range writes
    # mem[0x10]:right before the expected write start,should be untouched
    # mem[0x14]:right after,proves the 5th byte was not sent (rounding works)
    slave.mem[0x10]=0xDE
    slave.mem[0x14]=0xDE

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
    dut.i_num_bytes.value=7        # must be rounded down to 4
    dut.i_tx_data.value=0x44332211 # not 7 bytes because of the width 
    # Master will send (LSB first):
    # [7:0]= 0x11 EEPROM uses this as address offset
    # [15:8]= 0x22  data  mem[0x11]
    # [23:16]= 0x33  data  mem[0x12]
    # [31:24]= 0x44  data  mem[0x13]

    await RisingEdge(dut.clk)
    dut.i_tx_en.value = 1
    await RisingEdge(dut.clk)
    dut.i_tx_en.value = 0

    try:
        await with_timeout(RisingEdge(dut.o_tx_done),200000,"ns")
    except SimTimeoutError:
        assert False, "fsm stuck, i_num_bytes=7 was not rounded up to 4"

    await RisingEdge(dut.clk)
    assert dut.o_error.value == 0,"o_error should not be 1 on a valid transfer"
    assert dut.o_busy.value == 0,  "master should be S_IDLE after this"

    # Confirms no out of range write happened before the address byte's target
    assert slave.mem[0x10] == 0xDE, "write happened before expected range,master sent extra byte or address is wrong"

    # The 3 data bytes
    assert slave.mem[0x11] == 0x22, "Expected 0x22 at mem[0x11], got "+ {hex(slave.mem[0x11])}
    assert slave.mem[0x12] == 0x33, "Expected 0x33 at mem[0x12], got "+ {hex(slave.mem[0x12])}
    assert slave.mem[0x13] == 0x44, "Expected 0x44 at mem[0x13], got "+ {hex(slave.mem[0x13])}

    # proves rounding actually worked.
    # If i_num_bytes=7 was not rounded,a 5th byte would have landed here.
    assert slave.mem[0x14] == 0xDE,"5th byte was written to mem[0x14],rounding down to 4 did not work"

    dut._log.info(
        "num_bytes=7 rounded down to 4 "
        "I2cMemory used 0x11 as address offset, data 0x22/0x33/0x44 verified, "
        "out of range checks passed"
    )

@cocotb.test()
async def test_write_1_byte(dut):
    """golden slave test, writing 1 byte"""
    cocotb.start_soon(Clock(dut.clk, 20, unit="ns").start())
    slave = I2cMemory(
        sda=dut.slave_sda_i, sda_o=dut.slave_sda_o,
        scl=dut.slave_scl_i, scl_o=dut.slave_scl_o,
        addr=0x55, size=256
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
    dut.i_tx_en.value=0
    try:
        await with_timeout(RisingEdge(dut.o_tx_done), 200000, "ns")
    except SimTimeoutError:
        assert False, "fsm got stuck"
    await RisingEdge(dut.clk)
    assert dut.o_busy.value == 0, "stuck in busy state"
    written_data = slave.mem[0]
    assert written_data == 0xAA, "slave memory got "+ hex(written_data) +" instead of 0xAA"
    dut._log.info("write test is successful")

@cocotb.test()
async def test_write_2_bytes(dut):
    """golden slave test, writing 2 bytes"""
    cocotb.start_soon(Clock(dut.clk, 20, unit="ns").start())

    slave=I2cMemory(
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
    dut.i_num_bytes.value=3        
    dut.i_tx_data.value=0x00332211 #again the first byte being sent will be used a memmory offset 

    await RisingEdge(dut.clk)
    dut.i_tx_en.value = 1
    await RisingEdge(dut.clk)
    dut.i_tx_en.value = 0

    try:
        await with_timeout(RisingEdge(dut.o_tx_done),200000,"ns")
    except SimTimeoutError:
        assert False, "fsm stuck"

    await RisingEdge(dut.clk)
    assert dut.o_error.value == 0,"o_error should not be 1 on a valid transfer"
    assert dut.o_busy.value == 0,  "master should be S_IDLE after this"


    # The 3 data bytes
    assert slave.mem[0x11] == 0x22, "Expected 0x22 at mem[0x11], got "+ {hex(slave.mem[0x11])}
    assert slave.mem[0x12] == 0x33, "Expected 0x33 at mem[0x12], got "+ {hex(slave.mem[0x12])}

    dut._log.info(
        "tested writing 2 bytes "
        "I2cMemory used 0x11 as address offset, data 0x22/0x33 verified, "
        
    )


@cocotb.test()
async def test_read_1_byte(dut):
    """golden slave test, reading 1 byte"""
    cocotb.start_soon(Clock(dut.clk, 20, unit="ns").start())
    slave = I2cMemory(
        sda=dut.slave_sda_i, sda_o=dut.slave_sda_o,
        scl=dut.slave_scl_i, scl_o=dut.slave_scl_o,
        addr=0x11, size=256
    )
    slave.mem[0]=0xBB
    dut.rst_n.value=0
    await Timer(40,unit="ns")
    dut.rst_n.value=1
    dut.i_tx_en.value=0
    dut.i_rx_en.value=0
    dut.i_slave_addr.value=0
    dut.i_num_bytes.value=0
    dut.i_tx_data.value=0
    for _ in range(2):
        await RisingEdge(dut.clk)
    dut.i_slave_addr.value=0x11
    dut.i_num_bytes.value=1
    await RisingEdge(dut.clk)
    dut.i_rx_en.value =1
    await RisingEdge(dut.clk)
    dut.i_rx_en.value=0
    try:
        await with_timeout(RisingEdge(dut.o_rx_done), 200000, "ns")
    except SimTimeoutError:
        assert False, "fsm got stuck"
    read = int(dut.o_rx_data.value)
    assert read == 0xBB, "Instead of 0xBB master read " + hex(read)
    dut._log.info("1 byte read test is successful")


@cocotb.test()
async def test_read_2_bytes(dut):
    """golden slave test, reading 2 bytes"""
    cocotb.start_soon(Clock(dut.clk, 20, unit="ns").start())
    slave = I2cMemory(
        sda=dut.slave_sda_i, sda_o=dut.slave_sda_o,
        scl=dut.slave_scl_i, scl_o=dut.slave_scl_o,
        addr=0x11, size=256
    )
    slave.mem[0]=0xBB
    slave.mem[1]=0xAA
    dut.rst_n.value=0
    await Timer(40,unit="ns")
    dut.rst_n.value=1
    dut.i_tx_en.value=0
    dut.i_rx_en.value=0
    dut.i_slave_addr.value=0
    dut.i_num_bytes.value=0
    dut.i_tx_data.value=0
    for _ in range(2):
        await RisingEdge(dut.clk)
    dut.i_slave_addr.value=0x11
    dut.i_num_bytes.value=2
    await RisingEdge(dut.clk)
    dut.i_rx_en.value =1
    await RisingEdge(dut.clk)
    dut.i_rx_en.value=0
    try:
        await with_timeout(RisingEdge(dut.o_rx_done), 200000, "ns")
    except SimTimeoutError:
        assert False, "fsm got stuck"
    read = int(dut.o_rx_data.value)
    read0=read & 0xFF
    read1=(read >> 8) & 0xFF
    assert read0==0xBB, "Instead of 0xBB master read " + hex(read)
    assert read1==0xAA, "Instead of 0xAA master read " + hex(read)  
    dut._log.info("2 byte read test is successful")


@cocotb.test()
async def test_read_4_bytes(dut):
    """golden slave test, reading 4 bytes"""
    cocotb.start_soon(Clock(dut.clk, 20, unit="ns").start())
    slave = I2cMemory(
        sda=dut.slave_sda_i, sda_o=dut.slave_sda_o,
        scl=dut.slave_scl_i, scl_o=dut.slave_scl_o,
        addr=0x11, size=256
    )
    slave.mem[0]=0xDD
    slave.mem[1]=0xEE
    slave.mem[2]=0xDD
    slave.mem[3]=0xEE 
    dut.rst_n.value=0
    await Timer(40,unit="ns")
    dut.rst_n.value=1
    dut.i_tx_en.value=0
    dut.i_rx_en.value=0
    dut.i_slave_addr.value=0
    dut.i_num_bytes.value=0
    dut.i_tx_data.value=0
    for _ in range(2):
        await RisingEdge(dut.clk)
    dut.i_slave_addr.value=0x11
    dut.i_num_bytes.value=4
    await RisingEdge(dut.clk)
    dut.i_rx_en.value =1
    await RisingEdge(dut.clk)
    dut.i_rx_en.value=0
    try:
        await with_timeout(RisingEdge(dut.o_rx_done), 200000, "ns")
    except SimTimeoutError:
        assert False, "fsm got stuck"
    read = int(dut.o_rx_data.value)
    read0=read & 0xFF
    read1=(read >> 8) & 0xFF
    read2= (read >> 16) & 0xFF
    read3= (read >> 24) & 0xFF
    assert read0==0xDD, "Instead of 0xDD master read " + hex(read)
    assert read1==0xEE, "Instead of 0xEE master read " + hex(read)
    assert read2==0xDD, "Instead of 0xDD master read " + hex(read)
    assert read3==0xEE, "Instead of 0xEE master read " + hex(read)  
    dut._log.info("4 byte read test is successful")
