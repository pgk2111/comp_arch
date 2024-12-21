module singlecycle(
 input logic i_clk,
 input logic i_rst_n,
 //debug
 output logic [31:0] o_pc_debug,
 output logic 			o_insn_vld,
 //io
 input logic  [31:0] i_io_sw ,
 output logic [31:0] o_io_lcd ,
 output logic [31:0] o_io_ledg,
 output logic [31:0] o_io_ledr,
 output logic [ 6:0] o_io_hex0,
 output logic [ 6:0] o_io_hex1,
 output logic [ 6:0] o_io_hex2,
 output logic [ 6:0] o_io_hex3,
 output logic [ 6:0] o_io_hex4,
 output logic [ 6:0] o_io_hex5,
 output logic [ 6:0] o_io_hex6,
 output logic [ 6:0] o_io_hex7
 /*sram
 output logic [17:0] sram_add,
 inout  wire  [15:0] sram_dq,
 output logic		     	sram_ce,
 output logic		    	 sram_we,
 output logic			     sram_oe,
 output logic			     sram_lb,
 output logic			     sram_ub */
);

// verilator lint_off UNOPTFLAT
//drive signal
logic [32:0] pc_four;
logic [31:0] address ;
logic [31:0] datawb, data1, data2, dataimm, alu_data, ld_data ;
logic        rd_wren, op_asel, op_bsel, br_uns, less, equal, mem_wren, mem_rden, pcsel;
logic  		 ack, stall;
logic [ 3:0] op;
logic [ 2:0] imm_sel, l_sel;
logic [ 1:0] wb_sel, s_sel;
logic [ 4:0] rs1_addr, rs2_addr, rd_addr;
logic [31:0] instruction;
logic [31:0] next_pc ;
logic [31:0] operand_a, operand_b;
logic [ 3:0] i_io_btn;
logic		 invalid;

assign rs1_addr = instruction[19:15];
assign rs2_addr = instruction[24:20];
assign rd_addr = instruction [11:7];

always_ff @(posedge i_clk) begin
 if(!i_rst_n) o_pc_debug <= 32'b0;
else o_pc_debug <= address;
end

always_ff @(posedge i_clk) begin
 if(!i_rst_n) o_insn_vld <= 1'b0;
else o_insn_vld <= ~invalid;
end

// verilator lint_on UNOPTFLAT

// verilator lint_off UNOPTFLAT
mux2x1 muxpc (.in0(pc_four[31:0]) ,.in1(alu_data) ,.sel(pcsel) ,.out(next_pc));

adder Counter (.A(address) ,.B(32'b0100) ,.add_check(1'b1) ,.sub_check(1'b0) ,.Sum(pc_four));

pc Count (
.clk_i(i_clk),
.rst_n(i_rst_n),
.stall(stall),
.datain(next_pc),
.pc(address));

imem Instrmem (
.address(address[14:2]) ,
.data_out(instruction));

regfile registers (
.i_clk(i_clk) ,
.i_rst(i_rst_n) ,
.i_rs1_addr(rs1_addr) ,
.i_rs2_addr(rs2_addr) ,
.i_rd_addr(rd_addr) ,
.i_rd_data(datawb) ,
.i_rd_wren(rd_wren) ,
.o_rs1_data(data1) ,
.o_rs2_data(data2));

ctrl_unit ctrl (
.instr(instruction) ,
.less(less) ,
.equal(equal) ,
.alu_op(op) ,
.imm_sel(imm_sel) ,
.br_sel(pcsel) ,
.br_unsinged(br_uns) ,
.rd_wren(rd_wren) ,
.mem_wren(mem_wren) ,
.mem_rden(mem_rden),
.l_sel(l_sel) ,
.s_sel(s_sel) ,
.op_a_sel(op_asel) ,
.op_b_sel(op_bsel) ,
.wb_sel(wb_sel),
.invalid(invalid));

immgen immidate (
.imm_sel(imm_sel) ,
.data(instruction[31:7]) ,
.datao(dataimm));

mux2x1 mux1 (.in0(data1) ,.in1(address) ,.sel(op_asel) ,.out(operand_a));
mux2x1 mux2 (.in0(data2) ,.in1(dataimm) ,.sel(op_bsel) ,.out(operand_b));
brc bru (.i_rs1_data(data1) ,.i_rs2_data(data2) ,.i_br_un(br_uns) ,.o_br_less(less) ,.o_br_equal(equal));	
alu alunit (.i_operand_a(operand_a) ,.i_operand_b(operand_b) ,.i_alu_op(op) ,.o_alu_data(alu_data));

lsu lsunit (
.i_clk(i_clk) ,
.i_rst(i_rst_n) ,
.i_lsu_addr(alu_data) ,
.i_st_data(data2) ,
.i_lsu_wren(mem_wren) ,
.rd_en(mem_rden),
.s_sel(s_sel) ,
.l_sel(l_sel) ,
.i_io_sw(i_io_sw ) ,
.i_io_btn(i_io_btn),
.ack(ack),
.o_ld_data(ld_data) ,
.o_io_lcd(o_io_lcd) ,
.o_io_ledg(o_io_ledg) ,
.o_io_ledr(o_io_ledr) ,
.o_io_hex0(o_io_hex0) ,
.o_io_hex1(o_io_hex1) ,
.o_io_hex2(o_io_hex2) ,
.o_io_hex3(o_io_hex3) ,
.o_io_hex4(o_io_hex4) ,
.o_io_hex5(o_io_hex5) ,
.o_io_hex6(o_io_hex6) ,
.o_io_hex7(o_io_hex7)
/*
.sram_add(sram_add),
.sram_dq(sram_dq),
.sram_ce(sram_ce),
.sram_we(sram_we),
.sram_oe(sram_oe),
.sram_lb(sram_lb),
.sram_ub(sram_ub)*/
);

mux3x1 mux3 (.in0(alu_data) ,.in1(ld_data) ,.in2(pc_four[31:0]) ,.sel(wb_sel) ,.out(datawb));

always_comb begin
  stall = 1'b0;
if (!ack) begin
	if (mem_wren || mem_rden) stall = 1'b1;
	else stall = 1'b0;
end else begin
	stall = 1'b0;
end 
end
// verilator lint_on UNOPTFLAT



endmodule 

