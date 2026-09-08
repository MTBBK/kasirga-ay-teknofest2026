# ASIC Fiziksel Tasarım Akışı - README

Bu doküman, TEKNOFEST 2026 Çip Tasarım Yarışması Mikrodenetleyici Tasarım
Kategorisi kapsamında gerçekleştirilen ASIC fiziksel tasarım akışının
açıklamasını, kullanılan araç/ortam bilgilerini ve teslim edilen rapor/
çıktıların konumlarını içerir.

## 9.1. Tasarım Özeti

- **Tasarımın kısa açıklaması ve amacı:** [DOLDUR: 1-2 cümle - projenin
  genel amacı, örn. "CV32E40P çekirdekli, AI hızlandırıcı ve çevre
  birimleri içeren bir mikrodenetleyici SoC tasarımı"]
- **En üst seviye modül adı:** `top`
- **Temel giriş ve çıkış arayüzleri:** GPIO (`gpio_i[15:0]`), QSPI
  (`qspi_io_0..3`), UART (`uart_rx_i`, ilgili tx sinyalleri),
  UART_Stream (`uart_stream_rx_i` ve ilgili sinyaller), I2C
  (`sda_io` ve ilgili sinyaller), VGA çıkışı, [DOLDUR: eksik varsa ekle -
  JTAG kullanıldıysa belirt, kullanılmadıysa "JTAG dahil edilmedi" yaz]
- **Saat ve reset portları:** `clk_i_50mHz` (saat girişi), `rst_i`
  (asenkron reset, `set_false_path -from` ile kısıtlamalardan
  ayrılmıştır)
- **Hedef saat frekansı:** 25 MHz (40ns periyot).
  Not: `clk_i_50mHz` port adı, projenin ilk aşamasındaki 50MHz hedefinden
  kalma bir isimlendirmedir. Gerçek çalışma frekansı 25MHz (40ns
  periyot) olarak belirlenmiş ve tüm STA analizleri bu değer üzerinden
  yürütülmüştür; port adı fonksiyonel olarak yanıltıcıdır ancak
  tasarımı etkilememektedir.

## 9.2. Araç ve Ortam Bilgileri

- **Kullanılan LibreLane sürümü:** 3.0.6 (yarışma referans sürümü ile
  birebir aynı)
- **Kullanılan LibreLane commit kimliği/etiketi:** Nix flake.lock
  içerisinde `fossi-foundation` kaynaklı `ciel` (rev:
  `afcb23d368614ffa1e7e96584ed33f839c71c576`) ve `nix-eda` (rev:
  `8f990fb77529c09e540e453cd836af9930ec58db`) girdileri üzerinden
  kilitlenmiştir; LibreLane paketinin kendisi bu girdiler aracılığıyla
  kurulmuş olup sürüm numarası (3.0.6) doğrudan paket metadata'sından
  doğrulanmıştır.
- **Kullanılan LibreLane akışı:** Classic
- **Kullanılan PDK ve Open PDKs commit kimliği:** sky130A,
  `8afc8346a57fe1ab7934ba5a6056ea8b43078e71` (yarışma referans commit'i
  ile birebir aynı)
- **Kullanılan standart hücre kütüphanesi:** sky130_fd_sc_hd
- **Kullanılan OpenRAM sürümü:** Kullanılmadı. Referans SKY130 PDK
  kurulumu içerisinde bulunan hazır, onaylanmış SRAM makrosu
  (`sky130_sram_2kbyte_1rw1r_32x512_8`) kullanılmıştır.
- **Referans sürümden farklı kullanılan araç/PDK/kütüphane:** Yok, tüm
  araçlar yarışma referans sürümleriyle birebir aynıdır.
- **asic/environment/versions.txt dosyasının konumu:**
  `asic/environment/versions.txt`

## 9.3. Akışın Çalıştırılması

Nix ortamını başlatmak için gerekli komutlar:
```
nix-shell 
```
[DOLDUR: gerçek Nix başlatma komutunuz farklıysa düzeltin]

Akışı yeniden çalıştırmak için:
```
cd asic
make asic_run
```

`asic/run/` çalışma dizini, `asic_run` hedefi tarafından her çalıştırma
öncesinde temizlenir (`rm -rf run/*`) ve LibreLane Classic akışının
geçici çalışma alanı olarak kullanılır.

Akış sonunda rapor ve nihai çıktıların toplanması işlemi make asic_run çalıştırıldığında otomatik olarak gerçekleşir.

Bu betik `asic/run/` içerisindeki LibreLane ham çıktılarını okuyup,
Bölüm 5 ve 6'da tanımlanan zorunlu raporları ve çıktıları sırasıyla
`asic/reports/` ve `asic/results/` altına toplar; ayrıca LibreLane'in
iç mekanizmasına ait rapor içeriği taşımayan yardımcı dosyaları
(`state_in.json`, `state_out.json`, `config.json`, `runtime.txt`,
`COMMANDS`, `_env*.tcl`, `*.process_stats.json`) temizler.

Teslim kontrolü:
```
make asic_verify
```

Gerekli ön koşullar ve ortam değişkenleri: [DOLDUR: varsa]

Yaklaşık çalışma süresi: ~7 saat

Önerilen CPU/RAM/disk gereksinimleri: 64GB+
RAM önerilir - SRAM makro sayısı ve XOR analizi nedeniyle bellek
kullanımı yüksektir

## 9.4. RTL ve Akış Girdileri

- **asic/filelist.f dosyasının konumu:** [DOLDUR: filelist.f
  kullanıyorsanız konumunu belirtin; VERILOG_FILES doğrudan
  config.yaml içinde tanımlıysa bunu belirtin]
- **Kullanılan include dizinleri:**
  `Core/rtl/include`, `Core/rtl/vendor/pulp_platform_common_cells/include`
- **Kullanılan derleme tanımları ve makrolar:** `ASIC_TARGET`
- **Ana LibreLane yapılandırma dosyasının konumu:** `asic/config.yaml`
- **Zamanlama kısıt dosyasının konumu:** `asic/constraints/design.sdc`
- **Kullanılan üçüncü taraf RTL ve IP kaynaklarının konumları:**
  CV32E40P çekirdeği (`Core/rtl/`), pulp_platform common_cells
  (`Core/rtl/vendor/pulp_platform_common_cells/`) - bkz. Bölüm 9.13
  ve `asic/THIRD_PARTY.md`
- **Ana RTL kaynaklarının Git deposundaki konumları:** `Core/`,
  `PeripheralModules/`, `Accelerator/`, `MemoryModules/`, `TopModules/`
  (asic/ dizini dışında, proje kökünde tutulmaktadır)

## 9.5. SRAM ve Fiziksel Makrolar

**Kullanılan SRAM makrosu:** `sky130_sram_2kbyte_1rw1r_32x512_8`
(Kapasite: 2KiB, Derinlik: 512, Veri genişliği: 32-bit, Port yapısı:
1RW+1R) - referans SKY130 PDK kurulumu içerisinde bulunan onaylanmış
makrolardan biridir; DDK onayına tabi ayrı bir kaynak kullanılmamıştır.

**Kullanım yeri ve adet:** Bu makrodan toplam 23 adet instantiate
edilmiştir:
- `instruction_memory` altında 4 adet
- `accelerator_memory` altında 15 adet
- `data_memory` altında 4 adet

**Görünüm konumları (her instance için ortak):**
- GDSII: (referans SKY130 PDK kurulumu içerisinden)
- LEF: (referans SKY130 PDK kurulumu içerisinden)
- Verilog: (referans SKY130 PDK kurulumu içerisinden)
- Liberty: Yalnızca TT (tipik) köşesi modeli mevcuttur
  (`sky130_sram_2kbyte_1rw1r_32x512_8_TT_1p8V_25C.lib`) ve
  `asic/config.yaml` içerisinde `lib: "*":` joker karakteri ile tüm
  dokuz signoff PVT köşesine uygulanmıştır.
- **Birebir karşılık gelen model bulunmaması durumunda kullanılan
  model ve varsayımlar:** SRAM makrosu için yalnızca TT (tipik, 25°C,
  1.8V) Liberty zamanlama modeli mevcut olup, bu model dokuz signoff
  köşesinin (min/nom/max × tt/ss/ff) tamamına uygulanmıştır. Bu durum,
  yavaş köşelerde (özellikle ss_100C_1v60) standart hücre sürücülerinin
  zayıflaması ile SRAM giriş pinlerinin sabit kapasitans/zamanlama
  modeli arasındaki uyumsuzluk nedeniyle, bu köşelerde orantısız
  şekilde yüksek slew/kapasitans ihlali sayısına yol açmaktadır (bkz.
  Bölüm 9.9).

**Kaynak konumu:** Proje/SRAM_Macros

**Güç ve toprak pinleri:** `vccd1`, `vssd1`

**Tasarımın güç ağlarına bağlantısı:** `PDN_MACRO_CONNECTIONS`
yapılandırması üzerinden `accelerator_memory.*`, `data_memory.*`,
`instruction_memory.*` desenleri ile `vccd1`/`vssd1` ağlarına
bağlanmıştır.

## 9.6. Zamanlama Kısıtları ve İstisnaları

- **Birincil saat:** `clk_main`, 40.0ns periyot, `clk_i_50mHz`
  portundan tanımlanmıştır.
- **Generated clock:** Kullanılmamıştır (VGA için düşünülen
  `clk_25mhz` generated clock tanımı devre dışı bırakılmıştır; VGA
  çevre birimi ana saat alanında çalışmaktadır.
- **Saat alanı ilişkileri:** Tek saat alanı (`clk_main`) kullanılmıştır;
  `set_clock_groups -asynchronous` ile tanımlanmıştır.
- **Input/output delay:** Tüm girişler için 1.0ns (`-max`), tüm
  çıkışlar için 1.0ns.
- **Clock uncertainty:** Setup için 0.2ns, hold için 0.05ns.
- **Clock transition:** 0.15ns.
- **Input transition / output load:** Girişler için 0.5ns transition,
  çıkışlar için 0.05 load.
- **False path tanımları:**
  - `rst_i` portundan başlayan tüm yollar (asenkron reset,
    fonksiyonel olarak zamanlama analizi dışında tutulmuştur).
  - `sda_io` (I2C) üzerinden geçen yollar (I2C 100kHz-400kHz hızında
    çalıştığından STA'nın bu yol için zamanlama kapatmaya
    zorlanmaması amacıyla).
- **Multicycle path:** Kullanılmamıştır.
- **Hold ihlali düzeltme amaçlı min-delay kısıtları:**
  Aşağıdaki portlar için, ilk kademe register'larda tespit edilen hold
  ihlallerini azaltmak amacıyla `set_min_delay` kısıtları
  uygulanmıştır (bkz. Bölüm 9.9 için gerekçe ve kapsamlı analiz):
  - `qspi_io_0`, `qspi_io_1`, `qspi_io_2`, `qspi_io_3`: 1.6ns
  - `uart_rx_i`, `gpio_i[6]`: 1.1ns
- **Kullanılan varsayımlar:** Yukarıdaki input/output delay, transition
  ve load değerleri dışında LibreLane ve PDK'nin varsayılan değerleri
  geçerlidir.

## 9.7. Fiziksel Tasarım Yapılandırması

- **Die ve core alanı:** `DIE_AREA: [0, 0, 5500, 5200]` (mutlak
  boyutlandırma, `FP_SIZING: absolute`)
- **Hedef utilization değeri:** `FP_CORE_UTIL: 25%`,
  `PL_TARGET_DENSITY_PCT: 35%` (`FP_CORE_UTIL + 10`)
- **Floorplan en boy oranı:** Die alanı doğrudan mutlak koordinatlarla
  tanımlanmıştır.
- **Giriş/çıkış pinlerinin yerleşim yöntemi:** LibreLane
  varsayılan IO placement kullanıldı.
- **Kullanılan yönlendirme katmanları:** [DOLDUR: config.yaml'da özel
  bir RT_* katman kısıtlaması yoksa "PDK varsayılan katmanları
  kullanılmıştır" yazın]
- **Güç ve toprak ağı isimleri:** `vccd1` (güç), `vssd1` (toprak)
- **Güç dağıtım ağı yapılandırması:** LibreLane varsayılan PDN
  yapılandırması, `PDN_ENABLE_GLOBAL_CONNECTIONS: true`
- **Makro güç bağlantıları:** `PDN_MACRO_CONNECTIONS` ile
  `accelerator_memory.*`, `data_memory.*`, `instruction_memory.*`
  desenleri üzerinden `vccd1`/`vssd1` ağlarına bağlanmıştır.
- **Makro yerleşim bilgileri:** 23 adet SRAM makrosu, die kenarları
  boyunca üç grup hâlinde sabit yerleşimle (`config.yaml` `MACROS`
  bölümünde `location`/`orientation` ile) yerleştirilmiştir:
  - Sol kenar: 9 makro, X=150, Y-adımı 550µm
  - Üst kenar: 5 makro, Y=4550, X-adımı 700µm
  - Sağ kenar: 9 makro, X=4600, Y-adımı 550µm
  - Makro halo: `FP_MACRO_HORIZONTAL_HALO`/`FP_MACRO_VERTICAL_HALO`:
    40µm (20µm ile test edilmiş, tüm zamanlama/tıkanıklık metrikleri
    kötüleştiği için 40µm'de sabitlenmiştir).
- **Clock tree synthesis yapılandırması:**
  `CTS_MAX_CAP: 0.15`, `CTS_SINK_CLUSTERING_MAX_DIAMETER: 15`,
  `CTS_SINK_CLUSTERING_SIZE: 8`
- **Akışı çalıştıran otomasyon dosyaları:** `asic/Makefile`
  (`asic_run`, `asic_verify`, `asic_clean` hedefleri),
  `asic/scripts/collect_outputs.py`

**Ek resizer/onarım yapılandırması (zamanlama kapatma amaçlı):**
- `DESIGN_REPAIR_MAX_WIRE_LENGTH: 800` - varsayılan eşiğin (6884µm)
  çok altına çekilerek uzun netler üzerinde tampon eklenmesi
  zorlanmış, bu sayede max_ss_100C_1v60 köşesinde slew ihlalleri
  8775'ten 5189'a, kapasitans ihlalleri 723'ten 570'e düşürülmüştür.
- `PL_RESIZER_HOLD_MAX_BUFFER_PCT` / `GRT_RESIZER_HOLD_MAX_BUFFER_PCT 100`:
  - Bu değerin 50'den yükseltilmesi, register-to-register hold
    ihlallerini tamamen (6 → 0) gidermiştir.

## 9.8. Lint Sonuçları ve İstisnaları

- **Lint waiver/yapılandırma dosyaları:** [DOLDUR: `_waivers_output.vlt`
  dosyası mevcut ancak içeriği kontrol edilmedi - eğer içi boşsa
  "waiver kullanılmamıştır" yazın, doluysa içeriğini özetleyin]
- **Kapatılan/kabul edilen lint uyarıları:** 909 lint uyarısı
  mevcuttur [DOLDUR: bunların kategorik bir özetini verebilirseniz
  (örn. "çoğu kullanılmayan sinyal uyarısı" gibi) ekleyin, yoksa "detaylı
  döküm asic/reports/lint/verilator_lint.log dosyasındadır" yazın].
- **Inferred latch:** [DOLDUR: metrics.csv'deki
  design__inferred_latch__count değerini kontrol edin; 0 ise
  "tasarımda inferred latch bulunmamaktadır" yazın]

## 9.9. Bilinen Sorunlar ve Kabul Edilmiş İstisnalar

### Hold İhlalleri (qspi_io_* portları)

En iyi elde edilen sonuçta 43 hold ihlali kalmaktadır (TNS: -14.19ns,
en kötü slack: -1.56ns @ max_ss_100C_1v60); reg-to-reg (register-to-
register) yollarda sıfır ihlal bulunmaktadır, tüm kalan ihlaller
doğrudan giriş portlarından ilk kademe register'lara giden yollarda
(`qspi_io_0..3`, ağırlıklı olarak; ayrıca birkaç `uart_rx_i`/
`gpio_i[6]` köşe durumu) yoğunlaşmaktadır.

**Kök neden analizi (ODB sorgulaması ile doğrulanmıştır):**
`qspi_io_1` portunun fiziksel konumu (die kenarı, Y≈0) ile bu porta
bağlı ilk register'ların yerleşimi (Y≈1425-1507µm) arasında yaklaşık
**1.5mm'lik bir fiziksel mesafe** bulunduğu doğrudan ODB sorgulamasıyla
tespit edilmiştir. Bu mesafe, die yüksekliğinin (5200µm) yaklaşık
%28'ine karşılık gelmektedir. Bu durum, yarışma kapsamında açıkça
kapsam dışı bırakılan I/O pad ring ve bond pad yapılarının (Bölüm 2)
bulunmamasıyla birleşince, gerçek bir üretim akışında pad'in kendi
gecikmesinin sağlayacağı doğal hold marjininin bu tasarımda mevcut
olmamasına yol açmaktadır.

**Denenen çözümler ve bulgular:**
1. `set_input_delay -min` ile global bir minimum gecikme varsayımı
   denenmiş (0.3ns ve 0.15ns), ancak PVT köşeleri arasında tutarsız
   etki göstererek yavaş (ss) köşelerde iyileşme sağlarken hızlı (ff)
   köşelerde yeni ihlaller yaratmıştır (net TNS kötüleşmiştir);
   bu nedenle kaldırılmıştır.
2. Hedefe yönelik `set_min_delay` kısıtları (yalnızca ihlal eden
   portlara, kademeli değerlerle) uygulanmış ve genel sonucu belirgin
   şekilde iyileştirmiştir (154 → 43 ihlal).
3. `qspi_io_*` için 1.6ns değeri üç ayrı denemeyle (1.6/1.7/1.8ns)
   doğrulanmış bir tavan olarak belirlenmiştir: 1.6ns'in üzerine
   çıkıldığında ihlal şiddeti orantısız şekilde kötüleşmektedir (1.7ns:
   en kötü slack -1.56ns → -2.75ns, TNS -14.19ns → -38.55ns), bu da bu
   net için fiziksel bir tampon yerleştirme/gecikme sınırına
   ulaşıldığını göstermektedir.
4. Makro halo değeri (40µm → 20µm) test edilmiş, ancak hem hold hem
   slew/kapasitans metriklerini kötüleştirdiği için geri alınmıştır -
   bu, sorunun makro yakınlığı/tıkanıklığından değil, saf fiziksel
   mesafeden kaynaklandığını doğrulamaktadır.

**Değerlendirme:** Kalan ihlaller, açıkça kapsam dışı bırakılan I/O
pad ring'in yokluğundan kaynaklanan, SDC seviyesinde makul çabayla
en aza indirilmiş, iyi belgelenmiş bir sınırlamadır.

### XOR Sonuçları (Magic vs KLayout GDSII Karşılaştırması)

`asic/reports/signoff/xor.xml` dosyasında Magic ve KLayout tarafından
üretilen GDSII görünümleri arasında yaklaşık 83 milyon fark (XOR
difference) raporlanmaktadır.

**Bulgular:**
1. Toplam ~83 milyon farkın %99'undan fazlası GDS katman/veri tipi
   `33/42` ve `33/43` üzerinde toplanmaktadır.
2. `sky130A.lyp` (KLayout katman özellikleri dosyası) üzerinden yapılan
   sorgulama, bu katmanların (`cp1m.maskAdd`/`cp1m.maskDrop`) birincil
   çizim katmanları değil, DRC kural setinin dahili maske düzeltme
   (mask-correction) boole işlemlerine ait türetilmiş katmanlar
   olduğunu göstermiştir.
3. Örnek geometri incelemesi, bu katmandaki farkların küçük (<1µm²),
   düzensiz kenarlı, üretim gridinin altında kalan poligon parçaları
   (sliver) olduğunu göstermiştir - bu desen, gerçek bir tasarım
   hatasından ziyade Magic ve KLayout'un bu türetilmiş katmanı kendi
   dahili boole/birleştirme algoritmalarıyla ayrı ayrı hesaplarken
   ortaya çıkan yuvarlama/fraktürasyon sırası farklarıyla tutarlıdır.

**Sonuç:** Farklar tasarımın birincil katmanlarında değil, DRC kural
setinin dahili türetilmiş bir katmanında yoğunlaşmaktadır. DRC ve LVS,
nihai streamout GDSII üzerinde sorunsuz geçmiştir; bu, birincil
katmanlarda gerçek bir geometrik uyumsuzluk olmadığının ayrı bir
doğrulamasıdır. Bu nedenle 83 milyon XOR farkının, tasarımın
üretilebilirliğini veya doğruluğunu etkileyen gerçek bir sorun değil,
iki aracın türetilmiş katman hesaplama yöntemlerindeki bir
uyumsuzluktan kaynaklandığı değerlendirilmektedir.

### Slew ve Kapasitans İhlalleri

max_ss_100C_1v60 köşesinde 5189 max slew ve 570 max kapasitans ihlali
bulunmaktadır (bu değer, `DESIGN_REPAIR_MAX_WIRE_LENGTH: 800`
uygulanmadan önce 8775/723 idi). İhlallerin büyük kısmı SRAM makro
adres pinlerinde yoğunlaşmaktadır.

**Kök neden:** SRAM makrosu için yalnızca TT (tipik) Liberty zamanlama
modeli mevcut olup dokuz signoff köşesinin tamamına uygulanmıştır
(bkz. Bölüm 9.5). Bu, SRAM giriş pinlerinin kapasitans/zamanlama
gereksinimlerinin köşeler arasında sabit kalmasına karşın, sürücü
standart hücrelerin yavaş köşelerde (özellikle ss_100C_1v60) önemli
ölçüde zayıflamasına yol açmakta, bu da sürücü-yük uyumsuzluğu
nedeniyle orantısız derecede yüksek slew ihlaline neden olmaktadır.

**Denenen ve doğrulanan iyileştirmeler:**
- `DESIGN_REPAIR_MAX_WIRE_LENGTH: 800` uygulanarak uzun netler üzerinde
  tampon eklenmesi zorlanmış, ihlal sayıları belirgin şekilde
  azaltılmıştır (bkz. Bölüm 9.7).
- CTS kümeleme parametreleri, makro halo değeri ve global routing
  tıkanıklık ayarları (`GRT_ALLOW_CONGESTION`, `GRT_OVERFLOW_ITERS`)
  ayrı ayrı incelenmiş; kök nedenin saat ağacı veya genel yönlendirme
  tıkanıklığı değil, SRAM'in tek-köşe Liberty modeli olduğu
  belirlenmiştir.

**Değerlendirme:** DRC ve LVS sonuçları etkilenmemektedir; bu ihlaller
zamanlama signoff'unun bir parçası olarak raporlanmış ve kök nedeniyle
birlikte belgelenmiştir.

### Bağlantısız Pinler - Detaylı Tablo

Bölüm 5.6'da önerilen `full_disconnected_pins_table.txt` dosyası, bu
LibreLane sürümünde ayrı, sabit isimli bir çıktı olarak üretilmemiştir.
Bağlantısız pin kontrolü `asic/reports/signoff/disconnectedpins/`
(OpenROAD/ODB tabanlı checker adımı) ve
`asic/reports/physical/disconnectedpins/` (ham `ReportDisconnectedPins`
log çıktısı) altında mevcuttur.

## 9.10. Güç ve IR-Drop Analizi

- **Analizde kullanılan saat frekansı:** 25MHz (40ns periyot)
- **Kullanılan timing/güç köşeleri:** Dokuz signoff köşesi (min/nom/max
  × tt_025C_1v80/ss_100C_1v60/ff_n40C_1v95)
- **Kullanılan besleme gerilimi:** 1.8V (tt), 1.6V (ss), 1.95V (ff) -
  bkz. Tablo 4
- **Switching activity girdisi:** Açık bir switching activity girdisi
  kullanılmamıştır, güç sonuçları tahminîdir.
- **Özel gerilim kaynağı konum dosyası:** Kullanılmamıştır.
- **Güç sonuçlarının tahminî olup olmadığı:** Güç sonuçları tahminîdir.

## 9.11. Signoff Sonuç Özeti

- **Kullanılan signoff PVT köşeleri:** tt_025C_1v80, ss_100C_1v60,
  ff_n40C_1v95 (min/nom/max ölçeklemeleriyle birlikte dokuz köşe)
- **Setup ve hold WNS/TNS sonuçları:** Setup WNS: +2.15ns (en kötü
  köşe: max_ss_100C_1v60), Setup TNS: 0 (ihlal yok). Hold WNS:
  -1.56ns, Hold TNS: -14.19ns (bkz. Bölüm 9.9 - kök neden analizi)
- **Magic ve KLayout DRC sonuçları:** Temiz (DRC ihlali yok)
- **Netgen LVS sonucu:** Temiz (LVS eşleşmesi başarılı)
- **Anten, XOR, PDN ve bağlantısız pin sonuçları:** Anten kontrolü
  temiz; XOR farkları için bkz. Bölüm 9.9; PDN grid-error raporları
  `asic/reports/pdn/` altında mevcuttur.

## 9.12. Rapor ve Çıktı Konumları

- **Teslim edilen çıktıların üretildiği LibreLane çalışma etiketi:**
  [DOLDUR: run/final klasörünüzün üretildiği tarih/run tag varsa
  belirtin]
- **Esas alınan nihai GDSII dosyası:** `asic/results/gds/top.gds`
  (KLayout streamout, `PRIMARY_GDSII_STREAMOUT_TOOL: klayout`
  yapılandırmasına göre)
- **Esas GDSII dosyasını üreten araç:** KLayout (Magic tarafından
  üretilen alternatif görünüm `asic/results/gds/top_magic.gds` olarak
  ayrıca sunulmuştur)
- **Zorunlu raporların konumları:** `asic/reports/` altında Bölüm 5
  yapısına uygun şekilde (`general/`, `lint/`, `synthesis/`,
  `physical/`, `timing/`, `drc/`, `lvs/`, `antenna/`, `signoff/`,
  `pdn/`, `power/`)
- **Zorunlu çıktıların konumları:** `asic/results/` altında Bölüm 6
  yapısına uygun şekilde (`gds/`, `lef/`, `def/`, `netlist/`, `sdc/`,
  `spef/`, `spice/`, `config/`, `metrics/`)
- **Standart dosya adı/konum farklılıkları:** LibreLane'in kendi iç
  adlandırması (`top.nl.v`, `top.pnl.v` vb.) korunmuş, spec'in önerdiği
  isimlere (`top_synth.v`, `top_pnr.v`, `top_powered.v`) toplama betiği
  (`asic/scripts/collect_outputs.py`) tarafından eşlenmiştir. Tam
  eşleme tablosu betiğin kaynak kodunda görülebilir.
- **asic/run/ kullanımı:** Geçici çalışma alanı olarak kullanılır,
  `make asic_run` her çalıştırmada bu dizini temizler; kalıcı hiçbir
  girdi burada tutulmaz.

## 9.13. Üçüncü Taraf Bileşenler ve Lisanslar

Ayrıntılı liste için bkz. `asic/THIRD_PARTY.md` [DOLDUR: bu dosyayı
oluşturduysanız buraya referans verin; oluşturmadıysanız üçüncü taraf
bileşenleri (CV32E40P çekirdeği, pulp_platform common_cells, kullanılan
SRAM makrosu, vb.) burada özetleyin - kaynak, sürüm/commit, lisans
bilgisi ile]

---

## Ek: Bilinen Diğer Notlar

[DOLDUR: AI hızlandırıcı bellek mimarisi hakkında not eklemek
isterseniz buraya ekleyin - örn. "AI hızlandırıcı, 30KB veri belleğini
SRAM makroları ile, ağırlık depolama (16KB) ve tampon belleklerini ise
standart hücre tabanlı register yapılarıyla gerçekleştirmektedir; bu
mimari tercih zaman kısıtları nedeniyle bu aşamada değiştirilmemiştir."]
