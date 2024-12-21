module regfile(
 input logic		  i_clk,
 input logic		  i_rst,
 input logic [ 4:0] i_rs1_addr,
 input logic [ 4:0] i_rs2_addr,
 input logic [ 4:0] i_rd_addr,
 input logic [31:0] i_rd_data,
 input logic		  i_rd_wren, 
 
 output logic [31:0] o_rs1_data,
 output logic [31:0] o_rs2_data
);

integer i;
reg [31:0] register [0:31] ;

always_ff @(posedge i_clk) begin : proc_reg
 if (!i_rst) begin
  for ( i = 0; i < 32 ; i=i+1) begin
    register[i] <= 32'b0;
	end
 end else if (i_rd_wren) begin
   register[i_rd_addr] <= i_rd_data  ;	
 end
end

assign o_rs1_data = (i_rs1_addr == 0) ? 32'b0:register[i_rs1_addr] ;
assign o_rs2_data = (i_rs2_addr == 0) ? 32'b0:register[i_rs2_addr] ;




endmodule : regfile
