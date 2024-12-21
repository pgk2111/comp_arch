module comparator32(
 input  logic [31:0] A,
 input  logic [31:0] B,
 output logic        Y,Z 
);

logic [6:0] carry1,carry2,carry3;
logic       X ;

comparator4 C1 (.A(A[3:0])   ,.B(B[3:0])   ,.eq(1'b1)      ,.lr(1'b0)      ,.sml(1'b0)      ,.X(carry1[6]) ,.Y(carry2[6]) ,.Z(carry3[6]));
comparator4 C2 (.A(A[7:4])   ,.B(B[7:4])   ,.eq(carry2[6]) ,.lr(carry1[6]) ,.sml(carry3[6]) ,.X(carry1[5]) ,.Y(carry2[5]) ,.Z(carry3[5]));
comparator4 C3 (.A(A[11:8])  ,.B(B[11:8])  ,.eq(carry2[5]) ,.lr(carry1[5]) ,.sml(carry3[5]) ,.X(carry1[4]) ,.Y(carry2[4]) ,.Z(carry3[4]));
comparator4 C4 (.A(A[15:12]) ,.B(B[15:12]) ,.eq(carry2[4]) ,.lr(carry1[4]) ,.sml(carry3[4]) ,.X(carry1[3]) ,.Y(carry2[3]) ,.Z(carry3[3]));
comparator4 C5 (.A(A[19:16]) ,.B(B[19:16]) ,.eq(carry2[3]) ,.lr(carry1[3]) ,.sml(carry3[3]) ,.X(carry1[2]) ,.Y(carry2[2]) ,.Z(carry3[2]));
comparator4 C6 (.A(A[23:20]) ,.B(B[23:20]) ,.eq(carry2[2]) ,.lr(carry1[2]) ,.sml(carry3[2]) ,.X(carry1[1]) ,.Y(carry2[1]) ,.Z(carry3[1]));
comparator4 C7 (.A(A[27:24]) ,.B(B[27:24]) ,.eq(carry2[1]) ,.lr(carry1[1]) ,.sml(carry3[1]) ,.X(carry1[0]) ,.Y(carry2[0]) ,.Z(carry3[0]));
comparator4 C8 (.A(A[31:28]) ,.B(B[31:28]) ,.eq(carry2[0]) ,.lr(carry1[0]) ,.sml(carry3[0]) ,.X(X) ,.Y(Y) ,.Z(Z));


endmodule : comparator32


