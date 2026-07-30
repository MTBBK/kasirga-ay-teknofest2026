#include "uart_stream.h"
#include "uart.h"
#include "gpio.h"

void uart_stream_wait_for_data(void) {
    // CFG yazmacının 4. biti (0x10) stream_done_o sinyaline bağlıdır.
    while ((REG_READ(UART_STREAM_CFG_ADDR) & 0x10) == 0) {
        // İşlemci burada donanımın işi bitirmesini bekler (Polling)
    }

    // İşlem bittikten sonra hem "Done" (0x10) hem de garanti olması
    // adına "Stream Enable" (0x20) bayrağını maskeleyerek temizle (~0x30).
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) & ~0x30);
}

void start_uart_stream(void){
    uart_send_string("READY\n");
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) | 0x20);
}

void start_uart_stream_for_sim(void){
    gpio_write_pin(15, 1); // "Veri göndermeye başlayabilirsin, hazırım" sinyali
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) | 0x20);
}

uint32_t uart_stream_read_ai_memory(uint32_t target_address) {
    REG_WRITE(UART_STREAM_DUMP_ADR_ADDR, target_address);

    // stream_enable zaten kapandığı ve FSM IDLE'a döndüğü için
    // artık 0x08 (TX Trigger) sorunsuz bir şekilde tetiklenecektir.
    REG_WRITE(UART_STREAM_CFG_ADDR, 0x08);

    while (REG_READ(UART_STREAM_CFG_ADDR) & 0x08) {
        // TX aktarımının bitmesini bekle (fsm_tx_dump_done_i geldiğinde bit3 temizlenir)
    }

    return REG_READ(UART_STREAM_DUMP_DATA_ADDR);
}

// bit6 (0x40): accelerator_started
void uart_stream_wait_for_accelerator_start(void){
    while((REG_READ(UART_STREAM_CFG_ADDR) & 0x40) == 0) {}
}

// bit7 (0x80): accelerator_done
void uart_stream_wait_for_accelerator_end(void){
    while((REG_READ(UART_STREAM_CFG_ADDR) & 0x80) == 0) {}
}

// bit10 (0x400): loader_started_i
void uart_stream_wait_for_loader_start(void){
    while((REG_READ(UART_STREAM_CFG_ADDR) & 0x400) == 0) {}
}

// bit9 (0x200): loader_done_i
void uart_stream_wait_for_loader_end(void){
    while((REG_READ(UART_STREAM_CFG_ADDR) & 0x200) == 0) {}
}

// bit11 (0x800): infer_done_i
void uart_stream_wait_for_write_start(void){
    while((REG_READ(UART_STREAM_CFG_ADDR) & 0x800) == 0) {}
}

// bit8 (0x100): write_done_i
void uart_stream_wait_for_write_end(void){
    while((REG_READ(UART_STREAM_CFG_ADDR) & 0x100) == 0) {}
}