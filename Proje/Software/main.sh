#!/bin/bash
clear
make -C MainProgram clean

make -C MainProgram compile

riscv64-unknown-elf-objcopy -O verilog -j .text.init -j .text MainProgram/main.riscv MainProgram/instruction.mem
riscv64-unknown-elf-objcopy -O verilog -j .data -j .rodata MainProgram/main.riscv MainProgram/data.mem

cd MainProgram
python3 convert_to_flash.py
python3 f.py mem_Q512.mem
cd ..

