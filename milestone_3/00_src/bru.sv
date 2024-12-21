module bru (
    input logic         is_control,
    input logic         is_br,	 
    input logic  [31:0] rs1_data, 
	input logic  [31:0] rs2_data, 
    input logic  [31:0] imm,      
    input logic  [31:0] pc,       
    input logic  [2:0]  bru_op,    
    output logic        is_taken,       
    output logic [31:0] pc_bru   
);

logic br_predict, j_predict ;
logic less, equal ;
logic lessu, equalu;
logic [31:0] reg_A, reg_B, pc_bru_reg;
logic [32:0] reg_sub, reg_sum;
logic add_check, check;



assign is_taken = (br_predict || j_predict) ? 1'b1 : 1'b0 ;
assign less = (reg_sub[32] == 1'b1) ? 1'b1 : 1'b0;
assign equal = (reg_sub == 33'b0) ? 1'b1 : 1'b0;

always_comb begin 
check = 1'b0;
br_predict = 1'b0;
j_predict = 1'b0;
 if (is_control || is_br) begin
  check = 1;
  case(bru_op)
   3'b000: br_predict = (equal == 1'b1) ? 1'b1 : 1'b0 ;   
   3'b001: br_predict = (equal == 1'b1) ? 1'b0 : 1'b1 ;
   3'b010: br_predict = (less == 1'b1) ? 1'b1 : 1'b0 ;
   3'b011: br_predict = (less == 1'b1) ? 1'b0 : 1'b1 ; 
	3'b100: begin 
			  br_predict = (lessu == 1'b1) ? 1'b1 : 1'b0 ;
			  end
	3'b101: begin 
			  br_predict = (lessu == 1'b1) ? 1'b0 : 1'b1 ;
			  end	
	3'b110: br_predict = 1'b1;
	3'b111: j_predict = 1'b1;
  endcase
 end else begin
  check = 1'b0;
  br_predict = 1'b0;
  j_predict = 1'b0;
 end
end

always_comb begin
 add_check = 1'b0;
 pc_bru_reg = 32'b0;
 reg_A = 32'b0;
 reg_B = 32'b0;
 if (br_predict) begin
  reg_A = pc;
  reg_B = imm;
  add_check = 1'b1;
  pc_bru_reg = reg_sum[31:0];
 end else if (j_predict) begin
  reg_A = rs1_data;
  reg_B = imm;
  add_check = 1'b1;
  pc_bru_reg = reg_sum[31:0];
 end else begin
  add_check = 1'b0;
  pc_bru_reg = 32'b0;
  reg_A = 32'b0;
  reg_B = 32'b0;
 end
end

compare Comp1(
.A         (rs1_data),
.B         (rs2_data),
.comp_check(check),
.Y         (equalu),
.Z         (lessu)
);

adder Comp2(
.A			 (rs1_data),
.B			 (rs2_data),
.add_check(1'b0),
.sub_check(check),
.Sum		 (reg_sub)
);

adder ALU1(
.A        (reg_A),
.B        (reg_B),
.add_check(add_check),
.sub_check(1'b0),
.Sum      (reg_sum)
);

assign pc_bru = pc_bru_reg;

endmodule : bru
