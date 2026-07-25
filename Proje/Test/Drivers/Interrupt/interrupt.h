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



void __attribute__((interrupt("machine"), aligned(4))) interrupt(void);

void setup_interrupt(void);