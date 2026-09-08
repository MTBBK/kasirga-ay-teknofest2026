// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop__pch.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , dmi_req_valid_i{vlSymsp->TOP.dmi_req_valid_i}
    , dmi_req_addr_i{vlSymsp->TOP.dmi_req_addr_i}
    , dmi_req_op_i{vlSymsp->TOP.dmi_req_op_i}
    , dmi_req_ready_o{vlSymsp->TOP.dmi_req_ready_o}
    , dmi_resp_resp_o{vlSymsp->TOP.dmi_resp_resp_o}
    , dmi_resp_valid_o{vlSymsp->TOP.dmi_resp_valid_o}
    , dmi_resp_ready_i{vlSymsp->TOP.dmi_resp_ready_i}
    , debug_req_o{vlSymsp->TOP.debug_req_o}
    , debug_halted_o{vlSymsp->TOP.debug_halted_o}
    , debug_running_o{vlSymsp->TOP.debug_running_o}
    , instr_dbg_req_o{vlSymsp->TOP.instr_dbg_req_o}
    , instr_dbg_gnt_o{vlSymsp->TOP.instr_dbg_gnt_o}
    , instr_dbg_rvalid_o{vlSymsp->TOP.instr_dbg_rvalid_o}
    , data_dbg_req_o{vlSymsp->TOP.data_dbg_req_o}
    , data_dbg_gnt_o{vlSymsp->TOP.data_dbg_gnt_o}
    , data_dbg_rvalid_o{vlSymsp->TOP.data_dbg_rvalid_o}
    , data_in_dbg_window_o{vlSymsp->TOP.data_in_dbg_window_o}
    , dmi_req_data_i{vlSymsp->TOP.dmi_req_data_i}
    , dmi_resp_data_o{vlSymsp->TOP.dmi_resp_data_o}
    , __PVT__cv32e40p_tracer_pkg{vlSymsp->TOP.__PVT__cv32e40p_tracer_pkg}
    , __PVT__dm{vlSymsp->TOP.__PVT__dm}
    , __PVT__cv32e40p_apu_core_pkg{vlSymsp->TOP.__PVT__cv32e40p_apu_core_pkg}
    , __PVT__cv32e40p_fpu_pkg{vlSymsp->TOP.__PVT__cv32e40p_fpu_pkg}
    , __PVT__cv32e40p_pkg{vlSymsp->TOP.__PVT__cv32e40p_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_static(Vtop___024root* vlSelf);
void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop___024root___eval_static(&(vlSymsp->TOP));
        Vtop___024root___eval_initial(&(vlSymsp->TOP));
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop::eventsPending() { return false; }

uint64_t Vtop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop___024root___eval_final(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop::final() {
    contextp()->executingFinal(true);
    Vtop___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop::hierName() const { return vlSymsp->name(); }
const char* Vtop::modelName() const { return "Vtop"; }
unsigned Vtop::threads() const { return 1; }
void Vtop::prepareClone() const { contextp()->prepareClone(); }
void Vtop::atClone() const {
    contextp()->threadPoolpOnClone();
}
