// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h58f7d094_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtop__ConstPool__TABLE_hef056083_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h4ab95aae_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_hacbf9384_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h7b800239_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_hcc855e49_0;

void Vtop___024root___ico_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutVld_SO 
        = Vtop__ConstPool__TABLE_h58f7d094_0[((0x00000020U 
                                               & (IData)(vlSelfRef.__VdfgSynthAssign___Vtableidx2_h6e95ff9d_0_0)) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56))];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutVld_SO;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ready_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ready_o;
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

void Vtop___024root___ico_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__deassert_we 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__load_stall 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o;
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

void Vtop___024root___ico_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mul 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,17, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a)), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,17, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
        = (0x00000003ffffffffULL & (VL_EXTENDS_QQ(34,33, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_c) 
                                    + (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mul 
                                       + VL_EXTENDS_QI(34,32, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round))));
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac_msb1 
            = (1U & (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                             >> 0x00000021U)));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac_msb0 
            = (1U & (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                             >> 0x00000020U)));
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac_msb1 
            = (1U & (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                             >> 0x0000001fU)));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac_msb0 
            = (1U & (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                             >> 0x0000001fU)));
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result 
        = (0x00000003ffffffffULL & VL_SHIFTRS_QQI(34,34,5, 
                                                  (((QData)((IData)(
                                                                    ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                     & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac_msb1)))) 
                                                    << 0x00000021U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                        & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac_msb0)))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac)))), (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_imm)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__result_o = 0U;
    if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i))) {
        if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__result_o 
                    = (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result);
            }
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__result_o 
                = ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i))
                    ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i)
                        ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i)
                            ? (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i))
                            : ((0xffff0000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i) 
                               | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result)))
                        : (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result))
                    : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_result);
        }
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__result_o 
            = ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i))
                ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result)
                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_result);
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__result_o;
}

extern const VlUnpacked<CData/*2:0*/, 512> Vtop__ConstPool__TABLE_hbc1dcc12_0;

void Vtop___024root___ico_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mtvec_init_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_mtvec_init;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i 
        = (0xfffffffeU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_addr_i 
        = (0xfffffffeU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
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
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_flush_o = 1U;
    } else {
        if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
             & (0U < (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = (3U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q) 
                         - (IData)(1U)));
        }
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_flush_o = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                                                     | (0U 
                                                        < (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_masked 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_i) 
           & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                                  | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
    if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
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
    } else if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
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
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_addr_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_addr_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_flush 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_flush_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_valid_o 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
           & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
              | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__req_i) 
           & (2U > ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                    + (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_masked))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr 
        = (0xfffffffcU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_addr_i);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__flush_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_flush;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_valid_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_up 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__busy_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
           | (0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q;
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
        if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
             & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        }
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o 
            = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i)
                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr
                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q);
    } else {
        if ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
              | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)) 
             & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i))))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        }
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o 
            = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i)
                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr
                : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)
                    ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_target_i
                    : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_incr));
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_up)
                  ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down)
                      ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))
                  : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                     - (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__busy_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__busy_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__perf_imiss_o 
        = (1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                    | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__branch_req))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_ready 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__id_ready_i) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_busy 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__busy_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
           || (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_valid_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_addr_i 
        = (0xfffffffcU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__perf_imiss 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__perf_imiss_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_valid 
        = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__halt_if_i)) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_ready));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_o = 1U;
    if ((0U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U != (3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_o 
                    = (1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i)));
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
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_busy_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_busy;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_req_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__perf_imiss_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__perf_imiss;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_valid;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_busy 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__if_busy_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_req_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_req_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_addr_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_addr_i);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_addr_o;
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
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
            = ((2U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i)
                ? 3U : 0U);
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 1U;
    }
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
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__if_busy_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_busy;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_req_pmp 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_req_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_addr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_ready_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_d 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__if_busy_i) 
           | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__ctrl_busy_i) 
              | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__lsu_busy_i)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_req_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_req_pmp;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_addr_pmp 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_addr_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_ready_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_ready_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_req_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_req_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_addr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_addr_pmp;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_pop_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_ready_i) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_push_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
              & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_ready_i)) 
                 | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid))));
    vlSelfRef.tb_core_debug2__DOT__core_instr_req = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_req_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_addr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_addr_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_pop_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_push_o;
    vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_req_i 
        = vlSelfRef.tb_core_debug2__DOT__core_instr_req;
    vlSelfRef.tb_core_debug2__DOT__core_instr_addr 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_addr_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push;
    vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_addr_i 
        = vlSelfRef.tb_core_debug2__DOT__core_instr_addr;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock = 1U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i) 
         & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o)))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q)));
    }
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
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q;
    if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i) 
         & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__full_o)))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q) 
                                                 << 5U)))) 
                & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n) 
               | ((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_i)) 
                  << (0x0000003fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q) 
                                     << 5U))));
    }
    vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_addr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_addr_i;
    vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_addr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_addr_i;
    vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__is_dbg 
        = (0x00010000U == (0x000ff000U & vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_addr_i));
    vlSelfRef.tb_core_debug2__DOT__sys_addr = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_addr_o;
    vlSelfRef.tb_core_debug2__DOT__instr_dbg_addr = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_addr_o;
    vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_req_o 
        = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__is_dbg)) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_req_i));
    vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_req_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_req_i) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__is_dbg));
    vlSelfRef.tb_core_debug2__DOT__dm_slave_addr = 
        ((IData)(vlSelfRef.tb_core_debug2__DOT__data_req)
          ? vlSelfRef.tb_core_debug2__DOT__data_addr
          : vlSelfRef.tb_core_debug2__DOT__instr_dbg_addr);
    vlSelfRef.tb_core_debug2__DOT__sys_req = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_req_o;
    vlSelfRef.tb_core_debug2__DOT__instr_dbg_req = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_req_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_addr_i 
        = vlSelfRef.tb_core_debug2__DOT__dm_slave_addr;
    vlSelfRef.tb_core_debug2__DOT__sys_gnt = vlSelfRef.tb_core_debug2__DOT__sys_req;
    vlSelfRef.tb_core_debug2__DOT__instr_dbg_req_o 
        = vlSelfRef.tb_core_debug2__DOT__instr_dbg_req;
    vlSelfRef.tb_core_debug2__DOT__instr_dbg_gnt = 
        ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__data_req)) 
         & (IData)(vlSelfRef.tb_core_debug2__DOT__instr_dbg_req));
    vlSelfRef.tb_core_debug2__DOT__dm_slave_req = ((IData)(vlSelfRef.tb_core_debug2__DOT__instr_dbg_req) 
                                                   | (IData)(vlSelfRef.tb_core_debug2__DOT__data_req));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_addr_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_addr_i;
    vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_gnt_i 
        = vlSelfRef.tb_core_debug2__DOT__sys_gnt;
    vlSelfRef.instr_dbg_req_o = vlSelfRef.tb_core_debug2__DOT__instr_dbg_req_o;
    vlSelfRef.tb_core_debug2__DOT__instr_dbg_gnt_o 
        = vlSelfRef.tb_core_debug2__DOT__instr_dbg_gnt;
    vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_gnt_i 
        = vlSelfRef.tb_core_debug2__DOT__instr_dbg_gnt;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_req_i 
        = vlSelfRef.tb_core_debug2__DOT__dm_slave_req;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_addr_i;
    vlSelfRef.instr_dbg_gnt_o = vlSelfRef.tb_core_debug2__DOT__instr_dbg_gnt_o;
    vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_gnt_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__is_dbg)
            ? (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__dbg_gnt_i)
            : (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__sys_gnt_i));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_req_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__slave_req_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_d 
        = (0x0800U <= (0x00000fffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_addr 
        = (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__addr_i));
    vlSelfRef.tb_core_debug2__DOT__core_instr_gnt = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__core_gnt_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__req_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_req_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_addr;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_gnt_i 
        = vlSelfRef.tb_core_debug2__DOT__core_instr_gnt;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__req_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__req_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__instr_gnt_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__instr_gnt_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_d 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__req_i)
                           ? (IData)((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_i 
                                      >> 3U)) : (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q)));
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

void Vtop___024root___ico_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_vec 
        = ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode))
            ? ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c))))
            : ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_vec 
        = ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode))
            ? ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b))))
            : ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__scalar_replication_c)
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_vec
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__scalar_replication)
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_vec
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b);
}

void Vtop___024root___ico_comb__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_comb__TOP__10\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___ico_comb__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___ico_comb__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[1U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000020ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
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
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000040ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
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
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000010ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vtop___024root___ico_comb__TOP__2(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000018ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vtop___024root___ico_comb__TOP__3(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (4ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vtop___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VicoTriggered[1U] | vlSelfRef.__VicoTriggered[0U]))) {
        Vtop___024root___ico_comb__TOP__5(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000060ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vtop___024root___ico_comb__TOP__6(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x000000000000001cULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
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
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (5ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vtop___024root___ico_comb__TOP__8(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000078ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vtop___024root___ico_comb__TOP__9(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (7ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vtop___024root___ico_comb__TOP__10(vlSelf);
    }
}

void Vtop___024root___eval_triggers_vec__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      ((((((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__rst_ni)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_demux__DOT__rst_ni__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__clk_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_demux__DOT__clk_i__0))) 
                                                              << 2U)) 
                                                          | ((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__rst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__rst_n__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__clk__0))))) 
                                                         << 0x00000014U) 
                                                        | ((((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__rst_ni)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__rst_ni__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__clk_i) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__clk_i__0))) 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__rst_ni)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__rst_ni__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__clk_i) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__clk_i__0))))) 
                                                           << 0x00000010U)) 
                                                       | ((((((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__rst_ni)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__rst_ni__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__clk_i) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__clk_i__0))) 
                                                                 << 2U)) 
                                                             | ((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__rst_ni)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__rst_ni__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__clk_i) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__clk_i__0))))) 
                                                            << 0x0000000cU) 
                                                           | ((((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rst_ni)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rst_ni__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clk_i) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clk_i__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__rst_ni)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__rst_ni__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__clk_i) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__clk_i__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clk_ungated_i) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clk_ungated_i__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__clk__0)))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk_ungated_i) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk_ungated_i__0))) 
                                                               << 3U) 
                                                              | (((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk__0))) 
                                                                 << 1U) 
                                                                | ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__rst_n__0)))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__rst_n__0)))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Clk_CI) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Clk_CI__0))) 
                                                                   << 1U) 
                                                                  | ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__rst_n__0)))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__rst_n__0)) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n)) 
                                                                      & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n__0)))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rst_ni)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rst_ni__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__clk_i) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__clk_i__0))) 
                                                                  << 1U) 
                                                                 | ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n__0)))) 
                                                             << 0x0000000cU) 
                                                            | ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__rst_n__0)) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__rst_ni)) 
                                                                      & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__rst_ni__0)))) 
                                                               << 8U)) 
                                                           | (((((((IData)(vlSelfRef.tb_core_debug2__DOT__clk_i) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__clk_i__0))) 
                                                                  << 3U) 
                                                                 | ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
                                                                     != vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b__1) 
                                                                    << 2U)) 
                                                                | (((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                                                     != vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a__1) 
                                                                    << 1U) 
                                                                   | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                                      != vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__1))) 
                                                               << 4U) 
                                                              | ((((0U 
                                                                    != 
                                                                    (((((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                         ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[0U]) 
                                                                        | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                           ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[1U])) 
                                                                       | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[2U])) 
                                                                      | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[3U])) 
                                                                     | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                        ^ vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[4U]))) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelfRef.__VdfgSynthAssign___Vtableidx2_h6e95ff9d_0_0) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VdfgSynthAssign___Vtableidx2_h6e95ff9d_0_0__1)) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clear_resumeack_i) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clear_resumeack_i__1)) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o__1))))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o__1 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clear_resumeack_i__1 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clear_resumeack_i;
    vlSelfRef.__Vtrigprevexpr___TOP____VdfgSynthAssign___Vtableidx2_h6e95ff9d_0_0__1 
        = vlSelfRef.__VdfgSynthAssign___Vtableidx2_h6e95ff9d_0_0;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[0U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[1U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[2U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[3U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[4U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__1 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a__1 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b__1 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__clk_i__0 
        = vlSelfRef.tb_core_debug2__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__rst_ni__0 
        = vlSelfRef.tb_core_debug2__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__clk_i__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rst_ni__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Clk_CI__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Clk_CI;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk_ungated_i__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk_ungated_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clk_ungated_i__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clk_ungated_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__clk_i__0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__rst_ni__0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clk_i__0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rst_ni__0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__clk_i__0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__rst_ni__0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__clk_i__0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__rst_ni__0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__clk_i__0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__rst_ni__0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__clk_i__0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__rst_ni__0 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__clk__0 
        = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__rst_n__0 
        = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_demux__DOT__clk_i__0 
        = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_core_debug2__DOT__u_demux__DOT__rst_ni__0 
        = vlSelfRef.tb_core_debug2__DOT__u_demux__DOT__rst_ni;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000040ULL 
                                         | vlSelfRef.__VactTriggered[0U]);
    }
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___act_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__3\n"); );
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
}

void Vtop___024root___act_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h9e67c271_0;
extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h7c8123e3_0;

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q 
        = ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__rst_ni))) 
           || (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d));
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__rst_ni) {
        if ((1U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U] 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U];
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U] 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U];
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U] 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U];
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U] 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U];
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U] 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U];
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U] 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U];
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U] 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U];
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U] 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U];
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d;
        } else {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                = (1U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
            VL_ASSIGN_W(256, vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q, Vtop__ConstPool__CONST_h9e67c271_0);
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q = 0ULL;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = 0x00040000U;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
        }
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
        VL_ASSIGN_W(256, vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q, Vtop__ConstPool__CONST_h9e67c271_0);
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q = 0ULL;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = 0x00040000U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q_aligned 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_o 
        = (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_o 
        = (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[0U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[1U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[2U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[3U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[4U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[5U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[6U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[7U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbautoincrement_o 
        = (1U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                 >> 0x00000010U));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbreadonaddr_o 
        = (1U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                 >> 0x00000014U));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbreadondata_o 
        = (1U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                 >> 0x0000000fU));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaccess_o 
        = (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                 >> 0x00000011U));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmactive_o 
        = (1U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__ndmreset_o 
        = (1U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                 >> 1U));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o 
        = ((0x000ffc00U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                           << 4U)) | (0x000003ffU & 
                                      (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                       >> 0x00000010U)));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbdata_write 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmd_valid 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaddress_csrs_sba 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__data_csrs_mem 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[0U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[0U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[1U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[1U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[2U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[2U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[3U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[3U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[4U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[4U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[5U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[5U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[6U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[6U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[7U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[7U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbautoincrement 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbautoincrement_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbreadonaddr 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbreadonaddr_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbreadondata 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbreadondata_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaccess 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaccess_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmd 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmactive_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmactive_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__ndmreset_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__hartsel 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart 
        = (1U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltreq_o = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumereq_o = 0U;
    if ((0U >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) {
        if (VL_LIKELY(((0U >= (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltreq_o 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltreq_o)) 
                   | (1U & ((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                             >> 0x0000001fU) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumereq_o 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumereq_o)) 
                   | (1U & ((1U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                   >> 0x0000001eU)) 
                            << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbdata_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbdata_write;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmd_valid;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaddress_csrs_sba;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__data_csrs_mem;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[0U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[0U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[1U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[1U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[2U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[2U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[3U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[3U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[4U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[4U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[5U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[5U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[6U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[6U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[7U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[7U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbautoincrement_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbautoincrement;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbreadonaddr_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbreadonaddr;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbreadondata_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbreadondata;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaccess;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmd;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__dmactive_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmactive_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__dmactive_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmactive_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ndmreset_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__hartsel;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__resumereq 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumereq_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__haltreq 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltreq_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__address 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx 
        = (3U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_i);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[0U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[0U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[1U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[1U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[2U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[2U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[3U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[3U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[4U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[4U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[5U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[5U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[6U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[6U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[7U] 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[7U];
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr 
        = (((IData)(1U) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i)) 
           & (- (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en))));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_mask 
        = ((IData)(0xffffffffU) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
        = (0x00ffffffU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_i);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__ndmreset_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel 
        = (1U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel_i);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__resumereq;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__haltreq_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__haltreq;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_add_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__address;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i) 
                  >> 2U)))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask 
            = ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i))
                ? 0x0fU : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i))
                            ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                               | (0x0fU & ((IData)(3U) 
                                           << (2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx)))))
                            : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                               | (0x0fU & ((IData)(1U) 
                                           << (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx))))));
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_o 
        = (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_i 
           + vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx_masked 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx) 
           & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_mask);
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 0U;
    VL_ASSIGN_W(512, vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd, Vtop__ConstPool__CONST_h7c8123e3_0);
    if ((0U == (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_i 
                >> 0x00000018U))) {
        if ((IData)(((0x00030000U == (0x00030000U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)) 
                     & (3U > (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                    >> 0x00000014U)))))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                              >> 0x0000000eU)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else if ((IData)((0x0000100aU == (0x0000103fU 
                                                & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.__Vfunc_load__16__size = 
                    (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                           >> 0x00000014U));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_16__load 
                    = (0x38050403U | ((IData)(vlSelfRef.__Vfunc_load__16__size) 
                                      << 0x0000000cU));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_16__load;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x7b341073U;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
            } else if ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)) {
                if ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)) {
                    vlSelfRef.__Vfunc_float_load__19__dest 
                        = (0x0000001fU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar);
                    vlSelfRef.__Vfunc_float_load__19__size 
                        = (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                 >> 0x00000014U));
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_19__float_load 
                        = (0x38050007U | (((IData)(vlSelfRef.__Vfunc_float_load__19__size) 
                                           << 0x0000000cU) 
                                          | ((IData)(vlSelfRef.__Vfunc_float_load__19__dest) 
                                             << 7U)));
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_19__float_load;
                } else {
                    vlSelfRef.__Vfunc_load__20__dest 
                        = (0x0000001fU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar);
                    vlSelfRef.__Vfunc_load__20__size 
                        = (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                 >> 0x00000014U));
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_20__load 
                        = (0x38050003U | (((IData)(vlSelfRef.__Vfunc_load__20__size) 
                                           << 0x0000000cU) 
                                          | ((IData)(vlSelfRef.__Vfunc_load__20__dest) 
                                             << 7U)));
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_20__load;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.__Vfunc_load__22__size = 
                    (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                           >> 0x00000014U));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_22__load 
                    = (0x38050403U | ((IData)(vlSelfRef.__Vfunc_load__22__size) 
                                      << 0x0000000cU));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_22__load;
                vlSelfRef.__Vfunc_csrw__23__csr = (0x00000fffU 
                                                   & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar);
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_23__csrw 
                    = (0x00041073U | ((IData)(vlSelfRef.__Vfunc_csrw__23__csr) 
                                      << 0x00000014U));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_23__csrw))));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_23__csrw))) 
                               >> 0x00000020U));
            }
        } else if ((IData)(((0x00020000U == (0x00030000U 
                                             & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)) 
                            & (3U > (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                           >> 0x00000014U)))))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                              >> 0x0000000eU)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else if ((IData)((0x0000100aU == (0x0000103fU 
                                                & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)))) {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x7b302473U;
                vlSelfRef.__Vfunc_store__29__size = 
                    (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                           >> 0x00000014U));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_29__store 
                    = (0x38850023U | ((IData)(vlSelfRef.__Vfunc_store__29__size) 
                                      << 0x0000000cU));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_29__store))));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_29__store))) 
                               >> 0x00000020U));
            } else if ((0x00001000U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)) {
                if ((0x00000020U & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)) {
                    vlSelfRef.__Vfunc_float_store__31__src 
                        = (0x0000001fU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar);
                    vlSelfRef.__Vfunc_float_store__31__size 
                        = (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                 >> 0x00000014U));
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_31__float_store 
                        = (0x38050027U | (((IData)(vlSelfRef.__Vfunc_float_store__31__src) 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.__Vfunc_float_store__31__size) 
                                             << 0x0000000cU)));
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_31__float_store;
                } else {
                    vlSelfRef.__Vfunc_store__32__src 
                        = (0x0000001fU & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar);
                    vlSelfRef.__Vfunc_store__32__size 
                        = (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                 >> 0x00000014U));
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_32__store 
                        = (0x38050023U | (((IData)(vlSelfRef.__Vfunc_store__32__src) 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.__Vfunc_store__32__size) 
                                             << 0x0000000cU)));
                    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_32__store;
                }
            } else {
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.__Vfunc_csrr__34__csr = (0x00000fffU 
                                                   & vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar);
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_34__csrr 
                    = (0x00002473U | ((IData)(vlSelfRef.__Vfunc_csrr__34__csr) 
                                      << 0x00000014U));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_34__csrr;
                vlSelfRef.__Vfunc_store__35__size = 
                    (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                           >> 0x00000014U));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_35__store 
                    = (0x38850023U | ((IData)(vlSelfRef.__Vfunc_store__35__size) 
                                      << 0x0000000cU));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_35__store))));
                vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_35__store))) 
                               >> 0x00000020U));
            }
        } else if ((1U & ((3U <= (7U & (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                        >> 0x00000014U))) 
                          | (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                             >> 0x00000013U)))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
        }
        if ((1U & ((vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                    >> 0x00000012U) & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command))))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x00000013U;
        }
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset_ack_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__ndmreset_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_aligned 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_wdata_aligned 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__haltreq_aligned 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__haltreq_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__debug_req_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__haltreq_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_add_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_add_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaddress_sba_csrs 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_wdata_o 
        = (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbdata_i 
           << ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx_masked) 
               << 3U));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__ndmreset_ack_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset_ack_i;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__debug_req_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__debug_req_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__master_addr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_add_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaddress_sba_csrs;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_wdata_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_wdata_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__debug_req_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__debug_req_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__master_wdata_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_wdata_o;
    vlSelfRef.tb_core_debug2__DOT__debug_req_o = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__debug_req_o;
    vlSelfRef.debug_req_o = vlSelfRef.tb_core_debug2__DOT__debug_req_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__debug_req_i 
        = vlSelfRef.tb_core_debug2__DOT__debug_req_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_req_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__debug_req_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_req_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__debug_req_i;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__rst_ni) 
           && ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__flush_i))) 
               && (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_n)));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__rst_ni) 
           && ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__flush_i))) 
               && (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_n)));
    if (vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__rst_ni) {
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gate_clock)))) {
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[0U] 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n[0U];
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[1U] 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n[1U];
            vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[2U] 
                = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n[2U];
        }
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q 
            = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__flush_i)
                ? 0U : (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n));
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[0U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[1U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[2U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q = 0U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__data_o 
        = (0x00000003ffffffffULL & ((((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q
                                                      [
                                                      (((IData)(0x00000021U) 
                                                        + 
                                                        (0x0000007fU 
                                                         & ((IData)(0x00000022U) 
                                                            * (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))) 
                                                       >> 5U)])) 
                                      << ((0U == (0x0000001fU 
                                                  & ((IData)(0x00000022U) 
                                                     * (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q))))
                                           ? 0x00000020U
                                           : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & ((IData)(0x00000022U) 
                                                    * (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))))) 
                                     | (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000022U) 
                                                    * (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q))))
                                          ? 0ULL : 
                                         ((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q
                                                          [
                                                          (((IData)(0x0000001fU) 
                                                            + 
                                                            (0x0000007fU 
                                                             & ((IData)(0x00000022U) 
                                                                * (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & ((IData)(0x00000022U) 
                                                    * (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))))) 
                                        | ((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q
                                                           [
                                                           (3U 
                                                            & (((IData)(0x00000022U) 
                                                                * (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)) 
                                                               >> 5U))])) 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000022U) 
                                                  * (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))))) 
                                    & (- (QData)((IData)(
                                                         (0x43U 
                                                          >= 
                                                          (0x0000007fU 
                                                           & ((IData)(0x00000022U) 
                                                              * (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))))))));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__usage_o 
        = (1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__empty_o 
        = (0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o 
        = (2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_resp_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__data_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_empty 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__empty_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_full 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_resp_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_resp_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_resp_valid_o 
        = (1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_empty)));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop 
        = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_empty)) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_resp_ready_i));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_ready_o 
        = (1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_full)));
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__dmi_resp_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_resp_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_resp_valid_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_resp_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__pop_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_req_ready_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_ready_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_valid_i) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_ready_o));
    vlSelfRef.tb_core_debug2__DOT__dmi_resp = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__dmi_resp_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__dmi_resp_valid_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_resp_valid_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__dmi_req_ready_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_req_ready_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__push_i 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push;
    vlSelfRef.tb_core_debug2__DOT__dmi_resp_data_o 
        = (IData)((vlSelfRef.tb_core_debug2__DOT__dmi_resp 
                   >> 2U));
    vlSelfRef.tb_core_debug2__DOT__dmi_resp_resp_o 
        = (3U & (IData)(vlSelfRef.tb_core_debug2__DOT__dmi_resp));
    vlSelfRef.tb_core_debug2__DOT__dmi_resp_valid_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__dmi_resp_valid_o;
    vlSelfRef.tb_core_debug2__DOT__dmi_req_ready_o 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__dmi_req_ready_o;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__push_i) 
         & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o)))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__pop_i) 
         & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__empty_o)))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)));
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__push_i) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__pop_i)) 
          & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o))) 
         & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__empty_o)))) {
        vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_core_debug2__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.dmi_resp_data_o = vlSelfRef.tb_core_debug2__DOT__dmi_resp_data_o;
    vlSelfRef.dmi_resp_resp_o = vlSelfRef.tb_core_debug2__DOT__dmi_resp_resp_o;
    vlSelfRef.dmi_resp_valid_o = vlSelfRef.tb_core_debug2__DOT__dmi_resp_valid_o;
    vlSelfRef.dmi_req_ready_o = vlSelfRef.tb_core_debug2__DOT__dmi_req_ready_o;
}

extern const VlUnpacked<CData/*3:0*/, 512> Vtop__ConstPool__TABLE_h55996da2_0;

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_43;
    __VdfgRegularize_h6e95ff9d_0_43 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_44;
    __VdfgRegularize_h6e95ff9d_0_44 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    __VdfgRegularize_h6e95ff9d_0_45 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_47;
    __VdfgRegularize_h6e95ff9d_0_47 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_48;
    __VdfgRegularize_h6e95ff9d_0_48 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_49;
    __VdfgRegularize_h6e95ff9d_0_49 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_50;
    __VdfgRegularize_h6e95ff9d_0_50 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_52;
    __VdfgRegularize_h6e95ff9d_0_52 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_53;
    __VdfgRegularize_h6e95ff9d_0_53 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_54;
    __VdfgRegularize_h6e95ff9d_0_54 = 0;
    // Body
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_pipe_stall_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__perf_pipeline_stall));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_imiss_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__perf_imiss_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_minstret_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__minstret));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_store_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
                & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_id)) 
               & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_we_id)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_load_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
                & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_id)) 
               & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_we_id))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_compressed_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
               & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_compressed_i)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jump_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
               & ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id)) 
                  | (2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_taken_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_o) 
               & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_decision_i)));
    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jr_stall_o 
            = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jr_stall) 
                & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__halt_id))) 
               & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_ld_stall_o 
            = (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__load_stall) 
                & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__halt_id))) 
               & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q));
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i)))) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o) {
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_waddr_ex_o = 0U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[0U] 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands[0U];
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[1U] 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands[1U];
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[2U] 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands[2U];
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_op_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_op;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_flags_ex_o = 0U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_lat;
                    }
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_id) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__atop_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__atop_id;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_reg_offset_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_reg_offset_id;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_type_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_type_id;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_we_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_we_id;
                    }
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_en) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_id;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_is_clpx_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_clpx;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_is_subrot_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_subrot;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operator_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operator;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_clpx_shift_ex_o 
                            = (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 0x0dU));
                    }
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_id;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_a_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_b_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_sel_subword_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_sel_subword;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operator_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operator;
                    }
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_en) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_c_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_is_clpx_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_clpx;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_a_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_b_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_signed_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_signed;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operator_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operator;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_shift_ex_o 
                            = (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 0x0dU));
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_img_ex_o 
                            = (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 0x19U));
                    }
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_ex_o 
                        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_id) 
                           && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_id));
                    if (((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id)) 
                         | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_id))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i;
                    }
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o 
                        = (3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id));
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_en_ex_o 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_en;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_en_ex_o 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_en;
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_id;
                    }
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_op_ex_o 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_op;
                    if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o = 1U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_id;
                    } else {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o = 0U;
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o 
                            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en;
                    }
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_id;
                } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_ex_o = 0U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o = 0U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_en_ex_o = 0U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_en_ex_o = 1U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_op_ex_o = 0U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o = 0U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o = 0U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operator_ex_o = 3U;
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o = 0U;
                }
            }
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_c_ex_o 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id;
            } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_c_ex_o 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c;
                }
            }
        }
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i) {
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i)))) {
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id;
            } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o = 0U;
            } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_access_ex_o) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o = 0U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i)))) {
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_access_ex_o 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_access;
                }
            }
        }
        if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i) {
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_ex_o = 1U;
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b_ex_o = 4U;
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr_ex_o) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a_ex_o 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id;
                }
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr_ex_o = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i)))) {
            if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_ex_o = 0U;
                if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_en) {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b_ex_o 
                        = (((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel)) 
                            & ((0x16U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operator)) 
                               | (0x17U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operator))))
                            ? (0x7fffffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b)
                            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b);
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a_ex_o 
                        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a;
                }
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr_ex_o 
                    = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr;
            } else if (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_ex_o = 0U;
            }
        }
    } else {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jr_stall_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_ld_stall_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_waddr_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[0U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[1U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[2U] = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_op_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_flags_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__atop_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_c_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_a_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_c_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_b_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_sel_subword_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_reg_offset_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_is_clpx_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_is_clpx_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_a_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_b_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_signed_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operator_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_is_subrot_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_type_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_en_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_en_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_op_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operator_ex_o = 3U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_shift_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_img_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_clpx_shift_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_we_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_access_ex_o = 0U;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr_ex_o = 0U;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_pipe_stall 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_pipe_stall_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_imiss 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_imiss_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_minstret 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_minstret_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_store 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_store_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_load 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_load_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_compressed 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_compressed_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_jump 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jump_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_branch_taken 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_taken_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_o 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
               & (3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_jr_stall 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jr_stall_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_ld_stall 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_ld_stall_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_waddr_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_waddr_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_operands_ex[0U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[0U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_operands_ex[1U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[1U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_operands_ex[2U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[2U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_op_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_op_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_flags_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_flags_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_sign_ext_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_atop_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__atop_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__imm_vec_ext_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_dot_op_c_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_c_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_imm_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_operand_a_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_a_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_operand_c_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_c_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_operand_b_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_b_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_sel_subword_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_sel_subword_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_reg_offset_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_reg_offset_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_is_clpx_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_is_clpx_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_signed_mode_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_is_clpx_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_is_clpx_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_dot_op_a_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_a_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_dot_op_b_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_b_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operand_c_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_dot_signed_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_signed_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_load_event_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__bmask_a_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__pc_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__bmask_b_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_lat_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_operator_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operator_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_is_subrot_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_is_subrot_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__branch_in_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_type_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_type_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_en_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_en_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_en_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_en_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_alu_waddr_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_op_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_op_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_we_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_en_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_vec_mode_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_alu_we_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_waddr_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_waddr_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operator_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operator_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_clpx_shift_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_shift_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_clpx_img_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_img_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_clpx_shift_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_clpx_shift_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_we_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_we_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_we_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_we_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_req_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_req_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_misaligned_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operand_b_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operand_a_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_pipe_stall_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_pipe_stall;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_imiss_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_imiss;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_minstret_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_minstret;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_store_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_store;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_load_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_load;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_compressed_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_compressed;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jump_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_jump;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_taken_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_branch_taken;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jr_stall_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_jr_stall;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_ld_stall_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_ld_stall;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_waddr_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_waddr_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_i[0U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_operands_ex[0U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_i[1U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_operands_ex[1U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_i[2U] 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_operands_ex[2U];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_op_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_op_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_flags_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_flags_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_sign_ext_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_atop_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__imm_vec_ext_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__imm_vec_ext_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_c_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_dot_op_c_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_imm_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_imm_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_a_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_operand_a_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_c_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_operand_c_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_b_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_operand_b_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_sel_subword_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_sel_subword_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_reg_offset_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_reg_offset_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_is_clpx_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_is_clpx_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_signed_mode_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_signed_mode_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_clpx_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_is_clpx_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_a_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_dot_op_a_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_b_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_dot_op_b_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operand_c_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_c_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operand_c_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_signed_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_dot_signed_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_load_event_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__bmask_a_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__bmask_a_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__pc_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__pc_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__bmask_b_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__bmask_b_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_lat_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_lat_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operator_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_operator_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_subrot_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_is_subrot_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__branch_in_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__branch_in_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_type_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_en_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_en_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_alu_waddr_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_op 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_op_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_en_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_en_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_vec_mode_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_vec_mode_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_alu_we_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operator_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operator_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_shift_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_clpx_shift_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_img_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mult_clpx_img_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_clpx_shift_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_clpx_shift_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_we_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__lsu_en_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_req_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_req_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__data_misaligned_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_misaligned_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_misaligned_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_b_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operand_b_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__operand_b_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operand_b_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_wdata 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operand_a_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_a_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operand_a_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__operand_a_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operand_a_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_branch 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__apu_flags 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__apu_flags_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_atop 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_ex_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__imm_vec_ext_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_c_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_imm_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_a_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_c_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_b_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_sel_subword_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_is_clpx_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_signed_mode_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_clpx_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_clpx_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_a_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_b_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_c_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__jump_target_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_c_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_signed_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__bmask_a_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__bmask_b_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operator_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_subrot_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__enable_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__enable_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_fw_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_op;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_vec_mode_i;
    __VdfgRegularize_h6e95ff9d_0_45 = ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_en_i)) 
                                       & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_access_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_access_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operator_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_shift_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_img_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_clpx_shift_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_we 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_ex_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_st 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_b_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_wdata;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_a_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__useincr_addr_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr_ex_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__mhpmevent_branch;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_atop_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_atop;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round_tmp 
        = ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__jump_target_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__jump_target_o;
    __VdfgRegularize_h6e95ff9d_0_47 = (IData)((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                >> 1U) 
                                               & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                  >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_48 = (IData)((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                >> 1U) 
                                               & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                  >> 0x0000001fU)));
    __VdfgRegularize_h6e95ff9d_0_49 = (1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                             & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_50 = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                       & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                          >> 0x0000001fU));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel 
        = (3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_first 
        = ((IData)(0xfffffffeU) << (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_is_msu 
        = (1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_alu_waddr_fw 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_fw_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i)))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0U;
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_power_o 
        = __VdfgRegularize_h6e95ff9d_0_45;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_o 
        = __VdfgRegularize_h6e95ff9d_0_45;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__csr_access_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_access_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_addr_int 
        = (0x00000fffU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__alu_operand_b_ex 
                          & (- (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_access_ex)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpCode_SI 
        = (3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0fU;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__extract_is_signed 
        = (0x28U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 2U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 1U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__do_min 
        = ((0x17U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
           | ((0x10U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
              | ((0x11U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | (0x16U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_signed 
        = (1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i));
    __VdfgRegularize_h6e95ff9d_0_44 = ((0x19U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                       | (0x18U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed 
        = Vtop__ConstPool__TABLE_h55996da2_0[(((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i) 
                                               << 7U) 
                                              | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))];
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate 
        = ((0x19U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
           | ((0x1dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
              | ((0x1bU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i) 
                    | (0x1fU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))))));
    __VdfgRegularize_h6e95ff9d_0_17 = ((0x1dU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                       | (0x1cU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)));
    __VdfgRegularize_h6e95ff9d_0_43 = ((0x31U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                       | ((0x30U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                          | ((0x33U 
                                              == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                             | (0x32U 
                                                == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))));
    __VdfgRegularize_h6e95ff9d_0_52 = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i) 
                                       & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_we_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_we;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpA_DI 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg 
        = (~ vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                        << 1U)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                          >> 1U)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001fU))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
        = (~ vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec 
        = (((((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
               >> 0x00000018U) == (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                   >> 0x00000018U)) 
             << 3U) | (((0x000000ffU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                        >> 0x00000010U)) 
                        == (0x000000ffU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                           >> 0x00000010U))) 
                       << 2U)) | ((((0x000000ffU & 
                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                      >> 8U)) == (0x000000ffU 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 8U))) 
                                   << 1U) | ((0x000000ffU 
                                              & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i) 
                                             == (0x000000ffU 
                                                 & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__addr_useincr_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__useincr_addr_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events 
        = (1U | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_compressed_i) 
                   << 0x0000000aU) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_taken_i) 
                                       << 9U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_i) 
                                                 << 8U))) 
                 | ((((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jump_i) 
                        << 3U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_store_i) 
                                  << 2U)) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_load_i) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_imiss_i))) 
                     << 4U) | ((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jr_stall_i) 
                                 << 3U) | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_ld_stall_i) 
                                           << 2U)) 
                               | ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_minstret_i) 
                                  << 1U)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_atop_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_atop_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round 
        = ((- (IData)((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)))) 
           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round_tmp 
              >> 1U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__jump_target_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__jump_target_ex;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
        = (((QData)((IData)(((((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                               << 0x00000011U) | (0x0001fe00U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                     >> 0x0000000fU))) 
                             | (((IData)((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                           >> 1U) & 
                                          (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                           >> 0x00000017U))) 
                                 << 8U) | (0x000000ffU 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                              >> 0x00000010U)))))) 
            << 0x00000012U) | (QData)((IData)(((((IData)(__VdfgRegularize_h6e95ff9d_0_47) 
                                                 << 0x00000011U) 
                                                | (0x0001fe00U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                      << 1U))) 
                                               | (((IData)(
                                                           (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                             >> 1U) 
                                                            & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                               >> 7U))) 
                                                   << 8U) 
                                                  | (0x000000ffU 
                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a 
        = (((QData)((IData)((((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                              << 0x00000010U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                 >> 0x00000010U)))) 
            << 0x00000011U) | (QData)((IData)((((IData)(__VdfgRegularize_h6e95ff9d_0_47) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i)))));
    __VdfgRegularize_h6e95ff9d_0_54 = (((IData)(__VdfgRegularize_h6e95ff9d_0_49) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
        = (((QData)((IData)(((((IData)(__VdfgRegularize_h6e95ff9d_0_50) 
                               << 0x00000011U) | (0x0001fe00U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                     >> 0x0000000fU))) 
                             | ((0x00000100U & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                 << 8U) 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                   >> 0x0000000fU))) 
                                | (0x000000ffU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                  >> 0x00000010U)))))) 
            << 0x00000012U) | (QData)((IData)(((((IData)(__VdfgRegularize_h6e95ff9d_0_49) 
                                                 << 0x00000011U) 
                                                | (0x0001fe00U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                      << 1U))) 
                                               | ((0x00000100U 
                                                   & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                       << 8U) 
                                                      & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                         << 1U))) 
                                                  | (0x000000ffU 
                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i))))));
    __VdfgRegularize_h6e95ff9d_0_53 = (((IData)(__VdfgRegularize_h6e95ff9d_0_50) 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                          >> 0x00000010U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
        = ((~ vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_first) 
           << (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_op_a_msu 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
           ^ (- (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_is_msu))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_op_b_msu 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i 
           & (- (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_is_msu))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_alu_waddr_fw;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_alu_we_fw_power 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_power_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_alu_we_fw 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_addr 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_addr_int;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            if ((0x00000010U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                                if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0cU;
                                }
                            } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 3U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                                if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0U;
                                } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
        = ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i
            : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
                ? ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                    << 0x00000010U) | (0x0000ffffU 
                                       & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i))
                : ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                    << 0x00000018U) | ((0x00ff0000U 
                                        & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           << 0x00000010U)) 
                                       | ((0x0000ff00U 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i))))));
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            if ((0x00000010U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                            if ((0x3eU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 3U;
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                         >> 1U)))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
        = ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
            ? ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001fU))) 
                                 << 8U)) | (0x000000ffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                             >> 0x00000017U)))))) 
                << 0x00000010U) | ((0x0000ff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                                  >> 0x0000000fU)))) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      (- (IData)((1U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 7U)))))))
            : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i
                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_signed) 
           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
              >> 0x0000001fU));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec 
        = (((VL_GTS_III(9, ((((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                               >> 0x0000001fU) & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                  >> 3U)) 
                             << 8U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                       >> 0x00000018U)), 
                        (((IData)((((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                    >> 3U) & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                              >> 0x0000001fU))) 
                          << 8U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                    >> 0x00000018U))) 
             << 3U) | (VL_GTS_III(9, ((0x00000100U 
                                       & ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 0x0000000fU) 
                                          & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                             << 6U))) 
                                      | (0x000000ffU 
                                         & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                            >> 0x00000010U))), 
                                  ((0x00000100U & (
                                                   ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 6U) 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                      >> 0x0000000fU))) 
                                   | (0x000000ffU & 
                                      (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                       >> 0x00000010U)))) 
                       << 2U)) | ((VL_GTS_III(9, ((0x00000100U 
                                                   & ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                       >> 7U) 
                                                      & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                         << 7U))) 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                        >> 8U))), 
                                              ((0x00000100U 
                                                & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 7U) 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                      >> 7U))) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 8U)))) 
                                   << 1U) | VL_GTS_III(9, 
                                                       ((0x00000100U 
                                                         & ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                             << 1U) 
                                                            & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                               << 8U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i)), 
                                                       ((0x00000100U 
                                                         & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                             << 8U) 
                                                            & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                               << 1U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic 
        = ((0x28U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_44) 
              | ((0x24U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | (IData)(__VdfgRegularize_h6e95ff9d_0_17))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_44) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_17) 
              | ((0x1bU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | ((0x1eU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                    | ((0x1fU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                       | (0x1aU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left 
        = ((0x2aU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_43) 
              | ((0x27U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | ((0x37U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                    | ((0x35U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                       | (0x49U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__enable_i) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_43));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_norm 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_clpx_i)
            ? (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex))
            : (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i) 
                << 0x00000018U) | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i) 
                                    << 0x00000010U) 
                                   | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i) 
                                       << 8U) | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_we_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_we_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_eq 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg 
           & (- (IData)((0x17U != (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate)
            ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i)
                ? (~ ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                       << 0x00000010U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                          >> 0x00000010U)))
                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg)
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                        << 1U)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                          >> 1U)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 0x0000001fU))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
        = (((((((0x0000000cU & (VL_COUNTONES_I((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                >> 0x0000001eU)) 
                                << 2U)) | (3U & VL_COUNTONES_I(
                                                               (3U 
                                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                   >> 0x0000001cU))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                      >> 0x0000001aU))) 
                                                   << 2U)) 
                                   | (3U & VL_COUNTONES_I(
                                                          (3U 
                                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                              >> 0x00000018U))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & (VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                      >> 0x00000016U))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & VL_COUNTONES_I(
                                                                   (3U 
                                                                    & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                       >> 0x00000014U))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & (VL_COUNTONES_I(
                                                                   (3U 
                                                                    & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                       >> 0x00000012U))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & VL_COUNTONES_I(
                                                                    (3U 
                                                                     & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                        >> 0x00000010U))))))) 
            << 0x00000010U) | (((((0x0000000cU & (VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                     >> 0x0000000eU))) 
                                                  << 2U)) 
                                  | (3U & VL_COUNTONES_I(
                                                         (3U 
                                                          & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                             >> 0x0000000cU))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & (VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                     >> 0x0000000aU))) 
                                                  << 2U)) 
                                  | (3U & VL_COUNTONES_I(
                                                         (3U 
                                                          & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                             >> 8U))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & (VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                     >> 6U))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                      >> 4U))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & (VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                      >> 2U))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & VL_COUNTONES_I(
                                                                   (3U 
                                                                    & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i)))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (0x0000000fU & (- (IData)((IData)((0x0fU 
                                             == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__addr_useincr_ex_i)
            ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__operand_a_ex_i 
               + vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__operand_b_ex_i)
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__operand_a_ex_i);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_atop_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a_1_neg 
        = (0x0001ffffU & ((IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a 
                                   >> 0x00000011U)) 
                          ^ (- (IData)(((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i)) 
                                        & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U] 
        = ((0xfffc0000U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U]) 
           | (0x0003ffffU & VL_MULS_III(18, (0x0003ffffU 
                                             & VL_EXTENDS_II(18,9, 
                                                             (0x000001ffU 
                                                              & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a)))), 
                                        (0x0003ffffU 
                                         & VL_EXTENDS_II(18,9, 
                                                         (0x000001ffU 
                                                          & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b)))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U] 
        = ((0x0003ffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U]) 
           | (VL_MULS_III(18, (0x0003ffffU & VL_EXTENDS_II(18,9, 
                                                           (0x000001ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                       >> 9U))))), 
                          (0x0003ffffU & VL_EXTENDS_II(18,9, 
                                                       (0x000001ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                   >> 9U)))))) 
              << 0x00000012U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
        = ((0xfffffff0U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U]) 
           | (0x0000000fU & (VL_MULS_III(18, (0x0003ffffU 
                                              & VL_EXTENDS_II(18,9, 
                                                              (0x000001ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                          >> 9U))))), 
                                         (0x0003ffffU 
                                          & VL_EXTENDS_II(18,9, 
                                                          (0x000001ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                      >> 9U)))))) 
                             >> 0x0000000eU)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
        = ((0xffc0000fU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U]) 
           | (0x003ffff0U & (VL_MULS_III(18, (0x0003ffffU 
                                              & VL_EXTENDS_II(18,9, 
                                                              (0x000001ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                          >> 0x00000012U))))), 
                                         (0x0003ffffU 
                                          & VL_EXTENDS_II(18,9, 
                                                          (0x000001ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                      >> 0x00000012U)))))) 
                             << 4U)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
        = ((0x003fffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U]) 
           | (VL_MULS_III(18, (0x0003ffffU & VL_EXTENDS_II(18,9, 
                                                           (0x000001ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                       >> 0x0000001bU))))), 
                          (0x0003ffffU & VL_EXTENDS_II(18,9, 
                                                       (0x000001ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                   >> 0x0000001bU)))))) 
              << 0x00000016U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[2U] 
        = (0x000000ffU & (VL_MULS_III(18, (0x0003ffffU 
                                           & VL_EXTENDS_II(18,9, 
                                                           (0x000001ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                       >> 0x0000001bU))))), 
                                      (0x0003ffffU 
                                       & VL_EXTENDS_II(18,9, 
                                                       (0x000001ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                   >> 0x0000001bU)))))) 
                          >> 0x0000000aU));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
        = (((QData)((IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_52)
                              ? __VdfgRegularize_h6e95ff9d_0_54
                              : __VdfgRegularize_h6e95ff9d_0_53))) 
            << 0x00000011U) | (QData)((IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_52)
                                                ? __VdfgRegularize_h6e95ff9d_0_53
                                                : __VdfgRegularize_h6e95ff9d_0_54))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bset_result 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
           | vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_inv 
        = (~ vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_value 
        = ((- (IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_17) 
                       | ((0x1fU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                          | (0x1eU == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))))) 
           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
              >> 1U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_result 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i 
           + (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_op_b_msu 
              + VL_MULS_III(32, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_op_a_msu)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_power_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_alu_we_fw_power;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__regfile_alu_we_fw;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__csr_addr;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            if ((0x00000010U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                = ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))
                                    ? 0x0eU : 0x0cU);
                            if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = (0x000000ffU 
                                       & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i)))));
                            } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0x0fU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (0x00000050U 
                                          | (((8U & 
                                               ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                << 3U)) 
                                              | (2U 
                                                 & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                    << 1U))) 
                                             << 4U)));
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xf0U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (4U | ((8U 
                                                 & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                    << 3U)) 
                                                | (2U 
                                                   & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                      << 1U)))));
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                            if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 0x1aU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                  >> 0x12U)))) 
                                          << 2U));
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((~ 
                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                   >> 0x0aU)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 2U)))));
                            } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 0x11U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                  >> 0x11U)))) 
                                          << 2U));
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((~ 
                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                   >> 1U)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 1U)))));
                            }
                        }
                        if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (((0x00000030U 
                                        & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                           >> 0x00000014U)) 
                                       | ((0x0000000cU 
                                           & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                              >> 0x0000000eU)) 
                                          | (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                   >> 8U)))) 
                                      << 2U));
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0xfcU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i));
                        } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0x0fU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (0x00000040U | 
                                      (((8U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                               >> 0x0000000dU)) 
                                        | (2U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                 >> 0x0000000fU))) 
                                       << 4U)));
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0xf0U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (4U | ((8U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                   << 3U)) 
                                            | (2U & 
                                               (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                << 1U)))));
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                            = ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))
                                ? 4U : 3U);
                        if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                        } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xeeU;
                        }
                    } else {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                            = ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))
                                ? 1U : 3U);
                        if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                        } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0x44U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                            if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = (0x0000000fU 
                                       & (0x7bdeU >> 
                                          ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                           << 2U)));
                            } else if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i)))) 
                                          << 2U));
                                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i))));
                            }
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xe4U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
        = ((((0x0000ff00U & (((0x00000080U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                               ? ((0x00000040U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                   ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                      >> 0x00000018U)
                                   : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                      >> 0x00000010U))
                               : ((0x00000040U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                   ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                      >> 8U) : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000020U 
                                            & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                            ? ((0x00000010U 
                                                & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x00000018U)
                                                : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x00000010U))
                                            : ((0x00000010U 
                                                & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 8U)
                                                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))) 
            << 0x00000010U) | ((0x0000ff00U & (((8U 
                                                 & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                  >> 0x00000018U)
                                                  : 
                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                  >> 0x00000010U))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                  >> 8U)
                                                  : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                                               << 8U)) 
                               | (0x000000ffU & ((2U 
                                                  & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x00000018U)
                                                   : 
                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x00000010U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 8U)
                                                   : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
        = ((((0x0000ff00U & (((0x00000080U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                               ? ((0x00000040U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                   ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                      >> 0x00000018U)
                                   : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                      >> 0x00000010U))
                               : ((0x00000040U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                   ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                      >> 8U) : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000020U 
                                            & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                            ? ((0x00000010U 
                                                & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x00000018U)
                                                : (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x00000010U))
                                            : ((0x00000010U 
                                                & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 8U)
                                                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)))) 
            << 0x00000010U) | ((0x0000ff00U & (((8U 
                                                 & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                  >> 0x00000018U)
                                                  : 
                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                  >> 0x00000010U))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                  >> 8U)
                                                  : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)) 
                                               << 8U)) 
                               | (0x000000ffU & ((2U 
                                                  & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x00000018U)
                                                   : 
                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x00000010U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 8U)
                                                   : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = (0x0000000fU & (- (IData)((1U & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                            >> 3U) 
                                           | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                               >> 3U) 
                                              & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                  >> 2U) 
                                                 | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                     >> 2U) 
                                                    & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                        >> 1U) 
                                                       | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                           >> 1U) 
                                                          & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)))))))))));
    if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((0x0cU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (3U & (- (IData)((IData)((3U == (3U 
                                                  & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))))));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (0x0000000cU & ((- (IData)((IData)(
                                                    (0x0cU 
                                                     == 
                                                     (0x0cU 
                                                      & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec)))))) 
                                 << 2U)));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((0x0cU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (3U & (- (IData)((1U & (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                          >> 1U) | 
                                         (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                           >> 1U) & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec))))))));
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((3U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (0x0000000cU & ((- (IData)((1U & (
                                                   ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                    >> 3U) 
                                                   | (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                       >> 3U) 
                                                      & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                         >> 2U)))))) 
                                 << 2U)));
    } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_we_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
           == vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_eq);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ffffffc00ULL & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | (IData)((IData)((0x000001feU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                             << 1U)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ff80003ffULL & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)(((0x0001fe00U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                               >> 7U)) 
                               | (0x000000ffU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                                 >> 8U))))) 
              << 0x0000000aU));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000007ffffffULL & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)((0x000001feU & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                              >> 0x00000017U)))) 
              << 0x0000001bU));
    if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
         | ((0x14U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
            | (0x16U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
            = (1ULL | vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000000200ULL | vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000008000000ULL | vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
        = ((0x14U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg
            : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i)
                ? ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                    << 0x00000010U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                       >> 0x00000010U))
                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ffffffc00ULL & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | (IData)((IData)((0x00000201U | (0x000001feU 
                                             & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                << 1U))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ff80003ffULL & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((0x00000100U | ((0x0001fe00U 
                                               & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                  >> 7U)) 
                                              | (0x000000ffU 
                                                 & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                    >> 8U)))))) 
              << 0x0000000aU));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000007ffffffULL & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((1U | (0x000001feU & 
                                     (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                      >> 0x00000017U))))) 
              << 0x0000001bU));
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
                  | ((0x14U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                     | (0x16U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))))))) {
        if ((2U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        } else if ((3U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffffdffULL & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ff7ffffffULL & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = 0U;
    if ((0x36U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i;
    } else if ((((0x30U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 || (0x32U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) 
                || (0x37U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
    } else if ((((0x31U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 || (0x33U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) 
                || (0x35U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))) {
        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                >> 0x1fU) ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev
                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev);
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
        = (((((0x00000038U & (((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                >> 0x0000001eU) + (3U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                      >> 0x0000001cU))) 
                              << 3U)) | (7U & ((3U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                   >> 0x0000001aU)) 
                                               + (3U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                     >> 0x00000018U))))) 
             << 0x00000012U) | (((0x00000038U & (((3U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                      >> 0x00000016U)) 
                                                  + 
                                                  (3U 
                                                   & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                      >> 0x00000014U))) 
                                                 << 3U)) 
                                 | (7U & ((3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                 >> 0x00000012U)) 
                                          + (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                   >> 0x00000010U))))) 
                                << 0x0000000cU)) | 
           ((((0x00000038U & (((3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                      >> 0x0000000eU)) 
                               + (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                        >> 0x0000000cU))) 
                              << 3U)) | (7U & ((3U 
                                                & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                   >> 0x0000000aU)) 
                                               + (3U 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                     >> 8U))))) 
             << 6U) | ((0x00000038U & (((3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                               >> 6U)) 
                                        + (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                 >> 4U))) 
                                       << 3U)) | (7U 
                                                  & ((3U 
                                                      & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                         >> 2U)) 
                                                     + 
                                                     (3U 
                                                      & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_be 
        = (0x0000000fU & ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i))
                           ? (0x8421U >> (0x0000000cU 
                                          & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                                             << 2U)))
                           : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i))
                               ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_st)
                                   ? 1U : (0x8c63U 
                                           >> (0x0000000cU 
                                               & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                                                  << 2U))))
                               : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_st)
                                   ? (0x7310U >> (0x0000000cU 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                                                     << 2U)))
                                   : (0x8cefU >> (0x0000000cU 
                                                  & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                                                     << 2U)))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset 
        = (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                 - (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_reg_offset_ex_i)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o = 0U;
    if (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i) 
         & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i)))) {
        if ((0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i))) {
            if ((0U != (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i))) {
            if ((3U == (3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))) {
                vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o = 1U;
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr 
        = ((0xfffffffcU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int) 
           | (3U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                    & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i))))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_atop_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_result 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i 
           + (VL_EXTENDS_II(32,18, (0x0003ffffU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U])) 
              + (VL_EXTENDS_II(32,18, (0x0003ffffU 
                                       & ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
                                           << 0x0000000eU) 
                                          | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U] 
                                             >> 0x00000012U)))) 
                 + (VL_EXTENDS_II(32,18, (0x0003ffffU 
                                          & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
                                             >> 4U))) 
                    + VL_EXTENDS_II(32,18, (0x0003ffffU 
                                            & ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[2U] 
                                                << 0x0000000aU) 
                                               | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
                                                  >> 0x00000016U))))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[0U] 
        = (IData)((0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                                       (0x00000003ffffffffULL 
                                                        & VL_EXTENDS_QI(34,17, 
                                                                        (0x0001ffffU 
                                                                         & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a)))), 
                                                       (0x00000003ffffffffULL 
                                                        & VL_EXTENDS_QI(34,17, 
                                                                        (0x0001ffffU 
                                                                         & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b)))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U]) 
           | (IData)(((0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                                           (0x00000003ffffffffULL 
                                                            & VL_EXTENDS_QI(34,17, 
                                                                            (0x0001ffffU 
                                                                             & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a)))), 
                                                           (0x00000003ffffffffULL 
                                                            & VL_EXTENDS_QI(34,17, 
                                                                            (0x0001ffffU 
                                                                             & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b)))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U] 
        = ((3U & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U]) 
           | ((IData)((0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                                           (0x00000003ffffffffULL 
                                                            & VL_EXTENDS_QI(34,17, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a_1_neg)), 
                                                           (0x00000003ffffffffULL 
                                                            & VL_EXTENDS_QI(34,17, 
                                                                            (0x0001ffffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
                                                                                >> 0x00000011U)))))))) 
              << 2U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[2U] 
        = (0x0000000fU & (((IData)((0x00000003ffffffffULL 
                                    & VL_MULS_QQQ(34, 
                                                  (0x00000003ffffffffULL 
                                                   & VL_EXTENDS_QI(34,17, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a_1_neg)), 
                                                  (0x00000003ffffffffULL 
                                                   & VL_EXTENDS_QI(34,17, 
                                                                   (0x0001ffffU 
                                                                    & (IData)(
                                                                              (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
                                                                               >> 0x00000011U)))))))) 
                           >> 0x0000001eU) | ((IData)(
                                                      ((0x00000003ffffffffULL 
                                                        & VL_MULS_QQQ(34, 
                                                                      (0x00000003ffffffffULL 
                                                                       & VL_EXTENDS_QI(34,17, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a_1_neg)), 
                                                                      (0x00000003ffffffffULL 
                                                                       & VL_EXTENDS_QI(34,17, 
                                                                                (0x0001ffffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
                                                                                >> 0x00000011U))))))) 
                                                       >> 0x00000020U)) 
                                              << 2U)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b_ext 
        = VL_EXTENDS_II(32,17, (0x0001ffffU & (IData)(
                                                      (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
                                                       >> 0x00000011U))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bclr_result 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
           & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_inv);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_power_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_i;
    vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[vlSelfRef.__VdfgBinToOneHot_Pre_h39c821e2_0_0] = 0U;
    vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i] = 1U;
    vlSelfRef.__VdfgBinToOneHot_Pre_h39c821e2_0_0 = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
        = ((((0x0000ff00U & (((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                               ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                  >> 0x00000018U) : 
                              (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                   >> 0x00000010U) : 
                               (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                 ? 
                                                (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                                 >> 8U)
                                                 : 
                                                (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                  ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1
                                                  : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = (1U 
                                                 & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpCode_SI) 
                                                    & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI) 
                                                       ^ 
                                                       (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpA_DI 
                                                        >> 0x0000001fU))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                          ^ (- (IData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__do_min)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                      >> 1U)))) {
                            vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                                = (0x0000000fU & ((1U 
                                                   & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                                   ? 
                                                  (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                                   : (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)));
                        }
                    } else {
                        vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                            = ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                ? ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                   | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                : (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
                    }
                } else {
                    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                        = (0x0000000fU & ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                           ? (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater))
                                           : (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                                 | (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)))));
                }
            }
        }
    }
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_we_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
        = (0x0000001fffffffffULL & (VL_EXTENDS_QQ(37,36, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
                                    + VL_EXTENDS_QQ(37,36, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3 
        = ((((0x000000f0U & (((7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                     >> 0x00000015U)) 
                              + (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                       >> 0x00000012U))) 
                             << 4U)) | (0x0000000fU 
                                        & ((7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                                  >> 0x0000000fU)) 
                                           + (7U & 
                                              (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                               >> 0x0000000cU))))) 
            << 8U) | ((0x000000f0U & (((7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                              >> 9U)) 
                                       + (7U & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                                >> 6U))) 
                                      << 4U)) | (0x0000000fU 
                                                 & ((7U 
                                                     & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                                        >> 3U)) 
                                                    + 
                                                    (7U 
                                                     & vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_be;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata 
        = ((2U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
            ? ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                    << 0x00000018U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                                       >> 8U)) : ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                                                   << 0x00000010U) 
                                                  | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                                                     >> 0x00000010U)))
            : ((1U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                    << 8U) | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                              >> 0x00000018U)) : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_misaligned 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__accumulator 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i)
            ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b_ext 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i))))))
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcounteren_we 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[774U]);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_we 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[800U]);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[803U] 
              | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[804U] 
                 | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[805U] 
                    | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[806U] 
                       | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[807U] 
                          | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[808U] 
                             | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[809U] 
                                | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[810U] 
                                   | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[811U] 
                                      | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[812U] 
                                         | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[813U] 
                                            | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[814U] 
                                               | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[815U] 
                                                  | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[816U] 
                                                     | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[817U] 
                                                        | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[818U] 
                                                           | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[819U] 
                                                              | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[820U] 
                                                                 | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[821U] 
                                                                    | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[822U] 
                                                                       | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[823U] 
                                                                          | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[824U] 
                                                                             | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[825U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[826U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[827U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[828U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[829U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[830U] 
                                                                                | vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[831U])))))))))))))))))))))))))))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result 
        = ((((0x0000ff00U & (((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                               ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
                                  >> 0x00000018U) : 
                              (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
                                   >> 0x00000010U) : 
                               (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                 ? 
                                                (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
                                                 >> 8U)
                                                 : 
                                                (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                  ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result
                                                  : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__comparison_result_o 
        = (1U & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                 >> 3U));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_we_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_we_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                      >> 0x0000001cU)) 
                             << 8U)) | (0x000000ffU 
                                        & (IData)((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                   >> 0x00000013U)))) 
            << 0x00000010U) | ((0x0000ff00U & ((IData)(
                                                       (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                        >> 0x0000000aU)) 
                                               << 8U)) 
                               | (0x000000ffU & (IData)(
                                                        (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                         >> 1U)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
        = ((0x14U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result
            : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l4 
        = ((0x000003e0U & (((0x0000000fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3) 
                                            >> 0x0000000cU)) 
                            + (0x0000000fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3) 
                                              >> 8U))) 
                           << 5U)) | (0x0000001fU & 
                                      ((0x0000000fU 
                                        & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3) 
                                           >> 4U)) 
                                       + (0x0000000fU 
                                          & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3)))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__data_misaligned_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_misaligned;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_misaligned;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_addr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
        = (0x00000001ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[0U]) 
                                    + (VL_EXTENDS_QI(33,32, 
                                                     ((vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[2U] 
                                                       << 0x0000001eU) 
                                                      | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U] 
                                                         >> 2U))) 
                                       + VL_EXTENDS_QI(33,32, vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__accumulator))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__comparison_result_o;
    vlSelfRef.tb_core_debug2__DOT__core_data_we = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_we_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_result 
        = (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
           + vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_value);
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__result_o 
        = (0x0000003fU & ((0x0000001fU & ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l4) 
                                          >> 5U)) + 
                          (0x0000001fU & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l4))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_be_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_addr_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result 
        = (0x0000ffffU & VL_SHIFTRS_III(17,17,2, (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
                                                             >> 0x0000000fU))), (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_i)));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__branch_decision_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
        = ((((0x0000ff00U & (((8U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                               ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                  >> 0x00000018U) : 
                              (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                   >> 0x00000010U) : 
                               (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                 ? 
                                                (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 8U)
                                                 : 
                                                (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                  ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i
                                                  : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev
            : ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
                ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_result
                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__result_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_be_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_be_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_wdata_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__misaligned_stall_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_addr_pmp 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__branch_decision 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__branch_decision_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clip_result 
        = ((0x17U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
               & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip) 
                                      | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                         >> 0x0000001fU)))))))
            : (((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip) 
                | (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                   >> 0x00000024U)) ? vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg
                : vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a_32 
        = ((0x26U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? (((QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))
            : (((QData)((IData)((- (IData)(((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                            & (vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                               >> 0x0000001fU)))))) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a))));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBIsZero_SI 
        = (0U == (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result));
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_be_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_be_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_wdata_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__misaligned_stall 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__misaligned_stall_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_addr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_addr_pmp;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_decision_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__branch_decision;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_be_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_be_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_wdata_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_addr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_addr_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex 
        = ((IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o) 
           & (IData)(vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_decision_i));
    vlSelfRef.tb_core_debug2__DOT__core_data_be = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_be_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_wdata_o 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__data_wdata_o;
    vlSelfRef.tb_core_debug2__DOT__core_data_addr = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_addr_o;
    vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex;
    vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_be_i 
        = vlSelfRef.tb_core_debug2__DOT__core_data_be;
    vlSelfRef.tb_core_debug2__DOT__core_data_wdata 
        = vlSelfRef.tb_core_debug2__DOT__u_core__DOT__data_wdata_o;
    vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_addr_i 
        = vlSelfRef.tb_core_debug2__DOT__core_data_addr;
    vlSelfRef.tb_core_debug2__DOT__is_dbg_data = (0x00010000U 
                                                  == 
                                                  (0x000ff000U 
                                                   & vlSelfRef.tb_core_debug2__DOT__core_data_addr));
    vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_wstrb_o 
        = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_be_i;
    vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_wdata_i 
        = vlSelfRef.tb_core_debug2__DOT__core_data_wdata;
    vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_araddr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_addr_i;
    vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_awaddr_o 
        = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_addr_i;
    vlSelfRef.tb_core_debug2__DOT__data_in_dbg_window_o 
        = vlSelfRef.tb_core_debug2__DOT__is_dbg_data;
    vlSelfRef.tb_core_debug2__DOT__axi_wstrb = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_wstrb_o;
    vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_wdata_o 
        = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__obi_wdata_i;
    vlSelfRef.tb_core_debug2__DOT__axi_araddr = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_araddr_o;
    vlSelfRef.tb_core_debug2__DOT__axi_awaddr = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_awaddr_o;
    vlSelfRef.data_in_dbg_window_o = vlSelfRef.tb_core_debug2__DOT__data_in_dbg_window_o;
    vlSelfRef.tb_core_debug2__DOT__axi_wdata = vlSelfRef.tb_core_debug2__DOT__u_obi_to_axi_dbg__DOT__axi_wdata_o;
}
