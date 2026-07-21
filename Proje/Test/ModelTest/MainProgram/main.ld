OUTPUT_ARCH("riscv")
ENTRY(_start)

SECTIONS
{
  . = 0x00001000;          /* Instruction RAM base */
  .text.init : { *(.text.init) }
  .text      : { *(.text*) }

  . = 0x00003000;          /* Data RAM base */
  .data   : { *(.data*) }
  .rodata : { *(.rodata*) }
  .bss    : { *(.bss*)   }

  _end = .;
}
