#include "uart.h"
#include "interrupt.h"
#include "uart_stream.h"
extern volatile uint8_t ai_done; 


void __attribute__((interrupt("machine"), aligned(256))) interrupt(void){
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) & ~0x30);
    uart_send_string("\ninterrupt basarili");
    uint32_t data= uart_stream_read_ai_memory(RESULT_ADDR);
    uart_send_string("\nSonuc:");
    uart_send_hex32(data);
    uart_send_string("\n");
    ai_done = 1;



}

void setup_interrupt(){
    uintptr_t interrupthandler=(uintptr_t) &interrupt;
    uintptr_t mtvec_val=interrupthandler &~3UL;
    write_csr(mtvec,mtvec_val);
    set_csr_bits(mie,MIE_MTIE);
    set_csr_bits(mstatus,MSTATUS_MIE);
 
}

