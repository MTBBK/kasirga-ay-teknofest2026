// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop_cv32e40p_fpu_pkg
constexpr IData/*31:0*/ Vtop_cv32e40p_fpu_pkg::NUM_FP_FORMATS;
constexpr IData/*31:0*/ Vtop_cv32e40p_fpu_pkg::FP_FORMAT_BITS;
constexpr IData/*31:0*/ Vtop_cv32e40p_fpu_pkg::NUM_INT_FORMATS;
constexpr IData/*31:0*/ Vtop_cv32e40p_fpu_pkg::INT_FORMAT_BITS;
constexpr IData/*31:0*/ Vtop_cv32e40p_fpu_pkg::OP_BITS;



Vtop_cv32e40p_fpu_pkg::Vtop_cv32e40p_fpu_pkg() = default;
Vtop_cv32e40p_fpu_pkg::~Vtop_cv32e40p_fpu_pkg() = default;

void Vtop_cv32e40p_fpu_pkg::ctor(Vtop__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vtop_cv32e40p_fpu_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vtop_cv32e40p_fpu_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
