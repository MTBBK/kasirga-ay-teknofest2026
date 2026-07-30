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
    write_csr(mcountinhibit,0);
    
    while (gpio_read_pin(15)) {
        uint32_t cycle_f=0;
        uint32_t cycle_l=0;
        ai_done = 0; // Her yeni ses dosyasında bayrağı sıfırla       
        start_uart_stream();
        uart_stream_wait_for_data();        

        uart_stream_wait_for_accelerator_start();
        cycle_f = read_csr(cycle);
        timer_init(44, 1, 0xFFFFFFFF);
        uart_stream_wait_for_accelerator_end();
        cycle_l = read_csr(cycle);
        disable_timer();

        while(ai_done == 0) {}
        uint32_t result = cycle_l - cycle_f;
        uint32_t timer  = read_timer();
        uart_send_string("\nTimer Sonuc:");
        uart_send_hex32(timer);
        uart_send_string("\nHizlandirici cevrim sayisi: ");
        uart_send_hex32(result); 
        uart_send_string("\n");
    }
    return 0;

}


