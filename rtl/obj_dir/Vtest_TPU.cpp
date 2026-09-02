// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest_TPU__pch.h"

//============================================================
// Constructors

Vtest_TPU::Vtest_TPU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtest_TPU__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtest_TPU::Vtest_TPU(const char* _vcname__)
    : Vtest_TPU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtest_TPU::~Vtest_TPU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtest_TPU___024root___eval_debug_assertions(Vtest_TPU___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest_TPU___024root___eval_static(Vtest_TPU___024root* vlSelf);
void Vtest_TPU___024root___eval_initial(Vtest_TPU___024root* vlSelf);
void Vtest_TPU___024root___eval_settle(Vtest_TPU___024root* vlSelf);
void Vtest_TPU___024root___eval(Vtest_TPU___024root* vlSelf);

void Vtest_TPU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest_TPU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest_TPU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtest_TPU___024root___eval_static(&(vlSymsp->TOP));
        Vtest_TPU___024root___eval_initial(&(vlSymsp->TOP));
        Vtest_TPU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtest_TPU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtest_TPU::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtest_TPU::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtest_TPU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtest_TPU___024root___eval_final(Vtest_TPU___024root* vlSelf);

VL_ATTR_COLD void Vtest_TPU::final() {
    Vtest_TPU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtest_TPU::hierName() const { return vlSymsp->name(); }
const char* Vtest_TPU::modelName() const { return "Vtest_TPU"; }
unsigned Vtest_TPU::threads() const { return 1; }
void Vtest_TPU::prepareClone() const { contextp()->prepareClone(); }
void Vtest_TPU::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtest_TPU::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtest_TPU::trace()' called on model that was Verilated without --trace option");
}
