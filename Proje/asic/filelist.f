# asic/filelist.f

# --- Include Dizinleri ---
+incdir+../Core/rtl/include
+incdir+../Core/rtl/vendor/pulp_platform_common_cells/include

# --- 1. Paketler ---
../Core/rtl/include/cv32e40p_apu_core_pkg.sv
../Core/rtl/include/cv32e40p_fpu_pkg.sv
../Core/rtl/include/cv32e40p_pkg.sv

# --- 2. Cekirdek Dosyalari ---
../Core/rtl/cv32e40p_if_stage.sv
../Core/rtl/cv32e40p_cs_registers.sv
../Core/rtl/cv32e40p_register_file_ff.sv
../Core/rtl/cv32e40p_load_store_unit.sv
../Core/rtl/cv32e40p_id_stage.sv
../Core/rtl/cv32e40p_aligner.sv
../Core/rtl/cv32e40p_decoder.sv
../Core/rtl/cv32e40p_compressed_decoder.sv
../Core/rtl/cv32e40p_fifo.sv
../Core/rtl/cv32e40p_prefetch_buffer.sv
../Core/rtl/cv32e40p_hwloop_regs.sv
../Core/rtl/cv32e40p_mult.sv
../Core/rtl/cv32e40p_int_controller.sv
../Core/rtl/cv32e40p_ex_stage.sv
../Core/rtl/cv32e40p_alu_div.sv
../Core/rtl/cv32e40p_alu.sv
../Core/rtl/cv32e40p_ff_one.sv
../Core/rtl/cv32e40p_popcnt.sv
../Core/rtl/cv32e40p_apu_disp.sv
../Core/rtl/cv32e40p_controller.sv
../Core/rtl/cv32e40p_obi_interface.sv
../Core/rtl/cv32e40p_prefetch_controller.sv
../Core/rtl/cv32e40p_sleep_unit.sv
../Core/rtl/cv32e40p_core.sv
../Core/rtl/cv32e40p_top.sv
../Core/cv32e40p_clock_gate.sv

# --- 3. AXI ve Interconnect ---
../PeripheralModules/xbar.sv
../PeripheralModules/xbar_readonly.sv
../PeripheralModules/obi_to_axi.sv
../PeripheralModules/obi_to_axi_readonly.v

# --- 4. Cevresel Birimler ---
../PeripheralModules/GPIO/gpio.v
../PeripheralModules/I2C/sources/new/I2C_master.sv
../PeripheralModules/I2C/sources/new/i2c_axi_wrapper.sv
../PeripheralModules/UART_Stream/rtl/uart_stream_to_axi.sv
../PeripheralModules/UART_Stream/rtl/uart_stream_top.sv

# --- 5. Klasorlerden Dinamik Cekilenler ---
../Accelerator/*.sv
../Accelerator/Softmax/rtl/*.sv
../MemoryModules/*.v
../MemoryModules/*.sv
../PeripheralModules/QSPI/rtl/*.v
../PeripheralModules/QSPI/rtl/*.sv
../PeripheralModules/Timer/rtl/*.v
../PeripheralModules/Timer/rtl/*.sv
../PeripheralModules/UART/rtl/*.v
../PeripheralModules/UART/rtl/*.sv
../PeripheralModules/VGA/*.v
../PeripheralModules/VGA/*.sv



# --- 7. Top Modul ---
../TopModules/top.sv
