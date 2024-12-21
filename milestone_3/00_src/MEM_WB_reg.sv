module MEM_WB_reg(
 input         clk,
 input         rst_n,
 input         en,
 //wire for hazard
 input        [4:0]  rd_addr_m,
 output logic [4:0]  rd_addr_w,
 //wire for wb
 input  [31:0] alu_data_m,
 input  [31:0] ld_data_m,
 input         rd_wr_m,
 input         wb_sel_m,
 //output
 output logic [31:0] alu_data_w,
 output logic [31:0] ld_data_w,
 output logic        rd_wr_w,
 output logic        wb_sel_w
);

always_ff @(posedge clk) begin
 if (!rst_n) begin
  rd_addr_w <= 5'b0;
  alu_data_w <= 32'b0;
  ld_data_w <= 32'b0;
  rd_wr_w <= 1'b0;
  wb_sel_w <= 1'b0;
 end else if(en) begin
  rd_addr_w <= rd_addr_m;
  alu_data_w <= alu_data_m;
  ld_data_w <= ld_data_m;
  rd_wr_w <= rd_wr_m;
  wb_sel_w <= wb_sel_m;
 end
end

endmodule : MEM_WB_reg
