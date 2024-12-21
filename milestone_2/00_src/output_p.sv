module output_p (
 input 	logic		 clk,
 input 	logic		 rst,
 input  logic [31:0] st_data,
 input  logic [ 5:0] addr,
 input  logic [ 2:0] code,
 input  logic	     st_en,
 output logic [31:0] out,
 output logic [31:0] o_lcd,
 output logic [31:0] o_ledg,
 output logic [31:0] o_ledr,
 output logic [ 6:0] o_hex0,
 output logic [ 6:0] o_hex1,
 output logic [ 6:0] o_hex2,
 output logic [ 6:0] o_hex3,
 output logic [ 6:0] o_hex4,
 output logic [ 6:0] o_hex5,
 output logic [ 6:0] o_hex6,
 output logic [ 6:0] o_hex7
);


integer i;

// verilator lint_off BLKSEQ
logic [31:0] mem [63:0];

always_ff @(posedge clk ) begin : proc_reg
 if (!rst) begin
	o_hex0 <= 6'b0;
	o_hex1 <= 6'b0;
	o_hex2 <= 6'b0;
	o_hex3 <= 6'b0;
	o_hex4 <= 6'b0;
	o_hex5 <= 6'b0;
	o_hex6 <= 6'b0;
	o_hex7 <= 6'b0;
	o_ledr <= 32'b0;
	o_ledg <= 32'b0;
	o_lcd  <= 32'b0;
	for (i=0 ;i <64 ; i=i+1) begin
   mem[i] = 32'b0 ;
  end
 end else if (st_en) begin  
  mem[addr] <= st_data;
  case(code)
	3'b100: begin 
				case(addr[3:0])
					4'b0000: o_hex0 <= st_data[6:0];
					4'b0001: o_hex1 <= st_data[6:0];
					4'b0010: o_hex2 <= st_data[6:0];
					4'b0011: o_hex3 <= st_data[6:0];
					4'b0100: o_hex4 <= st_data[6:0];
					4'b0101: o_hex5 <= st_data[6:0];
					4'b0110: o_hex6 <= st_data[6:0];
					4'b0111: o_hex7 <= st_data[6:0];
				endcase
			  end				
	3'b110: o_ledr <= st_data ;
	3'b101: o_ledg <= st_data ;
   3'b011: o_lcd  <= st_data ;
	default: begin
	o_hex0 <= 6'b0;
	o_hex1 <= 6'b0;
	o_hex2 <= 6'b0;
	o_hex3 <= 6'b0;
	o_hex4 <= 6'b0;
	o_hex5 <= 6'b0;
	o_hex6 <= 6'b0;
	o_hex7 <= 6'b0;
	o_ledr <= 32'b0;
	o_ledg <= 32'b0;
	o_lcd  <= 32'b0;
  end
endcase  
end
end

always_comb begin
 out = mem[addr];
end

// verilator lint_on BLKSEQ




endmodule : output_p
