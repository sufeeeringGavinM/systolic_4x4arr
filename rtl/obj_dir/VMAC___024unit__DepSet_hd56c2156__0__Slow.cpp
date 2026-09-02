// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC__pch.h"
#include "VMAC___024unit.h"

VL_ATTR_COLD void VMAC___024unit___ctor_var_reset(VMAC___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  VMAC___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
