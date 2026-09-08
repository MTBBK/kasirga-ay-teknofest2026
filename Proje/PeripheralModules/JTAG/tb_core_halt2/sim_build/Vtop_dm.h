// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_DM_H_
#define VERILATED_VTOP_DM_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_dm final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr CData/*3:0*/ DbgVersion013 = 2U;
    static constexpr CData/*4:0*/ ProgBufSize = 8U;
    static constexpr CData/*3:0*/ DataCount = 2U;
    static constexpr CData/*2:0*/ CauseBreakpoint = 1U;
    static constexpr CData/*2:0*/ CauseTrigger = 2U;
    static constexpr CData/*2:0*/ CauseRequest = 3U;
    static constexpr CData/*2:0*/ CauseSingleStep = 4U;
    static constexpr SData/*11:0*/ DataAddr = 0x0380U;
    static constexpr QData/*63:0*/ HaltAddress = 0x0000000000000800ULL;
    static constexpr QData/*63:0*/ ResumeAddress = 0x0000000000000808ULL;
    static constexpr QData/*63:0*/ ExceptionAddress = 0x0000000000000810ULL;

    // CONSTRUCTORS
    Vtop_dm();
    ~Vtop_dm();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_dm);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
