#include "vga.h"
#include "uart.h"
char buffer[2400];
void print_s(const char* s){
    uart_send_string(s);
    vga_puts(s);
}
void print_c(char c){
    uart_send_char(c);
    vga_putc(c);
}
void print_h32(uint32_t num){
    uart_send_hex32(num);
    vga_put_hex32(num);
}
void print_d32(uint32_t num){
    uart_send_dec32(num);
    vga_put_dec32(num);
}
void vga_putc(char c){
    // 1. ÖNCE SCROLL KONTROLÜ
    // İmleç sınırın altındaysa ve YENİ bir karakter/komut geldiyse ekranı kaydır.
    if (cursor_y >= 30) {
        vga_scroll();
        cursor_y = 29;
    }

    // 2. KARAKTER İŞLEME
    if (c == '\n') {
        cursor_x = 0;
        cursor_y++;
    } 
    else if (c == '\r') {
        cursor_x = 0;
    } 
    else {
        // Normal karakteri BRAM'e yaz
        uint16_t addr = 80 * cursor_y + cursor_x;
        REG_WRITE(VGA_TBA_ADDR, addr);
        REG_WRITE(VGA_TBD_ADDR, c);
        buffer[addr] = c;


        // İmleci ilerlet
        cursor_x++;
        
        // Satır sonuna gelindiyse imleci kendiliğinden bir alt satıra al
        if (cursor_x >= 80) {
            cursor_x = 0;
            cursor_y++; 
            // NOT: Burada cursor_y 30 olsa bile EKRANI HEMEN KAYDIRMIYORUZ.
            // Bir sonraki `vga_putc` çağrısında (yukarıdaki if) kaydırılacak.
        }
    }

    
}
void vga_puts(const char* s){
    while (*s) {
        vga_putc(*s);
        s++;
    }
}

void vga_clear(void){
    cursor_x=0;
    cursor_y=0;
    for (uint16_t i = 0; i < 2400; i++)
    {

        vga_putc(' ');
    }
    cursor_x=0;
    cursor_y=0;
    
}


// 1 Byte'ı Hex olarak yazdırır ("A5", "0F" gibi)
void vga_put_hex8(uint8_t val)
{
    static const char hex_chars[] = "0123456789ABCDEF";

    vga_putc(hex_chars[val >> 4]);
    vga_putc(hex_chars[val & 0x0F]);
}
// 32-bit değeri Hex olarak yazdırır
void vga_put_hex32(uint32_t val)
{
    vga_putc('0');
    vga_putc('x');

    vga_put_hex8((val >> 24) & 0xFF);
    vga_put_hex8((val >> 16) & 0xFF);
    vga_put_hex8((val >> 8) & 0xFF);
    vga_put_hex8(val & 0xFF);
}

// 32-bit değeri Decimal olarak yazdırır
void vga_put_dec32(uint32_t val)
{
    char buf[12];
    int i = 10;

    buf[11] = '\0';

    if (val == 0)
    {
        vga_putc('0');
        return;
    }

    while (val > 0)
    {
        buf[i] = (val % 10) + '0';
        val /= 10;
        i--;
    }

    vga_puts(&buf[i + 1]);
}

void vga_scroll(void){
    uint16_t i;

    // Satırları yukarı taşı
    for(i = 80; i < 2400; i++)
    {
        buffer[i - 80] = buffer[i];
    }

    // Son satırı temizle
    for(i = 2320; i < 2400; i++)
    {
        buffer[i] = ' ';
    }

    // VGA'yı tekrar doldur
    for(i = 0; i < 2400; i++)
    {
        REG_WRITE(VGA_TBA_ADDR, i);
        REG_WRITE(VGA_TBD_ADDR, buffer[i]);
    }

}