#include "uart.h"
#include "qspi.h"
#include "timer.h"
#include "gpio.h"
#include "i2c.h"
#include "interrupt.h"
#include "uart_stream.h"



// Interrupt ile main'i senkronize edecek bayrak

volatile uint8_t ai_done = 0;

int main(void) {
    setup_interrupt();
    while (gpio_read_pin(15)) {
        ai_done = 0; // Her yeni ses dosyasında bayrağı sıfırla       
        start_uart_stream();
        uart_stream_wait_for_data();        

        uart_stream_wait_for_accelerator_start();
        uart_stream_wait_for_accelerator_end();

        while(ai_done == 0) {}
    }
    return 0;

}


