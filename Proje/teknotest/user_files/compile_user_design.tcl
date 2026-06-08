# Add your design files into the Vivado project
#
# To add design files, use
#   add_files <PATH_TO_YOUR_DESIGN_FOLDER>
# Example:
#   add_files ../user/rtl/teknotest_wrapper.sv
#
# To add include directories, use
#   set_property include_dirs [file normalize <PATH_TO_YOUR_INCLUDE_FOLDER>] [list [get_filesets sources_1] [get_filesets sim_1]]
# Example:
#   set_property include_dirs [file normalize "../user/rtl/core/include/"] [list [get_filesets sources_1] [get_filesets sim_1]]
#
# If you need to add verilog defines, use
#   set_property verilog_define {<YOUR_DEFINES>} [list [get_filesets sources_1] [get_filesets sim_1]]
# Example:
#   set_property verilog_define {SIMULATION USE_CG_BEHAV_MODELS} [list [get_filesets sources_1] [get_filesets sim_1]]
#
# Note1: Keep in mind that you will be in teknotest directory, set your file/folder paths relative to that directory
# Note2: You can use slashes(/) in Windows too to seperate the paths

# =============================================================================
# Wrapper (top-level for testbench)
# =============================================================================
add_files ./user_files/teknotest_wrapper.sv

# =============================================================================
# Peripheral Modules — Crossbar, OBI-to-AXI bridges
# =============================================================================
add_files ./../TeknofestTest/PeripheralModules/xbar.sv
add_files ./../TeknofestTest/PeripheralModules/xbar_readonly.sv
add_files ./../TeknofestTest/PeripheralModules/obi_to_axi.sv
add_files ./../TeknofestTest/PeripheralModules/obi_to_axi_readonly.v

# =============================================================================
# Peripheral Modules — UART
# =============================================================================
add_files ./../TeknofestTest/PeripheralModules/UART/rtl/uart_top.sv
add_files ./../TeknofestTest/PeripheralModules/UART/rtl/uart_rx.sv
add_files ./../TeknofestTest/PeripheralModules/UART/rtl/uart_tx.sv

# =============================================================================
# Memory Files
# =============================================================================
add_files ./../TeknofestTest/MemoryFiles/instruction_memory_axi.v
add_files ./../TeknofestTest/MemoryFiles/memory_axi.v
add_files ./../TeknofestTest/MemoryFiles/memory_axi_readonly.v

# =============================================================================
# CV32E40P — RISC-V Core RTL
# =============================================================================
add_files ./../Core/rtl/include/cv32e40p_apu_core_pkg.sv
add_files ./../Core/rtl/include/cv32e40p_fpu_pkg.sv
add_files ./../Core/rtl/include/cv32e40p_pkg.sv

add_files ./../Core/rtl/cv32e40p_if_stage.sv
add_files ./../Core/rtl/cv32e40p_cs_registers.sv
add_files ./../Core/rtl/cv32e40p_register_file_ff.sv
add_files ./../Core/rtl/cv32e40p_load_store_unit.sv
add_files ./../Core/rtl/cv32e40p_id_stage.sv
add_files ./../Core/rtl/cv32e40p_aligner.sv
add_files ./../Core/rtl/cv32e40p_decoder.sv
add_files ./../Core/rtl/cv32e40p_compressed_decoder.sv
add_files ./../Core/rtl/cv32e40p_fifo.sv
add_files ./../Core/rtl/cv32e40p_prefetch_buffer.sv
add_files ./../Core/rtl/cv32e40p_hwloop_regs.sv
add_files ./../Core/rtl/cv32e40p_mult.sv
add_files ./../Core/rtl/cv32e40p_int_controller.sv
add_files ./../Core/rtl/cv32e40p_ex_stage.sv
add_files ./../Core/rtl/cv32e40p_alu_div.sv
add_files ./../Core/rtl/cv32e40p_alu.sv
add_files ./../Core/rtl/cv32e40p_ff_one.sv
add_files ./../Core/rtl/cv32e40p_popcnt.sv
add_files ./../Core/rtl/cv32e40p_apu_disp.sv
add_files ./../Core/rtl/cv32e40p_controller.sv
add_files ./../Core/rtl/cv32e40p_obi_interface.sv
add_files ./../Core/rtl/cv32e40p_prefetch_controller.sv
add_files ./../Core/rtl/cv32e40p_sleep_unit.sv
add_files ./../Core/rtl/cv32e40p_core.sv
add_files ./../Core/rtl/cv32e40p_top.sv


# =============================================================================
# CV32E40P — Behavioral / Simulation files
# =============================================================================
add_files ./../Core/bhv/cv32e40p_sim_clock_gate.sv

# =============================================================================
# Include directories for CV32E40P packages
# =============================================================================
set_property include_dirs [list \
    [file normalize "./../Core/rtl/include/"] \
    [file normalize "./../Core/bhv/include/"] \
    [file normalize "./../"] \
] [list [get_filesets sources_1] [get_filesets sim_1]]

