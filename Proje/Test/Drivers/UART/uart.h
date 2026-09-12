#include <stdint.h>

// UART register adresleri (AXI-Lite adresleme)
#define UART_CPB_ADDR 0x00005000  // Clock per bit
#define UART_STP_ADDR 0x00005004  // Stop bit
#define UART_RDR_ADDR 0x00005008  // Read data
#define UART_TDR_ADDR 0x0000500C  // Transmit data
#define UART_CFG_ADDR 0x00005010  // Config

#define CLK_FREQ 45



// Memory-mapped IO erişimi için volatile kullanımı
#define REG_WRITE(addr, val) (*((volatile uint32_t *)(addr)) = (val))
#define REG_READ(addr)       (*((volatile uint32_t *)(addr)))
#define UART_READ_DATA       (*(volatile char*)UART_RDR_ADDR)

void uart_init(uint32_t);
void uart_send_char(char);
void uart_send_string(const char*);
char uart_get_char(void);
uint8_t char_received(void);
uint8_t uart_get_byte(void);
void uart_send_dec32(uint32_t val);
void uart_send_hex8(uint8_t val);
void uart_send_hex32(uint32_t val);
void uart_print_buffer(const char* label, uint8_t *buffer, uint32_t length);
