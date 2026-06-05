#include "uart.h"

int main() {
    uart_init(921600); 

    uart_send_char('O');
    uart_send_char('K');
    uart_send_char('\n');

    while (1) {
        for(volatile int i = 0; i < 500000; i++); 
        uart_send_char('.');
    }

    return 0;
}
