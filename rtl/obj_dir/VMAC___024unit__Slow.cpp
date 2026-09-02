// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC__pch.h"
#include "VMAC__Syms.h"
#include "VMAC___024unit.h"

void VMAC___024unit___ctor_var_reset(VMAC___024unit* vlSelf);

VMAC___024unit::VMAC___024unit(VMAC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMAC___024unit___ctor_var_reset(this);
}

void VMAC___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMAC___024unit::~VMAC___024unit() {
}
