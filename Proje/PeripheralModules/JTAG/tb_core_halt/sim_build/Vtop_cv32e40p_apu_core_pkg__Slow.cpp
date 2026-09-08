// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_cv32e40p_apu_core_pkg
constexpr IData/*31:0*/ Vtop_cv32e40p_apu_core_pkg::APU_NARGS_CPU;
constexpr IData/*31:0*/ Vtop_cv32e40p_apu_core_pkg::APU_WOP_CPU;
constexpr IData/*31:0*/ Vtop_cv32e40p_apu_core_pkg::APU_NDSFLAGS_CPU;
constexpr IData/*31:0*/ Vtop_cv32e40p_apu_core_pkg::APU_NUSFLAGS_CPU;



Vtop_cv32e40p_apu_core_pkg::Vtop_cv32e40p_apu_core_pkg() = default;
Vtop_cv32e40p_apu_core_pkg::~Vtop_cv32e40p_apu_core_pkg() = default;

void Vtop_cv32e40p_apu_core_pkg::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtop_cv32e40p_apu_core_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_cv32e40p_apu_core_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
