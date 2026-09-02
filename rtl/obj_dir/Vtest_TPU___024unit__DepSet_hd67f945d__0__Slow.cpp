// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_TPU.h for the primary calling header

#include "Vtest_TPU__pch.h"
#include "Vtest_TPU___024unit.h"

VL_ATTR_COLD void Vtest_TPU___024unit___ctor_var_reset(Vtest_TPU___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_TPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_TPU___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
