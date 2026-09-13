# Üçüncü Taraf Bileşenler ve Lisanslar

Bu dosya, ASIC fiziksel tasarım akışında ve genel proje kapsamında
kullanılan üçüncü taraf RTL, IP ve araç bileşenlerini listelemektedir.
Kendi ekibimiz tarafından özgün olarak geliştirilen bileşenler bu
listeye dahil edilmemiştir (bkz. sayfa sonundaki not).

## 1. CV32E40P İşlemci Çekirdeği

- **Bileşen adı:** CV32E40P (RISC-V RV32IMFC işlemci çekirdeği)
- **Kaynak deposu:** https://github.com/openhwgroup/cv32e40p
- **Kullanılan commit kimliği:** `6033d2b`
- **Lisans:** Solderpad Hardware License, Version 2.1
  (SPDX-License-Identifier: `Apache-2.0 WITH SHL-2.1`)
- **Telif hakkı:** Copyright OpenHW Group ve katkıda bulunanlar
- **Takım tarafından yapılan değişiklikler:** Çekirdeğin RTL
  mantığında bir değişiklik yapılmamıştır; ASIC sentezine uygun hale
  getirmek amacıyla çekirdeğin saat girişine bir clock gate hücresi
  eklenmiştir (FPGA tarafında kullanılan davranışsal/örtük saat
  geçitleme modeli yerine, ASIC akışında standart hücre kütüphanesi
  tabanlı bir clock gate kullanılmıştır).
- **Kullanım yeri:** `Core/rtl/`

## 2. pulp_platform common_cells

- **Bileşen adı:** common_cells (PULP Platform yardımcı donanım
  blokları kütüphanesi)
- **Kaynak deposu:** https://github.com/pulp-platform/common_cells.git
- **Kullanılan commit kimliği:**
  `6aeee85d0a34fedc06c14f04fd6363c9f7b4eeea`
- **Lisans:** Solderpad Hardware License, Version 2.1
  (SPDX-License-Identifier: `Apache-2.0 WITH SHL-2.1`)
- **Kullanım yeri:** `Core/rtl/vendor/pulp_platform_common_cells/`
- **Not:** Bu, ASIC akışında ve ana çekirdek (CV32E40P) ile birlikte
  kullanılan sürümdür. Projede ayrıca JTAG debug modülü entegrasyonu
  için farklı, bu sürümle uyumsuz bir common_cells sürümü/dalı
  kullanılmaktadır; bu uyumsuzluk nedeniyle JTAG arayüzü bu ASIC
  teslimine dahil edilmemiştir (bkz. `asic/README.md` Bölüm 9.9).
- **Hariç tutulan alt dizinler:** `.github`, `.gitignore`,
  `.gitlab-ci.yml`, `.travis.yml`, `ci/`, `Bender.yml`,
  `CHANGELOG.md`, `LICENSE`, `Makefile`, `README.md`, `formal/`,
  `ips_list.yml`, `lint/`, `src_files.yml`, `test/`

## 3. SRAM Makrosu

- **Bileşen adı:** `sky130_sram_2kbyte_1rw1r_32x512_8`
- **Kaynak:** Referans SKY130 açık kaynak PDK kurulumu (Ciel/Open
  PDKs paketi üzerinden dağıtılmaktadır)
- **Kullanılan Open PDKs commit kimliği:**
  `8afc8346a57fe1ab7934ba5a6056ea8b43078e71`
- **Lisans:** Apache License, Version 2.0
- **Kullanım yeri:** `Proje/SRAM_Macros/`, ASIC tasarımında 23 adet
  instance olarak kullanılmıştır (bkz. `asic/README.md` Bölüm 9.5)

## 4. Kullanılan Diğer Araçlar (Referans, Tasarıma Dahil Değil)

Aşağıdaki araçlar tasarım doğrulama/akış sürecinde kullanılmış olup
teslim edilen RTL/GDSII içerisine dahil değildir; lisans yükümlülüğü
doğurmazlar, bilgi amaçlı listelenmiştir:
- **Spike** - RISC-V ISA simülatörü, çekirdek doğrulaması için
- **cocotb** - Çevre birimi doğrulama testleri için
- **Vivado** - FPGA sentezi ve simülasyon için
- **OpenLane / LibreLane** - ASIC fiziksel tasarım akışı için (bkz.
  `asic/README.md` Bölüm 9.2)

## Not: Takım Tarafından Geliştirilen Bileşenler

Aşağıdaki bileşenlerin tamamı Kasırga - Ay takımı tarafından özgün
olarak geliştirilmiş olup üçüncü taraf lisansına tabi değildir:
- Timer, UART, UART_Stream, I2C Master, QSPI Master, GPIO, VGA çevre
  birimleri
- OBI-to-AXI köprüsü
- Yapay zeka hızlandırıcı (Accelerator) ve ilgili tüm alt modülleri
  (Softmax dahil)
- Üst seviye entegrasyon (`TopModules/`)
