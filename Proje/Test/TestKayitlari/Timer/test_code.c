#include "uart.h"
#include "qspi.h"
#include "timer.h"
#include "gpio.h"
#include "i2c.h"
#include "interrupt.h"
#include "uart_stream.h"


int main(void) {
    setup_interrupt();
    


    timer_init(0,1,45000000);
    
    

    while(1) {
         if (REG_READ(TIM_EVN_ADDR) > 0) {
            
            // 1. ÖNCE VAKİT KAYBETMEDEN TIMER'I SIFIRLA (Yeni saniye hemen saymaya başlasın)
            REG_WRITE(TIM_EVC_ADDR, 1);
            REG_WRITE(TIM_EVC_ADDR, 0);
    
            // 2. SONRA YAVAŞ İŞLEMLERİ (UART) YAP
            uart_send_char('.');
            uart_send_char('\n');
        }
    }


    return 0;
}
