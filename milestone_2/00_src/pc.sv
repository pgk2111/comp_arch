module pc (
 input  logic        clk_i,
 input  logic        rst_n,
 input  logic        stall,
 input  logic [31:0] datain,
 output logic [31:0] pc
);



always_ff @(posedge clk_i) begin : proc_pc
 if (!rst_n) begin
  pc <= 32'b0 ;
 end else if(!stall) begin
  pc <= datain ;
  end
 end
 
endmodule : pc
