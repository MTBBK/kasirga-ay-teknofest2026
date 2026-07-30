
#include <stdint.h>

// UART register adresleri (AXI-Lite adresleme)
#define UART_STREAM_CPB_ADDR        0x00006000  // Clock per bit
#define UART_STREAM_STP_ADDR        0x00006004  // Stop bit
#define UART_STREAM_RDR_ADDR        0x00006008  // Read data
#define UART_STREAM_TDR_ADDR        0x0000600C  // Transmit data
#define UART_STREAM_CFG_ADDR        0x00006010  // Config
#define UART_STREAM_DUMP_ADR_ADDR   0x00006014
#define UART_STREAM_DUMP_DATA_ADDR  0x00006018

#define CLK_FREQ 45
#define RESULT_ADDR 0x000127B8




// Memory-mapped IO erişimi için volatile kullanımı
#define REG_WRITE(addr, val) (*((volatile uint32_t *)(addr)) = (val))
#define REG_READ(addr)       (*((volatile uint32_t *)(addr)))
#define UART_READ_DATA       (*(volatile char*)UART_RDR_ADDR)

void uart_stream_wait_for_data(void);
void start_uart_stream(void);
void start_uart_stream_for_sim(void);
uint32_t uart_stream_read_ai_memory(uint32_t target_address);
void uart_stream_wait_for_accelerator_start(void);
void uart_stream_wait_for_accelerator_end(void);

void uart_stream_wait_for_loader_start(void);

// bit9 (0x200): loader_done_i
void uart_stream_wait_for_loader_end(void);

// bit11 (0x800): infer_done_i
void uart_stream_wait_for_write_start(void);

// bit8 (0x100): write_done_i
void uart_stream_wait_for_write_end(void);