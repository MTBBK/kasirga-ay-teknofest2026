# Makefile
SIM ?= icarus

VERILOG_SOURCES += $(PWD)/I2C_master.sv $(PWD)/i2c_axi_wrapper.sv

# En üst seviye modül adı
TOPLEVEL = i2c_axi_wrapper

# Python test dosyasının adı
MODULE = test_i2c

include $(shell cocotb-config --makefiles)/Makefile.sim
