module mux2x1(
 input        [31:0] in0,
 input        [31:0] in1,
 input               sel,
 output logic [31:0] out
);

always_comb begin : proc_mux2
 case(sel)
  1'b0: out = in0;
  1'b1: out = in1;
 endcase
end

endmodule : mux2x1
