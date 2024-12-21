module alu(
 input  logic [31:0] i_operand_a,
 input  logic [31:0] i_operand_b,
 input  logic [ 3:0] i_alu_op,
 output logic [31:0] o_alu_data
);

logic        add_check, sub_check, comp_check;
logic [ 1:0] sel;
logic [31:0] reg_comp, reg_shift;
logic [32:0] reg_sum ;
wire Y,Z;
assign reg_comp = {31'b0,Z} ;		

always_comb begin : proc_alu
add_check = 0;
sub_check = 0;
comp_check = 0;
sel = 2'b11;
o_alu_data = 0;
 case(i_alu_op) 
  4'b0001: begin
           add_check = 1;
           sub_check = 0;
           o_alu_data = reg_sum[31:0]; 
           end
  4'b0010: begin 
           sub_check = 1;
           add_check = 0;
			  o_alu_data = reg_sum[31:0];
			  end
  4'b0011: begin 
           sub_check = 1;
           add_check = 0;
			  o_alu_data = {30'b0,reg_sum[32]};
			  end
  4'b0100: begin
           comp_check = 1;
			  o_alu_data = reg_comp;
			  end
  4'b0101: begin
           o_alu_data = i_operand_a ^ i_operand_b;
			  end
  4'b0110: begin
           o_alu_data = i_operand_a | i_operand_b;
			  end
  4'b0111: begin
           o_alu_data = i_operand_a & i_operand_b;
			  end
  4'b1000: begin
			  sel = 2'b10;
			  o_alu_data = reg_shift; 
			  end
  4'b1001: begin
			  sel = 2'b00;
			  o_alu_data = reg_shift;
			  end
  4'b1010: begin
			  sel = 2'b01;
			  o_alu_data = reg_shift;
			  end
  4'b1011: begin
           o_alu_data = i_operand_b;
			  end
  default: begin
           o_alu_data = 32'b0;
			  end 
 endcase
end



adder   ALU1 (.A(i_operand_a) ,.B(i_operand_b) ,.add_check(add_check) ,.sub_check(sub_check) ,.Sum(reg_sum));
compare ALU2 (.A(i_operand_a) ,.B(i_operand_b) ,.comp_check(comp_check) ,.Y(Y) ,.Z(Z));
shift   ALU3 (.A(i_operand_a),.B(i_operand_b[4:0]),.sel(sel),.out(reg_shift));	



  

endmodule : alu
