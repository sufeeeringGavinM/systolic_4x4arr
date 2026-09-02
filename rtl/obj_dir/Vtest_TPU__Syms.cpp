// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest_TPU__pch.h"
#include "Vtest_TPU.h"
#include "Vtest_TPU___024root.h"
#include "Vtest_TPU___024unit.h"

// FUNCTIONS
Vtest_TPU__Syms::~Vtest_TPU__Syms()
{
}

Vtest_TPU__Syms::Vtest_TPU__Syms(VerilatedContext* contextp, const char* namep, Vtest_TPU* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_test_TPU.configure(this, name(), "test_TPU", "test_TPU", -9, VerilatedScope::SCOPE_OTHER);
}
