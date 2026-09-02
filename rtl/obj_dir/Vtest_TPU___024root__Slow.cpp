// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_TPU.h for the primary calling header

#include "Vtest_TPU__pch.h"
#include "Vtest_TPU__Syms.h"
#include "Vtest_TPU___024root.h"

void Vtest_TPU___024root___ctor_var_reset(Vtest_TPU___024root* vlSelf);

Vtest_TPU___024root::Vtest_TPU___024root(Vtest_TPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_TPU___024root___ctor_var_reset(this);
}

void Vtest_TPU___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtest_TPU___024root::~Vtest_TPU___024root() {
}
