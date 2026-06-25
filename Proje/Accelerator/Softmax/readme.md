# Softmax İşlemi Verilog İmplementasyonu



---

## Modül Tasarımları ve Fonksiyonları

### 1. Downscale
Verilen 4 adet giriş değeri arasından en büyüğünü ($X_{max}$) bulur ve taşmayı (overflow) önlemek için tüm değerlerden çıkarır. 
* **Matematiksel İşlem:** $X'_i = X_i - \max(X_i) $
* **Tasarım Amacı:** Bu işlem sonucunda en büyük girdi $0$ değerini alırken, diğer tüm girdiler negatif ($0$ ile $-255$ arasında) hale gelir. Sayıların üstel olarak devasa boyutlara ulaşıp donanımı taşırması engellenmiş olur. Sonuçlar güvenli işlem için `signed 9-bit` olarak aktarılır.

### 2. Exponential
$e^x$ fonksiyonunu donanım üzerinde hesaplamak yüksek maliyetlidir. Ardışık bölme ve çarpma işlemleri içeren **Taylor Serisi** yöntemi, hem yüksek donanım alanı kapladığı hem de yüksek doğruluk için çok fazla terim (çevrim) gerektirdiği için tercih edilmemiştir. 

Giriş değerleri sınırlı (8-bit) olduğundan, bu katmanda **LUT (Look-Up Table / Arama Tablosu)** yöntemi kullanılmıştır.
* **Matematiksel İşlem:** $E_i = e^{-|X'_i|} \times 255$
* **Tasarım Amacı:** Giriş değerleri negatif aralıkta olduğundan, mutlak değer alındığında üstel fonksiyon negatif bir üsse ($e^{-|x|}$) sahip olur. Böylece sonuç her zaman $0$ ile $1$ arasında kalır. Formüldeki $255$ katsayısı, $0.0 - 1.0$ arasındaki olasılık tabanını donanımın anlayacağı $0 - 255$ tam sayı aralığına (Q0.8 formatı) ölçeklemek için kullanılır. ROM tablosu 256 satırdan oluşur ve değerler Python betiği ile üretilmiştir.

### 3. Accumulator
Aynı veri paketine ait tüm üstel sonuçları toplayarak Softmax formülünün payda (olasılık tabanı) kısmını oluşturur.
* **Matematiksel İşlem:** $S = \sum_{i=0}^{3} E_i$
* **Tasarım Amacı:** 4 adet 8-bitlik değerin toplamı en kötü senaryoda $1020$ ($255 \times 4$) değerine ulaşabileceğinden, taşmayı önlemek adına çıkış **10-bitlik** `unsigned` veri genişliğinde üretilir.

### 4. Reciprocal
Accumulator modülünden gelen toplam değerini ($S$), bölme işleminin donanımda çok yavaş ve maliyetli olması sebebiyle LUT kullanarak $\frac{1}{S}$ değerine dönüştürür.
* **Matematiksel İşlem:** $R = \frac{255 \times 65536}{S}$
* **Tasarım Amacı:** Sabit noktalı (fixed-point) matematikte bölme sonucunda oluşacak $1$'den küçük hassas küsuratların (örn: $0.002$) donanımda kaybolmasını (sıfırlanmasını) önlemek için **Q16 formatı** tercih edilmiştir. Katsayı olarak kullanılan $65536$ ($2^{16}$), veriyi 16-bit genişliğe ölçekleyerek hassasiyeti korur. Pay kısmındaki $255$ ise Softmax'in nihai ölçekleme ihtiyacını doğrudan bu ROM'un içine gömerek donanımı ek bir çarpan maliyetinden kurtarır. LUT tablosu 16-bit genişliğinde ve 1024 satır derinliğindedir.

### 5. Softmax Exponential to Multiplier Buffer
Boru hattının (pipeline) senkronizasyonunu sağlayan zamanlama modülüdür. 
* **Tasarım Amacı:** Exponential modülünden çıkan $E_i$ değerlerini ve buna bağlı geçerlilik (valid/done) sinyalini **2 saat çevrimi (cycle)** boyunca bekletir. Bu 2 çevrimlik süre zarfında paralel kolda çalışan Accumulator ve Reciprocal modülleri işlemlerini tamamlar. Böylece ilgili veriler Multiplier modülünün girişine tam olarak aynı anda ulaşmış olur.

### 6. Multiplier
Boru hattından gelen dengelenmiş üstel değerler ($E_i$) ile Reciprocal modülünden çıkan ters katsayıyı ($R$) çarpar.
* **Matematiksel İşlem:** $\text{out}_i = (E_i \times R) \gg 16$
* **Tasarım Amacı:** 8-bit ve 16-bit iki değer çarpılarak 24-bitlik bir ara sonuç elde edilir. Çıkan sonucun en üst 8 biti (`[23:16]`) alınarak sağa doğru 16 bit kaydırma (Shift Right) yapılır. Bu kaydırma işlemi, Reciprocal modülünde hassasiyeti korumak için yapılan $65536$ ile çarpma işlemini donanımsal olarak sıfır maliyetle tersine çevirir (normalizasyon).

---

## Yazılım (C/C++) Entegrasyonu

Hızlandırıcı donanımdan çıkan nihai değerler, orijinal Softmax fonksiyonunun **255 ile çarpılmış** halidir (`unsigned 8-bit`). Bu değerlerin yazılım (MCU/CPU) tarafında gerçek birer olasılık yüzdesine ($0.0 - 1.0$) dönüştürülmesi için **255.0** değerine bölünmesi gerekir:

```c
uint8_t hw_result = read_softmax_output(REG_OUT_0);
float probability = (float)hw_result / 255.0f;
