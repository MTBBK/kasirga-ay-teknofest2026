OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY
{
    ROM (rx)  : ORIGIN = 0x00000000, LENGTH = 4K   /* memory_axi_readonly adresin */
    RAM (rwx) : ORIGIN = 0x00003000, LENGTH = 8K  /* data_memory adresin */
}

SECTIONS
{
    /* Text bölümü (Kod) ROM'a gidecek */
    .text : {
        *(.text.init) /* Önce crt0.S içindeki _start gelsin */
        *(.text*)     /* Sonra C fonksiyonları */
        *(.rodata*)   /* Sadece okunabilir veriler (Stringler vs.) */
    } > ROM

    /* Data bölümü (Değişkenler) RAM'e gidecek */
    .data : {
        *(.data*)
        *(.sdata*)
    } > RAM

    .bss : {
        *(.bss*)
        *(.sbss*)
    } > RAM
}
