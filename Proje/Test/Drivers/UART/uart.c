#include "uart.h"

void uart_init(uint32_t baud_rate) {
    // CPU hızı 100MHz olarak varsayılmıştır
    uint32_t clkdiv = CLK_FREQ / baud_rate;
    
    REG_WRITE(UART_CPB_ADDR, clkdiv);  // Clock per bit ayarı
    REG_WRITE(UART_STP_ADDR, 0);       // 1 stop bit (00:1 bit, 01:1.5 bit, 10:2 bit)
    
}

void uart_send_char(char c) {
    // TX meşgulse bekle (önceki gönderim devam ediyorsa)
    while (REG_READ(UART_CFG_ADDR) & 0x01);

    // UART transmit veri registerına karakteri yaz
    REG_WRITE(UART_TDR_ADDR, c);

    // TX başlat (bit 0 = 1), aynı zamanda eski tx_done'ı temizler
    REG_WRITE(UART_CFG_ADDR, 0x01);


    // tx_done (bit 2) set olana kadar bekle
    while ((REG_READ(UART_CFG_ADDR) & 0x4) == 0);
    
    // tx_done bayrağını temizle. HW zaten bit 0'ı temizlemiş durumda.
    // Doğrudan 0x00 yazıyoruz, RMW kullanmıyoruz ki rx_ready (bit 1) bozulmasın.
    // Not: HW tarafında bit 1 zaten rx_done/rx_clear ile yönetiliyor.
    REG_WRITE(UART_CFG_ADDR, 0x00);
}

void uart_send_string(const char *str) {
    while (*str) {
        uart_send_char(*str);
        str++;
    }
}

uint8_t char_received(){
	if(REG_READ(UART_CFG_ADDR) & 0x02) return 1;
	else return 0;
}

char uart_get_char(){
    // HW, RDR okunduğunda cfg[1]'i (rx_data_ready) otomatik temizler.
    // CFG'ye yazma gerekmiyor.
    return (char)REG_READ(UART_RDR_ADDR);
}


// 1 Byte'lık veriyi "A5", "0F" şeklinde Hex olarak yazdırır
void uart_send_hex8(uint8_t val) {
    static const char hex_chars[] = "0123456789ABCDEF";
    uart_send_char(hex_chars[val >> 4]);   // Üst 4 bit
    uart_send_char(hex_chars[val & 0x0F]); // Alt 4 bit
}

// 32-bit (Word) veriyi Hex olarak yazdırır
void uart_send_hex32(uint32_t val) {
    uart_send_char('0');
    uart_send_char('x');
    uart_send_hex8((val >> 24) & 0xFF);
    uart_send_hex8((val >> 16) & 0xFF);
    uart_send_hex8((val >> 8) & 0xFF);
    uart_send_hex8(val & 0xFF);
}

// Okunan tüm buffer'ı başlık ile birlikte ekrana şıkça basar
void uart_print_buffer(const char* label, uint8_t *buffer, uint32_t length) {
    uart_send_string("\r\n[");
    uart_send_string(label);
    uart_send_string("] Verisi:\r\n");
    
    for (uint32_t i = 0; i < length; i++) {
        uart_send_hex8(buffer[i]);
        uart_send_char(' '); // Aralarına boşluk koy
        
        // Her 16 baytta bir alt satıra geç (Okunabilirliği artırır)
        if ((i + 1) % 16 == 0) {
            uart_send_string("\r\n");
        }
    }
    uart_send_string("\r\n-----------------------\r\n");
}
