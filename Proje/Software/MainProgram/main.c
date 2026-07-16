#include "uart.h"
#include "qspi.h"
#include "timer.h"
#include "gpio.h"
#include "i2c.h"
#include "interrupt.h"
#include "uart_stream.h"


int main(void) {
    uart_init(921600); 
    setup_interrupt();


    
    gpio_write_pin(15, 1); // "Veri göndermeye başlayabilirsin, hazırım" sinyali
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) | 0x20);
    uart_stream_wait_for_data();

    while(1) {
         
    }

    return 0;
}