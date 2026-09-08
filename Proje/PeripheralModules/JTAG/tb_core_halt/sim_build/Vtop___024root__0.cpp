// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<QData/*63:0*/, 32> Vtop__ConstPool__TABLE_hd2103793_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vtop__ConstPool__TABLE_hd04e6094_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vtop__ConstPool__TABLE_h55996da2_0;
extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h7c8123e3_0;

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_12;
    __VdfgRegularize_h6e95ff9d_0_12 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    __VdfgRegularize_h6e95ff9d_0_20 = 0;
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    __VdfgRegularize_h6e95ff9d_0_23 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_24;
    __VdfgRegularize_h6e95ff9d_0_24 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    __VdfgRegularize_h6e95ff9d_0_33 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_37;
    __VdfgRegularize_h6e95ff9d_0_37 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_38;
    __VdfgRegularize_h6e95ff9d_0_38 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_39;
    __VdfgRegularize_h6e95ff9d_0_39 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_41;
    __VdfgRegularize_h6e95ff9d_0_41 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_42;
    __VdfgRegularize_h6e95ff9d_0_42 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_43;
    __VdfgRegularize_h6e95ff9d_0_43 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_44;
    __VdfgRegularize_h6e95ff9d_0_44 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_46;
    __VdfgRegularize_h6e95ff9d_0_46 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_47;
    __VdfgRegularize_h6e95ff9d_0_47 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_48;
    __VdfgRegularize_h6e95ff9d_0_48 = 0;
    // Body
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__usage_o 
        = (1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[2U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[3U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[8U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[9U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[10U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[11U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[12U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[13U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[14U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[15U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[16U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[17U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[18U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[19U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[20U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[21U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[22U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[23U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[24U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[25U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[26U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[27U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[28U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[29U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[30U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[31U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[32U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[33U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[34U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[35U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[36U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[37U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[38U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[39U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[40U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[41U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[42U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[43U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[44U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[45U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[46U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[47U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[48U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[49U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[50U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[51U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[52U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[53U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[54U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[55U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[56U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[57U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[58U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[59U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[60U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[61U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[62U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U])))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[63U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U])))) 
                   >> 0x00000020U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__current_priv_lvl_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__current_priv_lvl_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__hwlp_dec_cnt 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_dec_cnt_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_vec_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_clpx 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__is_clpx_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_subrot 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__is_subrot_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_sel_subword 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_subword_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_signed 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_signed_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__fpu_src_fmt 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fpu_src_fmt_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__fpu_dst_fmt 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fpu_dst_fmt_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__fpu_int_fmt 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fpu_int_fmt_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_op 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_op_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_lat 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_lat_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__fp_rnd_mode 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fp_rnd_mode_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__prepost_useincr_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_reg_offset_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_reg_offset_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__atop_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__atop_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__hwlp_target_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_target_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__hwlp_start_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_start_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__hwlp_cnt_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_cnt_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcounteren_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcounteren_q;
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q;
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q;
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q;
    } else {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o = 0U;
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o = 0x0fU;
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o = 0U;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_we_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
           && (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_lat_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_waddr_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_operands_o[0U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_o[0U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_operands_o[1U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_o[1U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_operands_o[2U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_o[2U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_op_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_op_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_operands_ex[0U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[0U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_operands_ex[1U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[1U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_operands_ex[2U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[2U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_waddr_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_waddr_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_we_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__perf_apu_dep 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_perf_dep_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_sign_ext_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_err_ack_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_ack_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_pipe_stall 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_pipe_stall_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_mux 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_imm_mux_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__scalar_replication 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__scalar_replication_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__scalar_replication_c 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__scalar_replication_c_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_bmask_a_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_bmask_b_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_flags_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_flags_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbautoincrement_o 
        = (1U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                 >> 0x00000010U));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_mux 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__bmask_a_mux_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_havereset_o 
        = (1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmactive_o 
        = (1U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__bmask_b_mux_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_power_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_load_event_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q_aligned 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__hwlp_jump_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2 
        = ((IData)(2U) + vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4 
        = ((IData)(4U) + vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_running_o 
        = (1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                 >> 1U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_halted_o 
        = (1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                 >> 2U));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_o 
        = (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbreadonaddr_o 
        = (1U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                 >> 0x00000014U));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbreadondata_o 
        = (1U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                 >> 0x0000000fU));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_atop_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__atop_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_ready_o 
        = (1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_minstret 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_minstret_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_load 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_load_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_store 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_store_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_jump 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jump_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_branch 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_branch_taken 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_taken_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_compressed 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_compressed_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_jr_stall 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jr_stall_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_imiss 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_imiss_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_ld_stall 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_ld_stall_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__full_o 
        = (2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_we_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_we_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__data_o 
        = (0x00000003ffffffffULL & ((((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q
                                                      [
                                                      (((IData)(0x00000021U) 
                                                        + 
                                                        (0x0000007fU 
                                                         & ((IData)(0x00000022U) 
                                                            * (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))) 
                                                       >> 5U)])) 
                                      << ((0U == (0x0000001fU 
                                                  & ((IData)(0x00000022U) 
                                                     * (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q))))
                                           ? 0x00000020U
                                           : ((IData)(0x00000040U) 
                                              - (0x0000001fU 
                                                 & ((IData)(0x00000022U) 
                                                    * (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))))) 
                                     | (((0U == (0x0000001fU 
                                                 & ((IData)(0x00000022U) 
                                                    * (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q))))
                                          ? 0ULL : 
                                         ((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q
                                                          [
                                                          (((IData)(0x0000001fU) 
                                                            + 
                                                            (0x0000007fU 
                                                             & ((IData)(0x00000022U) 
                                                                * (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x00000020U) 
                                              - (0x0000001fU 
                                                 & ((IData)(0x00000022U) 
                                                    * (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))))) 
                                        | ((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q
                                                           [
                                                           (3U 
                                                            & (((IData)(0x00000022U) 
                                                                * (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)) 
                                                               >> 5U))])) 
                                           >> (0x0000001fU 
                                               & ((IData)(0x00000022U) 
                                                  * (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))))) 
                                    & (- (QData)((IData)(
                                                         (0x43U 
                                                          >= 
                                                          (0x0000007fU 
                                                           & ((IData)(0x00000022U) 
                                                              * (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)))))))));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[0U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[1U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[2U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[3U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[4U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[5U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[6U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[7U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U];
    vlSelfRef.tb_core_debug__DOT__dmi_resp_ready_i 
        = vlSelfRef.dmi_resp_ready_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_reg_offset_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_reg_offset_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__pc_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__is_compressed_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__is_compressed_id_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_save_ex_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__empty_o 
        = (0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_vec_mode_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_o 
        = (IData)((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                   >> ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                       << 5U)));
    vlSelfRef.tb_core_debug__DOT__rst_ni = vlSelfRef.rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__rdata_o 
        = Vtop__ConstPool__TABLE_hd2103793_0[vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q_aligned 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__data_valid 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_valid_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbbusy_o 
        = (0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q));
    vlSelfRef.tb_core_debug__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmdbusy_o = 1U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmdbusy_o 
        = ((1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)) || (1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
        = Vtop__ConstPool__TABLE_hd04e6094_0[(((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))];
    __VdfgRegularize_h6e95ff9d_0_33 = (0xffff0000U 
                                       & (- (IData)(
                                                    ((2U 
                                                      == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)) 
                                                     & (0U 
                                                        != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))));
    if ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
        if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext 
                = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                   >> 0x00000018U);
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = ((0xffff0000U & (((- (IData)((0U 
                                                != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                                    & (- (IData)((2U 
                                                  == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                                   << 8U)) | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                              >> 0x00000018U));
        } else {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext 
                = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                   >> 0x00000010U);
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = __VdfgRegularize_h6e95ff9d_0_33;
        }
    } else {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext 
            = ((- (IData)((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q)))) 
               & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                  >> 8U));
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = __VdfgRegularize_h6e95ff9d_0_33;
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_clpx_shift_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_shift_ex_o;
    vlSelfRef.tb_core_debug__DOT__dmi_req_valid_i = vlSelfRef.dmi_req_valid_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev 
        = ((((((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                        << 1U)) | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                          >> 1U)) | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x0000001fU))))));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o 
        = (2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__cnt_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__ndmreset_o 
        = (1U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                 >> 1U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_incr 
        = ((IData)(4U) + (0xfffffffcU & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_rdata 
        = (0x28001040U | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                          << 2U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_rdata 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mip_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__u_exc_vec_pc_mux_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__u_exc_vec_pc_mux_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q_aligned 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q;
    vlSelfRef.tb_core_debug__DOT__u_demux__DOT__sys_rvalid_i 
        = vlSelfRef.tb_core_debug__DOT__sys_rvalid;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__slave_rvalid_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__slave_rvalid_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__slave_rid_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__slave_rid_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o 
        = (0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__hwlp_jump_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__hwlp_jump_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_o 
        = (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__hwlp_target_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_targ_addr_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__imm_vec_ext_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_ex_o;
    vlSelfRef.tb_core_debug__DOT__dmi_req_addr_i = vlSelfRef.dmi_req_addr_i;
    vlSelfRef.tb_core_debug__DOT__dmi_req_data_i = vlSelfRef.dmi_req_data_i;
    vlSelfRef.tb_core_debug__DOT__dmi_req_op_i = vlSelfRef.dmi_req_op_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_dot_op_c_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_c_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_operand_c_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_c_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_operand_a_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_a_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_imm_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaccess_o 
        = (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                 >> 0x00000011U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operand_c_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_operand_b_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_b_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_sel_subword_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_sel_subword_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_is_clpx_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_is_clpx_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_clpx_img_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_img_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_clpx_shift_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_clpx_shift_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_signed_mode_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_is_clpx_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_is_clpx_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_dot_op_a_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_a_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_we_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_we_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__current_priv_lvl_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__current_priv_lvl_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_load_event_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__instr_valid_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_valid_id_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__is_fetch_failed_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__is_fetch_failed_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_ctrl_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_ebreakm_o 
        = (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0x0000000fU));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_ebreaku_o 
        = (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0x0000000cU));
    __VdfgRegularize_h6e95ff9d_0_20 = (1U & (~ (IData)(
                                                       (4U 
                                                        == 
                                                        (0x00000804U 
                                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__branch_in_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_dot_op_b_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_b_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o = 1U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_dot_signed_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_signed_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__bmask_a_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_single_step_o 
        = (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 2U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_req_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_waddr_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_waddr_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_d 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__reg_fp_d_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CntZero_S 
        = (1U & (~ (0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_c 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__reg_fp_c_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_b 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__reg_fp_b_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__pc_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_id_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__bmask_b_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_operator_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operator_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_en_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_alu_we_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_wb_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_alu_waddr_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_en_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_en_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_type_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_type_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_misaligned_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__useincr_addr_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_access_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_access_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o 
        = ((0x000ffc00U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                           << 4U)) | (0x000003ffU & 
                                      (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                       >> 0x00000010U)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_op_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_op_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_o = 0U;
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_power_o = 1U;
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_o = 1U;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_en_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_en_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__current_priv_lvl_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__current_priv_lvl_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__illegal_c_insn_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn_id_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_rvalid_i 
        = vlSelfRef.tb_core_debug__DOT__obi_rvalid_data;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_is_subrot_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_is_subrot_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_vec_mode_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_req_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_a 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__reg_fp_a_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operand_b_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operand_a_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operator_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operator_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__instr_rdata_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_id_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_lat_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_lat_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_waddr_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__apu_operands[0U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_operands_o[0U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__apu_operands[1U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_operands_o[1U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__apu_operands[2U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_operands_o[2U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_op_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_op_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_i[0U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_operands_ex[0U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_i[1U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_operands_ex[1U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_i[2U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_operands_ex[2U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_waddr_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_waddr_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_we_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__apu_dep_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__perf_apu_dep;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_sign_ext_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_err_ack 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_err_ack_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_pipe_stall_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_pipe_stall;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_flags_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_flags_ex;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbautoincrement 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbautoincrement_o;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we = 1U;
            }
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_we_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__we;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_havereset_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_havereset_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmactive_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmactive_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_we_wb_power 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_power_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_load_event_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_running_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_running_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_halted_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_halted_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbdata_write 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbreadonaddr 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbreadonaddr_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbreadondata 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbreadondata_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_atop_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_ready 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_ready_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_minstret_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_minstret;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_load_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_load;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_store_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_store;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jump_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_jump;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_branch;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_taken_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_branch_taken;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_compressed_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_compressed;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jr_stall_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_jr_stall;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_imiss_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_imiss;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_ld_stall_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mhpmevent_ld_stall;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_we_ex;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_resp_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__data_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[0U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[0U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[1U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[1U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[2U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[2U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[3U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[3U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[4U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[4U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[5U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[5U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[6U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[6U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[7U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_o[7U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_resp_ready_i 
        = vlSelfRef.tb_core_debug__DOT__dmi_resp_ready_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_reg_offset_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_reg_offset_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__pc_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__pc_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_compressed_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__is_compressed_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_save_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_save_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_if_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_empty 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__empty_o;
    if ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 1U;
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 1U;
        } else if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 1U;
        } else if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 1U;
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_multicycle_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_rdata 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_o;
    vlSelfRef.tb_core_debug__DOT__u_demux__DOT__rst_ni 
        = vlSelfRef.tb_core_debug__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_rst_ni 
        = vlSelfRef.tb_core_debug__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__rst_ni 
        = vlSelfRef.tb_core_debug__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__rst_ni 
        = vlSelfRef.tb_core_debug__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_rdata 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__rdata_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__data_valid;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbbusy 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbbusy_o;
    vlSelfRef.tb_core_debug__DOT__u_demux__DOT__clk_i 
        = vlSelfRef.tb_core_debug__DOT__clk_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__clk_i 
        = vlSelfRef.tb_core_debug__DOT__clk_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__clk_i 
        = vlSelfRef.tb_core_debug__DOT__clk_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmdbusy 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmdbusy_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__data_csrs_mem 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_shift_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_clpx_shift_ex;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_req_valid_i 
        = vlSelfRef.tb_core_debug__DOT__dmi_req_valid_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP)
            ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP
            : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_full 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_cnt 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__cnt_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__ndmreset_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mip_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mip_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__resumeack 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mepc 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__depc 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mtvec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mtvec_mode 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmd_valid 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_o;
    vlSelfRef.tb_core_debug__DOT__dm_slave_rvalid = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__slave_rvalid_o;
    vlSelfRef.tb_core_debug__DOT__dm_slave_rid = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__slave_rid_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_empty 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__hwlp_jump_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaddress_csrs_sba 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__hwlp_target 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__hwlp_target_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__imm_vec_ext_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__imm_vec_ext_ex;
    vlSelfRef.tb_core_debug__DOT__dmi_req = (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__dmi_req_addr_i)) 
                                              << 0x00000022U) 
                                             | (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__dmi_req_op_i)) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__dmi_req_data_i))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_c_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_dot_op_c_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_c_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_operand_c_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_operand_a_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_imm_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_imm_ex;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__halted 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmd 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaccess 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaccess_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operand_c_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_c_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operand_c_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_operand_b_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_sel_subword_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_sel_subword_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_is_clpx_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_is_clpx_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_img_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_clpx_img_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_clpx_shift_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_clpx_shift_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_signed_mode_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_signed_mode_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_clpx_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_is_clpx_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_dot_op_a_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__instr_valid_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_fetch_failed_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__is_fetch_failed_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_sec_ctrl 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_ctrl_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__fetch_enable 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_ebreakm 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_ebreakm_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_ebreaku 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_ebreaku_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__u_irq_enable_o 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_20) 
           & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
              >> 6U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__m_irq_enable_o 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_20) 
           & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
              >> 5U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__branch_in_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__branch_in_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_dot_op_b_ex;
    if ((0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o = 0U;
    } else if ((1U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o = 1U;
    } else if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
    } else if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_signed_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_dot_signed_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__bmask_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__bmask_a_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_single_step 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_single_step_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__pc_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__pc_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__bmask_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__bmask_b_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operator_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_operator_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_en_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_en_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_alu_we_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_waddr_fw_wb_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_wb_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_alu_waddr_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_en_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_type_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__data_misaligned_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_misaligned_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_misaligned_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__addr_useincr_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__useincr_addr_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__csr_access_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_access_ex;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__hartsel 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart 
        = (1U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltreq_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumereq_o = 0U;
    if ((0U >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) {
        if (VL_LIKELY(((0U >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltreq_o 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltreq_o)) 
                   | (1U & ((vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                             >> 0x0000001fU) << (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumereq_o 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumereq_o)) 
                   | (1U & ((1U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                   >> 0x0000001eU)) 
                            << (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_op 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_op_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_we_wb 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_en_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__illegal_c_insn_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__illegal_c_insn_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_rvalid_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_rvalid_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_subrot_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_is_subrot_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_vec_mode_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_vec_mode_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__lsu_en_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_req_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_req_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_addr_int 
        = (0x00000fffU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operand_b_ex 
                          & (- (IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_access_ex)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__operand_b_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operand_b_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operand_b_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_wdata 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operand_a_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__operand_a_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operand_a_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operand_a_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operator_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__alu_operator_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr_rdata_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__instr_rdata_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__apu_flags 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__apu_flags_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbautoincrement_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbautoincrement;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_we_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_we_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_havereset_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_havereset_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmactive_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmactive_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__dmactive_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmactive_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_power_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_we_wb_power;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_running_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_running_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_halted_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_halted_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbdata_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbdata_write;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbreadonaddr_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbreadonaddr;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbreadondata_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbreadondata;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_atop 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_ex_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_ready;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events 
        = (1U | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_compressed_i) 
                   << 0x0000000aU) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_taken_i) 
                                       << 9U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_i) 
                                                 << 8U))) 
                 | ((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jump_i) 
                        << 3U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_store_i) 
                                  << 2U)) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_load_i) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_imiss_i))) 
                     << 4U) | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jr_stall_i) 
                                 << 3U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_ld_stall_i) 
                                           << 2U)) 
                               | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_minstret_i) 
                                  << 1U)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_we 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_ex_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_resp_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_resp_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[0U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[0U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[1U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[1U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[2U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[2U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[3U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[3U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[4U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[4U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[5U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[5U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[6U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[6U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[7U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__progbuf[7U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_resp_ready_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_resp_ready_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_save_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__pc_if 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__pc_if_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_resp_valid_o 
        = (1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_empty)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_multicycle 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_multicycle_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_rst_ni 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__rst_ni 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__rst_ni 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q)
            ? vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_rdata
            : vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbbusy;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__clk_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__clk_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__clk_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__clk_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmdbusy;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
            ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext
            : ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
                ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext
                : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__data_csrs_mem;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_shift_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_req_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_req_valid_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Res_DO 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP)
            ? (- vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)
            : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_ready_o 
        = (1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_full)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_cnt;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ndmreset_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mip 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mip_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumeack_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__resumeack;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__mepc_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mepc;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__depc_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__depc;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__m_trap_base_addr_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mtvec;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmd_valid;
    vlSelfRef.tb_core_debug__DOT__instr_dbg_rvalid 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__dm_slave_rvalid) 
           & (IData)(vlSelfRef.tb_core_debug__DOT__dm_slave_rid));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_empty_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_empty;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaddress_csrs_sba;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__hwlp_target_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__hwlp_target;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__imm_vec_ext_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_req_i 
        = vlSelfRef.tb_core_debug__DOT__dmi_req;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_c_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_c_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_a_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_imm_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__halted;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmd;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaccess;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__jump_target_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_c_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_c_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_b_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_sel_subword_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_is_clpx_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_img_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_clpx_shift_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_signed_mode_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_clpx_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_clpx_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_a_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr_valid_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_fetch_failed_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_fetch_failed_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_sec_ctrl_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_sec_ctrl;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__fetch_enable_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__fetch_enable;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreakm_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_ebreakm;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreaku_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_ebreaku;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__u_irq_enable 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__u_irq_enable_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__m_irq_enable 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__m_irq_enable_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_b_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_signed_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__bmask_a_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_single_step_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_single_step;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_id_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__trigger_match_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i 
              == vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__bmask_b_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_operator_i;
    __VdfgRegularize_h6e95ff9d_0_39 = ((~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__apu_en_i)) 
                                       & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_waddr_fw_wb_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_fw_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__enable_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_st 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__hartsel;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__resumereq 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumereq_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__haltreq 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltreq_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_op;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_we_wb;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__enable_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_c_insn_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__illegal_c_insn_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_mode 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__data_rvalid_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_rvalid_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rvalid_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_rvalid_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_subrot_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_vec_mode_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i) 
           & (2U > (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_addr 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_addr_int;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_b_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_wdata;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__addr_useincr_ex_i)
            ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__operand_a_ex_i 
               + vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__operand_b_ex_i)
            : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__operand_a_ex_i);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_a_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_operator_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr_rdata_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__master_we_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_we_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__debug_havereset_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_havereset_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_power_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__debug_running_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_running_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__debug_halted_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_halted_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_atop_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_atop;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_we_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_we;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_resp_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_resp_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[0U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[0U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[1U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[1U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[2U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[2U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[3U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[3U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[4U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[4U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[5U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[5U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[6U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[6U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf[7U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__progbuf_i[7U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_resp_ready_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_resp_ready_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__pc_if_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__pc_if;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_resp_valid_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_resp_valid_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mult_multicycle;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_rst_ni 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__rst_ni 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rst_ni 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__rst_ni 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q)
            ? (IData)((vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux 
                       >> 0x00000020U)) : (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__clk_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__clk_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clk_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__clk_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__clk_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__clk_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk_ungated_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__clk_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clk_ungated_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__clk_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_req_valid_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_div 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Res_DO;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_req_ready_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_ready_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
    if ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 1U;
        }
        if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 1U;
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__ndmreset_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mip_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mip;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumeack_aligned 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumeack_i;
    vlSelfRef.tb_core_debug__DOT__instr_dbg_rvalid_o 
        = vlSelfRef.tb_core_debug__DOT__instr_dbg_rvalid;
    vlSelfRef.tb_core_debug__DOT__u_demux__DOT__dbg_rvalid_i 
        = vlSelfRef.tb_core_debug__DOT__instr_dbg_rvalid;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid 
        = (1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_empty_i)));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__address 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx 
        = (3U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_i);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__hwlp_target_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__hwlp_target_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__hwlp_target_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_req_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_req_i;
    if ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 2U;
            } else if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 1U;
            } else if ((4U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 3U;
            }
        }
        if ((1U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
        } else if ((2U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
            }
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round_tmp 
        = ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_aligned 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0 = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0 
        = (0x00007fffU & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o 
                          >> 5U));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted 
        = ((0xfffffffeU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted) 
           | (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_i));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted;
    if ((1U > (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0 
            = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0;
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
        = (0x00ffffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_i);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr 
        = (((IData)(1U) << (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i)) 
           & (- (IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr_en))));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_mask 
        = ((IData)(0xffffffffU) << (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__jump_target_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__jump_target_o;
    __VdfgRegularize_h6e95ff9d_0_46 = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i) 
                                       & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0U;
    if ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
            } else if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
            } else if ((4U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i;
            }
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fetch_enable_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__fetch_enable_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreakm_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreakm_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreaku_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreaku_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__u_irq_enable_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__u_irq_enable;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__m_irq_enable_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__m_irq_enable;
    __VdfgRegularize_h6e95ff9d_0_41 = (IData)((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                >> 1U) 
                                               & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                  >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_42 = (IData)((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                >> 1U) 
                                               & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                  >> 0x0000001fU)));
    __VdfgRegularize_h6e95ff9d_0_43 = (1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                             & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_44 = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                       & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                          >> 0x0000001fU));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel 
        = (3U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_first 
        = ((IData)(0xfffffffeU) << (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_single_step_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__trigger_match 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__trigger_match_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_is_msu 
        = (1U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_power_o 
        = __VdfgRegularize_h6e95ff9d_0_39;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_o 
        = __VdfgRegularize_h6e95ff9d_0_39;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_alu_waddr_fw 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_fw_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
    if ((0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
        if (((6U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)) 
             & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__enable_i))) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
        }
    } else if ((1U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((2U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((3U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((4U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
                }
            }
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel 
        = (1U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel_i);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__resumereq;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__haltreq_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__haltreq;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i)))) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0U;
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_mode_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_mode;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_finish_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rvalid_i) 
           & ((~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i)) 
              & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_q)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rvalid_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rvalid_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__busy_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
           | (0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_addr;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpA_DI 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg 
        = (~ vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr 
        = ((0xfffffffcU & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int) 
           | (3U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                    & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i))))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_be 
        = (0x0000000fU & ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i))
                           ? (0x8421U >> (0x0000000cU 
                                          & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                                             << 2U)))
                           : ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i))
                               ? ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_st)
                                   ? 1U : (0x8c63U 
                                           >> (0x0000000cU 
                                               & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                                                  << 2U))))
                               : ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_st)
                                   ? (0x7310U >> (0x0000000cU 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                                                     << 2U)))
                                   : (0x8cefU >> (0x0000000cU 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                                                     << 2U)))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset 
        = (3U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                 - (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_reg_offset_ex_i)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o = 0U;
    if (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i) 
         & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i)))) {
        if ((0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i))) {
            if ((0U != (3U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i))) {
            if ((3U == (3U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o = 1U;
            }
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec 
        = (((((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
               >> 0x00000018U) == (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                   >> 0x00000018U)) 
             << 3U) | (((0x000000ffU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                        >> 0x00000010U)) 
                        == (0x000000ffU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                           >> 0x00000010U))) 
                       << 2U)) | ((((0x000000ffU & 
                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                      >> 8U)) == (0x000000ffU 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 8U))) 
                                   << 1U) | ((0x000000ffU 
                                              & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i) 
                                             == (0x000000ffU 
                                                 & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                        << 1U)) | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                          >> 1U)) | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001fU))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
        = (~ vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpCode_SI 
        = (3U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0fU;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__extract_is_signed 
        = (0x28U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 2U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 1U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__do_min 
        = ((0x17U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
           | ((0x10U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
              | ((0x11U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | (0x16U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed 
        = Vtop__ConstPool__TABLE_h55996da2_0[(((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i) 
                                               << 7U) 
                                              | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_signed 
        = (1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i));
    __VdfgRegularize_h6e95ff9d_0_38 = ((0x19U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                       | (0x18U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate 
        = ((0x19U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
           | ((0x1dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
              | ((0x1bU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i) 
                    | (0x1fU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))))));
    __VdfgRegularize_h6e95ff9d_0_12 = ((0x1dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                       | (0x1cU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)));
    __VdfgRegularize_h6e95ff9d_0_37 = ((0x31U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                       | ((0x30U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                          | ((0x33U 
                                              == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                             | (0x32U 
                                                == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_iz_type 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
           >> 0x00000014U);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_z_type 
        = (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                          >> 0x0000000fU));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s_type 
        = (((- (IData)((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | ((0x00000fe0U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                              >> 0x00000014U)) | (0x0000001fU 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                     >> 7U))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_u_type 
        = (0xfffff000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_bi_type 
        = (((- (IData)((1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                              >> 0x00000018U)))) << 5U) 
           | (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                             >> 0x00000014U)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_clip_type 
        = (((IData)(1U) << (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                           >> 0x00000014U))) 
           - (IData)(1U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffleb_type 
        = ((((0x00000300U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                             >> 0x00000013U)) | (3U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                    >> 0x00000017U))) 
            << 0x00000010U) | ((0x00000300U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                               >> 0x0000000dU)) 
                               | ((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                         >> 0x00000013U)) 
                                  | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                           >> 0x00000019U)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffleh_type 
        = ((0x00010000U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                           >> 4U)) | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                            >> 0x00000019U)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s2_type 
        = (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                          >> 0x00000014U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type 
        = (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                          >> 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_23 = ((0x0000003eU 
                                        & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                           >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                >> 0x00000019U)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_sb_type 
        = (((- (IData)((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000dU) 
           | ((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                       >> 0x0000001eU)) | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                 >> 7U))) 
               << 0x0000000bU) | ((0x000007e0U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                  >> 0x00000014U)) 
                                  | (0x0000001eU & 
                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                      >> 7U)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_uj_type 
        = (((- (IData)((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                        >> 0x0000001fU))) << 0x00000014U) 
           | ((((0x000001feU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                >> 0x0000000bU)) | 
                (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                       >> 0x00000014U))) << 0x0000000bU) 
              | (0x000007feU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                >> 0x00000014U))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
              >> 0x00000014U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_id 
        = (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_d) 
            << 5U) | (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 7U)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id 
        = (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_b) 
            << 5U) | (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 0x00000014U)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id 
        = (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_a) 
            << 5U) | (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 0x0000000fU)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr;
    vlSelfRef.tb_core_debug__DOT__debug_running_o = vlSelfRef.tb_core_debug__DOT__u_core__DOT__debug_running_o;
    vlSelfRef.tb_core_debug__DOT__debug_halted_o = vlSelfRef.tb_core_debug__DOT__u_core__DOT__debug_halted_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_atop_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_atop_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_we_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_we_i;
    vlSelfRef.tb_core_debug__DOT__dmi_resp = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_resp_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop 
        = ((~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_empty)) 
           & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_resp_ready_i));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_resp_valid_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_resp_valid_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mult_multicycle_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__flush_i 
        = (1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_rst_ni)));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__rst_ni 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__rst_ni 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__rst_ni;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__rst_n;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__rst_n;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rst_n;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__rst_n;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__rst_n;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_rdata_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__clk_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clk_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__clk_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__clk_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk_ungated_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk_ungated_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clk_ungated_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__data_mem_csrs 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_valid_i) 
           & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_ready_o));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_req_ready_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_req_ready_o;
    if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ndmreset_i) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned = 0U;
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d 
        = (1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset_ack_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__ndmreset_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mip 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mip_i;
    vlSelfRef.instr_dbg_rvalid_o = vlSelfRef.tb_core_debug__DOT__instr_dbg_rvalid_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_add_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__address;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i) 
                  >> 2U)))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask 
            = ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i))
                ? 0x0fU : ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i))
                            ? ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                               | (0x0fU & ((IData)(3U) 
                                           << (2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx)))))
                            : ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                               | (0x0fU & ((IData)(1U) 
                                           << (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx))))));
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_target_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__hwlp_target_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__dmi_req_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round 
        = ((- (IData)((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)))) 
           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round_tmp 
              >> 1U));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1 = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1 
        = (0x000003ffU & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o 
                          >> 0x0aU));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k = 0U;
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_c 
            = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i))));
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_imm 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm;
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword));
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
    } else {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_c 
            = (0x00000001ffffffffULL & VL_EXTENDS_QI(33,32, vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i));
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_imm 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i;
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (- (IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword_i))));
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
    }
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            if ((0x00000010U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((8U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                                if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0cU;
                                }
                            } else if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 3U;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        if ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                = ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))
                                    ? 0x0eU : 0x0cU);
                            if ((0x3eU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 3U;
                            }
                            if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = (0x000000ffU 
                                       & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i)))));
                            } else if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0x0fU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (0x00000050U 
                                          | (((8U & 
                                               ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                << 3U)) 
                                              | (2U 
                                                 & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                    << 1U))) 
                                             << 4U)));
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xf0U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (4U | ((8U 
                                                 & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                    << 3U)) 
                                                | (2U 
                                                   & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                      << 1U)))));
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                            if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                                if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((3U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                           | (((2U 
                                                & ((~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 0x1aU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                      >> 0x12U)))) 
                                              << 2U));
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((0x0cU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                           | ((2U & 
                                               ((~ 
                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                  >> 0x0aU)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 2U)))));
                                } else if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((3U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                           | (((2U 
                                                & ((~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 0x11U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                      >> 0x11U)))) 
                                              << 2U));
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                        = ((0x0cU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                           | ((2U & 
                                               ((~ 
                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                  >> 1U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 1U)))));
                                }
                            }
                            if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((3U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (((0x00000030U 
                                            & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                               >> 0x00000014U)) 
                                           | ((0x0000000cU 
                                               & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                  >> 0x0000000eU)) 
                                              | (3U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 8U)))) 
                                          << 2U));
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xfcU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (3U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i));
                            } else if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0x0fU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (0x00000040U 
                                          | (((8U & 
                                               (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                >> 0x0000000dU)) 
                                              | (2U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 0x0000000fU))) 
                                             << 4U)));
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xf0U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (4U | ((8U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                    << 3U)) 
                                                | (2U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                      << 1U)))));
                            }
                        } else if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                = ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))
                                    ? 4U : 3U);
                            if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                            } else if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xeeU;
                            }
                        } else {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                = ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))
                                    ? 1U : 3U);
                            if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                            } else if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0x44U;
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                      >> 1U)))) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                            if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = (0x0000000fU 
                                       & (0x7bdeU >> 
                                          ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                           << 2U)));
                            } else if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i)))) 
                                          << 2U));
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i))));
                            }
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xe4U;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                                if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0U;
                                } else if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
        = ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
            ? ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
                ? ((~ vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i) 
                   & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_q)
                : (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i 
                   | vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_q))
            : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i);
    vlSelfRef.tb_core_debug__DOT__u_demux__DOT__core_rvalid_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_demux__DOT__pending_dbg_q)
            ? (IData)(vlSelfRef.tb_core_debug__DOT__u_demux__DOT__dbg_rvalid_i)
            : (IData)(vlSelfRef.tb_core_debug__DOT__u_demux__DOT__sys_rvalid_i));
    if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ndmreset_i) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
    }
    while ((1U > vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k)) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k))) 
                & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1) 
               | (0x00000000ffffffffULL & ((0U != vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0) 
                                           << (0x0000001fU 
                                               & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k))));
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k 
            = ((IData)(1U) + vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction1__DOT__unnamedblk1__DOT__k);
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o)
            ? (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed)
            : (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1;
    if ((1U > (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1 
            = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1;
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 0U;
    VL_ASSIGN_W(512, vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd, Vtop__ConstPool__CONST_h7c8123e3_0);
    if ((0U == (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_i 
                >> 0x00000018U))) {
        if ((IData)(((0x00030000U == (0x00030000U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)) 
                     & (3U > (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                    >> 0x00000014U)))))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                              >> 0x0000000eU)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else if ((IData)((0x0000100aU == (0x0000103fU 
                                                & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.__Vfunc_load__16__size = 
                    (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                           >> 0x00000014U));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_16__load 
                    = (0x38050403U | ((IData)(vlSelfRef.__Vfunc_load__16__size) 
                                      << 0x0000000cU));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_16__load;
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x7b341073U;
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
            } else if ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)) {
                if ((0x00000020U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)) {
                    vlSelfRef.__Vfunc_float_load__19__dest 
                        = (0x0000001fU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar);
                    vlSelfRef.__Vfunc_float_load__19__size 
                        = (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                 >> 0x00000014U));
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_19__float_load 
                        = (0x38050007U | (((IData)(vlSelfRef.__Vfunc_float_load__19__size) 
                                           << 0x0000000cU) 
                                          | ((IData)(vlSelfRef.__Vfunc_float_load__19__dest) 
                                             << 7U)));
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_19__float_load;
                } else {
                    vlSelfRef.__Vfunc_load__20__dest 
                        = (0x0000001fU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar);
                    vlSelfRef.__Vfunc_load__20__size 
                        = (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                 >> 0x00000014U));
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_20__load 
                        = (0x38050003U | (((IData)(vlSelfRef.__Vfunc_load__20__size) 
                                           << 0x0000000cU) 
                                          | ((IData)(vlSelfRef.__Vfunc_load__20__dest) 
                                             << 7U)));
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_20__load;
                }
            } else {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.__Vfunc_load__22__size = 
                    (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                           >> 0x00000014U));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_22__load 
                    = (0x38050403U | ((IData)(vlSelfRef.__Vfunc_load__22__size) 
                                      << 0x0000000cU));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_22__load;
                vlSelfRef.__Vfunc_csrw__23__csr = (0x00000fffU 
                                                   & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar);
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_23__csrw 
                    = (0x00041073U | ((IData)(vlSelfRef.__Vfunc_csrw__23__csr) 
                                      << 0x00000014U));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_23__csrw))));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_23__csrw))) 
                               >> 0x00000020U));
            }
        } else if ((IData)(((0x00020000U == (0x00030000U 
                                             & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)) 
                            & (3U > (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                           >> 0x00000014U)))))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                              >> 0x0000000eU)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else if ((IData)((0x0000100aU == (0x0000103fU 
                                                & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x7b302473U;
                vlSelfRef.__Vfunc_store__29__size = 
                    (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                           >> 0x00000014U));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_29__store 
                    = (0x38850023U | ((IData)(vlSelfRef.__Vfunc_store__29__size) 
                                      << 0x0000000cU));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_29__store))));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_29__store))) 
                               >> 0x00000020U));
            } else if ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)) {
                if ((0x00000020U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar)) {
                    vlSelfRef.__Vfunc_float_store__31__src 
                        = (0x0000001fU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar);
                    vlSelfRef.__Vfunc_float_store__31__size 
                        = (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                 >> 0x00000014U));
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_31__float_store 
                        = (0x38050027U | (((IData)(vlSelfRef.__Vfunc_float_store__31__src) 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.__Vfunc_float_store__31__size) 
                                             << 0x0000000cU)));
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_31__float_store;
                } else {
                    vlSelfRef.__Vfunc_store__32__src 
                        = (0x0000001fU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar);
                    vlSelfRef.__Vfunc_store__32__size 
                        = (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                 >> 0x00000014U));
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_32__store 
                        = (0x38050023U | (((IData)(vlSelfRef.__Vfunc_store__32__src) 
                                           << 0x00000014U) 
                                          | ((IData)(vlSelfRef.__Vfunc_store__32__size) 
                                             << 0x0000000cU)));
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_32__store;
                }
            } else {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                vlSelfRef.__Vfunc_csrr__34__csr = (0x00000fffU 
                                                   & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar);
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_34__csrr 
                    = (0x00002473U | ((IData)(vlSelfRef.__Vfunc_csrr__34__csr) 
                                      << 0x00000014U));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                    = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_34__csrr;
                vlSelfRef.__Vfunc_store__35__size = 
                    (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                           >> 0x00000014U));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_35__store 
                    = (0x38850023U | ((IData)(vlSelfRef.__Vfunc_store__35__size) 
                                      << 0x0000000cU));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                    = (IData)((0x7b20247300000000ULL 
                               | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_35__store))));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                    = (IData)(((0x7b20247300000000ULL 
                                | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT____VlemCall_35__store))) 
                               >> 0x00000020U));
            }
        } else if ((1U & ((3U <= (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                                        >> 0x00000014U))) 
                          | (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                             >> 0x00000013U)))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
        }
        if ((1U & ((vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ac_ar 
                    >> 0x00000012U) & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command))))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x00000013U;
        }
    } else {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x00100073U;
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_o 
        = (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_i 
           + vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__addr_incr);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx_masked 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx) 
           & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_mask);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 1U;
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_valid_o = 0U;
    if (((2U < (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i)) 
         & (0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 0U;
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_o = 4U;
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_valid_o = 1U;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__jump_target_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__jump_target_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_norm 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_clpx_i)
            ? (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex) 
                << 0x00000010U) | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex))
            : (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i) 
                << 0x00000018U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i) 
                                    << 0x00000010U) 
                                   | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i) 
                                       << 8U) | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__u_ie_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__u_irq_enable_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__m_ie_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__m_irq_enable_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
        = (((QData)((IData)(((((IData)(__VdfgRegularize_h6e95ff9d_0_42) 
                               << 0x00000011U) | (0x0001fe00U 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                     >> 0x0000000fU))) 
                             | (((IData)((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                           >> 1U) & 
                                          (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                           >> 0x00000017U))) 
                                 << 8U) | (0x000000ffU 
                                           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                              >> 0x00000010U)))))) 
            << 0x00000012U) | (QData)((IData)(((((IData)(__VdfgRegularize_h6e95ff9d_0_41) 
                                                 << 0x00000011U) 
                                                | (0x0001fe00U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                      << 1U))) 
                                               | (((IData)(
                                                           (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                             >> 1U) 
                                                            & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                               >> 7U))) 
                                                   << 8U) 
                                                  | (0x000000ffU 
                                                     & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a 
        = (((QData)((IData)((((IData)(__VdfgRegularize_h6e95ff9d_0_42) 
                              << 0x00000010U) | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                 >> 0x00000010U)))) 
            << 0x00000011U) | (QData)((IData)((((IData)(__VdfgRegularize_h6e95ff9d_0_41) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i)))));
    __VdfgRegularize_h6e95ff9d_0_48 = (((IData)(__VdfgRegularize_h6e95ff9d_0_43) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
        = (((QData)((IData)(((((IData)(__VdfgRegularize_h6e95ff9d_0_44) 
                               << 0x00000011U) | (0x0001fe00U 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                     >> 0x0000000fU))) 
                             | ((0x00000100U & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                 << 8U) 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                   >> 0x0000000fU))) 
                                | (0x000000ffU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                  >> 0x00000010U)))))) 
            << 0x00000012U) | (QData)((IData)(((((IData)(__VdfgRegularize_h6e95ff9d_0_43) 
                                                 << 0x00000011U) 
                                                | (0x0001fe00U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                      << 1U))) 
                                               | ((0x00000100U 
                                                   & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                       << 8U) 
                                                      & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                         << 1U))) 
                                                  | (0x000000ffU 
                                                     & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i))))));
    __VdfgRegularize_h6e95ff9d_0_47 = (((IData)(__VdfgRegularize_h6e95ff9d_0_44) 
                                        << 0x00000010U) 
                                       | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                          >> 0x00000010U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
        = ((~ vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_first) 
           << (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__trigger_match_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__trigger_match;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_op_a_msu 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
           ^ (- (IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_is_msu))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_op_b_msu 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i 
           & (- (IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_is_msu))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_alu_we_fw_power 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_power_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_alu_we_fw 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_alu_waddr_fw;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ready_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_aligned 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_wdata_aligned 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__haltreq_aligned 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__haltreq_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__debug_req_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__haltreq_i;
    __VdfgRegularize_h6e95ff9d_0_24 = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__debug_mode_i) 
                                       & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__p_elw_finish 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_finish_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_valid_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rvalid_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__lsu_busy 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__busy_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_req_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_valid_i;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q
        [(0x0000001fU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))];
    __VdfgRegularize_h6e95ff9d_0_2 = (((0U == (0x0000001fU 
                                               & ((IData)(0x0020U) 
                                                  + 
                                                  (0x000007c0U 
                                                   & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                      << 6U)))))
                                        ? 0U : (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
                                                [(((IData)(0x0000001fU) 
                                                   + 
                                                   (0x000007ffU 
                                                    & ((IData)(0x0020U) 
                                                       + 
                                                       (0x000007c0U 
                                                        & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                           << 6U))))) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0020U) 
                                                     + 
                                                     (0x000007c0U 
                                                      & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                         << 6U))))))) 
                                      | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
                                         [(0x0000003fU 
                                           & (((IData)(0x0020U) 
                                               + (0x000007c0U 
                                                  & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                     << 6U))) 
                                              >> 5U))] 
                                         >> (0x0000001fU 
                                             & ((IData)(0x0020U) 
                                                + (0x000007c0U 
                                                   & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                      << 6U))))));
    __VdfgRegularize_h6e95ff9d_0_3 = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
        [(0x0000003eU & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                         << 1U))];
    vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[vlSelfRef.__VdfgBinToOneHot_Pre_h39c821e2_0_0] = 0U;
    vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i] = 1U;
    vlSelfRef.__VdfgBinToOneHot_Pre_h39c821e2_0_0 = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_eq 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg 
           & (- (IData)((0x17U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_be;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata 
        = ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
            ? ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                    << 0x00000018U) | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                                       >> 8U)) : ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                                                   << 0x00000010U) 
                                                  | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                                                     >> 0x00000010U)))
            : ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                    << 8U) | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                              >> 0x00000018U)) : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_misaligned 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
        = (((((((0x0000000cU & (VL_COUNTONES_I((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                >> 0x0000001eU)) 
                                << 2U)) | (3U & VL_COUNTONES_I(
                                                               (3U 
                                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                   >> 0x0000001cU))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                      >> 0x0000001aU))) 
                                                   << 2U)) 
                                   | (3U & VL_COUNTONES_I(
                                                          (3U 
                                                           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                              >> 0x00000018U))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & (VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                      >> 0x00000016U))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & VL_COUNTONES_I(
                                                                   (3U 
                                                                    & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                       >> 0x00000014U))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & (VL_COUNTONES_I(
                                                                   (3U 
                                                                    & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                       >> 0x00000012U))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & VL_COUNTONES_I(
                                                                    (3U 
                                                                     & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                        >> 0x00000010U))))))) 
            << 0x00000010U) | (((((0x0000000cU & (VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                     >> 0x0000000eU))) 
                                                  << 2U)) 
                                  | (3U & VL_COUNTONES_I(
                                                         (3U 
                                                          & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                             >> 0x0000000cU))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & (VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                     >> 0x0000000aU))) 
                                                  << 2U)) 
                                  | (3U & VL_COUNTONES_I(
                                                         (3U 
                                                          & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                             >> 8U))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & (VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                     >> 6U))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                      >> 4U))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & (VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                      >> 2U))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & VL_COUNTONES_I(
                                                                   (3U 
                                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i)))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (0x0000000fU & (- (IData)((IData)((0x0fU 
                                             == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((((((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                        << 1U)) | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                          >> 1U)) | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 0x0000001fU))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
        = ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
            ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i
            : ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
                ? ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                    << 0x00000010U) | (0x0000ffffU 
                                       & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i))
                : ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                    << 0x00000018U) | ((0x00ff0000U 
                                        & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           << 0x00000010U)) 
                                       | ((0x0000ff00U 
                                           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
        = ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
            ? ((((0x0000ff00U & ((- (IData)((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001fU))) 
                                 << 8U)) | (0x000000ffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                             >> 0x00000017U)))))) 
                << 0x00000010U) | ((0x0000ff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                                  >> 0x0000000fU)))) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      (- (IData)((1U 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 7U)))))))
            : ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
                ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i
                : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec 
        = (((VL_GTS_III(9, ((((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                               >> 0x0000001fU) & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                  >> 3U)) 
                             << 8U) | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                       >> 0x00000018U)), 
                        (((IData)((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                    >> 3U) & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                              >> 0x0000001fU))) 
                          << 8U) | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                    >> 0x00000018U))) 
             << 3U) | (VL_GTS_III(9, ((0x00000100U 
                                       & ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 0x0000000fU) 
                                          & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                             << 6U))) 
                                      | (0x000000ffU 
                                         & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                            >> 0x00000010U))), 
                                  ((0x00000100U & (
                                                   ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 6U) 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                      >> 0x0000000fU))) 
                                   | (0x000000ffU & 
                                      (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                       >> 0x00000010U)))) 
                       << 2U)) | ((VL_GTS_III(9, ((0x00000100U 
                                                   & ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                       >> 7U) 
                                                      & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                         << 7U))) 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                        >> 8U))), 
                                              ((0x00000100U 
                                                & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 7U) 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                      >> 7U))) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 8U)))) 
                                   << 1U) | VL_GTS_III(9, 
                                                       ((0x00000100U 
                                                         & ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                             << 1U) 
                                                            & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                               << 8U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i)), 
                                                       ((0x00000100U 
                                                         & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                             << 8U) 
                                                            & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                               << 1U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_signed) 
           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
              >> 0x0000001fU));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate)
            ? ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i)
                ? (~ ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                       << 0x00000010U) | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                          >> 0x00000010U)))
                : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg)
            : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic 
        = ((0x28U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_38) 
              | ((0x24U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | (IData)(__VdfgRegularize_h6e95ff9d_0_12))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_38) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_12) 
              | ((0x1bU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | ((0x1eU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                    | ((0x1fU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                       | (0x1aU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left 
        = ((0x2aU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_37) 
              | ((0x27U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | ((0x37U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                    | ((0x35U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                       | (0x49U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__enable_i) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_37));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffle_type 
        = ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode))
            ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffleb_type
            : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffleh_type);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_id 
        = (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type 
                          & (- (IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_mux)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id_imm 
        = (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type 
                          & (- (IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_mux)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id_imm 
        = (0x0000001fU & ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux))
                           ? (1U & (- (IData)((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux)))))
                           : ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux))
                               ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type
                               : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s2_type)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vs_type 
        = (((- (IData)((1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                              >> 0x00000018U)))) << 6U) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_23));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vu_type 
        = __VdfgRegularize_h6e95ff9d_0_23;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_id 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel)
            ? (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_id)
            : (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 2U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 1U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o = 1U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_c_mux_sel_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o = 1U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_dec_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_dec_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_dec_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fencei_insn_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_mux_o = 3U;
    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                  >> 6U)))) {
        if ((0x00000020U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((0x00000010U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((3U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                            >> 0x1eU))) {
                                    if ((2U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x1eU))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000001eU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0000001dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x0000001cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                             >> 0x0000001bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                 >> 0x0000001aU)))) {
                                                            if (
                                                                (0x02000000U 
                                                                 & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                         >> 0x0000000eU)))) {
                                                                    if (
                                                                        (0x00002000U 
                                                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o 
                                                                            = 
                                                                            ((0x00001000U 
                                                                              & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                                              ? 0U
                                                                              : 1U);
                                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 6U;
                                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o = 1U;
                                                                    } else if (
                                                                               (0x00001000U 
                                                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o = 3U;
                                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 6U;
                                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o = 1U;
                                                                    } else {
                                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 0U;
                                                                    }
                                                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_mux_o = 3U;
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
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o = 1U;
                                if ((0U == (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 2U;
                                } else if ((1U == (7U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x0cU)))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 1U;
                                } else if ((2U == (7U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x0cU)))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
                                }
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                                if ((0U != (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    if ((1U != (7U 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                   >> 0x0cU)))) {
                                        if ((2U != 
                                             (7U & 
                                              (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                               >> 0x0cU)))) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o = 0U;
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                             >> 4U)))) {
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((0x00004000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0000000dU)))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o 
                                        = ((0x00001000U 
                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                            ? 1U : 2U);
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0000000cU)))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
                                }
                            } else {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o 
                                    = ((0x00001000U 
                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                        ? 1U : 2U);
                            }
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                      >> 5U)))) {
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o 
                                    = (1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x0eU)));
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0U == (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fencei_insn_o = 1U;
                                } else if ((1U == (7U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x0cU)))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fencei_insn_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_insn_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 0U;
    if ((0x00000040U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000020U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((0x00000010U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0U != (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o 
                                        = ((0x00004000U 
                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                            ? 2U : 0U);
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o = 0U;
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o = 1U;
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                                }
                                if ((0U == (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    if ((0U == ((0x000003e0U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000000aU)) 
                                                | (0x0000001fU 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x14U))) {
                                            if ((1U 
                                                 != 
                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x0302U 
                                                     != 
                                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x14U))) {
                                                    if (
                                                        (2U 
                                                         != 
                                                         (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                          >> 0x14U))) {
                                                        if (
                                                            (0x07b2U 
                                                             == 
                                                             (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                              >> 0x14U))) {
                                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_dec_o = 1U;
                                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o 
                                                                = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i;
                                                        }
                                                        if (
                                                            (0x07b2U 
                                                             != 
                                                             (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                              >> 0x14U))) {
                                                            if (
                                                                (0x0105U 
                                                                 == 
                                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                  >> 0x14U))) {
                                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_o = 1U;
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (2U 
                                                         == 
                                                         (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                          >> 0x14U))) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_dec_o = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x0302U 
                                                     == 
                                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x14U))) {
                                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_dec_o = 1U;
                                                }
                                            }
                                            if ((1U 
                                                 == 
                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x14U))) {
                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o = 1U;
                                            }
                                        }
                                        if ((0U == 
                                             (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x14U))) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                } else if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                } else if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0U == (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                          >> 0x0cU)))) {
                            if ((0U == ((0x000003e0U 
                                         & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                            >> 0x0000000aU)) 
                                        | (0x0000001fU 
                                           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 7U))))) {
                                if ((0U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                            >> 0x14U))) {
                                    if ((1U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x14U))) {
                                        if ((0x0302U 
                                             == (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                 >> 0x14U))) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 0U;
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o 
                                                = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o)));
                                        } else if (
                                                   (2U 
                                                    == 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x14U))) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_insn_o 
                                                = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o)));
                                        } else if (
                                                   (0x07b2U 
                                                    == 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x14U))) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o 
                                                = (1U 
                                                   & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i)));
                                        } else if (
                                                   (0x0105U 
                                                    != 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x14U))) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            }
                        } else {
                            if ((1U == (3U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0cU)))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x0cU)))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0fU)))
                                        ? 0U : 2U);
                            } else if ((3U == (3U & 
                                               (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x0cU)))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0fU)))
                                        ? 0U : 3U);
                            } else {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if (((3U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x1cU)) 
                                 > (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__current_priv_lvl_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                 >> 0x0000001fU)) {
                                if ((0x40000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x20000000U 
                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x10000000U 
                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0x08000000U 
                                                 & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x04000000U 
                                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x01000000U 
                                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                if (
                                                    (0x00800000U 
                                                     & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0U 
                                                                != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00200000U 
                                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00100000U 
                                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else {
                                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                }
                                            } else {
                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else if ((0x10000000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x04000000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x02000000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x01000000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00800000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00400000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00100000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0U 
                                                != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                    }
                                } else if ((0x20000000U 
                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x04000000U 
                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x02000000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x40000000U 
                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0x20000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x08000000U 
                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0x04000000U 
                                                 & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                if (
                                                    (0x01000000U 
                                                     & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00800000U 
                                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00400000U 
                                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                                    } else {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00800000U 
                                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00400000U 
                                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                }
                                            } else {
                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x20000000U 
                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0x10000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x08000000U 
                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x04000000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x02000000U 
                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0x00200000U 
                                                 & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x00100000U 
                                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x00000014U)))) {
                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x02000000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x01000000U 
                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0x00100000U 
                                                 & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                            } else {
                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x01000000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00800000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00400000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x00200000U 
                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x00000014U)))) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                    }
                                } else {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o 
                                = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 1U;
                        }
                    }
                }
                if ((8U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            }
                            if ((1U & (~ vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            }
                        } else {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    } else {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            if ((0U != (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0cU)))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            }
                        } else {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    } else {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                      >> 0x0000000eU)))) {
                            if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            }
                        }
                    } else {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            }
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_c_mux_sel_o = 2U;
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o = 2U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o = 3U;
                    }
                }
            }
        } else {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else if ((0x00000020U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000010U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 3U)))) {
                if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 2U;
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o = 1U;
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((3U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                    >> 0x1eU))) {
                            if ((2U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x1eU))) {
                                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0000001eU)))) {
                                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0000001dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000001cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0000001bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x0000001aU)))) {
                                                    if (
                                                        (0x02000000U 
                                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        if (
                                                            (0x00004000U 
                                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 3U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((3U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x1eU))) {
                                if ((2U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                            >> 0x1eU))) {
                                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x1cU)))) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                                    }
                                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0000001eU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000001dU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0000001cU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x0000001bU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                             >> 0x0000001aU)))) {
                                                        if (
                                                            (0x02000000U 
                                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                            if (
                                                                (0x00004000U 
                                                                 & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
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
            if ((8U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            } else if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & (~ vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i))) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((3U == (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                >> 0x1eU))) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else if ((2U == (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                       >> 0x1eU))) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else if ((0x40000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0x20000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x10000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x08000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x04000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x02000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x00004000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            } else if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                 >> 0x0000000cU)))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            }
                        } else if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    } else if ((0x20000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else if ((0x10000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else if ((0x08000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else if ((0x04000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else {
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                        }
                    }
                }
            }
            if ((8U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            } else if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            } else if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((0U != (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                      >> 0x0cU)))) {
                        if ((1U != (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                          >> 0x0cU)))) {
                            if ((2U != (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0cU)))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        }
        if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                      >> 4U)))) {
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_c_mux_sel_o = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                      >> 3U)))) {
            if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 1U;
                    }
                }
            }
            if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                }
            }
        }
        if ((8U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        } else if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & (~ vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i))) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((0x00004000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 0x0000000dU)))) {
                        if ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((0U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                               >> 0x19U))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                     >> 0x0000000dU)))) {
                    if ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                    >> 0x19U))) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    }
                }
            } else {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else if ((8U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((0U != (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                      >> 0x0cU)))) {
                        if ((1U != (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                          >> 0x0cU)))) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    }
                } else {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
    } else if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((0x00004000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            }
        } else {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
    }
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_c_insn_i) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 0U;
    vlSelfRef.debug_running_o = vlSelfRef.tb_core_debug__DOT__debug_running_o;
    vlSelfRef.debug_halted_o = vlSelfRef.tb_core_debug__DOT__debug_halted_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_atop_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_we_o;
    vlSelfRef.tb_core_debug__DOT__dmi_resp_data_o = (IData)(
                                                            (vlSelfRef.tb_core_debug__DOT__dmi_resp 
                                                             >> 2U));
    vlSelfRef.tb_core_debug__DOT__dmi_resp_resp_o = 
        (3U & (IData)(vlSelfRef.tb_core_debug__DOT__dmi_resp));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__pop_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop;
    vlSelfRef.tb_core_debug__DOT__dmi_resp_valid_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_resp_valid_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__rst_n;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rst_n;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rst_ni 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rst_n;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rst_n;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__slave_rdata_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__slave_rdata_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__data_mem_csrs;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__push_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push;
    vlSelfRef.tb_core_debug__DOT__dmi_req_ready_o = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__dmi_req_ready_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__ndmreset_ack_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__ndmreset_ack_i;
    vlSelfRef.tb_core_debug__DOT__core_instr_rvalid 
        = vlSelfRef.tb_core_debug__DOT__u_demux__DOT__core_rvalid_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_add_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_add_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be 
                    = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be 
                = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask;
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dtm_op 
        = (3U & (IData)((vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                         >> 0x00000020U)));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr 
        = (0x0000007fU & (IData)((vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                  >> 0x00000022U)));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2 = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2 
        = (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o 
                          >> 0x0fU));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k = 0U;
    if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((0x0cU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (3U & (- (IData)((IData)((3U == (3U 
                                                  & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))))));
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((3U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (0x0000000cU & ((- (IData)((IData)(
                                                    (0x0cU 
                                                     == 
                                                     (0x0cU 
                                                      & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec)))))) 
                                 << 2U)));
    } else if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
        = ((0x14U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg
            : ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i)
                ? ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                    << 0x00000010U) | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                       >> 0x00000010U))
                : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i));
    if (((0U != (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_i 
                 & (~ vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_mask))) 
         & (0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 0U;
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_o = 3U;
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_valid_o = 1U;
    }
    if ((0x00000040U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000020U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 4U)))) {
                if ((8U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 2U;
                            if ((0U != (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0cU)))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
                            }
                        }
                    }
                } else if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 3U;
                    }
                }
            }
            if ((0x00000010U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0U != (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0eU)))) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                 >> 3U)))) {
                if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                    }
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000010U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 3U)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((3U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x1eU))) {
                                if ((2U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                            >> 0x1eU))) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 2U)))) {
                if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                         >> 3U)))) {
        if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                      >> 2U)))) {
            if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                }
            }
        }
    }
    while ((1U > vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k)) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k))) 
                & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2) 
               | (0x00000000ffffffffULL & ((0U != vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1) 
                                           << (0x0000001fU 
                                               & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k))));
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k 
            = ((IData)(1U) + vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction2__DOT__unnamedblk2__DOT__k);
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2;
    if ((1U > (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2 
            = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2;
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_valid_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i) 
                           & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q_aligned) 
                              >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel))) 
                          & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i) {
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_valid_o = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_valid_o = 1U;
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i) 
                           & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q_aligned) 
                              >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel))) 
                          & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i) {
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_o = 4U;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_o = 2U;
    }
    if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_valid_o = 1U;
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_o = 3U;
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaddress_sba_csrs 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_wdata_o 
        = (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbdata_i 
           << ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_idx_masked) 
               << 3U));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_req_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__req;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sberror 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sberror_valid 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sberror_valid_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__global_irq_enable 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__m_ie_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a_1_neg 
        = (0x0001ffffU & ((IData)((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a 
                                   >> 0x00000011U)) 
                          ^ (- (IData)(((~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i)) 
                                        & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U] 
        = ((0xfffc0000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U]) 
           | (0x0003ffffU & VL_MULS_III(18, (0x0003ffffU 
                                             & VL_EXTENDS_II(18,9, 
                                                             (0x000001ffU 
                                                              & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a)))), 
                                        (0x0003ffffU 
                                         & VL_EXTENDS_II(18,9, 
                                                         (0x000001ffU 
                                                          & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b)))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U] 
        = ((0x0003ffffU & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U]) 
           | (VL_MULS_III(18, (0x0003ffffU & VL_EXTENDS_II(18,9, 
                                                           (0x000001ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                       >> 9U))))), 
                          (0x0003ffffU & VL_EXTENDS_II(18,9, 
                                                       (0x000001ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                   >> 9U)))))) 
              << 0x00000012U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
        = ((0xfffffff0U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U]) 
           | (0x0000000fU & (VL_MULS_III(18, (0x0003ffffU 
                                              & VL_EXTENDS_II(18,9, 
                                                              (0x000001ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                          >> 9U))))), 
                                         (0x0003ffffU 
                                          & VL_EXTENDS_II(18,9, 
                                                          (0x000001ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                      >> 9U)))))) 
                             >> 0x0000000eU)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
        = ((0xffc0000fU & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U]) 
           | (0x003ffff0U & (VL_MULS_III(18, (0x0003ffffU 
                                              & VL_EXTENDS_II(18,9, 
                                                              (0x000001ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                          >> 0x00000012U))))), 
                                         (0x0003ffffU 
                                          & VL_EXTENDS_II(18,9, 
                                                          (0x000001ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                      >> 0x00000012U)))))) 
                             << 4U)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
        = ((0x003fffffU & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U]) 
           | (VL_MULS_III(18, (0x0003ffffU & VL_EXTENDS_II(18,9, 
                                                           (0x000001ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                       >> 0x0000001bU))))), 
                          (0x0003ffffU & VL_EXTENDS_II(18,9, 
                                                       (0x000001ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                   >> 0x0000001bU)))))) 
              << 0x00000016U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[2U] 
        = (0x000000ffU & (VL_MULS_III(18, (0x0003ffffU 
                                           & VL_EXTENDS_II(18,9, 
                                                           (0x000001ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                       >> 0x0000001bU))))), 
                                      (0x0003ffffU 
                                       & VL_EXTENDS_II(18,9, 
                                                       (0x000001ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                   >> 0x0000001bU)))))) 
                          >> 0x0000000aU));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
        = (((QData)((IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_46)
                              ? __VdfgRegularize_h6e95ff9d_0_48
                              : __VdfgRegularize_h6e95ff9d_0_47))) 
            << 0x00000011U) | (QData)((IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_46)
                                                ? __VdfgRegularize_h6e95ff9d_0_47
                                                : __VdfgRegularize_h6e95ff9d_0_48))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bset_result 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
           | vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_inv 
        = (~ vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_value 
        = ((- (IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_12) 
                       | ((0x1fU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                          | (0x1eU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))))) 
           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
              >> 1U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__trigger_match_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_result 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i 
           + (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_op_b_msu 
              + VL_MULS_III(32, vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i, vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_op_a_msu)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_power_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_alu_we_fw_power;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_alu_we_fw;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec 
        = ((((((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                   & (0x1fU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                  << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                             & (0x1eU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                            << 2U)) | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                         & (0x1dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                        << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                  & (0x1cU 
                                                     == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
               << 0x0000000cU) | ((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                      & (0x1bU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                     << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                & (0x1aU 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                        & (0x19U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                       << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                 & (0x18U 
                                                    == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                  << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                  & (0x17U 
                                                     == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (0x16U 
                                                       == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (0x15U 
                                                       == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                     & (0x14U 
                                                        == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                              << 4U) 
                                             | (((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                   & (0x13U 
                                                      == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                     & (0x12U 
                                                        == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                     & (0x11U 
                                                        == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                      & (0x10U 
                                                         == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))))) 
            << 0x00000010U) | ((((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                     & (0x0fU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                               & (0x0eU 
                                                  == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                       & (0x0dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                & (0x0cU 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                     & (0x0bU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                               & (0x0aU 
                                                  == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                       & (9U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                & (8U 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                 & (7U 
                                                    == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                   & (5U 
                                                      == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (4U 
                                                       == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                             << 4U) 
                                            | (((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                  & (3U 
                                                     == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_ready 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ready_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
            }
        } else if ((1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q_aligned) 
                          >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel)))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__going) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 3U;
        }
    } else {
        if ((((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmd_valid_i) 
              & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q_aligned) 
                 >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel))) 
             & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 1U;
        }
        if ((1U & (((((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resumereq_aligned) 
                      >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel)) 
                     & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q_aligned) 
                           >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel)))) 
                    & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__haltreq_aligned) 
                          >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel)))) 
                   & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q_aligned) 
                      >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel))))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 2U;
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__debug_req_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__debug_req_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__p_elw_finish_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__p_elw_finish;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_valid_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__lsu_busy_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__lsu_busy;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_req_o;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = ((0x00000080U 
                                                  & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                  ? 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                  >> 5U))))) 
                                                  & (((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                       ? __VdfgRegularize_h6e95ff9d_0_2
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                        ? __VdfgRegularize_h6e95ff9d_0_2
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                         ? __VdfgRegularize_h6e95ff9d_0_2
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                          ? __VdfgRegularize_h6e95ff9d_0_2
                                                          : 
                                                         (__VdfgRegularize_h6e95ff9d_0_2 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                       >> 6U)))))))
                                                  : 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                  >> 5U))))) 
                                                  & (((0x00000010U 
                                                       & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                       ? __VdfgRegularize_h6e95ff9d_0_3
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                        ? __VdfgRegularize_h6e95ff9d_0_3
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                         ? __VdfgRegularize_h6e95ff9d_0_3
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                          ? __VdfgRegularize_h6e95ff9d_0_3
                                                          : 
                                                         (__VdfgRegularize_h6e95ff9d_0_3 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                       >> 6U))))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we 
        = (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[1953U] 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_24));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we 
        = (vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[1954U] 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_24));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcounteren_we 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[774U]);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_we 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[800U]);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
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
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((((((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2847U]) 
                  << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                             & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2846U]) 
                            << 2U)) | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2845U]) 
                                        << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2844U]))) 
               << 0x0000000cU) | ((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2843U]) 
                                     << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2842U]) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2841U]) 
                                       << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2840U]))) 
                                  << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2839U]) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2838U]) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2837U]) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2836U]))) 
                                              << 4U) 
                                             | (((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2835U]) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2834U]) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2833U]) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2832U]))))) 
            << 0x00000010U) | ((((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2831U]) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2830U]) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2829U]) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2828U]))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2827U]) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2826U]) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2825U]) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2824U]))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2823U]) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2822U]) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2821U]) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2820U]))) 
                                             << 4U) 
                                            | (((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2819U]) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2818U]) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2817U]) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2816U]))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_bypass_o 
        = (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we) 
            & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[772U])
            ? (0xffff0888U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata)
            : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_q);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
           == vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_eq);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_addr_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__data_misaligned_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_misaligned;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_misaligned;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
        = (((((0x00000038U & (((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                >> 0x0000001eU) + (3U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                      >> 0x0000001cU))) 
                              << 3U)) | (7U & ((3U 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                   >> 0x0000001aU)) 
                                               + (3U 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                     >> 0x00000018U))))) 
             << 0x00000012U) | (((0x00000038U & (((3U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                      >> 0x00000016U)) 
                                                  + 
                                                  (3U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                      >> 0x00000014U))) 
                                                 << 3U)) 
                                 | (7U & ((3U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                 >> 0x00000012U)) 
                                          + (3U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                   >> 0x00000010U))))) 
                                << 0x0000000cU)) | 
           ((((0x00000038U & (((3U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                      >> 0x0000000eU)) 
                               + (3U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                        >> 0x0000000cU))) 
                              << 3U)) | (7U & ((3U 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                   >> 0x0000000aU)) 
                                               + (3U 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                     >> 8U))))) 
             << 6U) | ((0x00000038U & (((3U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                               >> 6U)) 
                                        + (3U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                 >> 4U))) 
                                       << 3U)) | (7U 
                                                  & ((3U 
                                                      & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                         >> 2U)) 
                                                     + 
                                                     (3U 
                                                      & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ffffffc00ULL & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | (IData)((IData)((0x00000201U | (0x000001feU 
                                             & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                << 1U))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ff80003ffULL & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((0x00000100U | ((0x0001fe00U 
                                               & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                  >> 7U)) 
                                              | (0x000000ffU 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                    >> 8U)))))) 
              << 0x0000000aU));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000007ffffffULL & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((1U | (0x000001feU & 
                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                      >> 0x00000017U))))) 
              << 0x0000001bU));
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
                  | ((0x14U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                     | (0x16U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))))))) {
        if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        } else if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffffdffULL & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ff7ffffffULL & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = 0U;
    if ((0x36U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i;
    } else if ((((0x30U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 || (0x32U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) 
                || (0x37U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
    } else if ((((0x31U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 || (0x33U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) 
                || (0x35U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                >> 0x1fU) ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev
                : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev);
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
        = ((((0x0000ff00U & (((0x00000080U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                               ? ((0x00000040U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                   ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                      >> 0x00000018U)
                                   : (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                      >> 0x00000010U))
                               : ((0x00000040U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                   ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                      >> 8U) : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000020U 
                                            & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                            ? ((0x00000010U 
                                                & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x00000018U)
                                                : (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x00000010U))
                                            : ((0x00000010U 
                                                & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 8U)
                                                : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))) 
            << 0x00000010U) | ((0x0000ff00U & (((8U 
                                                 & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                  >> 0x00000018U)
                                                  : 
                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                  >> 0x00000010U))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                  >> 8U)
                                                  : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                                               << 8U)) 
                               | (0x000000ffU & ((2U 
                                                  & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x00000018U)
                                                   : 
                                                  (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x00000010U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 8U)
                                                   : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
        = ((((0x0000ff00U & (((0x00000080U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                               ? ((0x00000040U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                   ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                      >> 0x00000018U)
                                   : (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                      >> 0x00000010U))
                               : ((0x00000040U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                   ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                      >> 8U) : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000020U 
                                            & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                            ? ((0x00000010U 
                                                & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x00000018U)
                                                : (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x00000010U))
                                            : ((0x00000010U 
                                                & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 8U)
                                                : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)))) 
            << 0x00000010U) | ((0x0000ff00U & (((8U 
                                                 & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                  >> 0x00000018U)
                                                  : 
                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                  >> 0x00000010U))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                  >> 8U)
                                                  : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)) 
                                               << 8U)) 
                               | (0x000000ffU & ((2U 
                                                  & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x00000018U)
                                                   : 
                                                  (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x00000010U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 8U)
                                                   : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = (0x0000000fU & (- (IData)((1U & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                            >> 3U) 
                                           | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                               >> 3U) 
                                              & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                  >> 2U) 
                                                 | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                     >> 2U) 
                                                    & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                        >> 1U) 
                                                       | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                           >> 1U) 
                                                          & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)))))))))));
    if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((0x0cU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (3U & (- (IData)((1U & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                          >> 1U) | 
                                         (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                           >> 1U) & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec))))))));
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((3U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (0x0000000cU & ((- (IData)((1U & (
                                                   ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                    >> 3U) 
                                                   | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                       >> 3U) 
                                                      & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                         >> 2U)))))) 
                                 << 2U)));
    } else if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ffffffc00ULL & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | (IData)((IData)((0x000001feU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                             << 1U)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ff80003ffULL & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)(((0x0001fe00U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                               >> 7U)) 
                               | (0x000000ffU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                                 >> 8U))))) 
              << 0x0000000aU));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000007ffffffULL & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)((0x000001feU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                              >> 0x00000017U)))) 
              << 0x0000001bU));
    if (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
         | ((0x14U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
            | (0x16U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
            = (1ULL | vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        } else if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000000200ULL | vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000008000000ULL | vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_id 
        = (3U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vu_type);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_b_o 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
           [(0x0000001fU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_b_i))] 
           & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_b_i) 
                                  >> 5U))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
           [(0x0000001fU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_a_i))] 
           & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_a_i) 
                                  >> 5U))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_waddr_id_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mult_operator 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_we_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_type_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_c_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__dret_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_dec_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__uret_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_dec_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mret_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_dec_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fencei_insn_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_access 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_dec_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_mux 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_mux_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_status 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_insn_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn_in_dec_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_atop_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_we_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_o;
    vlSelfRef.dmi_resp_data_o = vlSelfRef.tb_core_debug__DOT__dmi_resp_data_o;
    vlSelfRef.dmi_resp_resp_o = vlSelfRef.tb_core_debug__DOT__dmi_resp_resp_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q;
    vlSelfRef.dmi_resp_valid_o = vlSelfRef.tb_core_debug__DOT__dmi_resp_valid_o;
    vlSelfRef.tb_core_debug__DOT__dm_slave_rdata = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__slave_rdata_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__pop_i) 
         & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__empty_o)))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__push_i) 
         & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o)))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__pop_i) 
         & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__empty_o)))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__push_i) 
           & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__pop_i)) 
          & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o))) 
         & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__empty_o)))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__status_cnt_q;
    }
    vlSelfRef.dmi_req_ready_o = vlSelfRef.tb_core_debug__DOT__dmi_req_ready_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__instr_rvalid_i 
        = vlSelfRef.tb_core_debug__DOT__core_instr_rvalid;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__master_addr_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_add_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_be_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__be;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__autoexecdata_idx 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr) 
                          - (IData)(4U)));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k = 0U;
    if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ndmreset_i) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
    }
    while ((1U > vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k)) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k))) 
                & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3) 
               | (0x00000000ffffffffULL & ((0U != vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2) 
                                           << (0x0000001fU 
                                               & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k))));
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k 
            = ((IData)(1U) + vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__p_reduction3__DOT__unnamedblk3__DOT__k);
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum3 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmderror_valid 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_valid_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmderror 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__cmderror_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaddress_sba_csrs;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_wdata_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_wdata_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_req_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_req_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sberror_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sberror;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sberror_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sberror_valid;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_result 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i 
           + (VL_EXTENDS_II(32,18, (0x0003ffffU & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U])) 
              + (VL_EXTENDS_II(32,18, (0x0003ffffU 
                                       & ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
                                           << 0x0000000eU) 
                                          | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U] 
                                             >> 0x00000012U)))) 
                 + (VL_EXTENDS_II(32,18, (0x0003ffffU 
                                          & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
                                             >> 4U))) 
                    + VL_EXTENDS_II(32,18, (0x0003ffffU 
                                            & ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[2U] 
                                                << 0x0000000aU) 
                                               | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
                                                  >> 0x00000016U))))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[0U] 
        = (IData)((0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                                       (0x00000003ffffffffULL 
                                                        & VL_EXTENDS_QI(34,17, 
                                                                        (0x0001ffffU 
                                                                         & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a)))), 
                                                       (0x00000003ffffffffULL 
                                                        & VL_EXTENDS_QI(34,17, 
                                                                        (0x0001ffffU 
                                                                         & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b)))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U] 
        = ((0xfffffffcU & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U]) 
           | (IData)(((0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                                           (0x00000003ffffffffULL 
                                                            & VL_EXTENDS_QI(34,17, 
                                                                            (0x0001ffffU 
                                                                             & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a)))), 
                                                           (0x00000003ffffffffULL 
                                                            & VL_EXTENDS_QI(34,17, 
                                                                            (0x0001ffffU 
                                                                             & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b)))))) 
                      >> 0x00000020U)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U] 
        = ((3U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U]) 
           | ((IData)((0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                                           (0x00000003ffffffffULL 
                                                            & VL_EXTENDS_QI(34,17, vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a_1_neg)), 
                                                           (0x00000003ffffffffULL 
                                                            & VL_EXTENDS_QI(34,17, 
                                                                            (0x0001ffffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
                                                                                >> 0x00000011U)))))))) 
              << 2U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[2U] 
        = (0x0000000fU & (((IData)((0x00000003ffffffffULL 
                                    & VL_MULS_QQQ(34, 
                                                  (0x00000003ffffffffULL 
                                                   & VL_EXTENDS_QI(34,17, vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a_1_neg)), 
                                                  (0x00000003ffffffffULL 
                                                   & VL_EXTENDS_QI(34,17, 
                                                                   (0x0001ffffU 
                                                                    & (IData)(
                                                                              (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
                                                                               >> 0x00000011U)))))))) 
                           >> 0x0000001eU) | ((IData)(
                                                      ((0x00000003ffffffffULL 
                                                        & VL_MULS_QQQ(34, 
                                                                      (0x00000003ffffffffULL 
                                                                       & VL_EXTENDS_QI(34,17, vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a_1_neg)), 
                                                                      (0x00000003ffffffffULL 
                                                                       & VL_EXTENDS_QI(34,17, 
                                                                                (0x0001ffffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
                                                                                >> 0x00000011U))))))) 
                                                       >> 0x00000020U)) 
                                              << 2U)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b_ext 
        = VL_EXTENDS_II(32,17, (0x0001ffffU & (IData)(
                                                      (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
                                                       >> 0x00000011U))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bclr_result 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
           & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_inv);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                                                 | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_power_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__debug_req_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__debug_req_o;
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__count_down = 1U;
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ex_o 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext;
    } else {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__count_down = 0U;
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ex_o 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_wb_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
           | (0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_start_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_o) 
           & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_ex_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_req_pmp 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x00000800U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
            ? ((0x00000400U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                ? ((0x00000200U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                    ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                            >> 3U))))) 
                       & ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                               >> 2U))))) 
                          & (((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                               ? (4U & (- (IData)((1U 
                                                   & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))
                               : (0x00000602U & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))) 
                             & (- (IData)((IData)((0x0110U 
                                                   == 
                                                   (0x01f0U 
                                                    & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))))
                    : (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 
                       & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 8U)))))))
                : (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 
                   & (- (IData)((3U == (3U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 8U)))))))
            : ((0x00000400U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                ? (((0x00000010U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                     ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                             >> 2U))))) 
                        & (((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                             ? ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                 ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q
                                 : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q)
                             : ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                 ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                                 : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)) 
                           & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 3U)))))))
                     : (((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                          ? (4U & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                   >> 1U))))) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))
                          : ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                              ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_rdata 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))
                              : (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_rdata 
                                 & (- (IData)((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))) 
                        & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                               >> 3U))))))) 
                   & (- (IData)((IData)((0x03a0U == 
                                         (0x03e0U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))
                : ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                        >> 7U))))) 
                   & (((0x00000040U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                        ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                >> 4U))))) 
                           & ((- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                   >> 3U))))) 
                              & (((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                   ? ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))) 
                                      & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mip 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                           >> 1U)))))))
                                   : ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                       ? (((0x80000000U 
                                            & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q) 
                                               << 0x0000001aU)) 
                                           | (0x0000001fU 
                                              & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q))) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))
                                       : ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                           ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                           : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q))) 
                                 & (- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                   >> 5U))))))))
                        : ((0x00000020U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                            ? ((0x00000010U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5
                                : ((8U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                    ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5
                                    : ((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5
                                        : ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))
                                            : (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))))))
                            : ((- (IData)((1U & (~ 
                                                 ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 3U))))) 
                               & (((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                    ? (((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                         ? ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
                                             << 8U) 
                                            | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q))
                                         : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_q) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                         >> 1U))))))
                                    : (((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                         ? 0x40001104U
                                         : ((0x00020000U 
                                             & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                << 0x00000011U)) 
                                            | ((0x00001800U 
                                                & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                   << 0x0000000aU)) 
                                               | ((((8U 
                                                     & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                          >> 4U))) 
                                                   << 4U) 
                                                  | ((8U 
                                                      & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                           >> 6U))))))) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                         >> 1U))))))) 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                    >> 4U))))))))) 
                      & (- (IData)((3U == (3U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                 >> 8U)))))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((((((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                   & ((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                          >> 0x0000001fU)) & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2975U])) 
                  << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                             & ((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                    >> 0x0000001eU)) 
                                & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2974U])) 
                            << 2U)) | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                         & ((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                >> 0x0000001dU)) 
                                            & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2973U])) 
                                        << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & ((~ 
                                                      (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                       >> 0x0000001cU)) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2972U])))) 
               << 0x0000000cU) | ((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                      & ((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                             >> 0x0000001bU)) 
                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2971U])) 
                                     << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & ((~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                     >> 0x0000001aU)) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2970U])) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                        & ((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                               >> 0x00000019U)) 
                                           & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2969U])) 
                                       << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & ((~ 
                                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                      >> 0x00000018U)) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2968U])))) 
                                  << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & ((~ 
                                                      (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                       >> 0x00000017U)) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2967U])) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                         >> 0x00000016U)) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2966U])) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                         >> 0x00000015U)) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2965U])) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ 
                                                         (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                          >> 0x00000014U)) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2964U])))) 
                                              << 4U) 
                                             | (((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & ((~ 
                                                       (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                        >> 0x00000013U)) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2963U])) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ 
                                                         (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                          >> 0x00000012U)) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2962U])) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ 
                                                         (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                          >> 0x00000011U)) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2961U])) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                      & ((~ 
                                                          (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                           >> 0x00000010U)) 
                                                         & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2960U])))))) 
            << 0x00000010U) | ((((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & ((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                            >> 0x0000000fU)) 
                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2959U])) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & ((~ 
                                                   (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                    >> 0x0000000eU)) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2958U])) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & ((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                              >> 0x0000000dU)) 
                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2957U])) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & ((~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                     >> 0x0000000cU)) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2956U])))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & ((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                            >> 0x0000000bU)) 
                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2955U])) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & ((~ 
                                                   (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                    >> 0x0000000aU)) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2954U])) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & ((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                              >> 9U)) 
                                          & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2953U])) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & ((~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                     >> 8U)) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2952U])))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & ((~ 
                                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                      >> 7U)) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2951U])) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & ((~ 
                                                       (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                        >> 6U)) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2950U])) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & ((~ 
                                                       (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                        >> 5U)) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2949U])) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                         >> 4U)) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2948U])))) 
                                             << 4U) 
                                            | (((((~ 
                                                   (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                    >> 3U)) 
                                                  & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2947U])) 
                                                 << 3U) 
                                                | (((~ 
                                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                      >> 2U)) 
                                                    & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2946U])) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                         >> 1U)) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2945U])) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_h39c821e2_0_0[2944U])))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mie_bypass 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_bypass_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_addr_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_be_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3 
        = ((((0x000000f0U & (((7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                     >> 0x00000015U)) 
                              + (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                       >> 0x00000012U))) 
                             << 4U)) | (0x0000000fU 
                                        & ((7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                                  >> 0x0000000fU)) 
                                           + (7U & 
                                              (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                               >> 0x0000000cU))))) 
            << 8U) | ((0x000000f0U & (((7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                              >> 9U)) 
                                       + (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                                >> 6U))) 
                                      << 4U)) | (0x0000000fU 
                                                 & ((7U 
                                                     & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                                        >> 3U)) 
                                                    + 
                                                    (7U 
                                                     & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
        = ((((0x0000ff00U & (((8U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                               ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                  >> 0x00000018U) : 
                              (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                   >> 0x00000010U) : 
                               (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                 ? 
                                                (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                                 >> 8U)
                                                 : 
                                                (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                  ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1
                                                  : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                          ^ (- (IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__do_min)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                      >> 1U)))) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                                = (0x0000000fU & ((1U 
                                                   & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                                   ? 
                                                  (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                                   : (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)));
                        }
                    } else {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                            = ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                ? ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                   | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                : (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
                    }
                } else {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                        = (0x0000000fU & ((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                           ? (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater))
                                           : (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                                 | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)))));
                }
            }
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = (1U 
                                                 & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpCode_SI) 
                                                    & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI) 
                                                       ^ 
                                                       (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpA_DI 
                                                        >> 0x0000001fU))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
        = (0x0000001fffffffffULL & (VL_EXTENDS_QQ(37,36, vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
                                    + VL_EXTENDS_QQ(37,36, vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_b_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_a 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_z_type 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_dec_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__dret_dec;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_dec_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__uret_dec;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_dec_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mret_dec;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_apu_stall 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_access) 
           & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o) 
              & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o) 
                 >> 1U)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_dec_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_dec_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_b_id 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
           & ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
              & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                 == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_b_id 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
           & ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
              & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i) 
                 == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
           & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o) 
               == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
              & (0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id 
        = ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
            ? ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_c) 
                 << 5U) | (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                          >> 0x0000000fU))) 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))))))
            : (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_c) 
                << 5U) | (0x0000001fU & ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
                                          ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                             >> 7U)
                                          : (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                             >> 0x0000001bU)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__csr_status;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn_in_dec_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
              & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                 == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
              & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i) 
                 == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o) 
               == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
              & (0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_we_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_we_o;
    vlSelfRef.tb_core_debug__DOT__instr_dbg_rdata = vlSelfRef.tb_core_debug__DOT__dm_slave_rdata;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__instr_rvalid_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__instr_rvalid_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_be_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__master_be_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderror_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmderror_valid;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderror_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__cmderror;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__master_wdata_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_wdata_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__master_req_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_req_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__accumulator 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i)
            ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b_ext 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i))))))
            : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_p_elw_no_sleep_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
           | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec 
        = ((((((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                   & (0x1fU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                  << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                             & (0x1eU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                            << 2U)) | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                         & (0x1dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                        << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                  & (0x1cU 
                                                     == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
               << 0x0000000cU) | ((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                      & (0x1bU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                     << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                & (0x1aU 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                        & (0x19U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                       << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                 & (0x18U 
                                                    == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                  << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                  & (0x17U 
                                                     == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (0x16U 
                                                       == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (0x15U 
                                                       == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                     & (0x14U 
                                                        == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                              << 4U) 
                                             | (((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                   & (0x13U 
                                                      == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                     & (0x12U 
                                                        == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                     & (0x11U 
                                                        == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                      & (0x10U 
                                                         == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))))) 
            << 0x00000010U) | ((((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                     & (0x0fU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                               & (0x0eU 
                                                  == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                       & (0x0dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                & (0x0cU 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                     & (0x0bU == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                    << 3U) | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                               & (0x0aU 
                                                  == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                       & (9U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                      << 1U) | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                & (8U 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                 & (7U 
                                                    == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                   & (5U 
                                                      == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (4U 
                                                       == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                             << 4U) 
                                            | (((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                  & (3U 
                                                     == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))))));
    vlSelfRef.tb_core_debug__DOT__debug_req_o = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__debug_req_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__lsu_rdata 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__lsu_ready_wb 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_wb_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__p_elw_start 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_start_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_req_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_req_pmp;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                 >> 3U)) & ((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                >> 3U)) & ((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                               >> 3U)) 
                                           & (0U != 
                                              ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events) 
                                               & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]))))) 
            << 3U) | ((4U & (((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                  >> 2U)) & ((~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                                 >> 2U)) 
                                             & ((~ 
                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                  >> 2U)) 
                                                & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events) 
                                                   >> 1U)))) 
                             << 2U)) | (1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                 | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                    | vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mie_bypass_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__mie_bypass;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_addr_pmp 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_be_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_be_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_wdata_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__misaligned_stall_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l4 
        = ((0x000003e0U & (((0x0000000fU & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3) 
                                            >> 0x0000000cU)) 
                            + (0x0000000fU & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3) 
                                              >> 8U))) 
                           << 5U)) | (0x0000001fU & 
                                      ((0x0000000fU 
                                        & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3) 
                                           >> 4U)) 
                                       + (0x0000000fU 
                                          & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result 
        = ((((0x0000ff00U & (((8U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                               ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
                                  >> 0x00000018U) : 
                              (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
                                   >> 0x00000010U) : 
                               (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                 ? 
                                                (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
                                                 >> 8U)
                                                 : 
                                                (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                  ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result
                                                  : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__comparison_result_o 
        = (1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                 >> 3U));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = ((((0x0000ff00U & ((IData)((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                      >> 0x0000001cU)) 
                             << 8U)) | (0x000000ffU 
                                        & (IData)((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                   >> 0x00000013U)))) 
            << 0x00000010U) | ((0x0000ff00U & ((IData)(
                                                       (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                        >> 0x0000000aU)) 
                                               << 8U)) 
                               | (0x000000ffU & (IData)(
                                                        (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                         >> 1U)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
        = ((0x14U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result
            : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jump_target 
        = ((1U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
            ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
               + vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_uj_type)
            : ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
                   + vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_sb_type)
                : (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
                   + vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_id_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_dec_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_b_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_b_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_b_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_c_id 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
           & ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
              & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                 == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_c_id 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
           & ((0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
              & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i) 
                 == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
           & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o) 
               == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
              & (0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ctrl_transfer_insn_in_dec 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id;
    vlSelfRef.tb_core_debug__DOT__obi_we_data = vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_we_o;
    vlSelfRef.tb_core_debug__DOT__u_demux__DOT__dbg_rdata_i 
        = vlSelfRef.tb_core_debug__DOT__instr_dbg_rdata;
    vlSelfRef.tb_core_debug__DOT__u_demux__DOT__core_rdata_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_demux__DOT__pending_dbg_q)
            ? vlSelfRef.tb_core_debug__DOT__u_demux__DOT__dbg_rdata_i
            : 0x0000006fU);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_rvalid_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__instr_rvalid_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__master_be_o 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__master_be_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (2U | (0xfffffff0U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0x00000080U | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0xffffffdfU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfff1ffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (((4U & (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q_aligned) 
                       >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                      << 2U)) | ((2U & (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q_aligned) 
                                         >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumeack_aligned) 
                                                      >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))))) 
              << 0x00000011U));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffeffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00010000U & (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumeack_aligned) 
                              >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                             << 0x00000010U)));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xffff0fffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (((0U < vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o) 
               << 0x0000000fU) | ((0U < vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_o) 
                                  << 0x0000000eU)));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffdffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00000200U & (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_aligned) 
                              >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                             << 9U)));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffeffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00000100U & (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_aligned) 
                              >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                             << 8U)));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffff7ffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00000800U & ((~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_aligned) 
                                 >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                             << 0x0000000bU)));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffbffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x00000400U & ((~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_aligned) 
                                 >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                             << 0x0000000aU)));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (2U | (0xfffffff0U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (0x08000000U | (0xe0ffffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xffffefffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) 
              << 0x0000000cU));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xfffff8ffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q) 
              << 8U));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = (0xffff0fffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
        = (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_i));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp = 0ULL;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_write_valid_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_read_valid_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_write_valid_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__clear_resumeack_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs = 0U;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = 0U;
    if ((((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_ready_o) 
          & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_valid_i)) 
         & (1U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dtm_op)))) {
        if ((((((((((4U <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                    && (5U >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                   | (0x10U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                  | (0x11U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                 | (0x12U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                | (0x16U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
               | (0x18U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
              | (0x17U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
             | (0x1dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
            if (((4U <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                 && (5U >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                   >> 
                                                   (0x00000020U 
                                                    & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__autoexecdata_idx) 
                                                       << 5U)))))) 
                          << 2U));
                if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                    if ((0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__autoexecdata_idx)));
                }
            } else {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(((0x10U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                            ? vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q
                                            : ((0x11U 
                                                == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                ? vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus
                                                : (
                                                   (0x12U 
                                                    == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                    ? (IData)(
                                                              (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                               >> 
                                                               (0x0000003fU 
                                                                & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart) 
                                                                   << 5U))))
                                                    : 
                                                   ((0x16U 
                                                     == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                     ? vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                      ? vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q
                                                      : 0U))))))) 
                          << 2U));
            }
        } else if ((((((((((0x20U <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                           && (0x27U >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                          | (0x40U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                         | (0x13U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                        | (0x34U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                       | (0x35U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                      | (0x38U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                     | (0x39U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                    | (0x3aU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
            if (((0x20U <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                 && (0x27U >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q
                                          [(7U & (IData)(
                                                         (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                          >> 0x00000022U)))])) 
                          << 2U));
                if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                    if ((0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> ((IData)(0x00000010U) 
                                     + (0x0000001fU 
                                        & ((0x00000010U 
                                            | (0x0000000fU 
                                               & (IData)(
                                                         (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                          >> 0x00000022U)))) 
                                           - (IData)(0x10U))))));
                }
            } else {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)(((0x40U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                            ? vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0
                                            : ((0x13U 
                                                == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                ? vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1
                                                : (
                                                   (0x34U 
                                                    == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                    ? vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2
                                                    : 
                                                   ((0x35U 
                                                     == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                     ? vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum3
                                                     : 
                                                    ((0x38U 
                                                      == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                      ? vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q
                                                      : 
                                                     ((0x39U 
                                                       == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))
                                                       ? (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)
                                                       : (IData)(
                                                                 (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                                  >> 0x20U)))))))))) 
                          << 2U));
            }
        } else if ((0x3cU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
                       | (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_read_valid_o 
                    = (0U == (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                    >> 0x0000000cU)));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q))) 
                          << 2U));
            }
        } else if ((0x3dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
                       | (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = ((3ULL & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp) 
                       | ((QData)((IData)((IData)((vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q 
                                                   >> 0x20U)))) 
                          << 2U));
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((((((0x3dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                       << 4U) | (((0x3cU 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  << 3U) 
                                                 | ((0x3aU 
                                                     == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                    << 2U))) 
                                     | (((0x39U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                         << 1U) | (0x38U 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                                    << 0x0000000dU) 
                                   | (((((0x35U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                         << 3U) | (
                                                   (0x34U 
                                                    == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                   << 2U)) 
                                       | (((0x13U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                           << 1U) | 
                                          (0x40U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                                      << 9U)) | (((
                                                   ((((0x20U 
                                                       <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                      & (0x27U 
                                                         >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                                                     << 4U) 
                                                    | (((0x1dU 
                                                         == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                        << 3U) 
                                                       | ((0x17U 
                                                           == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                          << 2U))) 
                                                   | (((0x18U 
                                                        == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                       << 1U) 
                                                      | (0x16U 
                                                         == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                                                  << 4U) 
                                                 | ((((0x12U 
                                                       == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                      << 3U) 
                                                     | ((0x11U 
                                                         == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                        << 2U)) 
                                                    | (((0x10U 
                                                         == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                        << 1U) 
                                                       | ((4U 
                                                           <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                          & (5U 
                                                             >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))))))))))) {
            if ((0U != (((((((0x3dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                             << 4U) | (((0x3cU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                        << 3U) | ((0x3aU 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  << 2U))) 
                           | (((0x39U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                               << 1U) | (0x38U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                          << 0x0000000dU) | (((((0x35U 
                                                 == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                << 3U) 
                                               | ((0x34U 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  << 2U)) 
                                              | (((0x13U 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  << 1U) 
                                                 | (0x40U 
                                                    == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                                             << 9U)) 
                        | (((((((0x20U <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                & (0x27U >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                               << 4U) | (((0x1dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                          << 3U) | 
                                         ((0x17U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                          << 2U))) 
                             | (((0x18U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                 << 1U) | (0x16U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                            << 4U) | ((((0x12U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                        << 3U) | ((0x11U 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  << 2U)) 
                                      | (((0x10U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                          << 1U) | 
                                         ((4U <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                          & (5U >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dm_csrs.sv:297: Assertion failed in %m: unique case, but multiple matches found for '8'h%X'\n",4, 'M',vlSymsp->name(),"tb_core_debug.u_dm_obi_top.i_dm_top.i_dm_csrs.csr_read_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',8,(IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr));
                    VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/JTAG/vendor/src/dm_csrs.sv", 297, "");
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_ready_o) 
          & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_valid_i)) 
         & (2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dtm_op)))) {
        if ((((((((((4U <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                    && (5U >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                   | (0x10U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                  | (0x11U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                 | (0x12U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                | (0x16U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
               | (0x17U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
              | (0x1dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
             | (0x18U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
            if (((4U <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                 && (5U >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
                if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                        = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                    if ((0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
                } else {
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
                        = (((~ (0x00000000ffffffffULL 
                                << (0x00000020U & ((IData)(
                                                           (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                            >> 0x00000022U)) 
                                                   << 5U)))) 
                            & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d) 
                           | ((QData)((IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i))) 
                              << (0x00000020U & ((IData)(
                                                         (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                          >> 0x00000022U)) 
                                                 << 5U))));
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__autoexecdata_idx)));
                }
            } else if ((0x10U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                    = (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i);
                if ((0x10000000U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)) {
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
                        = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                           & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
                }
            } else if ((0x11U != (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
                if ((0x12U != (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
                    if ((0x16U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
                        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                            = (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i);
                        if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            if ((0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                            }
                        } else {
                            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
                                = ((~ (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                       >> 8U)) & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q));
                        }
                    } else if ((0x17U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
                        if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            if ((0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                            }
                        } else {
                            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 1U;
                            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d 
                                = (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i);
                        }
                    } else if ((0x1dU != (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
                        if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                                = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                            if ((0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                            }
                        } else {
                            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d = 0U;
                            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                = ((0xfffff000U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                   | (3U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i)));
                            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                = ((0x0000ffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                   | (0x00ff0000U & 
                                      ((IData)((vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                >> 0x00000010U)) 
                                       << 0x00000010U)));
                        }
                    }
                }
            }
        } else if (((0x20U <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                    && (0x27U >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) {
            if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmdbusy_i) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
                if ((0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                }
            } else {
                VL_ASSIGNSEL_WI(256, 32, (0x000000e0U 
                                          & ((IData)(
                                                     (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                      >> 0x00000022U)) 
                                             << 5U)), vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d, (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                    = (1U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                             >> ((IData)(0x00000010U) 
                                 + (0x0000001fU & (
                                                   (0x00000010U 
                                                    | (0x0000000fU 
                                                       & (IData)(
                                                                 (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i 
                                                                  >> 0x00000022U)))) 
                                                   - (IData)(0x10U))))));
            }
        } else if ((0x38U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                    = (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i);
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs;
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = ((0xffbfffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                       | (0x00400000U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                         & ((~ (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                >> 0x00000016U)) 
                                            << 0x00000016U))));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = ((0xffff8fffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                       | (((0U != (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                         >> 0x0000000cU)))
                            ? 0U : (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0x0000000cU))) 
                          << 0x0000000cU));
            }
        } else if ((0x39U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
                       | (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                    = ((0xffffffff00000000ULL & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                       | (IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i)));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_write_valid_o 
                    = (0U == (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                    >> 0x0000000cU)));
            }
        } else if ((0x3aU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
                       | (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                    = ((0x00000000ffffffffULL & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                       | ((QData)((IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i))) 
                          << 0x00000020U));
            }
        } else if ((0x3cU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
                       | (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                    = ((0xffffffff00000000ULL & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                       | (IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i)));
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_write_valid_o 
                    = (0U == (7U & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                    >> 0x0000000cU)));
            }
        } else if ((0x3dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) {
            if ((1U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
                       | (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x00000016U)))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                    = (0x00400000U | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp 
                    = (3ULL | vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp);
            } else {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                    = ((0x00000000ffffffffULL & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                       | ((QData)((IData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmi_req_i))) 
                          << 0x00000020U));
            }
        }
        if ((1U & (~ VL_ONEHOT_I((((((((0x3dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                       << 3U) | ((0x3cU 
                                                  == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                 << 2U)) 
                                     | (((0x3aU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                         << 1U) | (0x39U 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                                    << 0x0000000aU) 
                                   | (((0x38U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                       << 9U) | (((
                                                   (0x20U 
                                                    <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                   & (0x27U 
                                                      >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                                                  << 8U) 
                                                 | ((0x18U 
                                                     == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                    << 7U)))) 
                                  | ((((((0x1dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                         << 3U) | (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                   << 2U)) 
                                       | (((0x16U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                           << 1U) | 
                                          (0x12U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                                      << 3U) | (((0x11U 
                                                  == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                 << 2U) 
                                                | (((0x10U 
                                                     == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                    << 1U) 
                                                   | ((4U 
                                                       <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                      & (5U 
                                                         >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))))))))))) {
            if ((0U != (((((((0x3dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                             << 3U) | ((0x3cU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                       << 2U)) | ((
                                                   (0x3aU 
                                                    == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                   << 1U) 
                                                  | (0x39U 
                                                     == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                          << 0x0000000aU) | (((0x38U 
                                               == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                              << 9U) 
                                             | ((((0x20U 
                                                   <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  & (0x27U 
                                                     >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))) 
                                                 << 8U) 
                                                | ((0x18U 
                                                    == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                   << 7U)))) 
                        | ((((((0x1dU == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                               << 3U) | ((0x17U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                         << 2U)) | 
                             (((0x16U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                               << 1U) | (0x12U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)))) 
                            << 3U) | (((0x11U == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                       << 2U) | (((0x10U 
                                                   == (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                  << 1U) 
                                                 | ((4U 
                                                     <= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr)) 
                                                    & (5U 
                                                       >= (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr))))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dm_csrs.sv:371: Assertion failed in %m: unique case, but multiple matches found for '8'h%X'\n",4, 'M',vlSymsp->name(),"tb_core_debug.u_dm_obi_top.i_dm_top.i_dm_csrs.csr_read_write", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                 , '#',8,(IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dm_csr_addr));
                    VL_STOP_MT("/home/kasirga/Downloads/openselim/openselim.srcs/sources_1/imports/JTAG/vendor/src/dm_csrs.sv", 371, "");
                }
            }
        }
    }
    if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderror_valid_i) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
            = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderror_i;
    }
    if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_valid_i) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
            = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_i;
    }
    if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__ndmreset_ack_i) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
            = (1U | (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
    }
    if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sberror_valid_i) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
            = ((0xffff8fffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
               | ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sberror_i) 
                  << 0x0000000cU));
    }
    if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_valid_i) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
            = (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_i));
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfbffffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xdfffffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfffffff3U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xf7ffffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xffffffcfU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xefffffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    if ((1U & ((~ (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                   >> 0x0000001eU)) & (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                       >> 0x0000001eU)))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__clear_resumeack_o = 1U;
    }
    if (((vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
          >> 0x0000001eU) & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resumeack_i))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
            = (0xbfffffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfc00003fU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x20000000U | (0x1fffffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = ((0xffdfffffU & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
           | ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbbusy_i) 
              << 0x00000015U));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x00000407U | (0xfffff000U & vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
        = (0x00000001ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[0U]) 
                                    + (VL_EXTENDS_QI(33,32, 
                                                     ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[2U] 
                                                       << 0x0000001eU) 
                                                      | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U] 
                                                         >> 2U))) 
                                       + VL_EXTENDS_QI(33,32, vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__accumulator))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_p_elw_no_sleep_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_p_elw_no_sleep_o;
    vlSelfRef.debug_req_o = vlSelfRef.tb_core_debug__DOT__debug_req_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__debug_req_i 
        = vlSelfRef.tb_core_debug__DOT__debug_req_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__lsu_rdata_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__lsu_rdata;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__wb_valid 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__lsu_ready_wb;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__wb_ready_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__lsu_ready_wb;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__wb_ready_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__lsu_ready_wb;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__p_elw_start_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__p_elw_start;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__data_req_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_req_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_req_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_req_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
            ? ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
                ? ((~ vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i) 
                   & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o)
                : (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i 
                   | vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o))
            : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_rdata 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mie_bypass_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__mie_bypass_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_addr_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_addr_pmp;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_be_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_be_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_wdata_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__misaligned_stall 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__misaligned_stall_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__result_o 
        = (0x0000003fU & ((0x0000001fU & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l4) 
                                          >> 5U)) + 
                          (0x0000001fU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l4))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__comparison_result_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_result 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
           + vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_value);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jump_target_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jump_target;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 0U;
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
        if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_b_i) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 2U;
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_c_o 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
           [(0x0000001fU & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))] 
           & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i) 
                                  >> 5U))))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_c_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_c_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_c_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_c_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_c_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__ctrl_transfer_insn_in_dec_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ctrl_transfer_insn_in_dec;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 0U;
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
        if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 2U;
        }
    }
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
        if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_b_i) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 1U;
        }
    }
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 0U;
    }
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
        if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 1U;
        }
    }
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 1U;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o 
        = ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i)) 
           & ((((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) 
                & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i)) 
               | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i) 
                  & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i))) 
              | ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) 
                 & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rvalid_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_rvalid_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d 
        = (1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__data_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_inp;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__clear_resumeack 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__clear_resumeack_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaddress_write_valid 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddress_write_valid_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbdata_read_valid 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_read_valid_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbdata_write_valid 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_write_valid_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result 
        = (0x0000ffffU & VL_SHIFTRS_III(17,17,2, (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
                                                             >> 0x0000000fU))), (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_i)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_p_elw_no_sleep 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_p_elw_no_sleep_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_req_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__debug_req_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_wdata_wb_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__lsu_rdata_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wb_ready_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__wb_ready_i;
    vlSelfRef.tb_core_debug__DOT__obi_req_data = vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_req_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q;
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_we) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q;
    if ((1U & (~ ((((((((1U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)) 
                        | (2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                       | (3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                      | (0x0300U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                     | (0x0304U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                    | (0x0305U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                   | (0x0340U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                  | (0x0341U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))) {
        if ((0x0342U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x07b0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x07b1U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x07b2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
                                = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                        }
                    }
                    if ((0x07b2U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x07b3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
                                    = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_q;
    if (((((((((1U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)) 
               | (2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
              | (3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
             | (0x0300U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
            | (0x0304U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
           | (0x0305U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
          | (0x0340U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
         | (0x0341U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))) {
        if ((1U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((2U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((3U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x0300U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x0304U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((0x0305U != (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if ((0x0340U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
                                            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                                    }
                                }
                            }
                            if ((0x0305U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
                                        = (1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                        if ((0x0304U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
                                    = (0xffff0888U 
                                       & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[10U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[11U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[12U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[13U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[14U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[15U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[16U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[17U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[18U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[19U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[20U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[21U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[22U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[23U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[24U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[25U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[26U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[27U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[28U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[29U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[30U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U];
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[31U] 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U];
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WI(1024, 32, (0x000003e0U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                  << 5U)), vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__csr_rdata_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__csr_rdata;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mie_bypass_i 
           & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_addr_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_addr_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_be_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_be_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_wdata_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__result_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__branch_decision_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
        = ((((0x0000ff00U & (((8U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                               ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                  >> 0x00000018U) : 
                              (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                   >> 0x00000010U) : 
                               (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                 ? 
                                                (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 8U)
                                                 : 
                                                (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                  ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i
                                                  : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev
            : ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
                ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_result
                : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__jump_target_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jump_target_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rc_id 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_c_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 0U;
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
        if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_c_i) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 2U;
        }
    }
    if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
        if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_c_i) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i)))) {
        if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mult_multicycle_i) {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 1U;
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__jr_stall 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o;
    vlSelfRef.tb_core_debug__DOT__core_instr_rdata 
        = vlSelfRef.tb_core_debug__DOT__u_demux__DOT__core_rdata_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rvalid_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rvalid_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n[0U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[0U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n[1U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[1U];
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n[2U] 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_q[2U];
    if (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__push_i) 
         & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__full_o)))) {
        if ((0x43U >= (0x0000007fU & ((IData)(0x00000022U) 
                                      * (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WQ(68, 34, (0x0000007fU & 
                                     ((IData)(0x00000022U) 
                                      * (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__write_pointer_q))), vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__mem_n, vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__data_i);
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clear_resumeack_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__clear_resumeack;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_write_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbaddress_write_valid;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbdata_read_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbdata_read_valid;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbdata_write_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__sbdata_write_valid;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__debug_p_elw_no_sleep_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_p_elw_no_sleep;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_req_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__debug_req_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_wdata 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__regfile_wdata_wb_o;
    vlSelfRef.tb_core_debug__DOT__obi_gnt_data = vlSelfRef.tb_core_debug__DOT__obi_req_data;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o 
        = (0x0000001fU & (((0x40000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                            ? 0x1eU : ((0x20000000U 
                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                        ? 0x1dU : (
                                                   (0x10000000U 
                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1cU
                                                    : 
                                                   ((0x08000000U 
                                                     & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x1bU
                                                     : 
                                                    ((0x04000000U 
                                                      & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x1aU
                                                      : 
                                                     ((0x02000000U 
                                                       & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x19U
                                                       : 
                                                      ((0x01000000U 
                                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x18U
                                                        : 
                                                       ((0x00800000U 
                                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x17U
                                                         : 
                                                        ((0x00400000U 
                                                          & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x16U
                                                          : 
                                                         ((0x00200000U 
                                                           & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x15U
                                                           : 
                                                          ((0x00100000U 
                                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x14U
                                                            : 
                                                           ((0x00080000U 
                                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x13U
                                                             : 
                                                            ((0x00040000U 
                                                              & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x12U
                                                              : 
                                                             ((0x00020000U 
                                                               & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00010000U 
                                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 0x10U
                                                                : 
                                                               ((0x00008000U 
                                                                 & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                 ? 0x0fU
                                                                 : 
                                                                ((0x00004000U 
                                                                  & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                  ? 0x0eU
                                                                  : 
                                                                 ((0x00002000U 
                                                                   & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                   ? 0x0dU
                                                                   : 
                                                                  ((0x00001000U 
                                                                    & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                    ? 0x0cU
                                                                    : 
                                                                   ((0x00000800U 
                                                                     & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                     ? 0x0bU
                                                                     : 
                                                                    ((8U 
                                                                      & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                      ? 3U
                                                                      : 
                                                                     ((0x00000080U 
                                                                       & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                       ? 7U
                                                                       : 
                                                                      ((0x00000400U 
                                                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                        ? 0x0aU
                                                                        : 
                                                                       ((4U 
                                                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                         ? 2U
                                                                         : 
                                                                        ((0x00000040U 
                                                                          & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                          ? 6U
                                                                          : 
                                                                         ((0x00000200U 
                                                                           & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                           ? 9U
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                            ? 1U
                                                                            : 
                                                                           ((0x00000020U 
                                                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                             ? 5U
                                                                             : 
                                                                            ((0x00000100U 
                                                                              & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                              ? 8U
                                                                              : 
                                                                             (((0x00000010U 
                                                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                                ? 4U
                                                                                : 7U) 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (~ vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)))))))))))))))))))))))))))))))))) 
                          | (- (IData)((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
                                        >> 0x0000001fU)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__global_irq_enable) 
           & (0U != vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual));
    vlSelfRef.tb_core_debug__DOT__obi_addr_data = vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_addr_o;
    vlSelfRef.tb_core_debug__DOT__obi_be_data = vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_be_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_wdata_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_wdata_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBIsZero_SI 
        = (0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__branch_decision 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__branch_decision_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clip_result 
        = ((0x17U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
               & (- (IData)((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip) 
                                      | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                         >> 0x0000001fU)))))))
            : (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip) 
                | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                   >> 0x00000024U)) ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg
                : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a_32 
        = ((0x26U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? (((QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))
            : (((QData)((IData)((- (IData)(((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                            & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                               >> 0x0000001fU)))))) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__jump_target_id_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__jump_target_id;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__instr_rdata_i 
        = vlSelfRef.tb_core_debug__DOT__core_instr_rdata;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_valid_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rvalid_i;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q;
    if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__clear_resumeack_i) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
            = ((~ ((IData)(1U) << (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__hartsel))) 
               & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
    }
    if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__ndmreset_i) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned = 0U;
    }
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d 
        = vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
            if (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_write_valid_i) 
                 & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbreadonaddr_i))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
            }
            if (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbdata_write_valid_i) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 2U;
            }
            if (((IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbdata_read_valid_i) 
                 & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbreadondata_i))) {
                vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
            }
        }
    }
    if (((2U < (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_i)) 
         & (0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
    if (((0U != (vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaddress_i 
                 & (~ vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__sbaccess_mask))) 
         & (0U != (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_req_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__regfile_wdata;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_gnt_i 
        = vlSelfRef.tb_core_debug__DOT__obi_gnt_data;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o;
    vlSelfRef.tb_core_debug__DOT__obi_wdata_data = vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_wdata_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S 
        = (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBIsZero_SI) 
            | (0U != vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)) 
           & (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
               ^ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
                  > vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)) 
              | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                 == vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_decision_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__branch_decision;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__instr_rdata_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__instr_rdata_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_valid_o;
    vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d 
        = (1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_dm_obi_top__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_i) 
           | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_gnt_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__data_gnt_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_req_ctrl_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50 = (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CntZero_S) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                                                     << 3U) 
                                                    | (((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI) 
                                                        << 2U) 
                                                       | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o) 
           & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_decision_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__instr_rdata_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                 | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_gnt_pmp 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_gnt_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rdata_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_wfi_no_sleep_o 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35) 
           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wake_from_sleep_o 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_gnt_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__data_gnt_pmp;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rdata_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rdata_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_wfi_no_sleep_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active 
        = ((~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_wfi_no_sleep_o)) 
           & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__wake_from_sleep_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wake_from_sleep_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_gnt_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_gnt_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_rdata_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rdata_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_wfi_no_sleep_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__wake_from_sleep 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__wake_from_sleep_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_gnt_i;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_rdata_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 3U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
    if ((0x00000040U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000020U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((0x00000010U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0U == (7U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0cU)))) {
                                    if ((0U == ((0x000003e0U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000000aU)) 
                                                | (0x0000001fU 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 7U))))) {
                                        if ((0U != 
                                             (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x14U))) {
                                            if ((1U 
                                                 != 
                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x14U))) {
                                                if (
                                                    (0x0302U 
                                                     != 
                                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x14U))) {
                                                    if (
                                                        (2U 
                                                         != 
                                                         (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                          >> 0x14U))) {
                                                        if (
                                                            (0x07b2U 
                                                             != 
                                                             (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                              >> 0x14U))) {
                                                            if (
                                                                (0x0105U 
                                                                 == 
                                                                 (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                  >> 0x14U))) {
                                                                if (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_wfi_no_sleep_i) {
                                                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                                                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                                                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                            }
                        }
                    }
                } else if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0x00004000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                = ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                    ? ((0x00001000U 
                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                        ? 0x0bU : 1U)
                                    : ((0x00001000U 
                                        & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                        ? 0x0aU : 0U));
                        } else if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                             >> 0x0000000dU)))) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                = ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                    ? 0x0dU : 0x0cU);
                        }
                    }
                }
                if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 3U;
                        }
                    }
                }
            }
        }
    } else if ((0x00000020U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000010U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 3U)))) {
                if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 2U;
                        }
                    }
                } else if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((3U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                    >> 0x1eU))) {
                            if ((2U != (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x1eU))) {
                                if ((0x40000000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0000001dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000001cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0000001bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x0000001aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                             >> 0x00000019U)))) {
                                                        if (
                                                            (0x00004000U 
                                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                     >> 0x0000000dU)))) {
                                                                if (
                                                                    (0x00001000U 
                                                                     & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x24U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                        >> 0x0000000dU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                     >> 0x0000000cU)))) {
                                                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x19U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                   >> 0x0000001dU)))) {
                                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0000001cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000001bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0000001aU)))) {
                                                if (
                                                    (0x02000000U 
                                                     & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00004000U 
                                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                                            = 
                                                            ((0x00002000U 
                                                              & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                              ? 
                                                             ((0x00001000U 
                                                               & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                               ? 0x32U
                                                               : 0x33U)
                                                              : 
                                                             ((0x00001000U 
                                                               & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                               ? 0x30U
                                                               : 0x31U));
                                                    }
                                                } else {
                                                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                                        = 
                                                        ((0x00004000U 
                                                          & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                          ? 
                                                         ((0x00002000U 
                                                           & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                            ? 0x15U
                                                            : 0x2eU)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                            ? 0x25U
                                                            : 0x2fU))
                                                          : 
                                                         ((0x00002000U 
                                                           & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                           ? 
                                                          ((0x00001000U 
                                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                            ? 3U
                                                            : 2U)
                                                           : 
                                                          ((0x00001000U 
                                                            & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                            ? 0x27U
                                                            : 0x18U)));
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0000001eU)))) {
                                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0000001dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0000001cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0000001bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x0000001aU)))) {
                                                    if (
                                                        (0x02000000U 
                                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        if (
                                                            (0x00004000U 
                                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 3U;
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
        } else if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                             >> 3U)))) {
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                          >> 2U)))) {
                if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 1U;
                    }
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                      >> 3U)))) {
            if ((4U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 2U;
                    }
                }
            } else if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((0x00004000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                = ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                    ? 0x15U : 0x2eU);
                        } else if ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((0U == (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x19U))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x25U;
                            } else if ((0x20U == (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x19U))) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x24U;
                            }
                        } else {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x2fU;
                        }
                    } else {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                            = ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                ? ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                    ? 3U : 2U) : ((0x00001000U 
                                                   & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                                   ? 0x27U
                                                   : 0x18U));
                    }
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                }
            }
            if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                         >> 3U)))) {
        if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                      >> 2U)))) {
            if ((2U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                }
            }
        }
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__wake_from_sleep_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__wake_from_sleep;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_ready 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_rdata_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_empty)
            ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata
            : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_rdata);
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
           & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__wake_from_sleep_i) 
              | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
                                                & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__trans_ready));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_rdata_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b 
        = ((8U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type
                : ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_bi_type
                        : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)
                    : ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_clip_type 
                           >> 1U) : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffle_type)))
            : ((4U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vu_type
                        : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_vs_type)
                    : ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type
                        : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s2_type))
                : ((2U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__is_compressed_i)
                            ? 2U : 4U) : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_u_type)
                    : ((1U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_s_type
                        : vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_sleep_o 
        = ((~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en)) 
           & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__en_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__count_up 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_ex_o 
        = (1U & ((~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i)) 
                 | ((0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                     : ((1U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                         ? ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))
                         : (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid)))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__core_sleep_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_sleep_o;
    if ((1U & (~ (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_i)))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__en_i;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)
                  ? ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__count_down)
                      ? (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)))
                  : ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q) 
                     - (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__count_down))));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i) 
           & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_ex_o));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__lsu_ready_ex 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_ex_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i;
    if ((0U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i;
    } else if ((1U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
            = ((3U == (3U & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h))
                : ((0xffff0000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i) 
                   | (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)));
    } else if ((2U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i;
    } else if ((3U == (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
            = ((3U == (3U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                             >> 0x10U))) ? vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i
                : ((0xffff0000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i) 
                   | (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                      >> 0x10U)));
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_sleep_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__core_sleep_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_o 
        = ((IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_i) 
           & (IData)(vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__lsu_ready_ex_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__lsu_ready_ex;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clk_gated_o 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__sleep_unit_i__DOT__clk_gated_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 0U;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o = 0U;
    if ((0U == (3U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))) {
        if ((0x00008000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00004000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                }
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x00842023U | (((((2U & 
                                              (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 4U)) 
                                             | (1U 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x00700000U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | ((0x00000c00U 
                                                 & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i) 
                                                | (0x00000200U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      << 3U))))));
                }
            } else {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
        } else if ((0x00004000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x00042403U | ((((0x00000100U 
                                         & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 3U)) 
                                        | ((0x000000e0U 
                                            & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 5U)) 
                                           | (0x00000010U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 >> 2U)))) 
                                       << 0x00000012U) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             << 8U)) 
                                         | (0x00000380U 
                                            & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 5U)))));
            }
        } else {
            if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            } else if ((0U == (0x000000ffU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 5U)))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x00010413U | ((((0x000003c0U 
                                         & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 1U)) 
                                        | ((((6U & 
                                              (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 0x0000000aU)) 
                                             | (1U 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 5U))) 
                                            << 3U) 
                                           | (4U & 
                                              (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 4U)))) 
                                       << 0x00000014U) 
                                      | (0x00000380U 
                                         & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 5U))));
            }
        }
    } else if ((1U == (3U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))) {
        if ((0x00008000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000eU)))) {
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    if ((0x00000800U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                        if ((0x00000400U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                            if ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                            }
                        }
                    } else if ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                    }
                }
            }
            if ((0x00004000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x00040063U | ((((0x00003c00U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                           >> 0x0cU)))) 
                                            << 0x0000000aU)) 
                                        | ((0x00000300U 
                                            & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 3U)) 
                                           | (0x00000080U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 5U)))) 
                                       << 0x00000012U) 
                                      | ((((0x000000e0U 
                                            & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 2U)) 
                                           | ((4U & 
                                               (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 0x0000000bU)) 
                                              | (3U 
                                                 & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 0x0aU)))) 
                                          << 0x0000000aU) 
                                         | ((0x00000300U 
                                             & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 5U)) 
                                            | (0x00000080U 
                                               & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  >> 5U))))));
            } else if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x6fU | (((((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0x00000400U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                  >> 0x0cU)))) {
                        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                            = ((0x00000040U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                ? ((0x00000020U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))))
                                : ((0x00000020U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))));
                    }
                } else {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
                }
            } else {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                        ? (0x00045413U | ((((0x00001000U 
                                             & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 2U)) 
                                            | (0x0000007cU 
                                               & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) 
                                           << 0x00000012U) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                        : (0x00045413U | ((((0x00001000U 
                                             & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 2U)) 
                                            | (0x0000007cU 
                                               & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) 
                                           << 0x00000012U) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
            }
        } else if ((0x00004000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0U == ((0x00000020U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 2U))))) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                }
                if ((0U != ((0x00000020U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 2U))))) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = ((2U == (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  >> 7U)))
                            ? (0x00010113U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                              >> 0x0cU)))) 
                                               << 0x0000001dU) 
                                              | ((((6U 
                                                    & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                         >> 5U))) 
                                                  << 0x0000001aU) 
                                                 | ((0x02000000U 
                                                     & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        << 0x00000017U)) 
                                                    | (0x01000000U 
                                                       & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                          << 0x00000012U))))))
                            : (0x37U | (((- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 0x0cU)))) 
                                         << 0x00000011U) 
                                        | ((0x0001f000U 
                                            & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 0x0000000aU)) 
                                           | (0x00000f80U 
                                              & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
                }
            } else {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0cU)))) 
                                 << 0x0000001aU) | 
                                ((0x02000000U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 0x0000000dU)) 
                                 | ((0x01f00000U & 
                                     (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                      << 0x00000012U)) 
                                    | (0x00000f80U 
                                       & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
            }
        } else {
            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                = ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                    ? (0x6fU | (((((((2U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
        }
    } else if ((2U == (3U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))) {
        if ((0x00008000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00004000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                }
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x00012023U | ((((0x000000c0U 
                                             & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 1U)) 
                                            | ((0x00000020U 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 2U)))) 
                                           << 0x00000014U) 
                                          | (0x00000e00U 
                                             & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)));
                }
            } else {
                if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                } else if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                     >> 0x0cU)))) {
                    if ((0U == (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 2U)))) {
                        if ((0U == (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)))) {
                            vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                            ? ((0U == (0x0000001fU 
                                       & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 2U))) ? 
                               ((0U == (0x0000001fU 
                                        & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                           >> 7U)))
                                 ? 0x00100073U : (0x00e7U 
                                                  | (0x000f8000U 
                                                     & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        << 8U))))
                                : (0x33U | ((0x01f00000U 
                                             & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 0x00000012U)) 
                                            | ((0x000f8000U 
                                                & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   << 8U)) 
                                               | (0x00000f80U 
                                                  & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 2U))) ? 
                               (0x0067U | (0x000f8000U 
                                           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 8U)))
                                : (0x33U | ((0x01f00000U 
                                             & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 0x00000012U)) 
                                            | (0x00000f80U 
                                               & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
                }
            }
        } else if ((0x00004000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            } else if ((0U == (0x0000001fU & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 7U)))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x00012003U | ((((0x000000c0U 
                                         & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 4U)) 
                                        | ((0x00000020U 
                                            & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 7U)) 
                                           | (0x0000001cU 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 >> 2U)))) 
                                       << 0x00000014U) 
                                      | (0x00000f80U 
                                         & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)));
            }
        } else {
            if ((0x00002000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            } else if ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = ((0x00001000U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                        ? (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                        : (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
            }
        }
    } else {
        vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
            = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i;
    }
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__is_compressed_o 
        = (3U != (3U & vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__cs_registers_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__instr_compressed_int 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__is_compressed_o;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__load_store_unit_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__id_stage_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Clk_CI 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__clk_i 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk;
    vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__clk 
        = vlSelfRef.tb_core_debug__DOT__u_core__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk;
}
