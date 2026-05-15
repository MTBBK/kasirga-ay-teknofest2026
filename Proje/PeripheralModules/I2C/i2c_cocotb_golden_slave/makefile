# default simulator
SIM ?= icarus
# language
TOPLEVEL_LANG ?= verilog

#the .sv file
VERILOG_SOURCES += /kasirga-ay-teknofest2026/Proje/PeripheralModules/I2C/sources/new/I2C_master.sv
VERILOG_SOURCES += /kasirga-ay-teknofest2026/Proje/PeripheralModules/I2C/sources/new/cocotb_for_golden_slave_wrapper.sv

# The name of the top-level Verilog module you want to test
TOPLEVEL = cocotb_for_golden_slave_wrapper

# The name of the Python file
MODULE = test_i2c_master

#Cocotb's makefile rules
include $(shell cocotb-config --makefiles)/Makefile.sim
