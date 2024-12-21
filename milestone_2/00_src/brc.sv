module brc (
 input  logic [31:0] i_rs1_data,
 input  logic [31:0] i_rs2_data,
 input  logic  	     i_br_un,
 output logic		      o_br_less,
 output logic        o_br_equal
);

logic [31:0] reg_A,reg_B ;
logic [32:0] reg_sub;
logic        check, sub_check, Y, Z;


always_comb begin : proc_branch
check = 1'b0;
sub_check = 1'b0;
reg_A = 32'b0;
reg_B = 32'b0;
o_br_less = 1'b0;
o_br_equal = 1'b0;
 if (i_br_un == 1) begin
  reg_A = i_rs1_data;
  reg_B = i_rs2_data;
  check = 1'b1;
  o_br_less = Z;
  o_br_equal = Y;
 end else begin 
  reg_A = i_rs1_data;
  reg_B = i_rs2_data;
  sub_check = 1'b1;
  o_br_less = reg_sub[32];
  o_br_equal = (reg_sub == 33'b0) ? 1'b1 : 1'b0;
 end
end

compare Comp1 (.A(reg_A) ,.B(reg_B) ,.comp_check(check) ,.Y(Y) ,.Z(Z));
adder   Comp2 (.A(reg_A) ,.B(reg_B) ,.add_check(1'b0) ,.sub_check(sub_check) ,.Sum(reg_sub));
endmodule
