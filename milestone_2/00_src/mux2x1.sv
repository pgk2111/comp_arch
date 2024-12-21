module mux2x1(
 input  logic [31:0] in0,
 input  logic [31:0] in1,
 input  logic        sel,
 output logic [31:0] out
 );

always_comb begin : proc_mux2
  out = 32'b0;
 case(sel)
  1'b0: out = in0;
  1'b1: out = in1;
 endcase
end

endmodule : mux2x1
