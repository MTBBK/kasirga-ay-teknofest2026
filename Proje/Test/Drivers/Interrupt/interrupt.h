#ifndef INTERRUPT_H
#define INTERRUPT_H

#include <stdint.h>

#define write_csr(csr, val) \
    __asm__ __volatile__ ("csrw " #csr ", %0" :: "r"(val))

#define set_csr_bits(csr, mask) \
    __asm__ __volatile__ ("csrs " #csr ", %0" :: "r"(mask))

#define read_csr(csr) ({ \
    unsigned long __v; \
    __asm__ __volatile__ ("csrr %0, " #csr : "=r"(__v)); \
    __v; \
})

#define MIE_MTIE (1 << 16)
#define MSTATUS_MIE (1<<3)

// YENİ: Main.c ve interrupt.c arasında paylaşılacak değişkenler
extern volatile uint32_t last_ai_result;
extern volatile uint8_t is_ai_done;
extern volatile uint32_t softmax;

void __attribute__((interrupt("machine"), aligned(256))) interrupt(void);
void setup_interrupt(void);

#endif