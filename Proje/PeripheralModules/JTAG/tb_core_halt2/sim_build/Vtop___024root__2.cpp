// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rst_ni) {
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock)))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n;
        }
        if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__flush_i))))) {
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__flush_i) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_fifo.sv:117: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_core_debug2.u_core.core_i.if_stage_i.prefetch_buffer_i.fifo_i", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/Proje/Core/rtl/cv32e40p_fifo.sv", 117, "");
                }
            }
        }
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__flush_i) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = 0U;
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n;
        }
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q = 0ULL;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = 0U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_o 
        = (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                   >> ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                       << 5U)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__full_o 
        = (2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o 
        = (0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__cnt_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_rdata 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_empty 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_cnt 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__cnt_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_empty_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_empty;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_cnt;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid 
        = (1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_empty_i)));
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_29;
    __VdfgRegularize_h6e95ff9d_0_29 = 0;
    // Body
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__rst_n) {
        if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_valid) 
             & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_valid))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__is_compressed_id_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_compressed_int;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_valid_id_o = 1U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__is_fetch_failed_o = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_id_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_if_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn_id_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_id_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed;
        } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__clear_instr_valid_i) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_valid_id_o = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__is_fetch_failed_o = 0U;
        }
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__is_compressed_id_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_valid_id_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__is_fetch_failed_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_id_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn_id_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_id_o = 0U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__is_compressed_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__is_compressed_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_valid_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_valid_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__is_fetch_failed_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__is_fetch_failed_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__pc_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__illegal_c_insn_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_rdata_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_compressed_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__is_compressed_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_valid_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_fetch_failed_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__is_fetch_failed_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__pc_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__pc_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__illegal_c_insn_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__illegal_c_insn_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr_rdata_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_rdata_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr_valid_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_fetch_failed_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_fetch_failed_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_id_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_c_insn_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__illegal_c_insn_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr_rdata_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_iz_type 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
           >> 0x00000014U);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_z_type 
        = (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                          >> 0x0000000fU));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s_type 
        = (((- (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | ((0x00000fe0U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                              >> 0x00000014U)) | (0x0000001fU 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                     >> 7U))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_u_type 
        = (0xfffff000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_bi_type 
        = (((- (IData)((1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                              >> 0x00000018U)))) << 5U) 
           | (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                             >> 0x00000014U)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_clip_type 
        = (((IData)(1U) << (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                           >> 0x00000014U))) 
           - (IData)(1U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffleb_type 
        = ((((0x00000300U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                             >> 0x00000013U)) | (3U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                    >> 0x00000017U))) 
            << 0x00000010U) | ((0x00000300U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                               >> 0x0000000dU)) 
                               | ((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                         >> 0x00000013U)) 
                                  | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                           >> 0x00000019U)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffleh_type 
        = ((0x00010000U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                           >> 4U)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                            >> 0x00000019U)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s2_type 
        = (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                          >> 0x00000014U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type 
        = (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                          >> 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_29 = ((0x0000003eU 
                                        & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                           >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                >> 0x00000019U)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_sb_type 
        = (((- (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000dU) 
           | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                       >> 0x0000001eU)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                 >> 7U))) 
               << 0x0000000bU) | ((0x000007e0U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                  >> 0x00000014U)) 
                                  | (0x0000001eU & 
                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                      >> 7U)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_uj_type 
        = (((- (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                        >> 0x0000001fU))) << 0x00000014U) 
           | ((((0x000001feU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                >> 0x0000000bU)) | 
                (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                       >> 0x00000014U))) << 0x0000000bU) 
              | (0x000007feU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                >> 0x00000014U))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
              >> 0x00000014U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_id 
        = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_d) 
            << 5U) | (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 7U)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id 
        = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_b) 
            << 5U) | (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 0x00000014U)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id 
        = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_a) 
            << 5U) | (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 0x0000000fU)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffle_type 
        = ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode))
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffleb_type
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffleh_type);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_id 
        = (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type 
                          & (- (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_mux)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id_imm 
        = (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type 
                          & (- (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_mux)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id_imm 
        = (0x0000001fU & ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux))
                           ? (1U & (- (IData)((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux)))))
                           : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux))
                               ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type
                               : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s2_type)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vs_type 
        = (((- (IData)((1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                              >> 0x00000018U)))) << 6U) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_29));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vu_type 
        = __VdfgRegularize_h6e95ff9d_0_29;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_b_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_a_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_id 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel)
            ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_id)
            : (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 2U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 1U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o = 1U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_c_mux_sel_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o = 1U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_dec_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_dec_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_dec_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fencei_insn_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_mux_o = 3U;
    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                  >> 6U)))) {
        if ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((0x00000010U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((3U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                            >> 0x1eU))) {
                                    if ((2U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x1eU))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000001eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0000001dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x0000001cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                             >> 0x0000001bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                 >> 0x0000001aU)))) {
                                                            if (
                                                                (0x02000000U 
                                                                 & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                         >> 0x0000000eU)))) {
                                                                    if (
                                                                        (0x00002000U 
                                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o 
                                                                            = 
                                                                            ((0x00001000U 
                                                                              & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                                              ? 0U
                                                                              : 1U);
                                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 6U;
                                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o = 1U;
                                                                    } else if (
                                                                               (0x00001000U 
                                                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o = 3U;
                                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 6U;
                                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o = 1U;
                                                                    } else {
                                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 0U;
                                                                    }
                                                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_mux_o = 3U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o = 1U;
                                if ((0U == (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 2U;
                                } else if ((1U == (7U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x0cU)))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 1U;
                                } else if ((2U == (7U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x0cU)))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
                                }
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                                if ((0U != (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    if ((1U != (7U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                   >> 0x0cU)))) {
                                        if ((2U != 
                                             (7U & 
                                              (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                               >> 0x0cU)))) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o = 0U;
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                             >> 4U)))) {
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0000000dU)))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o 
                                        = ((0x00001000U 
                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                            ? 1U : 2U);
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0000000cU)))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
                                }
                            } else {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o 
                                    = ((0x00001000U 
                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                        ? 1U : 2U);
                            }
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                      >> 5U)))) {
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o 
                                    = (1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x0eU)));
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0U == (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fencei_insn_o = 1U;
                                } else if ((1U == (7U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x0cU)))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fencei_insn_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 0U;
    if ((0x00000040U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((0x00000010U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0U != (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o 
                                        = ((0x00004000U 
                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                            ? 2U : 0U);
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o = 0U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o = 1U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0eU)))) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                                    }
                                }
                                if ((0U == (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    if ((0U == ((0x000003e0U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000000aU)) 
                                                | (0x0000001fU 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x14U))) {
                                            if ((1U 
                                                 != 
                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x0302U 
                                                     != 
                                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x14U))) {
                                                    if (
                                                        (2U 
                                                         != 
                                                         (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                          >> 0x14U))) {
                                                        if (
                                                            (0x07b2U 
                                                             == 
                                                             (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                              >> 0x14U))) {
                                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_dec_o = 1U;
                                                        }
                                                        if (
                                                            (0x07b2U 
                                                             != 
                                                             (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                              >> 0x14U))) {
                                                            if (
                                                                (0x0105U 
                                                                 == 
                                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                  >> 0x14U))) {
                                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_o = 1U;
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (2U 
                                                         == 
                                                         (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                          >> 0x14U))) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_dec_o = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x0302U 
                                                     == 
                                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x14U))) {
                                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_dec_o = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 == 
                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x14U))) {
                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o = 1U;
                                            }
                                        }
                                        if ((0U == 
                                             (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x14U))) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 1U;
                        }
                    }
                }
                if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            if ((0U != (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0cU)))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_c_mux_sel_o = 2U;
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o = 1U;
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o = 2U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 2U;
                            if ((0U != (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0cU)))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
                            }
                        }
                    }
                } else if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o = 3U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 3U;
                    }
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000010U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 3U)))) {
                if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 2U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o = 1U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((3U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                    >> 0x1eU))) {
                            if ((2U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x1eU))) {
                                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0000001eU)))) {
                                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0000001dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000001cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0000001bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x0000001aU)))) {
                                                    if (
                                                        (0x02000000U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        if (
                                                            (0x00004000U 
                                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 3U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((3U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x1eU))) {
                                if ((2U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                            >> 0x1eU))) {
                                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x1cU)))) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                                    }
                                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0000001eU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000001dU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0000001cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x0000001bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                             >> 0x0000001aU)))) {
                                                        if (
                                                            (0x02000000U 
                                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                            if (
                                                                (0x00004000U 
                                                                 & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 2U)))) {
                if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                      >> 4U)))) {
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_c_mux_sel_o = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((0x00000010U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 3U)))) {
                if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 1U;
                        }
                    }
                }
                if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                      >> 3U)))) {
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 2U)))) {
                if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_id 
        = (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vu_type);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_waddr_id_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operator 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_we_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_type_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_c_mux_sel_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__dret_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_dec_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__uret_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_dec_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mret_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_dec_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fencei_insn_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_access 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_dec_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_mux 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_mux_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn_in_dec_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_a 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_z_type 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_dec_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__dret_dec;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_dec_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__uret_dec;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_dec_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mret_dec;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_dec_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_dec_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id 
        = ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
            ? ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_c) 
                 << 5U) | (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                          >> 0x0000000fU))) 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))))))
            : (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_c) 
                << 5U) | (0x0000001fU & ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
                                          ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                             >> 7U)
                                          : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                             >> 0x0000001bU)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn_in_dec_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_id_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_dec_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ctrl_transfer_insn_in_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__ctrl_transfer_insn_in_dec_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ctrl_transfer_insn_in_dec;
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI) 
           && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI) 
           && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN));
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN;
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP = 0U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI) 
           && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev 
        = ((((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                        << 1U)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                          >> 1U)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x0000001fU))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CntZero_S 
        = (1U & (~ (0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP)
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Res_DO 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP)
            ? (- vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_div 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Res_DO;
}

extern const VlWide<32>/*1023:0*/ Vtop__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<64>/*2047:0*/ Vtop__ConstPool__CONST_h6be9aa18_0;

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_25;
    __VdfgRegularize_h6e95ff9d_0_25 = 0;
    VlWide<64>/*2047:0*/ __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q;
    VL_ZERO_W(2048, __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VlWide<64>/*2047:0*/ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q;
    VL_ZERO_W(2048, __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VlWide<32>/*1023:0*/ __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q;
    VL_ZERO_W(1024, __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q);
    VlWide<32>/*1023:0*/ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q;
    VL_ZERO_W(1024, __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q);
    IData/*31:0*/ __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q;
    __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = 0;
    IData/*31:0*/ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q;
    __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = 0;
    // Body
    __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffffeU & __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (1U & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__rst_n)) 
                    | vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n)));
    __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (1U | __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffffbU & __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (4U & (((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__rst_n)) 
                     << 2U) | (0xfffffffcU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n))));
    __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (4U | __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffff7U & __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (8U & (((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__rst_n)) 
                     << 3U) | (0xfffffff8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n))));
    __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (8U | __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((0xffff0000U & __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__rst_n)
               ? (0x0000ffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U])
               : 0U));
    __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = (0xffffU | __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]);
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__rst_n) {
        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0xffffffffU;
        } else if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0xffffffffU;
        } else if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
            __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))));
            __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = (IData)(((((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))) 
                           >> 0x00000020U));
            __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0xffffffffU;
            __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0xffffffffU;
        }
        if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0xffffffffU;
        } else if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0xffffffffU;
        } else if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
            __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = (IData)((((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))));
            __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = (IData)(((((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))) 
                           >> 0x00000020U));
            __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0xffffffffU;
            __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0xffffffffU;
        }
        if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0xffffffffU;
        } else if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0xffffffffU;
        } else if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
            __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = (IData)((((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))));
            __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = (IData)(((((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))) 
                           >> 0x00000020U));
            __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0xffffffffU;
            __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0xffffffffU;
        }
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_q 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_n;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q 
            = (6U | (0x00000028U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)));
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q 
                = (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_q 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_n;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n;
    } else {
        __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0U;
        __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0U;
        __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0xffffffffU;
        __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0xffffffffU;
        __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0U;
        __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0U;
        __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0xffffffffU;
        __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0xffffffffU;
        __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0U;
        __Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0U;
        __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0xffffffffU;
        __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0xffffffffU;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q = 1U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q = 6U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q = 0x40000003U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q)));
    __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U])));
    VL_ASSIGN_W(1024, __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q, Vtop__ConstPool__CONST_hd6b7ba52_0);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U])));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U] 
        = ((__Vdly__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U] 
            & __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U]) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U] 
              & (~ __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U])));
    VL_ASSIGN_W(2048, __VdlyMask__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q, Vtop__ConstPool__CONST_h6be9aa18_0);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[2U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[3U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[8U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[9U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[10U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[11U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[12U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[13U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[14U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[15U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[16U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[17U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[18U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[19U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[20U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[21U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[22U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[23U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[24U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[25U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[26U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[27U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[28U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[29U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[30U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[31U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[32U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[33U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[34U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[35U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[36U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[37U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[38U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[39U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[40U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[41U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[42U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[43U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[44U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[45U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[46U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[47U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[48U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[49U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[50U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[51U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[52U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[53U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[54U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[55U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[56U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[57U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[58U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[59U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[60U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[61U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[62U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U])))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[63U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_rdata 
        = (0x28001040U | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                          << 2U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_rdata 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_ebreakm_o 
        = (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0x0000000fU));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_ebreaku_o 
        = (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0x0000000cU));
    __VdfgRegularize_h6e95ff9d_0_25 = (1U & (~ (IData)(
                                                       (4U 
                                                        == 
                                                        (0x00000804U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_single_step_o 
        = (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 2U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mtvec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mtvec_mode 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mepc 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__depc 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_ebreakm 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_ebreakm_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_ebreaku 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_ebreaku_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__u_irq_enable_o 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_25) 
           & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
              >> 6U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__m_irq_enable_o 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_25) 
           & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
              >> 5U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_single_step 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_single_step_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__m_trap_base_addr_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mtvec;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__mepc_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mepc;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__depc_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__depc;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreakm_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_ebreakm;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreaku_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_ebreaku;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__u_irq_enable 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__u_irq_enable_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__m_irq_enable 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__m_irq_enable_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_single_step_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_single_step;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreakm_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreakm_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreaku_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreaku_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__u_irq_enable_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__u_irq_enable;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__m_irq_enable_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__m_irq_enable;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_single_step_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__u_ie_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__u_irq_enable_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__m_ie_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__m_irq_enable_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__global_irq_enable 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__m_ie_i;
}

void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0U] = 0U;
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rst_n) {
        if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000010U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000010U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000040U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000040U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000080U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000080U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000100U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000100U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000200U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000200U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000400U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[10U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000400U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[10U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000800U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[11U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000800U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[11U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[12U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[12U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[13U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[13U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[14U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[14U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00008000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[15U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00008000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[15U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00010000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[16U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00010000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[16U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00020000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[17U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00020000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[17U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00040000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[18U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00040000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[18U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00080000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[19U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00080000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[19U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00100000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[20U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00100000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[20U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00200000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[21U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00200000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[21U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00400000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[22U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00400000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[22U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00800000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[23U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00800000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[23U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x01000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[24U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x01000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[24U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x02000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[25U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x02000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[25U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x04000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[26U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x04000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[26U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x08000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[27U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x08000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[27U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x10000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[28U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x10000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[28U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x20000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[29U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x20000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[29U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x40000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[30U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x40000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[30U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec 
             >> 0x1fU)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[31U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec 
                    >> 0x1fU)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[31U] 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[10U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[11U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[12U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[13U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[14U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[15U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[16U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[17U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[18U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[19U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[20U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[21U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[22U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[23U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[24U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[25U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[26U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[27U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[28U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[29U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[30U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[31U] = 0U;
    }
}

void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__rst_n) {
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__ex_valid_o) {
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_i;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 1U;
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
            }
        } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__wb_ready_i) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
        }
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_wb_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_power_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_o = 0U;
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_power_o = 1U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_o = 1U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_waddr_fw_wb_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_wb_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_we_wb_power 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_power_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_we_wb 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_waddr_fw_wb_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_power_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_we_wb_power;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_we_wb;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_power_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec 
        = ((((((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                   & (0x1fU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                  << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                             & (0x1eU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                            << 2U)) | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                         & (0x1dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                        << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                  & (0x1cU 
                                                     == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
               << 0x0000000cU) | ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                      & (0x1bU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                     << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                & (0x1aU 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                        & (0x19U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                       << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                 & (0x18U 
                                                    == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                  << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                  & (0x17U 
                                                     == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (0x16U 
                                                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (0x15U 
                                                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                     & (0x14U 
                                                        == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                              << 4U) 
                                             | (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                   & (0x13U 
                                                      == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                     & (0x12U 
                                                        == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                     & (0x11U 
                                                        == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                      & (0x10U 
                                                         == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))))) 
            << 0x00000010U) | ((((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                     & (0x0fU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                               & (0x0eU 
                                                  == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                       & (0x0dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                & (0x0cU 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                     & (0x0bU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                               & (0x0aU 
                                                  == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                       & (9U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                & (8U 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                 & (7U 
                                                    == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                   & (5U 
                                                      == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (4U 
                                                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                             << 4U) 
                                            | (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                  & (3U 
                                                     == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))))));
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)(((((0x000003e0U 
                                                  & (((0x00010000U 
                                                       & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                       ? 
                                                      ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                          >> 0x00000010U))
                                                       : 
                                                      ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                        << 0x0000000bU) 
                                                       | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                          >> 0x00000015U))) 
                                                     << 5U)) 
                                                 | (0x0000001fU 
                                                    & ((0x00004000U 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                        ? 
                                                       ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                         << 0x0000001aU) 
                                                        | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                           >> 6U))
                                                        : 
                                                       ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                         << 0x00000015U) 
                                                        | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                           >> 0x0000000bU))))) 
                                                << 0x0000000aU) 
                                               | ((0x000003e0U 
                                                   & (((0x00001000U 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                        ? 
                                                       ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                         << 4U) 
                                                        | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                           >> 0x0000001cU))
                                                        : 
                                                       ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                         << 0x0000001fU) 
                                                        | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                           >> 1U))) 
                                                      << 5U)) 
                                                  | (0x0000001fU 
                                                     & ((0x00000400U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                         ? 
                                                        ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                          << 0x0000000eU) 
                                                         | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                            >> 0x00000012U))
                                                         : 
                                                        ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                          << 9U) 
                                                         | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                            >> 0x00000017U)))))))) 
                              << 0x00000014U) | (QData)((IData)(
                                                                ((((0x000003e0U 
                                                                    & (((0x00000100U 
                                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                         ? 
                                                                        ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                          << 0x00000018U) 
                                                                         | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                            >> 8U))
                                                                         : 
                                                                        ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                          << 0x00000013U) 
                                                                         | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                            >> 0x0000000dU))) 
                                                                       << 5U)) 
                                                                   | (0x0000001fU 
                                                                      & ((0x00000040U 
                                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                          ? 
                                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                           << 2U) 
                                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                             >> 0x0000001eU))
                                                                          : 
                                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                           << 0x0000001dU) 
                                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                             >> 3U))))) 
                                                                  << 0x0000000aU) 
                                                                 | ((0x000003e0U 
                                                                     & (((0x00000010U 
                                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                          ? 
                                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                           << 0x0000000cU) 
                                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                             >> 0x00000014U))
                                                                          : 
                                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                           << 7U) 
                                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                             >> 0x00000019U))) 
                                                                        << 5U)) 
                                                                    | (0x0000001fU 
                                                                       & ((4U 
                                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                           ? 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                            << 0x00000016U) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                              >> 0x0000000aU))
                                                                           : 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                            << 0x00000011U) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                              >> 0x0000000fU))))))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(((0x00007c00U 
                                                  & (((0x40000000U 
                                                       & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                       ? 
                                                      ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                        << 0x0000000aU) 
                                                       | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                          >> 0x00000016U))
                                                       : 
                                                      ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                        << 5U) 
                                                       | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                          >> 0x0000001bU))) 
                                                     << 0x0000000aU)) 
                                                 | ((0x000003e0U 
                                                     & (((0x10000000U 
                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                          ? 
                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                           << 0x00000014U) 
                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                             >> 0x0000000cU))
                                                          : 
                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                             >> 0x00000011U))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0x04000000U 
                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                           ? 
                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                              >> 2U))
                                                           : 
                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                            << 0x00000019U) 
                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                              >> 7U)))))))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((((0x000003e0U 
                                                                      & (((0x01000000U 
                                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                           ? 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                            << 8U) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              >> 0x00000018U))
                                                                           : 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                            << 3U) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              >> 0x0000001dU))) 
                                                                         << 5U)) 
                                                                     | (0x0000001fU 
                                                                        & ((0x00400000U 
                                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                            ? 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 0x0000000eU))
                                                                            : 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x0000000dU) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 0x00000013U))))) 
                                                                    << 0x0000000aU) 
                                                                   | ((0x000003e0U 
                                                                       & (((0x00100000U 
                                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                            ? 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x0000001cU) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 4U))
                                                                            : 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x00000017U) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 9U))) 
                                                                          << 5U)) 
                                                                      | (0x0000001fU 
                                                                         & ((0x00040000U 
                                                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                             ? 
                                                                            ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                              << 6U) 
                                                                             | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001aU))
                                                                             : 
                                                                            ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              << 1U) 
                                                                             | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001fU)))))))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          ((((0x000003e0U 
                                                              & (((0x00010000U 
                                                                   & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                   ? 
                                                                  ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                    << 0x00000010U) 
                                                                   | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                      >> 0x00000010U))
                                                                   : 
                                                                  ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                    << 0x0000000bU) 
                                                                   | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                      >> 0x00000015U))) 
                                                                 << 5U)) 
                                                             | (0x0000001fU 
                                                                & ((0x00004000U 
                                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                    ? 
                                                                   ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                     << 0x0000001aU) 
                                                                    | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                       >> 6U))
                                                                    : 
                                                                   ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                     << 0x00000015U) 
                                                                    | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                       >> 0x0000000bU))))) 
                                                            << 0x0000000aU) 
                                                           | ((0x000003e0U 
                                                               & (((0x00001000U 
                                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                    ? 
                                                                   ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                       >> 0x0000001cU))
                                                                    : 
                                                                   ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                     << 0x0000001fU) 
                                                                    | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                       >> 1U))) 
                                                                  << 5U)) 
                                                              | (0x0000001fU 
                                                                 & ((0x00000400U 
                                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                     ? 
                                                                    ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                      << 0x0000000eU) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                        >> 0x00000012U))
                                                                     : 
                                                                    ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                      << 9U) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                        >> 0x00000017U)))))))) 
                                          << 0x00000014U) 
                                         | (QData)((IData)(
                                                           ((((0x000003e0U 
                                                               & (((0x00000100U 
                                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                    ? 
                                                                   ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                       >> 8U))
                                                                    : 
                                                                   ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                     << 0x00000013U) 
                                                                    | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                       >> 0x0000000dU))) 
                                                                  << 5U)) 
                                                              | (0x0000001fU 
                                                                 & ((0x00000040U 
                                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                     ? 
                                                                    ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                      << 2U) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                        >> 0x0000001eU))
                                                                     : 
                                                                    ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                      << 0x0000001dU) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                        >> 3U))))) 
                                                             << 0x0000000aU) 
                                                            | ((0x000003e0U 
                                                                & (((0x00000010U 
                                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                     ? 
                                                                    ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                      << 0x0000000cU) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                        >> 0x00000014U))
                                                                     : 
                                                                    ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                        >> 0x00000019U))) 
                                                                   << 5U)) 
                                                               | (0x0000001fU 
                                                                  & ((4U 
                                                                      & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                      ? 
                                                                     ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                       << 0x00000016U) 
                                                                      | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                         >> 0x0000000aU))
                                                                      : 
                                                                     ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                       << 0x00000011U) 
                                                                      | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                         >> 0x0000000fU))))))))) 
                                        >> 0x00000020U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)(((0x00007c00U 
                                                  & (((0x40000000U 
                                                       & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                       ? 
                                                      ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                        << 0x0000000aU) 
                                                       | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                          >> 0x00000016U))
                                                       : 
                                                      ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                        << 5U) 
                                                       | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                          >> 0x0000001bU))) 
                                                     << 0x0000000aU)) 
                                                 | ((0x000003e0U 
                                                     & (((0x10000000U 
                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                          ? 
                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                           << 0x00000014U) 
                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                             >> 0x0000000cU))
                                                          : 
                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                             >> 0x00000011U))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0x04000000U 
                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                           ? 
                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                              >> 2U))
                                                           : 
                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                            << 0x00000019U) 
                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                              >> 7U)))))))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((((0x000003e0U 
                                                                      & (((0x01000000U 
                                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                           ? 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                            << 8U) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              >> 0x00000018U))
                                                                           : 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                            << 3U) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              >> 0x0000001dU))) 
                                                                         << 5U)) 
                                                                     | (0x0000001fU 
                                                                        & ((0x00400000U 
                                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                            ? 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 0x0000000eU))
                                                                            : 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x0000000dU) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 0x00000013U))))) 
                                                                    << 0x0000000aU) 
                                                                   | ((0x000003e0U 
                                                                       & (((0x00100000U 
                                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                            ? 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x0000001cU) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 4U))
                                                                            : 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x00000017U) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 9U))) 
                                                                          << 5U)) 
                                                                      | (0x0000001fU 
                                                                         & ((0x00040000U 
                                                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                             ? 
                                                                            ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                              << 6U) 
                                                                             | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001aU))
                                                                             : 
                                                                            ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              << 1U) 
                                                                             | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001fU)))))))))) 
                      >> 0x00000018U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((0x00007c00U 
                                                                      & (((0x40000000U 
                                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                           ? 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                            << 0x0000000aU) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                              >> 0x00000016U))
                                                                           : 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                            << 5U) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                              >> 0x0000001bU))) 
                                                                         << 0x0000000aU)) 
                                                                     | ((0x000003e0U 
                                                                         & (((0x10000000U 
                                                                              & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                              ? 
                                                                             ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                               << 0x00000014U) 
                                                                              | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                >> 0x0000000cU))
                                                                              : 
                                                                             ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                               << 0x0000000fU) 
                                                                              | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                >> 0x00000011U))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0x04000000U 
                                                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                               ? 
                                                                              ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                << 0x0000001eU) 
                                                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                >> 2U))
                                                                               : 
                                                                              ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                << 0x00000019U) 
                                                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                >> 7U)))))))) 
                                                    << 0x00000014U) 
                                                   | (QData)((IData)(
                                                                     ((((0x000003e0U 
                                                                         & (((0x01000000U 
                                                                              & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                              ? 
                                                                             ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               << 8U) 
                                                                              | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 0x00000018U))
                                                                              : 
                                                                             ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                               << 3U) 
                                                                              | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 0x0000001dU))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0x00400000U 
                                                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                               ? 
                                                                              ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 0x00000012U) 
                                                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 0x0000000eU))
                                                                               : 
                                                                              ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 0x0000000dU) 
                                                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 0x00000013U))))) 
                                                                       << 0x0000000aU) 
                                                                      | ((0x000003e0U 
                                                                          & (((0x00100000U 
                                                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                               ? 
                                                                              ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 0x0000001cU) 
                                                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 4U))
                                                                               : 
                                                                              ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 0x00000017U) 
                                                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 9U))) 
                                                                             << 5U)) 
                                                                         | (0x0000001fU 
                                                                            & ((0x00040000U 
                                                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                                ? 
                                                                               ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                << 6U) 
                                                                                | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001aU))
                                                                                : 
                                                                               ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 1U) 
                                                                                | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001fU))))))))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    __Vtemp_3[0U] = (IData)((((QData)((IData)(((((0x000003e0U 
                                                  & (((0x00008000U 
                                                       & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                       ? 
                                                      ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                        << 0x00000015U) 
                                                       | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                          >> 0x0000000bU))
                                                       : 
                                                      ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                          >> 0x00000010U))) 
                                                     << 5U)) 
                                                 | (0x0000001fU 
                                                    & ((0x00002000U 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                        ? 
                                                       ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         << 0x0000001fU) 
                                                        | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                           >> 1U))
                                                        : 
                                                       ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         << 0x0000001aU) 
                                                        | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                           >> 6U))))) 
                                                << 0x0000000aU) 
                                               | ((0x000003e0U 
                                                   & (((0x00000800U 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                        ? 
                                                       ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                         << 9U) 
                                                        | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                           >> 0x00000017U))
                                                        : 
                                                       ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         << 4U) 
                                                        | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                           >> 0x0000001cU))) 
                                                      << 5U)) 
                                                  | (0x0000001fU 
                                                     & ((0x00000200U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                         ? 
                                                        ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                          << 0x00000013U) 
                                                         | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                            >> 0x0000000dU))
                                                         : 
                                                        ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                          << 0x0000000eU) 
                                                         | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                            >> 0x00000012U)))))))) 
                              << 0x00000014U) | (QData)((IData)(
                                                                ((((0x000003e0U 
                                                                    & (((0x00000080U 
                                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                         ? 
                                                                        ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                          << 0x0000001dU) 
                                                                         | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                            >> 3U))
                                                                         : 
                                                                        ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                          << 0x00000018U) 
                                                                         | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                            >> 8U))) 
                                                                       << 5U)) 
                                                                   | (0x0000001fU 
                                                                      & ((0x00000020U 
                                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                           << 7U) 
                                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                             >> 0x00000019U))
                                                                          : 
                                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                           << 2U) 
                                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                             >> 0x0000001eU))))) 
                                                                  << 0x0000000aU) 
                                                                 | ((0x000003e0U 
                                                                     & (((8U 
                                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                           << 0x00000011U) 
                                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                             >> 0x0000000fU))
                                                                          : 
                                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                           << 0x0000000cU) 
                                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                             >> 0x00000014U))) 
                                                                        << 5U)) 
                                                                    | (0x0000001fU 
                                                                       & ((2U 
                                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                            << 0x0000001bU) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                              >> 5U))
                                                                           : 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                            << 0x00000016U) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                              >> 0x0000000aU))))))))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((((
                                                   (0x000003e0U 
                                                    & (((1U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                         ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U]
                                                         : 
                                                        ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                          << 0x0000001bU) 
                                                         | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                            >> 5U))) 
                                                       << 5U)) 
                                                   | (0x0000001fU 
                                                      & ((0x20000000U 
                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x00000011U))
                                                          : 
                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x0000000aU) 
                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x00000016U))))) 
                                                  << 0x0000000aU) 
                                                 | ((0x000003e0U 
                                                     & (((0x08000000U 
                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x00000019U) 
                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 7U))
                                                          : 
                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x00000014U) 
                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x0000000cU))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0x02000000U 
                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                           ? 
                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                              >> 0x0000001dU))
                                                           : 
                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                              >> 2U)))))))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((((0x000003e0U 
                                                                      & (((0x00800000U 
                                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            << 0x0000000dU) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                              >> 0x00000013U))
                                                                           : 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            << 8U) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                              >> 0x00000018U))) 
                                                                         << 5U)) 
                                                                     | (0x0000001fU 
                                                                        & ((0x00200000U 
                                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                            ? 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x00000017U) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 9U))
                                                                            : 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 0x0000000eU))))) 
                                                                    << 0x0000000aU) 
                                                                   | ((0x000003e0U 
                                                                       & (((0x00080000U 
                                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                            ? 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 1U) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               >> 0x0000001fU))
                                                                            : 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x0000001cU) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 4U))) 
                                                                          << 5U)) 
                                                                      | (0x0000001fU 
                                                                         & ((0x00020000U 
                                                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x0000000bU) 
                                                                             | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x00000015U))
                                                                             : 
                                                                            ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 6U) 
                                                                             | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x0000001aU)))))))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          ((((0x000003e0U 
                                                              & (((0x00008000U 
                                                                   & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                   ? 
                                                                  ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                    << 0x00000015U) 
                                                                   | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                      >> 0x0000000bU))
                                                                   : 
                                                                  ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                    << 0x00000010U) 
                                                                   | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                      >> 0x00000010U))) 
                                                                 << 5U)) 
                                                             | (0x0000001fU 
                                                                & ((0x00002000U 
                                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     << 0x0000001fU) 
                                                                    | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                       >> 1U))
                                                                    : 
                                                                   ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     << 0x0000001aU) 
                                                                    | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                       >> 6U))))) 
                                                            << 0x0000000aU) 
                                                           | ((0x000003e0U 
                                                               & (((0x00000800U 
                                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     << 9U) 
                                                                    | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 0x00000017U))
                                                                    : 
                                                                   ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 0x0000001cU))) 
                                                                  << 5U)) 
                                                              | (0x0000001fU 
                                                                 & ((0x00000200U 
                                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      << 0x00000013U) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                        >> 0x0000000dU))
                                                                     : 
                                                                    ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      << 0x0000000eU) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                        >> 0x00000012U)))))))) 
                                          << 0x00000014U) 
                                         | (QData)((IData)(
                                                           ((((0x000003e0U 
                                                               & (((0x00000080U 
                                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     << 0x0000001dU) 
                                                                    | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 3U))
                                                                    : 
                                                                   ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 8U))) 
                                                                  << 5U)) 
                                                              | (0x0000001fU 
                                                                 & ((0x00000020U 
                                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x00000019U))
                                                                     : 
                                                                    ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      << 2U) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x0000001eU))))) 
                                                             << 0x0000000aU) 
                                                            | ((0x000003e0U 
                                                                & (((8U 
                                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 0x00000011U) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x0000000fU))
                                                                     : 
                                                                    ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 0x0000000cU) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x00000014U))) 
                                                                   << 5U)) 
                                                               | (0x0000001fU 
                                                                  & ((2U 
                                                                      & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                       << 0x0000001bU) 
                                                                      | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                         >> 5U))
                                                                      : 
                                                                     ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                       << 0x00000016U) 
                                                                      | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                         >> 0x0000000aU))))))))) 
                                        >> 0x00000020U)));
    __Vtemp_3[2U] = (((IData)((((QData)((IData)((((
                                                   (0x000003e0U 
                                                    & (((1U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                         ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U]
                                                         : 
                                                        ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                          << 0x0000001bU) 
                                                         | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                            >> 5U))) 
                                                       << 5U)) 
                                                   | (0x0000001fU 
                                                      & ((0x20000000U 
                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x00000011U))
                                                          : 
                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x0000000aU) 
                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x00000016U))))) 
                                                  << 0x0000000aU) 
                                                 | ((0x000003e0U 
                                                     & (((0x08000000U 
                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x00000019U) 
                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 7U))
                                                          : 
                                                         ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x00000014U) 
                                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x0000000cU))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0x02000000U 
                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                           ? 
                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                              >> 0x0000001dU))
                                                           : 
                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                              >> 2U)))))))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((((0x000003e0U 
                                                                      & (((0x00800000U 
                                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            << 0x0000000dU) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                              >> 0x00000013U))
                                                                           : 
                                                                          ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            << 8U) 
                                                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                              >> 0x00000018U))) 
                                                                         << 5U)) 
                                                                     | (0x0000001fU 
                                                                        & ((0x00200000U 
                                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                            ? 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x00000017U) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 9U))
                                                                            : 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 0x0000000eU))))) 
                                                                    << 0x0000000aU) 
                                                                   | ((0x000003e0U 
                                                                       & (((0x00080000U 
                                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                            ? 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 1U) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               >> 0x0000001fU))
                                                                            : 
                                                                           ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x0000001cU) 
                                                                            | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 4U))) 
                                                                          << 5U)) 
                                                                      | (0x0000001fU 
                                                                         & ((0x00020000U 
                                                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x0000000bU) 
                                                                             | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x00000015U))
                                                                             : 
                                                                            ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 6U) 
                                                                             | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x0000001aU)))))))))) 
                      >> 0x00000018U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((((0x000003e0U 
                                                                        & (((1U 
                                                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                             ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U]
                                                                             : 
                                                                            ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                              << 0x0000001bU) 
                                                                             | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                                >> 5U))) 
                                                                           << 5U)) 
                                                                       | (0x0000001fU 
                                                                          & ((0x20000000U 
                                                                              & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                               << 0x0000000fU) 
                                                                              | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 0x00000011U))
                                                                              : 
                                                                             ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                               << 0x0000000aU) 
                                                                              | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 0x00000016U))))) 
                                                                      << 0x0000000aU) 
                                                                     | ((0x000003e0U 
                                                                         & (((0x08000000U 
                                                                              & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                               << 0x00000019U) 
                                                                              | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 7U))
                                                                              : 
                                                                             ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                               << 0x00000014U) 
                                                                              | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 0x0000000cU))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0x02000000U 
                                                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                               ? 
                                                                              ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                << 3U) 
                                                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 0x0000001dU))
                                                                               : 
                                                                              ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                << 0x0000001eU) 
                                                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 2U)))))))) 
                                                    << 0x00000014U) 
                                                   | (QData)((IData)(
                                                                     ((((0x000003e0U 
                                                                         & (((0x00800000U 
                                                                              & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               << 0x0000000dU) 
                                                                              | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 0x00000013U))
                                                                              : 
                                                                             ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               << 8U) 
                                                                              | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 0x00000018U))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0x00200000U 
                                                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                               ? 
                                                                              ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                << 0x00000017U) 
                                                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 9U))
                                                                               : 
                                                                              ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                << 0x00000012U) 
                                                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 0x0000000eU))))) 
                                                                       << 0x0000000aU) 
                                                                      | ((0x000003e0U 
                                                                          & (((0x00080000U 
                                                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                               ? 
                                                                              ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                << 1U) 
                                                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x0000001fU))
                                                                               : 
                                                                              ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                << 0x0000001cU) 
                                                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 4U))) 
                                                                             << 5U)) 
                                                                         | (0x0000001fU 
                                                                            & ((0x00020000U 
                                                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 0x0000000bU) 
                                                                                | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x00000015U))
                                                                                : 
                                                                               ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 6U) 
                                                                                | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x0000001aU))))))))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((__Vtemp_2[0U] << 0x00000010U) | __Vtemp_3[2U]);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((__Vtemp_2[0U] >> 0x00000010U) | (__Vtemp_2[1U] 
                                             << 0x00000010U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | ((__Vtemp_2[1U] >> 0x00000010U) | (__Vtemp_2[2U] 
                                                << 0x00000010U)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__first_one_o 
        = (0x0000001fU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__first_one_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__fl1_result 
        = (0x0000001fU & ((IData)(0x1fU) - (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clb_result 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                          - (IData)(1U)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            if ((0x00000010U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result 
                            = ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                    ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one)
                                        ? 0x20U : (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__fl1_result))
                                    : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one)
                                        ? 0x20U : (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)))
                                : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                    ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one)
                                        ? ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                            >> 0x1fU)
                                            ? 0x1fU
                                            : 0U) : (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clb_result))
                                    : (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)));
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift_int 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one)
            ? 0x1fU : (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clb_result));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift_int) 
                          + (1U & (- (IData)((1U & 
                                              (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed))))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid)
            ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
    if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                << 0x00000010U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                   >> 0x10U));
    } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0xff000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | ((0x00ff0000U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                  << 8U)) | ((0x0000ff00U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                 >> 8U)) 
                                             | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                >> 0x18U))));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0x00ffffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                  << 0x00000018U));
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_norm
            : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left
                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt));
    if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x0000ffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(17,17,4, ((0x00010000U 
                                            & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                << 0x00000010U) 
                                               & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                  >> 0x0000000fU))) 
                                           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                              >> 0x10U)), 
                                 (0x0000000fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                 >> 0x10U))) 
                  << 0x00000010U));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff0000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ffffU & VL_SHIFTRS_III(17,17,4, 
                                               ((0xffff0000U 
                                                 & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 0x00000010U) 
                                                    & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x0000ffffU 
                                                   & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (0x0000000fU 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x00ffffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(9,9,3, ((0x00000100U 
                                          & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                              << 8U) 
                                             & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                >> 0x00000017U))) 
                                         | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                            >> 0x18U)), 
                                 (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                        >> 0x18U))) 
                  << 0x00000018U));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xff00ffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x00ff0000U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x0001ff00U 
                                                  & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 0x0000000fU))) 
                                                 | (0x000000ffU 
                                                    & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 0x10U))), 
                                                (7U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 0x10U))) 
                                 << 0x00000010U)));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff00ffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ff00U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x01ffff00U 
                                                  & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 7U))) 
                                                 | (0x000000ffU 
                                                    & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 8U))), 
                                                (7U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 8U))) 
                                 << 8U)));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffffff00U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x000000ffU & VL_SHIFTRS_III(9,9,3, 
                                               ((0xffffff00U 
                                                 & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 8U) 
                                                    & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x000000ffU 
                                                   & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (7U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a_32 
                       >> (0x0000001fU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int)));
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        << 1U)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                          >> 1U)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001fU))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        << 1U)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          >> 1U)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001fU))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = (((((((0x0000000cU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                << 2U)) | (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 2U))) 
               << 0x0000000cU) | (((0x0000000cU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 2U)) 
                                   | (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                            >> 6U))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 6U)) 
                                               | (3U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000000aU))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000000aU)) 
                                                | (3U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x0000000eU))))) 
            << 0x00000010U) | (((((0x0000000cU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x0000000eU)) 
                                  | (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000012U))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000012U)) 
                                  | (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000016U))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000016U)) 
                                              | (3U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001aU))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x0000001aU)) 
                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x0000001eU)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((((0x00000e00U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                             << 7U)) | ((0x000001c0U 
                                         & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                            << 1U)) 
                                        | ((0x00000038U 
                                            & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 5U)) 
                                           | (7U & 
                                              (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x0000000bU))))) 
            << 0x00000012U) | ((((0x000001c0U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 8U)) 
                                 | ((0x00000038U & 
                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      >> 0x0000000eU)) 
                                    | (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x00000014U)))) 
                                << 9U) | ((0x000001c0U 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                              >> 0x00000011U)) 
                                          | ((0x00000038U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 0x00000017U)) 
                                             | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x0000001dU)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__extract_sign 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__extract_is_signed) 
           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
              >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__reverse_result 
        = ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel))
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev
            : ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel))
                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev
                : ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel))
                    ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev
                    : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_and 
        = ((0x2aU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i
            : (- (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__extract_sign))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result 
        = ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result) 
           | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_inv 
              & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_and));
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
    if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 1U;
        }
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        }
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 1U;
        }
    }
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ndmreset_i) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0 = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0 
        = (0x00007fffU & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o 
                          >> 5U));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted 
        = ((0xfffffffeU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted) 
           | (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_i));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted;
    if ((1U > (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0 
            = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0;
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1 = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1 
        = (0x000003ffU & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o 
                          >> 0x0aU));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k = 0U;
    while ((1U > vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k)) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k))) 
                & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1) 
               | (0x00000000ffffffffULL & ((0U != vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0) 
                                           << (0x0000001fU 
                                               & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k))));
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k 
            = ((IData)(1U) + vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k);
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1;
    if ((1U > (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1 
            = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1;
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2 = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2 
        = (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o 
                          >> 0x0fU));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k = 0U;
    while ((1U > vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k)) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k))) 
                & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2) 
               | (0x00000000ffffffffULL & ((0U != vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1) 
                                           << (0x0000001fU 
                                               & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k))));
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k 
            = ((IData)(1U) + vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k);
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2;
    if ((1U > (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2 
            = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2;
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k = 0U;
    while ((1U > vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k)) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k))) 
                & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3) 
               | (0x00000000ffffffffULL & ((0U != vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2) 
                                           << (0x0000001fU 
                                               & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k))));
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k 
            = ((IData)(1U) + vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k);
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum3 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3;
}

void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((((((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2847U]) 
                  << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                             & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2846U]) 
                            << 2U)) | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2845U]) 
                                        << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2844U]))) 
               << 0x0000000cU) | ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2843U]) 
                                     << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2842U]) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2841U]) 
                                       << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2840U]))) 
                                  << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2839U]) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2838U]) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2837U]) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2836U]))) 
                                              << 4U) 
                                             | (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2835U]) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2834U]) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2833U]) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2832U]))))) 
            << 0x00000010U) | ((((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2831U]) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2830U]) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2829U]) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2828U]))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2827U]) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2826U]) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2825U]) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2824U]))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2823U]) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2822U]) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2821U]) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2820U]))) 
                                             << 4U) 
                                            | (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2819U]) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2818U]) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2817U]) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2816U]))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec 
        = ((((((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                   & (0x1fU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                  << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                             & (0x1eU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                            << 2U)) | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                         & (0x1dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                        << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                  & (0x1cU 
                                                     == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
               << 0x0000000cU) | ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                      & (0x1bU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                     << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                & (0x1aU 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                        & (0x19U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                       << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                 & (0x18U 
                                                    == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                  << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                  & (0x17U 
                                                     == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (0x16U 
                                                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (0x15U 
                                                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                     & (0x14U 
                                                        == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                              << 4U) 
                                             | (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                   & (0x13U 
                                                      == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                     & (0x12U 
                                                        == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                     & (0x11U 
                                                        == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                      & (0x10U 
                                                         == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))))) 
            << 0x00000010U) | ((((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                     & (0x0fU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                               & (0x0eU 
                                                  == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                       & (0x0dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                & (0x0cU 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                     & (0x0bU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                               & (0x0aU 
                                                  == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                       & (9U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                & (8U 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                 & (7U 
                                                    == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                   & (5U 
                                                      == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (4U 
                                                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                             << 4U) 
                                            | (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                  & (3U 
                                                     == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_waddr_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_we_ex;
    vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_we_i 
        = vlSelfRef.tb_core_debug2__DOT__core_data_we;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((((((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                   & ((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                          >> 0x0000001fU)) & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2975U])) 
                  << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                             & ((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                    >> 0x0000001eU)) 
                                & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2974U])) 
                            << 2U)) | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                         & ((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                >> 0x0000001dU)) 
                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2973U])) 
                                        << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & ((~ 
                                                      (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                       >> 0x0000001cU)) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2972U])))) 
               << 0x0000000cU) | ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                      & ((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                             >> 0x0000001bU)) 
                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2971U])) 
                                     << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & ((~ 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                     >> 0x0000001aU)) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2970U])) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                        & ((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                               >> 0x00000019U)) 
                                           & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2969U])) 
                                       << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & ((~ 
                                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                      >> 0x00000018U)) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2968U])))) 
                                  << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & ((~ 
                                                      (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                       >> 0x00000017U)) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2967U])) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                         >> 0x00000016U)) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2966U])) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                         >> 0x00000015U)) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2965U])) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ 
                                                         (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                          >> 0x00000014U)) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2964U])))) 
                                              << 4U) 
                                             | (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & ((~ 
                                                       (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                        >> 0x00000013U)) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2963U])) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ 
                                                         (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                          >> 0x00000012U)) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2962U])) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ 
                                                         (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                          >> 0x00000011U)) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2961U])) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                      & ((~ 
                                                          (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                           >> 0x00000010U)) 
                                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2960U])))))) 
            << 0x00000010U) | ((((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & ((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                            >> 0x0000000fU)) 
                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2959U])) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & ((~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                    >> 0x0000000eU)) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2958U])) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & ((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                              >> 0x0000000dU)) 
                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2957U])) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & ((~ 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                     >> 0x0000000cU)) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2956U])))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & ((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                            >> 0x0000000bU)) 
                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2955U])) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & ((~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                    >> 0x0000000aU)) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2954U])) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & ((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                              >> 9U)) 
                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2953U])) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & ((~ 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                     >> 8U)) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2952U])))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & ((~ 
                                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                      >> 7U)) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2951U])) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & ((~ 
                                                       (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                        >> 6U)) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2950U])) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & ((~ 
                                                       (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                        >> 5U)) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2949U])) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                         >> 4U)) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2948U])))) 
                                             << 4U) 
                                            | (((((~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                    >> 3U)) 
                                                  & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2947U])) 
                                                 << 3U) 
                                                | (((~ 
                                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                      >> 2U)) 
                                                    & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2946U])) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                         >> 1U)) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2945U])) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2944U])))))));
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q
        [(0x0000001fU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))];
    __VdfgRegularize_h6e95ff9d_0_2 = (((0U == (0x0000001fU 
                                               & ((IData)(0x0020U) 
                                                  + 
                                                  (0x000007c0U 
                                                   & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                      << 6U)))))
                                        ? 0U : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
                                                [(((IData)(0x0000001fU) 
                                                   + 
                                                   (0x000007ffU 
                                                    & ((IData)(0x0020U) 
                                                       + 
                                                       (0x000007c0U 
                                                        & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                           << 6U))))) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0020U) 
                                                     + 
                                                     (0x000007c0U 
                                                      & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                         << 6U))))))) 
                                      | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
                                         [(0x0000003fU 
                                           & (((IData)(0x0020U) 
                                               + (0x000007c0U 
                                                  & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                     << 6U))) 
                                              >> 5U))] 
                                         >> (0x0000001fU 
                                             & ((IData)(0x0020U) 
                                                + (0x000007c0U 
                                                   & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                      << 6U))))));
    __VdfgRegularize_h6e95ff9d_0_3 = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
        [(0x0000003eU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                         << 1U))];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
        = ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
            ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
                ? ((~ vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i) 
                   & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_q)
                : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i 
                   | vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_q))
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                 >> 3U)) & ((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                >> 3U)) & ((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                               >> 3U)) 
                                           & (0U != 
                                              ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events) 
                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]))))) 
            << 3U) | ((4U & (((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                  >> 2U)) & ((~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                                 >> 2U)) 
                                             & ((~ 
                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                  >> 2U)) 
                                                & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events) 
                                                   >> 1U)))) 
                             << 2U)) | (1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                 | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                    | vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = ((0x00000080U 
                                                  & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                  ? 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                  >> 5U))))) 
                                                  & (((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                       ? __VdfgRegularize_h6e95ff9d_0_2
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                        ? __VdfgRegularize_h6e95ff9d_0_2
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                         ? __VdfgRegularize_h6e95ff9d_0_2
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                          ? __VdfgRegularize_h6e95ff9d_0_2
                                                          : 
                                                         (__VdfgRegularize_h6e95ff9d_0_2 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                       >> 6U)))))))
                                                  : 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                  >> 5U))))) 
                                                  & (((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                       ? __VdfgRegularize_h6e95ff9d_0_3
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                        ? __VdfgRegularize_h6e95ff9d_0_3
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                         ? __VdfgRegularize_h6e95ff9d_0_3
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                          ? __VdfgRegularize_h6e95ff9d_0_3
                                                          : 
                                                         (__VdfgRegularize_h6e95ff9d_0_3 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                       >> 6U))))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_bypass_o 
        = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we) 
            & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[772U])
            ? (0xffff0888U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata)
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_q);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mie_bypass 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_bypass_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mie_bypass_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mie_bypass;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mie_bypass_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mie_bypass_i;
}

void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__reverse_result;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        if ((0x00000010U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            if ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                    = ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                        ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result)
                        : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_div);
            }
        } else if ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                = ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                    ? ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                        ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                            ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                               ^ vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i)
                            : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                               | vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i))
                        : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result
                            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bset_result))
                    : ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                        ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bclr_result
                            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result)
                        : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result));
        } else if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
            = ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result
                : ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                    ? ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                        ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clip_result
                        : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                            ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i)
                            : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_clpx_i)
                                ? ((0xffff0000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result) 
                                   | (0x0000ffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i))
                                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax)))
                    : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax));
    } else if ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                          >> 1U)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                    = ((0x0000ffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o) 
                       | (((0x0000ff00U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                          >> 3U)))) 
                                           << 8U)) 
                           | (0x000000ffU & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                           >> 2U)))))) 
                          << 0x00000010U));
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                    = ((0xffff0000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o) 
                       | ((0x0000ff00U & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                         >> 1U)))) 
                                          << 8U)) | 
                          (0x000000ffU & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
            }
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                = ((0x0000ffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o) 
                   | (((0x0000ff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                      >> 3U)))) 
                                       << 8U)) | (0x000000ffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                                   >> 2U)))))) 
                      << 0x00000010U));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                = ((0xffff0000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o) 
                   | ((0x0000ff00U & ((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                     >> 1U)))) 
                                      << 8U)) | (0x000000ffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
        }
    } else if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__comparison_result_o;
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
            = ((0x0000ffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o) 
               | (((0x0000ff00U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                >> 3U)))) 
                                   << 8U)) | (0x000000ffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                               >> 2U)))))) 
                  << 0x00000010U));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
            = ((0xffff0000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o) 
               | ((0x0000ff00U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                               >> 1U)))) 
                                  << 8U)) | (0x000000ffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o;
}

void Vtop___024root___nba_comb__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x00000800U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
            ? ((0x00000400U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                ? ((0x00000200U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                    ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                            >> 3U))))) 
                       & ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                               >> 2U))))) 
                          & (((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                               ? (4U & (- (IData)((1U 
                                                   & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))
                               : (0x00000602U & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))) 
                             & (- (IData)((IData)((0x0110U 
                                                   == 
                                                   (0x01f0U 
                                                    & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))))
                    : (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 
                       & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 8U)))))))
                : (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 
                   & (- (IData)((3U == (3U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 8U)))))))
            : ((0x00000400U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                ? (((0x00000010U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                     ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                             >> 2U))))) 
                        & (((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                             ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                 ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q
                                 : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q)
                             : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                 ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                                 : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)) 
                           & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 3U)))))))
                     : (((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                          ? (4U & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                   >> 1U))))) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))
                          : ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                              ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_rdata 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))
                              : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_rdata 
                                 & (- (IData)((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))) 
                        & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                               >> 3U))))))) 
                   & (- (IData)((IData)((0x03a0U == 
                                         (0x03e0U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))
                : ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                        >> 7U))))) 
                   & (((0x00000040U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                        ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                >> 4U))))) 
                           & ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                   >> 3U))))) 
                              & (((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                   ? ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))) 
                                      & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mip 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                           >> 1U)))))))
                                   : ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                       ? (((0x80000000U 
                                            & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q) 
                                               << 0x0000001aU)) 
                                           | (0x0000001fU 
                                              & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q))) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))
                                       : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                           ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                           : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q))) 
                                 & (- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                   >> 5U))))))))
                        : ((0x00000020U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                            ? ((0x00000010U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5
                                : ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                    ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5
                                    : ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5
                                        : ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))
                                            : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))))))
                            : ((- (IData)((1U & (~ 
                                                 ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 3U))))) 
                               & (((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                    ? (((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                         ? ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
                                             << 8U) 
                                            | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q))
                                         : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_q) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                         >> 1U))))))
                                    : (((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                         ? 0x40001104U
                                         : ((0x00020000U 
                                             & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                << 0x00000011U)) 
                                            | ((0x00001800U 
                                                & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                   << 0x0000000aU)) 
                                               | ((((8U 
                                                     & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                          >> 4U))) 
                                                   << 4U) 
                                                  | ((8U 
                                                      & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                           >> 6U))))))) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                         >> 1U))))))) 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                    >> 4U))))))))) 
                      & (- (IData)((3U == (3U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                 >> 8U)))))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mie_bypass_i 
           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o 
        = (0x0000001fU & (((0x40000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                            ? 0x1eU : ((0x20000000U 
                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                        ? 0x1dU : (
                                                   (0x10000000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1cU
                                                    : 
                                                   ((0x08000000U 
                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x1bU
                                                     : 
                                                    ((0x04000000U 
                                                      & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x1aU
                                                      : 
                                                     ((0x02000000U 
                                                       & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x19U
                                                       : 
                                                      ((0x01000000U 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x18U
                                                        : 
                                                       ((0x00800000U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x17U
                                                         : 
                                                        ((0x00400000U 
                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x16U
                                                          : 
                                                         ((0x00200000U 
                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x15U
                                                           : 
                                                          ((0x00100000U 
                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x14U
                                                            : 
                                                           ((0x00080000U 
                                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x13U
                                                             : 
                                                            ((0x00040000U 
                                                              & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x12U
                                                              : 
                                                             ((0x00020000U 
                                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00010000U 
                                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 0x10U
                                                                : 
                                                               ((0x00008000U 
                                                                 & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                 ? 0x0fU
                                                                 : 
                                                                ((0x00004000U 
                                                                  & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                  ? 0x0eU
                                                                  : 
                                                                 ((0x00002000U 
                                                                   & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                   ? 0x0dU
                                                                   : 
                                                                  ((0x00001000U 
                                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                    ? 0x0cU
                                                                    : 
                                                                   ((0x00000800U 
                                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                     ? 0x0bU
                                                                     : 
                                                                    ((8U 
                                                                      & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                      ? 3U
                                                                      : 
                                                                     ((0x00000080U 
                                                                       & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                       ? 7U
                                                                       : 
                                                                      ((0x00000400U 
                                                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                        ? 0x0aU
                                                                        : 
                                                                       ((4U 
                                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                         ? 2U
                                                                         : 
                                                                        ((0x00000040U 
                                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                          ? 6U
                                                                          : 
                                                                         ((0x00000200U 
                                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                           ? 9U
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                            ? 1U
                                                                            : 
                                                                           ((0x00000020U 
                                                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                             ? 5U
                                                                             : 
                                                                            ((0x00000100U 
                                                                              & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                              ? 8U
                                                                              : 
                                                                             (((0x00000010U 
                                                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                                ? 4U
                                                                                : 7U) 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (~ vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)))))))))))))))))))))))))))))))))) 
                          | (- (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
                                        >> 0x0000001fU)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__global_irq_enable) 
           & (0U != vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
            ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
                ? ((~ vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i) 
                   & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o)
                : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i 
                   | vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o))
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_rdata 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q;
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_we) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q;
    if ((1U & (~ ((((((((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)) 
                        | (2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                       | (3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                      | (0x0300U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                     | (0x0304U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                    | (0x0305U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                   | (0x0340U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                  | (0x0341U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))) {
        if ((0x0342U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x07b0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x07b1U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x07b2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
                                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                        }
                    }
                    if ((0x07b2U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x07b3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
                                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_q;
    if (((((((((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)) 
               | (2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
              | (3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
             | (0x0300U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
            | (0x0304U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
           | (0x0305U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
          | (0x0340U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
         | (0x0341U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))) {
        if ((1U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((2U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((3U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x0300U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x0304U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((0x0305U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if ((0x0340U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
                                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                                    }
                                }
                            }
                            if ((0x0305U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
                                        = (1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                        if ((0x0304U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
                                    = (0xffff0888U 
                                       & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[10U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[11U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[12U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[13U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[14U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[15U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[16U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[17U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[18U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[19U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[20U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[21U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[22U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[23U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[24U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[25U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[26U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[27U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[28U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[29U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[30U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[31U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U];
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WI(1024, 32, (0x000003e0U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                  << 5U)), vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__csr_rdata_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_rdata;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_req_ctrl_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl;
}

void Vtop___024root___nba_comb__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
        if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext 
                = ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                    << 8U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                              >> 0x00000018U));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = ((((- (IData)((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                     & ((- (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                    >> 0x0000001fU))) 
                        | (- (IData)((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                    << 8U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                              >> 0x00000018U));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = ((((- (IData)((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                     & ((- (IData)((1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                          >> 7U)))) 
                        | (- (IData)((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                    << 0x00000010U) | ((0x0000ff00U 
                                        & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                           << 8U)) 
                                       | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 0x00000018U)));
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext 
                = ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                    << 0x00000010U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                       >> 0x00000010U));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = ((((- (IData)((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                     & ((- (IData)((1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                          >> 0x00000017U)))) 
                        | (- (IData)((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                    << 8U) | (0x000000ffU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                             >> 0x00000010U)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = ((((- (IData)((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                     & ((- (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                    >> 0x0000001fU))) 
                        | (- (IData)((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                    << 0x00000010U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                       >> 0x00000010U));
        }
    } else if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext 
            = ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                << 0x00000018U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                   >> 8U));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = ((((- (IData)((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                 & ((- (IData)((1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                      >> 0x0000000fU)))) 
                    | (- (IData)((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                << 8U) | (0x000000ffU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                         >> 8U)));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = ((((- (IData)((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                 & ((- (IData)((1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                      >> 0x00000017U)))) 
                    | (- (IData)((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                << 0x00000010U) | (0x0000ffffU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                                  >> 8U)));
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = (((((- (IData)((1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                    >> 7U)))) | (- (IData)(
                                                           (2U 
                                                            == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                 & (- (IData)((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                << 8U) | (0x000000ffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = (((((- (IData)((1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                    >> 0x0000000fU)))) 
                  | (- (IData)((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                 & (- (IData)((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata));
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext
            : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext
                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext));
}

void Vtop___024root___nba_comb__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_insn_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 0U;
    if ((0x00000040U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((0x00000010U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0U == (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    if ((0U == ((0x000003e0U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000000aU)) 
                                                | (0x0000001fU 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x14U))) {
                                            if ((1U 
                                                 != 
                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x0302U 
                                                     != 
                                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x14U))) {
                                                    if (
                                                        (2U 
                                                         != 
                                                         (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                          >> 0x14U))) {
                                                        if (
                                                            (0x07b2U 
                                                             == 
                                                             (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                              >> 0x14U))) {
                                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o 
                                                                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                } else if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                } else if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0U == (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                          >> 0x0cU)))) {
                            if ((0U == ((0x000003e0U 
                                         & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                            >> 0x0000000aU)) 
                                        | (0x0000001fU 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 7U))))) {
                                if ((0U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                            >> 0x14U))) {
                                    if ((1U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x14U))) {
                                        if ((0x0302U 
                                             == (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                 >> 0x14U))) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 0U;
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o 
                                                = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o)));
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x14U))) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_insn_o 
                                                = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o)));
                                        } else if (
                                                   (0x07b2U 
                                                    == 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x14U))) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o 
                                                = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i)));
                                        } else if (
                                                   (0x0105U 
                                                    != 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x14U))) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            }
                        } else {
                            if ((1U == (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0cU)))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x0cU)))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0fU)))
                                        ? 0U : 2U);
                            } else if ((3U == (3U & 
                                               (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x0cU)))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0fU)))
                                        ? 0U : 3U);
                            } else {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if (((3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x1cU)) 
                                 > (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__current_priv_lvl_i))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                 >> 0x0000001fU)) {
                                if ((0x40000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x20000000U 
                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x10000000U 
                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0x08000000U 
                                                 & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x04000000U 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x01000000U 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                if (
                                                    (0x00800000U 
                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0U 
                                                                != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00200000U 
                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00100000U 
                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else {
                                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                }
                                            } else {
                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else if ((0x10000000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x04000000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x02000000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x01000000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00800000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00400000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00100000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0U 
                                                != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                    }
                                } else if ((0x20000000U 
                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x04000000U 
                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x02000000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x40000000U 
                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0x20000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x08000000U 
                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0x04000000U 
                                                 & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                if (
                                                    (0x01000000U 
                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00800000U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00400000U 
                                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                                    } else {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00800000U 
                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00400000U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                }
                                            } else {
                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x20000000U 
                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0x10000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x08000000U 
                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x04000000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x02000000U 
                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0x00200000U 
                                                 & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x00100000U 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x00000014U)))) {
                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x02000000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x01000000U 
                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0x00100000U 
                                                 & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                            } else {
                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x01000000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00800000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00400000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x00200000U 
                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x00000014U)))) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o 
                                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & (~ vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    } else {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0U != (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                          >> 0x0cU)))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    } else {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 0x0000000eU)))) {
                        if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else if ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000010U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            } else if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & (~ vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((3U == (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                >> 0x1eU))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else if ((2U == (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                       >> 0x1eU))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else if ((0x40000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0x20000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x10000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x08000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x04000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x02000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            } else if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                 >> 0x0000000cU)))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            }
                        } else if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    } else if ((0x20000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else if ((0x10000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else if ((0x08000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else if ((0x04000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        } else if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        } else if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((0U != (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 0x0cU)))) {
                    if ((1U != (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                      >> 0x0cU)))) {
                        if ((2U != (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                          >> 0x0cU)))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    }
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else if ((0x00000010U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        } else if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & (~ vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 0x0000000dU)))) {
                        if ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((0U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                               >> 0x19U))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                     >> 0x0000000dU)))) {
                    if ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                    >> 0x19U))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    }
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((0U != (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                      >> 0x0cU)))) {
                        if ((1U != (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                          >> 0x0cU)))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
    } else if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            }
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
    }
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_c_insn_i) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_status 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_insn_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_status;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec;
}

void Vtop___024root___nba_comb__TOP__31(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    __VdfgRegularize_h6e95ff9d_0_13 = 0;
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_finish_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rvalid_i) 
           & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i)) 
              & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_q)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_wb_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
           | (0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.tb_core_debug2__DOT__data_be = 0x0fU;
    vlSelfRef.tb_core_debug2__DOT__data_we = 0U;
    vlSelfRef.tb_core_debug2__DOT__data_addr = 0U;
    vlSelfRef.tb_core_debug2__DOT__data_wdata = 0U;
    vlSelfRef.tb_core_debug2__DOT__data_req = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ex_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid)
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__p_elw_finish 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_finish_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__lsu_ready_wb 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_wb_o;
    if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__axi_state_q))) {
        if (((IData)(vlSelfRef.tb_core_debug2__DOT__axi_awvalid) 
             & (IData)(vlSelfRef.tb_core_debug2__DOT__axi_wvalid))) {
            vlSelfRef.tb_core_debug2__DOT__data_be 
                = vlSelfRef.tb_core_debug2__DOT__axi_wstrb;
            vlSelfRef.tb_core_debug2__DOT__data_we = 1U;
            vlSelfRef.tb_core_debug2__DOT__data_addr 
                = vlSelfRef.tb_core_debug2__DOT__axi_awaddr;
            vlSelfRef.tb_core_debug2__DOT__data_wdata 
                = vlSelfRef.tb_core_debug2__DOT__axi_wdata;
            vlSelfRef.tb_core_debug2__DOT__data_req = 1U;
        } else if (vlSelfRef.tb_core_debug2__DOT__axi_arvalid) {
            vlSelfRef.tb_core_debug2__DOT__data_we = 0U;
            vlSelfRef.tb_core_debug2__DOT__data_addr 
                = vlSelfRef.tb_core_debug2__DOT__axi_araddr;
            vlSelfRef.tb_core_debug2__DOT__data_req = 1U;
        }
    }
    vlSelfRef.tb_core_debug2__DOT__dm_slave_aid = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__data_req)));
    vlSelfRef.tb_core_debug2__DOT__dm_slave_we = ((IData)(vlSelfRef.tb_core_debug2__DOT__data_we) 
                                                  & (IData)(vlSelfRef.tb_core_debug2__DOT__data_req));
    vlSelfRef.tb_core_debug2__DOT__dm_slave_be = (0x0000000fU 
                                                  & ((IData)(vlSelfRef.tb_core_debug2__DOT__data_be) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__data_req)))))));
    vlSelfRef.tb_core_debug2__DOT__dm_slave_wdata = 
        (vlSelfRef.tb_core_debug2__DOT__data_wdata 
         & (- (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__data_req))));
    vlSelfRef.tb_core_debug2__DOT__data_gnt = vlSelfRef.tb_core_debug2__DOT__data_req;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__lsu_rdata 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__p_elw_finish_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__p_elw_finish;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__wb_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__lsu_ready_wb;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__wb_ready_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__lsu_ready_wb;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__wb_ready_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__lsu_ready_wb;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_aid_i 
        = vlSelfRef.tb_core_debug2__DOT__dm_slave_aid;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_we_i 
        = vlSelfRef.tb_core_debug2__DOT__dm_slave_we;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_be_i 
        = vlSelfRef.tb_core_debug2__DOT__dm_slave_be;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_wdata_i 
        = vlSelfRef.tb_core_debug2__DOT__dm_slave_wdata;
    vlSelfRef.tb_core_debug2__DOT__axi_wready = 0U;
    vlSelfRef.tb_core_debug2__DOT__axi_awready = 0U;
    vlSelfRef.tb_core_debug2__DOT__axi_arready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__axi_state_q))) {
        if (((IData)(vlSelfRef.tb_core_debug2__DOT__axi_awvalid) 
             & (IData)(vlSelfRef.tb_core_debug2__DOT__axi_wvalid))) {
            if (vlSelfRef.tb_core_debug2__DOT__data_gnt) {
                vlSelfRef.tb_core_debug2__DOT__axi_wready = 1U;
                vlSelfRef.tb_core_debug2__DOT__axi_awready = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__axi_awvalid) 
                      & (IData)(vlSelfRef.tb_core_debug2__DOT__axi_wvalid))))) {
            if (vlSelfRef.tb_core_debug2__DOT__axi_arvalid) {
                if (vlSelfRef.tb_core_debug2__DOT__data_gnt) {
                    vlSelfRef.tb_core_debug2__DOT__axi_arready = 1U;
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__lsu_rdata_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__lsu_rdata;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wb_ready_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__wb_ready_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_we_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_we_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_be_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_be_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_wdata_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_wdata_i;
    vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_wready_i 
        = vlSelfRef.tb_core_debug2__DOT__axi_wready;
    vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_awready_i 
        = vlSelfRef.tb_core_debug2__DOT__axi_awready;
    vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_arready_i 
        = vlSelfRef.tb_core_debug2__DOT__axi_arready;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_wdata_wb_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__lsu_rdata_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__we_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_we_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__be_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_be_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__wdata_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_wdata_i;
    vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_gnt_o 
        = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__outstanding)) 
           & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_we_i)
               ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_awready_i) 
                  & (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_wready_i))
               : (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_arready_i)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_wdata 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_wdata_wb_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__wdata_hartsel 
        = (1U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__wdata_i);
    vlSelfRef.tb_core_debug2__DOT__dbg_data_gnt = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_gnt_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_wdata;
    vlSelfRef.tb_core_debug2__DOT__data_dbg_gnt_o = vlSelfRef.tb_core_debug2__DOT__dbg_data_gnt;
    vlSelfRef.tb_core_debug2__DOT__core_data_gnt = 
        ((IData)(vlSelfRef.tb_core_debug2__DOT__is_dbg_data)
          ? (IData)(vlSelfRef.tb_core_debug2__DOT__dbg_data_gnt)
          : (IData)(vlSelfRef.tb_core_debug2__DOT__stub_gnt));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i;
    vlSelfRef.data_dbg_gnt_o = vlSelfRef.tb_core_debug2__DOT__data_dbg_gnt_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_gnt_i 
        = vlSelfRef.tb_core_debug2__DOT__core_data_gnt;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_gnt_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_gnt_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_gnt_pmp 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_gnt_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_gnt_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_gnt_pmp;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_gnt_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_gnt_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_gnt_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_ready 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o;
    __VdfgRegularize_h6e95ff9d_0_13 = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
                                       & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_ready));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__count_up 
        = __VdfgRegularize_h6e95ff9d_0_13;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_ex_o 
        = (1U & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i)) 
                 | ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                     ? (IData)(__VdfgRegularize_h6e95ff9d_0_13)
                     : ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                         ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
                            & (IData)(__VdfgRegularize_h6e95ff9d_0_13))
                         : (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)
                  ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__count_down)
                      ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)))
                  : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q) 
                     - (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__count_down))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_ex_o));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__lsu_ready_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__lsu_ready_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__lsu_ready_ex;
}

void Vtop___024root___nba_comb__TOP__34(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i;
    if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i;
    } else if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
            = ((3U == (3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h))
                : ((0xffff0000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i) 
                   | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)));
    } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i;
    } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
            = ((3U == (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                             >> 0x10U))) ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i
                : ((0xffff0000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i) 
                   | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                      >> 0x10U)));
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o = 0U;
    if ((0U == (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))) {
        if ((0x00008000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                }
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x00842023U | (((((2U & 
                                              (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 4U)) 
                                             | (1U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x00700000U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | ((0x00000c00U 
                                                 & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i) 
                                                | (0x00000200U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      << 3U))))));
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
        } else if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x00042403U | ((((0x00000100U 
                                         & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 3U)) 
                                        | ((0x000000e0U 
                                            & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 5U)) 
                                           | (0x00000010U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 >> 2U)))) 
                                       << 0x00000012U) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             << 8U)) 
                                         | (0x00000380U 
                                            & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 5U)))));
            }
        } else {
            if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            } else if ((0U == (0x000000ffU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 5U)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x00010413U | ((((0x000003c0U 
                                         & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 1U)) 
                                        | ((((6U & 
                                              (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 0x0000000aU)) 
                                             | (1U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 5U))) 
                                            << 3U) 
                                           | (4U & 
                                              (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 4U)))) 
                                       << 0x00000014U) 
                                      | (0x00000380U 
                                         & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 5U))));
            }
        }
    } else if ((1U == (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))) {
        if ((0x00008000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000eU)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    if ((0x00000800U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                        if ((0x00000400U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                            if ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                            }
                        }
                    } else if ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                    }
                }
            }
            if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x00040063U | ((((0x00003c00U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                           >> 0x0cU)))) 
                                            << 0x0000000aU)) 
                                        | ((0x00000300U 
                                            & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 3U)) 
                                           | (0x00000080U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 5U)))) 
                                       << 0x00000012U) 
                                      | ((((0x000000e0U 
                                            & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 2U)) 
                                           | ((4U & 
                                               (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 0x0000000bU)) 
                                              | (3U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 0x0aU)))) 
                                          << 0x0000000aU) 
                                         | ((0x00000300U 
                                             & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 5U)) 
                                            | (0x00000080U 
                                               & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  >> 5U))))));
            } else if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x6fU | (((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0x00000400U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                  >> 0x0cU)))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                            = ((0x00000040U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                ? ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))))
                                : ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))));
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                        ? (0x00045413U | ((((0x00001000U 
                                             & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 2U)) 
                                            | (0x0000007cU 
                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) 
                                           << 0x00000012U) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                        : (0x00045413U | ((((0x00001000U 
                                             & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 2U)) 
                                            | (0x0000007cU 
                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) 
                                           << 0x00000012U) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
            }
        } else if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0U == ((0x00000020U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 2U))))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                }
                if ((0U != ((0x00000020U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 2U))))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = ((2U == (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  >> 7U)))
                            ? (0x00010113U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                              >> 0x0cU)))) 
                                               << 0x0000001dU) 
                                              | ((((6U 
                                                    & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                         >> 5U))) 
                                                  << 0x0000001aU) 
                                                 | ((0x02000000U 
                                                     & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        << 0x00000017U)) 
                                                    | (0x01000000U 
                                                       & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                          << 0x00000012U))))))
                            : (0x37U | (((- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 0x0cU)))) 
                                         << 0x00000011U) 
                                        | ((0x0001f000U 
                                            & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 0x0000000aU)) 
                                           | (0x00000f80U 
                                              & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0cU)))) 
                                 << 0x0000001aU) | 
                                ((0x02000000U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 0x0000000dU)) 
                                 | ((0x01f00000U & 
                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                      << 0x00000012U)) 
                                    | (0x00000f80U 
                                       & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
            }
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                = ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                    ? (0x6fU | (((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
        }
    } else if ((2U == (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))) {
        if ((0x00008000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                }
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x00012023U | ((((0x000000c0U 
                                             & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 1U)) 
                                            | ((0x00000020U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 2U)))) 
                                           << 0x00000014U) 
                                          | (0x00000e00U 
                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)));
                }
            } else {
                if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                } else if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                     >> 0x0cU)))) {
                    if ((0U == (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 2U)))) {
                        if ((0U == (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                            ? ((0U == (0x0000001fU 
                                       & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 2U))) ? 
                               ((0U == (0x0000001fU 
                                        & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                           >> 7U)))
                                 ? 0x00100073U : (0x00e7U 
                                                  | (0x000f8000U 
                                                     & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        << 8U))))
                                : (0x33U | ((0x01f00000U 
                                             & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 0x00000012U)) 
                                            | ((0x000f8000U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   << 8U)) 
                                               | (0x00000f80U 
                                                  & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 2U))) ? 
                               (0x0067U | (0x000f8000U 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 8U)))
                                : (0x33U | ((0x01f00000U 
                                             & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 0x00000012U)) 
                                            | (0x00000f80U 
                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
                }
            }
        } else if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            } else if ((0U == (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 7U)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x00012003U | ((((0x000000c0U 
                                         & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 4U)) 
                                        | ((0x00000020U 
                                            & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 7U)) 
                                           | (0x0000001cU 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 >> 2U)))) 
                                       << 0x00000014U) 
                                      | (0x00000f80U 
                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)));
            }
        } else {
            if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            } else if ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                        ? (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                        : (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
            }
        }
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__is_compressed_o 
        = (3U != (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_compressed_int 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__is_compressed_o;
}

extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_hef056083_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h4ab95aae_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_hacbf9384_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h7b800239_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_hcc855e49_0;

void Vtop___024root___nba_comb__TOP__38(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__38\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__ex_valid_o 
        = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i) 
            | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i) 
               | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__lsu_en_i) 
                  | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__csr_access_i)))) 
           & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready) 
              & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_ready) 
                 & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__lsu_ready_ex_i) 
                    & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__wb_ready_i)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__ex_ready_o 
        = ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready) 
               & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_ready)) 
              & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__lsu_ready_ex_i)) 
             & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__wb_ready_i)) 
            & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__wb_contention))) 
           | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__branch_in_ex_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__ex_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__ex_ready_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ex_ready_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__ex_ready_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_ready 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__ex_ready_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ex_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_valid;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
    if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (((6U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)) 
             & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__enable_i))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 2U;
    } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 3U;
    } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 4U;
    } else if ((4U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 0U;
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutRdy_SI 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ex_ready_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_ready;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ex_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ex_valid_i;
    vlSelfRef.__VdfgSynthAssign___Vtableidx2_h6e95ff9d_0_0 
        = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutRdy_SI) 
            << 5U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN 
        = Vtop__ConstPool__TABLE_hef056083_0[vlSelfRef.__VdfgSynthAssign___Vtableidx2_h6e95ff9d_0_0];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S 
        = Vtop__ConstPool__TABLE_h4ab95aae_0[vlSelfRef.__VdfgSynthAssign___Vtableidx2_h6e95ff9d_0_0];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S 
        = Vtop__ConstPool__TABLE_hacbf9384_0[vlSelfRef.__VdfgSynthAssign___Vtableidx2_h6e95ff9d_0_0];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S 
        = Vtop__ConstPool__TABLE_h7b800239_0[vlSelfRef.__VdfgSynthAssign___Vtableidx2_h6e95ff9d_0_0];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S 
        = Vtop__ConstPool__TABLE_hcc855e49_0[vlSelfRef.__VdfgSynthAssign___Vtableidx2_h6e95ff9d_0_0];
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpCode_SI) 
                     >> 1U));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = (((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBIsZero_SI)) 
                | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpCode_SI) 
                   >> 1U)) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpA_DI;
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN 
        = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S)
             ? (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                 << 0x0000001fU) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                    >> 1U)) : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__PmSel_S 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21)) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddOut_D 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__PmSel_S)
            ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
               + vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D)
            : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
               - vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S)
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddOut_D
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP);
}

void Vtop___024root___nba_comb__TOP__40(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__40\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_wfi_no_sleep_o 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41) 
           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_wfi_no_sleep_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active 
        = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_wfi_no_sleep_o)) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_wfi_no_sleep_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 3U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
    if ((0x00000040U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((0x00000010U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0U == (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    if ((0U == ((0x000003e0U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000000aU)) 
                                                | (0x0000001fU 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x14U))) {
                                            if ((1U 
                                                 != 
                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x0302U 
                                                     != 
                                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x14U))) {
                                                    if (
                                                        (2U 
                                                         != 
                                                         (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                          >> 0x14U))) {
                                                        if (
                                                            (0x07b2U 
                                                             != 
                                                             (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                              >> 0x14U))) {
                                                            if (
                                                                (0x0105U 
                                                                 == 
                                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                  >> 0x14U))) {
                                                                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_wfi_no_sleep_i) {
                                                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                                                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                                                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                = ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                    ? ((0x00001000U 
                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                        ? 0x0bU : 1U)
                                    : ((0x00001000U 
                                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                        ? 0x0aU : 0U));
                        } else if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                             >> 0x0000000dU)))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                = ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                    ? 0x0dU : 0x0cU);
                        }
                    }
                }
                if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 3U;
                        }
                    }
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000010U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 3U)))) {
                if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 2U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((3U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                    >> 0x1eU))) {
                            if ((2U != (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x1eU))) {
                                if ((0x40000000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0000001dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000001cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0000001bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x0000001aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                             >> 0x00000019U)))) {
                                                        if (
                                                            (0x00004000U 
                                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                     >> 0x0000000dU)))) {
                                                                if (
                                                                    (0x00001000U 
                                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x24U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                        >> 0x0000000dU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                     >> 0x0000000cU)))) {
                                                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x19U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                   >> 0x0000001dU)))) {
                                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0000001cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000001bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0000001aU)))) {
                                                if (
                                                    (0x02000000U 
                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00004000U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                                            = 
                                                            ((0x00002000U 
                                                              & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                              ? 
                                                             ((0x00001000U 
                                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                               ? 0x32U
                                                               : 0x33U)
                                                              : 
                                                             ((0x00001000U 
                                                               & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                               ? 0x30U
                                                               : 0x31U));
                                                    }
                                                } else {
                                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                                        = 
                                                        ((0x00004000U 
                                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                          ? 
                                                         ((0x00002000U 
                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                            ? 0x15U
                                                            : 0x2eU)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                            ? 0x25U
                                                            : 0x2fU))
                                                          : 
                                                         ((0x00002000U 
                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                            ? 3U
                                                            : 2U)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                            ? 0x27U
                                                            : 0x18U)));
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0000001eU)))) {
                                    if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0000001dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000001cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0000001bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x0000001aU)))) {
                                                    if (
                                                        (0x02000000U 
                                                         & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        if (
                                                            (0x00004000U 
                                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 3U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 2U)))) {
                if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 1U;
                    }
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                      >> 3U)))) {
            if ((4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 2U;
                    }
                }
            } else if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((0x00004000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                = ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                    ? 0x15U : 0x2eU);
                        } else if ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((0U == (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x19U))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x25U;
                            } else if ((0x20U == (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x19U))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x24U;
                            }
                        } else {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x2fU;
                        }
                    } else {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                            = ((0x00002000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                ? ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                    ? 3U : 2U) : ((0x00001000U 
                                                   & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                   ? 0x27U
                                                   : 0x18U));
                    }
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                }
            }
            if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                         >> 3U)))) {
        if ((1U & (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                      >> 2U)))) {
            if ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b 
        = ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type
                : ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_bi_type
                        : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)
                    : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_clip_type 
                           >> 1U) : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffle_type)))
            : ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vu_type
                        : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vs_type)
                    : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type
                        : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s2_type))
                : ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_compressed_i)
                            ? 2U : 4U) : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_u_type)
                    : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s_type
                        : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type))));
}

extern const VlUnpacked<CData/*2:0*/, 512> Vtop__ConstPool__TABLE_hbc1dcc12_0;

void Vtop___024root___nba_comb__TOP__45(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__45\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o = 1U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_if_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_mret_id_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_uret_id_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_dret_id_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 1U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_irq_sec_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_busy_o = 1U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_ack_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec 
        = ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i)) 
           | (1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id 
        = (3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode 
        = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreakm_i) 
            & (3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__current_priv_lvl_i))) 
           | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreaku_i) 
              & (0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__current_priv_lvl_i))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_csr_save_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o = 1U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__perf_pipeline_stall_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_mask_o = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
    } else if ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 3U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                    }
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0dU;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__perf_pipeline_stall_o 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                           | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i)) 
                          | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                             & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i))) 
                         | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i)) 
                        | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q))
                        ? 0x0bU : 0x0cU);
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 2U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_csr_save_o = 1U;
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o = 3U;
                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o = 4U;
                }
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_if_o = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 2U;
                if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_csr_save_o = 1U;
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o = 2U;
                    } else if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                                & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o = 1U;
                    } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o = 3U;
                    }
                }
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_dec_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o 
                        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 5U);
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 3U;
                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_dec_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o 
                        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 6U);
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 3U;
                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_dec_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 7U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 0U;
                }
                if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_dec_i) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_dec_i) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_dec_i))))))) {
                    if ((0U != (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_dec_i) 
                                 << 2U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_dec_i) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_dec_i))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:1122: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_core_debug2.u_core.core_i.id_stage_i.controller_i", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/Proje/Core/rtl/cv32e40p_controller.sv", 1122, "");
                        }
                    }
                }
                if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                     & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o 
                    = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_we_ex_i)
                        ? 5U : 7U);
            } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_fetch_failed_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o 
                    = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o = 1U;
            } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o 
                    = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                     & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                }
            } else {
                if (((((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i) 
                           | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i)) 
                          | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i)) 
                         | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                        | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i)) 
                       | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i)) 
                      | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i)) 
                     | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i))) {
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 0U;
                        if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                             & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                        }
                    } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o 
                            = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 3U : 0U);
                        if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                             & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                        }
                    } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_mret_id_o 
                            = (1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_uret_id_o 
                            = (1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_dret_id_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i)))) {
                        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i) {
                            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                            } else {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
                            }
                        } else {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 1U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                        }
                    }
                }
                if ((1U & (~ VL_ONEHOT_I(((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i))) 
                                           << 4U) | 
                                          ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)))))))) {
                    if ((0U != ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i) 
                                    << 3U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i) 
                                      << 1U) | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i))) 
                                 << 4U) | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:1054: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_core_debug2.u_core.core_i.id_stage_i.controller_i", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/Proje/Core/rtl/cv32e40p_controller.sv", 1054, "");
                        }
                    }
                }
            }
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ex_valid_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o 
                        = (1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o = 2U;
                } else {
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o = 3U;
                    } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o 
                            = (1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o 
                            = ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__current_priv_lvl_i))
                                ? 8U : 0x0bU);
                    }
                    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)))))) {
                        if ((0U != (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) 
                                     << 1U) | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:932: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_core_debug2.u_core.core_i.id_stage_i.controller_i", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000));
                                VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/Proje/Core/rtl/cv32e40p_controller.sv", 932, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 3U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_fetch_failed_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_if_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o 
                        = (1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                    if ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) 
                          | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i)) 
                         & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0dU;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 1U;
                    } else if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_req_ctrl_i) 
                                & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_mask_o = 0U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i;
                        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_sec_ctrl_i) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_irq_sec_o = 1U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_ack_o = 1U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_o 
                                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                        } else {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_irq_sec_o = 0U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_ack_o = 1U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_o 
                                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o 
                                = ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__current_priv_lvl_i))
                                    ? 1U : 0U);
                        }
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o 
                            = (0x00000020U | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i));
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o = 1U;
                    } else {
                        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                    ? 8U : 5U);
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 1U;
                        } else {
                            if (((((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) 
                                       | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)) 
                                      | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active)) 
                                     | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i)) 
                                    | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i)) 
                                   | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                       | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                                      | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i))) 
                                  | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i)) 
                                 | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i))) {
                                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 2U;
                                    if ((1U & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o)) 
                                               & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q))))) {
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = 1U;
                                    }
                                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                            ? 0x0dU
                                            : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)
                                                ? 0x0dU
                                                : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                                    ? 8U
                                                    : 5U)));
                                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else if ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                             | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                                            | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                            ? 7U : 5U);
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                }
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i) 
                                                            << 2U)) 
                                                        | (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                                              | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                                                             | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i)) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec)))))))) {
                                if ((0U != ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i) 
                                                  << 2U)) 
                                              | (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                                    | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                                                   | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i)) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:541: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_core_debug2.u_core.core_i.id_stage_i.controller_i.blk_decode_level1", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000));
                                        VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/Proje/Core/rtl/cv32e40p_controller.sv", 541, "");
                                    }
                                }
                            }
                        }
                        if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                             & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
                                        | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i))
                                        ? 8U : (((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                 & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i))
                                                 ? 8U
                                                 : 
                                                (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                                  | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i))
                                                  ? 8U
                                                  : 
                                                 ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id)
                                                   ? 0x0eU
                                                   : 0x0dU))));
                                if ((1U & (~ VL_ONEHOT_I(
                                                         ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                                               | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                                                              << 2U)) 
                                                          | ((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                               & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
                                                                | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i)))))))) {
                                    if ((0U != ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                                     | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                                                    << 2U)) 
                                                | ((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                     & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
                                                      | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i)))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:677: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_core_debug2.u_core.core_i.id_stage_i.controller_i.blk_decode_level1", 'T',-9
                                                         , '#',64,VL_TIME_UNITED_Q(1000));
                                            VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/Proje/Core/rtl/cv32e40p_controller.sv", 677, "");
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__perf_pipeline_stall_o 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_req_ctrl_i) 
                     & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) 
                           | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i;
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_sec_ctrl_i) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_irq_sec_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_ack_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                    } else {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_irq_sec_o = 0U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_ack_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o 
                            = ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__current_priv_lvl_i))
                                ? 1U : 0U);
                    }
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o 
                        = (0x00000020U | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i));
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_if_o = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_busy_o = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wake_from_sleep_o) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_busy_o = 0U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o = 1U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
        }
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o = 0U;
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fetch_enable_i) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__perf_pipeline_stall 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__perf_pipeline_stall_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__hwlp_mask 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_mask_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_ns 
        = Vtop__ConstPool__TABLE_hbc1dcc12_0[(((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n) 
                                                  << 3U) 
                                                 | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs)))];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_restore_uret_id_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_uret_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_irq_sec_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_irq_sec_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_ack_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_ack_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_id_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_busy_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_busy_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_decoding_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__halt_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_save_if_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_if_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_save_id_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_restore_mret_id_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_mret_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_restore_dret_id_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_dret_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_save_cause_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_csr_save_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_csr_save_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_cause_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_cause_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__halt_if 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr_req_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__exc_pc_mux_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__trap_addr_mux_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__exc_cause_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_mux_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_set_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_restore_uret_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_restore_uret_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_irq_sec 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_irq_sec_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__irq_ack_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_ack_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__irq_id_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ctrl_busy 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_busy_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__is_decoding 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_decoding_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clear_instr_valid_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o) 
           | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__halt_id) 
              | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o 
        = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__halt_id)) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_save_if 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_save_if_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_save_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_save_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_restore_mret_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_restore_mret_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_restore_dret_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_restore_dret_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_save_cause 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_save_cause_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_csr_save 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_csr_save_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_cause 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_cause_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_cause 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_cause_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__halt_if_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__halt_if;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_req_int 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr_req_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__exc_pc_mux_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__exc_pc_mux_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__trap_addr_mux 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__trap_addr_mux_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__exc_cause 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__exc_cause_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__pc_mux_id 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_mux_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__pc_set 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_set_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_uret_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_restore_uret_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_irq_sec_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_irq_sec;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__irq_ack_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__irq_ack_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__irq_id_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__irq_id_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__ctrl_busy_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ctrl_busy;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__is_decoding_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__is_decoding;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__clear_instr_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clear_instr_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__minstret 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o) 
           & ((~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                  | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                     | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))) 
              & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_decoding_o)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_if_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_save_if;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_id_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_save_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_mret_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_restore_mret_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_dret_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_restore_dret_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_cause_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_save_cause;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_csr_save_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_csr_save;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_cause_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_cause;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_cause_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_cause;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__halt_if 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__halt_if_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__req_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_req_int;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__exc_pc_mux_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__exc_pc_mux_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__trap_addr_mux_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__trap_addr_mux;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__m_exc_vec_pc_mux_id 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__exc_cause) 
           & (- (IData)((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mtvec_mode)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__pc_mux_id;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_set_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__pc_set;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__clear_instr_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__clear_instr_valid;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__is_irq 
        = (1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_cause_i) 
                 >> 5U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__halt_if_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__halt_if;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__req_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__req_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__m_exc_vec_pc_mux_id;
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_set_i) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__csr_mtvec_init_o 
            = (0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_req = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_req = 1U;
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__csr_mtvec_init_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_req = 0U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__req_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__req_i;
    if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__trap_addr_mux_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__m_trap_base_addr_i;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i;
    } else if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__trap_addr_mux_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__u_trap_base_addr_i;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__u_exc_vec_pc_mux_i;
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__m_trap_base_addr_i;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__exc_pc 
        = ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__exc_pc_mux_i))
            ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
               << 8U) : ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__exc_pc_mux_i))
                          ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__exc_pc_mux_i))
                              ? 0x00010810U : 0x00010800U)
                          : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__exc_pc_mux_i))
                              ? ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
                                  << 8U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux) 
                                            << 2U))
                              : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
                                 << 8U))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_mtvec_init 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__csr_mtvec_init_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_req;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_req;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mtvec_init_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_mtvec_init;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mtvec_init_i)
            ? 0U : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q);
    if (((((((((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)) 
               | (2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
              | (3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
             | (0x0300U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
            | (0x0304U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
           | (0x0305U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
          | (0x0340U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
         | (0x0341U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))) {
        if ((1U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((2U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((3U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x0300U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x0304U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((0x0305U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
                                        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 8U);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_flush_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_flush 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_flush_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__flush_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_flush;
}
