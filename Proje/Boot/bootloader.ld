OUTPUT_ARCH("riscv")
ENTRY(_start)

SECTIONS
{
  . = 0x00000000;
  .text.init : { *(.text.init) }

  .text : {
    *(.text*.main);
    *(.text*);
  }

  . = 0x00003000;   /* Ensure data section starts in awaddr[19:12] >= 0x11 */
  .data : { 
  *(.data);
  *(.rodata);
  }

  .bss : { *(.bss) }

  _end = .;
}

