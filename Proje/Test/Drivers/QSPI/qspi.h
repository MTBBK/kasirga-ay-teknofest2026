#include <stdint.h>

// --- Memory-Mapped IO Access Macros ---
// These volatile pointers are crucial for correct hardware interaction.
#define REG_WRITE(addr, val) (*((volatile uint32_t *)(addr)) = (val))
#define REG_READ(addr)       (*((volatile uint32_t *)(addr)))

#define QSPI_CCR_ADDR   0x00009000
#define QSPI_ADR_ADDR   0x00009004
#define QSPI_DR_ADDR    0x00009008
#define QSPI_STA_ADDR   0x0000900C
#define QSPI_FCR_ADDR   0x00009010


#define READ       0x03
#define DOR        0x3B
#define QOR        0x6B
#define PP         0x02
#define QPP        0x32
#define SE         0xD8
#define READ_ID    0x9E
#define RDID       0x9F
#define RES        0xAB
#define RDSR1      0x05
#define RDSR2      0x70
#define RDCR       0xB5
#define WRSR       0x01
#define WRCR       0xB1
#define WRDI       0x04
#define WREN       0x06
#define CLSR       0x50
#define RESET_EN   0x66
#define RESET_MEM  0x99
#define EN4B       0xB7
#define EX4B       0xE9


void config_qspi(uint8_t instruction, uint8_t mode, uint8_t write_read, uint8_t dummy, uint8_t data_width,uint8_t address_mode, uint8_t prescalar);
void config_addr(uint32_t address);
void config_data(const uint32_t *data, uint32_t total_bytes);
void config_write_data(uint32_t data);

uint32_t config_READ_ID(void);
uint32_t config_RDID(void);
void  config_RES(uint8_t mode);
uint8_t config_RDSR1(uint8_t mode);
uint8_t config_RDSR2(uint8_t mode);
uint16_t  config_RDCR(uint8_t mode);
void 	 config_WRSR(uint8_t mode,uint8_t data);
void 	 config_WRCR(uint8_t mode,uint16_t data);
void     config_WREN(uint8_t mode);
void     config_WRDI(uint8_t mode);
void     config_CLSR(uint8_t mode);
void     config_READ(uint32_t address, uint8_t *buffer, uint32_t total_bytes);
void     config_DOR(uint32_t address, uint8_t *buffer, uint32_t total_bytes, uint8_t dummy, uint8_t mode);
void     config_QOR(uint32_t address, uint8_t *buffer, uint32_t total_bytes, uint8_t dummy, uint8_t mode);
void     config_PP(uint32_t address, uint8_t mode, const uint32_t *data, uint32_t total_bytes);
void     config_QPP(uint32_t address, uint8_t mode, const uint32_t *data, uint32_t total_bytes);
void     config_SE(uint8_t mode,uint32_t address);
void     config_RESET_EN(uint8_t mode);
void     config_RESET_MEM(uint8_t mode);
void     config_EN4B(uint8_t mode);
void     config_EX4B(uint8_t mode);
