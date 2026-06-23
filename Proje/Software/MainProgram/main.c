#include "uart.h"
#include "qspi.h"
#include "timer.h"
#include "gpio.h"
#include "i2c.h"

int main(void) {

    uart_init(921600); 

    uart_send_string("QSPI Testi");
    uart_send_char('\n');
    uart_send_string("[INFO] Flash Bellek Kimlik Sorgulaniyor...\r\n");
    
    uint32_t devID = config_READ_ID();
    uart_send_string(" -> READ_ID (0x90) : "); 
    uart_send_hex32(devID); 
    uart_send_string("\r\n");

    uint32_t devID2 = config_RDID();
    uart_send_string(" -> RDID    (0x9F) : "); 
    uart_send_hex32(devID2); 
    uart_send_string("\r\n\n");

    uart_send_string("GPIO Testi");
    uart_send_char('\n');
    //GPIO test
    for (uint8_t i = 0; i < 8; i++)
    {
        gpio_write_pin(2*i,1);
        gpio_write_pin((2*i)+1,0);
    }
    uint32_t gpio_val = gpio_read_all();
    uart_send_hex32(gpio_val);
    uart_send_string("\r\n");
    
    gpio_write_all(0xbacd);

    uint32_t gpio_val2=0x00000000;
    for (uint8_t i = 0; i < 16; i++)
    {
        gpio_val2 |= (gpio_read_pin(i) << i);
        
    }
    uart_send_hex32(gpio_val2);
    uart_send_string("\r\n");
    uart_send_char('\n');



    uart_send_string("I2C Testi");
    uart_send_char('\n');
    i2c_WRITE(3,0x01,0x00aaaaaa);

    uint32_t i2c_data=0;
    i2c_READ(3,0x01,&i2c_data);
    uart_send_string("I2C Value:");
    uart_send_hex32(i2c_data);
    uart_send_char('\n');
    uart_send_char('\n');

    uart_send_string("Timer Testi");
    uart_send_char('\n');
    //Timer test
    timer_init(0,1,100000);
    
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
