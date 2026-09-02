// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC__pch.h"
#include "VMAC__Syms.h"
#include "VMAC___024root.h"

void VMAC___024root___ctor_var_reset(VMAC___024root* vlSelf);

VMAC___024root::VMAC___024root(VMAC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMAC___024root___ctor_var_reset(this);
}

void VMAC___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VMAC___024root::~VMAC___024root() {
}
