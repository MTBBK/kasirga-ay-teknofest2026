"""
v1 (tb_core_halt) sundu: debug_req cekirdege ulasiyor, cekirdek debug
ROM'a fetch yapiyor, ve cekirdegin KENDI debug_halted_o sinyali 1 oluyor.
Ama o testte cekirdegin data-bus'i sahte bir stub'a bagliydi -- yani
debug ROM'un "halted oldum" yazmasi hicbir yere ulasmiyordu, bu yuzden
dmstatus.allhalted hic set olmadi. Bu, gercek donanimda bir hata oldugu
anlamina gelmiyordu -- sadece o round-trip'i hic test etmemistik.

Bu test (v2) o eksigi kapatiyor: core.data_* -> obi_to_axi.sv -> AXI4-Lite
-> dm_jtag_subsystem'in kullandigi ayni donusum -> dm_obi_top zincirini
gercekten kuruyor. Amac: debug ROM'un yazma islemi GERCEKTEN debug
penceresine (0x10000-0x10FFF) mi gidiyor, o round-trip tamamlaniyor mu,
ve sonunda dmstatus.allhalted set oluyor mu?
"""
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge

DMCONTROL = 0x10
DMSTATUS = 0x11

DTM_READ = 1
DTM_WRITE = 2


async def dmi_write(dut, addr, data, timeout=500):
    dut.dmi_req_addr_i.value = addr
    dut.dmi_req_data_i.value = data
    dut.dmi_req_op_i.value = DTM_WRITE
    dut.dmi_req_valid_i.value = 1
    for _ in range(timeout):
        await RisingEdge(dut.clk_i)
        if int(dut.dmi_req_ready_o.value):
            break
    else:
        raise TimeoutError(f"dmi_write(addr=0x{addr:x}): istek hic kabul edilmedi")
    dut.dmi_req_valid_i.value = 0
    await RisingEdge(dut.clk_i)


async def dmi_read(dut, addr, timeout=500):
    dut.dmi_req_addr_i.value = addr
    dut.dmi_req_data_i.value = 0
    dut.dmi_req_op_i.value = DTM_READ
    dut.dmi_req_valid_i.value = 1
    for _ in range(timeout):
        await RisingEdge(dut.clk_i)
        if int(dut.dmi_req_ready_o.value):
            break
    else:
        raise TimeoutError(f"dmi_read(addr=0x{addr:x}): istek hic kabul edilmedi")
    dut.dmi_req_valid_i.value = 0

    for _ in range(timeout):
        await RisingEdge(dut.clk_i)
        if int(dut.dmi_resp_valid_o.value):
            return int(dut.dmi_resp_data_o.value)
    raise TimeoutError(f"dmi_read(addr=0x{addr:x}): cevap hic gelmedi")


@cocotb.test()
async def test_core_halt2(dut):
    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())

    dut.rst_ni.value = 0
    dut.dmi_req_valid_i.value = 0
    dut.dmi_req_addr_i.value = 0
    dut.dmi_req_data_i.value = 0
    dut.dmi_req_op_i.value = 0
    dut.dmi_resp_ready_i.value = 1

    await Timer(100, units="ns")
    dut.rst_ni.value = 1
    await Timer(200, units="ns")

    dut._log.info("DM aktiflestiriliyor (dmactive=1)...")
    await dmi_write(dut, DMCONTROL, 0x00000001)

    status = await dmi_read(dut, DMSTATUS)
    dut._log.info(f"halt'tan once dmstatus: 0x{status:08x}")

    dut._log.info("haltreq gonderiliyor...")
    await dmi_write(dut, DMCONTROL, 0x80000001)

    saw_debug_req = False
    saw_instr_dbg_req = False
    saw_instr_dbg_gnt = False
    saw_instr_dbg_rvalid = False
    saw_core_halted = False
    saw_data_in_dbg_window = False
    saw_data_dbg_req = False
    saw_data_dbg_gnt = False
    saw_data_dbg_rvalid = False
    halted = False

    for i in range(4000):
        await RisingEdge(dut.clk_i)
        if int(dut.debug_req_o.value):
            saw_debug_req = True
        if int(dut.instr_dbg_req_o.value):
            saw_instr_dbg_req = True
        if int(dut.instr_dbg_gnt_o.value):
            saw_instr_dbg_gnt = True
        if int(dut.instr_dbg_rvalid_o.value):
            saw_instr_dbg_rvalid = True
        if int(dut.debug_halted_o.value):
            saw_core_halted = True
        if int(dut.data_in_dbg_window_o.value):
            saw_data_in_dbg_window = True
        if int(dut.data_dbg_req_o.value):
            saw_data_dbg_req = True
        if int(dut.data_dbg_gnt_o.value):
            saw_data_dbg_gnt = True
        if int(dut.data_dbg_rvalid_o.value):
            saw_data_dbg_rvalid = True

        if i % 250 == 0:
            status = await dmi_read(dut, DMSTATUS)
            allhalted = (status >> 9) & 1
            dut._log.info(
                f"[cycle {i}] dmstatus=0x{status:08x} allhalted={allhalted} "
                f"core_halted={saw_core_halted} "
                f"data_in_dbg_window={saw_data_in_dbg_window} "
                f"data_dbg_req={saw_data_dbg_req} "
                f"data_dbg_gnt={saw_data_dbg_gnt} "
                f"data_dbg_rvalid={saw_data_dbg_rvalid}"
            )
            if allhalted:
                halted = True
                break

    dut._log.info("----- SUMMARY -----")
    dut._log.info(f"debug_req_o hic 1 oldu mu:                                  {saw_debug_req}")
    dut._log.info(f"instr_dbg_req/gnt/rvalid (debug ROM fetch tamamlandi mi):   {saw_instr_dbg_req}/{saw_instr_dbg_gnt}/{saw_instr_dbg_rvalid}")
    dut._log.info(f"debug_halted_o (cekirdegin kendi sinyali) hic 1 oldu mu:    {saw_core_halted}")
    dut._log.info(f"data_in_dbg_window_o hic 1 oldu mu (cekirdek debug pencer.ne data erisimi denedi mi): {saw_data_in_dbg_window}")
    dut._log.info(f"data_dbg_req_o hic 1 oldu mu (obi_to_axi'ye istek gitti mi): {saw_data_dbg_req}")
    dut._log.info(f"data_dbg_gnt_o hic 1 oldu mu (AXI4-Lite tarafi kabul etti mi): {saw_data_dbg_gnt}")
    dut._log.info(f"data_dbg_rvalid_o hic 1 oldu mu (round-trip tamamlandi mi): {saw_data_dbg_rvalid}")
    dut._log.info(f"dmstatus.allhalted sonunda 1 oldu mu:                       {halted}")

    assert halted, "Hala halted raporlanmadi -- SUMMARY'deki data_dbg_* satirlarina bakin, round-trip nerede tikaniyor"
