module singlecycle(
 input logic i_clk,
 input logic i_rst_n,
 //debug
 output logic [31:0] o_pc_debug,
 output logic 			o_insn_vld,
 //in
 input logic  [31:0] i_io_sw ,
 input logic  [ 3:0] i_io_btn,
 //out
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
 //sram
/*
 output logic [17:0] sram_add,
 inout  wire  [15:0] sram_dq,
 output logic		   sram_ce,
 output logic		   sram_we,
 output logic			sram_oe,
 output logic			sram_lb,
 output logic			sram_ub*/
);


//wire for fetching
logic [31:0] pc_i, next_pc, instr_i, pc_predict;
logic [32:0] pc_four;
logic        IF_ID_en, PC_en;
logic        inst_flush;
//wire for decode
logic [31:0] instr_d, pc_d, rs1_data_d, rs2_data_d, dataimm_d;
logic [4:0]  rs1_addr_d, rs2_addr_d, rd_addr_d;
logic [3:0]  alu_op_d;
logic [2:0]  br_op_d, l_sel_d;
logic [1:0]  s_sel_d, op_b_sel_d;
logic        is_control_d, rd_wr_d, mem_wr_d, mem_rd_d, op_a_sel_d, wb_sel_d, is_br_d;
logic        flush;
//wire for execute
logic [31:0] pc_e, rs1_data_e, rs2_data_e, dataimm_e, operand_a, operand_b, pc_bru_e, data1, data2, alu_data_e;
logic [4:0]  rs1_addr_e, rs2_addr_e, rd_addr_e;
logic [3:0]  alu_op_e;
logic [2:0]  br_op_e, l_sel_e;
logic [1:0]  s_sel_e, op_b_sel_e;
logic        is_control_e, rd_wr_e, mem_wr_e, mem_rd_e, op_a_sel_e, is_taken_e, wb_sel_e, is_br_e;
//wire for memory
logic [31:0] alu_data_m, ld_data_m, write_data_m, pc_bru_m, pc_m;
logic [4:0]  rd_addr_m;
logic [2:0]  l_sel_m, br_op_m;
logic [1:0]  s_sel_m;
logic        is_taken_m, wb_sel_m, rd_wr_m, mem_wr_m, mem_rd_m, is_br_m;
logic        ex_flush;
//wire for writeback
logic [31:0] alu_data_w, ld_data_w, datawb;
logic [4:0]  rd_addr_w;
logic        wb_sel_w, rd_wr_w;
//wire for debug
logic [31:0] datafinal;
logic [4:0]  rd_addr_h;
logic        rd_wr_h;
//wire for forwading
logic  [1:0]  forwardA, forwardB ;
logic         correct_o;
logic         predicted_flag, hit, j_flag, br_flag;
logic  [31:0] pc_stall, pc_real;   
logic         predict, predict_d, predict_e, predict_m; 
//wire for BTB
logic         BTB_en;
//logic for SDRAM
logic			  ack;
logic             stall;
//flag
assign j_flag = ((instr_i[6:0] == 7'b1101111) || (instr_i[6:0] == 7'b1100111)) ? 1'b1 : 1'b0;
assign br_flag = (instr_i[6:0] == 7'b1100011) ? 1'b1 : 1'b0;
assign predict = ((predicted_flag && hit) || (j_flag && hit)) ? 1'b1 : 1'b0 ;
//pc debug
always @(posedge i_clk) begin
	if(!i_rst_n) o_pc_debug <= 0;
	else o_pc_debug <= pc_m;
end
//insn valid
logic invalid_d, invalid_e, invalid_m;
always @(posedge i_clk) begin
	if(!i_rst_n) o_insn_vld <= 0;
	else o_insn_vld <= ~invalid_m;
end

//NOP_count
/*
logic [31:0] count;
always_comb begin
	if(!i_rst_n) count <= 0;
	else if(correct_o) count <= count + 1'b1;
end
*/
//fetch instruction

//mux for nextpc
mux2x1 muxstall (.in0(pc_four[31:0]), .in1(pc_real),.sel(correct_o), .out(pc_stall));
mux2x1 muxpc    (.in0(pc_stall)     , .in1(pc_predict),.sel(predict && !correct_o), .out(next_pc));
mux2x1 muxreal  (.in0(alu_data_m)   , .in1(pc_bru_m), .sel(is_taken_m), .out(pc_real));

//+4 pc
adder Counter (.A(pc_i) ,.B(32'b0100) ,.add_check(1'b1) ,.sub_check(1'b0) ,.Sum(pc_four));

//pc register
pc PCount(
.clk_i (i_clk),
.rst_n (i_rst_n),
.PC_en (PC_en && !stall),
.datain(next_pc),
.pc    (pc_i)
);

//Instr memory
imem Instrmem(
.address (pc_i[14:2]),
.data_out(instr_i)
);

//reg for IF to ID
IF_ID_reg reg1(
.IF_ID_en (IF_ID_en && !stall),
.flush    (inst_flush),
.clk      (i_clk),
.rst_n    (i_rst_n),
.instr_i  (instr_i),
.instr_d  (instr_d),
.pc_i     (pc_i),
.pc_d     (pc_d),
.predict  (predict),
.predict_d(predict_d)
);


//decode
// 32 32bit registers
regfile registers (
.i_clk     (i_clk),
.i_rst     (i_rst_n),
.i_rs1_addr(rs1_addr_d),
.i_rs2_addr(rs2_addr_d),
.i_rd_addr (rd_addr_w),
.i_rd_data (datawb),
.i_rd_wren (rd_wr_w),
.o_rs1_data(rs1_data_d),
.o_rs2_data(rs2_data_d)
);

// ctrl unit for decode
ctrl_unit ctrl (
.instr     (instr_d),
.alu_op    (alu_op_d),
.br_op     (br_op_d),
.is_control(is_control_d),
.is_br     (is_br_d),
.rd_wren   (rd_wr_d),
.mem_wren  (mem_wr_d),
.mem_rden  (mem_rd_d),
.l_sel     (l_sel_d),
.s_sel     (s_sel_d),
.op_a_sel  (op_a_sel_d),
.op_b_sel  (op_b_sel_d),
.wb_sel    (wb_sel_d),
.rs1_addr  (rs1_addr_d),
.rs2_addr  (rs2_addr_d),
.rd_addr   (rd_addr_d),
.dataimm   (dataimm_d),
.invalid   (invalid_d)
);

// reg for ID to EX
ID_EX_reg reg2(
.clk         (i_clk),
.rst_n       (i_rst_n),
.pc_d        (pc_d),
.pc_e        (pc_e),
.en          (!stall),
.flush       (flush),
.rs1_addr_d  (rs1_addr_d),
.rs2_addr_d  (rs2_addr_d),
.rd_addr_d   (rd_addr_d),
.rs1_addr_e  (rs1_addr_e),
.rs2_addr_e  (rs2_addr_e),
.rd_addr_e   (rd_addr_e),
.alu_op_d    (alu_op_d),
.br_op_d     (br_op_d),
.is_control_d(is_control_d),
.is_br_d     (is_br_d),
.rd_wr_d     (rd_wr_d),
.mem_wr_d    (mem_wr_d),
.mem_rd_d    (mem_rd_d),
.l_sel_d     (l_sel_d),
.s_sel_d     (s_sel_d),
.op_a_sel_d  (op_a_sel_d),
.op_b_sel_d  (op_b_sel_d),
.wb_sel_d    (wb_sel_d),
.dataimm_d   (dataimm_d),
.rs1_data_d  (rs1_data_d),
.rs2_data_d  (rs2_data_d),
.alu_op_e    (alu_op_e),
.br_op_e     (br_op_e),
.is_control_e(is_control_e),
.is_br_e     (is_br_e),
.rd_wr_e     (rd_wr_e),
.mem_wr_e    (mem_wr_e),
.mem_rd_e    (mem_rd_e),
.l_sel_e     (l_sel_e),
.s_sel_e     (s_sel_e),
.op_a_sel_e  (op_a_sel_e),
.op_b_sel_e  (op_b_sel_e),
.wb_sel_e    (wb_sel_e),
.dataimm_e   (dataimm_e),
.rs1_data_e  (rs1_data_e),
.rs2_data_e  (rs2_data_e),
.predict_d   (predict_d),
.predict_e   (predict_e),
.invalid_d   (invalid_d),
.invalid_e   (invalid_e)
);

//execute

//mux for forwading
mux4x1 muxA(
.in0(rs1_data_e),
.in1(datawb),
.in2(alu_data_m),
.in3(datafinal),
.sel(forwardA),
.out(data1)
);
mux4x1 muxB(
.in0(rs2_data_e),
.in1(datawb),
.in2(alu_data_m),
.in3(datafinal),
.sel(forwardB),
.out(data2)
);
mux2x1 mux1(
.in0(data1),
.in1(pc_e),
.sel(op_a_sel_e),
.out(operand_a)
);
mux3x1 mux2(
.in0(data2),
.in1(dataimm_e),
.in2(32'b0100),
.sel(op_b_sel_e),
.out(operand_b)
);
// branch unit/jump unit
bru brunit(
.is_control(is_control_e),
.is_br     (is_br_e),    
.rs1_data  (data1),
.rs2_data  (data2),
.imm       (dataimm_e),
.pc        (pc_e),
.bru_op    (br_op_e),
.is_taken  (is_taken_e),
.pc_bru    (pc_bru_e)
);	

//alu unit
alu alunit (
.i_operand_a(operand_a),
.i_operand_b(operand_b),
.i_alu_op   (alu_op_e),
.o_alu_data (alu_data_e)
);


// reg for EX to MEM
EX_MEM_reg reg3 (
.clk         (i_clk),
.rst_n       (i_rst_n),
.en          (!stall),
.flush       (ex_flush),
.pc_e        (pc_e),
.pc_m        (pc_m),
.rd_addr_e   (rd_addr_e),
.rd_addr_m   (rd_addr_m),
.alu_data_e  (alu_data_e),
.write_data_e(data2),
.rd_wr_e     (rd_wr_e),
.mem_wr_e    (mem_wr_e),
.mem_rd_e    (mem_rd_e),
.br_op_e     (br_op_e),
.l_sel_e     (l_sel_e),
.s_sel_e     (s_sel_e),
.wb_sel_e    (wb_sel_e),
.is_taken_e  (is_taken_e),
.is_br_e     (is_br_e),
.predict_e   (predict_e),
.pc_bru_e    (pc_bru_e),
.alu_data_m  (alu_data_m),
.write_data_m(write_data_m),
.rd_wr_m     (rd_wr_m),
.mem_wr_m    (mem_wr_m),
.mem_rd_m    (mem_rd_m),
.br_op_m     (br_op_m),
.l_sel_m     (l_sel_m),
.s_sel_m     (s_sel_m),
.wb_sel_m    (wb_sel_m),
.is_taken_m  (is_taken_m),
.is_br_m     (is_br_m),
.predict_m   (predict_m),
.pc_bru_m    (pc_bru_m),
.invalid_e   (invalid_e),
.invalid_m   (invalid_m)
);

//memmory access
//load store unit
lsu lsunit (
.i_clk     (i_clk),
.i_rst     (i_rst_n),
.i_lsu_addr(alu_data_m),
.i_st_data (write_data_m),
.i_lsu_wren(mem_wr_m),
.rd_en     (mem_rd_m),
.s_sel     (s_sel_m),
.l_sel     (l_sel_m),
.i_io_sw   (i_io_sw),
.i_io_btn  (i_io_btn),
.ack       (ack),
.o_ld_data (ld_data_m),
.o_io_lcd  (o_io_lcd),
.o_io_ledg (o_io_ledg),
.o_io_ledr (o_io_ledr),
.o_io_hex0 (o_io_hex0),
.o_io_hex1 (o_io_hex1),
.o_io_hex2 (o_io_hex2),
.o_io_hex3 (o_io_hex3),
.o_io_hex4 (o_io_hex4),
.o_io_hex5 (o_io_hex5),
.o_io_hex6 (o_io_hex6),
.o_io_hex7 (o_io_hex7)
/*
.sram_add(sram_add),
.sram_dq(sram_dq),
.sram_ce(sram_ce),
.sram_we(sram_we),
.sram_oe(sram_oe),
.sram_lb(sram_lb),
.sram_ub(sram_ub)*/
);


//reg for MEM to WB
MEM_WB_reg reg4(
.clk       (i_clk),
.rst_n     (i_rst_n),
.en        (!stall),
.rd_addr_m (rd_addr_m),
.rd_addr_w (rd_addr_w),
.alu_data_m(alu_data_m),
.ld_data_m (ld_data_m),
.rd_wr_m   (rd_wr_m),
.wb_sel_m  (wb_sel_m),
.alu_data_w(alu_data_w),
.ld_data_w (ld_data_w),
.rd_wr_w   (rd_wr_w),
.wb_sel_w  (wb_sel_w)
);

//mux for writeback
mux2x1 mux3(
.in0(alu_data_w),
.in1(ld_data_w),
.sel(wb_sel_w),
.out(datawb)
);
//reg for syns
WB_reg reg5(
.clk      (i_clk),
.rst      (i_rst_n),
.en       (!stall),
.rd_wr_w  (rd_wr_w),
.rd_addr_w(rd_addr_w),
.datawb   (datawb), 
.rd_wr_h  (rd_wr_h),
.rd_addr_h(rd_addr_h),
.datafinal(datafinal)
);

//fowarding unit
hazard forwading(
.rst_n    (i_rst_n),
.rd_wr_mem(rd_wr_m),
.rd_wr_wb (rd_wr_w),
.rd_wr_h  (rd_wr_h),
.rd_mem   (rd_addr_m),
.rd_wb    (rd_addr_w),
.rd_h     (rd_addr_h),
.rs1_addr (rs1_addr_e),
.rs2_addr (rs2_addr_e),
.forwardA (forwardA),
.forwardB (forwardB)
);

//hazard detect 
detector stalling(
.rst_n      (i_rst_n),
.wb_sel_e   (wb_sel_e),
.predict    (predict_m),
.is_taken   (is_taken_m),
.rd_addr_e  (rd_addr_e),
.rs1_addr_d (rs1_addr_d),
.rs2_addr_d (rs2_addr_d),
.IF_ID_en   (IF_ID_en),
.PC_en      (PC_en),
.BTB_en     (BTB_en),
.ID_EX_flush(flush),
.IF_ID_flush(inst_flush),
.EX_M_flush (ex_flush),
.correct_o  (correct_o)
);

//branch prediction unit
/*
predict_gshare #(
.GSHARE_BITS_NUM(10),
.OPTION_OPERAND_WIDTH(32)
)
prediction(
.clk           (i_clk),
.rst           (i_rst_n),
.predicted_flag(predicted_flag),
.is_taken      (is_taken_m),
.is_control    (is_br_e),
.is_br         (is_br_m),
.branch_pc     (pc_e),
.pc            (pc_i)
);*/


predict2bit prediction(
					.clk(i_clk),
					.rst(i_rst_n),
					.predicted_flag_o(predicted_flag),
					.is_taken(is_taken_m),
					.ex_br(br_flag),
					.is_br(is_br_m)
);

/*
simple prediction(
			.is_control(br_flag),
			.imm(instr_i[31]),
			.predicted_flag_o(predicted_flag)
);
*/
//branch target buffer
BTB #(
.ADDR_WIDTH(32),  // Width of the address
.TAG_WIDTH(20),
.BTB_SIZE(64)
)
BranchTargetBuffer (
.clk             (i_clk),
.reset           (i_rst_n),
.BTB_en          (BTB_en && !stall),
.pc              (pc_i),
.branch_pc       (pc_m),
.branch_taken    (is_taken_m),
.branch_target   (pc_bru_m),
.predicted_taken (hit),
.predicted_target(pc_predict) 
);

always_comb begin
  stall = 1'b0;
if (!ack) begin
	if (mem_wr_m || mem_rd_m) stall = 1'b1;
	else stall = 1'b0;
end else begin
	stall = 1'b0;
end 
end

// verilator lint_on UNOPTFLAT
endmodule 

