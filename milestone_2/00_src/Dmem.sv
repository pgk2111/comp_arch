	module Dmem (
		 input logic clk,
		 input logic rst,
		 input logic [12:0] address,
		 input logic [31:0] data_in,
		 output logic [31:0] data_out,
		 input logic we
	);



logic [31:0] mem [8191:0];
integer i ;


	always_ff @(posedge clk) begin
		if(!rst) begin
        	for ( i = 0 ; i < 8192 ;i = i +1) begin
				mem[i] <= 32'b0;
			end
		end else if (we) begin
			 mem[address] <= data_in ;
		 end
	end
	
always_comb begin
	data_out = mem[address];
end




	endmodule : Dmem
