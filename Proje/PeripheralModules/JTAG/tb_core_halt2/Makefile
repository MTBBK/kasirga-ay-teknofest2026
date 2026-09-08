SIM ?= verilator
TOPLEVEL_LANG ?= verilog

# --------------------------------------------------------------------
# KLASOR YOLLARI -- bu degerler standart repo duzenine gore yazildi.
# Sizin ortamda importlar dagilmis olabilir (daha once VENDOR_DIR/
# CORE_RTL/CORE_BHV icin yaptigimiz gibi), gerekirse "find" ile bulup
# asagidaki degiskenleri mutlak yola cevirin.
# --------------------------------------------------------------------
PWD_DIR      := $(shell pwd)
JTAG_DIR     := $(PWD_DIR)/..
PERIPH_DIR   := $(JTAG_DIR)/..
VENDOR_DIR   := /home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/JTAG/vendor
COMMON_CELLS := $(VENDOR_DIR)/common-cell
TECH_CELLS   := $(VENDOR_DIR)/tech_cells_generic
CORE_RTL     := /home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/Proje/Core/rtl
CORE_BHV     := /home/kasirga/Downloads/openselim/openselim.srcs/sim_1/imports/Proje/Core/bhv

# Paket dosyalari HER ZAMAN once derlenmelidir
VERILOG_SOURCES += $(VENDOR_DIR)/src/dm_pkg.sv
VERILOG_SOURCES += $(COMMON_CELLS)/src/cf_math_pkg.sv
VERILOG_SOURCES += $(COMMON_CELLS)/src/cdc_reset_ctrlr_pkg.sv
VERILOG_SOURCES += $(CORE_RTL)/include/cv32e40p_apu_core_pkg.sv
VERILOG_SOURCES += $(CORE_RTL)/include/cv32e40p_fpu_pkg.sv
VERILOG_SOURCES += $(CORE_RTL)/include/cv32e40p_pkg.sv
VERILOG_SOURCES += $(CORE_BHV)/include/cv32e40p_tracer_pkg.sv

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

# RISC-V Debug (PULP) -- Debug Module + debug ROM (TAP/DTM/dmi_jtag YOK)
VERILOG_SOURCES += $(VENDOR_DIR)/debug_rom/debug_rom.sv
VERILOG_SOURCES += $(VENDOR_DIR)/debug_rom/debug_rom_one_scratch.sv
VERILOG_SOURCES += $(VENDOR_DIR)/src/dm_csrs.sv
VERILOG_SOURCES += $(VENDOR_DIR)/src/dm_mem.sv
VERILOG_SOURCES += $(VENDOR_DIR)/src/dm_sba.sv
VERILOG_SOURCES += $(VENDOR_DIR)/src/dm_top.sv
VERILOG_SOURCES += $(VENDOR_DIR)/src/dm_obi_top.sv

# obi_addr_demux + obi_to_axi (bizim/SoC'nin gercek kopru dosyalari)
VERILOG_SOURCES += $(JTAG_DIR)/obi_addr_demux.sv
VERILOG_SOURCES += $(PERIPH_DIR)/obi_to_axi.sv

# CV32E40P core (gercek RTL, top.sv'deki ile ayni dosyalar)
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_if_stage.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_cs_registers.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_register_file_ff.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_load_store_unit.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_id_stage.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_aligner.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_decoder.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_compressed_decoder.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_fifo.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_prefetch_buffer.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_hwloop_regs.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_mult.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_int_controller.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_ex_stage.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_alu_div.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_alu.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_ff_one.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_popcnt.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_apu_disp.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_controller.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_obi_interface.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_prefetch_controller.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_sleep_unit.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_core.sv
VERILOG_SOURCES += $(CORE_RTL)/cv32e40p_top.sv
VERILOG_SOURCES += $(CORE_BHV)/cv32e40p_sim_clock_gate.sv

# Bizim testbench
VERILOG_SOURCES += $(PWD_DIR)/tb_core_debug2.sv

# --------------------------------------------------------------------
# SIMULASYON AYARLARI
# --------------------------------------------------------------------
TOPLEVEL = tb_core_debug2
MODULE = test_core_halt2

EXTRA_ARGS += -Wno-UNOPTFLAT -Wno-WIDTHTRUNC -Wno-TIMESCALEMOD -Wno-DECLFILENAME
EXTRA_ARGS += -Wno-PINCONNECTEMPTY -Wno-GENUNNAMED -Wno-UNUSEDPARAM -Wno-UNUSEDSIGNAL
EXTRA_ARGS += -Wno-WIDTH -Wno-CASEINCOMPLETE -Wno-SELRANGE -Wno-UNSIGNED -Wno-CMPCONST
EXTRA_ARGS += -Wno-MULTIDRIVEN -Wno-LATCH -Wno-BLKANDNBLK -Wno-COMBDLY
EXTRA_ARGS += --timing

EXTRA_ARGS += +incdir+$(COMMON_CELLS)/include
EXTRA_ARGS += +incdir+$(VENDOR_DIR)/src
EXTRA_ARGS += +incdir+$(CORE_RTL)/include
EXTRA_ARGS += +incdir+$(CORE_BHV)
EXTRA_ARGS += +incdir+$(CORE_BHV)/include

include $(shell cocotb-config --makefiles)/Makefile.sim
