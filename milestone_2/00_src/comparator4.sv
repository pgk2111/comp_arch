module comparator4 (
 input logic [3:0] A,
 input logic [3:0] B,
 input logic       eq,
 input logic       lr,
 input logic       sml,
 output logic      X,Y,Z
);

/* verilator lint_off UNOPTFLAT */
logic [3:0] A_n,B_n;
logic       T3,T2,T1,T0;
logic       H3,H2,H1,H0;
logic       X_temp,Y_temp,Z_temp;

assign A_n = ~A;
assign B_n = ~B;
assign T3 = A[3] ^ B[3];
assign T2 = A[2] ^ B[2];
assign T1 = A[1] ^ B[1];
assign T0 = A[0] ^ B[0];
assign H3 = ~T3;
assign H2 = ~T2;
assign H1 = ~T1;
assign H0 = ~T0;
assign X_temp = (A[3] & B_n[3])	| (A[2] & B_n[2] & H3) | (A[1] & B_n[1] & H3 & H2) | (A[0] & B_n[0] & H3 & H2 & H1);
assign Y_temp = H3 & H2 & H1 & H0;
assign Z_temp = (A_n[3] & B[3])	| (A_n[2] & B[2] & H3) | (A_n[1] & B[1] & H3 & H2) | (A_n[0] & B[0] & H3 & H2 & H1);


// verilator lint_off NOLATCH

assign X =(Y_temp) ? lr : X_temp;
assign Y =(Y_temp) ? eq : Y_temp;
assign Z =(Y_temp) ? sml : Z_temp;



// verilator lint_on NOLATCH
/* verilator lint_on UNOPTFLAT */

endmodule : comparator4
