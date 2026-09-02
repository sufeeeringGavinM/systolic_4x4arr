// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC__pch.h"
#include "VMAC___024root.h"

VlCoroutine VMAC___024root___eval_initial__TOP__Vtiming__0(VMAC___024root* vlSelf);
VlCoroutine VMAC___024root___eval_initial__TOP__Vtiming__1(VMAC___024root* vlSelf);
VlCoroutine VMAC___024root___eval_initial__TOP__Vtiming__2(VMAC___024root* vlSelf);
VlCoroutine VMAC___024root___eval_initial__TOP__Vtiming__3(VMAC___024root* vlSelf);

void VMAC___024root___eval_initial(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_initial\n"); );
    // Body
    VMAC___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VMAC___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VMAC___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    VMAC___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__test_TPU__DOT__clk__0 
        = vlSelf->test_TPU__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VMAC___024root___eval_initial__TOP__Vtiming__0(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->test_TPU__DOT__clk = 0U;
    vlSelf->test_TPU__DOT__control = 0U;
    vlSelf->test_TPU__DOT__data_arr = 0U;
    vlSelf->test_TPU__DOT__wt_arr = 0U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "MMU_test.v", 
                                       33);
}

VL_INLINE_OPT VlCoroutine VMAC___024root___eval_initial__TOP__Vtiming__1(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       41);
    vlSelf->test_TPU__DOT__control = 1U;
    vlSelf->test_TPU__DOT__wt_arr = 0x5020304U;
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       45);
    vlSelf->test_TPU__DOT__wt_arr = 0x3010203U;
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       48);
    vlSelf->test_TPU__DOT__wt_arr = 0x7040102U;
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       51);
    vlSelf->test_TPU__DOT__wt_arr = 0x1020403U;
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       55);
    vlSelf->test_TPU__DOT__control = 0U;
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       59);
    vlSelf->test_TPU__DOT__data_arr = 1U;
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       63);
    vlSelf->test_TPU__DOT__data_arr = 0x102U;
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       66);
    vlSelf->test_TPU__DOT__data_arr = 0x10200U;
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       69);
    vlSelf->test_TPU__DOT__data_arr = 0x10100U;
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       72);
    vlSelf->test_TPU__DOT__data_arr = 0x2030200U;
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       75);
    vlSelf->test_TPU__DOT__data_arr = 0x4010000U;
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       78);
    vlSelf->test_TPU__DOT__data_arr = 0x5000000U;
    co_await vlSelf->__VtrigSched_hd5179a16__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge test_TPU.clk)", 
                                                       "MMU_test.v", 
                                                       81);
    vlSelf->test_TPU__DOT__data_arr = 0U;
}

VL_INLINE_OPT VlCoroutine VMAC___024root___eval_initial__TOP__Vtiming__2(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "MMU_test.v", 
                                       91);
    VL_FINISH_MT("MMU_test.v", 92, "");
}

VL_INLINE_OPT VlCoroutine VMAC___024root___eval_initial__TOP__Vtiming__3(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xfaULL, 
                                           nullptr, 
                                           "MMU_test.v", 
                                           38);
        vlSelf->test_TPU__DOT__clk = (1U & (~ (IData)(vlSelf->test_TPU__DOT__clk)));
    }
}

VL_INLINE_OPT void VMAC___024root___act_comb__TOP__0(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___act_comb__TOP__0\n"); );
    // Body
    if (vlSelf->test_TPU__DOT__control) {
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__data_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__wt_path_in 
            = (0xffU & vlSelf->test_TPU__DOT__wt_arr);
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__data_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__data_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__data_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC21__wt_path_in 
            = (0xffU & (vlSelf->test_TPU__DOT__wt_arr 
                        >> 8U));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC22__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC23__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC24__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC31__wt_path_in 
            = (0xffU & (vlSelf->test_TPU__DOT__wt_arr 
                        >> 0x10U));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC32__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC33__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC34__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC41__wt_path_in 
            = (vlSelf->test_TPU__DOT__wt_arr >> 0x18U);
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC42__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC41__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC43__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC42__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC44__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC43__wt_path_out;
    } else {
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__data_in 
            = (0xffU & vlSelf->test_TPU__DOT__data_arr);
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__data_in 
            = (0xffU & (vlSelf->test_TPU__DOT__data_arr 
                        >> 8U));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__data_in 
            = (0xffU & (vlSelf->test_TPU__DOT__data_arr 
                        >> 0x10U));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__data_in 
            = (vlSelf->test_TPU__DOT__data_arr >> 0x18U);
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC21__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC22__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC23__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC24__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC31__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC32__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC33__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC34__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC41__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC42__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC43__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC44__wt_path_in = 0U;
    }
}

void VMAC___024root___eval_act(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        VMAC___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VMAC___024root___nba_comb__TOP__0(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___nba_comb__TOP__0\n"); );
    // Body
    if (vlSelf->test_TPU__DOT__control) {
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC24__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC34__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC44__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC43__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC23__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC33__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC43__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC42__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC22__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC32__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__data_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC42__wt_path_in 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC41__wt_path_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__wt_path_in 
            = (0xffU & vlSelf->test_TPU__DOT__wt_arr);
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC21__wt_path_in 
            = (0xffU & (vlSelf->test_TPU__DOT__wt_arr 
                        >> 8U));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC31__wt_path_in 
            = (0xffU & (vlSelf->test_TPU__DOT__wt_arr 
                        >> 0x10U));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__data_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC41__wt_path_in 
            = (vlSelf->test_TPU__DOT__wt_arr >> 0x18U);
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__data_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__data_in = 0U;
    } else {
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC24__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC34__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC44__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC23__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC33__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC43__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC22__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC32__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__data_in 
            = (vlSelf->test_TPU__DOT__data_arr >> 0x18U);
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC42__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC21__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC31__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__data_in 
            = (0xffU & (vlSelf->test_TPU__DOT__data_arr 
                        >> 0x10U));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC41__wt_path_in = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__data_in 
            = (0xffU & (vlSelf->test_TPU__DOT__data_arr 
                        >> 8U));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__data_in 
            = (0xffU & vlSelf->test_TPU__DOT__data_arr);
    }
}

void VMAC___024root___nba_sequent__TOP__0(VMAC___024root* vlSelf);

void VMAC___024root___eval_nba(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VMAC___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VMAC___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VMAC___024root___timing_resume(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hd5179a16__0.resume("@(posedge test_TPU.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VMAC___024root___timing_commit(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hd5179a16__0.commit("@(posedge test_TPU.clk)");
    }
}

void VMAC___024root___eval_triggers__act(VMAC___024root* vlSelf);

bool VMAC___024root___eval_phase__act(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMAC___024root___eval_triggers__act(vlSelf);
    VMAC___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMAC___024root___timing_resume(vlSelf);
        VMAC___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMAC___024root___eval_phase__nba(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMAC___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC___024root___dump_triggers__nba(VMAC___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC___024root___dump_triggers__act(VMAC___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC___024root___eval(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMAC___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("MMU_test.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMAC___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("MMU_test.v", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMAC___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMAC___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMAC___024root___eval_debug_assertions(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
