OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY
{
    ROM (rx)  : ORIGIN = 0x00000000, LENGTH = 4K
    RAM (rwx) : ORIGIN = 0x00003000, LENGTH = 8K
}

SECTIONS
{
    .text : {
        *(.text.init)
        *(.text*)
    } > ROM

    .rodata : {
        *(.rodata*)
    } > RAM

    .data : {
        *(.data*)
        *(.sdata*)
    } > RAM

    .bss : {
        *(.bss*)
        *(.sbss*)
    } > RAM
}

