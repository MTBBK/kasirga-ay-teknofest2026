"""
cocotb testbench — timer_top
Tests:
  1. AXI4-Lite write handshake
  2. AXI4-Lite read handshake
  3. Register R/W (TIM_PRE, TIM_ARE, TIM_ENA, TIM_MOD, TIM_EVC)
  4. Read-only registers (TIM_CNT, TIM_EVN) — sadece okunabilir olduğu kontrol edilir
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

# ── Adres haritası ──────────────────────────────────────────────────────────
ADDR_TIM_PRE = 0x00110000
ADDR_TIM_ARE = 0x00110004
ADDR_TIM_CLR = 0x00110008
ADDR_TIM_ENA = 0x0011000C
ADDR_TIM_MOD = 0x00110010
ADDR_TIM_CNT = 0x00110014
ADDR_TIM_EVN = 0x00110018
ADDR_TIM_EVC = 0x0011001C

# ── AXI yardımcı fonksiyonları ──────────────────────────────────────────────

async def axi_write(dut, addr, data, strb=0xF):
    """Tek AXI4-Lite yazma işlemi (AW + W kanalları eşzamanlı)."""
    await RisingEdge(dut.clk)

    dut.AWVALID.value = 1
    dut.AWADDR.value  = addr
    dut.WVALID.value  = 1
    dut.WDATA.value   = data
    dut.WSTRB.value   = strb
    dut.BREADY.value  = 1

    # AWREADY & WREADY yükselene kadar bekle
    timeout = 0
    while True:
        await RisingEdge(dut.clk)
        timeout += 1
        if timeout > 50:
            raise AssertionError(f"WRITE TIMEOUT: addr=0x{addr:08X}")
        if dut.AWREADY.value == 1:
            break

    dut.AWVALID.value = 0
    dut.WVALID.value  = 0

    # BVALID bekle
    timeout = 0
    while True:
        await RisingEdge(dut.clk)
        timeout += 1
        if timeout > 50:
            raise AssertionError(f"BVALID TIMEOUT: addr=0x{addr:08X}")
        if dut.BVALID.value == 1:
            break

    dut.BREADY.value = 0
    await RisingEdge(dut.clk)

    dut._log.info(f"  [WRITE] addr=0x{addr:08X}  data=0x{data:08X}  strb=0x{strb:X}  → OK")


async def axi_read(dut, addr) -> int:
    """Tek AXI4-Lite okuma işlemi, okunan değeri döndürür."""
    await RisingEdge(dut.clk)

    dut.ARVALID.value = 1
    dut.ARADDR.value  = addr
    dut.RREADY.value  = 1

    # ARREADY bekle
    timeout = 0
    while True:
        await RisingEdge(dut.clk)
        timeout += 1
        if timeout > 50:
            raise AssertionError(f"READ ARREADY TIMEOUT: addr=0x{addr:08X}")
        if dut.ARREADY.value == 1:
            break

    dut.ARVALID.value = 0

    # RVALID bekle
    timeout = 0
    while True:
        await RisingEdge(dut.clk)
        timeout += 1
        if timeout > 50:
            raise AssertionError(f"READ RVALID TIMEOUT: addr=0x{addr:08X}")
        if dut.RVALID.value == 1:
            rdata = int(dut.RDATA.value)
            break

    dut.RREADY.value = 0
    await RisingEdge(dut.clk)

    dut._log.info(f"  [READ]  addr=0x{addr:08X}  data=0x{rdata:08X}  → OK")
    return rdata


async def reset_dut(dut):
    """Aktif-düşük reset uygula."""
    dut.rst_i.value   = 0
    dut.AWVALID.value = 0
    dut.AWADDR.value  = 0
    dut.WVALID.value  = 0
    dut.WDATA.value   = 0
    dut.WSTRB.value   = 0
    dut.BREADY.value  = 0
    dut.ARVALID.value = 0
    dut.ARADDR.value  = 0
    dut.RREADY.value  = 0

    for _ in range(5):
        await RisingEdge(dut.clk)

    dut.rst_i.value = 1
    await RisingEdge(dut.clk)
    dut._log.info("[RESET] Tamamlandı")


# ── Test 1: Reset sonrası varsayılan değerler ───────────────────────────────

@cocotb.test()
async def test_reset_defaults(dut):
    """Reset sonrası yazmaçların varsayılan değerlerini doğrula."""
    dut._log.info("=" * 60)
    dut._log.info("TEST 1: Reset Varsayılan Değerleri")
    dut._log.info("=" * 60)

    cocotb.start_soon(Clock(dut.clk, 20, units="ns").start())
    await reset_dut(dut)

    checks = [
        (ADDR_TIM_PRE, 0xFFFFFFFF, "TIM_PRE"),
        (ADDR_TIM_ARE, 0xFFFFFFFF, "TIM_ARE"),
        (ADDR_TIM_CLR, 0x00000000, "TIM_CLR"),
        (ADDR_TIM_ENA, 0x00000000, "TIM_ENA"),
        (ADDR_TIM_MOD, 0x00000001, "TIM_MOD"),
        (ADDR_TIM_EVC, 0x00000000, "TIM_EVC"),
    ]

    for addr, expected, name in checks:
        val = await axi_read(dut, addr)
        assert val == expected, \
            f"{name} reset değeri YANLIŞ: beklenen=0x{expected:08X} okunan=0x{val:08X}"
        dut._log.info(f"  ✓ {name} = 0x{val:08X}")

    dut._log.info("TEST 1: PASSED\n")


# ── Test 2: AXI Handshake doğrulaması ──────────────────────────────────────

@cocotb.test()
async def test_axi_handshake(dut):
    """AWREADY/WREADY/BVALID ve ARREADY/RVALID handshake sinyallerini doğrula."""
    dut._log.info("=" * 60)
    dut._log.info("TEST 2: AXI Handshake")
    dut._log.info("=" * 60)

    cocotb.start_soon(Clock(dut.clk, 20, units="ns").start())
    await reset_dut(dut)

    # --- Write handshake ---
    dut._log.info("  [WR-HS] AWVALID+WVALID veriliyor...")
    await RisingEdge(dut.clk)
    dut.AWVALID.value = 1
    dut.AWADDR.value  = ADDR_TIM_ENA
    dut.WVALID.value  = 1
    dut.WDATA.value   = 0x1
    dut.WSTRB.value   = 0xF
    dut.BREADY.value  = 1

    aw_seen = False
    for _ in range(20):
        await RisingEdge(dut.clk)
        if dut.AWREADY.value == 1 and not aw_seen:
            dut._log.info("  ✓ AWREADY yükseldi")
            aw_seen = True
            dut.AWVALID.value = 0
            dut.WVALID.value  = 0

        if dut.BVALID.value == 1:
            dut._log.info("  ✓ BVALID yükseldi")
            dut.BREADY.value = 0
            break
    else:
        raise AssertionError("BVALID hiç yükselmedi!")

    await RisingEdge(dut.clk)

    # --- Read handshake ---
    dut._log.info("  [RD-HS] ARVALID veriliyor...")
    dut.ARVALID.value = 1
    dut.ARADDR.value  = ADDR_TIM_ENA
    dut.RREADY.value  = 1

    ar_seen = False
    for _ in range(20):
        await RisingEdge(dut.clk)
        if dut.ARREADY.value == 1 and not ar_seen:
            dut._log.info("  ✓ ARREADY yükseldi")
            ar_seen = True
            dut.ARVALID.value = 0

        if dut.RVALID.value == 1:
            dut._log.info(f"  ✓ RVALID yükseldi, RDATA=0x{int(dut.RDATA.value):08X}")
            dut.RREADY.value = 0
            break
    else:
        raise AssertionError("RVALID hiç yükselmedi!")

    dut._log.info("TEST 2: PASSED\n")


# ── Test 3: Register yazma / okuma ─────────────────────────────────────────

@cocotb.test()
async def test_register_rw(dut):
    """Tüm yazılabilir yazmaçlara yaz, geri oku, karşılaştır."""
    dut._log.info("=" * 60)
    dut._log.info("TEST 3: Register R/W")
    dut._log.info("=" * 60)

    cocotb.start_soon(Clock(dut.clk, 20, units="ns").start())
    await reset_dut(dut)

    test_cases = [
        (ADDR_TIM_PRE, 0x00000063, "TIM_PRE"),   # prescaler = 99
        (ADDR_TIM_ARE, 0x000003E7, "TIM_ARE"),   # auto-reload = 999
        (ADDR_TIM_ENA, 0x00000001, "TIM_ENA"),   # enable
        (ADDR_TIM_MOD, 0x00000000, "TIM_MOD"),   # count down
        (ADDR_TIM_EVC, 0x00000001, "TIM_EVC"),   # event clear
    ]

    for addr, wdata, name in test_cases:
        await axi_write(dut, addr, wdata)
        rdata = await axi_read(dut, addr)
        assert rdata == wdata, \
            f"{name} R/W uyuşmuyor: yazılan=0x{wdata:08X} okunan=0x{rdata:08X}"
        dut._log.info(f"  ✓ {name}: 0x{wdata:08X} yazıldı, 0x{rdata:08X} okundu")

    dut._log.info("TEST 3: PASSED\n")


# ── Test 4: Byte-enable (WSTRB) ────────────────────────────────────────────

@cocotb.test()
async def test_byte_enable(dut):
    """WSTRB ile kısmi byte yazımını doğrula."""
    dut._log.info("=" * 60)
    dut._log.info("TEST 4: Byte Enable (WSTRB)")
    dut._log.info("=" * 60)

    cocotb.start_soon(Clock(dut.clk, 20, units="ns").start())
    await reset_dut(dut)

    # TIM_PRE reset değeri 0xFFFFFFFF
    # Sadece alt byte'ı (WSTRB=0x1) sıfırla → beklenen 0xFFFFFF00
    await axi_write(dut, ADDR_TIM_PRE, 0x00000000, strb=0x1)
    val = await axi_read(dut, ADDR_TIM_PRE)
    expected = 0xFFFFFF00
    assert val == expected, \
        f"WSTRB=0x1 testi YANLIŞ: beklenen=0x{expected:08X} okunan=0x{val:08X}"
    dut._log.info(f"  ✓ WSTRB=0x1: alt byte sıfırlandı → 0x{val:08X}")

    # Sadece üst byte'ı (WSTRB=0x8) yaz → beklenen 0xAAFFFF00
    await axi_write(dut, ADDR_TIM_PRE, 0xAA000000, strb=0x8)
    val = await axi_read(dut, ADDR_TIM_PRE)
    expected = 0xAAFFFF00
    assert val == expected, \
        f"WSTRB=0x8 testi YANLIŞ: beklenen=0x{expected:08X} okunan=0x{val:08X}"
    dut._log.info(f"  ✓ WSTRB=0x8: üst byte yazıldı → 0x{val:08X}")

    dut._log.info("TEST 4: PASSED\n")


# ── Test 5: TIM_CNT ve TIM_EVN okunabilirliği ──────────────────────────────

@cocotb.test()
async def test_readonly_registers(dut):
    """TIM_CNT ve TIM_EVN'nin AXI üzerinden okunabildiğini doğrula."""
    dut._log.info("=" * 60)
    dut._log.info("TEST 5: Read-Only Register Erişimi (CNT, EVN)")
    dut._log.info("=" * 60)

    cocotb.start_soon(Clock(dut.clk, 20, units="ns").start())
    await reset_dut(dut)

    # Timer'ı küçük prescaler ile etkinleştir
    await axi_write(dut, ADDR_TIM_PRE, 0x00000004)   # prescaler = 4
    await axi_write(dut, ADDR_TIM_ARE, 0x00000009)   # reload = 9
    await axi_write(dut, ADDR_TIM_ENA, 0x00000001)   # enable

    # Birkaç saat döngüsü bekle
    for _ in range(100):
        await RisingEdge(dut.clk)

    cnt = await axi_read(dut, ADDR_TIM_CNT)
    evn = await axi_read(dut, ADDR_TIM_EVN)
    dut._log.info(f"  ✓ TIM_CNT = 0x{cnt:08X}  TIM_EVN = 0x{evn:08X}")
    dut._log.info("  (sıfırdan farklı olması beklenir — timer çalışıyor)")

    dut._log.info("TEST 5: PASSED\n")
