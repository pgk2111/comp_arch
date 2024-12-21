module FullAdder(
    input logic A, 
    input logic B, 
    input logic Cin, 
    output logic Sum, 
    output logic Cout 
);

logic X;

assign X = A ^ B;
assign Sum = X ^ Cin;
assign Cout = (A & B) | (X & Cin);

endmodule : FullAdder
