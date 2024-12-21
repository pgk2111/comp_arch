module EX_MEM_reg(
 input               clk,
 input               rst_n,
 input					en,
 input               flush,
 input        [31:0] pc_e,
 output logic [31:0] pc_m,
 //wire for hazard
 input        [4:0] rd_addr_e,
 output logic [4:0] rd_addr_m,
 //wire for memory
 input        [31:0] alu_data_e,
 input        [31:0] write_data_e,
 input               rd_wr_e,
 input               mem_wr_e,
 input               mem_rd_e,
 input        [2:0]  br_op_e,
 input        [2:0]  l_sel_e,
 input        [1:0]  s_sel_e, 
 input               wb_sel_e,
 input               is_taken_e,
 input               is_br_e,
 input               predict_e,
 input        [31:0] pc_bru_e,
 output logic [31:0] alu_data_m,
 output logic [31:0] write_data_m,
 output logic        rd_wr_m,
 output logic        mem_wr_m,
 output logic        mem_rd_m,
 output logic [2:0]  br_op_m,
 output logic [2:0]  l_sel_m,
 output logic [1:0]  s_sel_m, 
 output logic        wb_sel_m,
 output logic        is_taken_m,
 output logic        is_br_m,
 output logic        predict_m,
 output logic [31:0] pc_bru_m,
 //wire for invalid
 input 		  invalid_e,
 output logic invalid_m
);

always_ff @(posedge clk) begin
 if (!rst_n || flush) begin
  rd_addr_m <= 5'b0;
  alu_data_m <= 32'b0;
  write_data_m <= 32'b0;
  rd_wr_m <= 1'b0;
  mem_wr_m <= 1'b0;
  mem_rd_m <= 1'b0;
  l_sel_m <= 3'b0;
  s_sel_m <= 2'b0;
  wb_sel_m <= 1'b0;
  is_taken_m <= 1'b0;
  pc_bru_m <= 32'b0;
  is_br_m <= 1'b0;
  predict_m <= 1'b0;
  pc_m <= 32'b0;
  br_op_m <= 3'b0;
  invalid_m <=1'b0;
 end else if (en) begin
  rd_addr_m <= rd_addr_e;
  alu_data_m <= alu_data_e;
  write_data_m <= write_data_e;
  rd_wr_m <= rd_wr_e;
  mem_wr_m <= mem_wr_e;
  mem_rd_m <= mem_rd_e;
  l_sel_m <= l_sel_e;
  s_sel_m <= s_sel_e;
  wb_sel_m <= wb_sel_e;
  is_taken_m <= is_taken_e;
  pc_bru_m <= pc_bru_e;
  is_br_m <= is_br_e;
  predict_m <= predict_e;
  pc_m <= pc_e;
  br_op_m <= br_op_e;
  invalid_m <= invalid_e;
 end
end

endmodule : EX_MEM_reg
  


