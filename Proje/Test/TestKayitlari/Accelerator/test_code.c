#include "uart.h"
#include "qspi.h"
#include "timer.h"
#include "gpio.h"
#include "i2c.h"
#include "interrupt.h"
#include "uart_stream.h"


int main(void) {
    setup_interrupt();
    
    uart_send_string("READY\n");
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) | 0x20);


    
    while(1) {
           
    }

    return 0;
}
