#include <stdint.h>

#define VGA_TBD_ADDR 0x00012000  
#define VGA_TBA_ADDR 0x00012004

#define REG_WRITE(addr, val) (*((volatile uint32_t *)(addr)) = (val))
#define REG_READ(addr)       (*((volatile uint32_t *)(addr)))
static uint8_t cursor_x = 0;
static uint8_t cursor_y = 0;

void print_s(const char* s);
void print_c(char c);
void vga_putc(char c);
void vga_puts(const char* s);
void vga_clear(void);

void vga_scroll(void);
void print_h32(uint32_t num);
void print_d32(uint32_t num);
void vga_put_hex8(uint8_t val);
void vga_put_hex32(uint32_t val);
void vga_put_dec32(uint32_t val);
void print_h32(uint32_t num);
void print_d32(uint32_t num);