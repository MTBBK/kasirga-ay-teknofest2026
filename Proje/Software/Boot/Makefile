RISCVTYPE = riscv64-unknown-elf
CC = $(RISCVTYPE)-gcc
OBJCOPY = $(RISCVTYPE)-objcopy
OBJDUMP = $(RISCVTYPE)-objdump

# Yollar Boot klasörünün içinden dışarıya göre ayarlandı
DRIVERS_DIR = ../../Test/Drivers
QSPI_DIR = $(DRIVERS_DIR)/QSPI

# Sadece QSPI klasörünün header (.h) yolunu dahil ediyoruz
INCLUDES = -I$(QSPI_DIR)

# Sadece qspi.c kaynak dosyasını ve onun üreteceği objeyi seçiyoruz
DRIVER_SRCS = $(QSPI_DIR)/qspi.c
DRIVER_OBJS = qspi.o

# Kaynak dosyaları arama yolları (Sadece QSPI, mevcut dizin ve üst dizindeki startup.S)
VPATH = $(QSPI_DIR) . ../

CFILE = bootloader
LINKER_SCRIPT = bootloader.ld

CFLAGS = -Os -mcmodel=medany -static -std=gnu99 -fno-common -nostdlib -ffunction-sections -march=rv32imc -mabi=ilp32 $(INCLUDES)
LDFLAGS = -T $(LINKER_SCRIPT) -nostartfiles -Wl,--gc-sections -lgcc

# Artık burada sadece bootloader.o, startup.o ve qspi.o birleştirilecek
OBJS = $(CFILE).o startup.o $(DRIVER_OBJS)
OUTNAME = $(CFILE).riscv

compile: hex

$(OUTNAME): $(OBJS) $(LINKER_SCRIPT)
	$(CC) $(CFLAGS) $(OBJS) -o $(OUTNAME) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.S
	$(CC) $(CFLAGS) -c $< -o $@

hex: $(OUTNAME)
	$(OBJCOPY) -O binary $(OUTNAME) $(CFILE).bin
	$(OBJCOPY) -O verilog $(OUTNAME) $(CFILE).vh
	$(OBJDUMP) -D -M numeric,no-aliases $(OUTNAME) > $(CFILE)_disassembled.txt
	python3 get_static_hex.py --binfile=$(CFILE).bin

clean:
	rm -f *.o *.riscv *.bin *.vh *.txt *.hex
