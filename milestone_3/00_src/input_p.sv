module input_p(
 input  logic    	   rst,
 input  logic [2:0]  code,
 input  logic [3:0]  btn,
 input  logic [31:0] sw,
 output logic [31:0] in_out
);

always_comb begin
 if(!rst) begin
  in_out = 0;
 end else begin
   case(code)
		3'b001: in_out = {28'b0,btn};
		3'b010: in_out = sw;
		default: in_out = 0;
	endcase
   end
end

endmodule : input_p
