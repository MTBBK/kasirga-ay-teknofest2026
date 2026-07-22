SIM ?= verilator
TOPLEVEL_LANG ?= verilog

# --------------------------------------------------------------------
# KLASÖR YOLLARI (Senin projenin yapısına göre ayarlandı)
# --------------------------------------------------------------------
PWD_DIR      := $(shell pwd)
VENDOR_DIR   := $(PWD_DIR)/vendor
COMMON_CELLS := $(VENDOR_DIR)/common-cell
TECH_CELLS   := $(VENDOR_DIR)/tech_cells_generic

# Paket dosyaları HER ZAMAN önce derlenmelidir
VERILOG_SOURCES += $(VENDOR_DIR)/src/dm_pkg.sv
VERILOG_SOURCES += $(COMMON_CELLS)/src/cf_math_pkg.sv
VERILOG_SOURCES += $(COMMON_CELLS)/src/cdc_reset_ctrlr_pkg.sv

# Common Cells
VERILOG_SOURCES += $(COMMON_CELLS)/src/sync.sv
VERILOG_SOURCES += $(COMMON_CELLS)/src/spill_register.sv
VERILOG_SOURCES += $(COMMON_CELLS)/src/spill_register_flushable.sv
VERILOG_SOURCES += $(COMMON_CELLS)/src/fifo_v3.sv
VERILOG_SOURCES += $(COMMON_CELLS)/src/lzc.sv
VERILOG_SOURCES += $(COMMON_CELLS)/src/rr_arb_tree.sv
VERILOG_SOURCES += $(COMMON_CELLS)/src/cdc_reset_ctrlr.sv
VERILOG_SOURCES += $(COMMON_CELLS)/src/cdc_4phase.sv
VERILOG_SOURCES += $(COMMON_CELLS)/src/cdc_2phase_clearable.sv

# Tech Cells
VERILOG_SOURCES += $(TECH_CELLS)/src/rtl/tc_clk.sv

# RISC-V Debug (PULP) Kaynakları
VERILOG_SOURCES += $(VENDOR_DIR)/src/dmi_jtag_tap.sv
VERILOG_SOURCES += $(VENDOR_DIR)/src/dmi_cdc.sv
VERILOG_SOURCES += $(VENDOR_DIR)/src/dmi_jtag.sv
VERILOG_SOURCES += $(VENDOR_DIR)/debug_rom/debug_rom.sv
VERILOG_SOURCES += $(VENDOR_DIR)/debug_rom/debug_rom_one_scratch.sv
VERILOG_SOURCES += $(VENDOR_DIR)/src/dm_csrs.sv
VERILOG_SOURCES += $(VENDOR_DIR)/src/dm_mem.sv
VERILOG_SOURCES += $(VENDOR_DIR)/src/dm_sba.sv
VERILOG_SOURCES += $(VENDOR_DIR)/src/dm_top.sv
VERILOG_SOURCES += $(VENDOR_DIR)/src/dm_obi_top.sv

# Kendi Yazdığın Ara Bağlantı ve JTAG Wrapper Dosyaları (Ana dizinde)
VERILOG_SOURCES += $(PWD_DIR)/obi_addr_demux.sv
VERILOG_SOURCES += $(PWD_DIR)/dm_jtag_subsystem.sv

# --------------------------------------------------------------------
# SİMÜLASYON AYARLARI
# --------------------------------------------------------------------
TOPLEVEL = dm_jtag_subsystem
MODULE = test_dm_jtag

# Parametre tanımlamaları (Verilator Top-level Override)
EXTRA_ARGS += -GIdcodeValue=32\'h249511C3
EXTRA_ARGS += -GDmBaseAddress=32\'h00010000

# Verilator uyarılarını susturmak ve performansı artırmak için bayraklar
EXTRA_ARGS += -Wno-UNOPTFLAT -Wno-WIDTHTRUNC -Wno-TIMESCALEMOD -Wno-DECLFILENAME
EXTRA_ARGS += -Wno-PINCONNECTEMPTY -Wno-GENUNNAMED -Wno-UNUSEDPARAM -Wno-UNUSEDSIGNAL
EXTRA_ARGS += -Wno-WIDTH -Wno-CASEINCOMPLETE -Wno-SELRANGE -Wno-UNSIGNED -Wno-CMPCONST
EXTRA_ARGS += --timing

# Include dosyaları için dizin eklemesi
# Common-cell içerisindeki makroların tanınması için src klasörünü dahil ediyoruz
EXTRA_ARGS += +incdir+$(COMMON_CELLS)/include
EXTRA_ARGS += +incdir+$(VENDOR_DIR)/src

include $(shell cocotb-config --makefiles)/Makefile.sim