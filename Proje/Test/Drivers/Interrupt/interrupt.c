#include "uart.h"
#include "interrupt.h"
#include "uart_stream.h"

void __attribute__((interrupt("machine"), aligned(4))) interr(void){
    uart_send_string("\r\n[KESME] Yapay zeka hizlandirici isini bitirdi!\r\n");

    // 2. Posta kutusu (Mailbox) mantığıyla sonucu bellekten Oku
    uint32_t ai_result = uart_stream_read_ai_memory(RESULT_ADDR);

    // 3. Şartname Kuralı: Sonucu Çekirdeğin Kendi UART'ından Bas
    uart_send_string("-> HIZLANDIRICI SONUC SINIFI: ");
    uart_send_hex32(ai_result);
    uart_send_string("\r\n");
}

void setup_interrupt(){
    set_csr_bits(mstatus,MSTATUS_MIE);
    set_csr_bits(mie,MIE_MTIE);
    uintptr_t interrupthandler=(uintptr_t) interr;
    uintptr_t mtvec_val=interrupthandler &~3UL;
    write_csr(mtvec, mtvec_val);
}
