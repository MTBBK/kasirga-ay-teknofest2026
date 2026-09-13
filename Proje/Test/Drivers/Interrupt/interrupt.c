#include "uart.h"
#include "interrupt.h"
#include "uart_stream.h"
extern volatile uint8_t ai_done; 
volatile uint32_t last_ai_result;
volatile uint32_t softmax;


void __attribute__((interrupt("machine"), aligned(256))) interrupt(void){
    REG_WRITE(UART_STREAM_CFG_ADDR, REG_READ(UART_STREAM_CFG_ADDR) & ~0x30);
    last_ai_result = uart_stream_read_ai_memory(RESULT_ADDR);
    softmax = uart_stream_read_ai_memory(SOFTMAX_ADDR);

    ai_done = 1;
}

void setup_interrupt(){
    uintptr_t interrupthandler=(uintptr_t) &interrupt;
    uintptr_t mtvec_val=interrupthandler &~3UL;
    write_csr(mtvec,mtvec_val);
    set_csr_bits(mie,MIE_MTIE);
    set_csr_bits(mstatus,MSTATUS_MIE);
 
}

