#include "uart.h"
#include "qspi.h"
#include "timer.h"
#include "gpio.h"
#include "i2c.h"
#include "interrupt.h"
#include "uart_stream.h"


int main(void) {
    setup_interrupt();
    write_csr(mcountinhibit,0);
    gpio_write_pin(15, 1); // "Veri göndermeye başlayabilirsin, hazırım" sinyali
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) | 0x20);

    uint32_t cycle_f=0;
    uint32_t cycle_l=0;
    
   while((REG_READ(UART_STREAM_CFG_ADDR) & 0x40) == 0) {
       
    }
    
    cycle_f = read_csr(cycle);

    
    while((REG_READ(UART_STREAM_CFG_ADDR) & 0x80) == 0) {
       
    }
    
    cycle_l = read_csr(cycle);
    
    
    uint32_t result = cycle_l - cycle_f;
    
    uart_send_string("\nHizlandirici cevrim sayisi: ");
    uart_send_hex32(result); 
    uart_send_string("\n");
    
    return 0;
}