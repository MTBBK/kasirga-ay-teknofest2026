set DESIGN_RTL_DIR "/home/mtbbk/Temel/Projeler/Kasirga/Aquila/Proje/Core/rtl"
set PROJE_DIR "/home/mtbbk/Temel/Projeler/Kasirga/Aquila/Proje"

set INCLUDE_PATHS [list \
    "${DESIGN_RTL_DIR}/include" \
    "${DESIGN_RTL_DIR}/../bhv" \
    "${DESIGN_RTL_DIR}/../bhv/include" \
    "${DESIGN_RTL_DIR}/../sva" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_common_cells/include" \
]

set_property include_dirs $INCLUDE_PATHS [current_fileset]
set_property include_dirs $INCLUDE_PATHS [get_filesets sim_1]

# 1. Tek tek eklenecek belirli dosyalarin listesini olusturalim
set my_files [list \
    "${PROJE_DIR}/top.sv" \
    "${PROJE_DIR}/PeripheralModules/GPIO/gpio.v" \
    "${PROJE_DIR}/PeripheralModules/xbar.sv" \
    "${PROJE_DIR}/PeripheralModules/xbar_readonly.sv" \
    "${PROJE_DIR}/PeripheralModules/obi_to_axi.sv" \
    "${PROJE_DIR}/PeripheralModules/obi_to_axi_readonly.v" \
    "${DESIGN_RTL_DIR}/include/cv32e40p_apu_core_pkg.sv" \
    "${DESIGN_RTL_DIR}/include/cv32e40p_fpu_pkg.sv" \
    "${DESIGN_RTL_DIR}/include/cv32e40p_pkg.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_common_cells/src/cf_math_pkg.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/src/fpnew_pkg.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_common_cells/src/rr_arb_tree.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_common_cells/src/lzc.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/vendor/opene906/E906_RTL_FACTORY/gen_rtl/clk/rtl/gated_clk_cell.v" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/vendor/opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_ctrl.v" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/vendor/opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_ff1.v" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/vendor/opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_pack_single.v" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/vendor/opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_prepare.v" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/vendor/opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_round_single.v" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/vendor/opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_special.v" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/vendor/opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_srt_single.v" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/vendor/opene906/E906_RTL_FACTORY/gen_rtl/fdsu/rtl/pa_fdsu_top.v" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/vendor/opene906/E906_RTL_FACTORY/gen_rtl/fpu/rtl/pa_fpu_dp.v" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/vendor/opene906/E906_RTL_FACTORY/gen_rtl/fpu/rtl/pa_fpu_frbus.v" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/vendor/opene906/E906_RTL_FACTORY/gen_rtl/fpu/rtl/pa_fpu_src_type.v" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/src/fpnew_divsqrt_th_32.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/src/fpnew_classifier.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/src/fpnew_rounding.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/src/fpnew_cast_multi.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/src/fpnew_fma_multi.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/src/fpnew_noncomp.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/src/fpnew_opgroup_fmt_slice.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/src/fpnew_opgroup_multifmt_slice.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/src/fpnew_opgroup_block.sv" \
    "${DESIGN_RTL_DIR}/vendor/pulp_platform_fpnew/src/fpnew_top.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_if_stage.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_cs_registers.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_register_file_ff.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_load_store_unit.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_id_stage.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_aligner.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_decoder.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_compressed_decoder.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_fifo.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_prefetch_buffer.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_hwloop_regs.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_mult.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_int_controller.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_ex_stage.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_alu_div.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_alu.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_ff_one.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_popcnt.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_apu_disp.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_controller.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_obi_interface.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_prefetch_controller.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_sleep_unit.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_core.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_fp_wrapper.sv" \
    "${DESIGN_RTL_DIR}/cv32e40p_top.sv" \
]

# 2. Yildiz (wildcard) iceren klasorleri TCL'in glob komutu ile genisletip listeye ekliyoruz
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/MemoryFiles/*"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/PeripheralModules/QSPI/rtl/*"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/PeripheralModules/Timer/rtl/*"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/PeripheralModules/UART/rtl/*"]
lappend my_files {*}[glob -nocomplain "${PROJE_DIR}/PeripheralModules/I2C/sources/new/*"]

# Import (kopyalama) islemine bu dinamik listeyi veriyoruz
import_files -force $my_files

# sim_1 fileset'i icin ayni islem
set sim_files [list \
    "${DESIGN_RTL_DIR}/../bhv/cv32e40p_sim_clock_gate.sv" \
    "${DESIGN_RTL_DIR}/../bhv/include/cv32e40p_tracer_pkg.sv" \
    "${DESIGN_RTL_DIR}/../bhv/cv32e40p_tb_wrapper.sv" \
]

lappend sim_files {*}[glob -nocomplain "${PROJE_DIR}/top_module_test/*"]

import_files -force -fileset sim_1 $sim_files

puts "Tüm Modül ve CV32E40P kaynak dosyaları başarıyla projeye kopyalandı (import edildi)!"
