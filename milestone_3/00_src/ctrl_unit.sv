module ctrl_unit (
 input  logic [31:0] instr,
 output logic [ 3:0] alu_op,
 output logic 		   rd_wren,
 output logic		   mem_wren,
 output logic        mem_rden,
 output logic [ 2:0] l_sel,
 output logic [ 1:0] s_sel,
 output logic 		   op_a_sel,
 output logic [ 1:0] op_b_sel,
 output logic        wb_sel,
 output logic        invalid,
 output logic        is_br,
 output logic        is_control,
 output logic [ 2:0] br_op,
 output logic [31:0] dataimm,
 output logic [ 4:0] rs1_addr,
 output logic [ 4:0] rs2_addr,
 output logic [ 4:0] rd_addr
);



logic [3:0] code;
logic [2:0] funct3de;
logic [6:0] funct7de;
logic [1:0] iscode;
logic [2:0] imm_sel;




assign funct7de = instr[31:25];
assign funct3de = instr[14:12];
assign iscode   = instr[1:0];
assign rs1_addr = instr[19:15];
assign rs2_addr = instr[24:20];
assign rd_addr  = instr[11:7];

opcode_decode de1(.opcode(instr[6:2]) ,.code(code) ,.imm_sel(imm_sel));

immgen immidate (
.imm_sel(imm_sel) ,
.data   (instr[31:7]) ,
.datao  (dataimm)
);

always_comb begin : proc_opcode
alu_op = 4'b0000;
rd_wren = 1'b0;
mem_wren = 1'b0;
mem_rden = 1'b0;
l_sel = 3'b0;
s_sel = 2'b0;
op_a_sel = 1'b0;
op_b_sel = 2'b0;
wb_sel = 1'b0;
invalid = 1'b0;
is_control = 1'b0;
is_br = 1'b0;
br_op = 3'b0;
if(iscode == 2'b11) begin
 if (code == 4'b0001) begin
  op_a_sel = 1'b0;
  op_b_sel = 2'b0;
  wb_sel = 1'b0;
  rd_wren = 1'b1;
  mem_wren = 1'b0;
  case(funct3de)
   3'b000: begin
	         case(funct7de)
				 7'b0000000: alu_op = 4'b0001;
				 7'b0100000: alu_op = 4'b0010;
				 default : invalid = 1'b1;
				endcase
			  end
   3'b001: alu_op = 4'b1000;
   3'b010: alu_op = 4'b0011;
   3'b011: alu_op = 4'b0100;
   3'b100: alu_op = 4'b0101;
   3'b101: begin
	         case(funct7de)
				 7'b0000000: alu_op = 4'b1001;
				 7'b0100000: alu_op = 4'b1010;
				 default : invalid = 1'b1;
				endcase
			  end
   3'b110: alu_op = 4'b0110;
   3'b111: alu_op = 4'b0111;
  endcase
 end else if (code == 4'b0010) begin
  op_a_sel = 1'b0;
  op_b_sel = 2'b01;
  wb_sel = 1'b0;
  rd_wren = 1'b1;
  mem_wren = 1'b0;
  case(funct3de)
   3'b000: alu_op = 4'b0001; 
   3'b001: alu_op = 4'b1000;
   3'b010: alu_op = 4'b0011;
   3'b011: alu_op = 4'b0100;
   3'b100: alu_op = 4'b0101;
   3'b101: begin
	         case(funct7de)
				 7'b0000000: alu_op = 4'b1001;
				 7'b0100000: alu_op = 4'b1010;
				 default : invalid = 1'b1;
				endcase
			  end
   3'b110: alu_op = 4'b0110;
   3'b111: alu_op = 4'b0111;
  endcase
 end else if (code == 4'b0011) begin
  op_a_sel = 1'b0;
  op_b_sel = 2'b01;
  wb_sel = 1'b1;
  alu_op = 4'b0001;
  rd_wren = 1'b1;
  mem_rden = 1'b1;
  case(funct3de)
   3'b000: l_sel = 3'b001;
	3'b001: l_sel = 3'b010;
	3'b100: l_sel = 3'b011;
	3'b101: l_sel = 3'b100;
	3'b010: l_sel = 3'b101;
	default: invalid = 1'b1;
  endcase  
 end else if (code == 4'b0100) begin
  op_a_sel = 1'b0;
  op_b_sel = 2'b01;
  mem_wren = 1'b1;
  mem_rden = 1'b0;
  rd_wren = 1'b0;
  alu_op = 4'b0001;
  case(funct3de)
   3'b000: s_sel = 2'b01;
	3'b001: s_sel = 2'b10;
	3'b010: s_sel = 2'b11;
	default: invalid = 1'b1;
  endcase   
 end else if (code == 4'b0101) begin
  is_br = 1'b1;
  op_a_sel = 1'b1;
  op_b_sel = 2'b10;
  rd_wren = 1'b0;
  alu_op = 4'b0001;
  case(funct3de)
    3'b000: br_op = 3'b000;  
    3'b001: br_op = 3'b001;
    3'b100: br_op = 3'b010;
    3'b101: br_op = 3'b011;
    3'b110: br_op = 3'b100;
	 3'b111: br_op = 3'b101;
   default: invalid = 1'b1;     
  endcase  
 end else if (code == 4'b0110) begin
  is_control = 1'b1;
  op_a_sel = 1'b1;
  op_b_sel = 2'b10;
  alu_op = 4'b0001;
  wb_sel = 1'b0;
  br_op = 3'b110;
  rd_wren = 1'b1;
  mem_wren = 1'b0;
 end else if (code == 4'b0111) begin
  is_control = 1'b1;
  op_a_sel = 1'b1;
  op_b_sel = 2'b10;
  alu_op = 4'b0001;
  wb_sel = 1'b0;
  br_op = 3'b111;
  rd_wren = 1'b1;
  mem_wren = 1'b0;
 end else if (code == 4'b1000) begin
  op_b_sel = 2'b01;
  alu_op = 4'b1011;
  wb_sel = 1'b0;
  rd_wren = 1'b1;
  mem_wren = 1'b0;
 end else if (code == 4'b1001) begin
  op_a_sel = 1'b1;
  op_b_sel = 2'b01;
  alu_op = 4'b0001;
  wb_sel = 1'b0;
  rd_wren = 1'b1; 
  mem_wren = 1'b0;
 end else invalid = 1'b1;
end else invalid = 1'b1;
end


		  
   

endmodule : ctrl_unit
