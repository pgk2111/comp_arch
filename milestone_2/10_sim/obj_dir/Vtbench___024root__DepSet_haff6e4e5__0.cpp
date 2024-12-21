// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbench.h for the primary calling header

#include "Vtbench__pch.h"
#include "Vtbench__Syms.h"
#include "Vtbench___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__act(Vtbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtbench___024root___eval_triggers__act(Vtbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tbench__DOT__i_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__i_clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins16_00__sel) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins16_00__sel__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins8_00__sel) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins8_00__sel__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins4_00__sel) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins4_00__sel__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_32__sel) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_32__sel__0)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_00__sel) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_00__sel__0)));
    vlSelfRef.__VactTriggered.set(6U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__i_clk__0 
        = vlSelfRef.tbench__DOT__i_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins16_00__sel__0 
        = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins16_00__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins8_00__sel__0 
        = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins8_00__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins4_00__sel__0 
        = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins4_00__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_32__sel__0 
        = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_32__sel;
    vlSelfRef.__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_00__sel__0 
        = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_00__sel;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}
