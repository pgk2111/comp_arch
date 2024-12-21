// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbench.h for the primary calling header

#include "Vtbench__pch.h"
#include "Vtbench___024root.h"

VL_ATTR_COLD void Vtbench___024root___eval_static(Vtbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtbench___024root___eval_final(Vtbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__stl(Vtbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtbench___024root___eval_phase__stl(Vtbench___024root* vlSelf);

VL_ATTR_COLD void Vtbench___024root___eval_settle(Vtbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../01_bench/tbench.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__stl(Vtbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtbench___024root___stl_sequent__TOP__0(Vtbench___024root* vlSelf);
VL_ATTR_COLD void Vtbench___024root____Vm_traceActivitySetAll(Vtbench___024root* vlSelf);

VL_ATTR_COLD void Vtbench___024root___eval_stl(Vtbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtbench___024root___stl_sequent__TOP__0(vlSelf);
        Vtbench___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 32> Vtbench__ConstPool__TABLE_h763b3406_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vtbench__ConstPool__TABLE_h30773d73_0;

VL_ATTR_COLD void Vtbench___024root___stl_sequent__TOP__0(Vtbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_1;
    tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_1 = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.tbench__DOT__sram_we = ((1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q) 
                                             >> 2U)) 
                                      || (1U & ((2U 
                                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))
                                                 ? (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q)
                                                 : 
                                                (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__rd_addr 
        = (0x1fU & (vlSelfRef.tbench__DOT__singlecycle__DOT__Instrmem__DOT__mem
                    [(0x1fffU & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                 >> 2U))] >> 7U));
    if ((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q)))) {
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DOUT__strong__out2 
                    = (vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q 
                       >> 0x10U);
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DOUT__strong__out1 
                    = (0xffffU & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q);
            }
        }
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack1 
        = ((2U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q)) 
           | (7U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA3__Cout 
        = (IData)((0xcU == (0xcU & vlSelfRef.tbench__DOT__singlecycle__DOT__address)));
    vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
        = (vlSelfRef.tbench__DOT__singlecycle__DOT__Instrmem__DOT__mem
           [(0x1fffU & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                        >> 2U))] >> 7U);
    vlSelfRef.tbench__DOT__singlecycle__DOT__rs1_addr 
        = (0x1fU & (vlSelfRef.tbench__DOT__singlecycle__DOT__Instrmem__DOT__mem
                    [(0x1fffU & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                 >> 2U))] >> 0xfU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__rs2_addr 
        = (0x1fU & (vlSelfRef.tbench__DOT__singlecycle__DOT__Instrmem__DOT__mem
                    [(0x1fffU & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                 >> 2U))] >> 0x14U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct7de 
        = (1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__Instrmem__DOT__mem
                 [(0x1fffU & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                              >> 2U))] >> 0x1eU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de 
        = (7U & (vlSelfRef.tbench__DOT__singlecycle__DOT__Instrmem__DOT__mem
                 [(0x1fffU & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                              >> 2U))] >> 0xcU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__valid 
        = (3U & vlSelfRef.tbench__DOT__singlecycle__DOT__Instrmem__DOT__mem
           [(0x1fffU & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                        >> 2U))]);
    __Vtableidx1 = (0x1fU & (vlSelfRef.tbench__DOT__singlecycle__DOT__Instrmem__DOT__mem
                             [(0x1fffU & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                          >> 2U))] 
                             >> 2U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code 
        = Vtbench__ConstPool__TABLE_h763b3406_0[__Vtableidx1];
    vlSelfRef.tbench__DOT__singlecycle__DOT__imm_sel 
        = Vtbench__ConstPool__TABLE_h30773d73_0[__Vtableidx1];
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DIN 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DOUT__strong__out1) 
           | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DOUT__strong__out2));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA4__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 4U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA3__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__data1 
        = ((0U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__rs1_addr))
            ? 0U : vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register
           [vlSelfRef.tbench__DOT__singlecycle__DOT__rs1_addr]);
    vlSelfRef.tbench__DOT__singlecycle__DOT__data2 
        = ((0U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__rs2_addr))
            ? 0U : vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register
           [vlSelfRef.tbench__DOT__singlecycle__DOT__rs2_addr]);
    vlSelfRef.tbench__DOT__singlecycle__DOT__dataimm 
        = ((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__imm_sel))
            ? ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__imm_sel))
                ? 0U : ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__imm_sel))
                         ? (((- (IData)((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                               >> 0x18U)))) 
                             << 0x15U) | ((0x100000U 
                                           & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                              >> 4U)) 
                                          | ((0xff000U 
                                              & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                                 << 7U)) 
                                             | ((0x800U 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                                    >> 2U)) 
                                                | (0x7feU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                                      >> 0xdU))))))
                         : (0xfffff000U & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                           << 7U))))
            : ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__imm_sel))
                ? ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__imm_sel))
                    ? (((- (IData)((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                          >> 0x18U)))) 
                        << 0xdU) | ((0x1000U & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                                >> 0xcU)) 
                                    | ((0x800U & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                                  << 0xbU)) 
                                       | ((0x7e0U & 
                                           (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                            >> 0xdU)) 
                                          | (0x1eU 
                                             & vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data)))))
                    : (((- (IData)((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                          >> 0x18U)))) 
                        << 0xcU) | ((0xfe0U & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                               >> 0xdU)) 
                                    | (0x1fU & vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data))))
                : ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__imm_sel))
                    ? (((- (IData)((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                          >> 0x18U)))) 
                        << 0xcU) | (0xfffU & (vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data 
                                              >> 0xdU)))
                    : 0U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__rd_wren = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__wb_sel = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel = 0U;
    vlSelfRef.tbench__DOT__o_insn_vld = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__s_sel = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__mem_rden = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__mem_wren = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__op_asel = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__br_uns = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__op = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA5__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 5U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA4__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
        = vlSelfRef.tbench__DOT__singlecycle__DOT__data1;
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
        = vlSelfRef.tbench__DOT__singlecycle__DOT__data2;
    if ((3U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__valid))) {
        if ((1U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
            vlSelfRef.tbench__DOT__singlecycle__DOT__rd_wren = 1U;
            vlSelfRef.tbench__DOT__singlecycle__DOT__wb_sel = 0U;
            vlSelfRef.tbench__DOT__singlecycle__DOT__mem_wren = 0U;
            vlSelfRef.tbench__DOT__singlecycle__DOT__op_asel = 0U;
            vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel = 0U;
            if ((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))) {
                if ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op 
                        = ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                            ? 7U : 6U);
                } else if ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))) {
                    if (vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct7de) {
                        if (vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct7de) {
                            vlSelfRef.tbench__DOT__singlecycle__DOT__op = 0xaU;
                        }
                    } else {
                        vlSelfRef.tbench__DOT__singlecycle__DOT__op = 9U;
                    }
                } else {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op = 5U;
                }
            } else if ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))) {
                vlSelfRef.tbench__DOT__singlecycle__DOT__op 
                    = ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                        ? 4U : 3U);
            } else if ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))) {
                vlSelfRef.tbench__DOT__singlecycle__DOT__op = 8U;
            } else if (vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct7de) {
                if (vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct7de) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op = 2U;
                }
            } else {
                vlSelfRef.tbench__DOT__singlecycle__DOT__op = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
            vlSelfRef.tbench__DOT__singlecycle__DOT__rd_wren = 1U;
            vlSelfRef.tbench__DOT__singlecycle__DOT__wb_sel = 0U;
            vlSelfRef.tbench__DOT__singlecycle__DOT__mem_wren = 0U;
            vlSelfRef.tbench__DOT__singlecycle__DOT__op_asel = 0U;
            vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel = 1U;
            if ((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))) {
                if ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op 
                        = ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                            ? 7U : 6U);
                } else if ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))) {
                    if (vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct7de) {
                        if (vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct7de) {
                            vlSelfRef.tbench__DOT__singlecycle__DOT__op = 0xaU;
                        }
                    } else {
                        vlSelfRef.tbench__DOT__singlecycle__DOT__op = 9U;
                    }
                } else {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op = 5U;
                }
            } else {
                vlSelfRef.tbench__DOT__singlecycle__DOT__op 
                    = ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                        ? ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                            ? 4U : 3U) : ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                                           ? 8U : 1U));
            }
        } else {
            if ((3U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                vlSelfRef.tbench__DOT__singlecycle__DOT__rd_wren = 1U;
                vlSelfRef.tbench__DOT__singlecycle__DOT__wb_sel = 1U;
                vlSelfRef.tbench__DOT__singlecycle__DOT__op_asel = 0U;
                vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel = 1U;
                vlSelfRef.tbench__DOT__singlecycle__DOT__op = 1U;
            } else {
                if ((4U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__rd_wren = 0U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op_asel = 0U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel = 1U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op = 1U;
                } else if ((5U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__rd_wren = 0U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op_asel = 1U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel = 1U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op = 1U;
                } else if ((6U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__rd_wren = 1U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op_asel = 1U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel = 1U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op = 1U;
                } else if ((7U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__rd_wren = 1U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op_asel = 0U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel = 1U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__op = 1U;
                } else {
                    if ((8U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                        vlSelfRef.tbench__DOT__singlecycle__DOT__rd_wren = 1U;
                        vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel = 1U;
                        vlSelfRef.tbench__DOT__singlecycle__DOT__op = 0xbU;
                    } else if ((9U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                        vlSelfRef.tbench__DOT__singlecycle__DOT__rd_wren = 1U;
                        vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel = 1U;
                        vlSelfRef.tbench__DOT__singlecycle__DOT__op = 1U;
                    }
                    if ((8U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                        if ((9U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                            vlSelfRef.tbench__DOT__singlecycle__DOT__op_asel = 1U;
                        }
                    }
                }
                if ((4U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                    if ((5U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                        if ((6U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                            vlSelfRef.tbench__DOT__singlecycle__DOT__wb_sel = 2U;
                        } else if ((7U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                            vlSelfRef.tbench__DOT__singlecycle__DOT__wb_sel = 2U;
                        } else if ((8U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                            vlSelfRef.tbench__DOT__singlecycle__DOT__wb_sel = 0U;
                        } else if ((9U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                            vlSelfRef.tbench__DOT__singlecycle__DOT__wb_sel = 0U;
                        }
                    }
                }
            }
            if ((3U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                if ((4U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__mem_wren = 1U;
                } else if ((5U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                    if ((6U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                        vlSelfRef.tbench__DOT__singlecycle__DOT__mem_wren = 0U;
                    } else if ((7U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                        vlSelfRef.tbench__DOT__singlecycle__DOT__mem_wren = 0U;
                    } else if ((8U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                        vlSelfRef.tbench__DOT__singlecycle__DOT__mem_wren = 0U;
                    } else if ((9U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                        vlSelfRef.tbench__DOT__singlecycle__DOT__mem_wren = 0U;
                    }
                }
            }
        }
        if ((1U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
            if ((2U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                if ((3U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel 
                        = ((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                            ? ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                                ? 0U : ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                                         ? 4U : 3U))
                            : ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                                ? 0U : ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                                         ? 2U : 1U)));
                    vlSelfRef.tbench__DOT__singlecycle__DOT__mem_rden = 1U;
                } else if ((4U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__mem_rden = 0U;
                }
                if ((3U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                    if ((4U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                        if ((5U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                            if ((6U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                                if ((7U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                                    if ((8U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                                        if ((9U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                                            vlSelfRef.tbench__DOT__o_insn_vld = 1U;
                                        }
                                    }
                                }
                            }
                        }
                        if ((5U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                            if ((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))) {
                                if ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))) {
                                    vlSelfRef.tbench__DOT__singlecycle__DOT__br_uns = 1U;
                                }
                            }
                        }
                    }
                    if ((4U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                        vlSelfRef.tbench__DOT__singlecycle__DOT__s_sel 
                            = ((0U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                                ? 1U : ((1U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                                         ? 2U : 0U));
                    }
                }
            }
        }
    } else {
        vlSelfRef.tbench__DOT__o_insn_vld = 1U;
    }
    if ((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
        vlSelfRef.tbench__DOT__sram_ce = ((1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q)));
        vlSelfRef.tbench__DOT__sram_oe = ((1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q) 
                                                 >> 1U)) 
                                          && (1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q)));
        if ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
            vlSelfRef.tbench__DOT__sram_lb = (1U & 
                                              ((1U 
                                                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q)) 
                                               || (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q) 
                                                       >> 2U)))));
            vlSelfRef.tbench__DOT__sram_ub = (1U & 
                                              ((1U 
                                                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q)) 
                                               || (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q) 
                                                       >> 3U)))));
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_d 
                = ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))
                    ? vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_q
                    : (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DIN) 
                        << 0x10U) | (0xffffU & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_q)));
        } else if ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
            vlSelfRef.tbench__DOT__sram_lb = (1U & 
                                              (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q) 
                                                  >> 2U)));
            vlSelfRef.tbench__DOT__sram_ub = (1U & 
                                              (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q) 
                                                  >> 3U)));
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_d 
                = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DIN) 
                    << 0x10U) | (0xffffU & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_q));
        } else {
            vlSelfRef.tbench__DOT__sram_lb = (1U & 
                                              (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q)));
            vlSelfRef.tbench__DOT__sram_ub = (1U & 
                                              (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q) 
                                                  >> 1U)));
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_d 
                = ((0xffff0000U & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_q) 
                   | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DIN));
        }
    } else {
        vlSelfRef.tbench__DOT__sram_ce = ((1U & (~ 
                                                 ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))));
        vlSelfRef.tbench__DOT__sram_oe = ((1U & (~ 
                                                 ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q) 
                                                  >> 1U))) 
                                          || (1U & 
                                              (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))));
        if ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
            if ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
                vlSelfRef.tbench__DOT__sram_lb = (1U 
                                                  & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q)));
                vlSelfRef.tbench__DOT__sram_ub = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q) 
                                                      >> 1U)));
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_d 
                    = ((0xffff0000U & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_q) 
                       | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DIN));
            } else {
                vlSelfRef.tbench__DOT__sram_lb = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q) 
                                                      >> 2U)));
                vlSelfRef.tbench__DOT__sram_ub = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q) 
                                                      >> 3U)));
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_d 
                    = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_q;
            }
        } else {
            vlSelfRef.tbench__DOT__sram_lb = (1U & 
                                              ((1U 
                                                & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) 
                                               || (1U 
                                                   & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q)))));
            vlSelfRef.tbench__DOT__sram_ub = (1U & 
                                              ((1U 
                                                & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) 
                                               || (1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q) 
                                                       >> 1U)))));
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_d 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_q;
        }
    }
    if (((((((((4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
               | (0x20U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
              | (0x108U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
             | (0x200U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
            | (0x2e4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
           | (0x3ccU == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
          | (0x4b4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
         | (0x57cU == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
        if (VL_UNLIKELY((4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            VL_WRITEF_NX("TEST for SINGLECYCLE\n",0);
            vlSelfRef.tbench__DOT__scoreboard__DOT__insn_vld = 1U;
        } else if (VL_UNLIKELY((0x20U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            VL_WRITEF_NX("[%9t]:: 1::ADD...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x108U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]:: 2::SUB...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x200U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]:: 3::XOR...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x2e4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]:: 4::OR................",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x3ccU == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]:: 5::AND...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if ((0x4b4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]:: 6::SLL...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]:: 7::SRL...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        }
    } else if (((((((((0x660U == vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                      | (0x73cU == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                     | (0x808U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                    | (0x8d4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                   | (0x964U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                  | (0x9f4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                 | (0xa80U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                | (0xb04U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
        if (VL_UNLIKELY((0x660U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]:: 8::SRA...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x73cU == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]:: 9::SLT...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x808U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::10::SLTU..............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x8d4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::11::ADDI..............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x964U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::12::XORI..............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x9f4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::13::ORI...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if ((0xa80U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::14::ANDI..............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::15::SLLI..............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        }
    } else if (((((((((0xb94U == vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                      | (0xc34U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                     | (0xcd8U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                    | (0xd50U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                   | (0xdc8U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                  | (0xe34U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                 | (0xe80U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                | (0xf34U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
        if (VL_UNLIKELY((0xb94U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::16::SRLI..............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0xc34U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::17::SRAI..............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0xcd8U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::18::SLTI..............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0xd50U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::19::SLTIU.............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0xdc8U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::20::LUI...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0xe34U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::21::AUIPC.............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if ((0xe80U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::22::LW................",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::23::LH................",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        }
    } else if (((((((((0xfb4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                      | (0x1024U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                     | (0x10a8U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                    | (0x1118U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                   | (0x1180U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                  | (0x1210U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                 | (0x1298U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                | (0x12f0U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
        if (VL_UNLIKELY((0xfb4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::24::LB................",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x1024U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::25::LHU...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x10a8U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::26::LBU...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x1118U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::27::SW................",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x1180U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::28::SH................",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x1210U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::29::SB................",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if ((0x1298U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::30::misaligned........",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::31::BEQ...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        }
    } else if (((((((((0x1328U == vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                      | (0x1360U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                     | (0x13c8U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                    | (0x1434U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                   | (0x149cU == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                  | (0x1508U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                 | (0x15c4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                | (0x1664U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
        if (VL_UNLIKELY((0x1328U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::32::BNE...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x1360U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::33::BLT...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x13c8U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::34::BGE...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x1434U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::35::BLTU..............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x149cU == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::36::BGEU..............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if (VL_UNLIKELY((0x1508U == vlSelfRef.tbench__DOT__singlecycle__DOT__address))) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::37::JAL...............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else if ((0x15c4U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::38::JALR..............",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        } else {
            if ((1U == vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr)) {
                VL_WRITEF_NX("PASSED\n",0);
            } else {
                VL_WRITEF_NX("FAILED\n",0);
            }
            VL_WRITEF_NX("[%9t]::39::illegal_insn......",0,
                         64,VL_TIME_UNITED_Q(10),-9);
        }
    } else if ((0x166cU == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) {
        if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__o_insn_vld)))) {
            vlSelfRef.tbench__DOT__scoreboard__DOT__insn_vld = 0U;
        }
    } else if ((0x1674U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) {
        if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__o_insn_vld)))) {
            vlSelfRef.tbench__DOT__scoreboard__DOT__insn_vld = 0U;
        }
    } else if ((0x1680U == vlSelfRef.tbench__DOT__singlecycle__DOT__address)) {
        if (vlSelfRef.tbench__DOT__scoreboard__DOT__insn_vld) {
            VL_WRITEF_NX("PASSED\n",0);
        } else {
            VL_WRITEF_NX("FAILED\n",0);
        }
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__st_data_temp 
        = ((0U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__s_sel))
            ? vlSelfRef.tbench__DOT__singlecycle__DOT__data2
            : ((1U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__s_sel))
                ? (((- (IData)((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__data2 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.tbench__DOT__singlecycle__DOT__data2))
                : ((2U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__s_sel))
                    ? (((- (IData)((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__data2 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelfRef.tbench__DOT__singlecycle__DOT__data2))
                    : vlSelfRef.tbench__DOT__singlecycle__DOT__data2)));
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__op_asel) {
        if (vlSelfRef.tbench__DOT__singlecycle__DOT__op_asel) {
            vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__address;
        }
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__data1;
    }
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel) {
        if (vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel) {
            vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__dataimm;
        }
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__data2;
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__br_uns)))) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check = 1U;
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sel = 3U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__add_check = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sub_check = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))) {
            if ((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op)))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check = 1U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__add_check = 1U;
                }
            }
            if ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))) {
                vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sub_check = 1U;
            }
        }
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA6__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 6U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA5__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__A_reversed 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
            << 0x1fU) | ((0x40000000U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins16_00__sel 
        = (1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                 >> 4U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_00__sel 
        = (1U & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b);
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_32__sel 
        = (1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                 >> 1U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins8_00__sel 
        = (1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                 >> 3U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins4_00__sel 
        = (1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                 >> 2U));
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__br_uns) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check = 1U;
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x1cU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x18U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x1dU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x18U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x14U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x1fU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x1eU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x19U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x14U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x10U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x19U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x10U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x1bU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x1aU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0xcU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x15U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x1bU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x1aU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0xcU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x15U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 8U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 8U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x11U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x17U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 4U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x16U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x11U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x17U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 4U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x16U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A);
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0xdU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B);
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0xdU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x13U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x12U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x13U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 9U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0x12U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 9U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0xfU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0xeU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 5U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0xfU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0xeU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 5U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 1U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 1U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0xbU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0xaU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0xbU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 0xaU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 7U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 6U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 7U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 6U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 3U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 2U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 3U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
              >> 2U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA31__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x1fU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA31__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x1fU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA30__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x1eU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA30__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x1eU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA29__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x1dU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA29__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x1dU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA28__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x1cU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA28__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x1cU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA27__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x1bU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA27__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x1bU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA26__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x1aU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA26__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x1aU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA25__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x19U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA25__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x19U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA24__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x18U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA24__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x18U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA23__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x17U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA23__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x17U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA22__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x16U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA22__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x16U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA21__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x15U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA21__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x15U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA20__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x14U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA20__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x14U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA19__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x13U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA19__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x13U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA18__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x12U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA18__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x12U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA17__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x11U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA17__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x11U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA16__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0x10U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA16__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0x10U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA15__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0xfU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA15__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0xfU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA14__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0xeU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA14__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0xeU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA13__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0xdU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA13__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0xdU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA12__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0xcU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA12__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0xcU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA11__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0xbU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA11__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0xbU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA10__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 0xaU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA10__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 0xaU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA9__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 9U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA9__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 9U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA8__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 8U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA8__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 8U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA7__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 7U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA7__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 7U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA6__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 6U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA6__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 6U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA5__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 5U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA5__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 5U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA4__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 4U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA4__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 4U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA3__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 3U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA3__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 3U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA2__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 2U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA2__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 2U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA1__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
              >> 1U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA1__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                 >> 1U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA0__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A);
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA0__B 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check) 
           & (~ vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B));
    if ((8U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))) {
        if ((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))) {
                if ((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op)))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sel = 1U;
                }
            } else {
                vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sel 
                    = ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))
                        ? 0U : 2U);
            }
        }
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__reg_shift 
        = ((0U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sel))
            ? (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_31__out) 
                << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_30__out) 
                              << 0x1eU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_29__out) 
                                            << 0x1dU) 
                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_28__out) 
                                               << 0x1cU) 
                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_27__out) 
                                                  << 0x1bU) 
                                                 | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_26__out) 
                                                     << 0x1aU) 
                                                    | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_25__out) 
                                                        << 0x19U) 
                                                       | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_24__out) 
                                                           << 0x18U) 
                                                          | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_23__out) 
                                                              << 0x17U) 
                                                             | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_22__out) 
                                                                 << 0x16U) 
                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_21__out) 
                                                                    << 0x15U) 
                                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_20__out) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_19__out) 
                                                                          << 0x13U) 
                                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_18__out) 
                                                                             << 0x12U) 
                                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_17__out) 
                                                                                << 0x11U) 
                                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_16__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_15__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_14__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_13__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_12__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_11__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_10__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_09__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_08__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_07__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_06__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_05__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_04__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_03__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_02__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_01__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_00__out))))))))))))))))))))))))))))))))
            : ((1U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sel))
                ? (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_31__out) 
                    << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_30__out) 
                                  << 0x1eU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_29__out) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_28__out) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_27__out) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_26__out) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_25__out) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_24__out) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_23__out) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_22__out) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_21__out) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_20__out) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_19__out) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_18__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_17__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_16__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_15__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_14__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_13__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_12__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_11__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_10__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_09__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_08__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_07__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_06__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_05__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_04__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_03__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_02__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_01__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_00__out))))))))))))))))))))))))))))))))
                : ((2U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sel))
                    ? (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_00__out) 
                        << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_01__out) 
                                      << 0x1eU) | (
                                                   ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_02__out) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_03__out) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_04__out) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_05__out) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_06__out) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_07__out) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_08__out) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_09__out) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_10__out) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_11__out) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_12__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_13__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_14__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_15__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_16__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_17__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_18__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_19__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_20__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_21__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_22__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_23__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_24__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_25__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_26__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_27__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_28__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_29__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_30__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_31__out))))))))))))))))))))))))))))))))
                    : 0U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x1cU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x18U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x14U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x10U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x1dU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0xcU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x18U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 8U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x19U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x14U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 4U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x10U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a);
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x15U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x1fU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x1eU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0xcU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 8U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x11U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x19U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x1bU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x1aU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0xdU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x15U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 9U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x17U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x16U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x11U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x1bU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 5U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x1aU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0xdU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x13U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x12U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_4 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 1U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 9U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x17U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x16U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0xfU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0xeU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 5U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x13U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0x12U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0xbU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0xaU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0xfU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0xeU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 7U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 6U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0xbU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 0xaU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 3U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 2U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 7U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
              >> 6U));
    tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_1 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__add_check) 
            << 1U) | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sub_check));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__add_check) 
           | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sub_check));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA7__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 7U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA6__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins16_00__sel));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_00__sel));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_5 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_32__sel));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins8_00__sel));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
           & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins4_00__sel));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T1 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
               >> 0x1dU)) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
               >> 0x1fU)) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T2 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
               >> 0x1eU)) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA31__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA31__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA31__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA30__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA30__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA30__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA29__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA29__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA29__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA28__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA28__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA28__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA27__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA27__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA27__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA26__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA26__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA26__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA25__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA25__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA25__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA24__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA24__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA24__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA23__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA23__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA23__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA22__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA22__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA22__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA21__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA21__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA21__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA20__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA20__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA20__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA19__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA19__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA19__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA18__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA18__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA18__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA17__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA17__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA17__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA16__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA16__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA16__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA15__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA15__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA15__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA14__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA14__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA14__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA13__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA13__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA13__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA12__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA12__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA12__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA11__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA11__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA11__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA10__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA10__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA10__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA9__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA9__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA9__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA8__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA8__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA8__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA7__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA7__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA7__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA6__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA6__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA6__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA5__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA5__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA5__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA4__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA4__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA4__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA3__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA3__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA3__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA2__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA2__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA2__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA1__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA1__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA1__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA0__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA0__A) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA0__B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
               >> 0x1dU)) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
               >> 0x1fU)) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T2 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
               >> 0x1eU)) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
        = ((2U == (IData)(tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_1))
            ? vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b
            : ((1U == (IData)(tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_1))
                ? (~ vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)
                : 0U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA31__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x1fU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA30__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x1eU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA29__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x1dU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA28__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x1cU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA27__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x1bU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA26__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x1aU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA25__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x19U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA24__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x18U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA23__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x17U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA22__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x16U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA21__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x15U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA20__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x14U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA19__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x13U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA18__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x12U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA17__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x11U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA16__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0x10U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA15__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0xfU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA14__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0xeU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA13__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0xdU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA12__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0xcU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA11__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0xbU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA10__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 0xaU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA9__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 9U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA8__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 8U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA7__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 7U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA6__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 6U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA5__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 5U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA4__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 4U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA3__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 3U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA2__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 2U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA1__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
              >> 1U));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA0__A 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0) 
           & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a);
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA8__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 8U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA7__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T1 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_4) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_5));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_0) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_1));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T2 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_2) 
           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_3));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA0__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA0__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA0__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA0__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA31__DOT__X 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA31__A) 
           ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
              >> 0x1fU));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA30__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA30__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x1eU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA29__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA29__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x1dU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA28__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA28__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x1cU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA27__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA27__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x1bU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA26__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA26__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x1aU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA25__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA25__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x19U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA24__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA24__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x18U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA23__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA23__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x17U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA22__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA22__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x16U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA21__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA21__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x15U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA20__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA20__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x14U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA19__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA19__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x13U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA18__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA18__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x12U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA17__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA17__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x11U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA16__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA16__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0x10U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA15__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA15__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0xfU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA14__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA14__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0xeU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA13__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA13__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0xdU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA12__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA12__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0xcU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA11__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA11__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0xbU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA10__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA10__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 0xaU)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA9__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA9__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 9U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA8__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA8__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 8U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA7__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA7__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 7U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA6__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA6__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 6U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA5__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA5__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 5U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA4__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA4__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 4U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA3__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA3__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 3U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA2__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA2__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 2U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA1__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA1__A) 
                 ^ (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                    >> 1U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA0__DOT__X 
        = (1U & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA0__A) 
                 ^ vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA9__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 9U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA8__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_9 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T2)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T1))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8 
        = (1U & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3)) 
                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T2))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T1)) 
              & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
                     & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                        >> 0x1cU)) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA1__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA1__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA1__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA1__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA0__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA0__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA0__A) 
            & vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA0__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sub_check)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA10__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0xaU) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA9__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__Y_temp 
        = ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8) 
           & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T1)) 
              & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7)))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C1__X 
        = ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__Y_temp)) 
           & (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_0) 
               & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                       ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B)
                       : 0U) >> 3U))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_2) 
                                          & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3)) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                     ? 
                                                    (0xfU 
                                                     & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B)
                                                     : 0U) 
                                                   >> 2U)))) 
                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_4) 
                                             & ((~ 
                                                 (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                    ? 
                                                   (0xfU 
                                                    & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B)
                                                    : 0U) 
                                                  >> 1U)) 
                                                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                            | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6) 
                                               & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3)) 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                        ? 
                                                       (0xfU 
                                                        & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B)
                                                        : 0U)) 
                                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_9))))))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C1__Z 
        = ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__Y_temp)) 
           & (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                     ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A)
                     : 0U) >> 3U)) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_1)) 
              | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                        ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A)
                        : 0U) >> 2U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3)) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_3))) 
                 | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                           ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A)
                           : 0U) >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_5) 
                                            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8))) 
                    | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                            ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A)
                            : 0U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3)) 
                                      & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_9))))))));
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__Y_temp) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__X 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C1__X;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__Z 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C1__Z;
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__X 
            = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_0) 
                & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                        ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                   >> 4U)) : 0U) >> 3U))) 
               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_2) 
                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3)) 
                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                              ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                         >> 4U)) : 0U) 
                            >> 2U)))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_4) 
                                          & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                      >> 4U))
                                                   : 0U) 
                                                 >> 1U)) 
                                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                         | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6) 
                                            & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                     ? 
                                                    (0xfU 
                                                     & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                        >> 4U))
                                                     : 0U)) 
                                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_9)))))));
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__Z 
            = (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                      ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                 >> 4U)) : 0U) >> 3U)) 
                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_1)) 
               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                         ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                    >> 4U)) : 0U) >> 2U)) 
                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3)) 
                      & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_3))) 
                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                            ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                       >> 4U)) : 0U) 
                          >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_5) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8))) 
                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                             ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                        >> 4U)) : 0U)) 
                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3)) 
                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7) 
                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_9)))))));
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA2__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA2__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA2__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA2__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA1__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA1__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA1__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 1U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA1__DOT__X) 
                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA0__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA11__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0xbU) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA10__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C1__X 
        = ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__Y_temp)) 
           & (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_0) 
               & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                       ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)
                       : 0U) >> 3U))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_2) 
                                          & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3)) 
                                             & (~ (
                                                   ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                     ? 
                                                    (0xfU 
                                                     & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)
                                                     : 0U) 
                                                   >> 2U)))) 
                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_4) 
                                             & ((~ 
                                                 (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                    ? 
                                                   (0xfU 
                                                    & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)
                                                    : 0U) 
                                                  >> 1U)) 
                                                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                            | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6) 
                                               & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3)) 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                        ? 
                                                       (0xfU 
                                                        & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)
                                                        : 0U)) 
                                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_9))))))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C1__Z 
        = ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__Y_temp)) 
           & (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                     ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a)
                     : 0U) >> 3U)) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_1)) 
              | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                        ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a)
                        : 0U) >> 2U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3)) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_3))) 
                 | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                           ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a)
                           : 0U) >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_5) 
                                            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8))) 
                    | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                            ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a)
                            : 0U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3)) 
                                      & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_9))))))));
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__Y_temp) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__X 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C1__X;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__Z 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C1__Z;
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__X 
            = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_0) 
                & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                        ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                   >> 4U)) : 0U) >> 3U))) 
               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_2) 
                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3)) 
                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                              ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                         >> 4U)) : 0U) 
                            >> 2U)))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_4) 
                                          & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                      >> 4U))
                                                   : 0U) 
                                                 >> 1U)) 
                                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                         | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6) 
                                            & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                     ? 
                                                    (0xfU 
                                                     & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                        >> 4U))
                                                     : 0U)) 
                                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_9)))))));
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__Z 
            = (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                      ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                 >> 4U)) : 0U) >> 3U)) 
                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_1)) 
               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                         ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                    >> 4U)) : 0U) >> 2U)) 
                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3)) 
                      & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_3))) 
                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                            ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 4U)) : 0U) 
                          >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_5) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8))) 
                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                             ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                        >> 4U)) : 0U)) 
                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3)) 
                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7) 
                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_9)))))));
    }
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__Y_temp) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__Y;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__X 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__X;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__Z 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__Z;
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__X 
            = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_0) 
                & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                        ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                   >> 8U)) : 0U) >> 3U))) 
               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_2) 
                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3)) 
                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                              ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                         >> 8U)) : 0U) 
                            >> 2U)))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_4) 
                                          & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                      >> 8U))
                                                   : 0U) 
                                                 >> 1U)) 
                                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                         | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6) 
                                            & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                     ? 
                                                    (0xfU 
                                                     & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                        >> 8U))
                                                     : 0U)) 
                                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_9)))))));
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__Z 
            = (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                      ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                 >> 8U)) : 0U) >> 3U)) 
                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_1)) 
               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                         ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                    >> 8U)) : 0U) >> 2U)) 
                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3)) 
                      & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_3))) 
                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                            ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                       >> 8U)) : 0U) 
                          >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_5) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8))) 
                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                             ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                        >> 8U)) : 0U)) 
                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3)) 
                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7) 
                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_9)))))));
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA3__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA3__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA3__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA3__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA2__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA2__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA2__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 2U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA2__DOT__X) 
                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA1__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA12__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0xcU) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA11__Cout));
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__Y_temp) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__Y;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__X 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__X;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__Z 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__Z;
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__X 
            = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_0) 
                & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                        ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                   >> 8U)) : 0U) >> 3U))) 
               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_2) 
                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3)) 
                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                              ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                         >> 8U)) : 0U) 
                            >> 2U)))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_4) 
                                          & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                      >> 8U))
                                                   : 0U) 
                                                 >> 1U)) 
                                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                         | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6) 
                                            & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                     ? 
                                                    (0xfU 
                                                     & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                        >> 8U))
                                                     : 0U)) 
                                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_9)))))));
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__Z 
            = (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                      ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                 >> 8U)) : 0U) >> 3U)) 
                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_1)) 
               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                         ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                    >> 8U)) : 0U) >> 2U)) 
                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3)) 
                      & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_3))) 
                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                            ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 8U)) : 0U) 
                          >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_5) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8))) 
                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                             ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                        >> 8U)) : 0U)) 
                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3)) 
                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7) 
                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_9)))))));
    }
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__Y_temp) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__Y;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__X 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__X;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__Z 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__Z;
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__X 
            = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_0) 
                & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                        ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                   >> 0xcU)) : 0U) 
                      >> 3U))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_2) 
                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T3)) 
                                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                    >> 0xcU))
                                              : 0U) 
                                            >> 2U)))) 
                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_4) 
                                      & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                               ? (0xfU 
                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                     >> 0xcU))
                                               : 0U) 
                                             >> 1U)) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                     | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_6) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T3)) 
                                           & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                      >> 0xcU))
                                                   : 0U)) 
                                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_9)))))));
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__Z 
            = (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                      ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                 >> 0xcU)) : 0U) >> 3U)) 
                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_1)) 
               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                         ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                    >> 0xcU)) : 0U) 
                       >> 2U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T3)) 
                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_3))) 
                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                            ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                       >> 0xcU)) : 0U) 
                          >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_5) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_8))) 
                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                             ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                        >> 0xcU)) : 0U)) 
                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T3)) 
                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7) 
                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_9)))))));
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA4__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA4__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA4__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA4__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA3__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA3__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA3__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 3U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA3__DOT__X) 
                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA2__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA13__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0xdU) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA12__Cout));
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__Y_temp) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__Y;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__X 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__X;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__Z 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__Z;
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__X 
            = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_0) 
                & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                        ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                   >> 0xcU)) : 0U) 
                      >> 3U))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_2) 
                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T3)) 
                                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                    >> 0xcU))
                                              : 0U) 
                                            >> 2U)))) 
                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_4) 
                                      & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                               ? (0xfU 
                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                     >> 0xcU))
                                               : 0U) 
                                             >> 1U)) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                     | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_6) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T3)) 
                                           & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                      >> 0xcU))
                                                   : 0U)) 
                                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_9)))))));
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__Z 
            = (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                      ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                 >> 0xcU)) : 0U) >> 3U)) 
                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_1)) 
               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                         ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                    >> 0xcU)) : 0U) 
                       >> 2U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T3)) 
                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_3))) 
                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                            ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0xcU)) : 0U) 
                          >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_5) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_8))) 
                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                             ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                        >> 0xcU)) : 0U)) 
                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T3)) 
                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7) 
                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_9)))))));
    }
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__Y_temp) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__Y;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__X 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__X;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__Z 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__Z;
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__X 
            = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_0) 
                & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                        ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                   >> 0x10U)) : 0U) 
                      >> 3U))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_2) 
                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T3)) 
                                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                    >> 0x10U))
                                              : 0U) 
                                            >> 2U)))) 
                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_4) 
                                      & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                               ? (0xfU 
                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                     >> 0x10U))
                                               : 0U) 
                                             >> 1U)) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                     | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_6) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T3)) 
                                           & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                      >> 0x10U))
                                                   : 0U)) 
                                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_9)))))));
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__Z 
            = (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                      ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                 >> 0x10U)) : 0U) >> 3U)) 
                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_1)) 
               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                         ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                    >> 0x10U)) : 0U) 
                       >> 2U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T3)) 
                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_3))) 
                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                            ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                       >> 0x10U)) : 0U) 
                          >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_5) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_8))) 
                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                             ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                        >> 0x10U)) : 0U)) 
                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T3)) 
                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7) 
                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_9)))))));
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA5__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA5__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA5__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA5__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA4__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA4__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA4__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 4U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA4__DOT__X) 
                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA3__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA14__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0xeU) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA13__Cout));
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__Y_temp) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__Y;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__X 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__X;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__Z 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__Z;
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__X 
            = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_0) 
                & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                        ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                   >> 0x10U)) : 0U) 
                      >> 3U))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_2) 
                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T3)) 
                                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x10U))
                                              : 0U) 
                                            >> 2U)))) 
                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_4) 
                                      & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                               ? (0xfU 
                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x10U))
                                               : 0U) 
                                             >> 1U)) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                     | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_6) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T3)) 
                                           & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                      >> 0x10U))
                                                   : 0U)) 
                                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_9)))))));
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__Z 
            = (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                      ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                 >> 0x10U)) : 0U) >> 3U)) 
                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_1)) 
               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                         ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                    >> 0x10U)) : 0U) 
                       >> 2U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T3)) 
                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_3))) 
                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                            ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x10U)) : 0U) 
                          >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_5) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_8))) 
                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                             ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                        >> 0x10U)) : 0U)) 
                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T3)) 
                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7) 
                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_9)))))));
    }
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__Y_temp) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__Y;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__X 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__X;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__Z 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__Z;
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__X 
            = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_0) 
                & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                        ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                   >> 0x14U)) : 0U) 
                      >> 3U))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_2) 
                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T3)) 
                                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                    >> 0x14U))
                                              : 0U) 
                                            >> 2U)))) 
                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_4) 
                                      & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                               ? (0xfU 
                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                     >> 0x14U))
                                               : 0U) 
                                             >> 1U)) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                     | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_6) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T3)) 
                                           & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                      >> 0x14U))
                                                   : 0U)) 
                                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_9)))))));
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__Z 
            = (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                      ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                 >> 0x14U)) : 0U) >> 3U)) 
                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_1)) 
               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                         ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                    >> 0x14U)) : 0U) 
                       >> 2U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T3)) 
                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_3))) 
                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                            ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                       >> 0x14U)) : 0U) 
                          >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_5) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_8))) 
                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                             ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                        >> 0x14U)) : 0U)) 
                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T3)) 
                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7) 
                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_9)))))));
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA6__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA6__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA6__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA6__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA5__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA5__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA5__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 5U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA5__DOT__X) 
                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA4__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA15__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0xfU) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA14__Cout));
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__Y_temp) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__Y;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__X 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__X;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Z 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__Z;
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__X 
            = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_0) 
                & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                        ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                   >> 0x14U)) : 0U) 
                      >> 3U))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_2) 
                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T3)) 
                                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x14U))
                                              : 0U) 
                                            >> 2U)))) 
                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_4) 
                                      & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                               ? (0xfU 
                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x14U))
                                               : 0U) 
                                             >> 1U)) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                     | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_6) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T3)) 
                                           & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                      >> 0x14U))
                                                   : 0U)) 
                                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_9)))))));
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Z 
            = (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                      ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                 >> 0x14U)) : 0U) >> 3U)) 
                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_1)) 
               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                         ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                    >> 0x14U)) : 0U) 
                       >> 2U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T3)) 
                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_3))) 
                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                            ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x14U)) : 0U) 
                          >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_5) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_8))) 
                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                             ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                        >> 0x14U)) : 0U)) 
                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T3)) 
                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7) 
                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_9)))))));
    }
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__Y_temp) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__Y;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__X 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__X;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Z 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__Z;
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Y 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__Y_temp;
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__X 
            = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_0) 
                & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                        ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                   >> 0x18U)) : 0U) 
                      >> 3U))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_2) 
                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T3)) 
                                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                    >> 0x18U))
                                              : 0U) 
                                            >> 2U)))) 
                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_4) 
                                      & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                               ? (0xfU 
                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                     >> 0x18U))
                                               : 0U) 
                                             >> 1U)) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                     | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_6) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T3)) 
                                           & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                      >> 0x18U))
                                                   : 0U)) 
                                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_9)))))));
        vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Z 
            = (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                      ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                 >> 0x18U)) : 0U) >> 3U)) 
                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_1)) 
               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                         ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                    >> 0x18U)) : 0U) 
                       >> 2U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T3)) 
                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_3))) 
                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                            ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                       >> 0x18U)) : 0U) 
                          >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_5) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_8))) 
                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                             ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                        >> 0x18U)) : 0U)) 
                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T3)) 
                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7) 
                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_9)))))));
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA7__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA7__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA7__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA7__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA6__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA6__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA6__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 6U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA6__DOT__X) 
                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA5__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA16__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x10U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA15__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA8__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA8__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA8__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA8__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA7__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA7__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA7__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 7U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA7__DOT__X) 
                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA6__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA17__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x11U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA16__Cout));
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__Y_temp) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__X 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__X;
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__Z 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Z;
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__X 
            = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_0) 
                & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                        ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                   >> 0x18U)) : 0U) 
                      >> 3U))) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_2) 
                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T3)) 
                                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x18U))
                                              : 0U) 
                                            >> 2U)))) 
                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_4) 
                                      & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                               ? (0xfU 
                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                     >> 0x18U))
                                               : 0U) 
                                             >> 1U)) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                     | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_6) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T3)) 
                                           & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                      >> 0x18U))
                                                   : 0U)) 
                                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_9)))))));
        vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__Z 
            = (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                      ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                 >> 0x18U)) : 0U) >> 3U)) 
                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_1)) 
               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                         ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                    >> 0x18U)) : 0U) 
                       >> 2U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T3)) 
                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_3))) 
                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                            ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x18U)) : 0U) 
                          >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_5) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_8))) 
                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                             ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                        >> 0x18U)) : 0U)) 
                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T3)) 
                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7) 
                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_9)))))));
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA9__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA9__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA9__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA9__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA8__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA8__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA8__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 8U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA8__DOT__X) 
                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA7__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA18__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x12U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA17__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA10__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA10__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA10__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA10__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA9__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA9__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA9__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 9U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA9__DOT__X) 
                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA8__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA19__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x13U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA18__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA11__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA11__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA11__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA11__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA10__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA10__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA10__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0xaU)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA10__DOT__X) 
                            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA9__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA20__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x14U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA19__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA12__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA12__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA12__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA12__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA11__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA11__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA11__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0xbU)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA11__DOT__X) 
                            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA10__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA21__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x15U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA20__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA13__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA13__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA13__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA13__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA12__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA12__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA12__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0xcU)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA12__DOT__X) 
                            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA11__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA22__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x16U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA21__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA14__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA14__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA14__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA14__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA13__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA13__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA13__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0xdU)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA13__DOT__X) 
                            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA12__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA23__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x17U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA22__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA15__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA15__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA15__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA15__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA14__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA14__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA14__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0xeU)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA14__DOT__X) 
                            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA13__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA24__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x18U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA23__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA16__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA16__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA16__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA16__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA15__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA15__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA15__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0xfU)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA15__DOT__X) 
                            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA14__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA25__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x19U) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA24__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA17__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA17__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA17__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA17__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA16__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA16__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA16__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x10U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA16__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA15__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA26__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x1aU) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA25__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA18__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA18__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA18__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA18__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA17__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA17__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA17__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x11U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA17__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA16__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA27__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x1bU) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA26__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA19__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA19__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA19__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA19__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA18__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA18__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA18__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x12U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA18__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA17__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA28__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x1cU) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA27__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA20__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA20__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA20__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA20__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA19__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA19__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA19__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x13U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA19__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA18__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA29__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x1dU) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA28__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA21__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA21__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA21__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA21__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA20__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA20__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA20__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x14U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA20__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA19__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA30__Cout 
        = ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
            >> 0x1eU) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA29__Cout));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA22__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA22__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA22__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA22__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA21__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA21__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA21__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x15U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA21__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA20__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__pc_four 
        = (((0x80000000U & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
            ^ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA30__Cout) 
               << 0x1fU)) | ((0x40000000U & ((0xc0000000U 
                                              & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                             ^ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA29__Cout) 
                                                << 0x1eU))) 
                             | ((0x20000000U & ((0xe0000000U 
                                                 & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                ^ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA28__Cout) 
                                                   << 0x1dU))) 
                                | ((0x10000000U & (
                                                   (0xf0000000U 
                                                    & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA27__Cout) 
                                                    << 0x1cU))) 
                                   | ((0x8000000U & 
                                       ((0xf8000000U 
                                         & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                        ^ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA26__Cout) 
                                           << 0x1bU))) 
                                      | ((0x4000000U 
                                          & ((0xfc000000U 
                                              & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                             ^ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA25__Cout) 
                                                << 0x1aU))) 
                                         | ((0x2000000U 
                                             & ((0xfe000000U 
                                                 & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                ^ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA24__Cout) 
                                                   << 0x19U))) 
                                            | ((0x1000000U 
                                                & ((0xff000000U 
                                                    & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA23__Cout) 
                                                    << 0x18U))) 
                                               | ((0x800000U 
                                                   & ((0xff800000U 
                                                       & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                      ^ 
                                                      ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA22__Cout) 
                                                       << 0x17U))) 
                                                  | ((0x400000U 
                                                      & ((0xffc00000U 
                                                          & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA21__Cout) 
                                                          << 0x16U))) 
                                                     | ((0x200000U 
                                                         & ((0xffe00000U 
                                                             & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                            ^ 
                                                            ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA20__Cout) 
                                                             << 0x15U))) 
                                                        | ((0x100000U 
                                                            & ((0xfff00000U 
                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                               ^ 
                                                               ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA19__Cout) 
                                                                << 0x14U))) 
                                                           | ((0x80000U 
                                                               & ((0xfff80000U 
                                                                   & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                  ^ 
                                                                  ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA18__Cout) 
                                                                   << 0x13U))) 
                                                              | ((0x40000U 
                                                                  & ((0xfffc0000U 
                                                                      & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                     ^ 
                                                                     ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA17__Cout) 
                                                                      << 0x12U))) 
                                                                 | ((0x20000U 
                                                                     & ((0xfffe0000U 
                                                                         & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                        ^ 
                                                                        ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA16__Cout) 
                                                                         << 0x11U))) 
                                                                    | ((0x10000U 
                                                                        & ((0xffff0000U 
                                                                            & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                           ^ 
                                                                           ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA15__Cout) 
                                                                            << 0x10U))) 
                                                                       | ((0x8000U 
                                                                           & ((0xffff8000U 
                                                                               & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                              ^ 
                                                                              ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA14__Cout) 
                                                                               << 0xfU))) 
                                                                          | ((0x4000U 
                                                                              & ((0xffffc000U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA13__Cout) 
                                                                                << 0xeU))) 
                                                                             | ((0x2000U 
                                                                                & ((0xffffe000U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA12__Cout) 
                                                                                << 0xdU))) 
                                                                                | ((0x1000U 
                                                                                & ((0xfffff000U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA11__Cout) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & ((0xfffff800U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA10__Cout) 
                                                                                << 0xbU))) 
                                                                                | ((0x400U 
                                                                                & ((0xfffffc00U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA9__Cout) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & ((0xfffffe00U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA8__Cout) 
                                                                                << 9U))) 
                                                                                | ((0x100U 
                                                                                & ((0xffffff00U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA7__Cout) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((0xffffff80U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA6__Cout) 
                                                                                << 7U))) 
                                                                                | ((0x40U 
                                                                                & ((0xffffffc0U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA5__Cout) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((0xffffffe0U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA4__Cout) 
                                                                                << 5U))) 
                                                                                | ((0x10U 
                                                                                & ((0xfffffff0U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address) 
                                                                                ^ 
                                                                                ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA3__Cout) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & (VL_REDXOR_4(
                                                                                (0xcU 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address)))))))))))))))))))))))))))))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA23__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA23__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA23__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA23__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA22__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA22__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA22__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x16U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA22__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA21__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA24__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA24__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA24__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA24__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA23__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA23__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA23__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x17U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA23__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA22__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA25__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA25__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA25__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA25__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA24__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA24__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA24__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x18U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA24__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA23__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA26__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA26__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA26__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA26__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA25__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA25__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA25__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x19U)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA25__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA24__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA27__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA27__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA27__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA27__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA26__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA26__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA26__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x1aU)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA26__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA25__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA28__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA28__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA28__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA28__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA27__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA27__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA27__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x1bU)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA27__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA26__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA29__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA29__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA29__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA29__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA28__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA28__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA28__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x1cU)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA28__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA27__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA30__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA30__A) 
            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA30__B)) 
           | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA30__DOT__X) 
              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA29__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA29__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA29__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x1dU)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA29__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA28__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_sub 
        = ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA31__DOT__X) 
             ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA30__Cout)) 
            << 0x1fU) | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA30__DOT__X) 
                           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA29__Cout)) 
                          << 0x1eU) | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA29__DOT__X) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA28__Cout)) 
                                        << 0x1dU) | 
                                       ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA28__DOT__X) 
                                          ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA27__Cout)) 
                                         << 0x1cU) 
                                        | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA27__DOT__X) 
                                             ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA26__Cout)) 
                                            << 0x1bU) 
                                           | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA26__DOT__X) 
                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA25__Cout)) 
                                               << 0x1aU) 
                                              | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA25__DOT__X) 
                                                   ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA24__Cout)) 
                                                  << 0x19U) 
                                                 | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA24__DOT__X) 
                                                      ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA23__Cout)) 
                                                     << 0x18U) 
                                                    | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA23__DOT__X) 
                                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA22__Cout)) 
                                                        << 0x17U) 
                                                       | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA22__DOT__X) 
                                                            ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA21__Cout)) 
                                                           << 0x16U) 
                                                          | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA21__DOT__X) 
                                                               ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA20__Cout)) 
                                                              << 0x15U) 
                                                             | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA20__DOT__X) 
                                                                  ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA19__Cout)) 
                                                                 << 0x14U) 
                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA19__DOT__X) 
                                                                     ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA18__Cout)) 
                                                                    << 0x13U) 
                                                                   | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA18__DOT__X) 
                                                                        ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA17__Cout)) 
                                                                       << 0x12U) 
                                                                      | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA17__DOT__X) 
                                                                           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA16__Cout)) 
                                                                          << 0x11U) 
                                                                         | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA16__DOT__X) 
                                                                              ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA15__Cout)) 
                                                                             << 0x10U) 
                                                                            | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA15__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA14__Cout)) 
                                                                                << 0xfU) 
                                                                               | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA14__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA13__Cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA13__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA12__Cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA12__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA11__Cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA11__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA10__Cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA10__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA9__Cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA9__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA8__Cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA8__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA7__Cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA7__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA6__Cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA6__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA5__Cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA5__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA4__Cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA4__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA3__Cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA3__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA2__Cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA2__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA1__Cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA1__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA0__Cout)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA0__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check)))))))))))))))))))))))))))))))));
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__br_uns) {
        if (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__Y_temp) {
            vlSelfRef.tbench__DOT__singlecycle__DOT__equal 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Y;
            vlSelfRef.tbench__DOT__singlecycle__DOT__less 
                = (1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Z));
        } else {
            vlSelfRef.tbench__DOT__singlecycle__DOT__equal 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__Y_temp;
            vlSelfRef.tbench__DOT__singlecycle__DOT__less 
                = (1U & (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                   >> 0x1cU) : 0U) 
                              >> 3U)) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1)) 
                         | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                      >> 0x1cU) : 0U) 
                                 >> 2U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3)) 
                                            & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3))) 
                            | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                      ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                         >> 0x1cU) : 0U) 
                                    >> 1U)) & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8))) 
                               | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                       ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                          >> 0x1cU)
                                       : 0U)) & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3)) 
                                                 & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7) 
                                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T2)) 
                                                       & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T1))))))))));
        }
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__equal 
            = (0U == vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_sub);
        vlSelfRef.tbench__DOT__singlecycle__DOT__less 
            = (1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_sub 
                     >> 0x1fU));
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA30__Cout 
        = (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA30__A) 
            & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
               >> 0x1eU)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA30__DOT__X) 
                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA29__Cout)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__reg_sum 
        = ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA31__DOT__X) 
             ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA30__Cout)) 
            << 0x1fU) | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA30__DOT__X) 
                           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA29__Cout)) 
                          << 0x1eU) | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA29__DOT__X) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA28__Cout)) 
                                        << 0x1dU) | 
                                       ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA28__DOT__X) 
                                          ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA27__Cout)) 
                                         << 0x1cU) 
                                        | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA27__DOT__X) 
                                             ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA26__Cout)) 
                                            << 0x1bU) 
                                           | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA26__DOT__X) 
                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA25__Cout)) 
                                               << 0x1aU) 
                                              | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA25__DOT__X) 
                                                   ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA24__Cout)) 
                                                  << 0x19U) 
                                                 | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA24__DOT__X) 
                                                      ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA23__Cout)) 
                                                     << 0x18U) 
                                                    | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA23__DOT__X) 
                                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA22__Cout)) 
                                                        << 0x17U) 
                                                       | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA22__DOT__X) 
                                                            ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA21__Cout)) 
                                                           << 0x16U) 
                                                          | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA21__DOT__X) 
                                                               ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA20__Cout)) 
                                                              << 0x15U) 
                                                             | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA20__DOT__X) 
                                                                  ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA19__Cout)) 
                                                                 << 0x14U) 
                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA19__DOT__X) 
                                                                     ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA18__Cout)) 
                                                                    << 0x13U) 
                                                                   | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA18__DOT__X) 
                                                                        ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA17__Cout)) 
                                                                       << 0x12U) 
                                                                      | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA17__DOT__X) 
                                                                           ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA16__Cout)) 
                                                                          << 0x11U) 
                                                                         | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA16__DOT__X) 
                                                                              ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA15__Cout)) 
                                                                             << 0x10U) 
                                                                            | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA15__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA14__Cout)) 
                                                                                << 0xfU) 
                                                                               | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA14__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA13__Cout)) 
                                                                                << 0xeU) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA13__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA12__Cout)) 
                                                                                << 0xdU) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA12__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA11__Cout)) 
                                                                                << 0xcU) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA11__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA10__Cout)) 
                                                                                << 0xbU) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA10__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA9__Cout)) 
                                                                                << 0xaU) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA9__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA8__Cout)) 
                                                                                << 9U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA8__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA7__Cout)) 
                                                                                << 8U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA7__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA6__Cout)) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA6__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA5__Cout)) 
                                                                                << 6U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA5__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA4__Cout)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA4__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA3__Cout)) 
                                                                                << 4U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA3__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA2__Cout)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA2__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA1__Cout)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA1__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA0__Cout)) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA0__DOT__X) 
                                                                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sub_check)))))))))))))))))))))))))))))))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data 
        = ((8U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))
            ? ((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))
                ? 0U : ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))
                         ? ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))
                             ? vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b
                             : vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__reg_shift)
                         : vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__reg_shift))
            : ((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))
                ? ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))
                    ? ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))
                        ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                           & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)
                        : (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                           | vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b))
                    : ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))
                        ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                           ^ vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)
                        : (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8) 
                            & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1)) 
                               & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                      & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1cU)) 
                                     ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7)))))
                            ? (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__Z)
                            : (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                      ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1cU) : 0U) 
                                    >> 3U)) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1)) 
                               | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                         ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                            >> 0x1cU)
                                         : 0U) >> 2U)) 
                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                                      & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                  | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                            ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                               >> 0x1cU)
                                            : 0U) >> 1U)) 
                                      & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5) 
                                         & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                     | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                             ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                >> 0x1cU)
                                             : 0U)) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7) 
                                              & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T2)) 
                                                 & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1))))))))))))
                : ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))
                    ? ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))
                        ? (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__reg_sum 
                           >> 0x1fU) : vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__reg_sum)
                    : ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__op))
                        ? vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__reg_sum
                        : 0U))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__pcsel = 0U;
    if ((3U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__valid))) {
        if ((1U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
            if ((2U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                if ((3U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                    if ((4U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                        if ((5U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                            if ((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))) {
                                vlSelfRef.tbench__DOT__singlecycle__DOT__pcsel 
                                    = (1U & ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                                                  ? 
                                                 (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__less))
                                                  : (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__less))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                                                  ? 
                                                 (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__less))
                                                  : (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__less))));
                            } else if ((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de) 
                                                 >> 1U)))) {
                                vlSelfRef.tbench__DOT__singlecycle__DOT__pcsel 
                                    = (1U & ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de))
                                              ? (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__equal))
                                              : (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__equal)));
                            }
                        } else if ((6U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                            vlSelfRef.tbench__DOT__singlecycle__DOT__pcsel = 1U;
                        } else if ((7U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code))) {
                            vlSelfRef.tbench__DOT__singlecycle__DOT__pcsel = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.tbench__DOT__singlecycle__DOT__pcsel) {
        if (vlSelfRef.tbench__DOT__singlecycle__DOT__pcsel) {
            vlSelfRef.tbench__DOT__singlecycle__DOT__next_pc 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data;
        }
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__next_pc 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__pc_four;
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__io_code 
        = ((0x781U == (0xfffU & (vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data 
                                 >> 4U))) ? 1U : ((0x780U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data 
                                                       >> 4U)))
                                                   ? 2U
                                                   : 
                                                  ((0x703U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data 
                                                        >> 4U)))
                                                    ? 3U
                                                    : 
                                                   ((0x702U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data 
                                                         >> 4U)))
                                                     ? 4U
                                                     : 
                                                    ((0x701U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data 
                                                          >> 4U)))
                                                      ? 5U
                                                      : 
                                                     ((0x700U 
                                                       == 
                                                       (0xfffU 
                                                        & (vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data 
                                                           >> 4U)))
                                                       ? 6U
                                                       : 0U))))));
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__code 
        = ((0x8000U & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data)
            ? 0U : ((0x4000U & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data)
                     ? ((0x2000U & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data)
                         ? 0U : ((0x1000U & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data)
                                  ? 0U : 3U)) : ((0x2000U 
                                                  & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data)
                                                  ? 2U
                                                  : 1U)));
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack2 = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__datainO = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__en_wire = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__datainD = 0U;
    if ((1U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__code))) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack2 = 0U;
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__datainO = 0U;
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp = 0U;
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__datainD = 0U;
    } else {
        if ((2U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__code))) {
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack2 = 1U;
            if ((1U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__io_code))) {
                if ((2U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__io_code))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__datainO 
                        = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__st_data_temp;
                }
            }
        }
        if ((2U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__code))) {
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_q;
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__datainD 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__st_data_temp;
        } else {
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp 
                = ((1U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__io_code))
                    ? vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__dataI
                    : ((2U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__io_code))
                        ? vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__dataI
                        : vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__OUT__DOT__outmem
                       [(0x3fU & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data)]));
        }
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__en_wire2 = 0U;
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__rd_wire = 0U;
    if ((1U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__code))) {
        if ((2U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__code))) {
            if ((1U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__io_code))) {
                if ((2U != (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__io_code))) {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__en_wire 
                        = vlSelfRef.tbench__DOT__singlecycle__DOT__mem_wren;
                }
            }
        }
        if ((2U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__code))) {
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__en_wire2 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__mem_wren;
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__rd_wire 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__mem_rden;
        }
    }
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_WREN 
        = ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack1)) 
           & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__en_wire2));
    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_RDEN 
        = ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack1)) 
           & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__rd_wire));
    if ((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
        if ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
            if ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
                if (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_WREN) 
                     ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_RDEN))) {
                    if (vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_WREN) {
                        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 1U;
                        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
                            = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__datainD;
                    } else {
                        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 3U;
                        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
                            = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q;
                    }
                    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_d = 0xfU;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_d 
                        = (0x3fffeU & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data);
                } else {
                    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 0U;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_d 
                        = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
                        = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q;
                    vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_d 
                        = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q;
                }
            } else {
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 7U;
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_d 
                    = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q;
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
                    = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q;
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_d 
                    = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q;
            }
        } else {
            if ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 6U;
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_d 
                    = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q;
            } else {
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 5U;
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_d 
                    = (1U | vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q);
            }
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_d 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q;
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q;
        }
    } else if ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
        if ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 4U;
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_d 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q;
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q;
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_d 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q;
        } else if (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_WREN) 
                    ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_RDEN))) {
            if (vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_WREN) {
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 1U;
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
                    = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__datainD;
            } else {
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 3U;
                vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
                    = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q;
            }
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_d = 0xfU;
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_d 
                = (0x3fffeU & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data);
        } else {
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 0U;
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_d 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q;
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q;
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_d 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q;
        }
    } else if ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))) {
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 2U;
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_d 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q;
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q;
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_d 
            = (1U | vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q);
    } else if (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_WREN) 
                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_RDEN))) {
        if (vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_WREN) {
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 1U;
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__datainD;
        } else {
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 3U;
            vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
                = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q;
        }
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_d = 0xfU;
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_d 
            = (0x3fffeU & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data);
    } else {
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = 0U;
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_d 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q;
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q;
        vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_d 
            = vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q;
    }
}

VL_ATTR_COLD void Vtbench___024root___eval_triggers__stl(Vtbench___024root* vlSelf);

VL_ATTR_COLD bool Vtbench___024root___eval_phase__stl(Vtbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__act(Vtbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tbench.i_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] tbench.singlecycle.alunit.ALU3.sl.__Vcellinp__ins16_00__sel)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] tbench.singlecycle.alunit.ALU3.sl.__Vcellinp__ins8_00__sel)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] tbench.singlecycle.alunit.ALU3.sl.__Vcellinp__ins4_00__sel)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] tbench.singlecycle.alunit.ALU3.sl.__Vcellinp__ins_32__sel)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] tbench.singlecycle.alunit.ALU3.sl.__Vcellinp__ins_00__sel)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__nba(Vtbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tbench.i_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] tbench.singlecycle.alunit.ALU3.sl.__Vcellinp__ins16_00__sel)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] tbench.singlecycle.alunit.ALU3.sl.__Vcellinp__ins8_00__sel)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] tbench.singlecycle.alunit.ALU3.sl.__Vcellinp__ins4_00__sel)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] tbench.singlecycle.alunit.ALU3.sl.__Vcellinp__ins_32__sel)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] tbench.singlecycle.alunit.ALU3.sl.__Vcellinp__ins_00__sel)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtbench___024root____Vm_traceActivitySetAll(Vtbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
}

VL_ATTR_COLD void Vtbench___024root___ctor_var_reset(Vtbench___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tbench__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__i_reset = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__sram_ce = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__sram_we = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__sram_oe = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__sram_lb = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__sram_ub = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__o_insn_vld = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__driverUnit__DOT__counter = VL_RAND_RESET_Q(64);
    vlSelf->tbench__DOT__singlecycle__DOT__pc_four = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__data1 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__data2 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__dataimm = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__rd_wren = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__op_asel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__op_bsel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__br_uns = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__less = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__equal = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__mem_wren = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__mem_rden = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__pcsel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__op = VL_RAND_RESET_I(4);
    vlSelf->tbench__DOT__singlecycle__DOT__imm_sel = VL_RAND_RESET_I(3);
    vlSelf->tbench__DOT__singlecycle__DOT__l_sel = VL_RAND_RESET_I(3);
    vlSelf->tbench__DOT__singlecycle__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__singlecycle__DOT__s_sel = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__singlecycle__DOT__rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__singlecycle__DOT__rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__singlecycle__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__singlecycle__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__i_io_btn = VL_RAND_RESET_I(4);
    vlSelf->tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data = VL_RAND_RESET_I(25);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA3__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA4__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA5__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA6__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA7__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA8__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA9__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA10__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA11__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA12__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA13__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA14__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA15__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA16__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA17__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA18__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA19__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA20__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA21__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA22__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA23__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA24__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA25__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA26__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA27__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA28__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA29__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA30__Cout = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->tbench__DOT__singlecycle__DOT__Instrmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tbench__DOT__singlecycle__DOT__registers__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tbench__DOT__singlecycle__DOT__registers__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tbench__DOT__singlecycle__DOT__ctrl__DOT__code = VL_RAND_RESET_I(4);
    vlSelf->tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de = VL_RAND_RESET_I(3);
    vlSelf->tbench__DOT__singlecycle__DOT__ctrl__DOT__funct7de = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__ctrl__DOT__valid = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__reg_A = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__reg_B = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__reg_sub = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__check = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__sub_check = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C1__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C1__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__Y = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__Y = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__Y = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__Y = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__Y = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Y = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA0__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA0__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA0__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA1__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA1__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA1__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA2__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA2__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA2__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA3__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA3__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA3__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA4__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA4__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA4__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA5__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA5__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA5__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA6__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA6__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA6__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA7__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA7__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA7__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA8__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA8__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA8__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA9__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA9__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA9__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA10__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA10__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA10__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA11__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA11__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA11__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA12__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA12__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA12__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA13__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA13__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA13__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA14__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA14__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA14__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA15__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA15__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA15__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA16__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA16__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA16__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA17__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA17__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA17__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA18__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA18__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA18__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA19__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA19__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA19__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA20__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA20__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA20__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA21__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA21__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA21__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA22__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA22__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA22__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA23__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA23__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA23__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA24__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA24__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA24__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA25__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA25__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA25__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA26__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA26__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA26__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA27__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA27__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA27__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA28__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA28__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA28__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA29__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA29__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA29__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA30__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA30__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA30__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA31__B = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA31__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA0__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA1__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA2__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA3__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA4__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA5__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA6__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA7__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA8__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA9__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA10__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA11__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA12__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA13__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA14__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA15__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA16__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA17__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA18__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA19__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA20__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA21__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA22__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA23__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA24__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA25__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA26__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA27__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA28__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA29__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA30__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA31__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__add_check = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__sub_check = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__reg_sum = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__reg_shift = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA0__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA0__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA1__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA1__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA2__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA2__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA3__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA3__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA4__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA4__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA5__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA5__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA6__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA6__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA7__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA7__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA8__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA8__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA9__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA9__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA10__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA10__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA11__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA11__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA12__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA12__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA13__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA13__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA14__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA14__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA15__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA15__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA16__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA16__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA17__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA17__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA18__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA18__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA19__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA19__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA20__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA20__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA21__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA21__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA22__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA22__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA23__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA23__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA24__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA24__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA25__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA25__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA26__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA26__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA27__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA27__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA28__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA28__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA29__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA29__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA30__Cout = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA30__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA31__A = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA0__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA1__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA2__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA3__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA4__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA5__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA6__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA7__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA8__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA9__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA10__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA11__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA12__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA13__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA14__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA15__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA16__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA17__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA18__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA19__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA20__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA21__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA22__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA23__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA24__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA25__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA26__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA27__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA28__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA29__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA30__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA31__DOT__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C1__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C1__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__Y = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__Y = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__Y = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__Y = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Y = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__Z = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__X = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__Y_temp = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_0 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_4 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_6 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_9 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__A_reversed = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_31__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_30__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_29__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_28__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_27__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_26__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_25__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_24__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_23__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_22__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_21__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_20__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_19__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_18__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_17__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_16__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_15__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_14__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_13__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_12__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_11__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_10__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_09__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_08__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_07__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_06__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_05__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_04__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_03__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_02__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_01__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_00__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_31__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_30__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_29__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_28__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_27__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_26__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_25__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_24__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_23__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_22__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_21__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_20__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_19__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_18__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_17__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_16__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_15__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_14__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_13__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_12__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_11__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_10__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_09__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_08__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_07__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_06__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_05__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_04__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_03__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_02__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_01__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_00__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_31__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_30__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_29__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_28__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_27__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_26__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_25__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_24__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_23__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_22__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_21__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_20__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_19__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_18__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_17__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_16__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_15__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_14__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_13__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_12__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_11__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_10__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_09__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_08__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_07__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_06__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_05__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_04__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_03__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_02__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_01__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_00__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_63__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_62__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_61__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_60__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_59__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_58__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_57__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_56__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_55__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_54__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_53__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_52__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_51__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_50__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_49__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_48__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_47__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_46__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_45__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_44__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_43__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_42__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_41__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_40__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_39__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_38__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_37__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_36__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_35__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_34__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_33__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_32__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_31__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_30__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_29__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_28__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_27__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_26__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_25__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_24__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_23__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_22__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_21__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_20__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_19__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_18__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_17__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_16__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_15__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_14__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_13__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_12__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_11__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_10__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_09__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_08__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_07__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_06__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_05__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_04__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_03__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_02__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_01__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_00__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_31__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_30__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_29__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_28__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_27__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_26__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_25__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_24__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_23__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_22__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_21__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_20__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_19__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_18__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_17__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_16__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_15__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_14__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_13__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_12__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_11__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_10__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_09__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_08__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_07__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_06__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_05__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_04__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_03__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_02__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_01__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_00__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_31__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_30__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_29__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_28__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_27__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_26__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_25__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_24__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_23__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_22__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_21__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_20__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_19__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_18__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_17__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_16__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_15__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_14__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_13__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_12__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_11__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_10__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_09__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_08__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_07__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_06__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_05__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_04__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_03__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_02__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_01__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_00__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_31__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_30__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_29__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_28__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_27__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_26__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_25__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_24__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_23__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_22__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_21__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_20__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_19__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_18__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_17__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_16__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_15__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_14__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_13__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_12__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_11__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_10__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_09__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_08__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_07__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_06__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_05__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_04__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_03__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_02__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_01__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_00__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_63__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_62__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_61__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_60__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_59__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_58__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_57__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_56__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_55__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_54__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_53__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_52__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_51__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_50__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_49__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_48__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_47__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_46__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_45__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_44__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_43__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_42__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_41__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_40__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_39__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_38__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_37__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_36__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_35__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_34__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_33__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_32__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_31__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_30__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_29__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_28__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_27__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_26__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_25__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_24__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_23__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_22__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_21__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_20__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_19__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_18__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_17__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_16__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_15__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_14__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_13__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_12__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_11__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_10__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_09__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_08__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_07__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_06__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_05__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_04__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_03__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_02__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_01__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_00__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_31__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_30__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_29__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_28__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_27__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_26__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_25__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_24__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_23__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_22__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_21__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_20__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_19__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_18__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_17__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_16__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_15__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_14__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_13__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_12__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_11__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_10__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_09__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_08__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_07__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_06__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_05__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_04__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_03__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_02__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_01__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_00__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins16_00__sel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_31__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_30__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_29__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_28__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_27__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_26__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_25__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_24__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_23__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_22__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_21__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_20__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_19__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_18__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_17__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_16__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_15__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_14__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_13__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_12__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_11__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_10__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_09__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_08__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_07__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_06__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_05__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_04__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_03__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_02__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_01__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_00__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins8_00__sel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_31__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_30__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_29__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_28__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_27__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_26__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_25__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_24__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_23__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_22__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_21__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_20__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_19__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_18__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_17__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_16__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_15__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_14__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_13__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_12__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_11__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_10__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_09__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_08__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_07__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_06__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_05__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_04__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_03__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_02__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_01__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_00__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins4_00__sel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_63__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_62__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_61__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_60__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_59__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_58__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_57__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_56__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_55__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_54__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_53__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_52__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_51__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_50__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_49__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_48__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_47__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_46__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_45__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_44__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_43__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_42__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_41__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_40__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_39__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_38__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_37__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_36__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_35__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_34__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_33__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_32__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_32__sel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_31__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_30__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_29__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_28__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_27__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_26__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_25__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_24__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_23__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_22__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_21__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_20__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_19__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_18__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_17__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_16__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_15__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_14__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_13__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_12__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_11__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_10__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_09__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_08__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_07__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_06__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_05__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_04__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_03__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_02__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_01__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_00__out = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_00__sel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__en_wire = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__en_wire2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__rd_wire = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__i_lsu_addr_sel = VL_RAND_RESET_I(4);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__datainD = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__datainO = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__dataI = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__o_lcd = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledg = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex0 = VL_RAND_RESET_I(7);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex1 = VL_RAND_RESET_I(7);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex2 = VL_RAND_RESET_I(7);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex3 = VL_RAND_RESET_I(7);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex4 = VL_RAND_RESET_I(7);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex5 = VL_RAND_RESET_I(7);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex6 = VL_RAND_RESET_I(7);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex7 = VL_RAND_RESET_I(7);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__st_data_temp = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__code = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__io_code = VL_RAND_RESET_I(3);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__ack1 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__ack2 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_RDEN = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_WREN = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__OUT__DOT__outmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d = VL_RAND_RESET_I(3);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q = VL_RAND_RESET_I(3);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_d = VL_RAND_RESET_I(18);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q = VL_RAND_RESET_I(18);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_d = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_d = VL_RAND_RESET_I(4);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q = VL_RAND_RESET_I(4);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DIN = VL_RAND_RESET_I(16);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DOUT__strong__out1 = VL_RAND_RESET_I(16);
    vlSelf->tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DOUT__strong__out2 = VL_RAND_RESET_I(16);
    vlSelf->tbench__DOT__scoreboard__DOT__insn_vld = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins16_00__sel__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins8_00__sel__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins4_00__sel__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_32__sel__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_00__sel__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
