// Include whatever header the 2025 team used for their printf function
extern int ee_printf(const char *fmt, ...); 

int main(void) {
    ee_printf("\n\n");
    ee_printf("boot tets successful \n");
    ee_printf("hello from address 0x00001000!\n");
    ee_printf("if you are reading this in the Vivado console,\n");
    ee_printf("the QSPI read and RAM copy worked perfectly.\n");
    while(1) {
        //hang forever
    }

    return 0;
}
