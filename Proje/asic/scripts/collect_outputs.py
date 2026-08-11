#!/usr/bin/env python3
import os
import shutil
from pathlib import Path

def collect_asic_outputs(design_name="top"):
    """
    Belirlenen (X) kaynak dizininden, (Y) hedef dizinlerine kopyalama/taşıma yapar.
    """
    # Kaynak (X) ve Hedef (Y) Ana Dizinleri
    source_dir = Path("asic/run")
    reports_dir = Path("asic/reports")
    results_dir = Path("asic/results")

    # Format: (Kaynak Alt Yol/Dosya, Hedef Ana Dizin, Hedef Alt Klasör)
    # Bu listeyi dokümandaki diğer çıktılara göre kolayca genişletebilirsin.
    file_map = [
        # --- 5.1 Genel Akış Raporları ---
        ("flow.log", reports_dir, "general"),
        ("resolved.json", reports_dir, "general"),
        ("warning.log", reports_dir, "general"),
        ("error.log", reports_dir, "general"),
        ("final/metrics.json", reports_dir, "general"),
        ("final/metrics.csv", reports_dir, "general"),
        
        # --- 6.1 Zorunlu Fiziksel Tasarım Görünümleri ---
        (f"01-verilator-lint/verilator-lint.log", reports_dir, "lint"),
        (f"final/gds/{design_name}.gds", results_dir, "gds"),
        (f"final/lef/{design_name}.lef", results_dir, "lef"),
        
        # --- 6.2 Zorunlu Ek Çıktılar ---
        (f"synthesis/{design_name}_synth.v", results_dir, "netlist"),
        (f"final/verilog/{design_name}_pnr.v", results_dir, "netlist"),
        ("metrics.csv", results_dir, "metrics"),
        ("metrics.json", results_dir, "metrics"),
        
        # --- 5.5 Zamanlama Raporları (Örnek: ss_100C_1v60 köşesi) ---
        ("reports/signoff/summary.rpt", reports_dir, "timing"),
        ("reports/signoff/max_ss_100C_1v60/max.rpt", reports_dir, "timing/max_ss_100C_1v60"),
    ]

    print(f"[{design_name}] Çıktı toplama işlemi başlatılıyor...")

    for src_subpath, target_base, target_subfolder in file_map:
        src_path = source_dir / src_subpath
        dest_folder = target_base / target_subfolder
        dest_path = dest_folder / src_path.name

        # Dosya kaynak dizinde mevcut mu kontrolü
        if src_path.exists():
            # Hedef klasör yoksa oluştur (içiçe klasörleri otomatik yaratır)
            dest_folder.mkdir(parents=True, exist_ok=True)
            
            try:
                # Orijinal dosyayı silmeden kopyalamak ASIC akışlarında daha güvenlidir.
                # Eğer tamamen taşımak (move) istersen shutil.move() kullanabilirsin.
                shutil.copy2(src_path, dest_path)
                print(f"[BAŞARILI] {src_path.name} -> {dest_folder}/")
            except Exception as e:
                print(f"[HATA] {src_path.name} kopyalanırken hata oluştu: {e}")
        else:
            print(f"[ATLANDI] Bulunamadı: {src_path}")

    print("Çıktı toplama işlemi tamamlandı.")

if __name__ == "__main__":
    # Script doğrudan çalıştırıldığında fonksiyonu çağır
    collect_asic_outputs()
