// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_TPU.h for the primary calling header

#include "Vtest_TPU__pch.h"
#include "Vtest_TPU__Syms.h"
#include "Vtest_TPU___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_TPU___024root___dump_triggers__stl(Vtest_TPU___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_TPU___024root___eval_triggers__stl(Vtest_TPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_TPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_TPU___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_TPU___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtest_TPU___024root___stl_sequent__TOP__0(Vtest_TPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_TPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_TPU___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("[OUTPUT] time=%0t y3=0x%0x, y2=0x%0x, y1=0x%0x, y0=0x%0x\n",
                  64,VL_TIME_UNITED_Q(1),-9,32,vlSelf->test_TPU__DOT__acc_out[3U],
                  32,vlSelf->test_TPU__DOT__acc_out[2U],
                  32,vlSelf->test_TPU__DOT__acc_out[1U],
                  32,vlSelf->test_TPU__DOT__acc_out[0U]);
    }
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
