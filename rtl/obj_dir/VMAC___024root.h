// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMAC.h for the primary calling header

#ifndef VERILATED_VMAC___024ROOT_H_
#define VERILATED_VMAC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VMAC___024unit;


class VMAC__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMAC___024root final : public VerilatedModule {
  public:
    // CELLS
    VMAC___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ test_TPU__DOT__clk;
        CData/*0:0*/ test_TPU__DOT__control;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__wt_path_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__data_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC11__data_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__wt_path_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__data_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC12__data_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__wt_path_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__data_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC13__data_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC14__data_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC14__data_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__wt_path_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__data_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC21__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__wt_path_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__data_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC22__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__wt_path_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__data_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC23__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC24__data_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC24__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__wt_path_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__data_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC31__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__wt_path_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__data_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC32__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__wt_path_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__data_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC33__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC34__data_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC34__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC41__wt_path_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC41__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC42__wt_path_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC42__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC43__wt_path_out;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC43__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT____Vcellinp__u_MAC44__wt_path_in;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC11__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC12__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC13__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC14__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC21__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC22__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC23__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC24__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC31__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC32__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC33__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC34__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC41__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC42__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC43__DOT__mac_weight;
        CData/*7:0*/ test_TPU__DOT__uut__DOT__u_MAC44__DOT__mac_weight;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__test_TPU__DOT__clk__0;
    };
    struct {
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ test_TPU__DOT__data_arr;
        IData/*31:0*/ test_TPU__DOT__wt_arr;
        VlWide<4>/*127:0*/ test_TPU__DOT__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC11__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC12__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC13__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC14__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC21__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC22__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC23__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC24__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC31__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC32__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC33__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC34__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC41__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC42__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC43__acc_out;
        IData/*31:0*/ test_TPU__DOT__uut__DOT____Vcellout__u_MAC44__acc_out;
        IData/*31:0*/ __VactIterCount;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd5179a16__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMAC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMAC___024root(VMAC__Syms* symsp, const char* v__name);
    ~VMAC___024root();
    VL_UNCOPYABLE(VMAC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
