#include "timer.h"



void enable_timer(){
    REG_WRITE(TIM_ENA_ADDR,1);
}

void disable_timer(){
    REG_WRITE(TIM_ENA_ADDR,0);
}


void timer_init(uint32_t prescaler, uint8_t mode, uint32_t auto_reload) { 
    disable_timer();
    
    REG_WRITE(TIM_MOD_ADDR, mode);  
    REG_WRITE(TIM_PRE_ADDR, prescaler);
    REG_WRITE(TIM_ARE_ADDR, auto_reload);
    
    REG_WRITE(TIM_EVC_ADDR, 1); 
    REG_WRITE(TIM_CLR_ADDR, 1); 
    
    REG_WRITE(TIM_EVC_ADDR, 0); 
    REG_WRITE(TIM_CLR_ADDR, 0); 
    
    enable_timer();
}

uint32_t read_timer(void){
    return REG_READ(TIM_CNT_ADDR);
}

void delay_us(uint32_t us) {
    // Timer'ı 1 mikrosaniye hassasiyet (Prescaler = 49),
    // Yukarı sayma (Mode = 1) ve Maksimum sınır (0xFFFFFFFF) ile başlat.
    // timer_init() içinde TIM_CLR 1 yapıldığı için sayaç sıfırdan başlar.
    timer_init(49, 1, 0xFFFFFFFF);
    
    // Sayaç istenen mikrosaniye değerine ulaşana kadar döngüde bekle (Blocking)
    while(read_timer() < us) {
        // Bekle
    }
}

// 1 Milisaniye (ms) = 1000 Mikrosaniye (µs)
void delay_ms(uint32_t ms) {
    delay_us(ms * 1000);
}

// 1 Saniye (s) = 1000 Milisaniye = 1,000,000 Mikrosaniye (µs)
void delay_s(uint32_t s) {
    delay_us(s * 1000000);
}