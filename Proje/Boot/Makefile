RISCVTYPE = riscv64-unknown-elf
CC = $(RISCVTYPE)-gcc
# Add OBJCOPY and OBJDUMP variables for clarity
OBJCOPY = $(RISCVTYPE)-objcopy
OBJDUMP = $(RISCVTYPE)-objdump

LINKER_SCRIPT ?= link.ld

# Keep CFLAGS mostly as is, ensure linker script flag is present
CFLAGS ?= -Os -mcmodel=medany -static -std=gnu99 -fno-common -nostdlib -nostartfiles -fno-builtin -ffunction-sections -lgcc -T $(LINKER_SCRIPT) -march=rv32im -mabi=ilp32

CFILE ?= bootloader
# Add startup file name
STARTUP_FILE = startup

# Define sources
SRCS_C = ${CFILE}.c
SRCS_S = ${STARTUP_FILE}.s
# Define object files needed for linking
OBJS = ${CFILE}.o ${STARTUP_FILE}.o 
OUTNAME ?= ${CFILE}.riscv

# --- Modified Compile Target ---
# This target now just ensures the final executable and hex files are made
compile: hex

# --- Rule to link the final executable ---
$(OUTNAME): $(OBJS) $(LINKER_SCRIPT)
	$(CC) $(CFLAGS) $(OBJS) -o $(OUTNAME) # Linking uses CFLAGS which includes -T etc. Add -lm -lgcc if needed at link time too.

# --- Rule to compile C files ---
# $(CC) -c $(CFLAGS) $(SRCS) # This old rule is too broad, replace with pattern rule:
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# --- Rule to assemble .s files ---
%.o: %.s
	$(CC) $(CFLAGS) -c $< -o $@ # Use GCC to assemble, CFLAGS often work or use specific ASFLAGS

# --- Post-processing steps (depend on the executable) ---
disasm: $(OUTNAME)
	$(OBJDUMP) -D -M numeric,no-aliases $(OUTNAME) > $(CFILE)_disassembled.txt

$(CFILE).bin: $(OUTNAME)
	$(OBJCOPY) -O binary $(OUTNAME) $@

$(CFILE).vh: $(OUTNAME)
	$(OBJCOPY) -O verilog $(OUTNAME) $@

# Target to generate all hex/intermediate formats
hex: $(CFILE).bin $(CFILE).vh disasm
	python3 get_static_hex.py --binfile=$(CFILE).bin



.PHONY: clean compile hex disasm
clean:
	#rm -f *.o $(OUTNAME) $(CFILE).bin $(CFILE).hex $(CFILE).vh $(CFILE).coe $(CFILE)_disassembled.txt progmem.v *.log *.info index.html
