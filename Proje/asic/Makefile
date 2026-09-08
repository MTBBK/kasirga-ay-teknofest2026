# TEKNOFEST 2026 - ASIC Sentez ve Fiziksel Tasarim Makefile'i

# Varsayilan is parcacigi sayisi (Kendi islemcine gore -j parametresini ezebilirsin)
CORES ?= 8

.PHONY: all asic_run asic_clean help asic_verify

# Sadece 'make' yazildiginda calisacak varsayilan hedef
all: asic_run

# ASIC akisini baslatan hedef
asic_run:
	rm -rf run/*
	librelane config.yaml -j$(CORES) --force-run-dir run

# Temizlik hedefi
asic_clean:
	@echo "==> Sentez ciktilari ve loglar temizleniyor..."
	rm -rf run/*
	@echo "==> Temizlik tamamlandi."
	
	
	
asic_verify:
	@echo "=================================================="
	@echo "TEKNOFEST Teslim Kontrolu (asic_verify)"
	@echo "=================================================="
	@fail=0; \
	check() { \
		if [ -e "$$1" ]; then \
			echo "[OK]    $$1"; \
		else \
			echo "[EKSIK] $$1"; \
			fail=1; \
		fi; \
	}; \
	echo "--- Bolum 6.1: Zorunlu Fiziksel Tasarim Gorunumleri ---"; \
	check results/gds/top.gds; \
	check results/lef/top.lef; \
	check results/def/top.def; \
	echo "--- Bolum 6.2: Zorunlu Ek Ciktilar ---"; \
	check results/netlist/top_synth.v; \
	check results/netlist/top_pnr.v; \
	check results/netlist/top_powered.v; \
	check results/sdc/pnr.sdc; \
	check results/sdc/signoff.sdc; \
	check results/spef/min; \
	check results/spef/nom; \
	check results/spef/max; \
	check results/spice/top.spice; \
	check results/config/resolved.json; \
	check results/metrics/metrics.csv; \
	check results/metrics/metrics.json; \
	echo "--- Bolum 5.1: Genel Akis Raporlari ---"; \
	check reports/general/flow.log; \
	check reports/general/warning.log; \
	check reports/general/error.log; \
	check reports/general/resolved.json; \
	check reports/general/metrics.csv; \
	check reports/general/metrics.json; \
	echo "--- Bolum 5.2: Lint Raporlari ---"; \
	check reports/lint/verilator_lint.log; \
	echo "--- Bolum 5.3: Sentez Raporlari ---"; \
	check reports/synthesis; \
	echo "--- Bolum 5.4: Fiziksel Tasarim Raporlari ---"; \
	check reports/physical/wire_lengths.csv; \
	check reports/physical/top.drc; \
	check reports/physical/detailedrouting; \
	echo "--- Bolum 5.5: Zamanlama Raporlari ---"; \
	check reports/timing/summary.rpt; \
	check reports/timing/max_ss_100C_1v60; \
	check reports/timing/min_ss_100C_1v60; \
	check reports/timing/nom_tt_025C_1v80; \
	echo "--- Bolum 5.6: Fiziksel Signoff Raporlari ---"; \
	check reports/drc/magic; \
	check reports/drc/klayout; \
	check reports/lvs; \
	check reports/antenna/pre_route; \
	check reports/signoff/xor.xml; \
	check reports/signoff/manufacturability; \
	check reports/signoff/disconnectedpins; \
	check reports/pdn/vccd1-grid-errors.rpt; \
	check reports/pdn/vssd1-grid-errors.rpt; \
	echo "--- Bolum 5.7: Guc ve IR-Drop Raporlari ---"; \
	check reports/power; \
	echo "--- Ortam ve Otomasyon ---"; \
	check environment/flake.nix; \
	check environment/flake.lock; \
	check environment/versions.txt; \
	check README.md; \
	echo "=================================================="; \
	if [ $$fail -eq 0 ]; then \
		echo "SONUC: Tum zorunlu dosyalar mevcut."; \
	else \
		echo "SONUC: EKSIK dosyalar var - yukaridaki [EKSIK] satirlarini gider."; \
		exit 1; \
	fi
# Yardim menusu
help:
	@echo "Kullanim:"
	@echo "  make                 - Eski ciktilari siler ve akisi varsayilan cekirdekle baslatir."
	@echo "  make asic_run        - Eski ciktilari siler ve akisi varsayilan cekirdekle baslatir."
	@echo "  make asic_clean      - 'run' klasorunu ve log dosyalarini siler."
	@echo "  make CORES=8 asic_run - Akisi ozel cekirdek sayisiyla (orn: 8) baslatir."
