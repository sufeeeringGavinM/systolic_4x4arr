// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMAC.h for the primary calling header

#include "VMAC__pch.h"
#include "VMAC__Syms.h"
#include "VMAC___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMAC___024root___dump_triggers__act(VMAC___024root* vlSelf);
#endif  // VL_DEBUG

void VMAC___024root___eval_triggers__act(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->test_TPU__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__test_TPU__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__test_TPU__DOT__clk__0 
        = vlSelf->test_TPU__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMAC___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VMAC___024root___nba_sequent__TOP__0(VMAC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMAC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMAC___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->test_TPU__DOT__acc_out[0U] = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC14__acc_out;
    vlSelf->test_TPU__DOT__acc_out[1U] = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC24__acc_out;
    vlSelf->test_TPU__DOT__acc_out[2U] = (IData)((((QData)((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC44__acc_out)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC34__acc_out))));
    vlSelf->test_TPU__DOT__acc_out[3U] = (IData)(((
                                                   ((QData)((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC44__acc_out)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC34__acc_out))) 
                                                  >> 0x20U));
    if (vlSelf->test_TPU__DOT__control) {
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC43__wt_path_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC43__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC42__wt_path_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC42__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC41__wt_path_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC41__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__wt_path_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC33__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__wt_path_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC32__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__wt_path_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC31__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__wt_path_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC23__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__wt_path_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC22__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__wt_path_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC21__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__wt_path_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__wt_path_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__wt_path_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__wt_path_in;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("[OUTPUT] time=%0t y3=0x%0x, y2=0x%0x, y1=0x%0x, y0=0x%0x\n",
                  64,VL_TIME_UNITED_Q(1),-9,32,vlSelf->test_TPU__DOT__acc_out[3U],
                  32,vlSelf->test_TPU__DOT__acc_out[2U],
                  32,vlSelf->test_TPU__DOT__acc_out[1U],
                  32,vlSelf->test_TPU__DOT__acc_out[0U]);
    }
    if (vlSelf->test_TPU__DOT__control) {
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC14__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC24__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC34__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC44__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC14__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC24__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC24__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC34__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC34__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC44__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC44__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC34__data_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC43__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC13__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC23__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC23__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC33__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC33__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC24__data_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC43__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC43__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__data_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC42__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC12__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC22__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC22__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC32__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC32__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC14__data_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__data_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC42__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC42__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__data_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC41__acc_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC11__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC21__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC21__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC31__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC31__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__data_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__data_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT__u_MAC41__DOT__mac_weight 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC41__wt_path_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__data_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__data_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__data_out = 0U;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__data_out = 0U;
    } else {
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC14__acc_out 
            = (vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__acc_out 
               + ((IData)(vlSelf->test_TPU__DOT__control)
                   ? 0U : ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__data_in) 
                           * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC14__DOT__mac_weight))));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC24__acc_out 
            = (vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__acc_out 
               + ((IData)(vlSelf->test_TPU__DOT__control)
                   ? 0U : ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC14__data_out) 
                           * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC24__DOT__mac_weight))));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC34__acc_out 
            = (vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__acc_out 
               + ((IData)(vlSelf->test_TPU__DOT__control)
                   ? 0U : ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC24__data_out) 
                           * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC34__DOT__mac_weight))));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC44__acc_out 
            = (vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC43__acc_out 
               + ((IData)(vlSelf->test_TPU__DOT__control)
                   ? 0U : ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC34__data_out) 
                           * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC44__DOT__mac_weight))));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__acc_out 
            = (vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__acc_out 
               + ((IData)(vlSelf->test_TPU__DOT__control)
                   ? 0U : ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__data_in) 
                           * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC13__DOT__mac_weight))));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__acc_out 
            = (vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__acc_out 
               + ((IData)(vlSelf->test_TPU__DOT__control)
                   ? 0U : ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__data_out) 
                           * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC23__DOT__mac_weight))));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__acc_out 
            = (vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__acc_out 
               + ((IData)(vlSelf->test_TPU__DOT__control)
                   ? 0U : ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__data_out) 
                           * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC33__DOT__mac_weight))));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC34__data_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC24__data_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC43__acc_out 
            = (vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC42__acc_out 
               + ((IData)(vlSelf->test_TPU__DOT__control)
                   ? 0U : ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__data_out) 
                           * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC43__DOT__mac_weight))));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__acc_out 
            = (vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__acc_out 
               + ((IData)(vlSelf->test_TPU__DOT__control)
                   ? 0U : ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__data_in) 
                           * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC12__DOT__mac_weight))));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__acc_out 
            = (vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__acc_out 
               + ((IData)(vlSelf->test_TPU__DOT__control)
                   ? 0U : ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__data_out) 
                           * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC22__DOT__mac_weight))));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__acc_out 
            = (vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__acc_out 
               + ((IData)(vlSelf->test_TPU__DOT__control)
                   ? 0U : ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__data_out) 
                           * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC32__DOT__mac_weight))));
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC24__data_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC14__data_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__data_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__data_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC42__acc_out 
            = (vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC41__acc_out 
               + ((IData)(vlSelf->test_TPU__DOT__control)
                   ? 0U : ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__data_out) 
                           * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC42__DOT__mac_weight))));
        if (vlSelf->test_TPU__DOT__control) {
            vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__acc_out = 0U;
            vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__acc_out = 0U;
            vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__acc_out = 0U;
            vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC41__acc_out = 0U;
        } else {
            vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__acc_out 
                = ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__data_in) 
                   * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC11__DOT__mac_weight));
            vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__acc_out 
                = ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__data_out) 
                   * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC21__DOT__mac_weight));
            vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__acc_out 
                = ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__data_out) 
                   * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC31__DOT__mac_weight));
            vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC41__acc_out 
                = ((IData)(vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__data_out) 
                   * (IData)(vlSelf->test_TPU__DOT__uut__DOT__u_MAC41__DOT__mac_weight));
        }
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC14__data_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__data_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__data_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__data_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__data_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__data_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__data_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__data_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__data_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__data_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__data_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__data_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__data_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__data_in;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__data_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__data_out;
        vlSelf->test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__data_out 
            = vlSelf->test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__data_in;
    }
}
