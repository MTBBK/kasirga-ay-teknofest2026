make CFILE=bootloader compile
make CFILE=main compile
riscv64-unknown-elf-objcopy -O verilog -j .text.init -j .text main.riscv instruction.mem
riscv64-unknown-elf-objcopy -O verilog -j .data -j .rodata main.riscv data.mem
python3 convert_to_flash.py

