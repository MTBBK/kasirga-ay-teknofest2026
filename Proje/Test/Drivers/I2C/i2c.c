#include "i2c.h"

void i2c_config_number_of_bytes(uint8_t byte_num){
	
	REG_WRITE(I2C_NBY, byte_num);
}

void i2c_config_address(uint8_t address){
	REG_WRITE(I2C_ADR, address);
}

void i2c_config_data(uint32_t data){
	REG_WRITE(I2C_TDR, data);
}

void i2c_transmit_en(){
	REG_WRITE(I2C_CFG, 0x00000001);
}

void i2c_receive_en(){
	REG_WRITE(I2C_CFG, 0x00000004);
}

// Check Functions
uint8_t i2c_is_transmitted() {
    while(1) {
        uint32_t cfg_val = REG_READ(I2C_CFG);
        
        // Transmit Completed (Bit 1)
        if(cfg_val & 0x02) {
            cfg_val &= 0xFFFFFFFD;        // İşlemcideki değişkeni temizle (veya ~0x02)
            REG_WRITE(I2C_CFG, cfg_val);
            return 1;
        } 
        
        // NACK Error (Bit 4)
        if(cfg_val & 0x10) {
            cfg_val &= ~0x10;             // Hata bayrağını temizle (0xFFFFFFEF)
            REG_WRITE(I2C_CFG, cfg_val);
            return 0;
        }
    }
}

uint8_t i2c_is_received() {
    while(1) {
        uint32_t cfg_val = REG_READ(I2C_CFG); // int32_t -> uint32_t olarak düzeltildi
        
        // Receive Completed (Bit 3)
        if(cfg_val & 0x08) {
            cfg_val &= 0xFFFFFFF7;        // İşlemcideki değişkeni temizle (veya ~0x08)
            REG_WRITE(I2C_CFG, cfg_val);
            return 1;
        }
        
        // NACK Error (Bit 4)
        if(cfg_val & 0x10) {
            cfg_val &= ~0x10;             // Hata bayrağını temizle
            REG_WRITE(I2C_CFG, cfg_val);
            return 0;
        }
    }
}


uint32_t i2c_read_data(){
	return REG_READ(I2C_RDR);
}

// Full READ/WRITE

uint8_t i2c_WRITE(uint8_t byte_num, uint8_t address, uint32_t data){
	i2c_config_number_of_bytes(byte_num);
	i2c_config_address(address);
	i2c_config_data(data);
	i2c_transmit_en();
	
	return (i2c_is_transmitted());
}

uint8_t i2c_READ(uint8_t byte_num, uint8_t address, uint32_t* data_out) {
	i2c_config_number_of_bytes(byte_num);
	i2c_config_address(address);
	i2c_receive_en();
	
	if(i2c_is_received()){
		*data_out = i2c_read_data();
		return 1;
	}
	return 0;
}
