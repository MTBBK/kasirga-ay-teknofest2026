// test.c

int main() {
    // Değişken tanımlamaları
    // volatile kullanıyoruz ki derleyici bu işlemleri "gereksiz" görüp silmesin
    volatile int a = 20;
    volatile int b = 10;
    volatile int c, d, e;

    // 1. Temel Aritmetik Testi
    c = a + b; // Beklenen: 30
    d = a - b; // Beklenen: 10
    e = a * b; // Beklenen: 200

    // 2. Döngü ve Akış Kontrol Testi
    // 0'dan 100'e kadar olan sayıların toplamı (Gauss toplamı: 4950)
    volatile int sum = 0;
    for (int i = 0; i < 100; i++) {
        sum += i;
   }
    
    // 3. Bellek Yazma Testi (LSU Test)
    // Belirli bir adrese (örneğin RAM'in sonlarına doğru) sonuçları yazalım
    // CV32E40P simülasyonunda 0x80010000 civarı genellikle veri için uygundur
    int *result_ptr = (int *)0x80010000;
    result_ptr[0] = c;
    result_ptr[1] = d;
    result_ptr[2] = e;
    result_ptr[3] = sum;

    // 4. Sonsuz Döngü (İşlemcinin durmaması için)
    while (1) {
        // NOP (No Operation) ekleyerek pipeline'ı izlemeyi kolaylaştırıyoruz
        __asm__ volatile ("nop");
    }

    return 0;
}
