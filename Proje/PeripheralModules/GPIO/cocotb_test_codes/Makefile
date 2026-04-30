# Makefile
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

# Verilog kaynak dosyaları
VERILOG_SOURCES += $(PWD)/gpio.v

# En üst seviye modül adı
TOPLEVEL = gpio

# Python test dosyasının adı
MODULE = test_my_design

export COCOTB_HDL_TIMEUNIT = 1ns
export COCOTB_HDL_TIMEPRECISION = 1ps

include $(shell cocotb-config --makefiles)/Makefile.sim
