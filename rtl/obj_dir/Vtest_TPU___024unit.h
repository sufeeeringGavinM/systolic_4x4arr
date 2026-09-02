// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_TPU.h for the primary calling header

#ifndef VERILATED_VTEST_TPU___024UNIT_H_
#define VERILATED_VTEST_TPU___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtest_TPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_TPU___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vtest_TPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_TPU___024unit(Vtest_TPU__Syms* symsp, const char* v__name);
    ~Vtest_TPU___024unit();
    VL_UNCOPYABLE(Vtest_TPU___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
