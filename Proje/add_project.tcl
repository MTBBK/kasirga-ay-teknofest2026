# Temel Proje Dizini (Tek Değişken)
set PROJE_DIR "/home/kasirga/Documents/kasirga-ay-teknofest2026/Proje"


# Include yollarını PROJE_DIR üzerinden dinamik olarak ayarlıyoruz
set INCLUDE_PATHS [list \
    "${PROJE_DIR}/Core/rtl/include" \
    "${PROJE_DIR}/Core/bhv" \
    "${PROJE_DIR}/Core/bhv/include" \
    "${PROJE_DIR}/Core/sva" \
    "${PROJE_DIR}/Core/rtl/vendor/pulp_platform_common_cells/include" \
    "${PROJE_DIR}/Test/top_module_test/Flash_Verilog_Sim_Model" \
]
set_property verilog_define {FPGA_TARGET} [current_fileset]

# Simülasyon (sim_1) için SIMULATION flag'ini aktif et
set_property verilog_define {SIMULATION} [get_filesets sim_1]
# Include yollarını tanımlıyoruz
set_property include_dirs $INCLUDE_PATHS [current_fileset]
set_property include_dirs $INCLUDE_PATHS [get_filesets sim_1]

# 1. Tek tek eklenecek ana tasarım dosyaları
set my_files [list \
    "${PROJE_DIR}/TopModules/top.sv" \
    "${PROJE_DIR}/Core/cv32e40p_clock_gate.sv" \
    "${PROJE_DIR}/PeripheralModules/GPIO/gpio.v" \
    "${PROJE_DIR}/PeripheralModules/I2C/sources/new/I2C_master.sv" \
    "${PROJE_DIR}/PeripheralModules/I2C/sources/new/i2c_axi_wrapper.sv" \
    "${PROJE_DIR}/PeripheralModules/xbar.sv" \
    "${PROJE_DIR}/PeripheralModules/xbar_readonly.sv" \
    "${PROJE_DIR}/PeripheralModules/obi_to_axi.sv" \
    "${PROJE_DIR}/PeripheralModules/obi_to_axi_readonly.v" \
    "${PROJE_DIR}/Core/rtl/include/cv32e40p_apu_core_pkg.sv" \
    "${PROJE_DIR}/Core/rtl/include/cv32e40p_fpu_pkg.sv" \
    "${PROJE_DIR}/Core/rtl/include/cv32e40p_pkg.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_if_stage.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_cs_registers.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_register_file_ff.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_load_store_unit.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_id_stage.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_aligner.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_decoder.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_compressed_decoder.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_fifo.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_prefetch_buffer.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_hwloop_regs.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_mult.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_int_controller.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_ex_stage.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_alu_div.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_alu.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_ff_one.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_popcnt.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_apu_disp.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_controller.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_obi_interface.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_prefetch_controller.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_sleep_unit.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_core.sv" \
    "${PROJE_DIR}/Core/rtl/cv32e40p_top.sv" \
    "${PROJE_DIR}/Test/top_module_test/boot.mem" \
    "${PROJE_DIR}/Test/top_module_test/sim_boot.mem" \
    "${PROJE_DIR}/Test/top_module_test/audio_input.mem" \
    "${PROJE_DIR}/Software/MainProgram/mem_Q512.mem" \
    "${PROJE_DIR}/Test/top_module_test/sfdp.mem" \
    "${PROJE_DIR}/PeripheralModules/UART_Stream/rtl/uart_stream_to_axi.sv" \
    "${PROJE_DIR}/PeripheralModules/UART_Stream/rtl/uart_stream_top.sv" \

]

# 2. Dinamik olarak toplanacak klasörler
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/Accelerator/*.sv"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/Accelerator/Softmax/rtl/*.sv"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/Accelerator/Softmax/memoryfiles/*.mem"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/MemoryModules/*"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/PeripheralModules/QSPI/rtl/*"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/PeripheralModules/Timer/rtl/*"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/PeripheralModules/UART/rtl/*"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/Accelerator/model_weights/*.mem"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/PeripheralModules/JTAG/*.sv"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/PeripheralModules/VGA/*"]


# Tasarım dosyalarını içe aktar
import_files -force $my_files

# -------------------------------------------------------------
# 3. Simülasyon (sim_1) dosyaları ve Flash Modeli Eklentileri
# -------------------------------------------------------------
set sim_files [list \
    "${PROJE_DIR}/Core/bhv/cv32e40p_sim_clock_gate.sv" \
    "${PROJE_DIR}/Core/bhv/include/cv32e40p_tracer_pkg.sv" \
    "${PROJE_DIR}/Core/bhv/cv32e40p_tb_wrapper.sv" \
    "${PROJE_DIR}/PeripheralModules/I2C/sources/new/i2c_slave.v" \
]

# top_module_test dizinindeki tüm sv/v dosyalarını al (Testbench vs.)
lappend sim_files {*}[glob -nocomplain "${PROJE_DIR}/Accelerator/testbenches/*"]
lappend sim_files {*}[glob -nocomplain "${PROJE_DIR}/Accelerator/Softmax/test/*.sv"]

lappend sim_files {*}[glob -nocomplain "${PROJE_DIR}/Test/top_module_test/*.sv" "${PROJE_DIR}/Test/top_module_test/Flash_Verilog_Sim_Model/*.v"]

# Flash Modeli: include klasörü (.h, .vh, vb.)
lappend sim_files {*}[glob -nocomplain "${PROJE_DIR}/Test/top_module_test/Flash_Verilog_Sim_Model/include/*"]

# Flash Modeli: sim klasörü (Ekstra test veya .vmf/mem dosyaları olabilir)
lappend sim_files {*}[glob -nocomplain "${PROJE_DIR}/Test/top_module_test/Flash_Verilog_Sim_Model/sim/*"]

# Simülasyon dosyalarını sim_1 fileset'ine içe aktar
import_files -force -fileset sim_1 $sim_files


import_files -force -fileset constrs_1 "${PROJE_DIR}/Bitstreams/basys3.xdc"

puts "Tüm Modül, Yz Hızlandırıcı, CV32E40P kaynak dosyaları ve Flash Simülasyon Modeli başarıyla projeye import edildi!"
