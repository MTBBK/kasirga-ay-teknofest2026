# JTAG ile Hata Ayıklama (Debug) Özelliği

Bu doküman, kartımıza eklediğimiz JTAG debug özelliğinin nasıl çalıştığını, nasıl kurulduğunu ve nasıl test edildiğini anlatır.
---

## 1. Hata ayıklama özelliği ne işe yarıyor?

İşlemcimiz (CV32E40P) çalışırken, dışarıdan bir bilgisayarla bağlanıp:

- İşlemciyi **durdurabiliyoruz** (halt)
- Durdurduktan sonra **tek tek komut çalıştırabiliyoruz** (step)
- İşlemcinin içindeki **register'ları okuyup değiştirebiliyoruz**
- **Belleğe** yazıp okuyabiliyoruz
- İstediğimiz bir noktada **otomatik duracak şekilde işaretleyebiliyoruz** (breakpoint)

Bunların hepsini, tek bir USB kablosuyla, FPGA'nın zaten sahip olduğu
programlama hattı üzerinden yapıyoruz. Ayrı bir kablo ya da ek donanım
gerekmiyor.

---

## 2. Genel Olarak Nasıl Çalışıyor?

Dört ana parça var. Her biri bir öncekinden gelen isteği bir sonrakine
aktarıyor:

```
Bilgisayar (OpenOCD)
      |
      v
FPGA'nın kendi JTAG donanımı (BSCANE2)
      |
      v
dm_jtag_subsystem.sv   
      |
      v
obi_addr_demux.sv
      |
      v
İşlemci (CV32E40P)
```

**Adım adım ne oluyor:**

1. Bilgisayarda çalışan **OpenOCD** programına "durdur" komutu veriyoruz.
2. Bu komut, FPGA'nın kendi USB-JTAG hattından (**BSCANE2**) içeri giriyor.
   Bu, FPGA'yı programlarken kullandığımız **aynı kablo**.
3. **`dm_jtag_subsystem.sv`** bu komutu alıp işlemciye "dur" sinyali
   gönderiyor. İşlemci anında duruyor.
4. İşlemci durunca, normal programından değil özel bir "debug programından"
   komut istiyor. **`obi_addr_demux.sv`**, bu isteğin normal bir program
   isteği mi yoksa debug isteği mi olduğuna bakıp doğru yere yönlendiriyor.
5. Bellek okuma/yazma istediğimizde (`mdw`, `mww` komutları), işlemci
   **kendisi** gerçek bir okuma/yazma komutu çalıştırıyor — biz ona "şunu
   çalıştır" diyoruz, o çalıştırıyor. Bu yüzden bellek erişimi de işlemcinin
   **kendi** normal yolundan (zaten var olan `obi_to_axi.sv` köprüsünden)
   geçiyor, ekstra bir yol açmamıza gerek kalmıyor.

**Önemli bir nokta:** İşlemci normal çalışırken bu sistemin **hiçbir
yavaşlatıcı etkisi yok**. Sadece "dur" dediğimizde devreye giriyor.

---

## 3. Bu İki Dosyayı Biz Yazdık

| Dosya | Ne yapıyor |
|---|---|
| `dm_jtag_subsystem.sv` | JTAG'dan gelen komutları işlemcinin anlayacağı sinyallere çeviriyor. Durdurma, adım adım çalıştırma, register erişimi buradan yönetiliyor. |
| `obi_addr_demux.sv` | İşlemcinin "bana komut ver" isteğini, debug modundaysa debug programına, değilse normal programa yönlendiriyor. |

Geri kalan dosyalar ([pulp-platform/riscv-dbg](https://github.com/pulp-platform/riscv-dbg)
adlı açık kaynak bir projeden alındı — biz bunları değiştirmedik, sadece
yukarıdaki iki dosyayla kendi işlemcimize bağladık.

**Kullanmadığımız bir şey var:** Bazı JTAG debug sistemlerinde "SBA" adlı
bir yöntemle debug birimi belleğe doğrudan erişir. Biz bunu **kullanmadık**
(bilerek kapalı bıraktık). Bunun yerine, işlemciye "şu komutu çalıştır"
deyip **işlemcinin kendisinin** çalıştırmasını sağlıyoruz. Bu yöntem
"Program Buffer" olarak biliniyor ve donanımda test edip çalıştığını
gördük.

---

## 4. Donanım Bağlantısı Nasıl Kuruldu?

Kartımızda ayrı JTAG pinleri yok — Xilinx'in **BSCANE2** adlı özel bir
donanım parçasını kullanıyoruz. Bu parça, FPGA'nın zaten var olan
programlama JTAG hattına "biniyor". Yani:

- Ekstra pin **kullanmıyoruz**.
- Ekstra kablo/probe **almamıza gerek yok**.
- Programlarken kullandığımız **aynı USB kablosu**yla debug de yapıyoruz.

Bunu sağlamak için `riscv-dbg` projesinin iki farklı seçeneğinden
(`dmi_jtag_tap.sv` yerine `dmi_bscane_tap.sv`) BSCANE olanını seçtik.

---

## 5. Nasıl Çalıştırılır — Adım Adım

### 5.1. Kart Programlama

Normal şekilde bitstream'i Vivado ile FPGA'ya yükleyin. Ekstra bir ayar
gerekmiyor.

### 5.2. Kabloyu Serbest Bırakma

Programlama bitince **Vivado Hardware Manager'ı kapatın** ve `hw_server`
sürecini durdurun (killall -9 hw_server). OpenOCD ile Vivado aynı anda aynı kabloyu kullanamaz.

### 5.2.2 OpenOCD kütüphanesini kurma
```bash
wget https://github.com/xpack-dev-tools/openocd-xpack/releases/download/v0.12.0-4/xpack-openocd-0.12.0-4-linux-x64.tar.gz
tar -xvf xpack-openocd-0.12.0-4-linux-x64.tar.gz
```

### 5.3. OpenOCD'yi Başlatma

OpenOCD'ye kart nasıl bağlı, nasıl konuşacağız bilgisini bir `basys3.cfg` dosyası ile veriyoruz.

```bash
sudo ./xpack-openocd-0.12.0-4/bin/openocd -f basys3.cfg
```


### 5.4. Komut Gönderme

Yeni bir terminal açıp şununla bağlanın:

```bash
telnet localhost 4444
```

Artık komut gönderebilirsiniz (aşağıdaki listeye bakın).

---

## 6. OpenOCD Komutları — Ne İşe Yarıyorlar?

| Komut | Ne yapar |
|---|---|
| `halt` | İşlemciyi anında durdurur. |
| `resume` | Durdurulmuş işlemciyi tekrar çalıştırır. |
| `reg pc` | Programın şu an nerede olduğunu (Program Counter) gösterir. |
| `reg x1 0x1234` | x1 register'ına 0x1234 değerini yazar. |
| `reg x1` | x1 register'ının değerini okur. |
| `step` | İşlemciyi tek bir komut çalıştırıp tekrar durdurur. |
| `mdw <adres> <sayı>` | Bellekten belirtilen adresten veri okur. |
| `mww <adres> <değer>` | Belleğe belirtilen adrese veri yazar. |
| `bp <adres> 4 hw` | Belirtilen adrese donanımsal bir "dur burada" işareti (breakpoint) koyar. |
| `rbp <adres>` | Konulan breakpoint'i kaldırır. |

**Örnek kullanım:**

```
halt                      -> işlemciyi durdur
reg pc                    -> nerede durduğunu gör
mww 0x00003000 0xCAFEBABE -> belleğe bir değer yaz
mdw 0x00003000 1          -> aynı değeri geri oku, doğrula
resume                    -> işlemciyi tekrar çalıştır
```

---
## 7. Testleri Tek Tek Değil, Otomatik Çalıştırma (Python Scripti)
 
Yukarıdaki komutları her seferinde elle yazmak yerine, hepsini otomatik
sırayla çalıştıran bir `jtag_dogrulama.py` scripti hazırladık. Bu script,
hiçbir ek kütüphane gerektirmiyor (sadece Python'un kendisi yeterli).
 
**Nasıl çalıştırılır:**
 
1. Önce, her zamanki gibi OpenOCD'yi başlatın ve açık bırakın:
```bash
sudo ./xpack-openocd-0.12.0-4/bin/openocd -f basys3.cfg
```
   `Listening on port 6666 for tcl connections` satırını görene kadar
   bekleyin.
 
2. Yeni bir terminalde scripti çalıştırın:
```bash
   python3 pythonopenocd.py
```
 
**Script ne yapıyor:**
 
- Durdurma/çalıştırma (`halt`/`resume`) testini yapıyor, işlemcinin
  gerçekten durduğunu (Program Counter değişmediğini) kontrol ediyor.
- Bir register'a değer yazıp geri okuyor, doğru gelip gelmediğine
  bakıyor.
- Belleğe yazıp okuyor, aynı değeri geri aldığını doğruluyor.
- Tek adım (`step`) komutunun işlemciyi gerçekten bir komut ilerlettiğini
  kontrol ediyor.
- Donanımsal breakpoint koyup, işlemcinin o adreste otomatik durup
  durmadığına bakıyor.
- Her testin sonucunu **BAŞARILI**/**HATA** olarak ekrana yazıyor, en
  sonunda toplam bir özet gösteriyor.
---

## 8. Özet

- Ekstra donanım gerekmeden, tek USB kablosuyla işlemcimizi durdurup
  inceleyebiliyoruz.
- Bunu sağlayan iki dosyayı (`dm_jtag_subsystem.sv`, `obi_addr_demux.sv`)
  kendimiz yazdık.
- Gerçek donanımda test ettik: durdurma, register okuma/yazma, tek adım
  çalıştırma, bellek okuma/yazma, donanımsal breakpoint — hepsi çalışıyor.

