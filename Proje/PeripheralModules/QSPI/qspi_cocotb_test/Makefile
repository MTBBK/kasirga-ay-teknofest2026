
SIM ?= icarus
TOPLEVEL_LANG ?= verilog



VERILOG_SOURCES += $(PWD)/../rtl/fifo.sv
VERILOG_SOURCES += $(PWD)/../rtl/qspi.sv
VERILOG_SOURCES += $(PWD)/../rtl/qspi_axi_wrapper.sv
VERILOG_SOURCES += $(PWD)/../rtl/qspi_top.sv
VERILOG_SOURCES += $(PWD)/dump.sv


COMPILE_ARGS += -g2012 -s iverilog_dump


TOPLEVEL = qspi_top


MODULE = test_qspi


include $(shell cocotb-config --makefiles)/Makefile.sim
