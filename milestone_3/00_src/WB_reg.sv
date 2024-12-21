module WB_reg (
input               clk,
input               rst,
input					  en,
input               rd_wr_w,
input        [4:0]  rd_addr_w,
input        [31:0] datawb,
output logic        rd_wr_h,
output logic [4:0]  rd_addr_h,
output logic [31:0] datafinal
);

always_ff @(posedge clk) begin
 if (!rst) begin
  rd_addr_h <= 5'b0;
  rd_wr_h <= 1'b0;
  datafinal <= 32'b0;
 end else if (en) begin
  rd_addr_h <= rd_addr_w;
  rd_wr_h <= rd_wr_w;
  datafinal <= datawb;
 end
end

endmodule : WB_reg
