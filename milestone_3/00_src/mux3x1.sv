module mux3x1(
 input        [31:0] in0,
 input        [31:0] in1,
 input        [31:0] in2,
 input        [1:0]  sel,
 output logic [31:0] out
);

always_comb begin : proc_mux3
 unique case(sel)
  2'b00: out = in0;
  2'b01: out = in1;
  default: out = in2;
 endcase
end

endmodule : mux3x1
