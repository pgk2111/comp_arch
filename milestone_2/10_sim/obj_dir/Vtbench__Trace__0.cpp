// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtbench__Syms.h"


void Vtbench___024root__trace_chg_0_sub_0(Vtbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_chg_0\n"); );
    // Init
    Vtbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbench___024root*>(voidSelf);
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtbench___024root__trace_chg_0_sub_0(Vtbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(((2ULL < vlSelfRef.tbench__DOT__driverUnit__DOT__counter)
                                 ? 0xa5a5a5a5U : 0U)),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_lcd),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledg),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_ledr),32);
        bufp->chgCData(oldp+4,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex0),7);
        bufp->chgCData(oldp+5,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex1),7);
        bufp->chgCData(oldp+6,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex2),7);
        bufp->chgCData(oldp+7,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex3),7);
        bufp->chgCData(oldp+8,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex4),7);
        bufp->chgCData(oldp+9,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex5),7);
        bufp->chgCData(oldp+10,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex6),7);
        bufp->chgCData(oldp+11,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__o_hex7),7);
        bufp->chgIData(oldp+12,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q),18);
        bufp->chgSData(oldp+13,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__DIN),16);
        bufp->chgBit(oldp+14,(vlSelfRef.tbench__DOT__sram_ce));
        bufp->chgBit(oldp+15,(vlSelfRef.tbench__DOT__sram_we));
        bufp->chgBit(oldp+16,(vlSelfRef.tbench__DOT__sram_oe));
        bufp->chgBit(oldp+17,(vlSelfRef.tbench__DOT__sram_lb));
        bufp->chgBit(oldp+18,(vlSelfRef.tbench__DOT__sram_ub));
        bufp->chgIData(oldp+19,(vlSelfRef.tbench__DOT__singlecycle__DOT__address),32);
        bufp->chgBit(oldp+20,(vlSelfRef.tbench__DOT__o_insn_vld));
        bufp->chgQData(oldp+21,(vlSelfRef.tbench__DOT__driverUnit__DOT__counter),64);
        bufp->chgIData(oldp+23,(((IData)(vlSelfRef.tbench__DOT__o_insn_vld)
                                  ? vlSelfRef.tbench__DOT__singlecycle__DOT__address
                                  : 0U)),32);
        bufp->chgBit(oldp+24,(vlSelfRef.tbench__DOT__scoreboard__DOT__insn_vld));
        bufp->chgIData(oldp+25,(vlSelfRef.tbench__DOT__singlecycle__DOT__pc_four),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tbench__DOT__singlecycle__DOT__data1),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tbench__DOT__singlecycle__DOT__data2),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tbench__DOT__singlecycle__DOT__dataimm),32);
        bufp->chgBit(oldp+29,(vlSelfRef.tbench__DOT__singlecycle__DOT__rd_wren));
        bufp->chgBit(oldp+30,(vlSelfRef.tbench__DOT__singlecycle__DOT__op_asel));
        bufp->chgBit(oldp+31,(vlSelfRef.tbench__DOT__singlecycle__DOT__op_bsel));
        bufp->chgBit(oldp+32,(vlSelfRef.tbench__DOT__singlecycle__DOT__br_uns));
        bufp->chgBit(oldp+33,(vlSelfRef.tbench__DOT__singlecycle__DOT__less));
        bufp->chgBit(oldp+34,(vlSelfRef.tbench__DOT__singlecycle__DOT__equal));
        bufp->chgBit(oldp+35,(vlSelfRef.tbench__DOT__singlecycle__DOT__mem_wren));
        bufp->chgBit(oldp+36,(vlSelfRef.tbench__DOT__singlecycle__DOT__mem_rden));
        bufp->chgBit(oldp+37,(vlSelfRef.tbench__DOT__singlecycle__DOT__pcsel));
        bufp->chgCData(oldp+38,(vlSelfRef.tbench__DOT__singlecycle__DOT__op),4);
        bufp->chgCData(oldp+39,(vlSelfRef.tbench__DOT__singlecycle__DOT__imm_sel),3);
        bufp->chgCData(oldp+40,(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel),3);
        bufp->chgCData(oldp+41,(vlSelfRef.tbench__DOT__singlecycle__DOT__wb_sel),2);
        bufp->chgCData(oldp+42,(vlSelfRef.tbench__DOT__singlecycle__DOT__s_sel),2);
        bufp->chgCData(oldp+43,(vlSelfRef.tbench__DOT__singlecycle__DOT__rs1_addr),5);
        bufp->chgCData(oldp+44,(vlSelfRef.tbench__DOT__singlecycle__DOT__rs2_addr),5);
        bufp->chgCData(oldp+45,(vlSelfRef.tbench__DOT__singlecycle__DOT__rd_addr),5);
        bufp->chgIData(oldp+46,(vlSelfRef.tbench__DOT__singlecycle__DOT__Instrmem__DOT__mem
                                [(0x1fffU & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                             >> 2U))]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b),32);
        bufp->chgIData(oldp+48,(((0x80000000U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                                 & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA30__Cout) 
                                                    << 0x1fU))) 
                                 | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA30__Cout) 
                                     << 0x1eU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA29__Cout) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA28__Cout) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA27__Cout) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA26__Cout) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA25__Cout) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA24__Cout) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA23__Cout) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA22__Cout) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA21__Cout) 
                                                                           << 0x15U) 
                                                                          | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA20__Cout) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA19__Cout) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA18__Cout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA17__Cout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA16__Cout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA15__Cout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA14__Cout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA13__Cout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA12__Cout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA11__Cout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA10__Cout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA9__Cout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA8__Cout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA7__Cout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA6__Cout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA5__Cout) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA4__Cout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA3__Cout) 
                                                                                << 3U) 
                                                                                | (4U 
                                                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__address))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+49,((1U & vlSelfRef.tbench__DOT__singlecycle__DOT__address)));
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 1U))));
        bufp->chgBit(oldp+51,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0xaU))));
        bufp->chgBit(oldp+52,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA9__Cout));
        bufp->chgBit(oldp+53,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0xaU) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA9__Cout)))));
        bufp->chgBit(oldp+54,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA10__Cout));
        bufp->chgBit(oldp+55,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0xbU))));
        bufp->chgBit(oldp+56,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0xbU) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA10__Cout)))));
        bufp->chgBit(oldp+57,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA11__Cout));
        bufp->chgBit(oldp+58,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0xcU))));
        bufp->chgBit(oldp+59,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0xcU) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA11__Cout)))));
        bufp->chgBit(oldp+60,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA12__Cout));
        bufp->chgBit(oldp+61,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0xdU))));
        bufp->chgBit(oldp+62,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0xdU) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA12__Cout)))));
        bufp->chgBit(oldp+63,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA13__Cout));
        bufp->chgBit(oldp+64,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0xeU))));
        bufp->chgBit(oldp+65,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0xeU) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA13__Cout)))));
        bufp->chgBit(oldp+66,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA14__Cout));
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0xfU))));
        bufp->chgBit(oldp+68,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0xfU) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA14__Cout)))));
        bufp->chgBit(oldp+69,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA15__Cout));
        bufp->chgBit(oldp+70,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0x10U))));
        bufp->chgBit(oldp+71,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x10U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA15__Cout)))));
        bufp->chgBit(oldp+72,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA16__Cout));
        bufp->chgBit(oldp+73,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0x11U))));
        bufp->chgBit(oldp+74,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x11U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA16__Cout)))));
        bufp->chgBit(oldp+75,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA17__Cout));
        bufp->chgBit(oldp+76,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0x12U))));
        bufp->chgBit(oldp+77,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x12U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA17__Cout)))));
        bufp->chgBit(oldp+78,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA18__Cout));
        bufp->chgBit(oldp+79,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0x13U))));
        bufp->chgBit(oldp+80,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x13U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA18__Cout)))));
        bufp->chgBit(oldp+81,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA19__Cout));
        bufp->chgBit(oldp+82,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 2U))));
        bufp->chgBit(oldp+83,((1U & (~ (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                        >> 2U)))));
        bufp->chgBit(oldp+84,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0x14U))));
        bufp->chgBit(oldp+85,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x14U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA19__Cout)))));
        bufp->chgBit(oldp+86,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA20__Cout));
        bufp->chgBit(oldp+87,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0x15U))));
        bufp->chgBit(oldp+88,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x15U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA20__Cout)))));
        bufp->chgBit(oldp+89,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA21__Cout));
        bufp->chgBit(oldp+90,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0x16U))));
        bufp->chgBit(oldp+91,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x16U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA21__Cout)))));
        bufp->chgBit(oldp+92,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA22__Cout));
        bufp->chgBit(oldp+93,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0x17U))));
        bufp->chgBit(oldp+94,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x17U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA22__Cout)))));
        bufp->chgBit(oldp+95,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA23__Cout));
        bufp->chgBit(oldp+96,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0x18U))));
        bufp->chgBit(oldp+97,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x18U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA23__Cout)))));
        bufp->chgBit(oldp+98,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA24__Cout));
        bufp->chgBit(oldp+99,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                     >> 0x19U))));
        bufp->chgBit(oldp+100,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                       >> 0x19U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA24__Cout)))));
        bufp->chgBit(oldp+101,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA25__Cout));
        bufp->chgBit(oldp+102,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+103,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                       >> 0x1aU) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA25__Cout)))));
        bufp->chgBit(oldp+104,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA26__Cout));
        bufp->chgBit(oldp+105,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+106,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                       >> 0x1bU) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA26__Cout)))));
        bufp->chgBit(oldp+107,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA27__Cout));
        bufp->chgBit(oldp+108,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+109,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                       >> 0x1cU) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA27__Cout)))));
        bufp->chgBit(oldp+110,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA28__Cout));
        bufp->chgBit(oldp+111,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+112,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                       >> 0x1dU) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA28__Cout)))));
        bufp->chgBit(oldp+113,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA29__Cout));
        bufp->chgBit(oldp+114,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 3U))));
        bufp->chgBit(oldp+115,((1U & VL_REDXOR_4((0xcU 
                                                  & vlSelfRef.tbench__DOT__singlecycle__DOT__address)))));
        bufp->chgBit(oldp+116,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA3__Cout));
        bufp->chgBit(oldp+117,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+118,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                       >> 0x1eU) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA29__Cout)))));
        bufp->chgBit(oldp+119,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA30__Cout));
        bufp->chgBit(oldp+120,((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                >> 0x1fU)));
        bufp->chgBit(oldp+121,(((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                 >> 0x1fU) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA30__Cout))));
        bufp->chgBit(oldp+122,(((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                 >> 0x1fU) & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA30__Cout))));
        bufp->chgBit(oldp+123,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 4U))));
        bufp->chgBit(oldp+124,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                       >> 4U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA3__Cout)))));
        bufp->chgBit(oldp+125,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA4__Cout));
        bufp->chgBit(oldp+126,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 5U))));
        bufp->chgBit(oldp+127,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                       >> 5U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA4__Cout)))));
        bufp->chgBit(oldp+128,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA5__Cout));
        bufp->chgBit(oldp+129,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 6U))));
        bufp->chgBit(oldp+130,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                       >> 6U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA5__Cout)))));
        bufp->chgBit(oldp+131,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA6__Cout));
        bufp->chgBit(oldp+132,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 7U))));
        bufp->chgBit(oldp+133,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                       >> 7U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA6__Cout)))));
        bufp->chgBit(oldp+134,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA7__Cout));
        bufp->chgBit(oldp+135,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 8U))));
        bufp->chgBit(oldp+136,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                       >> 8U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA7__Cout)))));
        bufp->chgBit(oldp+137,(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA8__Cout));
        bufp->chgBit(oldp+138,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                      >> 9U))));
        bufp->chgBit(oldp+139,((1U & ((vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                       >> 9U) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__Counter__DOT____Vcellout__FA8__Cout)))));
        bufp->chgSData(oldp+140,((0x1fffU & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                             >> 2U))),13);
        bufp->chgBit(oldp+141,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__add_check));
        bufp->chgBit(oldp+142,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sub_check));
        bufp->chgBit(oldp+143,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check));
        bufp->chgCData(oldp+144,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sel),2);
        bufp->chgIData(oldp+145,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B),32);
        bufp->chgBit(oldp+146,((1U & vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B)));
        bufp->chgBit(oldp+147,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 1U))));
        bufp->chgBit(oldp+148,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0xaU))));
        bufp->chgBit(oldp+149,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0xbU))));
        bufp->chgBit(oldp+150,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0xcU))));
        bufp->chgBit(oldp+151,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0xdU))));
        bufp->chgBit(oldp+152,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0xeU))));
        bufp->chgBit(oldp+153,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0xfU))));
        bufp->chgBit(oldp+154,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x10U))));
        bufp->chgBit(oldp+155,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x11U))));
        bufp->chgBit(oldp+156,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x12U))));
        bufp->chgBit(oldp+157,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x13U))));
        bufp->chgBit(oldp+158,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 2U))));
        bufp->chgBit(oldp+159,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x14U))));
        bufp->chgBit(oldp+160,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x15U))));
        bufp->chgBit(oldp+161,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x16U))));
        bufp->chgBit(oldp+162,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x17U))));
        bufp->chgBit(oldp+163,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x18U))));
        bufp->chgBit(oldp+164,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x19U))));
        bufp->chgBit(oldp+165,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+166,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+167,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+168,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+169,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 3U))));
        bufp->chgBit(oldp+170,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+171,((vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                >> 0x1fU)));
        bufp->chgBit(oldp+172,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 4U))));
        bufp->chgBit(oldp+173,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 5U))));
        bufp->chgBit(oldp+174,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 6U))));
        bufp->chgBit(oldp+175,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 7U))));
        bufp->chgBit(oldp+176,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 8U))));
        bufp->chgBit(oldp+177,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                      >> 9U))));
        bufp->chgIData(oldp+178,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b
                                   : 0U)),32);
        bufp->chgCData(oldp+179,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)
                                   : 0U)),4);
        bufp->chgCData(oldp+180,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b
                                              : 0U)))),4);
        bufp->chgCData(oldp+181,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                              >> 4U))
                                   : 0U)),4);
        bufp->chgCData(oldp+182,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                 >> 4U)
                                              : 0U)))),4);
        bufp->chgCData(oldp+183,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                              >> 8U))
                                   : 0U)),4);
        bufp->chgCData(oldp+184,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                 >> 8U)
                                              : 0U)))),4);
        bufp->chgCData(oldp+185,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                              >> 0xcU))
                                   : 0U)),4);
        bufp->chgCData(oldp+186,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                 >> 0xcU)
                                              : 0U)))),4);
        bufp->chgCData(oldp+187,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                              >> 0x10U))
                                   : 0U)),4);
        bufp->chgCData(oldp+188,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                 >> 0x10U)
                                              : 0U)))),4);
        bufp->chgCData(oldp+189,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                              >> 0x14U))
                                   : 0U)),4);
        bufp->chgCData(oldp+190,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                 >> 0x14U)
                                              : 0U)))),4);
        bufp->chgCData(oldp+191,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                              >> 0x18U))
                                   : 0U)),4);
        bufp->chgCData(oldp+192,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                 >> 0x18U)
                                              : 0U)))),4);
        bufp->chgCData(oldp+193,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                      >> 0x1cU) : 0U)),4);
        bufp->chgCData(oldp+194,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                 >> 0x1cU)
                                              : 0U)))),4);
        bufp->chgCData(oldp+195,((0x1fU & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)),5);
        bufp->chgIData(oldp+196,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A),32);
        bufp->chgIData(oldp+197,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B),32);
        bufp->chgIData(oldp+198,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_sub),32);
        bufp->chgBit(oldp+199,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check));
        bufp->chgBit(oldp+200,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check));
        bufp->chgBit(oldp+201,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__Y_temp)
                                 ? (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Y)
                                 : (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__Y_temp))));
        bufp->chgBit(oldp+202,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__Y_temp)
                                 ? (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Z)
                                 : (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                           ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 0x1cU)
                                           : 0U) >> 3U)) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                    | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                 >> 0x1cU)
                                              : 0U) 
                                            >> 2U)) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3)) 
                                           & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                       | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                 ? 
                                                (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                 >> 0x1cU)
                                                 : 0U) 
                                               >> 1U)) 
                                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5) 
                                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                          | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                  ? 
                                                 (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                  >> 0x1cU)
                                                  : 0U)) 
                                             & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3)) 
                                                & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7) 
                                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T2)) 
                                                      & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T1))))))))))));
        bufp->chgIData(oldp+203,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A
                                   : 0U)),32);
        bufp->chgIData(oldp+204,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B
                                   : 0U)),32);
        bufp->chgCData(oldp+205,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C1__X) 
                                   << 6U) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__X) 
                                              << 5U) 
                                             | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__X) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__X) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__X) 
                                                       << 2U) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__X) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__X)))))))),7);
        bufp->chgCData(oldp+206,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__Y_temp) 
                                   << 6U) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__Y) 
                                              << 5U) 
                                             | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__Y) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__Y) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__Y) 
                                                       << 2U) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__Y) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Y)))))))),7);
        bufp->chgCData(oldp+207,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C1__Z) 
                                   << 6U) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__Z) 
                                              << 5U) 
                                             | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__Z) 
                                                 << 4U) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__Z) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__Z) 
                                                       << 2U) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__Z) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Z)))))))),7);
        bufp->chgBit(oldp+208,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__Y_temp)
                                 ? (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__X)
                                 : ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
                                      & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                         >> 0x1fU)) 
                                     & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                             ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                >> 0x1cU)
                                             : 0U) 
                                           >> 3U))) 
                                    | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
                                         & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                            >> 0x1eU)) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3)) 
                                           & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                   >> 0x1cU)
                                                   : 0U) 
                                                 >> 2U)))) 
                                       | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
                                            & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                               >> 0x1dU)) 
                                           & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                    ? 
                                                   (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                    >> 0x1cU)
                                                    : 0U) 
                                                  >> 1U)) 
                                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                          | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
                                              & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                 >> 0x1cU)) 
                                             & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3)) 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                      ? 
                                                     (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                      >> 0x1cU)
                                                      : 0U)) 
                                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T2)) 
                                                      & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T1))))))))))));
        bufp->chgCData(oldp+209,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A)
                                   : 0U)),4);
        bufp->chgCData(oldp+210,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B)
                                   : 0U)),4);
        bufp->chgBit(oldp+211,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C1__X));
        bufp->chgBit(oldp+212,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__Y_temp));
        bufp->chgBit(oldp+213,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C1__Z));
        bufp->chgCData(oldp+214,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A
                                              : 0U)))),4);
        bufp->chgCData(oldp+215,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B
                                              : 0U)))),4);
        bufp->chgBit(oldp+216,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3));
        bufp->chgBit(oldp+217,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T2));
        bufp->chgBit(oldp+218,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T1));
        bufp->chgBit(oldp+219,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+220,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3)))));
        bufp->chgBit(oldp+221,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T2)))));
        bufp->chgBit(oldp+222,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T1)))));
        bufp->chgBit(oldp+223,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+224,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                         ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B)
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_2) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3)) 
                                       & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                               ? (0xfU 
                                                  & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B)
                                               : 0U) 
                                             >> 2U)))) 
                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_4) 
                                       & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                ? (0xfU 
                                                   & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B)
                                                : 0U) 
                                              >> 1U)) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3)) 
                                            & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                    ? 
                                                   (0xfU 
                                                    & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B)
                                                    : 0U)) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+225,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                       ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A)
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                          ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A)
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                             ? (0xfU 
                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A)
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (0xfU 
                                                 & vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A)
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+226,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 4U))
                                   : 0U)),4);
        bufp->chgCData(oldp+227,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                              >> 4U))
                                   : 0U)),4);
        bufp->chgBit(oldp+228,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__X));
        bufp->chgBit(oldp+229,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__Y));
        bufp->chgBit(oldp+230,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C2__Z));
        bufp->chgCData(oldp+231,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                 >> 4U)
                                              : 0U)))),4);
        bufp->chgCData(oldp+232,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                 >> 4U)
                                              : 0U)))),4);
        bufp->chgBit(oldp+233,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3));
        bufp->chgBit(oldp+234,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T2));
        bufp->chgBit(oldp+235,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T1));
        bufp->chgBit(oldp+236,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+237,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3)))));
        bufp->chgBit(oldp+238,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T2)))));
        bufp->chgBit(oldp+239,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T1)))));
        bufp->chgBit(oldp+240,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+241,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                         ? (0xfU & 
                                            (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                             >> 4U))
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_2) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3)) 
                                       & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                               ? (0xfU 
                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                     >> 4U))
                                               : 0U) 
                                             >> 2U)))) 
                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_4) 
                                       & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                ? (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                      >> 4U))
                                                : 0U) 
                                              >> 1U)) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3)) 
                                            & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                    ? 
                                                   (0xfU 
                                                    & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                       >> 4U))
                                                    : 0U)) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+242,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__Y_temp));
        bufp->chgBit(oldp+243,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                       ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                  >> 4U))
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                          ? (0xfU & 
                                             (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 4U))
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                             ? (0xfU 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                   >> 4U))
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                    >> 4U))
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+244,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 8U))
                                   : 0U)),4);
        bufp->chgCData(oldp+245,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                              >> 8U))
                                   : 0U)),4);
        bufp->chgBit(oldp+246,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__X));
        bufp->chgBit(oldp+247,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__Y));
        bufp->chgBit(oldp+248,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C3__Z));
        bufp->chgCData(oldp+249,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                 >> 8U)
                                              : 0U)))),4);
        bufp->chgCData(oldp+250,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                 >> 8U)
                                              : 0U)))),4);
        bufp->chgBit(oldp+251,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3));
        bufp->chgBit(oldp+252,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T2));
        bufp->chgBit(oldp+253,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T1));
        bufp->chgBit(oldp+254,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+255,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3)))));
        bufp->chgBit(oldp+256,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T2)))));
        bufp->chgBit(oldp+257,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T1)))));
        bufp->chgBit(oldp+258,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+259,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                         ? (0xfU & 
                                            (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                             >> 8U))
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_2) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3)) 
                                       & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                               ? (0xfU 
                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                     >> 8U))
                                               : 0U) 
                                             >> 2U)))) 
                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_4) 
                                       & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                ? (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                      >> 8U))
                                                : 0U) 
                                              >> 1U)) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3)) 
                                            & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                    ? 
                                                   (0xfU 
                                                    & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                       >> 8U))
                                                    : 0U)) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+260,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__Y_temp));
        bufp->chgBit(oldp+261,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                       ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                  >> 8U))
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                          ? (0xfU & 
                                             (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 8U))
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                             ? (0xfU 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                   >> 8U))
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                    >> 8U))
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+262,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 0xcU))
                                   : 0U)),4);
        bufp->chgCData(oldp+263,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                              >> 0xcU))
                                   : 0U)),4);
        bufp->chgBit(oldp+264,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__X));
        bufp->chgBit(oldp+265,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__Y));
        bufp->chgBit(oldp+266,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C4__Z));
        bufp->chgCData(oldp+267,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                 >> 0xcU)
                                              : 0U)))),4);
        bufp->chgCData(oldp+268,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                 >> 0xcU)
                                              : 0U)))),4);
        bufp->chgBit(oldp+269,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T3));
        bufp->chgBit(oldp+270,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T2));
        bufp->chgBit(oldp+271,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T1));
        bufp->chgBit(oldp+272,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_6) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+273,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T3)))));
        bufp->chgBit(oldp+274,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T2)))));
        bufp->chgBit(oldp+275,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T1)))));
        bufp->chgBit(oldp+276,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+277,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                         ? (0xfU & 
                                            (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                             >> 0xcU))
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_2) 
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
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+278,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__Y_temp));
        bufp->chgBit(oldp+279,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                       ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                  >> 0xcU))
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                          ? (0xfU & 
                                             (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 0xcU))
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                             ? (0xfU 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                   >> 0xcU))
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                    >> 0xcU))
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+280,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 0x10U))
                                   : 0U)),4);
        bufp->chgCData(oldp+281,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                              >> 0x10U))
                                   : 0U)),4);
        bufp->chgBit(oldp+282,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__X));
        bufp->chgBit(oldp+283,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__Y));
        bufp->chgBit(oldp+284,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C5__Z));
        bufp->chgCData(oldp+285,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                 >> 0x10U)
                                              : 0U)))),4);
        bufp->chgCData(oldp+286,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                 >> 0x10U)
                                              : 0U)))),4);
        bufp->chgBit(oldp+287,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T3));
        bufp->chgBit(oldp+288,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T2));
        bufp->chgBit(oldp+289,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T1));
        bufp->chgBit(oldp+290,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_6) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+291,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T3)))));
        bufp->chgBit(oldp+292,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T2)))));
        bufp->chgBit(oldp+293,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T1)))));
        bufp->chgBit(oldp+294,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+295,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                         ? (0xfU & 
                                            (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                             >> 0x10U))
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_2) 
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
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+296,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__Y_temp));
        bufp->chgBit(oldp+297,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                       ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                  >> 0x10U))
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                          ? (0xfU & 
                                             (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 0x10U))
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                             ? (0xfU 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                   >> 0x10U))
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                    >> 0x10U))
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+298,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 0x14U))
                                   : 0U)),4);
        bufp->chgCData(oldp+299,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                              >> 0x14U))
                                   : 0U)),4);
        bufp->chgBit(oldp+300,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__X));
        bufp->chgBit(oldp+301,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__Y));
        bufp->chgBit(oldp+302,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C6__Z));
        bufp->chgCData(oldp+303,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                 >> 0x14U)
                                              : 0U)))),4);
        bufp->chgCData(oldp+304,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                 >> 0x14U)
                                              : 0U)))),4);
        bufp->chgBit(oldp+305,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T3));
        bufp->chgBit(oldp+306,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T2));
        bufp->chgBit(oldp+307,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T1));
        bufp->chgBit(oldp+308,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_6) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+309,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T3)))));
        bufp->chgBit(oldp+310,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T2)))));
        bufp->chgBit(oldp+311,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T1)))));
        bufp->chgBit(oldp+312,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+313,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                         ? (0xfU & 
                                            (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                             >> 0x14U))
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_2) 
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
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+314,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__Y_temp));
        bufp->chgBit(oldp+315,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                       ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                  >> 0x14U))
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                          ? (0xfU & 
                                             (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 0x14U))
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                             ? (0xfU 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                   >> 0x14U))
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                    >> 0x14U))
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+316,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 0x18U))
                                   : 0U)),4);
        bufp->chgCData(oldp+317,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                              >> 0x18U))
                                   : 0U)),4);
        bufp->chgBit(oldp+318,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__X));
        bufp->chgBit(oldp+319,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Y));
        bufp->chgBit(oldp+320,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT____Vcellout__C7__Z));
        bufp->chgCData(oldp+321,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                 >> 0x18U)
                                              : 0U)))),4);
        bufp->chgCData(oldp+322,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                 >> 0x18U)
                                              : 0U)))),4);
        bufp->chgBit(oldp+323,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T3));
        bufp->chgBit(oldp+324,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T2));
        bufp->chgBit(oldp+325,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T1));
        bufp->chgBit(oldp+326,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_6) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+327,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T3)))));
        bufp->chgBit(oldp+328,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T2)))));
        bufp->chgBit(oldp+329,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T1)))));
        bufp->chgBit(oldp+330,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+331,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                         ? (0xfU & 
                                            (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                             >> 0x18U))
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_2) 
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
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+332,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__Y_temp));
        bufp->chgBit(oldp+333,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                       ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                  >> 0x18U))
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                          ? (0xfU & 
                                             (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                              >> 0x18U))
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                             ? (0xfU 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                   >> 0x18U))
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                    >> 0x18U))
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+334,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                      >> 0x1cU) : 0U)),4);
        bufp->chgCData(oldp+335,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                   ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                      >> 0x1cU) : 0U)),4);
        bufp->chgCData(oldp+336,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                 >> 0x1cU)
                                              : 0U)))),4);
        bufp->chgCData(oldp+337,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                 >> 0x1cU)
                                              : 0U)))),4);
        bufp->chgBit(oldp+338,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3));
        bufp->chgBit(oldp+339,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T2));
        bufp->chgBit(oldp+340,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T1));
        bufp->chgBit(oldp+341,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                    >> 0x1cU)) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+342,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3)))));
        bufp->chgBit(oldp+343,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T2)))));
        bufp->chgBit(oldp+344,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T1)))));
        bufp->chgBit(oldp+345,((1U & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
                                          & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                             >> 0x1cU)) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+346,(((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                     >> 0x1fU)) & (~ 
                                                   (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                      ? 
                                                     (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                      >> 0x1cU)
                                                      : 0U) 
                                                    >> 3U))) 
                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
                                     & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                        >> 0x1eU)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3)) 
                                       & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                               ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                  >> 0x1cU)
                                               : 0U) 
                                             >> 2U)))) 
                                   | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
                                        & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                           >> 0x1dU)) 
                                       & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                   >> 0x1cU)
                                                : 0U) 
                                              >> 1U)) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check) 
                                          & (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                             >> 0x1cU)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3)) 
                                            & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                                    ? 
                                                   (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B 
                                                    >> 0x1cU)
                                                    : 0U)) 
                                               & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T2)) 
                                                  & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T1)))))))))));
        bufp->chgBit(oldp+347,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__Y_temp));
        bufp->chgBit(oldp+348,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                       ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                          >> 0x1cU)
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                          ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                             >> 0x1cU)
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                             ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                >> 0x1cU)
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A 
                                                 >> 0x1cU)
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T2)) 
                                                  & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp1__DOT__Comp1__DOT__C8__DOT__T1)))))))))));
        bufp->chgIData(oldp+349,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check)
                                   ? vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_A
                                   : 0U)),32);
        bufp->chgIData(oldp+350,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check)
                                   ? (~ vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__reg_B)
                                   : 0U)),32);
        bufp->chgIData(oldp+351,((((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA31__A) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA31__B)) 
                                    | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA31__DOT__X) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA30__Cout))) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA30__Cout) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA29__Cout) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA28__Cout) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA27__Cout) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA26__Cout) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA25__Cout) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA24__Cout) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA23__Cout) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA22__Cout) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA21__Cout) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA20__Cout) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA19__Cout) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA18__Cout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA17__Cout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA16__Cout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA15__Cout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA14__Cout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA13__Cout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA12__Cout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA11__Cout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA10__Cout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA9__Cout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA8__Cout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA7__Cout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA6__Cout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA5__Cout) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA4__Cout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA3__Cout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA2__Cout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA1__Cout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA0__Cout))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+352,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA0__A));
        bufp->chgBit(oldp+353,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA0__B));
        bufp->chgBit(oldp+354,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA0__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__sub_check))));
        bufp->chgBit(oldp+355,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA0__Cout));
        bufp->chgBit(oldp+356,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA0__DOT__X));
        bufp->chgBit(oldp+357,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA1__A));
        bufp->chgBit(oldp+358,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA1__B));
        bufp->chgBit(oldp+359,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA1__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA0__Cout))));
        bufp->chgBit(oldp+360,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA1__Cout));
        bufp->chgBit(oldp+361,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA1__DOT__X));
        bufp->chgBit(oldp+362,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA10__A));
        bufp->chgBit(oldp+363,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA10__B));
        bufp->chgBit(oldp+364,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA9__Cout));
        bufp->chgBit(oldp+365,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA10__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA9__Cout))));
        bufp->chgBit(oldp+366,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA10__Cout));
        bufp->chgBit(oldp+367,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA10__DOT__X));
        bufp->chgBit(oldp+368,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA11__A));
        bufp->chgBit(oldp+369,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA11__B));
        bufp->chgBit(oldp+370,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA11__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA10__Cout))));
        bufp->chgBit(oldp+371,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA11__Cout));
        bufp->chgBit(oldp+372,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA11__DOT__X));
        bufp->chgBit(oldp+373,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA12__A));
        bufp->chgBit(oldp+374,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA12__B));
        bufp->chgBit(oldp+375,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA12__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA11__Cout))));
        bufp->chgBit(oldp+376,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA12__Cout));
        bufp->chgBit(oldp+377,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA12__DOT__X));
        bufp->chgBit(oldp+378,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA13__A));
        bufp->chgBit(oldp+379,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA13__B));
        bufp->chgBit(oldp+380,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA13__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA12__Cout))));
        bufp->chgBit(oldp+381,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA13__Cout));
        bufp->chgBit(oldp+382,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA13__DOT__X));
        bufp->chgBit(oldp+383,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA14__A));
        bufp->chgBit(oldp+384,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA14__B));
        bufp->chgBit(oldp+385,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA14__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA13__Cout))));
        bufp->chgBit(oldp+386,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA14__Cout));
        bufp->chgBit(oldp+387,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA14__DOT__X));
        bufp->chgBit(oldp+388,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA15__A));
        bufp->chgBit(oldp+389,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA15__B));
        bufp->chgBit(oldp+390,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA15__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA14__Cout))));
        bufp->chgBit(oldp+391,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA15__Cout));
        bufp->chgBit(oldp+392,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA15__DOT__X));
        bufp->chgBit(oldp+393,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA16__A));
        bufp->chgBit(oldp+394,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA16__B));
        bufp->chgBit(oldp+395,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA16__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA15__Cout))));
        bufp->chgBit(oldp+396,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA16__Cout));
        bufp->chgBit(oldp+397,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA16__DOT__X));
        bufp->chgBit(oldp+398,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA17__A));
        bufp->chgBit(oldp+399,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA17__B));
        bufp->chgBit(oldp+400,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA17__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA16__Cout))));
        bufp->chgBit(oldp+401,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA17__Cout));
        bufp->chgBit(oldp+402,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA17__DOT__X));
        bufp->chgBit(oldp+403,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA18__A));
        bufp->chgBit(oldp+404,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA18__B));
        bufp->chgBit(oldp+405,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA18__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA17__Cout))));
        bufp->chgBit(oldp+406,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA18__Cout));
        bufp->chgBit(oldp+407,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA18__DOT__X));
        bufp->chgBit(oldp+408,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA19__A));
        bufp->chgBit(oldp+409,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA19__B));
        bufp->chgBit(oldp+410,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA19__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA18__Cout))));
        bufp->chgBit(oldp+411,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA19__Cout));
        bufp->chgBit(oldp+412,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA19__DOT__X));
        bufp->chgBit(oldp+413,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA2__A));
        bufp->chgBit(oldp+414,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA2__B));
        bufp->chgBit(oldp+415,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA2__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA1__Cout))));
        bufp->chgBit(oldp+416,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA2__Cout));
        bufp->chgBit(oldp+417,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA2__DOT__X));
        bufp->chgBit(oldp+418,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA20__A));
        bufp->chgBit(oldp+419,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA20__B));
        bufp->chgBit(oldp+420,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA20__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA19__Cout))));
        bufp->chgBit(oldp+421,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA20__Cout));
        bufp->chgBit(oldp+422,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA20__DOT__X));
        bufp->chgBit(oldp+423,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA21__A));
        bufp->chgBit(oldp+424,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA21__B));
        bufp->chgBit(oldp+425,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA21__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA20__Cout))));
        bufp->chgBit(oldp+426,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA21__Cout));
        bufp->chgBit(oldp+427,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA21__DOT__X));
        bufp->chgBit(oldp+428,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA22__A));
        bufp->chgBit(oldp+429,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA22__B));
        bufp->chgBit(oldp+430,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA22__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA21__Cout))));
        bufp->chgBit(oldp+431,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA22__Cout));
        bufp->chgBit(oldp+432,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA22__DOT__X));
        bufp->chgBit(oldp+433,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA23__A));
        bufp->chgBit(oldp+434,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA23__B));
        bufp->chgBit(oldp+435,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA23__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA22__Cout))));
        bufp->chgBit(oldp+436,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA23__Cout));
        bufp->chgBit(oldp+437,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA23__DOT__X));
        bufp->chgBit(oldp+438,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA24__A));
        bufp->chgBit(oldp+439,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA24__B));
        bufp->chgBit(oldp+440,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA24__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA23__Cout))));
        bufp->chgBit(oldp+441,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA24__Cout));
        bufp->chgBit(oldp+442,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA24__DOT__X));
        bufp->chgBit(oldp+443,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA25__A));
        bufp->chgBit(oldp+444,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA25__B));
        bufp->chgBit(oldp+445,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA25__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA24__Cout))));
        bufp->chgBit(oldp+446,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA25__Cout));
        bufp->chgBit(oldp+447,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA25__DOT__X));
        bufp->chgBit(oldp+448,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA26__A));
        bufp->chgBit(oldp+449,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA26__B));
        bufp->chgBit(oldp+450,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA26__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA25__Cout))));
        bufp->chgBit(oldp+451,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA26__Cout));
        bufp->chgBit(oldp+452,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA26__DOT__X));
        bufp->chgBit(oldp+453,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA27__A));
        bufp->chgBit(oldp+454,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA27__B));
        bufp->chgBit(oldp+455,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA27__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA26__Cout))));
        bufp->chgBit(oldp+456,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA27__Cout));
        bufp->chgBit(oldp+457,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA27__DOT__X));
        bufp->chgBit(oldp+458,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA28__A));
        bufp->chgBit(oldp+459,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA28__B));
        bufp->chgBit(oldp+460,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA28__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA27__Cout))));
        bufp->chgBit(oldp+461,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA28__Cout));
        bufp->chgBit(oldp+462,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA28__DOT__X));
        bufp->chgBit(oldp+463,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA29__A));
        bufp->chgBit(oldp+464,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA29__B));
        bufp->chgBit(oldp+465,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA29__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA28__Cout))));
        bufp->chgBit(oldp+466,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA29__Cout));
        bufp->chgBit(oldp+467,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA29__DOT__X));
        bufp->chgBit(oldp+468,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA3__A));
        bufp->chgBit(oldp+469,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA3__B));
        bufp->chgBit(oldp+470,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA3__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA2__Cout))));
        bufp->chgBit(oldp+471,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA3__Cout));
        bufp->chgBit(oldp+472,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA3__DOT__X));
        bufp->chgBit(oldp+473,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA30__A));
        bufp->chgBit(oldp+474,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA30__B));
        bufp->chgBit(oldp+475,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA30__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA29__Cout))));
        bufp->chgBit(oldp+476,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA30__Cout));
        bufp->chgBit(oldp+477,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA30__DOT__X));
        bufp->chgBit(oldp+478,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA31__A));
        bufp->chgBit(oldp+479,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA31__B));
        bufp->chgBit(oldp+480,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA31__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA30__Cout))));
        bufp->chgBit(oldp+481,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA31__A) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA31__B)) 
                                | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA31__DOT__X) 
                                   & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA30__Cout)))));
        bufp->chgBit(oldp+482,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA31__DOT__X));
        bufp->chgBit(oldp+483,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA4__A));
        bufp->chgBit(oldp+484,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA4__B));
        bufp->chgBit(oldp+485,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA4__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA3__Cout))));
        bufp->chgBit(oldp+486,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA4__Cout));
        bufp->chgBit(oldp+487,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA4__DOT__X));
        bufp->chgBit(oldp+488,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA5__A));
        bufp->chgBit(oldp+489,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA5__B));
        bufp->chgBit(oldp+490,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA5__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA4__Cout))));
        bufp->chgBit(oldp+491,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA5__Cout));
        bufp->chgBit(oldp+492,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA5__DOT__X));
        bufp->chgBit(oldp+493,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA6__A));
        bufp->chgBit(oldp+494,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA6__B));
        bufp->chgBit(oldp+495,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA6__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA5__Cout))));
        bufp->chgBit(oldp+496,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA6__Cout));
        bufp->chgBit(oldp+497,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA6__DOT__X));
        bufp->chgBit(oldp+498,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA7__A));
        bufp->chgBit(oldp+499,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA7__B));
        bufp->chgBit(oldp+500,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA7__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA6__Cout))));
        bufp->chgBit(oldp+501,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA7__Cout));
        bufp->chgBit(oldp+502,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA7__DOT__X));
        bufp->chgBit(oldp+503,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA8__A));
        bufp->chgBit(oldp+504,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA8__B));
        bufp->chgBit(oldp+505,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA8__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA7__Cout))));
        bufp->chgBit(oldp+506,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA8__Cout));
        bufp->chgBit(oldp+507,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA8__DOT__X));
        bufp->chgBit(oldp+508,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA9__A));
        bufp->chgBit(oldp+509,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellinp__FA9__B));
        bufp->chgBit(oldp+510,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA9__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT____Vcellout__FA8__Cout))));
        bufp->chgBit(oldp+511,(vlSelfRef.tbench__DOT__singlecycle__DOT__bru__DOT__Comp2__DOT__FA9__DOT__X));
        bufp->chgCData(oldp+512,(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__code),4);
        bufp->chgCData(oldp+513,(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct3de),3);
        bufp->chgBit(oldp+514,(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__funct7de));
        bufp->chgCData(oldp+515,(vlSelfRef.tbench__DOT__singlecycle__DOT__ctrl__DOT__valid),2);
        bufp->chgCData(oldp+516,((0x1fU & (vlSelfRef.tbench__DOT__singlecycle__DOT__Instrmem__DOT__mem
                                           [(0x1fffU 
                                             & (vlSelfRef.tbench__DOT__singlecycle__DOT__address 
                                                >> 2U))] 
                                           >> 2U))),5);
        bufp->chgIData(oldp+517,(vlSelfRef.tbench__DOT__singlecycle__DOT____Vcellinp__immidate__data),25);
        bufp->chgIData(oldp+518,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_q),32);
        bufp->chgIData(oldp+519,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__dataI),32);
        bufp->chgIData(oldp+520,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__st_data_temp),32);
        bufp->chgBit(oldp+521,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack1));
        bufp->chgBit(oldp+522,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack1)))));
        bufp->chgCData(oldp+523,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q),3);
        bufp->chgIData(oldp+524,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_q),32);
        bufp->chgIData(oldp+525,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__rdata_d),32);
        bufp->chgCData(oldp+526,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_q),4);
        bufp->chgIData(oldp+527,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__i),32);
        bufp->chgIData(oldp+528,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[0]),32);
        bufp->chgIData(oldp+529,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[1]),32);
        bufp->chgIData(oldp+530,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[2]),32);
        bufp->chgIData(oldp+531,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[3]),32);
        bufp->chgIData(oldp+532,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[4]),32);
        bufp->chgIData(oldp+533,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[5]),32);
        bufp->chgIData(oldp+534,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[6]),32);
        bufp->chgIData(oldp+535,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[7]),32);
        bufp->chgIData(oldp+536,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[8]),32);
        bufp->chgIData(oldp+537,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[9]),32);
        bufp->chgIData(oldp+538,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[10]),32);
        bufp->chgIData(oldp+539,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[11]),32);
        bufp->chgIData(oldp+540,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[12]),32);
        bufp->chgIData(oldp+541,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[13]),32);
        bufp->chgIData(oldp+542,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[14]),32);
        bufp->chgIData(oldp+543,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[15]),32);
        bufp->chgIData(oldp+544,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[16]),32);
        bufp->chgIData(oldp+545,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[17]),32);
        bufp->chgIData(oldp+546,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[18]),32);
        bufp->chgIData(oldp+547,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[19]),32);
        bufp->chgIData(oldp+548,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[20]),32);
        bufp->chgIData(oldp+549,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[21]),32);
        bufp->chgIData(oldp+550,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[22]),32);
        bufp->chgIData(oldp+551,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[23]),32);
        bufp->chgIData(oldp+552,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[24]),32);
        bufp->chgIData(oldp+553,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[25]),32);
        bufp->chgIData(oldp+554,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[26]),32);
        bufp->chgIData(oldp+555,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[27]),32);
        bufp->chgIData(oldp+556,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[28]),32);
        bufp->chgIData(oldp+557,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[29]),32);
        bufp->chgIData(oldp+558,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[30]),32);
        bufp->chgIData(oldp+559,(vlSelfRef.tbench__DOT__singlecycle__DOT__registers__DOT__register[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgIData(oldp+560,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8) 
                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1)) 
                                      & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                             & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                >> 0x1cU)) 
                                            ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7)))))
                                   ? (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__Z)
                                   : (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                             ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                >> 0x1cU)
                                             : 0U) 
                                           >> 3U)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                      | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                   >> 0x1cU)
                                                : 0U) 
                                              >> 2U)) 
                                          & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                                             & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                         | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                   >> 0x1cU)
                                                   : 0U) 
                                                 >> 1U)) 
                                             & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5) 
                                                & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                            | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                    ? 
                                                   (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                    >> 0x1cU)
                                                    : 0U)) 
                                               & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                                                  & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7) 
                                                     & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T2)) 
                                                        & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1))))))))))),32);
        bufp->chgBit(oldp+561,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8) 
                                 & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1)) 
                                    & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 0x1cU)) 
                                          ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7)))))
                                 ? ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__Y_temp)
                                     ? (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Y)
                                     : (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__Y_temp))
                                 : ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1)) 
                                       & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                              & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 >> 0x1cU)) 
                                             ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7))))))));
        bufp->chgBit(oldp+562,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8) 
                                 & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1)) 
                                    & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 0x1cU)) 
                                          ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7)))))
                                 ? (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__Z)
                                 : (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                           ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 0x1cU)
                                           : 0U) >> 3U)) 
                                     & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                    | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 >> 0x1cU)
                                              : 0U) 
                                            >> 2U)) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                                           & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                       | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                 ? 
                                                (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 >> 0x1cU)
                                                 : 0U) 
                                               >> 1U)) 
                                           & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5) 
                                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                          | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                  ? 
                                                 (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                  >> 0x1cU)
                                                  : 0U)) 
                                             & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                                                & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7) 
                                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T2)) 
                                                      & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1))))))))))));
        bufp->chgIData(oldp+563,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____VdfgRegularize_h23828683_0_0)
                                   ? vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a
                                   : 0U)),32);
        bufp->chgIData(oldp+564,((((0x80000000U & (
                                                   ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA31__A) 
                                                    << 0x1fU) 
                                                   & vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B)) 
                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA31__DOT__X) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA30__Cout)) 
                                      << 0x1fU)) | 
                                  (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA30__Cout) 
                                    << 0x1eU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA29__Cout) 
                                                  << 0x1dU) 
                                                 | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA28__Cout) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA27__Cout) 
                                                        << 0x1bU) 
                                                       | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA26__Cout) 
                                                           << 0x1aU) 
                                                          | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA25__Cout) 
                                                              << 0x19U) 
                                                             | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA24__Cout) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA23__Cout) 
                                                                    << 0x17U) 
                                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA22__Cout) 
                                                                       << 0x16U) 
                                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA21__Cout) 
                                                                          << 0x15U) 
                                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA20__Cout) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA19__Cout) 
                                                                                << 0x13U) 
                                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA18__Cout) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA17__Cout) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA16__Cout) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA15__Cout) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA14__Cout) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA13__Cout) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA12__Cout) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA11__Cout) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA10__Cout) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA9__Cout) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA8__Cout) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA7__Cout) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA6__Cout) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA5__Cout) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA4__Cout) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA3__Cout) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA2__Cout) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA1__Cout) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA0__Cout))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+565,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA0__DOT__X) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__sub_check))));
        bufp->chgBit(oldp+566,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA31__A) 
                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__reg_B 
                                    >> 0x1fU)) | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA31__DOT__X) 
                                                  & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA30__Cout)))));
        bufp->chgIData(oldp+567,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a
                                   : 0U)),32);
        bufp->chgBit(oldp+568,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8) 
                                 & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1)) 
                                    & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                           & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 0x1cU)) 
                                          ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7)))))
                                 ? (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__X)
                                 : ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                      & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                         >> 0x1fU)) 
                                     & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                             ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                >> 0x1cU)
                                             : 0U) 
                                           >> 3U))) 
                                    | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                         & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                            >> 0x1eU)) 
                                        & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                                           & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                   ? 
                                                  (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1cU)
                                                   : 0U) 
                                                 >> 2U)))) 
                                       | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                            & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                               >> 0x1dU)) 
                                           & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                    ? 
                                                   (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1cU)
                                                    : 0U) 
                                                  >> 1U)) 
                                              & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                          | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                              & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 >> 0x1cU)) 
                                             & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                      ? 
                                                     (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                      >> 0x1cU)
                                                      : 0U)) 
                                                   & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T2)) 
                                                      & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1))))))))))));
        bufp->chgCData(oldp+569,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a)
                                   : 0U)),4);
        bufp->chgCData(oldp+570,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a
                                              : 0U)))),4);
        bufp->chgBit(oldp+571,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                         ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_2) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3)) 
                                       & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                               ? (0xfU 
                                                  & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)
                                               : 0U) 
                                             >> 2U)))) 
                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_4) 
                                       & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                ? (0xfU 
                                                   & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)
                                                : 0U) 
                                              >> 1U)) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3)) 
                                            & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                    ? 
                                                   (0xfU 
                                                    & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b)
                                                    : 0U)) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+572,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                       ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a)
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                          ? (0xfU & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a)
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                             ? (0xfU 
                                                & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a)
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (0xfU 
                                                 & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a)
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+573,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 4U))
                                   : 0U)),4);
        bufp->chgCData(oldp+574,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 >> 4U)
                                              : 0U)))),4);
        bufp->chgBit(oldp+575,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                         ? (0xfU & 
                                            (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                             >> 4U))
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_2) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3)) 
                                       & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                               ? (0xfU 
                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                     >> 4U))
                                               : 0U) 
                                             >> 2U)))) 
                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_4) 
                                       & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                ? (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                      >> 4U))
                                                : 0U) 
                                              >> 1U)) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3)) 
                                            & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                    ? 
                                                   (0xfU 
                                                    & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                       >> 4U))
                                                    : 0U)) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+576,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                       ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                  >> 4U))
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                          ? (0xfU & 
                                             (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 4U))
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                             ? (0xfU 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                   >> 4U))
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                    >> 4U))
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+577,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 8U))
                                   : 0U)),4);
        bufp->chgCData(oldp+578,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 >> 8U)
                                              : 0U)))),4);
        bufp->chgBit(oldp+579,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+580,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+581,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                         ? (0xfU & 
                                            (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                             >> 8U))
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_2) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3)) 
                                       & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                               ? (0xfU 
                                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                     >> 8U))
                                               : 0U) 
                                             >> 2U)))) 
                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_4) 
                                       & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                ? (0xfU 
                                                   & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                      >> 8U))
                                                : 0U) 
                                              >> 1U)) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3)) 
                                            & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                    ? 
                                                   (0xfU 
                                                    & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                       >> 8U))
                                                    : 0U)) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+582,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                       ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                  >> 8U))
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                          ? (0xfU & 
                                             (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 8U))
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                             ? (0xfU 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                   >> 8U))
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                    >> 8U))
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+583,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 0xcU))
                                   : 0U)),4);
        bufp->chgCData(oldp+584,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 >> 0xcU)
                                              : 0U)))),4);
        bufp->chgBit(oldp+585,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_6) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+586,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+587,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                         ? (0xfU & 
                                            (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                             >> 0xcU))
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_2) 
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
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+588,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                       ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                  >> 0xcU))
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                          ? (0xfU & 
                                             (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 0xcU))
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                             ? (0xfU 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                   >> 0xcU))
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                    >> 0xcU))
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+589,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 0x10U))
                                   : 0U)),4);
        bufp->chgCData(oldp+590,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 >> 0x10U)
                                              : 0U)))),4);
        bufp->chgBit(oldp+591,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_6) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+592,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+593,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                         ? (0xfU & 
                                            (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                             >> 0x10U))
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_2) 
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
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+594,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                       ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                  >> 0x10U))
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                          ? (0xfU & 
                                             (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 0x10U))
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                             ? (0xfU 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                   >> 0x10U))
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                    >> 0x10U))
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+595,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 0x14U))
                                   : 0U)),4);
        bufp->chgCData(oldp+596,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 >> 0x14U)
                                              : 0U)))),4);
        bufp->chgBit(oldp+597,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_6) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+598,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+599,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                         ? (0xfU & 
                                            (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                             >> 0x14U))
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_2) 
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
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+600,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                       ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                  >> 0x14U))
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                          ? (0xfU & 
                                             (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 0x14U))
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                             ? (0xfU 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                   >> 0x14U))
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                    >> 0x14U))
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+601,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 0x18U))
                                   : 0U)),4);
        bufp->chgCData(oldp+602,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 >> 0x18U)
                                              : 0U)))),4);
        bufp->chgBit(oldp+603,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_6) 
                                ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+604,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_6) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+605,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_0) 
                                 & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                         ? (0xfU & 
                                            (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                             >> 0x18U))
                                         : 0U) >> 3U))) 
                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_2) 
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
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgBit(oldp+606,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                       ? (0xfU & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                  >> 0x18U))
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                          ? (0xfU & 
                                             (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                              >> 0x18U))
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                             ? (0xfU 
                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                   >> 0x18U))
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (0xfU 
                                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                    >> 0x18U))
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT____VdfgRegularize_h8330aaba_0_9)))))))));
        bufp->chgCData(oldp+607,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                   ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                      >> 0x1cU) : 0U)),4);
        bufp->chgCData(oldp+608,((0xfU & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 >> 0x1cU)
                                              : 0U)))),4);
        bufp->chgBit(oldp+609,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                 & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                    >> 0x1cU)) ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+610,((1U & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                          & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                             >> 0x1cU)) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+611,(((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                  & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                     >> 0x1fU)) & (~ 
                                                   (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                      ? 
                                                     (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                      >> 0x1cU)
                                                      : 0U) 
                                                    >> 3U))) 
                                | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                     & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                        >> 0x1eU)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                                       & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                               ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                  >> 0x1cU)
                                               : 0U) 
                                             >> 2U)))) 
                                   | ((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                        & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                           >> 0x1dU)) 
                                       & ((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                   >> 0x1cU)
                                                : 0U) 
                                              >> 1U)) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                          & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                             >> 0x1cU)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                                            & ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                                    ? 
                                                   (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_b 
                                                    >> 0x1cU)
                                                    : 0U)) 
                                               & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T2)) 
                                                  & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1)))))))))));
        bufp->chgBit(oldp+612,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8) 
                                & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1)) 
                                   & (~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check) 
                                          & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                             >> 0x1cU)) 
                                         ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7)))))));
        bufp->chgBit(oldp+613,((((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                       ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                          >> 0x1cU)
                                       : 0U) >> 3U)) 
                                 & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_1)) 
                                | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                          ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                             >> 0x1cU)
                                          : 0U) >> 2U)) 
                                    & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                                       & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_3))) 
                                   | (((~ (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                             ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                >> 0x1cU)
                                             : 0U) 
                                           >> 1U)) 
                                       & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_5) 
                                          & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_8))) 
                                      | ((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__comp_check)
                                              ? (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                                 >> 0x1cU)
                                              : 0U)) 
                                         & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)) 
                                            & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT____VdfgRegularize_h8330aaba_0_7) 
                                               & ((~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T2)) 
                                                  & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1)))))))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [8U]))) {
        bufp->chgIData(oldp+614,(((0U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__wb_sel))
                                   ? vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data
                                   : ((1U == (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__wb_sel))
                                       ? ((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel))
                                           ? ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel))
                                               ? vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp
                                               : ((1U 
                                                   & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel))
                                                   ? vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp
                                                   : 
                                                  (0xffffU 
                                                   & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp)))
                                           : ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel))
                                                   ? 
                                                  (0xffU 
                                                   & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp)
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp))
                                                   : vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp)))
                                       : vlSelfRef.tbench__DOT__singlecycle__DOT__pc_four))),32);
        bufp->chgIData(oldp+615,(((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel))
                                   ? ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel))
                                       ? vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp
                                       : ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel))
                                           ? vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp
                                           : (0xffffU 
                                              & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp)))
                                   : ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel))
                                       ? ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel))
                                           ? (0xffU 
                                              & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp)
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp)))
                                       : ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__l_sel))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp))
                                           : vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp)))),32);
        bufp->chgBit(oldp+616,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack1) 
                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack2))));
        bufp->chgBit(oldp+617,(((~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack1) 
                                    | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack2))) 
                                & ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__mem_rden) 
                                   | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__mem_wren)))));
        bufp->chgIData(oldp+618,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__OUT__DOT__outmem
                                 [(0x3fU & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data)]),32);
        bufp->chgIData(oldp+619,(((4U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))
                                   ? ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))
                                       ? ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))
                                           ? (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_WREN) 
                                               ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_RDEN))
                                               ? (0x3fffeU 
                                                  & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data)
                                               : vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q)
                                           : vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q)
                                       : ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))
                                           ? vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q
                                           : (1U | vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q)))
                                   : ((2U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))
                                       ? ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))
                                           ? vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q
                                           : (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_WREN) 
                                               ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_RDEN))
                                               ? (0x3fffeU 
                                                  & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data)
                                               : vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q))
                                       : ((1U & (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_q))
                                           ? (1U | vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q)
                                           : (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_WREN) 
                                               ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_RDEN))
                                               ? (0x3fffeU 
                                                  & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data)
                                               : vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__addr_q))))),18);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+620,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_31__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_30__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_29__out) 
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
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_00__out))))))))))))))))))))))))))))))))),32);
        bufp->chgIData(oldp+621,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_31__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_30__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_29__out) 
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
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_00__out))))))))))))))))))))))))))))))))),32);
        bufp->chgIData(oldp+622,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_31__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_30__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_29__out) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_28__out) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_27__out) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_26__out) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_25__out) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_24__out) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_23__out) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_22__out) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_21__out) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_20__out) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_19__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_18__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_17__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_16__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_15__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_14__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_13__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_12__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_11__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_10__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_09__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_08__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_07__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_06__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_05__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_04__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_03__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_02__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_01__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_00__out))))))))))))))))))))))))))))))))),32);
        bufp->chgIData(oldp+623,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_00__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_01__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_02__out) 
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
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_31__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+624,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_00__out));
        bufp->chgBit(oldp+625,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_01__out));
        bufp->chgBit(oldp+626,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_02__out));
        bufp->chgBit(oldp+627,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_03__out));
        bufp->chgBit(oldp+628,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_04__out));
        bufp->chgBit(oldp+629,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_05__out));
        bufp->chgBit(oldp+630,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_06__out));
        bufp->chgBit(oldp+631,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_07__out));
        bufp->chgBit(oldp+632,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_08__out));
        bufp->chgBit(oldp+633,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_09__out));
        bufp->chgBit(oldp+634,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_10__out));
        bufp->chgBit(oldp+635,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_11__out));
        bufp->chgBit(oldp+636,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_12__out));
        bufp->chgBit(oldp+637,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_13__out));
        bufp->chgBit(oldp+638,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_14__out));
        bufp->chgBit(oldp+639,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_15__out));
        bufp->chgBit(oldp+640,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_16__out));
        bufp->chgBit(oldp+641,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_17__out));
        bufp->chgBit(oldp+642,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_18__out));
        bufp->chgBit(oldp+643,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_19__out));
        bufp->chgBit(oldp+644,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_20__out));
        bufp->chgBit(oldp+645,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_21__out));
        bufp->chgBit(oldp+646,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_22__out));
        bufp->chgBit(oldp+647,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_23__out));
        bufp->chgBit(oldp+648,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_24__out));
        bufp->chgBit(oldp+649,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_25__out));
        bufp->chgBit(oldp+650,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_26__out));
        bufp->chgBit(oldp+651,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_27__out));
        bufp->chgBit(oldp+652,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_28__out));
        bufp->chgBit(oldp+653,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_29__out));
        bufp->chgBit(oldp+654,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_30__out));
        bufp->chgBit(oldp+655,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_31__out));
        bufp->chgBit(oldp+656,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_00__out));
        bufp->chgBit(oldp+657,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_01__out));
        bufp->chgBit(oldp+658,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_02__out));
        bufp->chgBit(oldp+659,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_03__out));
        bufp->chgBit(oldp+660,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_04__out));
        bufp->chgBit(oldp+661,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_05__out));
        bufp->chgBit(oldp+662,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_06__out));
        bufp->chgBit(oldp+663,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_07__out));
        bufp->chgBit(oldp+664,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_08__out));
        bufp->chgBit(oldp+665,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_09__out));
        bufp->chgBit(oldp+666,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_10__out));
        bufp->chgBit(oldp+667,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_11__out));
        bufp->chgBit(oldp+668,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_12__out));
        bufp->chgBit(oldp+669,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_13__out));
        bufp->chgBit(oldp+670,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_14__out));
        bufp->chgBit(oldp+671,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_15__out));
        bufp->chgBit(oldp+672,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_16__out));
        bufp->chgBit(oldp+673,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_17__out));
        bufp->chgBit(oldp+674,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_18__out));
        bufp->chgBit(oldp+675,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_19__out));
        bufp->chgBit(oldp+676,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_20__out));
        bufp->chgBit(oldp+677,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_21__out));
        bufp->chgBit(oldp+678,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_22__out));
        bufp->chgBit(oldp+679,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_23__out));
        bufp->chgBit(oldp+680,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_24__out));
        bufp->chgBit(oldp+681,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_25__out));
        bufp->chgBit(oldp+682,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_26__out));
        bufp->chgBit(oldp+683,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_27__out));
        bufp->chgBit(oldp+684,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_28__out));
        bufp->chgBit(oldp+685,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_29__out));
        bufp->chgBit(oldp+686,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_30__out));
        bufp->chgBit(oldp+687,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_31__out));
        bufp->chgBit(oldp+688,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_00__out));
        bufp->chgBit(oldp+689,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_01__out));
        bufp->chgBit(oldp+690,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_02__out));
        bufp->chgBit(oldp+691,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_03__out));
        bufp->chgBit(oldp+692,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_04__out));
        bufp->chgBit(oldp+693,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_05__out));
        bufp->chgBit(oldp+694,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_06__out));
        bufp->chgBit(oldp+695,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_07__out));
        bufp->chgBit(oldp+696,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_08__out));
        bufp->chgBit(oldp+697,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_09__out));
        bufp->chgBit(oldp+698,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_10__out));
        bufp->chgBit(oldp+699,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_11__out));
        bufp->chgBit(oldp+700,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_12__out));
        bufp->chgBit(oldp+701,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_13__out));
        bufp->chgBit(oldp+702,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_14__out));
        bufp->chgBit(oldp+703,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_15__out));
        bufp->chgBit(oldp+704,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_16__out));
        bufp->chgBit(oldp+705,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_17__out));
        bufp->chgBit(oldp+706,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_18__out));
        bufp->chgBit(oldp+707,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_19__out));
        bufp->chgBit(oldp+708,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_20__out));
        bufp->chgBit(oldp+709,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_21__out));
        bufp->chgBit(oldp+710,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_22__out));
        bufp->chgBit(oldp+711,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_23__out));
        bufp->chgBit(oldp+712,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_24__out));
        bufp->chgBit(oldp+713,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_25__out));
        bufp->chgBit(oldp+714,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_26__out));
        bufp->chgBit(oldp+715,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_27__out));
        bufp->chgBit(oldp+716,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_28__out));
        bufp->chgBit(oldp+717,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_29__out));
        bufp->chgBit(oldp+718,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_30__out));
        bufp->chgBit(oldp+719,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_31__out));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+720,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_63__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_62__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_61__out) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_60__out) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_59__out) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_58__out) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_57__out) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_56__out) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_55__out) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_54__out) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_53__out) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_52__out) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_51__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_50__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_49__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_48__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_47__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_46__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_45__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_44__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_43__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_42__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_41__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_40__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_39__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_38__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_37__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_36__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_35__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_34__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_33__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_32__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+721,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_32__out));
        bufp->chgBit(oldp+722,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_33__out));
        bufp->chgBit(oldp+723,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_34__out));
        bufp->chgBit(oldp+724,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_35__out));
        bufp->chgBit(oldp+725,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_36__out));
        bufp->chgBit(oldp+726,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_37__out));
        bufp->chgBit(oldp+727,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_38__out));
        bufp->chgBit(oldp+728,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_39__out));
        bufp->chgBit(oldp+729,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_40__out));
        bufp->chgBit(oldp+730,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_41__out));
        bufp->chgBit(oldp+731,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_42__out));
        bufp->chgBit(oldp+732,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_43__out));
        bufp->chgBit(oldp+733,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_44__out));
        bufp->chgBit(oldp+734,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_45__out));
        bufp->chgBit(oldp+735,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_46__out));
        bufp->chgBit(oldp+736,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_47__out));
        bufp->chgBit(oldp+737,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_48__out));
        bufp->chgBit(oldp+738,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_49__out));
        bufp->chgBit(oldp+739,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_50__out));
        bufp->chgBit(oldp+740,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_51__out));
        bufp->chgBit(oldp+741,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_52__out));
        bufp->chgBit(oldp+742,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_53__out));
        bufp->chgBit(oldp+743,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_54__out));
        bufp->chgBit(oldp+744,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_55__out));
        bufp->chgBit(oldp+745,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_56__out));
        bufp->chgBit(oldp+746,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_57__out));
        bufp->chgBit(oldp+747,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_58__out));
        bufp->chgBit(oldp+748,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_59__out));
        bufp->chgBit(oldp+749,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_60__out));
        bufp->chgBit(oldp+750,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_61__out));
        bufp->chgBit(oldp+751,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_62__out));
        bufp->chgBit(oldp+752,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins_63__out));
        bufp->chgIData(oldp+753,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_63__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_62__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_61__out) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_60__out) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_59__out) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_58__out) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_57__out) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_56__out) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_55__out) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_54__out) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_53__out) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_52__out) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_51__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_50__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_49__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_48__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_47__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_46__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_45__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_44__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_43__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_42__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_41__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_40__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_39__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_38__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_37__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_36__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_35__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_34__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_33__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_32__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+754,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_32__out));
        bufp->chgBit(oldp+755,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_33__out));
        bufp->chgBit(oldp+756,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_34__out));
        bufp->chgBit(oldp+757,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_35__out));
        bufp->chgBit(oldp+758,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_36__out));
        bufp->chgBit(oldp+759,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_37__out));
        bufp->chgBit(oldp+760,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_38__out));
        bufp->chgBit(oldp+761,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_39__out));
        bufp->chgBit(oldp+762,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_40__out));
        bufp->chgBit(oldp+763,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_41__out));
        bufp->chgBit(oldp+764,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_42__out));
        bufp->chgBit(oldp+765,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_43__out));
        bufp->chgBit(oldp+766,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_44__out));
        bufp->chgBit(oldp+767,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_45__out));
        bufp->chgBit(oldp+768,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_46__out));
        bufp->chgBit(oldp+769,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_47__out));
        bufp->chgBit(oldp+770,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_48__out));
        bufp->chgBit(oldp+771,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_49__out));
        bufp->chgBit(oldp+772,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_50__out));
        bufp->chgBit(oldp+773,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_51__out));
        bufp->chgBit(oldp+774,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_52__out));
        bufp->chgBit(oldp+775,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_53__out));
        bufp->chgBit(oldp+776,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_54__out));
        bufp->chgBit(oldp+777,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_55__out));
        bufp->chgBit(oldp+778,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_56__out));
        bufp->chgBit(oldp+779,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_57__out));
        bufp->chgBit(oldp+780,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_58__out));
        bufp->chgBit(oldp+781,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_59__out));
        bufp->chgBit(oldp+782,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_60__out));
        bufp->chgBit(oldp+783,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_61__out));
        bufp->chgBit(oldp+784,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_62__out));
        bufp->chgBit(oldp+785,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins_63__out));
        bufp->chgIData(oldp+786,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_63__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_62__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_61__out) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_60__out) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_59__out) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_58__out) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_57__out) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_56__out) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_55__out) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_54__out) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_53__out) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_52__out) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_51__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_50__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_49__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_48__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_47__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_46__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_45__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_44__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_43__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_42__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_41__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_40__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_39__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_38__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_37__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_36__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_35__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_34__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_33__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_32__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+787,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_32__out));
        bufp->chgBit(oldp+788,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_33__out));
        bufp->chgBit(oldp+789,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_34__out));
        bufp->chgBit(oldp+790,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_35__out));
        bufp->chgBit(oldp+791,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_36__out));
        bufp->chgBit(oldp+792,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_37__out));
        bufp->chgBit(oldp+793,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_38__out));
        bufp->chgBit(oldp+794,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_39__out));
        bufp->chgBit(oldp+795,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_40__out));
        bufp->chgBit(oldp+796,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_41__out));
        bufp->chgBit(oldp+797,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_42__out));
        bufp->chgBit(oldp+798,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_43__out));
        bufp->chgBit(oldp+799,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_44__out));
        bufp->chgBit(oldp+800,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_45__out));
        bufp->chgBit(oldp+801,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_46__out));
        bufp->chgBit(oldp+802,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_47__out));
        bufp->chgBit(oldp+803,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_48__out));
        bufp->chgBit(oldp+804,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_49__out));
        bufp->chgBit(oldp+805,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_50__out));
        bufp->chgBit(oldp+806,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_51__out));
        bufp->chgBit(oldp+807,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_52__out));
        bufp->chgBit(oldp+808,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_53__out));
        bufp->chgBit(oldp+809,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_54__out));
        bufp->chgBit(oldp+810,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_55__out));
        bufp->chgBit(oldp+811,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_56__out));
        bufp->chgBit(oldp+812,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_57__out));
        bufp->chgBit(oldp+813,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_58__out));
        bufp->chgBit(oldp+814,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_59__out));
        bufp->chgBit(oldp+815,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_60__out));
        bufp->chgBit(oldp+816,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_61__out));
        bufp->chgBit(oldp+817,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_62__out));
        bufp->chgBit(oldp+818,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins_63__out));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+819,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_31__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_30__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_29__out) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_28__out) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_27__out) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_26__out) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_25__out) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_24__out) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_23__out) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_22__out) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_21__out) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_20__out) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_19__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_18__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_17__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_16__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_15__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_14__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_13__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_12__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_11__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_10__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_09__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_08__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_07__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_06__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_05__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_04__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_03__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_02__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_01__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_00__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+820,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_00__out));
        bufp->chgBit(oldp+821,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_04__out));
        bufp->chgBit(oldp+822,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_01__out));
        bufp->chgBit(oldp+823,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_05__out));
        bufp->chgBit(oldp+824,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_02__out));
        bufp->chgBit(oldp+825,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_06__out));
        bufp->chgBit(oldp+826,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_03__out));
        bufp->chgBit(oldp+827,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_07__out));
        bufp->chgBit(oldp+828,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_08__out));
        bufp->chgBit(oldp+829,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_09__out));
        bufp->chgBit(oldp+830,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_10__out));
        bufp->chgBit(oldp+831,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_11__out));
        bufp->chgBit(oldp+832,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_12__out));
        bufp->chgBit(oldp+833,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_13__out));
        bufp->chgBit(oldp+834,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_14__out));
        bufp->chgBit(oldp+835,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_15__out));
        bufp->chgBit(oldp+836,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_16__out));
        bufp->chgBit(oldp+837,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_17__out));
        bufp->chgBit(oldp+838,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_18__out));
        bufp->chgBit(oldp+839,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_19__out));
        bufp->chgBit(oldp+840,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_20__out));
        bufp->chgBit(oldp+841,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_21__out));
        bufp->chgBit(oldp+842,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_22__out));
        bufp->chgBit(oldp+843,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_23__out));
        bufp->chgBit(oldp+844,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_24__out));
        bufp->chgBit(oldp+845,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_25__out));
        bufp->chgBit(oldp+846,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_26__out));
        bufp->chgBit(oldp+847,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_27__out));
        bufp->chgBit(oldp+848,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_28__out));
        bufp->chgBit(oldp+849,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_29__out));
        bufp->chgBit(oldp+850,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_30__out));
        bufp->chgBit(oldp+851,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins8_31__out));
        bufp->chgIData(oldp+852,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_31__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_30__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_29__out) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_28__out) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_27__out) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_26__out) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_25__out) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_24__out) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_23__out) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_22__out) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_21__out) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_20__out) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_19__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_18__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_17__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_16__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_15__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_14__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_13__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_12__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_11__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_10__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_09__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_08__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_07__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_06__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_05__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_04__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_03__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_02__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_01__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_00__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+853,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_00__out));
        bufp->chgBit(oldp+854,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_04__out));
        bufp->chgBit(oldp+855,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_01__out));
        bufp->chgBit(oldp+856,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_05__out));
        bufp->chgBit(oldp+857,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_02__out));
        bufp->chgBit(oldp+858,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_06__out));
        bufp->chgBit(oldp+859,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_03__out));
        bufp->chgBit(oldp+860,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_07__out));
        bufp->chgBit(oldp+861,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_08__out));
        bufp->chgBit(oldp+862,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_09__out));
        bufp->chgBit(oldp+863,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_10__out));
        bufp->chgBit(oldp+864,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_11__out));
        bufp->chgBit(oldp+865,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_12__out));
        bufp->chgBit(oldp+866,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_13__out));
        bufp->chgBit(oldp+867,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_14__out));
        bufp->chgBit(oldp+868,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_15__out));
        bufp->chgBit(oldp+869,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_16__out));
        bufp->chgBit(oldp+870,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_17__out));
        bufp->chgBit(oldp+871,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_18__out));
        bufp->chgBit(oldp+872,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_19__out));
        bufp->chgBit(oldp+873,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_20__out));
        bufp->chgBit(oldp+874,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_21__out));
        bufp->chgBit(oldp+875,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_22__out));
        bufp->chgBit(oldp+876,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_23__out));
        bufp->chgBit(oldp+877,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_24__out));
        bufp->chgBit(oldp+878,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_25__out));
        bufp->chgBit(oldp+879,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_26__out));
        bufp->chgBit(oldp+880,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_27__out));
        bufp->chgBit(oldp+881,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_28__out));
        bufp->chgBit(oldp+882,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_29__out));
        bufp->chgBit(oldp+883,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_30__out));
        bufp->chgBit(oldp+884,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins8_31__out));
        bufp->chgIData(oldp+885,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_31__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_30__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_29__out) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_28__out) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_27__out) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_26__out) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_25__out) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_24__out) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_23__out) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_22__out) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_21__out) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_20__out) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_19__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_18__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_17__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_16__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_15__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_14__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_13__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_12__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_11__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_10__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_09__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_08__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_07__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_06__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_05__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_04__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_03__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_02__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_01__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_00__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+886,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_00__out));
        bufp->chgBit(oldp+887,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_04__out));
        bufp->chgBit(oldp+888,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_01__out));
        bufp->chgBit(oldp+889,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_05__out));
        bufp->chgBit(oldp+890,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_02__out));
        bufp->chgBit(oldp+891,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_06__out));
        bufp->chgBit(oldp+892,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_03__out));
        bufp->chgBit(oldp+893,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_07__out));
        bufp->chgBit(oldp+894,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_08__out));
        bufp->chgBit(oldp+895,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_09__out));
        bufp->chgBit(oldp+896,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_10__out));
        bufp->chgBit(oldp+897,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_11__out));
        bufp->chgBit(oldp+898,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_12__out));
        bufp->chgBit(oldp+899,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_13__out));
        bufp->chgBit(oldp+900,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_14__out));
        bufp->chgBit(oldp+901,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_15__out));
        bufp->chgBit(oldp+902,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_16__out));
        bufp->chgBit(oldp+903,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_17__out));
        bufp->chgBit(oldp+904,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_18__out));
        bufp->chgBit(oldp+905,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_19__out));
        bufp->chgBit(oldp+906,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_20__out));
        bufp->chgBit(oldp+907,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_21__out));
        bufp->chgBit(oldp+908,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_22__out));
        bufp->chgBit(oldp+909,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_23__out));
        bufp->chgBit(oldp+910,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_24__out));
        bufp->chgBit(oldp+911,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_25__out));
        bufp->chgBit(oldp+912,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_26__out));
        bufp->chgBit(oldp+913,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_27__out));
        bufp->chgBit(oldp+914,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_28__out));
        bufp->chgBit(oldp+915,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_29__out));
        bufp->chgBit(oldp+916,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_30__out));
        bufp->chgBit(oldp+917,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins8_31__out));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+918,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_31__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_30__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_29__out) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_28__out) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_27__out) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_26__out) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_25__out) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_24__out) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_23__out) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_22__out) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_21__out) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_20__out) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_19__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_18__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_17__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_16__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_15__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_14__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_13__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_12__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_11__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_10__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_09__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_08__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_07__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_06__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_05__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_04__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_03__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_02__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_01__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_00__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+919,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_00__out));
        bufp->chgBit(oldp+920,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_01__out));
        bufp->chgBit(oldp+921,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_02__out));
        bufp->chgBit(oldp+922,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_03__out));
        bufp->chgBit(oldp+923,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_04__out));
        bufp->chgBit(oldp+924,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_05__out));
        bufp->chgBit(oldp+925,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_06__out));
        bufp->chgBit(oldp+926,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_07__out));
        bufp->chgBit(oldp+927,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_08__out));
        bufp->chgBit(oldp+928,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_09__out));
        bufp->chgBit(oldp+929,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_10__out));
        bufp->chgBit(oldp+930,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_11__out));
        bufp->chgBit(oldp+931,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_12__out));
        bufp->chgBit(oldp+932,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_13__out));
        bufp->chgBit(oldp+933,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_14__out));
        bufp->chgBit(oldp+934,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_15__out));
        bufp->chgBit(oldp+935,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_16__out));
        bufp->chgBit(oldp+936,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_17__out));
        bufp->chgBit(oldp+937,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_18__out));
        bufp->chgBit(oldp+938,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_19__out));
        bufp->chgBit(oldp+939,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_20__out));
        bufp->chgBit(oldp+940,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_21__out));
        bufp->chgBit(oldp+941,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_22__out));
        bufp->chgBit(oldp+942,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_23__out));
        bufp->chgBit(oldp+943,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_24__out));
        bufp->chgBit(oldp+944,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_25__out));
        bufp->chgBit(oldp+945,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_26__out));
        bufp->chgBit(oldp+946,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_27__out));
        bufp->chgBit(oldp+947,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_28__out));
        bufp->chgBit(oldp+948,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_29__out));
        bufp->chgBit(oldp+949,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_30__out));
        bufp->chgBit(oldp+950,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins4_31__out));
        bufp->chgIData(oldp+951,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_31__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_30__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_29__out) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_28__out) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_27__out) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_26__out) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_25__out) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_24__out) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_23__out) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_22__out) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_21__out) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_20__out) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_19__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_18__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_17__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_16__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_15__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_14__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_13__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_12__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_11__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_10__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_09__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_08__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_07__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_06__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_05__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_04__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_03__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_02__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_01__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_00__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+952,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_00__out));
        bufp->chgBit(oldp+953,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_01__out));
        bufp->chgBit(oldp+954,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_02__out));
        bufp->chgBit(oldp+955,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_03__out));
        bufp->chgBit(oldp+956,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_04__out));
        bufp->chgBit(oldp+957,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_05__out));
        bufp->chgBit(oldp+958,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_06__out));
        bufp->chgBit(oldp+959,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_07__out));
        bufp->chgBit(oldp+960,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_08__out));
        bufp->chgBit(oldp+961,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_09__out));
        bufp->chgBit(oldp+962,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_10__out));
        bufp->chgBit(oldp+963,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_11__out));
        bufp->chgBit(oldp+964,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_12__out));
        bufp->chgBit(oldp+965,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_13__out));
        bufp->chgBit(oldp+966,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_14__out));
        bufp->chgBit(oldp+967,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_15__out));
        bufp->chgBit(oldp+968,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_16__out));
        bufp->chgBit(oldp+969,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_17__out));
        bufp->chgBit(oldp+970,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_18__out));
        bufp->chgBit(oldp+971,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_19__out));
        bufp->chgBit(oldp+972,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_20__out));
        bufp->chgBit(oldp+973,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_21__out));
        bufp->chgBit(oldp+974,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_22__out));
        bufp->chgBit(oldp+975,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_23__out));
        bufp->chgBit(oldp+976,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_24__out));
        bufp->chgBit(oldp+977,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_25__out));
        bufp->chgBit(oldp+978,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_26__out));
        bufp->chgBit(oldp+979,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_27__out));
        bufp->chgBit(oldp+980,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_28__out));
        bufp->chgBit(oldp+981,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_29__out));
        bufp->chgBit(oldp+982,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_30__out));
        bufp->chgBit(oldp+983,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins4_31__out));
        bufp->chgIData(oldp+984,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_31__out) 
                                   << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_30__out) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_29__out) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_28__out) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_27__out) 
                                                          << 0x1bU) 
                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_26__out) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_25__out) 
                                                                << 0x19U) 
                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_24__out) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_23__out) 
                                                                      << 0x17U) 
                                                                     | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_22__out) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_21__out) 
                                                                            << 0x15U) 
                                                                           | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_20__out) 
                                                                               << 0x14U) 
                                                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_19__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_18__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_17__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_16__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_15__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_14__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_13__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_12__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_11__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_10__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_09__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_08__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_07__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_06__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_05__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_04__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_03__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_02__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_01__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_00__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+985,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_00__out));
        bufp->chgBit(oldp+986,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_01__out));
        bufp->chgBit(oldp+987,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_02__out));
        bufp->chgBit(oldp+988,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_03__out));
        bufp->chgBit(oldp+989,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_04__out));
        bufp->chgBit(oldp+990,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_05__out));
        bufp->chgBit(oldp+991,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_06__out));
        bufp->chgBit(oldp+992,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_07__out));
        bufp->chgBit(oldp+993,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_08__out));
        bufp->chgBit(oldp+994,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_09__out));
        bufp->chgBit(oldp+995,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_10__out));
        bufp->chgBit(oldp+996,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_11__out));
        bufp->chgBit(oldp+997,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_12__out));
        bufp->chgBit(oldp+998,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_13__out));
        bufp->chgBit(oldp+999,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_14__out));
        bufp->chgBit(oldp+1000,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_15__out));
        bufp->chgBit(oldp+1001,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_16__out));
        bufp->chgBit(oldp+1002,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_17__out));
        bufp->chgBit(oldp+1003,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_18__out));
        bufp->chgBit(oldp+1004,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_19__out));
        bufp->chgBit(oldp+1005,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_20__out));
        bufp->chgBit(oldp+1006,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_21__out));
        bufp->chgBit(oldp+1007,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_22__out));
        bufp->chgBit(oldp+1008,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_23__out));
        bufp->chgBit(oldp+1009,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_24__out));
        bufp->chgBit(oldp+1010,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_25__out));
        bufp->chgBit(oldp+1011,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_26__out));
        bufp->chgBit(oldp+1012,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_27__out));
        bufp->chgBit(oldp+1013,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_28__out));
        bufp->chgBit(oldp+1014,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_29__out));
        bufp->chgBit(oldp+1015,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_30__out));
        bufp->chgBit(oldp+1016,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins4_31__out));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+1017,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_31__out) 
                                    << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_30__out) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_29__out) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_28__out) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_27__out) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_26__out) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_25__out) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_24__out) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_23__out) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_22__out) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_21__out) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_20__out) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_19__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_18__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_17__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_16__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_15__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_14__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_13__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_12__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_11__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_10__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_09__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_08__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_07__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_06__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_05__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_04__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_03__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_02__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_01__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_00__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+1018,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_00__out));
        bufp->chgBit(oldp+1019,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_01__out));
        bufp->chgBit(oldp+1020,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_02__out));
        bufp->chgBit(oldp+1021,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_03__out));
        bufp->chgBit(oldp+1022,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_04__out));
        bufp->chgBit(oldp+1023,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_05__out));
        bufp->chgBit(oldp+1024,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_06__out));
        bufp->chgBit(oldp+1025,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_07__out));
        bufp->chgBit(oldp+1026,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_08__out));
        bufp->chgBit(oldp+1027,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_09__out));
        bufp->chgBit(oldp+1028,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_10__out));
        bufp->chgBit(oldp+1029,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_11__out));
        bufp->chgBit(oldp+1030,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_12__out));
        bufp->chgBit(oldp+1031,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_13__out));
        bufp->chgBit(oldp+1032,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_14__out));
        bufp->chgBit(oldp+1033,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_15__out));
        bufp->chgBit(oldp+1034,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_16__out));
        bufp->chgBit(oldp+1035,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_17__out));
        bufp->chgBit(oldp+1036,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_18__out));
        bufp->chgBit(oldp+1037,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_19__out));
        bufp->chgBit(oldp+1038,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_20__out));
        bufp->chgBit(oldp+1039,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_21__out));
        bufp->chgBit(oldp+1040,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_22__out));
        bufp->chgBit(oldp+1041,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_23__out));
        bufp->chgBit(oldp+1042,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_24__out));
        bufp->chgBit(oldp+1043,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_25__out));
        bufp->chgBit(oldp+1044,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_26__out));
        bufp->chgBit(oldp+1045,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_27__out));
        bufp->chgBit(oldp+1046,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_28__out));
        bufp->chgBit(oldp+1047,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_29__out));
        bufp->chgBit(oldp+1048,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_30__out));
        bufp->chgBit(oldp+1049,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellout__ins16_31__out));
        bufp->chgIData(oldp+1050,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_31__out) 
                                    << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_30__out) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_29__out) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_28__out) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_27__out) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_26__out) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_25__out) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_24__out) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_23__out) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_22__out) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_21__out) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_20__out) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_19__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_18__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_17__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_16__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_15__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_14__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_13__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_12__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_11__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_10__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_09__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_08__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_07__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_06__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_05__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_04__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_03__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_02__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_01__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_00__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+1051,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_00__out));
        bufp->chgBit(oldp+1052,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_01__out));
        bufp->chgBit(oldp+1053,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_02__out));
        bufp->chgBit(oldp+1054,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_03__out));
        bufp->chgBit(oldp+1055,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_04__out));
        bufp->chgBit(oldp+1056,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_05__out));
        bufp->chgBit(oldp+1057,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_06__out));
        bufp->chgBit(oldp+1058,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_07__out));
        bufp->chgBit(oldp+1059,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_08__out));
        bufp->chgBit(oldp+1060,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_09__out));
        bufp->chgBit(oldp+1061,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_10__out));
        bufp->chgBit(oldp+1062,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_11__out));
        bufp->chgBit(oldp+1063,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_12__out));
        bufp->chgBit(oldp+1064,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_13__out));
        bufp->chgBit(oldp+1065,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_14__out));
        bufp->chgBit(oldp+1066,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_15__out));
        bufp->chgBit(oldp+1067,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_16__out));
        bufp->chgBit(oldp+1068,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_17__out));
        bufp->chgBit(oldp+1069,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_18__out));
        bufp->chgBit(oldp+1070,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_19__out));
        bufp->chgBit(oldp+1071,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_20__out));
        bufp->chgBit(oldp+1072,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_21__out));
        bufp->chgBit(oldp+1073,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_22__out));
        bufp->chgBit(oldp+1074,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_23__out));
        bufp->chgBit(oldp+1075,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_24__out));
        bufp->chgBit(oldp+1076,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_25__out));
        bufp->chgBit(oldp+1077,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_26__out));
        bufp->chgBit(oldp+1078,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_27__out));
        bufp->chgBit(oldp+1079,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_28__out));
        bufp->chgBit(oldp+1080,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_29__out));
        bufp->chgBit(oldp+1081,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_30__out));
        bufp->chgBit(oldp+1082,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sr__DOT____Vcellout__ins16_31__out));
        bufp->chgIData(oldp+1083,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_31__out) 
                                    << 0x1fU) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_30__out) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_29__out) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_28__out) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_27__out) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_26__out) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_25__out) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_24__out) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_23__out) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_22__out) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_21__out) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_20__out) 
                                                                                << 0x14U) 
                                                                               | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_19__out) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_18__out) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_17__out) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_16__out) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_15__out) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_14__out) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_13__out) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_12__out) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_11__out) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_10__out) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_09__out) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_08__out) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_07__out) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_06__out) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_05__out) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_04__out) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_03__out) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_02__out) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_01__out) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_00__out))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+1084,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_00__out));
        bufp->chgBit(oldp+1085,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_01__out));
        bufp->chgBit(oldp+1086,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_02__out));
        bufp->chgBit(oldp+1087,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_03__out));
        bufp->chgBit(oldp+1088,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_04__out));
        bufp->chgBit(oldp+1089,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_05__out));
        bufp->chgBit(oldp+1090,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_06__out));
        bufp->chgBit(oldp+1091,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_07__out));
        bufp->chgBit(oldp+1092,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_08__out));
        bufp->chgBit(oldp+1093,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_09__out));
        bufp->chgBit(oldp+1094,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_10__out));
        bufp->chgBit(oldp+1095,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_11__out));
        bufp->chgBit(oldp+1096,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_12__out));
        bufp->chgBit(oldp+1097,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_13__out));
        bufp->chgBit(oldp+1098,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_14__out));
        bufp->chgBit(oldp+1099,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_15__out));
        bufp->chgBit(oldp+1100,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_16__out));
        bufp->chgBit(oldp+1101,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_17__out));
        bufp->chgBit(oldp+1102,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_18__out));
        bufp->chgBit(oldp+1103,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_19__out));
        bufp->chgBit(oldp+1104,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_20__out));
        bufp->chgBit(oldp+1105,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_21__out));
        bufp->chgBit(oldp+1106,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_22__out));
        bufp->chgBit(oldp+1107,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_23__out));
        bufp->chgBit(oldp+1108,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_24__out));
        bufp->chgBit(oldp+1109,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_25__out));
        bufp->chgBit(oldp+1110,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_26__out));
        bufp->chgBit(oldp+1111,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_27__out));
        bufp->chgBit(oldp+1112,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_28__out));
        bufp->chgBit(oldp+1113,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_29__out));
        bufp->chgBit(oldp+1114,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_30__out));
        bufp->chgBit(oldp+1115,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sra__DOT____Vcellout__ins16_31__out));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[7U])) {
        bufp->chgIData(oldp+1116,(vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a),32);
        bufp->chgIData(oldp+1117,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__reg_sum),32);
        bufp->chgBit(oldp+1118,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA0__A));
        bufp->chgBit(oldp+1119,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA0__Cout));
        bufp->chgBit(oldp+1120,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA0__DOT__X));
        bufp->chgBit(oldp+1121,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA1__A));
        bufp->chgBit(oldp+1122,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA1__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA0__Cout))));
        bufp->chgBit(oldp+1123,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA1__Cout));
        bufp->chgBit(oldp+1124,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA1__DOT__X));
        bufp->chgBit(oldp+1125,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA10__A));
        bufp->chgBit(oldp+1126,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA9__Cout));
        bufp->chgBit(oldp+1127,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA10__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA9__Cout))));
        bufp->chgBit(oldp+1128,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA10__Cout));
        bufp->chgBit(oldp+1129,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA10__DOT__X));
        bufp->chgBit(oldp+1130,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA11__A));
        bufp->chgBit(oldp+1131,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA11__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA10__Cout))));
        bufp->chgBit(oldp+1132,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA11__Cout));
        bufp->chgBit(oldp+1133,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA11__DOT__X));
        bufp->chgBit(oldp+1134,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA12__A));
        bufp->chgBit(oldp+1135,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA12__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA11__Cout))));
        bufp->chgBit(oldp+1136,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA12__Cout));
        bufp->chgBit(oldp+1137,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA12__DOT__X));
        bufp->chgBit(oldp+1138,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA13__A));
        bufp->chgBit(oldp+1139,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA13__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA12__Cout))));
        bufp->chgBit(oldp+1140,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA13__Cout));
        bufp->chgBit(oldp+1141,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA13__DOT__X));
        bufp->chgBit(oldp+1142,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA14__A));
        bufp->chgBit(oldp+1143,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA14__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA13__Cout))));
        bufp->chgBit(oldp+1144,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA14__Cout));
        bufp->chgBit(oldp+1145,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA14__DOT__X));
        bufp->chgBit(oldp+1146,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA15__A));
        bufp->chgBit(oldp+1147,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA15__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA14__Cout))));
        bufp->chgBit(oldp+1148,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA15__Cout));
        bufp->chgBit(oldp+1149,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA15__DOT__X));
        bufp->chgBit(oldp+1150,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA16__A));
        bufp->chgBit(oldp+1151,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA16__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA15__Cout))));
        bufp->chgBit(oldp+1152,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA16__Cout));
        bufp->chgBit(oldp+1153,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA16__DOT__X));
        bufp->chgBit(oldp+1154,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA17__A));
        bufp->chgBit(oldp+1155,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA17__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA16__Cout))));
        bufp->chgBit(oldp+1156,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA17__Cout));
        bufp->chgBit(oldp+1157,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA17__DOT__X));
        bufp->chgBit(oldp+1158,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA18__A));
        bufp->chgBit(oldp+1159,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA18__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA17__Cout))));
        bufp->chgBit(oldp+1160,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA18__Cout));
        bufp->chgBit(oldp+1161,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA18__DOT__X));
        bufp->chgBit(oldp+1162,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA19__A));
        bufp->chgBit(oldp+1163,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA19__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA18__Cout))));
        bufp->chgBit(oldp+1164,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA19__Cout));
        bufp->chgBit(oldp+1165,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA19__DOT__X));
        bufp->chgBit(oldp+1166,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA2__A));
        bufp->chgBit(oldp+1167,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA2__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA1__Cout))));
        bufp->chgBit(oldp+1168,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA2__Cout));
        bufp->chgBit(oldp+1169,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA2__DOT__X));
        bufp->chgBit(oldp+1170,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA20__A));
        bufp->chgBit(oldp+1171,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA20__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA19__Cout))));
        bufp->chgBit(oldp+1172,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA20__Cout));
        bufp->chgBit(oldp+1173,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA20__DOT__X));
        bufp->chgBit(oldp+1174,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA21__A));
        bufp->chgBit(oldp+1175,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA21__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA20__Cout))));
        bufp->chgBit(oldp+1176,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA21__Cout));
        bufp->chgBit(oldp+1177,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA21__DOT__X));
        bufp->chgBit(oldp+1178,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA22__A));
        bufp->chgBit(oldp+1179,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA22__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA21__Cout))));
        bufp->chgBit(oldp+1180,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA22__Cout));
        bufp->chgBit(oldp+1181,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA22__DOT__X));
        bufp->chgBit(oldp+1182,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA23__A));
        bufp->chgBit(oldp+1183,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA23__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA22__Cout))));
        bufp->chgBit(oldp+1184,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA23__Cout));
        bufp->chgBit(oldp+1185,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA23__DOT__X));
        bufp->chgBit(oldp+1186,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA24__A));
        bufp->chgBit(oldp+1187,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA24__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA23__Cout))));
        bufp->chgBit(oldp+1188,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA24__Cout));
        bufp->chgBit(oldp+1189,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA24__DOT__X));
        bufp->chgBit(oldp+1190,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA25__A));
        bufp->chgBit(oldp+1191,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA25__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA24__Cout))));
        bufp->chgBit(oldp+1192,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA25__Cout));
        bufp->chgBit(oldp+1193,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA25__DOT__X));
        bufp->chgBit(oldp+1194,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA26__A));
        bufp->chgBit(oldp+1195,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA26__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA25__Cout))));
        bufp->chgBit(oldp+1196,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA26__Cout));
        bufp->chgBit(oldp+1197,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA26__DOT__X));
        bufp->chgBit(oldp+1198,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA27__A));
        bufp->chgBit(oldp+1199,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA27__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA26__Cout))));
        bufp->chgBit(oldp+1200,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA27__Cout));
        bufp->chgBit(oldp+1201,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA27__DOT__X));
        bufp->chgBit(oldp+1202,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA28__A));
        bufp->chgBit(oldp+1203,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA28__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA27__Cout))));
        bufp->chgBit(oldp+1204,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA28__Cout));
        bufp->chgBit(oldp+1205,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA28__DOT__X));
        bufp->chgBit(oldp+1206,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA29__A));
        bufp->chgBit(oldp+1207,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA29__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA28__Cout))));
        bufp->chgBit(oldp+1208,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA29__Cout));
        bufp->chgBit(oldp+1209,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA29__DOT__X));
        bufp->chgBit(oldp+1210,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA3__A));
        bufp->chgBit(oldp+1211,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA3__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA2__Cout))));
        bufp->chgBit(oldp+1212,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA3__Cout));
        bufp->chgBit(oldp+1213,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA3__DOT__X));
        bufp->chgBit(oldp+1214,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA30__A));
        bufp->chgBit(oldp+1215,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA30__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA29__Cout))));
        bufp->chgBit(oldp+1216,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA30__Cout));
        bufp->chgBit(oldp+1217,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA30__DOT__X));
        bufp->chgBit(oldp+1218,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA31__A));
        bufp->chgBit(oldp+1219,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA31__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA30__Cout))));
        bufp->chgBit(oldp+1220,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA31__DOT__X));
        bufp->chgBit(oldp+1221,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA4__A));
        bufp->chgBit(oldp+1222,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA4__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA3__Cout))));
        bufp->chgBit(oldp+1223,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA4__Cout));
        bufp->chgBit(oldp+1224,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA4__DOT__X));
        bufp->chgBit(oldp+1225,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA5__A));
        bufp->chgBit(oldp+1226,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA5__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA4__Cout))));
        bufp->chgBit(oldp+1227,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA5__Cout));
        bufp->chgBit(oldp+1228,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA5__DOT__X));
        bufp->chgBit(oldp+1229,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA6__A));
        bufp->chgBit(oldp+1230,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA6__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA5__Cout))));
        bufp->chgBit(oldp+1231,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA6__Cout));
        bufp->chgBit(oldp+1232,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA6__DOT__X));
        bufp->chgBit(oldp+1233,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA7__A));
        bufp->chgBit(oldp+1234,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA7__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA6__Cout))));
        bufp->chgBit(oldp+1235,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA7__Cout));
        bufp->chgBit(oldp+1236,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA7__DOT__X));
        bufp->chgBit(oldp+1237,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA8__A));
        bufp->chgBit(oldp+1238,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA8__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA7__Cout))));
        bufp->chgBit(oldp+1239,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA8__Cout));
        bufp->chgBit(oldp+1240,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA8__DOT__X));
        bufp->chgBit(oldp+1241,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellinp__FA9__A));
        bufp->chgBit(oldp+1242,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA9__DOT__X) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT____Vcellout__FA8__Cout))));
        bufp->chgBit(oldp+1243,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU1__DOT__FA9__DOT__X));
        bufp->chgCData(oldp+1244,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C1__X) 
                                    << 6U) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__X) 
                                               << 5U) 
                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__X) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__X) 
                                                     << 3U) 
                                                    | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__X) 
                                                        << 2U) 
                                                       | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__X) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__X)))))))),7);
        bufp->chgCData(oldp+1245,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__Y_temp) 
                                    << 6U) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__Y) 
                                               << 5U) 
                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__Y) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__Y) 
                                                     << 3U) 
                                                    | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__Y) 
                                                        << 2U) 
                                                       | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Y) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__Y_temp)
                                                              ? (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Y)
                                                              : (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__Y_temp))))))))),7);
        bufp->chgCData(oldp+1246,((((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C1__Z) 
                                    << 6U) | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__Z) 
                                               << 5U) 
                                              | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__Z) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__Z) 
                                                     << 3U) 
                                                    | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__Z) 
                                                        << 2U) 
                                                       | (((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Z) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__Z)))))))),7);
        bufp->chgBit(oldp+1247,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C1__X));
        bufp->chgBit(oldp+1248,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__Y_temp));
        bufp->chgBit(oldp+1249,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C1__Z));
        bufp->chgBit(oldp+1250,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3));
        bufp->chgBit(oldp+1251,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T2));
        bufp->chgBit(oldp+1252,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T1));
        bufp->chgBit(oldp+1253,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+1254,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T3)))));
        bufp->chgBit(oldp+1255,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T2)))));
        bufp->chgBit(oldp+1256,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT__T1)))));
        bufp->chgBit(oldp+1257,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_6) 
                                          ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C1__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+1258,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__X));
        bufp->chgBit(oldp+1259,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__Y));
        bufp->chgBit(oldp+1260,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C2__Z));
        bufp->chgBit(oldp+1261,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3));
        bufp->chgBit(oldp+1262,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T2));
        bufp->chgBit(oldp+1263,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T1));
        bufp->chgBit(oldp+1264,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6) 
                                 ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7))));
        bufp->chgBit(oldp+1265,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T3)))));
        bufp->chgBit(oldp+1266,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T2)))));
        bufp->chgBit(oldp+1267,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__T1)))));
        bufp->chgBit(oldp+1268,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_6) 
                                          ^ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT____VdfgRegularize_h8330aaba_0_7))))));
        bufp->chgBit(oldp+1269,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C2__DOT__Y_temp));
        bufp->chgBit(oldp+1270,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__X));
        bufp->chgBit(oldp+1271,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__Y));
        bufp->chgBit(oldp+1272,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C3__Z));
        bufp->chgBit(oldp+1273,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3));
        bufp->chgBit(oldp+1274,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T2));
        bufp->chgBit(oldp+1275,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T1));
        bufp->chgBit(oldp+1276,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T3)))));
        bufp->chgBit(oldp+1277,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T2)))));
        bufp->chgBit(oldp+1278,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__T1)))));
        bufp->chgBit(oldp+1279,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C3__DOT__Y_temp));
        bufp->chgBit(oldp+1280,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__X));
        bufp->chgBit(oldp+1281,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__Y));
        bufp->chgBit(oldp+1282,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C4__Z));
        bufp->chgBit(oldp+1283,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T3));
        bufp->chgBit(oldp+1284,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T2));
        bufp->chgBit(oldp+1285,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T1));
        bufp->chgBit(oldp+1286,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T3)))));
        bufp->chgBit(oldp+1287,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T2)))));
        bufp->chgBit(oldp+1288,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__T1)))));
        bufp->chgBit(oldp+1289,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C4__DOT__Y_temp));
        bufp->chgBit(oldp+1290,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__X));
        bufp->chgBit(oldp+1291,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__Y));
        bufp->chgBit(oldp+1292,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C5__Z));
        bufp->chgBit(oldp+1293,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T3));
        bufp->chgBit(oldp+1294,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T2));
        bufp->chgBit(oldp+1295,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T1));
        bufp->chgBit(oldp+1296,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T3)))));
        bufp->chgBit(oldp+1297,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T2)))));
        bufp->chgBit(oldp+1298,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__T1)))));
        bufp->chgBit(oldp+1299,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C5__DOT__Y_temp));
        bufp->chgBit(oldp+1300,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__X));
        bufp->chgBit(oldp+1301,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Y));
        bufp->chgBit(oldp+1302,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Z));
        bufp->chgBit(oldp+1303,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T3));
        bufp->chgBit(oldp+1304,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T2));
        bufp->chgBit(oldp+1305,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T1));
        bufp->chgBit(oldp+1306,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T3)))));
        bufp->chgBit(oldp+1307,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T2)))));
        bufp->chgBit(oldp+1308,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__T1)))));
        bufp->chgBit(oldp+1309,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C6__DOT__Y_temp));
        bufp->chgBit(oldp+1310,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__X));
        bufp->chgBit(oldp+1311,(((IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__Y_temp)
                                  ? (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C6__Y)
                                  : (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__Y_temp))));
        bufp->chgBit(oldp+1312,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT____Vcellout__C7__Z));
        bufp->chgBit(oldp+1313,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T3));
        bufp->chgBit(oldp+1314,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T2));
        bufp->chgBit(oldp+1315,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T1));
        bufp->chgBit(oldp+1316,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T3)))));
        bufp->chgBit(oldp+1317,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T2)))));
        bufp->chgBit(oldp+1318,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__T1)))));
        bufp->chgBit(oldp+1319,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C7__DOT__Y_temp));
        bufp->chgBit(oldp+1320,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3));
        bufp->chgBit(oldp+1321,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T2));
        bufp->chgBit(oldp+1322,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1));
        bufp->chgBit(oldp+1323,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T3)))));
        bufp->chgBit(oldp+1324,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T2)))));
        bufp->chgBit(oldp+1325,((1U & (~ (IData)(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU2__DOT__Comp1__DOT__C8__DOT__T1)))));
        bufp->chgIData(oldp+1326,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__A_reversed),32);
        bufp->chgBit(oldp+1327,((vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1328,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1329,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins16_00__sel));
        bufp->chgBit(oldp+1330,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1331,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1332,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1333,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1334,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1335,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1336,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1337,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1338,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1339,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1340,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1341,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 9U))));
        bufp->chgBit(oldp+1342,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1343,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 8U))));
        bufp->chgBit(oldp+1344,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1345,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 7U))));
        bufp->chgBit(oldp+1346,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1347,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 6U))));
        bufp->chgBit(oldp+1348,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1349,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 5U))));
        bufp->chgBit(oldp+1350,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1351,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 4U))));
        bufp->chgBit(oldp+1352,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1353,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 3U))));
        bufp->chgBit(oldp+1354,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1355,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 2U))));
        bufp->chgBit(oldp+1356,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1357,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 1U))));
        bufp->chgBit(oldp+1358,((1U & (vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1359,((1U & vlSelfRef.tbench__DOT__singlecycle__DOT__operand_a)));
        bufp->chgBit(oldp+1360,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins4_00__sel));
        bufp->chgBit(oldp+1361,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins8_00__sel));
        bufp->chgBit(oldp+1362,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_00__sel));
        bufp->chgBit(oldp+1363,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__ALU3__DOT__sl__DOT____Vcellinp__ins_32__sel));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[8U])) {
        bufp->chgIData(oldp+1364,(vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data),32);
        bufp->chgIData(oldp+1365,(vlSelfRef.tbench__DOT__singlecycle__DOT__next_pc),32);
        bufp->chgBit(oldp+1366,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__en_wire));
        bufp->chgBit(oldp+1367,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__en_wire2));
        bufp->chgBit(oldp+1368,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__rd_wire));
        bufp->chgIData(oldp+1369,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__datainD),32);
        bufp->chgIData(oldp+1370,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__datainO),32);
        bufp->chgIData(oldp+1371,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ld_data_temp),32);
        bufp->chgCData(oldp+1372,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__code),2);
        bufp->chgCData(oldp+1373,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__io_code),3);
        bufp->chgBit(oldp+1374,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__ack2));
        bufp->chgIData(oldp+1375,((0x3ffffU & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data)),18);
        bufp->chgBit(oldp+1376,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_WREN));
        bufp->chgBit(oldp+1377,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT____Vcellinp__DataMem__i_RDEN));
        bufp->chgCData(oldp+1378,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__sram_state_d),3);
        bufp->chgIData(oldp+1379,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__wdata_d),32);
        bufp->chgCData(oldp+1380,(vlSelfRef.tbench__DOT__singlecycle__DOT__lsunit__DOT__DataMem__DOT__bmask_d),4);
        bufp->chgCData(oldp+1381,((0x3fU & vlSelfRef.tbench__DOT__singlecycle__DOT__alu_data)),6);
    }
    bufp->chgBit(oldp+1382,(vlSelfRef.tbench__DOT__i_clk));
    bufp->chgBit(oldp+1383,(vlSelfRef.tbench__DOT__i_reset));
    bufp->chgIData(oldp+1384,(vlSelfRef.tbench__DOT__singlecycle__DOT__alunit__DOT__reg_shift),32);
}

void Vtbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_cleanup\n"); );
    // Init
    Vtbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbench___024root*>(voidSelf);
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
