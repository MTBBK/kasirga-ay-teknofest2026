# Makefile
SIM ?= icarus

TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += kasirga-ay-teknofest2026/Proje/PeripheralModules/I2C/sources/new/I2C_master.sv 
VERILOG_SOURCES += kasirga-ay-teknofest2026/Proje/PeripheralModules/I2C/sources/new/i2c_axi_wrapper.sv

# En üst seviye modül adı
TOPLEVEL = i2c_axi_wrapper

# Python test dosyasının adı
MODULE = test_i2c

include $(shell cocotb-config --makefiles)/Makefile.sim
