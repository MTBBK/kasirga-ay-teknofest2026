// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_dm
constexpr CData/*3:0*/ Vtop_dm::DbgVersion013;
constexpr CData/*4:0*/ Vtop_dm::ProgBufSize;
constexpr CData/*3:0*/ Vtop_dm::DataCount;
constexpr CData/*2:0*/ Vtop_dm::CauseBreakpoint;
constexpr CData/*2:0*/ Vtop_dm::CauseTrigger;
constexpr CData/*2:0*/ Vtop_dm::CauseRequest;
constexpr CData/*2:0*/ Vtop_dm::CauseSingleStep;
constexpr SData/*11:0*/ Vtop_dm::DataAddr;
constexpr QData/*63:0*/ Vtop_dm::HaltAddress;
constexpr QData/*63:0*/ Vtop_dm::ResumeAddress;
constexpr QData/*63:0*/ Vtop_dm::ExceptionAddress;



Vtop_dm::Vtop_dm() = default;
Vtop_dm::~Vtop_dm() = default;

void Vtop_dm::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtop_dm::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_dm::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
