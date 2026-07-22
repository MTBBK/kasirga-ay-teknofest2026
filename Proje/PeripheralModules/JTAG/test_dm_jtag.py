"""
cocotb testi: dm_jtag_subsystem (bizim yazdigimiz kod) + orijinal,
degistirilmemis riscv-dbg/common_cells IP zinciri.

Amac: JTAG TAP + DTM + Debug Module zincirinin gercekten calistigini
kanitlamak -- Vivado XSIM'deki donmalardan bagimsiz, ayri bir
simulator (Verilator) + ayri bir surme mekanizmasi (cocotb coroutine,
SV @(posedge) degil) ile.
"""
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge

EXPECTED_IDCODE = 0x249511C3


async def jtag_drive(dut, tms, tdi=0):
    """TMS/TDI'yi dusen kenardan hemen sonra ayarla (standart, yaris
    durumundan arindirilmis JTAG surme yontemi)."""
    await FallingEdge(dut.jtag_tck_i)
    dut.jtag_tms_i.value = tms
    dut.jtag_tdi_i.value = tdi


@cocotb.test()
async def test_idcode(dut):
    # --- Saatler ---
    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())
    # JTAG saati: clk_i ile tam sayi oraninda olmayan bir periyot (asimetrik)
    cocotb.start_soon(_jtag_clock(dut))

    # --- Reset ---
    dut.rst_ni.value = 0
    dut.jtag_trst_ni.value = 0
    dut.jtag_tms_i.value = 1
    dut.jtag_tdi_i.value = 0
    dut.instr_dbg_req_i.value = 0
    dut.instr_dbg_addr_i.value = 0
    dut.s_axi_awvalid_i.value = 0
    dut.s_axi_wvalid_i.value = 0
    dut.s_axi_bready_i.value = 1
    dut.s_axi_arvalid_i.value = 0
    dut.s_axi_rready_i.value = 1

    await Timer(100, units="ns")
    dut.rst_ni.value = 1
    dut.jtag_trst_ni.value = 1
    await Timer(100, units="ns")

    dut._log.info("JTAG IDCODE testi basliyor...")

    # RTI -> Select-DR -> Capture-DR -> Shift-DR
    # Kor kenar sayimi yerine, TAP'in gercekten ShiftDr durumuna (=4)
    # gectigini DOGRULUYORUZ -- bu, hangi arac/sarmalayici kullanilirsa
    # kullanilsin dogru sonuc verir.
    TAP_PATH = dut.u_dmi_jtag.i_dmi_jtag_tap
    await jtag_drive(dut, 0); await RisingEdge(dut.jtag_tck_i)
    await jtag_drive(dut, 1); await RisingEdge(dut.jtag_tck_i)
    await jtag_drive(dut, 0); await RisingEdge(dut.jtag_tck_i)
    await jtag_drive(dut, 0); await RisingEdge(dut.jtag_tck_i)

    guard = 0
    while int(TAP_PATH.tap_state_q.value) != 4:  # 4 = ShiftDr
        await jtag_drive(dut, 0); await RisingEdge(dut.jtag_tck_i)
        guard += 1
        assert guard < 10, "ShiftDr durumuna 10 cevrimde ulasilamadi"
    dut._log.info(f"ShiftDr durumuna ulasildi (ekstra {guard} cevrim).")

    idcode = 0
    for i in range(32):
        tms = 1 if i == 31 else 0
        await jtag_drive(dut, tms, 0)
        bit = int(dut.jtag_tdo_o.value)
        idcode |= (bit << i)
        await RisingEdge(dut.jtag_tck_i)

    await jtag_drive(dut, 1); await RisingEdge(dut.jtag_tck_i)  # Exit1->Update
    await jtag_drive(dut, 0); await RisingEdge(dut.jtag_tck_i)  # Update->RTI

    dut._log.info(f"Okunan IDCODE : 0x{idcode:08x}")
    dut._log.info(f"Beklenen IDCODE: 0x{EXPECTED_IDCODE:08x}")

    assert idcode == EXPECTED_IDCODE, \
        f"IDCODE eslesmedi: okunan=0x{idcode:08x} beklenen=0x{EXPECTED_IDCODE:08x}"

    dut._log.info("BASARILI: dm_jtag_subsystem IDCODE dogru okundu.")


async def _jtag_clock(dut):
    dut.jtag_tck_i.value = 0
    await Timer(23, units="ns")
    while True:
        await Timer(53, units="ns")
        dut.jtag_tck_i.value = 1
        await Timer(47, units="ns")
        dut.jtag_tck_i.value = 0
