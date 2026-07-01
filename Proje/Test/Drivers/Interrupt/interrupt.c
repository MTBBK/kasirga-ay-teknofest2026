#include "uart.h"
#include "interrupt.h"

void __attribute__((interrupt("machine"), aligned(4))) interr(void){
    uart_send_string("interrupt basarili");
}

void setup_interrupt(){
    set_csr_bits(mstatus,MSTATUS_MIE);
    set_csr_bits(mie,MIE_MTIE);
    uintptr_t interrupthandler=(uintptr_t) interr;
    uintptr_t mtvec_val=interrupthandler &~3UL;
    set_csr_bits(mtvec,mtvec_val);
}
