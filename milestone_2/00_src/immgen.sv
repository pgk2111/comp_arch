module immgen(
 input logic  [ 2:0] imm_sel,
 input logic  [24:0] data,
 output logic [31:0] datao
);


always_comb begin : proc_imm
  datao = 32'b0;
 case(imm_sel)
  3'b001:begin
         datao = {{20{data[24]}},data[24:13]};
			end
  3'b010:begin
         datao = {{20{data[24]}},data[24:18],data[4:0]};
			end
  3'b011:begin
         datao = {{19{data[24]}},data[24],data[0],data[23:18],data[4:1],1'b0};
			end  
  3'b100:begin
         datao = {data[24:5],12'b0};
			end
  3'b101:begin
         datao = {{11{data[24]}},data[24],data[12:5],data[13],data[23:14],1'b0};
			end
  default:datao = 32'b0;
 endcase
end 

endmodule : immgen
