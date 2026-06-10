RISCVTYPE = riscv64-unknown-elf
CC = $(RISCVTYPE)-gcc
OBJCOPY = $(RISCVTYPE)-objcopy
OBJDUMP = $(RISCVTYPE)-objdump

# --- 1. AKILLI LINKER SEÇİMİ ---
# CFILE parametresine göre doğru linker dosyasını otomatik seçer
ifeq ($(CFILE),main)
    LINKER_SCRIPT = main.ld
else ifeq ($(CFILE),bootloader)
    LINKER_SCRIPT = bootloader.ld
else
    # Eğer parametre girilmezse varsayılan hata vermesin diye:
    LINKER_SCRIPT = link.ld
endif

# Sadece derlemeye özel bayraklar
CFLAGS = -Os -mcmodel=medany -static -std=gnu99 -fno-common -nostdlib -ffunction-sections -march=rv32imc -mabi=ilp32

# Sadece linklemeye özel bayraklar
LDFLAGS = -T $(LINKER_SCRIPT) -nostartfiles -Wl,--gc-sections -lgcc

STARTUP_FILE = startup
OBJS = $(CFILE).o $(STARTUP_FILE).o qspi.o uart.o
OUTNAME = $(CFILE).riscv

compile: clean hex

# Linkleme aşaması
$(OUTNAME): $(OBJS) $(LINKER_SCRIPT)
	$(CC) $(CFLAGS) $(OBJS) -o $(OUTNAME) $(LDFLAGS)

# Derleme kuralları
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.S
	$(CC) $(CFLAGS) -c $< -o $@

hex: $(OUTNAME)
	$(OBJCOPY) -O binary $(OUTNAME) $(CFILE).bin
	$(OBJCOPY) -O verilog $(OUTNAME) $(CFILE).vh
	$(OBJDUMP) -D -M numeric,no-aliases $(OUTNAME) > $(CFILE)_disassembled.txt
	python3 get_static_hex.py --binfile=$(CFILE).bin

.PHONY: clean compile hex
clean:
	rm -f *.o *.riscv *.bin *.vh *.txt
