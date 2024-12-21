module ID_EX_reg(
 input               clk,
 input               rst_n,
 input					en,
 input        [31:0] pc_d,
 output logic [31:0] pc_e,
 input               flush,
 //wire for hazard
 input        [4:0]  rs1_addr_d,
 input        [4:0]  rs2_addr_d,
 input        [4:0]  rd_addr_d,
 output logic [4:0]  rs1_addr_e,
 output logic [4:0]  rs2_addr_e,
 output logic [4:0]  rd_addr_e,
 //wire from control unit
 input        [3:0]  alu_op_d,
 input        [2:0]  br_op_d,
 input               is_control_d,
 input               is_br_d,
 input               rd_wr_d,
 input               mem_wr_d,
 input               mem_rd_d,
 input        [2:0]  l_sel_d,
 input        [1:0]  s_sel_d,
 input               op_a_sel_d,
 input        [1:0]  op_b_sel_d,
 input               wb_sel_d,
 input        [31:0] dataimm_d,
 input        [31:0] rs1_data_d,
 input        [31:0] rs2_data_d,
 output logic [3:0]  alu_op_e,
 output logic [2:0]  br_op_e,
 output logic        is_control_e,
 output logic        is_br_e,
 output logic        rd_wr_e,
 output logic        mem_wr_e,
 output logic        mem_rd_e,
 output logic [2:0]  l_sel_e,
 output logic [1:0]  s_sel_e,
 output logic        op_a_sel_e,
 output logic [1:0]  op_b_sel_e,
 output logic        wb_sel_e,
 output logic [31:0] dataimm_e,
 output logic [31:0] rs1_data_e,
 output logic [31:0] rs2_data_e,
 //wire for predict
 input        predict_d,
 output logic predict_e,
 //wire for invalid
 input 		  invalid_d,
 output logic invalid_e
);

always_ff @(posedge clk) begin
 if (!rst_n || flush) begin
  pc_e <= 32'b0;
  rs1_addr_e <= 5'b0;
  rs2_addr_e <= 5'b0;
  rd_addr_e <= 5'b0;
  alu_op_e <= 4'b0;
  br_op_e <= 3'b0;
  is_control_e <= 1'b0;
  is_br_e <= 1'b0;
  rd_wr_e <= 1'b0;
  mem_wr_e <= 1'b0;
  mem_rd_e <= 1'b0;
  l_sel_e <= 3'b0;
  s_sel_e <= 2'b0;
  op_a_sel_e <= 1'b0;
  op_b_sel_e <= 2'b0;
  wb_sel_e <= 1'b0;
  dataimm_e <= 32'b0;
  rs1_data_e <= 32'b0;
  rs2_data_e <= 32'b0;
  predict_e <= 1'b0;
  invalid_e <= 1'b0;
 end else if (en) begin
  pc_e <= pc_d;
  rs1_addr_e <= rs1_addr_d;
  rs2_addr_e <= rs2_addr_d;
  rd_addr_e <= rd_addr_d;
  alu_op_e <= alu_op_d;
  br_op_e <= br_op_d;
  is_control_e <= is_control_d;
  is_br_e <= is_br_d;
  rd_wr_e <= rd_wr_d;
  mem_wr_e <= mem_wr_d;
  mem_rd_e <= mem_rd_d;
  l_sel_e <= l_sel_d;
  s_sel_e <= s_sel_d;
  op_a_sel_e <= op_a_sel_d;
  op_b_sel_e <= op_b_sel_d;
  wb_sel_e <= wb_sel_d;
  dataimm_e <= dataimm_d;
  rs1_data_e <= rs1_data_d;
  rs2_data_e <= rs2_data_d;
  predict_e <= predict_d;
  invalid_e <= invalid_d;
 end
end

endmodule : ID_EX_reg

  
