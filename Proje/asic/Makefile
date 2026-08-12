# TEKNOFEST 2026 - ASIC Sentez ve Fiziksel Tasarim Makefile'i

# Varsayilan is parcacigi sayisi (Kendi islemcine gore -j parametresini ezebilirsin)
CORES ?= 20

.PHONY: all asic_run asic_clean help

# Sadece 'make' yazildiginda calisacak varsayilan hedef
all: asic_run

# ASIC akisini baslatan hedef
asic_run:
	rm -rf run
	mkdir -p run
	librelane config.yaml -j$(CORES) --force-run-dir run

# Temizlik hedefi
asic_clean:
	@echo "==> Sentez ciktilari ve loglar temizleniyor..."
	rm -rf run
	@echo "==> Temizlik tamamlandi."

# Yardim menusu
help:
	@echo "Kullanim:"
	@echo "  make                 - Eski ciktilari siler ve akisi varsayilan cekirdekle baslatir."
	@echo "  make asic_run        - Eski ciktilari siler ve akisi varsayilan cekirdekle baslatir."
	@echo "  make asic_clean      - 'run' klasorunu ve log dosyalarini siler."
	@echo "  make CORES=8 asic_run - Akisi ozel cekirdek sayisiyla (orn: 8) baslatir."
