// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMAC__pch.h"

//============================================================
// Constructors

VMAC::VMAC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMAC__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMAC::VMAC(const char* _vcname__)
    : VMAC(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMAC::~VMAC() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMAC___024root___eval_debug_assertions(VMAC___024root* vlSelf);
#endif  // VL_DEBUG
void VMAC___024root___eval_static(VMAC___024root* vlSelf);
void VMAC___024root___eval_initial(VMAC___024root* vlSelf);
void VMAC___024root___eval_settle(VMAC___024root* vlSelf);
void VMAC___024root___eval(VMAC___024root* vlSelf);

void VMAC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMAC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMAC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMAC___024root___eval_static(&(vlSymsp->TOP));
        VMAC___024root___eval_initial(&(vlSymsp->TOP));
        VMAC___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMAC___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMAC::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VMAC::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VMAC::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMAC___024root___eval_final(VMAC___024root* vlSelf);

VL_ATTR_COLD void VMAC::final() {
    VMAC___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMAC::hierName() const { return vlSymsp->name(); }
const char* VMAC::modelName() const { return "VMAC"; }
unsigned VMAC::threads() const { return 1; }
void VMAC::prepareClone() const { contextp()->prepareClone(); }
void VMAC::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VMAC::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VMAC::trace()' called on model that was Verilated without --trace option");
}
