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

uint32_t read_timer(){
    return REG_READ(TIM_CNT_ADDR);
}