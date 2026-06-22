#include "gpio.h"

uint32_t gpio_read_pin(uint8_t index){
    return ((REG_READ(GPIO_IDR_ADDR) >> index) & 1);
}

void gpio_write_pin(uint8_t index, uint8_t value){
    uint32_t output_pins = REG_READ(GPIO_ODR_ADDR);
    if(value)
        REG_WRITE(GPIO_ODR_ADDR,output_pins | (1U << index));
    else
        REG_WRITE(GPIO_ODR_ADDR,output_pins & ~(1U << index));
}

void gpio_write_all(uint16_t value) {
    uint32_t current_reg_val = REG_READ(GPIO_ODR_ADDR);
    REG_WRITE(GPIO_ODR_ADDR, (current_reg_val & 0xFFFF0000) | value);
}

uint32_t gpio_read_all(void) {
    return (uint16_t)(REG_READ(GPIO_IDR_ADDR) & 0x0000FFFF);
}