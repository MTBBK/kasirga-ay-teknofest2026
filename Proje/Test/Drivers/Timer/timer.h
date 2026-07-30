#include <stdint.h>

#define TIM_PRE_ADDR 0x00011000  
#define TIM_ARE_ADDR 0x00011004  
#define TIM_CLR_ADDR 0x00011008  
#define TIM_ENA_ADDR 0x0001100C  
#define TIM_MOD_ADDR 0x00011010
#define TIM_CNT_ADDR 0x00011014  
#define TIM_EVN_ADDR 0x00011018  
#define TIM_EVC_ADDR 0x0001101C 


#define CLK_PERIOD 20 // ns cinsinden
#define SYSTEM_CLK_HZ 50000000 // 50 MHz

#define REG_WRITE(addr, val) (*((volatile uint32_t *)(addr)) = (val))
#define REG_READ(addr)       (*((volatile uint32_t *)(addr)))

void reset_timer();
void enable_timer();
void disable_timer();
void timer_init(uint32_t frequency, uint8_t mode,uint32_t auto_reload);
uint32_t read_timer(void);

void delay_us(uint32_t us);
void delay_ms(uint32_t ms);
void delay_s(uint32_t s);