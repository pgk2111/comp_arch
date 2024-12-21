module Dmem (
 input logic         clk,
 input logic  [12:0] address,
 input logic  [31:0] data_in,
 output logic [31:0] data_out,
 input logic         we
);


	// Memory array
reg [31:0] mem [511:0];

  

always_ff @(posedge clk) begin
 if (we) begin 
  mem[address] <= data_in;
 end
end
	
always_comb begin
 data_out = mem[address];
end

endmodule : Dmem