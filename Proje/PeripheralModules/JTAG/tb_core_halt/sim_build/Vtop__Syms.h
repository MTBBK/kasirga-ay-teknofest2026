// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_cv32e40p_tracer_pkg.h"
#include "Vtop___024unit.h"
#include "Vtop_dm.h"
#include "Vtop_cv32e40p_apu_core_pkg.h"
#include "Vtop_cv32e40p_fpu_pkg.h"
#include "Vtop_cv32e40p_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_cv32e40p_apu_core_pkg     TOP__cv32e40p_apu_core_pkg;
    Vtop_cv32e40p_fpu_pkg          TOP__cv32e40p_fpu_pkg;
    Vtop_cv32e40p_pkg              TOP__cv32e40p_pkg;
    Vtop_cv32e40p_tracer_pkg       TOP__cv32e40p_tracer_pkg;
    Vtop_dm                        TOP__dm;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_TOP;
    VerilatedScope* __Vscopep_cv32e40p_apu_core_pkg;
    VerilatedScope* __Vscopep_cv32e40p_fpu_pkg;
    VerilatedScope* __Vscopep_cv32e40p_pkg;
    VerilatedScope* __Vscopep_cv32e40p_tracer_pkg;
    VerilatedScope* __Vscopep_dm;
    VerilatedScope* __Vscopep_tb_core_debug;
    VerilatedScope* __Vscopep_tb_core_debug__u_core;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__cs_registers_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__cs_registers_i__gen_no_pulp_secure_write_logic;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__cs_registers_i__gen_trigger_regs;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__ex_stage_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__ex_stage_i__alu_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__ex_stage_i__alu_i__alu_div_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__ex_stage_i__alu_i__ff_one_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__ex_stage_i__alu_i__popcnt_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__ex_stage_i__mult_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__id_stage_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__id_stage_i__controller_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__id_stage_i__controller_i__blk_decode_level1;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__id_stage_i__decoder_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__id_stage_i__int_controller_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__id_stage_i__register_file_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__if_stage_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__if_stage_i__aligner_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__if_stage_i__compressed_decoder_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__if_stage_i__prefetch_buffer_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__if_stage_i__prefetch_buffer_i__fifo_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__if_stage_i__prefetch_buffer_i__instruction_obi_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__if_stage_i__prefetch_buffer_i__instruction_obi_i__gen_no_trans_stable;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__if_stage_i__prefetch_buffer_i__prefetch_controller_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__load_store_unit_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__load_store_unit_i__data_obi_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__sleep_unit_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_core__core_i__sleep_unit_i__core_clock_gate_i;
    VerilatedScope* __Vscopep_tb_core_debug__u_demux;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_csrs;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_csrs__csr_read_write;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_csrs__i_fifo;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_csrs__p_reduction1;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_csrs__p_reduction1__unnamedblk1;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_csrs__p_reduction2;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_csrs__p_reduction2__unnamedblk2;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_csrs__p_reduction3;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_csrs__p_reduction3__unnamedblk3;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_mem;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_mem__gen_rom_snd_scratch;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_mem__gen_rom_snd_scratch__i_debug_rom;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_mem__p_rw_logic;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_mem__p_rw_logic__unnamedblk1;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_mem__p_rw_logic__unnamedblk1__unnamedblk2;
    VerilatedScope* __Vscopep_tb_core_debug__u_dm_obi_top__i_dm_top__i_dm_sba;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
