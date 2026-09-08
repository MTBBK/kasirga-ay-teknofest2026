// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CV32E40P_FPU_PKG_H_
#define VERILATED_VTOP_CV32E40P_FPU_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_cv32e40p_fpu_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ NUM_FP_FORMATS = 5U;
    static constexpr IData/*31:0*/ FP_FORMAT_BITS = 3U;
    static constexpr IData/*31:0*/ NUM_INT_FORMATS = 4U;
    static constexpr IData/*31:0*/ INT_FORMAT_BITS = 2U;
    static constexpr IData/*31:0*/ OP_BITS = 4U;

    // CONSTRUCTORS
    Vtop_cv32e40p_fpu_pkg();
    ~Vtop_cv32e40p_fpu_pkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_cv32e40p_fpu_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
