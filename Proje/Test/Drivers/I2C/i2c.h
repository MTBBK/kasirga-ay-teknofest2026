#include <stdint.h>

#define REG_WRITE(addr, val) (*((volatile uint32_t *)(addr)) = (val))
#define REG_READ(addr)       (*((volatile uint32_t *)(addr)))

#define I2C_NBY				0x00008000
#define I2C_ADR				0x00008004
#define I2C_RDR				0x00008008
#define I2C_TDR				0x0000800C
#define I2C_CFG				0x00008010

// 			-- Functions --
void i2c_config_number_of_bytes(uint8_t byte_num);
void i2c_config_address(uint8_t address);
void i2c_config_data(uint32_t data);
void i2c_transmit_en(void);
void i2c_receive_en(void);

uint8_t i2c_is_transmitted(void);
uint8_t i2c_is_received(void);

uint32_t i2c_read_data(void);
uint8_t i2c_WRITE(uint8_t byte_num, uint8_t address, uint32_t data);
uint8_t i2c_READ(uint8_t byte_num, uint8_t address, uint32_t* data_out);