# startup.s - Minimal RISC-V Startup Code

.section .text.init,"ax",@progbits  # Place this code first
.global _start                     # Make _start visible to the linker

_start:
    la sp, 0x4FFF0   # top of data RAM, 16-byte aligned (RV32 ABI requires 16-byte stack alignment)

    # Call the C entry point (main)
    call main

# If main ever returns (it shouldn't in bare-metal), loop forever.
_hang:
    j _hang
