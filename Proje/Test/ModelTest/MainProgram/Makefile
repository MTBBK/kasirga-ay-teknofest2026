RISCVTYPE = riscv64-unknown-elf
CC = $(RISCVTYPE)-gcc
CXX = $(RISCVTYPE)-g++
OBJCOPY = $(RISCVTYPE)-objcopy
OBJDUMP = $(RISCVTYPE)-objdump

# Yollar MainProgram klasörünün içinden dışarıya göre ayarlandı
DRIVERS_DIR = ../../Drivers
DRIVER_SUBDIRS = $(wildcard $(DRIVERS_DIR)/*)

# --- TFLite Micro Entegrasyonu ---
# TFLite Micro bağımsız (standalone) proje klasörünüzün yolunu buraya yazın
TFLM_DIR = ./tflite_micro_project
TFLM_INCLUDES = -I$(TFLM_DIR) -I$(TFLM_DIR)/third_party/flatbuffers/include -I$(TFLM_DIR)/third_party/gemmlowp -I$(TFLM_DIR)/third_party/ruy
TFLM_SRCS = $(wildcard $(TFLM_DIR)/tensorflow/lite/micro/*.cc) \
            $(wildcard $(TFLM_DIR)/tensorflow/lite/micro/kernels/*.cc) \
            $(wildcard $(TFLM_DIR)/tensorflow/lite/core/api/*.cc)
TFLM_OBJS = $(notdir $(TFLM_SRCS:.cc=.o))
# ---------------------------------

INCLUDES = $(addprefix -I, $(DRIVER_SUBDIRS)) $(TFLM_INCLUDES) -I.
DRIVER_SRCS = $(wildcard $(DRIVERS_DIR)/*/*.c)
DRIVER_OBJS = $(notdir $(DRIVER_SRCS:.c=.o))

# Kaynak dosyaları arama yolları (TFLM klasörleri eklendi)
VPATH = $(DRIVER_SUBDIRS) . ../ \
        $(TFLM_DIR)/tensorflow/lite/micro \
        $(TFLM_DIR)/tensorflow/lite/micro/kernels \
        $(TFLM_DIR)/tensorflow/lite/core/api

# Ana dosya uzantısı artık .cc (C++) oldu
CFILE = main
# Script ile ürettiğiniz model dosyasını buraya ekleyin (örn: model_data.cc)
MODEL_SRC = model_data.cc
MODEL_OBJ = $(MODEL_SRC:.cc=.o)

LINKER_SCRIPT = main.ld

# Ortak bayraklar (Hem C hem C++ için geçerli mimari ayarları)
ARCH_FLAGS = -mcmodel=medany -static -fno-common -nostdlib -ffunction-sections -march=rv32imc_zicsr_zifencei -mabi=ilp32

# C için bayraklar (Mevcut ayarlarınız korundu)
CFLAGS = -Os -std=gnu99 $(ARCH_FLAGS) $(INCLUDES)

# C++ (TFLite) için bayraklar
CXXFLAGS = -O3 -std=c++17 -fno-rtti -fno-exceptions -fno-threadsafe-statics $(ARCH_FLAGS) $(INCLUDES)

LDFLAGS = -T $(LINKER_SCRIPT) -nostartfiles -Wl,--gc-sections -lgcc -lstdc++

# Nesne dosyaları listesine C++ ve TFLite dosyaları eklendi
OBJS = $(CFILE).o $(MODEL_OBJ) startup.o $(DRIVER_OBJS) $(TFLM_OBJS)
OUTNAME = $(CFILE).riscv

compile: hex

$(OUTNAME): $(OBJS) $(LINKER_SCRIPT)
	$(CXX) $(ARCH_FLAGS) $(OBJS) -o $(OUTNAME) $(LDFLAGS)

# C dosyalarını derleme kuralı
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# C++ (ve TFLite) dosyalarını derleme kuralı
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: %.S
	$(CC) $(CFLAGS) -c $< -o $@

hex: $(OUTNAME)
	$(OBJCOPY) -O binary $(OUTNAME) $(CFILE).bin
	$(OBJCOPY) -O verilog $(OUTNAME) $(CFILE).vh
	$(OBJDUMP) -D -M numeric,no-aliases $(OUTNAME) > $(CFILE)_disassembled.txt
	python3 get_static_hex.py --binfile=$(CFILE).bin

clean:
	rm -f *.o *.riscv *.bin *.vh *.txt *.hex *.mem
