RISCVTYPE = riscv64-unknown-elf
CC = $(RISCVTYPE)-gcc
OBJCOPY = $(RISCVTYPE)-objcopy
OBJDUMP = $(RISCVTYPE)-objdump

# Yollar Boot klasörünün içinden dışarıya göre ayarlandı
DRIVERS_DIR = ../../Test/Drivers
QSPI_DIR   = $(DRIVERS_DIR)/QSPI
UART_DIR   = $(DRIVERS_DIR)/UART
UART_STREAM_DIR = $(DRIVERS_DIR)/UART_Stream
I2C_DIR    = $(DRIVERS_DIR)/I2C
TIMER_DIR  = $(DRIVERS_DIR)/Timer
GPIO_DIR   = $(DRIVERS_DIR)/GPIO

# Tüm sürücü klasörlerinin header (.h) yollarını dahil ediyoruz
INCLUDES = -I$(QSPI_DIR) -I$(UART_DIR) -I$(UART_STREAM_DIR) -I$(I2C_DIR) -I$(TIMER_DIR) -I$(GPIO_DIR)

# Tüm kaynak dosyaları ve üretecekleri obje dosyaları
DRIVER_SRCS = $(QSPI_DIR)/qspi.c $(UART_DIR)/uart.c $(UART_STREAM_DIR)/uart_stream.c $(I2C_DIR)/i2c.c $(TIMER_DIR)/timer.c $(GPIO_DIR)/gpio.c
DRIVER_OBJS = qspi.o uart.o uart_stream.o i2c.o timer.o gpio.o

# Kaynak dosyaları arama yolları
VPATH = $(QSPI_DIR) $(UART_DIR) $(UART_STREAM_DIR) $(I2C_DIR) $(TIMER_DIR) $(GPIO_DIR) . ../

CFILE = bootloader
LINKER_SCRIPT = bootloader.ld

CFLAGS = -Os -mcmodel=medany -static -std=gnu99 -fno-common -nostdlib -ffunction-sections -march=rv32imc_zicsr_zifencei -mabi=ilp32 $(INCLUDES)
LDFLAGS = -T $(LINKER_SCRIPT) -nostartfiles -Wl,--gc-sections -lgcc

# Tüm sürücü objeleri projeye dahil ediliyor
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
