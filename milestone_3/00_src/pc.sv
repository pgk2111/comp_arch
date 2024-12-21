module pc (
 input               clk_i,
 input               rst_n,
 input               PC_en,
 input        [31:0] datain,
 output logic [31:0] pc
);



always_ff @(posedge clk_i) begin : proc_pc
 if (!rst_n) begin
  pc <= 32'b0 ;
 end else if (PC_en) begin
  pc <= datain ;
 end
end
 
endmodule : pc
