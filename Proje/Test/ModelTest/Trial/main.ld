OUTPUT_ARCH("riscv")
ENTRY(_start)

SECTIONS
{
  . = 0x00013000;          /* Instruction RAM base */
  .text.init : { *(.text.init) }
  .text      : { *(.text*) }

  . = 0x00030000;          /* Data RAM base (Shifted to clear TFLite Code) */
  .data   : { *(.data*) }
  .rodata : { *(.rodata*) }
  .bss    : { 
      *(.bss*) 
      PROVIDE(end = .);    /* Tells C++ where the heap starts */
  }

  PROVIDE(__dso_handle = 0); /* Prevents C++ destructor errors */
  _end = .;
}
