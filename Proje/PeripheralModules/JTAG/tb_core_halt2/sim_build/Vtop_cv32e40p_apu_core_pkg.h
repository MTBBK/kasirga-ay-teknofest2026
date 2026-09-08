// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CV32E40P_APU_CORE_PKG_H_
#define VERILATED_VTOP_CV32E40P_APU_CORE_PKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_cv32e40p_apu_core_pkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ APU_NARGS_CPU = 3U;
    static constexpr IData/*31:0*/ APU_WOP_CPU = 6U;
    static constexpr IData/*31:0*/ APU_NDSFLAGS_CPU = 0x0000000fU;
    static constexpr IData/*31:0*/ APU_NUSFLAGS_CPU = 5U;

    // CONSTRUCTORS
    Vtop_cv32e40p_apu_core_pkg();
    ~Vtop_cv32e40p_apu_core_pkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_cv32e40p_apu_core_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
