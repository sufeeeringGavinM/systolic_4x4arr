// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_TPU.h for the primary calling header

#include "Vtest_TPU__pch.h"
#include "Vtest_TPU___024root.h"

VL_ATTR_COLD void Vtest_TPU___024root___eval_static(Vtest_TPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_TPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_TPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtest_TPU___024root___eval_final(Vtest_TPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_TPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_TPU___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_TPU___024root___dump_triggers__stl(Vtest_TPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtest_TPU___024root___eval_phase__stl(Vtest_TPU___024root* vlSelf);

VL_ATTR_COLD void Vtest_TPU___024root___eval_settle(Vtest_TPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_TPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_TPU___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtest_TPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("MMU_test.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtest_TPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_TPU___024root___dump_triggers__stl(Vtest_TPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_TPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_TPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_TPU___024root___stl_sequent__TOP__0(Vtest_TPU___024root* vlSelf);

VL_ATTR_COLD void Vtest_TPU___024root___eval_stl(Vtest_TPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_TPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_TPU___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtest_TPU___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtest_TPU___024root___eval_triggers__stl(Vtest_TPU___024root* vlSelf);

VL_ATTR_COLD bool Vtest_TPU___024root___eval_phase__stl(Vtest_TPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_TPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_TPU___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtest_TPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtest_TPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_TPU___024root___dump_triggers__act(Vtest_TPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_TPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_TPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge test_TPU.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_TPU___024root___dump_triggers__nba(Vtest_TPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_TPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_TPU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge test_TPU.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_TPU___024root___ctor_var_reset(Vtest_TPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_TPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_TPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->test_TPU__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->test_TPU__DOT__control = VL_RAND_RESET_I(1);
    vlSelf->test_TPU__DOT__data_arr = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__wt_arr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->test_TPU__DOT__acc_out);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__wt_path_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__data_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__data_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__wt_path_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__data_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__data_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__wt_path_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__data_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__data_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC14__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC14__data_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__data_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__wt_path_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__data_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC21__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__wt_path_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__data_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC22__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__wt_path_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__data_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC23__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC24__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC24__data_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC24__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__wt_path_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__data_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC31__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__wt_path_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__data_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC32__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__wt_path_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__data_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC33__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC34__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC34__data_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC34__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC41__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC41__wt_path_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC41__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC42__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC42__wt_path_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC42__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC43__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC43__wt_path_out = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC43__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC44__acc_out = VL_RAND_RESET_I(32);
    vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC44__wt_path_in = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC11__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC12__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC13__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC14__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC21__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC22__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC23__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC24__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC31__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC32__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC33__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC34__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC41__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC42__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC43__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->test_TPU__DOT__uut__DOT__u_MAC44__DOT__mac_weight = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__test_TPU__DOT__clk__0 = VL_RAND_RESET_I(1);
}
