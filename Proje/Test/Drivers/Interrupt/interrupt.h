


#define write_csr(csr, val) \
    __asm__ __volatile__ ("csrw " #csr ", %0" :: "r"(val))


#define set_csr_bits(csr, mask) \
    __asm__ __volatile__ ("csrs " #csr ", %0" :: "r"(mask))


#define MIE_MTIE (1 << 16)
#define MSTATUS_MIE (1<<3)



void __attribute__((interrupt("machine"), aligned(4))) interr(void);

void setup_interrupt(void);