#include "uart.h"
#include "qspi.h"
#include "timer.h"
#include "gpio.h"
#include "i2c.h"
#include "interrupt.h"
#include "uart_stream.h"


int main(void) {
    setup_interrupt();
    while (gpio_read_pin(15))
    {
        start_uart_stream();
        uart_stream_wait_for_data();
        while((REG_READ(UART_STREAM_CFG_ADDR) & 0x80) == 0) {
       
    }
        
    }
    
    
    return 0;
}