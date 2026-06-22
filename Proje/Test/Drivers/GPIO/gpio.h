#include <stdint.h>

#define GPIO_IDR_ADDR 0x00007000  
#define GPIO_ODR_ADDR 0x00007004  


#define REG_WRITE(addr, val) (*((volatile uint32_t *)(addr)) = (val))
#define REG_READ(addr)       (*((volatile uint32_t *)(addr)))

uint32_t gpio_read_pin(uint8_t index);
void gpio_write_pin(uint8_t index,uint8_t value);

void gpio_write_all(uint16_t value);

uint32_t gpio_read_all(void);