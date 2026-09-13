#include "uart_stream.h"
#include "uart.h"
#include "gpio.h"
#include "vga.h"
#include "interrupt.h"

void uart_stream_wait_for_data(void) {
    // CFG yazmacının 4. biti (0x10) stream_done_o sinyaline bağlıdır.
    while ((REG_READ(UART_STREAM_CFG_ADDR) & 0x10) == 0) {
        // İşlemci burada donanımın işi bitirmesini bekler (Polling)
    }

    // İşlem bittikten sonra hem "Done" (0x10) hem de garanti olması
    // adına "Stream Enable" (0x20) bayrağını maskeleyerek temizle (~0x30).
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) & ~0x30);
}
uint32_t read_result(void){
    return last_ai_result & 0x000F;
}

#include <stdint.h>

extern volatile uint32_t last_ai_result;
extern volatile uint32_t softmax;

// Pass an array of size 4 to this function: e.g., int8_t my_softmax[4]; read_softmax(my_softmax);
void read_softmax(int8_t *softmax_array){
    // Extract each 8-bit segment and cast to int8_t for correct signed interpretation
    softmax_array[0] = (int8_t)((last_ai_result >> 8)  & 0xFF);
    softmax_array[1] = (int8_t)((last_ai_result >> 16) & 0xFF);
    softmax_array[2] = (int8_t)((last_ai_result >> 24) & 0xFF);
    softmax_array[3] = (int8_t)(softmax & 0xFF);
}
void start_uart_stream(void){
    uart_send_string("READY\n");
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) | 0x20);
}
void start_uart_stream_for_demo(void){
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) | 0x20);
}

void start_uart_stream_for_sim(void){
    gpio_write_pin(15, 1); // "Veri göndermeye başlayabilirsin, hazırım" sinyali
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) | 0x20);
}
uint8_t uart_stream_get_byte(){
    // HW, RDR okunduğunda cfg[1]'i (rx_data_ready) otomatik temizler.
    // CFG'ye yazma gerekmiyor.
    return REG_READ(UART_STREAM_RDR_ADDR);
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