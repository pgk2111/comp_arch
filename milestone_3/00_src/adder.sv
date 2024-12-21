module adder(
 input logic  [31:0] A,
 input logic  [31:0] B,
 input logic         add_check,
 input logic         sub_check,
 output logic [32:0] Sum
);

logic [32:0] reg_A, reg_B;
logic [32:0] carry;
logic   	    Cin;

assign reg_A = (add_check | sub_check) ? {A[31],A} : 33'b0;
assign reg_B = ({add_check,sub_check} == 2'b10) ? {B[31],B} : ({add_check,sub_check} == 2'b01) ? ~{B[31],B} :32'b0;
assign Cin   = (sub_check) ? 1'b1: 1'b0;


FullAdder FA0  (.A(reg_A[0]) , .B(reg_B[0]) , .Cin(Cin)     , .Sum(Sum[0]) , .Cout(carry[0]));
FullAdder FA1  (.A(reg_A[1]) , .B(reg_B[1]) , .Cin(carry[0]) , .Sum(Sum[1]) , .Cout(carry[1]));
FullAdder FA2  (.A(reg_A[2]) , .B(reg_B[2]) , .Cin(carry[1]) , .Sum(Sum[2]) , .Cout(carry[2]));
FullAdder FA3  (.A(reg_A[3]) , .B(reg_B[3]) , .Cin(carry[2]) , .Sum(Sum[3]) , .Cout(carry[3]));
FullAdder FA4  (.A(reg_A[4]) , .B(reg_B[4]) , .Cin(carry[3]) , .Sum(Sum[4]) , .Cout(carry[4]));
FullAdder FA5  (.A(reg_A[5]) , .B(reg_B[5]) , .Cin(carry[4]) , .Sum(Sum[5]) , .Cout(carry[5]));
FullAdder FA6  (.A(reg_A[6]) , .B(reg_B[6]) , .Cin(carry[5]) , .Sum(Sum[6]) , .Cout(carry[6]));
FullAdder FA7  (.A(reg_A[7]) , .B(reg_B[7]) , .Cin(carry[6]) , .Sum(Sum[7]) , .Cout(carry[7]));
FullAdder FA8  (.A(reg_A[8]) , .B(reg_B[8]) , .Cin(carry[7]) , .Sum(Sum[8]) , .Cout(carry[8]));
FullAdder FA9  (.A(reg_A[9]) , .B(reg_B[9]) , .Cin(carry[8]) , .Sum(Sum[9]) , .Cout(carry[9]));
FullAdder FA10 (.A(reg_A[10]), .B(reg_B[10]), .Cin(carry[9]) , .Sum(Sum[10]), .Cout(carry[10]));
FullAdder FA11 (.A(reg_A[11]), .B(reg_B[11]), .Cin(carry[10]), .Sum(Sum[11]), .Cout(carry[11]));
FullAdder FA12 (.A(reg_A[12]), .B(reg_B[12]), .Cin(carry[11]), .Sum(Sum[12]), .Cout(carry[12]));
FullAdder FA13 (.A(reg_A[13]), .B(reg_B[13]), .Cin(carry[12]), .Sum(Sum[13]), .Cout(carry[13]));
FullAdder FA14 (.A(reg_A[14]), .B(reg_B[14]), .Cin(carry[13]), .Sum(Sum[14]), .Cout(carry[14]));
FullAdder FA15 (.A(reg_A[15]), .B(reg_B[15]), .Cin(carry[14]), .Sum(Sum[15]), .Cout(carry[15]));
FullAdder FA16 (.A(reg_A[16]), .B(reg_B[16]), .Cin(carry[15]), .Sum(Sum[16]), .Cout(carry[16]));
FullAdder FA17 (.A(reg_A[17]), .B(reg_B[17]), .Cin(carry[16]), .Sum(Sum[17]), .Cout(carry[17]));
FullAdder FA18 (.A(reg_A[18]), .B(reg_B[18]), .Cin(carry[17]), .Sum(Sum[18]), .Cout(carry[18]));
FullAdder FA19 (.A(reg_A[19]), .B(reg_B[19]), .Cin(carry[18]), .Sum(Sum[19]), .Cout(carry[19]));
FullAdder FA20 (.A(reg_A[20]), .B(reg_B[20]), .Cin(carry[19]), .Sum(Sum[20]), .Cout(carry[20]));
FullAdder FA21 (.A(reg_A[21]), .B(reg_B[21]), .Cin(carry[20]), .Sum(Sum[21]), .Cout(carry[21]));
FullAdder FA22 (.A(reg_A[22]), .B(reg_B[22]), .Cin(carry[21]), .Sum(Sum[22]), .Cout(carry[22]));
FullAdder FA23 (.A(reg_A[23]), .B(reg_B[23]), .Cin(carry[22]), .Sum(Sum[23]), .Cout(carry[23]));
FullAdder FA24 (.A(reg_A[24]), .B(reg_B[24]), .Cin(carry[23]), .Sum(Sum[24]), .Cout(carry[24]));
FullAdder FA25 (.A(reg_A[25]), .B(reg_B[25]), .Cin(carry[24]), .Sum(Sum[25]), .Cout(carry[25]));
FullAdder FA26 (.A(reg_A[26]), .B(reg_B[26]), .Cin(carry[25]), .Sum(Sum[26]), .Cout(carry[26]));
FullAdder FA27 (.A(reg_A[27]), .B(reg_B[27]), .Cin(carry[26]), .Sum(Sum[27]), .Cout(carry[27]));
FullAdder FA28 (.A(reg_A[28]), .B(reg_B[28]), .Cin(carry[27]), .Sum(Sum[28]), .Cout(carry[28]));
FullAdder FA29 (.A(reg_A[29]), .B(reg_B[29]), .Cin(carry[28]), .Sum(Sum[29]), .Cout(carry[29]));
FullAdder FA30 (.A(reg_A[30]), .B(reg_B[30]), .Cin(carry[29]), .Sum(Sum[30]), .Cout(carry[30]));
FullAdder FA31 (.A(reg_A[31]), .B(reg_B[31]), .Cin(carry[30]), .Sum(Sum[31]), .Cout(carry[31]));
FullAdder FA32 (.A(reg_A[32]), .B(reg_B[32]), .Cin(carry[31]), .Sum(Sum[32]), .Cout(carry[32]));
	


endmodule : adder
