#include "uart.h"
#include "interrupt.h"
#include "uart_stream.h"

void __attribute__((interrupt("machine"), aligned(256))) interrupt(void){
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) & ~0x30);
    uart_send_string("\r\ninterrupt basarili");
    uint32_t data= uart_stream_read_ai_memory(RESULT_ADDR);
    uart_send_string("\r\nSonuc:");
    uart_send_hex32(data);
    uart_send_string("\r\n");
    


}

void setup_interrupt(){
    uintptr_t interrupthandler=(uintptr_t) &interrupt;
    uintptr_t mtvec_val=interrupthandler &~3UL;
    write_csr(mtvec,mtvec_val);
    set_csr_bits(mie,MIE_MTIE);
    set_csr_bits(mstatus,MSTATUS_MIE);
 
}
