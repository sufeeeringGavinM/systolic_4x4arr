// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMAC__SYMS_H_
#define VERILATED_VMAC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMAC.h"

// INCLUDE MODULE CLASSES
#include "VMAC___024root.h"
#include "VMAC___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VMAC__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMAC* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMAC___024root                 TOP;
    VMAC___024unit                 TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_test_TPU;

    // CONSTRUCTORS
    VMAC__Syms(VerilatedContext* contextp, const char* namep, VMAC* modelp);
    ~VMAC__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
