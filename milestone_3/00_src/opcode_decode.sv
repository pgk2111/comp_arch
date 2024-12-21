module opcode_decode(
input logic  [4:0] opcode,
output logic [3:0] code,
output logic [2:0] imm_sel
);


always_comb begin : proc_code
  unique case(opcode)	
  5'b01100:begin
           code = 4'b0001;
			  imm_sel = 3'b000;
			  end
  5'b00100:begin
           code = 4'b0010;
			  imm_sel = 3'b001;
			  end
  5'b00000:begin
           code = 4'b0011;
			  imm_sel = 3'b001;
			  end
  5'b01000:begin
           code = 4'b0100;
			  imm_sel = 3'b010;
			  end
  5'b11000:begin
           code = 4'b0101;
			  imm_sel = 3'b011;
			  end
  5'b11011:begin
           code = 4'b0110;
			  imm_sel = 3'b101;
			  end
  5'b11001:begin
           code = 4'b0111;
			  imm_sel = 3'b001;
			  end
  5'b01101:begin
           code = 4'b1000;
	        imm_sel = 3'b100;		 
           end			 
  5'b00101:begin
           code = 4'b1001;
			  imm_sel = 3'b100;
			  end
   default:begin
           code = 4'b0000;
			  imm_sel = 3'b000;
			  end
 endcase
end

endmodule : opcode_decode
