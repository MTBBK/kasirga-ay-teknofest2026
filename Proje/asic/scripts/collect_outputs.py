#!/usr/bin/env python3
import os
import shutil
import json
from pathlib import Path

# =======================================================================
# 1. METRİK HARİTALAMASI (Hangi adımda, hangi değerler rapora yazılacak?)
# =======================================================================
# LibreLane'in ana metrics.json dosyasindaki anahtar kelimeleri (keys) icerir.
METRIC_MAPPINGS = {
    "lint": [
        "design__lint_error__count",
        "design__lint_warning__count",
        "design__lint_timing_construct__count",
        "design__inferred_latch__count"
    ],
    "synth": [
        "design__instance__count",
        "design__instance__area__stdcell",
        "design__instance__count__unmapped",
        "synth__design__inferred_latch__count"
    ],
    "placement": [
        "design__instance__displacement__total",
        "design__instance__displacement__mean",
        "design__instance__displacement__max"
    ],
    "routing": [
        "route__wirelength",
        "route__vias",
        "route__drc_errors__count",
        "route__antenna_violations__count"
    ],
    "timing": [
        "timing__setup__ws",
        "timing__setup__tns",
        "timing__setup__wns",
        "timing__hold__ws",
        "timing__hold__tns",
        "timing__hold__wns",
        "clock__skew__worst_hold",
        "clock__skew__worst_setup"
    ],
    "power": [
        "power__internal__total",
        "power__switching__total",
        "power__leakage__total",
        "power__total"
    ],
    "signoff": [
        "magic__drc_error__count",
        "netgen__lvs_error__count"
    ]
}

# =======================================================================
# 2. LOG VE ÇIKTI DOSYALARI HARİTALAMASI
# =======================================================================
FILE_MAP = [
    # Format: ("Kaynak Dosya Yolu", "Hedef Ana Klasör", "Hedef Alt Klasör")
    
    #5 Raporlar (Reports)
    #5.1 Genel Akış Raporları
    #5.2 Lint Raporları
    #5.3 Sentez Raporları
    #5.4 Fiziksel Tasarım Raporları 
    #5.5 Zamanlama Raporları
    #5.6 Fiziksel Signoff Raporları
    #5.7 Güç ve IR Drop Raporları
    ("01-verilator-lint/verilator-lint.log", "reports", "lint"),
    ("02-yosys-synthesis/yosys.stat.rpt", "reports", "synth"),
    ("02-yosys-synthesis/yosys.log", "reports", "synth"),
    ("10-openroad-globalrouting/globalroute.log", "reports", "routing"),
    ("11-openroad-detailedrouting/detailedroute.log", "reports", "routing"),
    ("15-openroad-stapostpnr/timing.rpt", "reports", "timing"),
    ("15-openroad-stapostpnr/power.rpt", "reports", "power"),
    ("16-magic-drc/magic.drc.rpt", "reports", "signoff"),
    
    #6 Fiziksel ve Tasarım Çıktıları (Results)
    #6.1 Zorunlu Fiziksel Tasarım Görünümleri
    ("final/def/top.def", "results", "def"),
    ("final/gds/top.gds", "results", "gds"),
    ("final/lef/top.lef", "results", "lef"),
    
    #6.2 Zorunlu Ek Çıktılar
    ("final/verilog/top_pnr.v", "results", "netlist"),
    
    #6.3 Önerilen Ek Çıktılar
    
    ("final/odb/top.odb", "results", "odb"),
    ("final/sdc/top.sdc", "results", "sdc"),
    #SDF
    #spef
    ("final/spice/top.spice", "results", "spice"),
    ("final/lib/top.lib", "results", "lib"),
    ("final/mag/top.mag", "results", "mag"),
    ("final/metrics.csv", "results", "metrics"),
    ("final/metrics.json", "results", "metrics")
]

# =======================================================================
# ANA İŞLEM FONKSİYONLARI
# =======================================================================

def split_metrics(source_dir, reports_dir):
    """Ana metrics.json dosyasını okuyup adımlara göre parçalar."""
    main_metrics_path = source_dir / "final" / "metrics.json"
    
    if not main_metrics_path.exists():
        print(f"[UYARI] Ana metrik dosyası bulunamadı: {main_metrics_path}")
        return

    with open(main_metrics_path, 'r') as f:
        try:
            full_data = json.load(f)
        except json.JSONDecodeError:
            print("[HATA] metrics.json okunamadi. Dosya bozuk olabilir.")
            return

    # Her bir TEKNOFEST kategorisi için ayri dosya olustur
    for category, keys in METRIC_MAPPINGS.items():
        # Eger o anahtar bulunamazsa "Bulunamadi" veya 0 ata
        category_data = {k: full_data.get(k, "Bulunamadi") for k in keys}
        
        target_folder = reports_dir / category
        target_folder.mkdir(parents=True, exist_ok=True)
        
        target_file = target_folder / f"{category}_metrics.json"
        
        with open(target_file, 'w') as f:
            json.dump(category_data, f, indent=4)
            
        print(f"[METRİK] {category.upper()} metrikleri ayrıştırıldı -> {target_file}")

def copy_log_files(source_dir, base_target_dir):
    """Belirlenen log ve GDS/LEF cikti dosyalarini kopyalar."""
    for src_subpath, target_base, target_subfolder in FILE_MAP:
        src_path = source_dir / src_subpath
        dest_folder = base_target_dir / target_base / target_subfolder
        dest_path = dest_folder / src_path.name

        if src_path.exists():
            dest_folder.mkdir(parents=True, exist_ok=True)
            try:
                shutil.copy2(src_path, dest_path)
                print(f"[DOSYA] Kopyalandi: {src_path.name} -> {target_base}/{target_subfolder}/")
            except Exception as e:
                print(f"[HATA] {src_path.name} kopyalanırken hata oluştu: {e}")
        else:
            # Bazi adimlar hatadan dolayi uretilmemis olabilir
            pass 

def main():
    print("="*50)
    print("TEKNOFEST ÇIKTI VE METRİK TOPLAMA SİSTEMİ")
    print("="*50)
    
    # Dizinleri Ayarla
    source_dir = Path("run")           # LibreLane'in ciktilari verdigi dizin
    base_target_dir = Path("asic")     # Bizim asil teslim dizinimiz
    reports_dir = base_target_dir / "reports"
    
    if not source_dir.exists():
        print("[KRİTİK HATA] 'run' dizini bulunamadi. Lütfen LibreLane akisinin tamamlandigindan emin olun.")
        return

    # 1. Loglari ve GDS'leri Kopyala
    copy_log_files(source_dir, base_target_dir)
    
    print("-" * 50)
    
    # 2. Metrikleri Parcala ve Klasorlere Dagıt
    split_metrics(source_dir, reports_dir)
    
    print("="*50)
    print("ISLEM TAMAMLANDI! Teslim klasor yapiniz asic/reports ve asic/results altinda hazir.")

if __name__ == "__main__":
    main()
