RISCVTYPE = riscv64-unknown-elf
CC = $(RISCVTYPE)-gcc
OBJCOPY = $(RISCVTYPE)-objcopy
OBJDUMP = $(RISCVTYPE)-objdump

# Yollar MainProgram klasörünün içinden dışarıya göre ayarlandı
DRIVERS_DIR = ../../Test/Drivers
DRIVER_SUBDIRS = $(wildcard $(DRIVERS_DIR)/*)
INCLUDES = $(addprefix -I, $(DRIVER_SUBDIRS))
DRIVER_SRCS = $(wildcard $(DRIVERS_DIR)/*/*.c)
DRIVER_OBJS = $(notdir $(DRIVER_SRCS:.c=.o))

# Kaynak dosyaları arama yolları
VPATH = $(DRIVER_SUBDIRS) . ../

CFILE = main
LINKER_SCRIPT = main.ld

CFLAGS = -Os -mcmodel=medany -static -std=gnu99 -fno-common -nostdlib -ffunction-sections -march=rv32imc -fno-tree-loop-distribute-patterns -mabi=ilp32 $(INCLUDES)
LDFLAGS = -T $(LINKER_SCRIPT) -nostartfiles -Wl,--gc-sections -lgcc

# startup.S üst klasörden alınıyor
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
	rm -f *.o *.riscv *.bin *.vh *.txt *.hex *.mem
