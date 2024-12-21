module IF_ID_reg(
 input         IF_ID_en,
 input         flush,
 input         clk,
 input         rst_n,
 //wire for instruction
 input        [31:0] instr_i,
 output logic [31:0] instr_d,
 //wire for pc
 input        [31:0] pc_i,
 output logic [31:0] pc_d,
 //wire for predict
 input        predict,
 output logic predict_d
);

always_ff @(posedge clk) begin
 if (!rst_n || flush) begin
  instr_d <= 32'b0;
  pc_d <= 32'b0;
  predict_d <= 1'b0;
 end else if (IF_ID_en) begin
  instr_d <= instr_i ;
  pc_d <= pc_i;
  predict_d <= predict;
 end
end

endmodule : IF_ID_reg
