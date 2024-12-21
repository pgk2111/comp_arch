module lsu(
 input logic 		i_clk,
 input logic        i_rst,
 input logic 		i_lsu_wren,
 input logic		rd_en,
 input logic [31:0] i_lsu_addr,
 input logic [31:0] i_st_data,
 input logic [ 2:0] l_sel,
 input logic [ 1:0] s_sel,
 input logic [31:0] i_io_sw,
 input logic [ 3:0] i_io_btn,
 //output
 output logic        ack,
 output logic [31:0] o_ld_data,
 output logic [31:0] o_io_lcd,
 output logic [31:0] o_io_ledg,
 output logic [31:0] o_io_ledr,
 output logic [ 6:0] o_io_hex0,
 output logic [ 6:0] o_io_hex1,
 output logic [ 6:0] o_io_hex2,
 output logic [ 6:0] o_io_hex3,
 output logic [ 6:0] o_io_hex4,
 output logic [ 6:0] o_io_hex5,
 output logic [ 6:0] o_io_hex6,
 output logic [ 6:0] o_io_hex7
 /*sdram conect
 output logic [17:0] sram_add,
 inout  wire  [15:0] sram_dq,
 output logic			     sram_ce,
 output logic		     	sram_we,
 output logic			     sram_oe,
 output logic			     sram_lb,
 output logic		     	sram_ub*/
);

logic        en_wire, en_wire2, rd_wire;
logic [31:0] datainD, datainO;
logic [31:0] dataD, dataO, dataI;
logic [31:0] o_lcd, o_ledg ,o_ledr;
logic [ 6:0] o_hex0 ,o_hex1 ,o_hex2 ,o_hex3 ,o_hex4 ,o_hex5 ,o_hex6 ,o_hex7 ; 
logic [31:0] st_data_temp, ld_data_temp;
logic [1:0]	 code;
logic [2:0]  io_code;
logic 		 ack1, ack2;
logic 		 en;
//sram_test
logic [17:0] sram_add;
wire  [15:0] sram_dq;
logic	     sram_ce;
logic		 sram_we;
logic		 sram_oe;
logic	     sram_lb;
logic		 sram_ub;
//
assign o_io_lcd  = o_lcd ;
assign o_io_ledg = o_ledg ;
assign o_io_ledr = o_ledr ;
assign o_io_hex0 = o_hex0 ;
assign o_io_hex1 = o_hex1 ;
assign o_io_hex2 = o_hex2 ;
assign o_io_hex3 = o_hex3 ;
assign o_io_hex4 = o_hex4 ;
assign o_io_hex5 = o_hex5 ;
assign o_io_hex6 = o_hex6 ;
assign o_io_hex7 = o_hex7 ;
assign ack = ack1 | ack2;


address_decode decode(.addr(i_lsu_addr[15:0]),.code(code),.io_code(io_code));

output_p OUT (
.clk(i_clk) ,
.rst(i_rst) ,
.st_data(datainO) ,
.addr(i_lsu_addr[5:0]) ,
.code(io_code),
.st_en(en_wire) ,
.out(dataO) ,
.o_lcd(o_lcd) ,
.o_ledg(o_ledg) ,
.o_ledr(o_ledr) ,
.o_hex0(o_hex0) ,
.o_hex1(o_hex1) ,
.o_hex2(o_hex2) ,
.o_hex3(o_hex3) ,
.o_hex4(o_hex4) ,
.o_hex5(o_hex5) ,
.o_hex6(o_hex6) ,
.o_hex7(o_hex7));

input_p IN (.rst(i_rst),.code(io_code),.btn(i_io_btn),.sw(i_io_sw),.in_out(dataI));

Dmem DATA(
	.clk(i_clk),
	.rst(i_rst),
  	.address(i_lsu_addr[14:2]),
  	.data_in(datainD),
  	.data_out(dataD),
  	.we(en_wire2)
);

/*
sram_IS61WV25616_controller_32bit ipcontrol
(
.i_ADDR(i_lsu_addr[17:0]),
.i_WDATA(datainD),
.i_BMASK(4'b1111),
.i_WREN(en_wire2 && en),	
.i_RDEN(rd_wire && en),
.o_RDATA(dataD),
.o_ACK(ack1),
.SRAM_ADDR(sram_add),
.SRAM_DQ(sram_dq),
.SRAM_CE_N(sram_ce),
.SRAM_WE_N(sram_we),
.SRAM_LB_N(sram_lb),
.SRAM_UB_N(sram_ub),
.SRAM_OE_N(sram_oe),
.i_clk(i_clk),
.i_reset(i_rst)
);*/

always_comb begin
  en = 1'b0;
if (!ack1) begin
	en = 1'b1;
end else begin
	en = 1'b0;
end 
end
 
always_comb begin : proc
datainD = 32'b0;
datainO = 32'b0;
en_wire = 1'b0;
en_wire2 = 1'b0;
rd_wire = 1'b0;
ack2 = 1'b0;
ack1 = 1'b0;
ld_data_temp = 32'b0;
case(code) 
	2'b01: begin
	     ld_data_temp = 32'b0;
			 datainO = 32'b0;
			 datainD = 32'b0;
			 ack2 = 1'b0;
			 end
	2'b10: begin
			 datainD = st_data_temp;
			 en_wire2 = i_lsu_wren;
			 ld_data_temp = dataD;
			 rd_wire = rd_en;
			 ack1 = 1'b1;
			 end
	default: begin
				 ack2 = 1'b1;
					case(io_code)
					 4'h1: ld_data_temp = dataI;
					 4'h2: ld_data_temp = dataI;
					 4'h0: ;
					 default : begin 
									datainO = st_data_temp;
									ld_data_temp = dataO;
									en_wire = i_lsu_wren;
								  end
					endcase
				end
endcase
end

always_comb begin
o_ld_data = 32'b0;
case(l_sel)
  3'b101: o_ld_data = ld_data_temp;
  3'b001: begin
			 case(i_lsu_addr[1:0])
				2'b00: o_ld_data = {{24{ld_data_temp[7]}}, ld_data_temp[7:0]};
				2'b01: o_ld_data = {{24{ld_data_temp[15]}}, ld_data_temp[15:8]};
				2'b10: o_ld_data = {{24{ld_data_temp[23]}}, ld_data_temp[23:16]};
				2'b11: o_ld_data = {{24{ld_data_temp[31]}}, ld_data_temp[31:24]};
			 endcase
			 end
  3'b010: begin
			 case(i_lsu_addr[1])
				1'b0: o_ld_data = {{16{ld_data_temp[15]}}, ld_data_temp[15:0]};
				1'b1: o_ld_data = {{16{ld_data_temp[31]}}, ld_data_temp[31:16]};
			 endcase
			 end
  3'b011: begin
			 case(i_lsu_addr[1:0])
				2'b00: o_ld_data = {24'b0, ld_data_temp[7:0]};
				2'b01: o_ld_data = {24'b0, ld_data_temp[15:8]};
				2'b10: o_ld_data = {24'b0, ld_data_temp[23:16]};
				2'b11: o_ld_data = {24'b0, ld_data_temp[31:24]};
			 endcase
			 end
  3'b100: begin
			 case(i_lsu_addr[1])
				1'b0: o_ld_data = {16'b0, ld_data_temp[15:0]};
				1'b1: o_ld_data = {16'b0, ld_data_temp[31:16]};
			 endcase
			 end
  default: o_ld_data = 32'b0;
 endcase
end

always_comb begin
st_data_temp = 32'b0;
case(s_sel)
  2'b11: st_data_temp = i_st_data;
  2'b01: begin
			case(i_lsu_addr[1:0])
				2'b00: st_data_temp = {dataD[31:8],i_st_data[7:0]};
				2'b01: st_data_temp = {dataD[15:0],i_st_data[7:0],dataD[7:0]};
				2'b10: st_data_temp = {dataD[31:24],i_st_data[7:0],dataD[15:0]};
				2'b11: st_data_temp = {i_st_data[7:0],dataD[23:0]};
			endcase
			end
  2'b10: begin
			case(i_lsu_addr[1])
				1'b0: st_data_temp = {dataD[31:16],i_st_data[15:0]};
				1'b1: st_data_temp = {i_st_data[15:0],dataD[15:0]};
			endcase
			end
  default: st_data_temp = 32'b0;
 endcase
end 

endmodule : lsu
