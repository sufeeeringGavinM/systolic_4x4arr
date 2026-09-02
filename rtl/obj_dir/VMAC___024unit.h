// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC.h for the primary calling header

#ifndef VERILATED_VMAC___024UNIT_H_
#define VERILATED_VMAC___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VMAC__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    VMAC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMAC___024unit(VMAC__Syms* symsp, const char* v__name);
    ~VMAC___024unit();
    VL_UNCOPYABLE(VMAC___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
