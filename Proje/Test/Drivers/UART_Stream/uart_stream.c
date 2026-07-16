#include "uart_stream.h"


void uart_stream_wait_for_data(void) {
    // CFG yazmacının 4. biti (0x10) stream_done_o sinyaline bağlıdır.
    while ((REG_READ(UART_STREAM_CFG_ADDR) & 0x10) == 0) {
        // İşlemci burada donanımın işi bitirmesini bekler (Polling)
    }
    
    // YENİ: İşlem bittikten sonra hem "Done" (0x10) hem de garanti olması
    // adına "Stream Enable" (0x20) bayrağını maskeleyerek temizle (~0x30).
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) & ~0x30);
}

uint32_t uart_stream_read_ai_memory(uint32_t target_address) {
    REG_WRITE(UART_STREAM_DUMP_ADR_ADDR, target_address);
    
    // stream_enable zaten kapandığı ve FSM IDLE'a döndüğü için 
    // artık 0x08 (TX Trigger) sorunsuz bir şekilde tetiklenecektir.
    REG_WRITE(UART_STREAM_CFG_ADDR, 0x08);

    while (REG_READ(UART_STREAM_CFG_ADDR) & 0x08) {
        // TX aktarımının bitmesini bekle
    }

    return REG_READ(UART_STREAM_DUMP_DATA_ADDR);
}





