#include "qspi.h"
static uint8_t g_addr_mode = 0;

void config_qspi(uint8_t instruction, uint8_t mode, uint8_t write_read, uint8_t dummy, uint8_t data_width, uint8_t address_mode, uint8_t prescalar) {
    uint32_t ccr_val = 0;
    
    // Değerleri doğru bit pozisyonlarına kaydır ve maskele (Parantezlere dikkat!)
    ccr_val |= (instruction & 0xFF);                   // [7:0]
    ccr_val |= ((mode & 0x03) << 8);                   // [9:8]
    ccr_val |= ((write_read & 0x01) << 10);            // [10]
    ccr_val |= ((dummy & 0x1F) << 11);                 // [15:11]
    
    // DÜZELTME: Maskeleme önce, kaydırma sonra yapılmalı!
    ccr_val |= ((address_mode & 0x1F) << 24);          // [28:24] 
    
    uint8_t width_val = (data_width > 0) ? (data_width - 1) : 0;
    ccr_val |= ((width_val & 0x1F) << 16);             // [20:16]
    
    ccr_val |= ((prescalar & 0x3F) << 25);             // [30:25]

    ccr_val |= (1U << 31);                             

    REG_WRITE(QSPI_CCR_ADDR, ccr_val);
}
void config_addr(uint32_t address) {
	REG_WRITE(QSPI_ADR_ADDR, address);
}
void config_write_data(uint32_t data) {
    REG_WRITE(QSPI_DR_ADDR, data);
}

void config_data(const uint32_t *data, uint32_t total_bytes) {
    uint32_t num_words = total_bytes / 4;
    
    for(uint32_t i = 0; i < num_words; i++) {
        config_write_data(data[i]);
    }
}

uint32_t config_READ_ID(){
    
    config_qspi(READ_ID,0x01,0x00,0x00,0x03,0x00,0x00);
	
	while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
	
	uint32_t dev_ID = REG_READ(QSPI_DR_ADDR);
	
	return dev_ID;
}
uint32_t config_RDID(){

	
    config_qspi(RDID,0x01,0x00,0x00,0x03,0x00,0x00);
	
	while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
	
	uint32_t dev_ID = REG_READ(QSPI_DR_ADDR);
	
	return dev_ID;
}
void config_RES(uint8_t mode){
    
    config_qspi(RES,mode,0x00,0x00,0x00,0x00,0x00);
	
}
uint8_t config_RDSR1(uint8_t mode){

	
    config_qspi(RDSR1,mode,0x00,0x00,0x01,0x00,0x00);
	
	while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
	
	uint32_t status_reg = REG_READ(QSPI_DR_ADDR);
	
	return status_reg;
}
uint8_t config_RDRS2(uint8_t mode){

	
    config_qspi(RDSR2,mode,0x00,0x00,0x01,0x00,0x00);
	
	while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
	
	uint32_t flag_status_reg = REG_READ(QSPI_DR_ADDR);
	
	return flag_status_reg;
}
uint16_t config_RDCR(uint8_t mode){

	
    config_qspi(RDCR,mode,0x00,0x00,0x02,0x00,0x00);
	
	while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
	
	uint32_t config_reg = REG_READ(QSPI_DR_ADDR);
	
	return config_reg;
}

void config_CLSR(uint8_t mode){
    
    config_qspi(CLSR,mode,0x00,0x00,0x00,0x00,0x00);
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0); 
}

void    config_RESET_EN(uint8_t mode){
    
    config_qspi(RESET_EN,mode,0x00,0x00,0x00,0x00,0x00);
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
    
}
void     config_RESET_MEM(uint8_t mode){
    
    config_qspi(RESET_MEM,mode,0x00,0x00,0x00,0x00,0x00);
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
}
void     config_EN4B(uint8_t mode){
    
    config_qspi(EN4B,mode,0x00,0x00,0x00,0x01,0x00);
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
	g_addr_mode = 1;
}
void     config_EX4B(uint8_t mode){
    
    config_qspi(EX4B,mode,0x00,0x00,0x00,0x00,0x00);
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
	g_addr_mode = 0;
}

void 	 config_WRSR(uint8_t mode,uint8_t data){
    config_WREN(mode);
    
    REG_WRITE(QSPI_DR_ADDR,data&(0x0000FFFF));
    config_qspi(WRSR,mode,0x01,0x00,0x01,0x00,0x00);
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
}
void 	 config_WRCR(uint8_t mode,uint16_t data){
    config_WREN(mode);
    
    REG_WRITE(QSPI_DR_ADDR,data&(0x0000FFFF));
    config_qspi(WRCR,mode,0x01,0x00,0x02,0x00,0x00);
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);

}
void     config_WREN(uint8_t mode){
    
    config_qspi(WREN,mode,0x00,0x00,0x00,0x00,0x00);
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
}
void     config_WRDI(uint8_t mode){
    
    config_qspi(WRDI,mode,0x00,0x00,0x00,0x00,0x00);
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
}



void config_READ(uint32_t address, uint8_t *buffer, uint32_t total_bytes) {

	uint32_t *word_buffer = (uint32_t *)buffer;
    uint32_t words_to_read = total_bytes / 4;

    config_addr(address);
    
    
    config_qspi(READ, 0x01, 0x00, 0x00, total_bytes, g_addr_mode, 0x00);
    
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
    
    // FIFO'dan verileri 32-bit (word) şeklinde çek
    for (uint32_t i = 0; i < words_to_read; i++) {
        word_buffer[i] = REG_READ(QSPI_DR_ADDR);
    }
}

void config_DOR(uint32_t address, uint8_t *buffer, uint32_t total_bytes, uint8_t dummy, uint8_t mode) {
	uint32_t *word_buffer = (uint32_t *)buffer;
    uint32_t words_to_read = total_bytes / 4;

    config_addr(address);
    
    
    config_qspi(DOR, mode, 0x00, dummy, total_bytes, g_addr_mode, 0x00);
    

    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
    
    // FIFO'dan verileri 32-bit (word) şeklinde çek
    for (uint32_t i = 0; i < words_to_read; i++) {
        word_buffer[i] = REG_READ(QSPI_DR_ADDR);
    }
	
}

void config_QOR(uint32_t address, uint8_t *buffer, uint32_t total_bytes, uint8_t dummy, uint8_t mode) {
	uint32_t *word_buffer = (uint32_t *)buffer;
    uint32_t words_to_read = total_bytes / 4;
    config_addr(address);
    
    
    config_qspi(QOR, mode, 0x00, dummy, total_bytes, g_addr_mode, 0x00);
    

    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
    // FIFO'dan verileri 32-bit (word) şeklinde çek
    for (uint32_t i = 0; i < words_to_read; i++) {
        word_buffer[i] = REG_READ(QSPI_DR_ADDR);
    }
	
}


void config_PP(uint32_t address, uint8_t mode, const uint32_t *data, uint32_t total_bytes) { 
    
    config_data(data, total_bytes);
    
    config_addr(address);
    
    
    
    config_qspi(PP, mode, 0x01, 0x00, total_bytes, g_addr_mode, 0x00);
    
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
}
void config_QPP(uint32_t address, uint8_t mode, const uint32_t *data, uint32_t total_bytes) {
    
    config_data(data, total_bytes);
    config_addr(address);
    
    
    
    config_qspi(QPP, mode, 0x01, 0x00, total_bytes, g_addr_mode, 0x00);
    
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
}

void config_SE(uint8_t mode,uint32_t address){
    
	config_addr(address);
	config_qspi(SE,mode,0x00,0x00,0x00,g_addr_mode,0x00);
	while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
	
}
