# Softmax İşlemi Verilog İmplementasyonu

---

## Modül Tasarımları ve Fonksiyonları

### 1. Downscale
Verilen 4 adet giriş değeri arasından en büyüğünü ($X_{max}$) bulur ve taşmayı (overflow) önlemek için tüm değerlerden çıkarır. 
* **Matematiksel İşlem:** $X'_i = X_i - \max(X_i)$
* **Tasarım Amacı:** Bu işlem sonucunda en büyük girdi $0$ değerini alırken, diğer tüm girdiler negatif ($0$ ile $-255$ arasında) hale gelir. Sayıların üstel olarak devasa boyutlara ulaşıp donanımı taşırması engellenmiş olur. Sonuçlar güvenli işlem için `signed 9-bit` olarak aktarılır.

### 2. Exponential
$e^x$ fonksiyonunu donanım üzerinde hesaplamak yüksek maliyetlidir. Ardışık bölme ve çarpma işlemleri içeren **Taylor Serisi** yöntemi, hem yüksek donanım alanı kapladığı hem de yüksek doğruluk için çok fazla terim (çevrim) gerektirdiği için tercih edilmemiştir. 

Giriş değerleri sınırlı (8-bit) olduğundan, bu katmanda **LUT (Look-Up Table / Arama Tablosu)** yöntemi kullanılmıştır.
* **Matematiksel İşlem:** $E_i = e^{-|X'_i| \times Scale} \times 255$
* **Tasarım Amacı:** Mutlak değer alındığında üstel fonksiyon negatif bir üsse sahip olur ve sonuç her zaman $0$ ile $1$ arasında kalır. Formüle eklenen **$Scale$** katsayısı, TensorFlow Lite modelinden çekilen nicemleme (quantization) katsayısıdır. Bu değer doğrudan ROM üretim betiğine (Python) gömülmüş, böylece donanımda ekstra bir çarpıcı (DSP bloğu) kullanılmadan yazılımsal TFLite modeli ile yüksek doğruluklu olasılıkların üretilmesi sağlanmıştır. Çıkıştaki $255$ çarpanı sonucu Q0.8 formatına getirir.

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

### 6. Multiplier ve Çıkış Katmanı (INT8 TFLite Dönüşümü)
Boru hattından gelen dengelenmiş üstel değerler ($E_i$) ile Reciprocal modülünden çıkan ters katsayıyı ($R$) çarpar ve sonucu TFLite uyumlu formata dönüştürür.
* **Matematiksel Çarpım:** $AraSonuc_i = (E_i \times R) \gg 16$
* **INT8 Çıkış Formatı:** $out_i = AraSonuc_i - 128$
* **Tasarım Amacı (Sıfır Maliyet Optimizasyonu):** Çarpım sonucunda elde edilen verinin alt 16 biti atılarak (Shift Right) $65536$ hassasiyet çarpanı tersine çevrilir ve veri $0-255$ (UINT8) formatına oturur. TensorFlow Lite standartlarında Softmax çıkışları $-128$ ile $+127$ (INT8) aralığındadır. Sayıyı bu aralığa çekmek için donanımda çıkarıcı (subtractor) devresi kurmak yerine, sadece **En Anlamlı Bit (MSB - 7. bit) ters çevrilmiştir (Invert)**. Bu işlem, donanımda hiçbir mantık kapısı (0 LUT) harcamadan sıfır maliyetle TFLite INT8 formatına geçiş sağlar.

---

