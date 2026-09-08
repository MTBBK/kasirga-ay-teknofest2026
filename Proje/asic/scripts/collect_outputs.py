#!/usr/bin/env python3
"""
TEKNOFEST 2026 - Cip Tasarim Yarismasi
ASIC akis ciktilarini asic/reports/ ve asic/results/ altina toplayan betik.

Bu betik asic/ dizini icerisinden calistirilmalidir:
    cd asic && python3 collect_outputs.py

Kaynak: run/ (LibreLane calisma dizini)
Hedef:  reports/ ve results/ (Bolum 4/5/6 gereksinimleri)
"""
import shutil
import json
from pathlib import Path

SOURCE = Path("run")
REPORTS = Path("reports")
RESULTS = Path("results")


def safe_copy(src: Path, dst: Path, label: str = ""):
    if not src.exists():
        print(f"[EKSIK] {label or src} bulunamadi: {src}")
        return False
    dst.parent.mkdir(parents=True, exist_ok=True)
    if src.is_dir():
        shutil.copytree(src, dst, dirs_exist_ok=True)
    else:
        shutil.copy2(src, dst)
    print(f"[OK] {src} -> {dst}")
    return True


def collect_general_reports():
    # 5.1 Genel Akis Raporlari
    safe_copy(SOURCE / "flow.log", REPORTS / "general" / "flow.log")
    safe_copy(SOURCE / "warning.log", REPORTS / "general" / "warning.log")
    safe_copy(SOURCE / "error.log", REPORTS / "general" / "error.log")
    safe_copy(SOURCE / "resolved.json", REPORTS / "general" / "resolved.json")
    safe_copy(SOURCE / "final" / "metrics.csv", REPORTS / "general" / "metrics.csv")
    safe_copy(SOURCE / "final" / "metrics.json", REPORTS / "general" / "metrics.json")


def collect_lint_reports():
    # 5.2 Lint Raporlari
    safe_copy(
        SOURCE / "01-verilator-lint" / "verilator-lint.log",
        REPORTS / "lint" / "verilator_lint.log",
    )
    # Waiver dosyasi varsa (opsiyonel)
    waiver = SOURCE / "01-verilator-lint" / "_waivers_output.vlt"
    if waiver.exists():
        safe_copy(waiver, REPORTS / "lint" / "waivers" / "_waivers_output.vlt")


def collect_synth_reports():
    # 5.3 Sentez Raporlari - asil raporlar reports/ alt dizininde:
    # stat.rpt, stat.json, latch.rpt, pre_synth_chk.rpt, chk.rpt
    src = SOURCE / "06-yosys-synthesis"
    reports_sub = src / "reports"
    if reports_sub.exists():
        safe_copy(reports_sub, REPORTS / "synthesis")
    log = src / "yosys-synthesis.log"
    if log.exists():
        safe_copy(log, REPORTS / "synthesis" / log.name)


def collect_physical_design_reports():
    # 5.4 Fiziksel Tasarim Raporlari
    safe_copy(
        SOURCE / "51-odb-reportwirelength" / "wire_lengths.csv",
        REPORTS / "physical" / "wire_lengths.csv",
    )
    # Detailed routing DRC - birden fazla dtr-run-N klasoru olabilir,
    # nihai top.drc kok dizinde
    safe_copy(
        SOURCE / "45-openroad-detailedrouting" / "top.drc",
        REPORTS / "physical" / "top.drc",
    )
    safe_copy(SOURCE / "45-openroad-detailedrouting", REPORTS / "physical" / "detailedrouting")
    safe_copy(SOURCE / "39-openroad-globalrouting", REPORTS / "physical" / "globalrouting")
    safe_copy(SOURCE / "49-odb-reportdisconnectedpins", REPORTS / "physical" / "disconnectedpins")


def collect_timing_reports():
    # 5.5 Zamanlama Raporlari - butun corner alt dizinleriyle birlikte
    src = SOURCE / "56-openroad-stapostpnr"
    if not src.exists():
        print(f"[EKSIK] STAPostPNR dizini bulunamadi: {src}")
        return
    dst = REPORTS / "timing"
    dst.mkdir(parents=True, exist_ok=True)
    safe_copy(src / "summary.rpt", dst / "summary.rpt")
    for corner_dir in src.iterdir():
        if corner_dir.is_dir() and corner_dir.name != "COMMANDS":
            safe_copy(corner_dir, dst / corner_dir.name)


def collect_signoff_reports():
    # 5.6 Fiziksel Signoff Raporlari
    safe_copy(SOURCE / "65-magic-drc" / "reports", REPORTS / "drc" / "magic")
    safe_copy(SOURCE / "66-klayout-drc" / "reports", REPORTS / "drc" / "klayout")
    safe_copy(SOURCE / "71-netgen-lvs" / "reports", REPORTS / "lvs")
    # Anten - iki checkantennas asamasi da olabilir (PnR sonrasi ve routing sonrasi)
    safe_copy(SOURCE / "40-openroad-checkantennas" / "reports", REPORTS / "antenna" / "pre_route")
    safe_copy(SOURCE / "47-openroad-checkantennas-1" / "reports", REPORTS / "antenna" / "post_route")
    safe_copy(SOURCE / "50-checker-disconnectedpins", REPORTS / "signoff" / "disconnectedpins")
    safe_copy(SOURCE / "63-klayout-xor" / "xor.xml", REPORTS / "signoff" / "xor.xml")
    safe_copy(SOURCE / "77-misc-reportmanufacturability", REPORTS / "signoff" / "manufacturability")


def collect_pdn_reports():
    # Tablo 8: asic/reports/pdn/ - PDN baglanti ve *-grid-errors.rpt raporlari
    # Confirmed: vssd1-grid-errors.rpt ve vccd1-grid-errors.rpt
    # run/21-openroad-generatepdn altinda uretiliyor.
    src = SOURCE / "21-openroad-generatepdn"
    if src.exists():
        for f in src.glob("*-grid-errors.rpt"):
            safe_copy(f, REPORTS / "pdn" / f.name)
    safe_copy(SOURCE / "30-checker-powergridviolations", REPORTS / "pdn" / "powergridviolations")


def collect_power_reports():
    # 5.7 Guc ve IR-Drop Raporlari
    # NOT: corner-ozgu power.rpt dosyalari OpenROAD.STAPostPNR tarafindan
    # uretilir ve zaten reports/timing/<corner>/ altina kopyalandi
    # (collect_timing_reports icinde). Burada sadece IRDropReport
    # ciktisini (irdrop.rpt, net-<net>.csv) topluyoruz.
    safe_copy(SOURCE / "57-openroad-irdropreport", REPORTS / "power")


def collect_physical_views():
    # 6.1 Zorunlu Fiziksel Tasarim Gorunumleri
    safe_copy(SOURCE / "final" / "gds" / "top.gds", RESULTS / "gds" / "top.gds")
    safe_copy(SOURCE / "final" / "lef" / "top.lef", RESULTS / "lef" / "top.lef")
    safe_copy(SOURCE / "final" / "def" / "top.def", RESULTS / "def" / "top.def")


def collect_mandatory_extras():
    # 6.2 Zorunlu Ek Ciktilar
    safe_copy(
        SOURCE / "06-yosys-synthesis" / "top.nl.v",
        RESULTS / "netlist" / "top_synth.v",
    )
    safe_copy(
        SOURCE / "final" / "nl" / "top.nl.v",
        RESULTS / "netlist" / "top_pnr.v",
    )
    safe_copy(
        SOURCE / "final" / "pnl" / "top.pnl.v",
        RESULTS / "netlist" / "top_powered.v",
    )
    # PnR ve signoff SDC - ayni dosya kullanildiysa tek kopya yeterli (README'de belirtilecek)
    safe_copy(SOURCE / "final" / "sdc" / "top.sdc", RESULTS / "sdc" / "pnr.sdc")
    safe_copy(SOURCE / "final" / "sdc" / "top.sdc", RESULTS / "sdc" / "signoff.sdc")
    # SPEF - her corner grubu icin
    spef_src = SOURCE / "final" / "spef"
    if spef_src.exists():
        for corner_dir in spef_src.iterdir():
            if corner_dir.is_dir():
                for f in corner_dir.glob("*.spef"):
                    safe_copy(f, RESULTS / "spef" / corner_dir.name / f.name)
    safe_copy(SOURCE / "final" / "spice" / "top.spice", RESULTS / "spice" / "top.spice")
    safe_copy(SOURCE / "final" / "metrics.csv", RESULTS / "metrics" / "metrics.csv")
    safe_copy(SOURCE / "final" / "metrics.json", RESULTS / "metrics" / "metrics.json")
    safe_copy(SOURCE / "resolved.json", RESULTS / "config" / "resolved.json")


def collect_optional_extras():
    # 6.3 Onerilen Ek Ciktilar
    safe_copy(SOURCE / "final" / "odb" / "top.odb", RESULTS / "odb" / "top.odb")
    safe_copy(SOURCE / "final" / "mag" / "top.mag", RESULTS / "mag" / "top.mag")
    safe_copy(SOURCE / "final" / "mag_gds" / "top.magic.gds", RESULTS / "gds" / "top_magic.gds")
    safe_copy(SOURCE / "final" / "klayout_gds" / "top.klayout.gds", RESULTS / "gds" / "top_klayout.gds")
    safe_copy(SOURCE / "final" / "render" / "top.png", RESULTS / "images" / "top.png")

    sdf_src = SOURCE / "final" / "sdf"
    if sdf_src.exists():
        for corner_dir in sdf_src.iterdir():
            if corner_dir.is_dir():
                safe_copy(corner_dir, RESULTS / "sdf" / corner_dir.name)

    lib_src = SOURCE / "final" / "lib"
    if lib_src.exists():
        for corner_dir in lib_src.iterdir():
            if corner_dir.is_dir():
                safe_copy(corner_dir, RESULTS / "lib" / corner_dir.name)


def clean_targets():
    """reports/ ve results/ dizinlerini onceki calismalardan kalan
    dosyalari birakmamak icin tamamen temizler, ardindan yeniden olusturur."""
    for d in (REPORTS, RESULTS):
        if d.exists():
            shutil.rmtree(d)
            print(f"[TEMIZ] Silindi: {d}")
        d.mkdir(parents=True, exist_ok=True)


BOOKKEEPING_NAMES = {
    "state_in.json",
    "state_out.json",
    "config.json",
    "runtime.txt",
    "COMMANDS",
}
BOOKKEEPING_SUFFIXES = (
    ".process_stats.json",
)
BOOKKEEPING_PREFIXES = (
    "_env",
)


def clean_bookkeeping(root: Path):
    """LibreLane'in adim ic mekanizmasina ait, rapor icerigi olmayan
    dosyalari (state_in/out.json, config.json, runtime.txt, COMMANDS,
    _env*.tcl, *.process_stats.json) reports/ altindan temizler."""
    removed = 0
    for p in root.rglob("*"):
        if not p.is_file():
            continue
        name = p.name
        if (
            name in BOOKKEEPING_NAMES
            or name.endswith(BOOKKEEPING_SUFFIXES)
            or name.startswith(BOOKKEEPING_PREFIXES)
        ):
            p.unlink()
            removed += 1
    print(f"[TEMIZ] {removed} adet LibreLane ic dosyasi kaldirildi ({root})")


def main():
    print("=" * 60)
    print("TEKNOFEST 2026 - Cikti Toplama")
    print("=" * 60)

    if not SOURCE.exists():
        print(f"[KRITIK] '{SOURCE}' dizini bulunamadi. Bu betik asic/ icinden calistirilmalidir.")
        return

    clean_targets()
    collect_general_reports()
    collect_lint_reports()
    collect_synth_reports()
    collect_physical_design_reports()
    collect_timing_reports()
    collect_signoff_reports()
    collect_pdn_reports()
    collect_power_reports()
    collect_physical_views()
    collect_mandatory_extras()
    collect_optional_extras()

    clean_bookkeeping(REPORTS)

    print("=" * 60)
    print("TAMAMLANDI. 'reports/' ve 'results/' altini kontrol edin.")
    print("EKSIK olarak isaretlenen her satiri asic/README.md'de aciklayin")
    print("ya da gercekten uretilmemisse nedenini belirtin.")
    print("=" * 60)


if __name__ == "__main__":
    main()
