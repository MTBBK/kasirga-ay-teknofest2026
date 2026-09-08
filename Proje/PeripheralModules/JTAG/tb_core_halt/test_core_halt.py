"""
cocotb testi: GERCEK cv32e40p_top + obi_addr_demux + dm_obi_top zincirini
(top.sv'deki ile ayni RTL) JTAG/TAP katmani OLMADAN test eder -- DMI
dogrudan bu testten suruluyor.

Amac: Gercek donanimda openocd "halt" komutunun neden hicbir zaman
basarili olmadigini (dmstatus hep ayni deger donuyor) izole etmek.
JTAG->DTM->DMI zincirinin calistigi gercek donanimdaki openocd -d3
logundan zaten kanitlandi (dmcontrol yazma/okuma dogru calisiyor);
burada hic dokunmuyoruz. Sadece "haltreq DMI'den yazilinca cekirdek
gercekten halt oluyor mu" sorusuna cevap ariyoruz.

Basarisiz olursa bile SUMMARY bolumu zincirin TAM OLARAK nerede
kirildigini gosterir:
  debug_req_o          -> DM, cekirdege halt istegi gonderdi mi
  instr_dbg_req_o      -> cekirdek debug ROM penceresinden fetch denedi mi
  instr_dbg_gnt_o      -> DM bu fetch'i kabul etti mi
  instr_dbg_rvalid_o   -> fetch tamamlandi mi (dm_mem cevap verdi mi)
  debug_halted_o       -> cekirdegin KENDI ic sinyali halt oldu diyor mu
  dmstatus.allhalted    -> DM'in yazilim-tabanli (debug ROM'un dm_mem'e
                           yazmasiyla) halted tespiti calisti mi
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
            data = int(dut.dmi_resp_data_o.value)
            return data
    raise TimeoutError(f"dmi_read(addr=0x{addr:x}): cevap hic gelmedi")


@cocotb.test()
async def test_core_halt(dut):
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

        if i % 250 == 0:
            status = await dmi_read(dut, DMSTATUS)
            allhalted = (status >> 9) & 1
            dut._log.info(
                f"[cycle {i}] dmstatus=0x{status:08x} allhalted={allhalted} "
                f"debug_req_o={int(dut.debug_req_o.value)} "
                f"instr_dbg_req_seen={saw_instr_dbg_req} "
                f"instr_dbg_gnt_seen={saw_instr_dbg_gnt} "
                f"instr_dbg_rvalid_seen={saw_instr_dbg_rvalid} "
                f"core_debug_halted_o_seen={saw_core_halted}"
            )
            if allhalted:
                halted = True
                break

    dut._log.info("----- SUMMARY -----")
    dut._log.info(f"debug_req_o hic 1 oldu mu (DM, cekirdege istek gonderdi):        {saw_debug_req}")
    dut._log.info(f"instr_dbg_req_o hic 1 oldu mu (cekirdek debug ROM'a fetch denedi): {saw_instr_dbg_req}")
    dut._log.info(f"instr_dbg_gnt_o hic 1 oldu mu (DM bu fetch'i kabul etti):          {saw_instr_dbg_gnt}")
    dut._log.info(f"instr_dbg_rvalid_o hic 1 oldu mu (fetch tamamlandi):               {saw_instr_dbg_rvalid}")
    dut._log.info(f"debug_halted_o (cekirdegin kendi sinyali) hic 1 oldu mu:           {saw_core_halted}")
    dut._log.info(f"dmstatus.allhalted sonunda 1 oldu mu:                              {halted}")

    assert halted, "Hart DMI uzerinden hic halted raporlamadi -- SUMMARY'e bakip zincirin nerede kirildigina bakin"
