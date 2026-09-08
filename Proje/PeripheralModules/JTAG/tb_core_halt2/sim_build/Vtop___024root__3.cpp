// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_comb__TOP__47(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__47\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
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
                    if ((0x0300U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                                = (((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))) 
                                     << 5U) | (((2U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                      >> 7U))) 
                                               << 3U)) 
                                   | ((6U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 0x0000000aU)) 
                                      | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x11U))));
                        }
                    } else if ((0x0304U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x0305U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((0x0340U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                                        = (0xfffffffeU 
                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x0342U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = ((0x00000020U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                   >> 0x0000001aU)) 
                   | (0x0000001fU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
        }
    } else if ((0x07b0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xffff7fffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | (0x00008000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xffffc3ffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | (0x00000800U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (0xfffffdffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (0xffffffefU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | ((0xfffffff8U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                         | (4U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
    } else if ((0x07b1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                = (0xfffffffeU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
        }
    }
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_cause_i) {
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_if_i) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__pc_if_i;
        } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_id_i) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i;
        } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_ex_i) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__pc_ex_i;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_ex_i) 
                                   << 2U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_id_i) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_if_i))))))) {
            if ((0U != (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_ex_i) 
                         << 2U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_id_i) 
                                    << 1U) | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_if_i))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_cs_registers.sv:1044: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_core_debug2.u_core.core_i.cs_registers_i.gen_no_pulp_secure_write_logic", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/Proje/Core/rtl/cv32e40p_cs_registers.sv", 1044, "");
                }
            }
        }
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_csr_save_i) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xfffffe3fU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_cause_i) 
                      << 6U));
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0x77U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
                   | (8U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                            >> 2U)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_cause_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x5fU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (6U | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
        }
    } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_mret_i) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0x5fU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
               | (0x00000020U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                 << 2U)));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x0000000eU | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
    } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_dret_i) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__priv_lvl_n 
            = (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q);
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_dret_i) 
                               << 2U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_mret_i) 
                                          << 1U) | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_cause_i))))))) {
        if ((0U != (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_dret_i) 
                     << 2U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_mret_i) 
                                << 1U) | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_cause_i))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_cs_registers.sv:1041: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"tb_core_debug2.u_core.core_i.cs_registers_i.gen_no_pulp_secure_write_logic", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/Proje/Core/rtl/cv32e40p_cs_registers.sv", 1041, "");
            }
        }
    }
}

void Vtop___024root___nba_comb__TOP__63(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__63\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata = 0ULL;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_valid_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__going = 0U;
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clear_resumeack_i) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel))) 
               & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
    }
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__req_i) {
        if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__we_i) {
            if ((0x0100U == (0x00000fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned 
                    = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       | (3U & ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__wdata_hartsel))));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                    = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned) 
                       | (3U & ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__wdata_hartsel))));
            } else if ((0x0108U == (0x00000fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__going = 1U;
            } else if ((0x0110U == (0x00000fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                    = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__wdata_hartsel))) 
                       & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
                    = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned) 
                       | (3U & ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__wdata_hartsel))));
            } else if ((0x0118U == (0x00000fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception = 1U;
            } else if (((0x0380U <= (0x00000fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                        && (0x0387U >= (0x00000fffU 
                                        & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_valid_o = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc = 0U;
                while ((2U > vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc)) {
                    if ((((0x000003ffU & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                          >> 2U)) - (IData)(0x000000e0U)) 
                         == vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc)) {
                        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i = 0U;
                        while (VL_GTS_III(32, 4U, vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
                            if ((1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__be_i) 
                                       >> (3U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)))) {
                                if (VL_LTS_III(32, 3U, vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)) {
                                    if ((2U > ((IData)(1U) 
                                               + vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc))) {
                                        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                            = (((~ 
                                                 (0x00000000000000ffULL 
                                                  << 
                                                  (0x0000003fU 
                                                   & ((((IData)(1U) 
                                                        + vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc) 
                                                       << 5U) 
                                                      + 
                                                      (0x0000001fU 
                                                       & VL_MULS_III(32, (IData)(8U), 
                                                                     (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                                                                      - (IData)(4U)))))))) 
                                                & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                               | ((QData)((IData)(
                                                                  (0x000000ffU 
                                                                   & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__wdata_i 
                                                                      >> 
                                                                      (0x0000001fU 
                                                                       & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)))))) 
                                                  << 
                                                  (0x0000003fU 
                                                   & ((((IData)(1U) 
                                                        + vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc) 
                                                       << 5U) 
                                                      + 
                                                      (0x0000001fU 
                                                       & VL_MULS_III(32, (IData)(8U), 
                                                                     (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                                                                      - (IData)(4U))))))));
                                    }
                                } else {
                                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                        = (((~ (0x00000000000000ffULL 
                                                << 
                                                (0x0000003fU 
                                                 & ((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc 
                                                     << 5U) 
                                                    + 
                                                    (0x0000001fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)))))) 
                                            & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                           | ((QData)((IData)(
                                                              (0x000000ffU 
                                                               & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__wdata_i 
                                                                  >> 
                                                                  (0x0000001fU 
                                                                   & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i)))))) 
                                              << (0x0000003fU 
                                                  & ((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc 
                                                      << 5U) 
                                                     + 
                                                     (0x0000001fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i))))));
                                }
                            }
                            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i 
                                = ((IData)(1U) + vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__unnamedblk2__DOT__i);
                        }
                    }
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc 
                        = ((IData)(1U) + vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__dc);
                }
            }
            if ((1U & (~ VL_ONEHOT_I((((((0x0380U <= 
                                          (0x00000fffU 
                                           & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                         & (0x0387U 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                        << 4U) | ((
                                                   (0x0118U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                                   << 3U) 
                                                  | ((0x0110U 
                                                      == 
                                                      (0x00000fffU 
                                                       & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                                     << 2U))) 
                                      | (((0x0108U 
                                           == (0x00000fffU 
                                               & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                          << 1U) | 
                                         (0x0100U == 
                                          (0x00000fffU 
                                           & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)))))))) {
                if ((0U != (((((0x0380U <= (0x00000fffU 
                                            & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                               & (0x0387U >= (0x00000fffU 
                                              & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                              << 4U) | (((0x0118U == 
                                          (0x00000fffU 
                                           & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                         << 3U) | (
                                                   (0x0110U 
                                                    == 
                                                    (0x00000fffU 
                                                     & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                                   << 2U))) 
                            | (((0x0108U == (0x00000fffU 
                                             & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                << 1U) | (0x0100U == 
                                          (0x00000fffU 
                                           & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: dm_mem.sv:249: Assertion failed in %m: unique case, but multiple matches found for '12'h%X'\n",4, 'M',vlSymsp->name(),"tb_core_debug2.u_dm_obi_top.i_dm_top.i_dm_mem.p_rw_logic", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',12,(0x00000fffU 
                                               & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i));
                        VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/JTAG/vendor/src/dm_mem.sv", 249, "");
                    }
                }
            }
        } else {
            if ((0x0300U == (0x00000fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) {
                if ((1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_wdata_aligned) 
                           >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__wdata_hartsel)))) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d = 0x000000005080006fULL;
                }
                if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmdbusy_o) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                        = ((IData)(((0U == (0xff000000U 
                                            & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_i)) 
                                    & (0x00040000U 
                                       == (0x00060000U 
                                           & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar))))
                            ? 0x000000000600006fULL
                            : 0x000000000380006fULL);
                }
            } else if (((0x0380U <= (0x00000fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                        && (0x0387U >= (0x00000fffU 
                                        & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_i 
                                         >> (0x00000020U 
                                             & (((IData)(1U) 
                                                 + 
                                                 (0x000001ffU 
                                                  & (((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                       >> 3U) 
                                                      - (IData)(0x0070U)) 
                                                     << 1U))) 
                                                << 5U))))) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_i)));
            } else if (((0x0360U <= (0x00000fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                        && (0x037fU >= (0x00000fffU 
                                        & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf
                                        [(((IData)(0x0000003fU) 
                                           + (0x000000c0U 
                                              & (((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                   >> 3U) 
                                                  - (IData)(4U)) 
                                                 << 6U))) 
                                          >> 5U)])) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf
                                                          [
                                                          (6U 
                                                           & (((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                >> 3U) 
                                                               - (IData)(4U)) 
                                                              << 1U))])));
            } else if (((0x0338U <= (0x00000fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                        && (0x035fU >= (0x00000fffU 
                                        & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd
                                        [(((IData)(0x0000003fU) 
                                           + (0x000001c0U 
                                              & (((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                   >> 3U) 
                                                  - (IData)(7U)) 
                                                 << 6U))) 
                                          >> 5U)])) 
                        << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd
                                                          [
                                                          (0x0000000eU 
                                                           & (((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i 
                                                                >> 3U) 
                                                               - (IData)(7U)) 
                                                              << 1U))])));
            } else if (((0x0400U <= (0x00000fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                        && (0x07ffU >= (0x00000fffU 
                                        & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)))) {
                if ((0U == (0x00000fffU & ((0x00000ff8U 
                                            & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i) 
                                           - (IData)(0x0400U))))) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata 
                        = (((~ (0x00000000000000ffULL 
                                << (0x00000038U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel) 
                                                   << 3U)))) 
                            & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata) 
                           | ((QData)((IData)((((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go)))) 
                              << (0x00000038U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel) 
                                                 << 3U))));
                }
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                    = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata;
            }
            if ((1U & (~ VL_ONEHOT_I((((((0x0400U <= 
                                          (0x00000fffU 
                                           & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                         & (0x07ffU 
                                            >= (0x00000fffU 
                                                & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                        << 4U) | ((
                                                   ((0x0338U 
                                                     <= 
                                                     (0x00000fffU 
                                                      & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                                    & (0x035fU 
                                                       >= 
                                                       (0x00000fffU 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                                   << 3U) 
                                                  | (((0x0360U 
                                                       <= 
                                                       (0x00000fffU 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                                      & (0x037fU 
                                                         >= 
                                                         (0x00000fffU 
                                                          & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                                     << 2U))) 
                                      | ((((0x0380U 
                                            <= (0x00000fffU 
                                                & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                           & (0x0387U 
                                              >= (0x00000fffU 
                                                  & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                          << 1U) | 
                                         (0x0300U == 
                                          (0x00000fffU 
                                           & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)))))))) {
                if ((0U != (((((0x0400U <= (0x00000fffU 
                                            & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                               & (0x07ffU >= (0x00000fffU 
                                              & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                              << 4U) | ((((0x0338U 
                                           <= (0x00000fffU 
                                               & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                          & (0x035fU 
                                             >= (0x00000fffU 
                                                 & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                         << 3U) | (
                                                   ((0x0360U 
                                                     <= 
                                                     (0x00000fffU 
                                                      & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                                    & (0x037fU 
                                                       >= 
                                                       (0x00000fffU 
                                                        & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                                   << 2U))) 
                            | ((((0x0380U <= (0x00000fffU 
                                              & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)) 
                                 & (0x0387U >= (0x00000fffU 
                                                & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i))) 
                                << 1U) | (0x0300U == 
                                          (0x00000fffU 
                                           & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: dm_mem.sv:289: Assertion failed in %m: unique case, but multiple matches found for '12'h%X'\n",4, 'M',vlSymsp->name(),"tb_core_debug2.u_dm_obi_top.i_dm_top.i_dm_mem.p_rw_logic", 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',12,(0x00000fffU 
                                               & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i));
                        VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/JTAG/vendor/src/dm_mem.sv", 289, "");
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits;
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ndmreset_i) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned = 0U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d 
        = (1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d 
        = (1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
            }
        } else if ((1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q_aligned) 
                          >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel)))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__going) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 3U;
        }
    } else {
        if ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i) 
              & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q_aligned) 
                 >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel))) 
             & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 1U;
        }
        if ((1U & (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_aligned) 
                      >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel)) 
                     & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q_aligned) 
                           >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel)))) 
                    & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__haltreq_aligned) 
                          >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel)))) 
                   & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q_aligned) 
                      >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel))))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 2U;
        }
    }
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ndmreset_i) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__data_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__data_mem_csrs 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_valid_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i) 
                           & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q_aligned) 
                              >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel))) 
                          & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_valid_o = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_valid_o = 1U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i) 
                           & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q_aligned) 
                              >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel))) 
                          & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_o = 4U;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_o = 2U;
    }
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_valid_o = 1U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_o = 3U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__data_valid;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__data_mem_csrs;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmderror_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmderror 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderror_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmderror_valid;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderror_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmderror;
}

void Vtop___024root___nba_comb__TOP__65(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__65\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (2U | (0xfffffff0U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0x00000080U | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0xffffffdfU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfff1ffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (((4U & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q_aligned) 
                       >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                      << 2U)) | ((2U & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q_aligned) 
                                         >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumeack_aligned) 
                                                      >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))))) 
              << 0x00000011U));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffeffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00010000U & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumeack_aligned) 
                              >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                             << 0x00000010U)));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xffff0fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (((0U < vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o) 
               << 0x0000000fU) | ((0U < vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o) 
                                  << 0x0000000eU)));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffdffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00000200U & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_aligned) 
                              >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                             << 9U)));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffeffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00000100U & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_aligned) 
                              >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                             << 8U)));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffff7ffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00000800U & ((~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_aligned) 
                                 >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                             << 0x0000000bU)));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffbffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00000400U & ((~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_aligned) 
                                 >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                             << 0x0000000aU)));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (2U | (0xfffffff0U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (0x08000000U | (0xe0ffffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xffffefffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) 
              << 0x0000000cU));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xfffff8ffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q) 
              << 8U));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = (0xffff0fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
        = (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_i));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp = 0ULL;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_write_valid_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_read_valid_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_write_valid_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__clear_resumeack_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = 0U;
    if ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_ready_o) 
          & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_valid_i)) 
         & (1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dtm_op)))) {
        if ((((((((((4U <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                    && (5U >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                   | (0x10U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                  | (0x11U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                 | (0x12U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                | (0x16U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
               | (0x18U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
              | (0x17U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
             | (0x1dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
            if (((4U <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                 && (5U >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                   >> 
                                                   (0x00000020U 
                                                    & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__autoexecdata_idx) 
                                                       << 5U)))))) 
                          << 2U));
                if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                    if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__autoexecdata_idx)));
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(((0x10U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                            ? vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q
                                            : ((0x11U 
                                                == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                ? vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus
                                                : (
                                                   (0x12U 
                                                    == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                    ? (IData)(
                                                              (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                               >> 
                                                               (0x0000003fU 
                                                                & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart) 
                                                                   << 5U))))
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                     ? vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                      ? vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q
                                                      : 0U))))))) 
                          << 2U));
            }
        } else if ((((((((((0x20U <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                           && (0x27U >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                          | (0x40U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                         | (0x13U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                        | (0x34U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                       | (0x35U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                      | (0x38U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                     | (0x39U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                    | (0x3aU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
            if (((0x20U <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                 && (0x27U >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q
                                          [(7U & (IData)(
                                                         (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                          >> 0x00000022U)))])) 
                          << 2U));
                if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                    if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> ((IData)(0x00000010U) 
                                     + (0x0000001fU 
                                        & ((0x00000010U 
                                            | (0x0000000fU 
                                               & (IData)(
                                                         (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                          >> 0x00000022U)))) 
                                           - (IData)(0x10U))))));
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(((0x40U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                            ? vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0
                                            : ((0x13U 
                                                == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                ? vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1
                                                : (
                                                   (0x34U 
                                                    == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                    ? vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2
                                                    : 
                                                   ((0x35U 
                                                     == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                     ? vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum3
                                                     : 
                                                    ((0x38U 
                                                      == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                      ? vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q
                                                      : 
                                                     ((0x39U 
                                                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                       ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)
                                                       : (IData)(
                                                                 (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                                  >> 0x20U)))))))))) 
                          << 2U));
            }
        } else if ((0x3cU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
                       | (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_read_valid_o 
                    = (0U == (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                    >> 0x0000000cU)));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q))) 
                          << 2U));
            }
        } else if ((0x3dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
                       | (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q 
                                                   >> 0x20U)))) 
                          << 2U));
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((((((0x3dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                       << 4U) | (((0x3cU 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  << 3U) 
                                                 | ((0x3aU 
                                                     == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                    << 2U))) 
                                     | (((0x39U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                         << 1U) | (0x38U 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                                    << 0x0000000dU) 
                                   | (((((0x35U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                         << 3U) | (
                                                   (0x34U 
                                                    == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                   << 2U)) 
                                       | (((0x13U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                           << 1U) | 
                                          (0x40U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                                      << 9U)) | (((
                                                   ((((0x20U 
                                                       <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                      & (0x27U 
                                                         >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                                                     << 4U) 
                                                    | (((0x1dU 
                                                         == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                        << 3U) 
                                                       | ((0x17U 
                                                           == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                          << 2U))) 
                                                   | (((0x18U 
                                                        == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                       << 1U) 
                                                      | (0x16U 
                                                         == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                                                  << 4U) 
                                                 | ((((0x12U 
                                                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                      << 3U) 
                                                     | ((0x11U 
                                                         == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                        << 2U)) 
                                                    | (((0x10U 
                                                         == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                        << 1U) 
                                                       | ((4U 
                                                           <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                          & (5U 
                                                             >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))))))))))) {
            if ((0U != (((((((0x3dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                             << 4U) | (((0x3cU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                        << 3U) | ((0x3aU 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  << 2U))) 
                           | (((0x39U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                               << 1U) | (0x38U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                          << 0x0000000dU) | (((((0x35U 
                                                 == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                << 3U) 
                                               | ((0x34U 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  << 2U)) 
                                              | (((0x13U 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  << 1U) 
                                                 | (0x40U 
                                                    == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                                             << 9U)) 
                        | (((((((0x20U <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                & (0x27U >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                               << 4U) | (((0x1dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                          << 3U) | 
                                         ((0x17U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                          << 2U))) 
                             | (((0x18U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                 << 1U) | (0x16U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                            << 4U) | ((((0x12U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                        << 3U) | ((0x11U 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  << 2U)) 
                                      | (((0x10U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                          << 1U) | 
                                         ((4U <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                          & (5U >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dm_csrs.sv:297: Assertion failed in %m: unique case, but multiple matches found for '8'h%X'\n",4, 'M',vlSymsp->name(),"tb_core_debug2.u_dm_obi_top.i_dm_top.i_dm_csrs.csr_read_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',8,(IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr));
                    VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/JTAG/vendor/src/dm_csrs.sv", 297, "");
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_ready_o) 
          & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_valid_i)) 
         & (2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dtm_op)))) {
        if ((((((((((4U <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                    && (5U >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                   | (0x10U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                  | (0x11U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                 | (0x12U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                | (0x16U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
               | (0x17U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
              | (0x1dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
             | (0x18U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
            if (((4U <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                 && (5U >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
                if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                    if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
                        = (((~ (0x00000000ffffffffULL 
                                << (0x00000020U & ((IData)(
                                                           (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                            >> 0x00000022U)) 
                                                   << 5U)))) 
                            & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d) 
                           | ((QData)((IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i))) 
                              << (0x00000020U & ((IData)(
                                                         (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                          >> 0x00000022U)) 
                                                 << 5U))));
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__autoexecdata_idx)));
                }
            } else if ((0x10U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                    = (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i);
                if ((0x10000000U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
                        = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
                }
            } else if ((0x11U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
                if ((0x12U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
                    if ((0x16U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
                        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                            = (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i);
                        if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                            }
                        } else {
                            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
                                = ((~ (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                       >> 8U)) & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q));
                        }
                    } else if ((0x17U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
                        if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                            }
                        } else {
                            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 1U;
                            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d 
                                = (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i);
                        }
                    } else if ((0x1dU != (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
                        if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                            }
                        } else {
                            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d = 0U;
                            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                = ((0xfffff000U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                   | (3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i)));
                            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                = ((0x0000ffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                   | (0x00ff0000U & 
                                      ((IData)((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                >> 0x00000010U)) 
                                       << 0x00000010U)));
                        }
                    }
                }
            }
        } else if (((0x20U <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                    && (0x27U >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
            if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                }
            } else {
                VL_ASSIGNSEL_WI(256, 32, (0x000000e0U 
                                          & ((IData)(
                                                     (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                      >> 0x00000022U)) 
                                             << 5U)), vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d, (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                    = (1U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                             >> ((IData)(0x00000010U) 
                                 + (0x0000001fU & (
                                                   (0x00000010U 
                                                    | (0x0000000fU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                                  >> 0x00000022U)))) 
                                                   - (IData)(0x10U))))));
            }
        } else if ((0x38U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                    = (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i);
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = ((0xffbfffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                       | (0x00400000U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                         & ((~ (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                >> 0x00000016U)) 
                                            << 0x00000016U))));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = ((0xffff8fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                       | (((0U != (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                         >> 0x0000000cU)))
                            ? 0U : (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0x0000000cU))) 
                          << 0x0000000cU));
            }
        } else if ((0x39U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
                       | (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                    = ((0xffffffff00000000ULL & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                       | (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i)));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_write_valid_o 
                    = (0U == (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                    >> 0x0000000cU)));
            }
        } else if ((0x3aU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
                       | (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                    = ((0x00000000ffffffffULL & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                       | ((QData)((IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i))) 
                          << 0x00000020U));
            }
        } else if ((0x3cU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
                       | (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                    = ((0xffffffff00000000ULL & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                       | (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i)));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_write_valid_o 
                    = (0U == (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                    >> 0x0000000cU)));
            }
        } else if ((0x3dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
                       | (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                    = ((0x00000000ffffffffULL & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                       | ((QData)((IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i))) 
                          << 0x00000020U));
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((((((0x3dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                       << 3U) | ((0x3cU 
                                                  == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                 << 2U)) 
                                     | (((0x3aU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                         << 1U) | (0x39U 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                                    << 0x0000000aU) 
                                   | (((0x38U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                       << 9U) | (((
                                                   (0x20U 
                                                    <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                   & (0x27U 
                                                      >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                                                  << 8U) 
                                                 | ((0x18U 
                                                     == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                    << 7U)))) 
                                  | ((((((0x1dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                         << 3U) | (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                   << 2U)) 
                                       | (((0x16U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                           << 1U) | 
                                          (0x12U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                                      << 3U) | (((0x11U 
                                                  == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                 << 2U) 
                                                | (((0x10U 
                                                     == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                    << 1U) 
                                                   | ((4U 
                                                       <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                      & (5U 
                                                         >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))))))))))) {
            if ((0U != (((((((0x3dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                             << 3U) | ((0x3cU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                       << 2U)) | ((
                                                   (0x3aU 
                                                    == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                   << 1U) 
                                                  | (0x39U 
                                                     == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                          << 0x0000000aU) | (((0x38U 
                                               == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                              << 9U) 
                                             | ((((0x20U 
                                                   <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  & (0x27U 
                                                     >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                                                 << 8U) 
                                                | ((0x18U 
                                                    == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                   << 7U)))) 
                        | ((((((0x1dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                               << 3U) | ((0x17U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                         << 2U)) | 
                             (((0x16U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                               << 1U) | (0x12U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                            << 3U) | (((0x11U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                       << 2U) | (((0x10U 
                                                   == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  << 1U) 
                                                 | ((4U 
                                                     <= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                    & (5U 
                                                       >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dm_csrs.sv:371: Assertion failed in %m: unique case, but multiple matches found for '8'h%X'\n",4, 'M',vlSymsp->name(),"tb_core_debug2.u_dm_obi_top.i_dm_top.i_dm_csrs.csr_read_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',8,(IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr));
                    VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/JTAG/vendor/src/dm_csrs.sv", 371, "");
                }
            }
        }
    }
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderror_valid_i) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
            = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderror_i;
    }
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_valid_i) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
            = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_i;
    }
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__ndmreset_ack_i) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
            = (1U | (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
    }
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sberror_valid_i) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
            = ((0xffff8fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
               | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sberror_i) 
                  << 0x0000000cU));
    }
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_valid_i) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
            = (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_i));
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfbffffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xdfffffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfffffff3U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xf7ffffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xffffffcfU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xefffffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    if ((1U & ((~ (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                   >> 0x0000001eU)) & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                       >> 0x0000001eU)))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__clear_resumeack_o = 1U;
    }
    if (((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
          >> 0x0000001eU) & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumeack_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
            = (0xbfffffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfc00003fU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x20000000U | (0x1fffffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = ((0xffdfffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
           | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
              << 0x00000015U));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x00000407U | (0xfffff000U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d 
        = (1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__clear_resumeack 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__clear_resumeack_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__data_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaddress_write_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_write_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbdata_read_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_read_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbdata_write_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_write_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clear_resumeack_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__clear_resumeack;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n[0U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[0U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n[1U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[1U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n[2U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[2U];
    if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__push_i) 
         & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o)))) {
        if ((0x43U >= (0x0000007fU & ((IData)(0x00000022U) 
                                      * (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WQ(68, 34, (0x0000007fU & 
                                     ((IData)(0x00000022U) 
                                      * (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q))), vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n, vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__data_i);
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_write_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaddress_write_valid;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbdata_read_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbdata_read_valid;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbdata_write_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbdata_write_valid;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
            if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_write_valid_i) 
                 & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbreadonaddr_i))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbdata_write_valid_i) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 2U;
            }
            if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbdata_read_valid_i) 
                 & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbreadondata_i))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
            }
        }
    }
    if (((2U < (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i)) 
         & (0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
    if (((0U != (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_i 
                 & (~ vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_mask))) 
         & (0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf);
extern const VlUnpacked<QData/*63:0*/, 32> Vtop__ConstPool__TABLE_hd2103793_0;
void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__21(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__22(Vtop___024root* vlSelf);
extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_hb4647ca1_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_ha15b2a7a_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hb2344d3c_0;
void Vtop___024root___ico_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__26(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf);
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h58f7d094_0;
void Vtop___024root___nba_comb__TOP__20(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__21(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__28(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__31(Vtop___024root* vlSelf);
void Vtop___024root___ico_comb__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__34(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__38(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__40(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__45(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000c00000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000003000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__p_elw_busy_q = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n) 
                   && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_d));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__fetch_enable 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__fetch_enable_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__fetch_enable;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fetch_enable_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__fetch_enable_i;
        }
    }
    if ((0x0003000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000c00000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__3
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt;
                if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
                     & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q)))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                        = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i) 
                            | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o))
                            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata
                            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext);
                }
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_ex_i;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_ex_i;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q 
                        = (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int);
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_ex_i;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q = 0U;
            }
        }
    }
    if ((0x0000000000060000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__4
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__rst_n) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = 0U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_o;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h 
                        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                           >> 0x10U);
                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state)))) {
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_i) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_i;
                    }
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h = 0U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2 
                = ((IData)(2U) + vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4 
                = ((IData)(4U) + vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        }
    }
    if ((0x0000000060000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__5
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_ns;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) 
                   && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) 
                   && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) 
                   && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) 
                   && ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done) 
                       & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_havereset_o 
                = (1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_running_o 
                = (1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                         >> 1U));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_halted_o 
                = (1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                         >> 2U));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_havereset_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_havereset_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_running_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_running_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_halted_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_halted_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_havereset_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_havereset_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_running_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_running_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_halted_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_halted_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__debug_havereset_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_havereset_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__debug_running_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_running_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__debug_halted_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_halted_o;
            vlSelfRef.tb_core_debug2__DOT__debug_running_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__debug_running_o;
            vlSelfRef.tb_core_debug2__DOT__debug_halted_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__debug_halted_o;
            vlSelfRef.debug_running_o = vlSelfRef.tb_core_debug2__DOT__debug_running_o;
            vlSelfRef.debug_halted_o = vlSelfRef.tb_core_debug2__DOT__debug_halted_o;
        }
    }
    if ((0x0000000006000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000006000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x0000000000000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x00000c0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__9
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rst_ni) 
                   && (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_d));
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rst_ni) 
                   && (1U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i 
                             >> 2U)));
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rst_ni) 
                   && (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d));
            if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rst_ni) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q 
                    = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q 
                    = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d;
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q = 0ULL;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q = 0U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rst_ni) 
                   && (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d));
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q_aligned 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q_aligned 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmdbusy_o = 1U;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmdbusy_o 
                = ((1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                          >> 1U)) || (1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)));
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__resumeack 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_o;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__halted 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_o;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmdbusy 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmdbusy_o;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumeack_i 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__resumeack;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_i 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__halted;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmdbusy;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumeack_aligned 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumeack_i;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_aligned 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_i;
        }
    }
    if ((0x0000300000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__10
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__rst_ni)
                    ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_d)
                    : 0U);
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__rdata_o 
                = Vtop__ConstPool__TABLE_hd2103793_0
                [vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q];
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_rdata 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__rdata_o;
        }
    }
    if ((0x0000000000600000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x000000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x0000000000018000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__13
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt;
                if ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                      | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)) 
                     | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
                        & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i)))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q = 0U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n) 
                   && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_incr 
                = ((IData)(4U) + (0xfffffffcU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q));
        }
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__14
            if (vlSelfRef.tb_core_debug2__DOT__rst_ni) {
                vlSelfRef.tb_core_debug2__DOT__sys_rvalid 
                    = vlSelfRef.tb_core_debug2__DOT__sys_req;
                vlSelfRef.tb_core_debug2__DOT__stub_rvalid 
                    = vlSelfRef.tb_core_debug2__DOT__stub_req;
                if (((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__axi_state_q)) 
                     & (IData)(vlSelfRef.tb_core_debug2__DOT__data_rvalid))) {
                    vlSelfRef.tb_core_debug2__DOT__data_rdata_q 
                        = vlSelfRef.tb_core_debug2__DOT__data_rdata;
                }
                if ((((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__axi_state_q)) 
                      & (IData)(vlSelfRef.tb_core_debug2__DOT__data_req)) 
                     & (IData)(vlSelfRef.tb_core_debug2__DOT__data_gnt))) {
                    vlSelfRef.tb_core_debug2__DOT__data_is_write_q 
                        = vlSelfRef.tb_core_debug2__DOT__data_we;
                }
                vlSelfRef.tb_core_debug2__DOT__axi_state_q 
                    = vlSelfRef.tb_core_debug2__DOT__axi_state_d;
            } else {
                vlSelfRef.tb_core_debug2__DOT__sys_rvalid = 0U;
                vlSelfRef.tb_core_debug2__DOT__stub_rvalid = 0U;
                vlSelfRef.tb_core_debug2__DOT__data_rdata_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__data_is_write_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__axi_state_q = 0U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__sys_rvalid;
            vlSelfRef.tb_core_debug2__DOT__axi_rdata 
                = vlSelfRef.tb_core_debug2__DOT__data_rdata_q;
            vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_rdata_i 
                = vlSelfRef.tb_core_debug2__DOT__axi_rdata;
            vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_rdata_o 
                = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_rdata_i;
            vlSelfRef.tb_core_debug2__DOT__axi_bvalid 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__data_is_write_q) 
                   & (2U == (IData)(vlSelfRef.tb_core_debug2__DOT__axi_state_q)));
            vlSelfRef.tb_core_debug2__DOT__axi_rvalid 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__data_is_write_q)) 
                   & (2U == (IData)(vlSelfRef.tb_core_debug2__DOT__axi_state_q)));
            vlSelfRef.tb_core_debug2__DOT__dbg_data_rdata 
                = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_rdata_o;
            vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_bvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__axi_bvalid;
            vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__axi_rvalid;
        }
    }
    if ((0x000c000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__15
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__rst_ni)
                    ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d)
                    : 0U);
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we = 1U;
                    }
                }
            }
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbbusy_o 
                = (0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q));
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_we_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbbusy 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbbusy_o;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_we_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_we_o;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbbusy;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__master_we_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_we_o;
        }
    }
    if ((0x0000030000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__16
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_rvalid_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__rst_ni) 
                   && (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_req_i));
            if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__rst_ni) {
                if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_req_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_rid_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_aid_i;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_rid_q = 0U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_rvalid_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_rvalid_q;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_rid_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_rid_q;
            vlSelfRef.tb_core_debug2__DOT__dm_slave_rvalid 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_rvalid_o;
            vlSelfRef.tb_core_debug2__DOT__dm_slave_rid 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_rid_o;
            vlSelfRef.tb_core_debug2__DOT__data_rvalid 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__dm_slave_rid)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__dm_slave_rvalid));
            vlSelfRef.tb_core_debug2__DOT__instr_dbg_rvalid 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__dm_slave_rvalid) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__dm_slave_rid));
            vlSelfRef.tb_core_debug2__DOT__instr_dbg_rvalid_o 
                = vlSelfRef.tb_core_debug2__DOT__instr_dbg_rvalid;
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__instr_dbg_rvalid;
            vlSelfRef.instr_dbg_rvalid_o = vlSelfRef.tb_core_debug2__DOT__instr_dbg_rvalid_o;
        }
    }
    if ((0x0000000001800000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__17
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__rst_n) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q 
                        = (1U & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry)) 
                                 & (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                            >> 0x20U))));
                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = 0U;
                }
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS;
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS = 0U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0U;
            if ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((1U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    if ((2U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 1U;
                        }
                    }
                    if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 2U;
                    } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 1U;
                    } else if ((4U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 3U;
                    }
                }
                if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
                } else {
                    if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 1U;
                    } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 1U;
                    }
                    if ((2U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
                        }
                    }
                }
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o = 1U;
            if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o = 0U;
            } else if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o = 1U;
            } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
            } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_multicycle_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_multicycle 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_multicycle_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_multicycle;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mult_multicycle_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i;
        }
    }
    if ((0x00c0000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__18
            if (vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__rst_ni) {
                if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_req_i) 
                     & (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_gnt_o))) {
                    vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__pending_dbg_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__is_dbg;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__pending_dbg_q = 0U;
            }
        }
    }
    if ((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__19
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n) {
                if (((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
                     & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_addr_o;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_we_o;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q = 0U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n) 
                   && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state));
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q;
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o = 0x0fU;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o = 0U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_we_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
                   && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_ready_o 
                = (1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_ready 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_ready_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_ready;
        }
    }
    if ((0x0000000018000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__20
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_ctrl_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mip_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_sec_ctrl 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_ctrl_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mip_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mip_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_sec_ctrl_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_sec_ctrl;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mip 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mip_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mip_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mip;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mip 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mip_i;
        }
    }
    if ((0x0000000300000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((0x0000000000180000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((0x00000000c0000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__23
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 1U;
                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
            }
        }
    }
    if ((0x0030000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__24
            CData/*4:0*/ __Vinline_0__nba_sequent__TOP__24___Vtableidx5;
            __Vinline_0__nba_sequent__TOP__24___Vtableidx5 = 0;
            __Vinline_0__nba_sequent__TOP__24___Vtableidx5 
                = ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_we_i) 
                     << 4U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_rvalid_o) 
                                << 3U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_gnt_o) 
                                          << 2U))) 
                   | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_req_i) 
                       << 1U) | (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__rst_n)));
            if ((1U & Vtop__ConstPool__TABLE_hb4647ca1_0
                 [__Vinline_0__nba_sequent__TOP__24___Vtableidx5])) {
                vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__outstanding 
                    = Vtop__ConstPool__TABLE_ha15b2a7a_0
                    [__Vinline_0__nba_sequent__TOP__24___Vtableidx5];
            }
            if ((2U & Vtop__ConstPool__TABLE_hb4647ca1_0
                 [__Vinline_0__nba_sequent__TOP__24___Vtableidx5])) {
                vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__outstanding_we 
                    = Vtop__ConstPool__TABLE_hb2344d3c_0
                    [__Vinline_0__nba_sequent__TOP__24___Vtableidx5];
            }
        }
    }
    if ((0x0000000c06000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i) 
                   & (2U > (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__busy_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
                   | (0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_valid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__lsu_busy 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__busy_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_req_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_valid_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__lsu_busy_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__lsu_busy;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_req_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_start_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_o) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_ex_i));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_req_pmp 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__p_elw_start 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_start_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_req_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_req_pmp;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__p_elw_start_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__p_elw_start;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__data_req_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_req_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_req_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_req_o;
            vlSelfRef.tb_core_debug2__DOT__core_data_req 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_req_o;
            vlSelfRef.tb_core_debug2__DOT__stub_req 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__is_dbg_data)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__core_data_req));
            vlSelfRef.tb_core_debug2__DOT__dbg_data_req 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__is_dbg_data) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__core_data_req));
            vlSelfRef.tb_core_debug2__DOT__stub_gnt 
                = vlSelfRef.tb_core_debug2__DOT__stub_req;
            vlSelfRef.tb_core_debug2__DOT__data_dbg_req_o 
                = vlSelfRef.tb_core_debug2__DOT__dbg_data_req;
            vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_req_i 
                = vlSelfRef.tb_core_debug2__DOT__dbg_data_req;
            vlSelfRef.data_dbg_req_o = vlSelfRef.tb_core_debug2__DOT__data_dbg_req_o;
        }
    }
    if ((0x0000000006000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x0000000006000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000060000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__25
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_if_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__pc_if 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_if_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__pc_if_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__pc_if;
        }
    }
    if ((0x0000000006000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_apu_stall 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_access) 
                   & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o) 
                      & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o) 
                         >> 1U)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_b_id 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
                   & ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
                      & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i) 
                         == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
                   & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o) 
                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
                      & (0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
                   & ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
                      & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i) 
                         == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
                   & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o) 
                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
                      & (0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_c_id 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
                   & ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                      & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i) 
                         == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
                   & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o) 
                       == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                      & (0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_b_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_b_id;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_b_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_c_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_c_id;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_c_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id;
        }
    }
    if ((0x0000cc0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x00003c0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__5
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q)
                    ? vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_rdata
                    : vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q);
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q)
                    ? (IData)((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux 
                               >> 0x00000020U)) : (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux));
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_rdata_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_o;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_rdata_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_rdata_o;
            vlSelfRef.tb_core_debug2__DOT__dm_slave_rdata 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_rdata_o;
            vlSelfRef.tb_core_debug2__DOT__data_rdata 
                = vlSelfRef.tb_core_debug2__DOT__dm_slave_rdata;
            vlSelfRef.tb_core_debug2__DOT__instr_dbg_rdata 
                = vlSelfRef.tb_core_debug2__DOT__dm_slave_rdata;
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_rdata_i 
                = vlSelfRef.tb_core_debug2__DOT__instr_dbg_rdata;
        }
    }
    if ((0x0000000006600000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__6
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S 
                = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBIsZero_SI) 
                    | (0U != vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)) 
                   & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                       ^ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
                          > vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)) 
                      | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                         == vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56 
                = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CntZero_S) 
                    << 4U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                               << 3U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI) 
                                          << 2U) | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP))));
        }
    }
    if ((0x0000000006000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__26(vlSelf);
    }
    if ((0x000000c006000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x000000c000000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__8
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__trigger_match_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i 
                      == vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__trigger_match 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__trigger_match_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__trigger_match_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__trigger_match;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__trigger_match_i;
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                   | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i));
        }
    }
    if ((0x0000000006000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__9
            vlSelfRef.tb_core_debug2__DOT__core_data_rdata 
                = (vlSelfRef.tb_core_debug2__DOT__dbg_data_rdata 
                   & (- (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__is_dbg_data))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_rdata_i 
                = vlSelfRef.tb_core_debug2__DOT__core_data_rdata;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_rdata_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_rdata_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_rdata_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rdata_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_rdata_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rdata_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_rdata_o;
        }
    }
    if ((0x000cc00000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__10
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_o = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 1U;
                }
            }
            if (((2U < (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i)) 
                 & (0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_o = 4U;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_valid_o = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_valid_o = 1U;
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_valid_o = 0U;
            }
            if (((0U != (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_i 
                         & (~ vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_mask))) 
                 & (0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_o = 3U;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_valid_o = 1U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be = 0U;
            if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be 
                            = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask;
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be 
                        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask;
                }
            }
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_req_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sberror 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_o;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sberror_valid 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_valid_o;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_be_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_req_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_req_o;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sberror_i 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sberror;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sberror_valid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sberror_valid;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_be_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_be_o;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__master_req_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_req_o;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__master_be_o 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_be_o;
        }
    }
    if ((0x0000000007800000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__11
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0U;
            if ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((1U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                            = (2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
                    } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                            = (1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
                    } else if ((4U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i;
                    }
                }
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
            if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
                if (((6U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)) 
                     & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__enable_i))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
                }
            } else if ((1U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((2U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    if ((3U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        if ((4U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
                        }
                    }
                }
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
                    = (1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_imm 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_c 
                    = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i))));
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
                    = (3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword));
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
                    = (1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_imm 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_c 
                    = (0x00000001ffffffffULL & VL_EXTENDS_QI(33,32, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i));
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
                    = (3U & (- (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword_i))));
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ready_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_ready 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ready_o;
        }
    }
    if ((0x00c0030000000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__12
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_rvalid_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__pending_dbg_q)
                    ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_rvalid_i)
                    : (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_rvalid_i));
            vlSelfRef.tb_core_debug2__DOT__core_instr_rvalid 
                = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_rvalid_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__core_instr_rvalid;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_rvalid_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_rvalid_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_rvalid_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rvalid_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_valid_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rvalid_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_valid_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i;
        }
    }
    if ((0x0000000300000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__13
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_b_o 
                = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
                   [(0x0000001fU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_b_i))] 
                   & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_b_i) 
                                          >> 5U))))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o 
                = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
                   [(0x0000001fU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_a_i))] 
                   & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_a_i) 
                                          >> 5U))))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_c_o 
                = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
                   [(0x0000001fU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))] 
                   & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i) 
                                          >> 5U))))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_b_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rc_id 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_c_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jump_target 
                = ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                    ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
                       + vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_uj_type)
                    : ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                        ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
                           + vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_sb_type)
                        : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
                           + vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jump_target_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jump_target;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__jump_target_id 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jump_target_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__jump_target_id_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__jump_target_id;
        }
    }
    if ((0x0000000000180600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__14
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_b_id 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
                   & ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
                      & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                         == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
                   & ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
                      & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                         == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_c_id 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
                   & ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                      & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                         == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_b_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_b_id;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_c_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_c_id;
        }
    }
    if ((0x0000c00000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__27
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_req_i;
        }
    }
    if ((0x0000000060000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__28
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) 
                   && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_mode 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_mode_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_mode;
        }
    }
    if ((0x0000000006600018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0x00c03c0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__16
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_rdata_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__pending_dbg_q)
                    ? vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_rdata_i
                    : 0x0000006fU);
            vlSelfRef.tb_core_debug2__DOT__core_instr_rdata 
                = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_rdata_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_rdata_i 
                = vlSelfRef.tb_core_debug2__DOT__core_instr_rdata;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_rdata_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_rdata_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_rdata_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rdata_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rdata_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rdata_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_rdata_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rdata_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_rdata_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata;
        }
    }
    if ((0x0000000006600004ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__17
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutVld_SO 
                = Vtop__ConstPool__TABLE_h58f7d094_0
                [((0x00000020U & (IData)(vlSelfRef.__VdfgSynthAssign___Vtableidx2_h6e95ff9d_0_0)) 
                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56))];
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutVld_SO;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ready_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ready_o;
        }
    }
    if ((0x0030000006000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__18
            vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_rvalid_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__outstanding)
                    ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__outstanding_we)
                        ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_bvalid_i)
                        : (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_rvalid_i))
                    : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_we_i)
                        ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_bvalid_i)
                        : (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_rvalid_i)));
            vlSelfRef.tb_core_debug2__DOT__dbg_data_rvalid 
                = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_rvalid_o;
            vlSelfRef.tb_core_debug2__DOT__data_dbg_rvalid_o 
                = vlSelfRef.tb_core_debug2__DOT__dbg_data_rvalid;
            vlSelfRef.tb_core_debug2__DOT__core_data_rvalid 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__is_dbg_data)
                    ? (IData)(vlSelfRef.tb_core_debug2__DOT__dbg_data_rvalid)
                    : (IData)(vlSelfRef.tb_core_debug2__DOT__stub_rvalid));
            vlSelfRef.data_dbg_rvalid_o = vlSelfRef.tb_core_debug2__DOT__data_dbg_rvalid_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__core_data_rvalid;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_rvalid_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__data_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_rvalid_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_rvalid_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rvalid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rvalid_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_valid_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rvalid_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_valid_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__count_down 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid;
        }
    }
    if ((0x0030000c06000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__19
            CData/*0:0*/ __Vinline_0__nba_comb__TOP__19___VdfgRegularize_h6e95ff9d_0_30;
            __Vinline_0__nba_comb__TOP__19___VdfgRegularize_h6e95ff9d_0_30 = 0;
            vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_arvalid_o 
                = ((~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_we_i) 
                       | (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__outstanding))) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_req_i));
            __Vinline_0__nba_comb__TOP__19___VdfgRegularize_h6e95ff9d_0_30 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_req_i) 
                   & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__outstanding)) 
                      & (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_we_i)));
            vlSelfRef.tb_core_debug2__DOT__axi_arvalid 
                = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_arvalid_o;
            vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_awvalid_o 
                = __Vinline_0__nba_comb__TOP__19___VdfgRegularize_h6e95ff9d_0_30;
            vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_wvalid_o 
                = __Vinline_0__nba_comb__TOP__19___VdfgRegularize_h6e95ff9d_0_30;
            vlSelfRef.tb_core_debug2__DOT__axi_awvalid 
                = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_awvalid_o;
            vlSelfRef.tb_core_debug2__DOT__axi_wvalid 
                = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_wvalid_o;
        }
    }
    if ((0x000000c01e000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__20(vlSelf);
    }
    if ((0x0000000c06000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__21(vlSelf);
    }
    if ((0x0000000007800020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__0
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                = ((0x00010000U & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                    << 0x00000010U) 
                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                      << 1U))) | (0x0000ffffU 
                                                  & ((1U 
                                                      & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                                      ? 
                                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
                                                      >> 0x00000010U)
                                                      : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i)));
        }
    }
    if ((0x0000000007800040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__1
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
                = (((IData)((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                              >> 1U) & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
                                        >> 0x0000000fU))) 
                    << 0x00000010U) | (0x0000ffffU 
                                       & ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                           ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i 
                                              >> 0x00000010U)
                                           : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i)));
        }
    }
    if ((0x0000000006180600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__24
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 0U;
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_b_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 2U;
                }
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_b_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 1U;
                }
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o 
                = ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i)) 
                   & ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) 
                        & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i)) 
                       | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i) 
                          & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i))) 
                      | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) 
                         & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 0U;
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 2U;
                }
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 1U;
                }
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 1U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jr_stall 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o;
        }
    }
    if ((0x0000000007980600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__25
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 0U;
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_c_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 2U;
                }
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_c_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 1U;
                }
            }
            if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i)))) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mult_multicycle_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 1U;
                }
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o;
        }
    }
    if ((0x0000c000c0000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__26
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_i) 
                   | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q));
        }
    }
    if ((0x000000c0e0000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__27
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_p_elw_no_sleep_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                   | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_p_elw_no_sleep_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_p_elw_no_sleep_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_p_elw_no_sleep 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_p_elw_no_sleep_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__debug_p_elw_no_sleep_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_p_elw_no_sleep;
        }
    }
    if ((0x0000000060000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__28(vlSelf);
    }
    if ((0x0000000066000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__29
            CData/*0:0*/ __Vinline_0__nba_comb__TOP__29___VdfgRegularize_h6e95ff9d_0_31;
            __Vinline_0__nba_comb__TOP__29___VdfgRegularize_h6e95ff9d_0_31 = 0;
            __Vinline_0__nba_comb__TOP__29___VdfgRegularize_h6e95ff9d_0_31 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_mode_i) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we 
                = (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[1953U] 
                   & __Vinline_0__nba_comb__TOP__29___VdfgRegularize_h6e95ff9d_0_31);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we 
                = (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[1954U] 
                   & __Vinline_0__nba_comb__TOP__29___VdfgRegularize_h6e95ff9d_0_31);
        }
    }
    if ((0x00c03c0000006000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__30
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_rdata_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_empty)
                    ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata
                    : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_rdata);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_rdata_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
        }
    }
    if ((0x0030000c06000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__31(vlSelf);
    }
    if ((0x0000000007800060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x0000c000e0000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__33
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                   | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wake_from_sleep_o 
                = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__wake_from_sleep_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wake_from_sleep_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__wake_from_sleep 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__wake_from_sleep_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__wake_from_sleep_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__wake_from_sleep;
        }
    }
    if ((0x00c03c0000066000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__34(vlSelf);
    }
    if ((0x0030030c06000180ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__35
            vlSelfRef.tb_core_debug2__DOT__axi_state_d 
                = vlSelfRef.tb_core_debug2__DOT__axi_state_q;
            if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__axi_state_q))) {
                if (((IData)(vlSelfRef.tb_core_debug2__DOT__axi_awvalid) 
                     & (IData)(vlSelfRef.tb_core_debug2__DOT__axi_wvalid))) {
                    if (vlSelfRef.tb_core_debug2__DOT__data_gnt) {
                        vlSelfRef.tb_core_debug2__DOT__axi_state_d = 1U;
                    }
                } else if (vlSelfRef.tb_core_debug2__DOT__axi_arvalid) {
                    if (vlSelfRef.tb_core_debug2__DOT__data_gnt) {
                        vlSelfRef.tb_core_debug2__DOT__axi_state_d = 1U;
                    }
                }
            } else if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__axi_state_q))) {
                if (vlSelfRef.tb_core_debug2__DOT__data_rvalid) {
                    vlSelfRef.tb_core_debug2__DOT__axi_state_d = 2U;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__axi_state_d = 0U;
            }
        }
    }
    if ((0x0030000c66180781ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__36
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o = 0U;
            if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o = 1U;
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o = 1U;
            }
            if (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_req_ex_i) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i)) 
                  | ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wb_ready_i)) 
                     & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i))) 
                 & ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i) 
                      | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_b_i)) 
                     | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_c_i)) 
                    | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o) 
                        & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_id_i) 
                           & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i)))) 
                       & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_waddr_ex_i) 
                          == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_waddr_id_i)))))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o = 1U;
            }
            if (((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i)) 
                 & ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) 
                      & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i)) 
                     | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i) 
                        & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i))) 
                    | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) 
                       & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i))))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o = 1U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__deassert_we 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__deassert_we;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en_o 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we_o 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_o 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op) 
                   & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i))))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_we_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_we) 
                   & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i))))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_en_o 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_en));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en_o 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en_o 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn_in_id_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn) 
                   & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i))))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_en 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_op 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_id 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__hwlp_we 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_we_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_en_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_en 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn_in_id_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__apu_en_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_en 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en) 
                   | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_en));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id;
        }
    }
    if ((0x0030000c06180781ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__37
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o = 0U;
            if (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_req_ex_i) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i)) 
                  | ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wb_ready_i)) 
                     & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i))) 
                 & ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i) 
                      | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_b_i)) 
                     | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_c_i)) 
                    | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o) 
                        & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_id_i) 
                           & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i)))) 
                       & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_waddr_ex_i) 
                          == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_waddr_id_i)))))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o = 1U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__load_stall 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o;
        }
    }
    if ((0x0030000c07e00184ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__38(vlSelf);
    }
    if ((0x000000c01fe00078ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__39
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o = 0U;
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_result;
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_result;
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__csr_access_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__csr_rdata_i;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_alu_wdata_fw 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_alu_wdata_fw;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i;
        }
    }
    if ((0x0000c0c0e0000600ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__40(vlSelf);
    }
    if ((0x0000c030e0000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__41
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                   & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__wake_from_sleep_i) 
                      | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_sleep_o 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__en_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__core_sleep_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_sleep_o;
            if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_i)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__en_i;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_sleep_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__core_sleep_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_i) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clk_gated_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clk_gated_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Clk_CI 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__clk_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__clk 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk;
        }
    }
    if ((0x0030000c07f80785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__42
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__misaligned_stall)) 
                   & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
                      & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__load_stall)) 
                         & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_apu_stall)) 
                            & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i)))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_ready 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__id_ready_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_ready;
        }
    }
    if ((0x0030000c07e0019cULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__7
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
                    = (0x0000003fU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI));
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BMux_D 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI;
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
                    = (0x0000003fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CntZero_S)
                                       ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP)
                                       : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP) 
                                          - (IData)(1U))));
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BMux_D 
                    = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                        << 0x0000001fU) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                           >> 1U));
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S)
                    ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BMux_D
                    : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP);
        }
    }
    if ((0x003000cf1ff807f8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__44
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id 
                = ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
                    ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i
                    : ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
                        ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i
                        : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id 
                = ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
                    ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i
                    : ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
                        ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i
                        : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rc_id));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
                = ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
                    ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i
                    : ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
                        ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i
                        : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rb_id));
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id_imm;
            } else if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id 
                    = (0x0000001fU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
                                      >> 5U));
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id_imm;
            } else if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id 
                    = (0x0000001fU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id);
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a 
                = ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                        ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                        : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id))
                    : ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                        ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_a)
                        : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i
                            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                = ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                    ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
                    : ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                        ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                        : ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jump_target
                            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_vec 
                = ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode))
                    ? ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c))))
                    : ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                        << 0x00000010U) | (0x0000ffffU 
                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__scalar_replication_c)
                    ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_vec
                    : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c);
        }
    }
    if ((0x0030c0fcfff80785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__45(vlSelf);
    }
    if ((0x0030c0cffff807f8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__46
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                = ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? ((((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                          ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
                             >> 5U) : ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
                                        >> 5U) & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel)))))) 
                        << 5U) | (0x0000001fU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id))
                    : ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                        ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b)
                        : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
                            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_vec 
                = ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode))
                    ? ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b))))
                    : ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                        << 0x00000010U) | (0x0000ffffU 
                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__scalar_replication)
                    ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_vec
                    : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b);
        }
    }
    if ((0x0030c0fcfffe0785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__47(vlSelf);
    }
    if ((0x0030c0fffff80785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__48
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0U;
            if ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i)))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
                                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__hwlp_target_i;
                        }
                    }
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
                    = ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                        ? ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                            ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__depc_i
                                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__uepc_i)
                            : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__mepc_i
                                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__exc_pc))
                        : ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                            ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__jump_target_ex_i
                                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__jump_target_id_i)
                            : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                                ? ((IData)(4U) + vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_id_o)
                                : 0U)));
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i 
                = (0xfffffffeU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_addr_i 
                = (0xfffffffeU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_addr_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_addr_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr 
                = (0xfffffffcU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_addr_i);
        }
    }
    if ((0x00f0c3fcfff98785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__49
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q;
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q;
                if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
                     & (0U < (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                        = (3U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                                 - (IData)(1U)));
                }
            } else if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
                        & (0U < (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                    = (3U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q) 
                             - (IData)(1U)));
            }
        }
    }
    if ((0x0030c0fcfff98785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__50
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                = (1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                            | (0U < (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))));
        }
    }
    if ((0x0030c0fcfff86785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__51
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_masked 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_i) 
                   & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                                          | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)))))));
        }
    }
    if ((0x00f0fcfffffe6785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__52
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state;
            if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
                if ((3U == (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4;
                    if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_i) 
                         | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                            = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_i)
                                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_i
                                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q);
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
                if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                    if ((3U == (3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4;
                    } else {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 2U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2;
                    }
                } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                    if ((3U == (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4;
                    } else {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2;
                    }
                } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                    if ((3U == (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                                      >> 0x10U)))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
                    } else {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2;
                    }
                }
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
                    = ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i)
                        ? 3U : 0U);
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i;
            }
        }
    }
    if ((0x0030c0fffff98785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__53
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q)
                    ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i)
                        ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr
                        : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q)
                    : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i)
                        ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr
                        : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)
                            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_target_i
                            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_incr)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_addr_i 
                = (0xfffffffcU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr);
        }
    }
    if ((0x00f0c3fcfff9e785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__54
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_valid_o 
                = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                   & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
                      | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_valid_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_valid_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_valid_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__perf_imiss_o 
                = (1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                            | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_req))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_ready 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__id_ready_i) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__perf_imiss 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__perf_imiss_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_valid 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__halt_if_i)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_ready));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__perf_imiss_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__perf_imiss;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_valid;
        }
    }
    if ((0x0030c0fcfff9e785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__55
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__req_i) 
                   & (2U > ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                            + (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_masked))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__busy_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
                   | (0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__busy_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__busy_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_valid_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_busy 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__busy_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_busy_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_busy;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_busy 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_busy_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__if_busy_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_busy;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_d 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__if_busy_i) 
                   | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__ctrl_busy_i) 
                      | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__lsu_busy_i)));
        }
    }
    if ((0x0030c0fffff99f85ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__56
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_addr_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)
                    ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q
                    : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_addr_i);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_addr_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_addr_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_addr_pmp 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_addr_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_addr_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_addr_pmp;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_addr_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_addr_o;
            vlSelfRef.tb_core_debug2__DOT__core_instr_addr 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_addr_o;
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_addr_i 
                = vlSelfRef.tb_core_debug2__DOT__core_instr_addr;
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_addr_o 
                = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_addr_i;
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_addr_o 
                = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_addr_i;
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__is_dbg 
                = (0x00010000U == (0x000ff000U & vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_addr_i));
            vlSelfRef.tb_core_debug2__DOT__sys_addr 
                = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_addr_o;
            vlSelfRef.tb_core_debug2__DOT__instr_dbg_addr 
                = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_addr_o;
            vlSelfRef.tb_core_debug2__DOT__dm_slave_addr 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__data_req)
                    ? vlSelfRef.tb_core_debug2__DOT__data_addr
                    : vlSelfRef.tb_core_debug2__DOT__instr_dbg_addr);
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_addr_i 
                = vlSelfRef.tb_core_debug2__DOT__dm_slave_addr;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_addr_i 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_addr_i;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_addr_i;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_d 
                = (0x0800U <= (0x00000fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i));
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_addr 
                = (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i));
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_i 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_addr;
        }
    }
    if ((0x00f0fffcffffe785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__57
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i;
            if ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                    if ((3U != (3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o = 1U;
                    }
                } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o 
                        = (1U & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                                 | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i)));
                } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                    if ((3U == (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                                      >> 0x10U)))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o = 0U;
                    }
                }
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 0U;
            if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
                    = ((3U == (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i))
                        ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i) 
                           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i))
                        : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i) 
                           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i)));
            } else if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
                    = ((3U == (3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                        ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i) 
                           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i))
                        : (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i));
            } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
                    = (((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                        | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i)) 
                       & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i));
            } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
                    = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i) 
                       & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i));
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 1U;
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o;
        }
    }
    if ((0x00f0c3fcffffe785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__58
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_o = 1U;
            if ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                    if ((3U != (3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_o 
                            = (1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i)));
                    }
                }
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready = 0U;
            if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_set_i)))) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) {
                    if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__req_i) 
                         & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_valid))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready;
                    }
                }
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_ready_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_ready_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_ready_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_pop_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_ready_i) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_push_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                      & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_ready_i)) 
                         | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid))));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_pop_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_push_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock = 1U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
            if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i) 
                 & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__full_o)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock = 0U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q)));
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)));
            }
            if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i) 
                 & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q)));
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
                    = (3U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                             - (IData)(1U)));
            }
            if (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i)) 
                  & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__full_o))) 
                 & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
            }
        }
    }
    if ((0x0030c0fcfff9ff85ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__59
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
                if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
                     & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
                if ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                      | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)) 
                     & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
                           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i))))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
                }
            }
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_up 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
                   || (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_valid_i));
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_req_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_req_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_req_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_req_pmp 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_req_o;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_req_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_req_pmp;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_req_o 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_req_o;
            vlSelfRef.tb_core_debug2__DOT__core_instr_req 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_req_o;
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_req_i 
                = vlSelfRef.tb_core_debug2__DOT__core_instr_req;
        }
    }
    if ((0x00f0fffcffffe785ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__60
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q;
            if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i) 
                 & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__full_o)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
                    = (((~ (0x00000000ffffffffULL << 
                            (0x0000003fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q) 
                                            << 5U)))) 
                        & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n) 
                       | ((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_i)) 
                          << (0x0000003fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q) 
                                             << 5U))));
            }
        }
    }
    if ((0x00f0c3fcfff9ff85ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__61
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt 
                = (3U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_up)
                          ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down)
                              ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)
                              : ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))
                          : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                             - (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down))));
        }
    }
    if ((0x0030c0fffff9ff85ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__62
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_req_o 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__is_dbg)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_req_i));
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_req_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_req_i) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__is_dbg));
            vlSelfRef.tb_core_debug2__DOT__sys_req 
                = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_req_o;
            vlSelfRef.tb_core_debug2__DOT__instr_dbg_req 
                = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_req_o;
            vlSelfRef.tb_core_debug2__DOT__sys_gnt 
                = vlSelfRef.tb_core_debug2__DOT__sys_req;
            vlSelfRef.tb_core_debug2__DOT__instr_dbg_req_o 
                = vlSelfRef.tb_core_debug2__DOT__instr_dbg_req;
            vlSelfRef.tb_core_debug2__DOT__instr_dbg_gnt 
                = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__data_req)) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__instr_dbg_req));
            vlSelfRef.tb_core_debug2__DOT__dm_slave_req 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__instr_dbg_req) 
                   | (IData)(vlSelfRef.tb_core_debug2__DOT__data_req));
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_gnt_i 
                = vlSelfRef.tb_core_debug2__DOT__sys_gnt;
            vlSelfRef.instr_dbg_req_o = vlSelfRef.tb_core_debug2__DOT__instr_dbg_req_o;
            vlSelfRef.tb_core_debug2__DOT__instr_dbg_gnt_o 
                = vlSelfRef.tb_core_debug2__DOT__instr_dbg_gnt;
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_gnt_i 
                = vlSelfRef.tb_core_debug2__DOT__instr_dbg_gnt;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_req_i 
                = vlSelfRef.tb_core_debug2__DOT__dm_slave_req;
            vlSelfRef.instr_dbg_gnt_o = vlSelfRef.tb_core_debug2__DOT__instr_dbg_gnt_o;
            vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_gnt_o 
                = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__is_dbg)
                    ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_gnt_i)
                    : (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_gnt_i));
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_req_i 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_req_i;
            vlSelfRef.tb_core_debug2__DOT__core_instr_gnt 
                = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_gnt_o;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__req_i 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_req_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_gnt_i 
                = vlSelfRef.tb_core_debug2__DOT__core_instr_gnt;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__req_i 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__req_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_gnt_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_gnt_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_gnt_pmp 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_gnt_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_gnt_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_gnt_pmp;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_gnt_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_gnt_i;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_gnt_i 
                = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_gnt_i;
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 1U;
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_gnt_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 0U;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 0U;
                if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o) 
                     & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_gnt_i)))) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 1U;
                }
            }
        }
    }
    if ((0x0030ccfffff9ff87ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__63(vlSelf);
    }
    if ((0x0030f0fffff9ff85ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__64
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_d 
                = (0x0000001fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__req_i)
                                   ? (IData)((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_i 
                                              >> 3U))
                                   : (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q)));
        }
    }
    if ((0x003fccfffff9ff87ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__65(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtop___024root___act_sequent__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___ico_comb__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___ico_comb__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___act_comb__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___ico_comb__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___ico_comb__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___ico_comb__TOP__10(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        {
            // Inlined CFunc: _eval_act
            if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                        = ((0x00010000U & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                            << 0x00000010U) 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                              << 1U))) 
                           | (0x0000ffffU & ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                              ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
                                                 >> 0x00000010U)
                                              : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i)));
                }
            }
            if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__1
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
                        = (((IData)((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                      >> 1U) & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
                                                >> 0x0000000fU))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & ((2U 
                                                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                                   ? 
                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i 
                                                   >> 0x00000010U)
                                                   : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i)));
                }
            }
            if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtop___024root___ico_comb__TOP__2(vlSelf);
            }
            if ((0x0000000000000018ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtop___024root___act_sequent__TOP__3(vlSelf);
            }
            if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtop___024root___ico_comb__TOP__4(vlSelf);
            }
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtop___024root___ico_comb__TOP__5(vlSelf);
            }
            if ((0x0000000000000060ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtop___024root___ico_comb__TOP__6(vlSelf);
            }
            if ((0x0000000000000018ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtop___024root___act_comb__TOP__1(vlSelf);
            }
            if ((5ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtop___024root___ico_comb__TOP__8(vlSelf);
            }
            if ((0x000000000000001cULL & vlSelfRef.__VactTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__7
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
                            = (0x0000003fU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI));
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BMux_D 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI;
                    } else {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
                            = (0x0000003fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CntZero_S)
                                               ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP)
                                               : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP) 
                                                  - (IData)(1U))));
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BMux_D 
                            = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                                << 0x0000001fU) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                                   >> 1U));
                    }
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN 
                        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S)
                            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BMux_D
                            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP);
                }
            }
            if ((0x0000000000000078ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtop___024root___ico_comb__TOP__9(vlSelf);
            }
            if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
                Vtop___024root___ico_comb__TOP__10(vlSelf);
            }
        }
    }
    return (__VactExecute);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/Proje/PeripheralModules/JTAG/tb_core_halt2/tb_core_debug2.sv", 21, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/Proje/PeripheralModules/JTAG/tb_core_halt2/tb_core_debug2.sv", 21, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/Proje/PeripheralModules/JTAG/tb_core_halt2/tb_core_debug2.sv", 21, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_ni & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");
    }
    if (VL_UNLIKELY(((vlSelfRef.dmi_req_addr_i & 0x80U)))) {
        Verilated::overWidthError("dmi_req_addr_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.dmi_req_op_i & 0xfcU)))) {
        Verilated::overWidthError("dmi_req_op_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.dmi_req_valid_i & 0xfeU)))) {
        Verilated::overWidthError("dmi_req_valid_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.dmi_resp_ready_i & 0xfeU)))) {
        Verilated::overWidthError("dmi_resp_ready_i");
    }
}
#endif  // VL_DEBUG
