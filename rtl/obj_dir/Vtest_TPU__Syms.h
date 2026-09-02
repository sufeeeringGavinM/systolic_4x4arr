// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTEST_TPU__SYMS_H_
#define VERILATED_VTEST_TPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtest_TPU.h"

// INCLUDE MODULE CLASSES
#include "Vtest_TPU___024root.h"
#include "Vtest_TPU___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtest_TPU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtest_TPU* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtest_TPU___024root            TOP;
    Vtest_TPU___024unit            TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_test_TPU;

    // CONSTRUCTORS
    Vtest_TPU__Syms(VerilatedContext* contextp, const char* namep, Vtest_TPU* modelp);
    ~Vtest_TPU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
