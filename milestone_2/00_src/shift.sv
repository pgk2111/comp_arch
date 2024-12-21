module shift(A,B,sel,out
);
input logic [31:0] A;
input logic [ 4:0] B;
input logic [ 1:0] sel;

output logic [31:0] out;

logic [31:0] sr_out, sra_out, sl_out;
logic [31:0] temp, A_reversed;
logic        en;

always_comb begin
en = 1'b0;
out = 32'b0;
 case (sel) 
  2'b00: begin 
         out = sr_out;
         en = 1'b1;
         end
  2'b01: begin
    	    out = sra_out;
  	      en = 1'b1;
  	      end
  2'b10: begin
         out = temp;
         en = 1'b1;
         end
  default: begin 
           out = 32'b0;
           en = 1'b0;
           end 
 endcase
end

assign A_reversed = {A[0], A[1], A[2], A[3], A[4], A[5], A[6], A[7],
                         A[8], A[9], A[10], A[11], A[12], A[13], A[14], A[15],
                         A[16], A[17], A[18], A[19], A[20], A[21], A[22], A[23],
                         A[24], A[25], A[26], A[27], A[28], A[29], A[30], A[31]};
                         
assign temp = {sl_out[0], sl_out[1], sl_out[2], sl_out[3], sl_out[4], sl_out[5], sl_out[6], sl_out[7],
                         sl_out[8], sl_out[9], sl_out[10], sl_out[11], sl_out[12], sl_out[13], sl_out[14], sl_out[15],
                         sl_out[16], sl_out[17], sl_out[18], sl_out[19], sl_out[20], sl_out[21], sl_out[22], sl_out[23],
                         sl_out[24], sl_out[25], sl_out[26], sl_out[27], sl_out[28], sl_out[29], sl_out[30], sl_out[31]};

shifter sr (.inA(A),.inB(B),.en(en),.out(sr_out));
sra sra (.inA(A),.inB(B),.en(en),.out(sra_out));
shifter sl (.inA(A_reversed),.inB(B),.en(en),.out(sl_out));

endmodule 
