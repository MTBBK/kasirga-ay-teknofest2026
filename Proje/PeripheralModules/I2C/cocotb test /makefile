# Default simulator
SIM ?= icarus
# Language
TOPLEVEL_LANG ?= verilog

# UPDATE THIS LINE to match your .sv file!
VERILOG_SOURCES += $(PWD)/I2C_master.sv

# The name of the top-level Verilog module you want to test (no extension here)
TOPLEVEL = I2C_master

# The name of your Python file (without the .py extension)
MODULE = test_i2c_master

# Include Cocotb's magic makefile rules
include $(shell cocotb-config --makefiles)/Makefile.sim
