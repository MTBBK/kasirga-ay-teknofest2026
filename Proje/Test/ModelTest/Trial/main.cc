#include <stdint.h>
#include <stdio.h>
// 1. Mevcut C sürücülerinizi C++ uyumlu hale getirin
extern "C" {
#include "uart.h"
#include "qspi.h"
#include "timer.h"
#include "gpio.h"
#include "i2c.h"
#include "interrupt.h"
#include "uart_stream.h"
}
// 2. TensorFlow Lite Micro kütüphanelerini ekleyin
#include "tflite-micro/tensorflow/lite/micro/micro_interpreter.h"
#include "tflite-micro/tensorflow/lite/micro/micro_mutable_op_resolver.h"
#include "tflite-micro/tensorflow/lite/schema/schema_generated.h"
// 3. Script ile ürettiğiniz model başlık dosyasını ekleyin
#include "micro_speech_quantized_model_data.h"
// 4. Model için RAM'de yer ayırın (Hizalamaya dikkat!)
constexpr int kTensorArenaSize = 60 * 1024; // Model boyutunuza göre 30KB - 80KB yapabilirsiniz
alignas(16) uint8_t tensor_arena[kTensorArenaSize];
// 5. CV32E40P Çevrim (Cycle) Sayacı Okuma Fonksiyonu
inline uint32_t get_cycles() {
    uint32_t cycles;
    asm volatile ("csrr %0, cycle" : "=r"(cycles));
    return cycles;
}
// GECICI: Derleyicinin hata vermemesi icin sahte bir ses buffer'i tanimliyoruz.
// Gercek ses verisini okudugunuzda bunu kendi degiskeninizle degistirin.
int16_t gelen_ses_bufferi[1000] = {0};

int main(void) {
    // Çevre birimleri ilklendirmeleri
    uart_init(921600);
    gpio_write_pin(0, 1);  // DEBUG checkpoint 1 - uart_init done

    setup_interrupt();
    gpio_write_pin(1, 1);  // DEBUG checkpoint 2 - interrupt setup done

    // 6. TFLite Micro ve Model İlklendirmesi
    const tflite::Model* model = tflite::GetModel(g_micro_speech_quantized_model_data);
    gpio_write_pin(2, 1);  // DEBUG checkpoint 3 - model loaded

    // Modelinizin kullandığı katmanları buraya ekleyin (Örn: Conv2D, FullyConnected)
    static tflite::MicroMutableOpResolver<4> micro_op_resolver;
    micro_op_resolver.AddFullyConnected();
    micro_op_resolver.AddConv2D();
    micro_op_resolver.AddDepthwiseConv2D();
    micro_op_resolver.AddSoftmax();
    gpio_write_pin(3, 1);  // DEBUG checkpoint 4 - resolver configured

    static tflite::MicroInterpreter interpreter(
        model, micro_op_resolver, tensor_arena, kTensorArenaSize);
    gpio_write_pin(4, 1);  // DEBUG checkpoint 5 - interpreter constructed

    TfLiteStatus alloc_status = interpreter.AllocateTensors();
    gpio_write_pin(5, 1);  // DEBUG checkpoint 6 - AllocateTensors returned (didn't hang)

    if (alloc_status != kTfLiteOk) {
        gpio_write_pin(6, 1);  // DEBUG checkpoint 7 - AllocateTensors FAILED
        while (1);              // stop here so we know exactly what happened
    }

    TfLiteTensor* input = interpreter.input(0);

    // Dış dünyadan veri beklemeye başla
    gpio_write_pin(15, 1); // "Veri göndermeye başlayabilirsin, hazırım" sinyali
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) | 0x20);

    while (1) {
        // 7. UART'tan yeni ses paketinin gelmesini bekle
        uart_stream_wait_for_data();

        // 8. Gelen ses verisini modelin girdi (input) alanına kopyalayın
        for (int i = 0; i < input->bytes / 2; ++i) {
            input->data.i16[i] = gelen_ses_bufferi[i];
        }

        // 9. PERFORMANS ÖLÇÜMÜ BAŞLANGICI
        uint32_t start_cycle = get_cycles();

        // Modeli çalıştır (Çıkarsama / Inference)
        TfLiteStatus invoke_status = interpreter.Invoke();

        uint32_t end_cycle = get_cycles();
        // PERFORMANS ÖLÇÜMÜ BİTİŞİ

        if (invoke_status == kTfLiteOk) {
            uint32_t total_cycles = end_cycle - start_cycle;
            printf("Model inference tamamlandi. Cevrim (Cycle) Sayisi: %u\n", total_cycles);
        } else {
            printf("Model calistirilamadi, hata kodu olustu.\n");
        }
    } // <-- while(1) BİTİŞİ

    return 0;
} // <-- main() BİTİŞİ

// --- TFLite Linker Patch ---
// Tamamen main() fonksiyonunun dişinda olmali
namespace tflite {
    int ErrorReporter::Report(const char* format, ...) {
        return 0; // Bellek tasarrufu icin bos fonksiyon
    }
}
