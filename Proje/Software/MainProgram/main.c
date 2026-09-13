#include "uart.h"
#include "qspi.h"
#include "timer.h"
#include "gpio.h"
#include "i2c.h"
#include "interrupt.h"
#include "uart_stream.h"
#include "vga.h"



// Interrupt ile main'i senkronize edecek bayrak

volatile uint8_t ai_done = 0;
int main(void) {
    /*vga_clear();
    const char* vga_startup_screen = "+------------------------------------------------------------------------------+\
|                                                                              |\
|                                                                              |\
|                                                                              |\
|                                KASIRGA - AY                                  |\
|                                ============                                  |\
|                                                                              |\
|                                                                              |\
|                                                                              |\
|                                                                              |\
|                                                                              |\
|    [ UYGULAMALAR ]                                                           |\
|    ------------------------------------                                      |\
|    * GPIO 7  : Fetch-Enable'den evvel genel devre aktif edilmeli             |\
|    * BTN_U   : Fetch-Enable (Makineyi hareketlendirir)                       |\
|    * BTN_C   : Yeniden Oynatma                                               |\
|    * GPIO 15 : Yapay us ivmelendirici                                        |\
|    * GPIO 5  : I2C fer duyarga gereci                                        |\
|                                                                              |\
|                                                                              |\
|                                                                              |\
|                                                                              |\
|                                                                              |\
|                                                                              |\
|                                                                              |\
|                   >>> Talep edilen sinyali tercih edin <<<                   |\
|                                                                              |\
|                                                                              |\
|                                                                              |\
+------------------------------------------------------------------------------+";
    vga_puts(vga_startup_screen); 
    */
    setup_interrupt();
    write_csr(mcountinhibit,0);
    
    while (gpio_read_pin(7))
    {
        /*uint32_t i2c_data = 0;  // Senin i2c_READ fonksiyonunun beklediği 32-bit veri tipi
    uint16_t raw_lux;
    
    i2c_WRITE(1, 0x23, 0x10);
    
    while(gpio_read_pin(5)){
        // Sensörün ölçümü tamamlaması için bekle
        delay_ms(200);
        
        // 2 byte veriyi oku
        i2c_READ(2, 0x23, &i2c_data);

        // YÖNTEM B: Gelen byte'ları doğru sıraya dizme (High ve Low byte birleştirme)
        // I2C sürücün ilk gelen byte'ı düşük adresli bitlere koyuyorsa:
        raw_lux = ((i2c_data & 0xFF) << 8) | ((i2c_data >> 8) & 0xFF);

        // Float kullanmadan, tamsayı matematiği ile Lux hesabı (raw_lux / 1.2)
        uint32_t lux_int = (raw_lux * 10) / 12;

        // Sonuçları UART üzerinden terminale yazdır
        uart_send_string("Lux Degeri: ");
        uart_send_dec32(lux_int);
        uart_send_string("\n");

    }*/


    
    

    while (1) {
        uint32_t cycle_f1=0;
        uint32_t cycle_l1=0;
        uint32_t cycle_f2=0;
        uint32_t cycle_l2=0;
        uint32_t cycle_f3=0;
        uint32_t cycle_l3=0;
        uint32_t cycle_f4=0;
        uint32_t cycle_l4=0;
        ai_done = 0; // Her yeni ses dosyasında bayrağı sıfırla       
        
        /*if(gpio_read_all()==0xADEF){
            start_uart_stream_for_sim();
        }
        else{
            start_uart_stream();
        }*/
        uint8_t byte1 = 0;
        uint8_t byte2 = 0;

        // Wait for AA 55 preamble
        /*while (1) {
            byte1 = uart_stream_get_byte(); // Your function to read 1 byte from the stream port
            if (byte1 == 0xAA) {
                byte2 = uart_stream_get_byte();
                if (byte2 == 0x55) {
                    start_uart_stream_for_demo();
                    break; // Synchronization successful, break the loop and start reading the frame
                }
            }
        }*/
       start_uart_stream();
        /*cycle_f1 = read_csr(cycle);
        timer_init(49,1,0xFFFFFFFF);*/
        uart_stream_wait_for_data();
        /*cycle_l1 = read_csr(cycle);

        uart_stream_wait_for_loader_start();
        cycle_f2 = read_csr(cycle);
        uart_stream_wait_for_loader_end(); 
        cycle_l2 = read_csr(cycle);


        uart_stream_wait_for_accelerator_start();
        cycle_f3=read_csr(cycle);
        
        uart_stream_wait_for_accelerator_end();
        cycle_l3=read_csr(cycle);
        
        uart_stream_wait_for_write_start();
        cycle_f4=read_csr(cycle);
        uart_stream_wait_for_write_end();
        cycle_l4=read_csr(cycle);
        while(ai_done == 0) {}
        uint32_t time=read_timer();
        uart_send_string("Ready->Sonuc (mikro saniye):");
        uart_send_dec32(time);
        uart_send_string("\n");
        uint32_t result1 = cycle_l1 - cycle_f1;
        uint32_t result2 = cycle_l2 - cycle_f2;
        uint32_t result3 = cycle_l3 - cycle_f3;
        uint32_t result4 = cycle_l4 - cycle_f4;
        uint32_t result5 = cycle_l4 - cycle_f1;
        
        uart_send_string("\nHizlandirici cevrim sayisi: ");
        uart_send_dec32(result5);
        uart_send_string("\nUart_stream cevrim sayisi: ");
        uart_send_dec32(result1); 
        uart_send_string("\nLoader cevrim sayisi: ");
        uart_send_dec32(result2); 
        uart_send_string("\nInference cevrim sayisi: ");
        uart_send_dec32(result3); 
        uart_send_string("\nwrite_back cevrim sayisi: ");
        uart_send_dec32(result4); 
        uart_send_string("\n");
        uart_send_string("\nSonuc: ");
        uart_send_hex32(last_ai_result);
        uart_send_string("\n");
        */
        if(last_ai_result==0x0E){
            uart_send_string("Result is: UNKNOWN\n");
        }
        else if(last_ai_result==0x0D){
            uart_send_string("Result is: SILENCE\n");
        }
        else if(last_ai_result==0x0B){
            uart_send_string("Result is: YES\n");
        }
        else if(last_ai_result==0x07){
            uart_send_string("Result is: NO\n");
        }
    }

    
    }
    while (1)
    {
        /* code */
    }
    
    return 0;

}

