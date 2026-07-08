#include "uart_stream.h"


void uart_stream_wait_for_data(void) {
    // CFG yazmacının 4. biti (0x10) stream_done_o sinyaline bağlıdır.
    // Donanım, veriyi AXI üzerinden belleğe yazmayı bitirdiğinde bu bit 1 olur.
    while ((REG_READ(UART_STREAM_CFG_ADDR) & 0x10) == 0) {
        // İşlemci burada donanımın işi bitirmesini bekler (Polling)
    }
    
    // İşlem bittikten sonra bir sonraki veri akışı için ilgili bayrağı temizle
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) & ~0x10);
}

uint32_t uart_stream_read_ai_memory(uint32_t target_address) {
    

    REG_WRITE(UART_STREAM_DUMP_ADR_ADDR, target_address);
    

    REG_WRITE(UART_STREAM_CFG_ADDR, 0x08);


    while (REG_READ(UART_STREAM_CFG_ADDR) & 0x08) {
        
    }

    return REG_READ(UART_STREAM_DUMP_DATA_ADDR);
}





