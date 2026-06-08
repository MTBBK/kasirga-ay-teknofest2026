#define UART_TX_REG *((volatile unsigned int *)0x00005000)

void print_msg(const char *str) {
    while (*str) {
        UART_TX_REG = *str++; // Karakterleri tek tek UART pinine gönder
    }
}

int main(void) {
    print_msg("\n\n");
    print_msg(" boot succesfull \n");
    print_msg("hello from address 0x00001000\n");
    print_msg("if you are reading this in the Vivado console,\n");
    print_msg("the QSPI read and RAM copy worked perfectly.\n");

    while(1) {
        //hang forever
    }

    return 0;
}
