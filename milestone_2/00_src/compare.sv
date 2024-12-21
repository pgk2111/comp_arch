module compare(
 input logic [31:0] A,
 input logic [31:0] B,
 input logic        comp_check,
 output logic       Y,Z
);

logic [31:0] reg_A, reg_B;

assign reg_A = (comp_check) ? A : 0;
assign reg_B = (comp_check) ? B : 0;


comparator32 Comp1 (.A(reg_A) ,.B(reg_B) ,.Y(Y) ,.Z(Z));



endmodule : compare
