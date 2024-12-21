module imem (
 input logic  [12:0] address,
 output logic [31:0] data_out
);

 

	// Memory array
 
reg [31:0] mem [8191:0];

initial begin
 $readmemh( "./../02_test/dump/mem.dump",mem );
end   

	
always_comb begin
	data_out <= mem[address];
end



endmodule : imem
