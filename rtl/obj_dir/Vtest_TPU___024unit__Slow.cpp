// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_TPU.h for the primary calling header

#include "Vtest_TPU__pch.h"
#include "Vtest_TPU__Syms.h"
#include "Vtest_TPU___024unit.h"

void Vtest_TPU___024unit___ctor_var_reset(Vtest_TPU___024unit* vlSelf);

Vtest_TPU___024unit::Vtest_TPU___024unit(Vtest_TPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_TPU___024unit___ctor_var_reset(this);
}

void Vtest_TPU___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtest_TPU___024unit::~Vtest_TPU___024unit() {
}
