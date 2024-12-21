module address_decode(addr,code,io_code);

input logic [15:0] addr;

output logic [1:0] code;
output logic [2:0] io_code;

always_comb begin
  code = 2'b0;
  io_code = 3'b0;
	case(addr[15:12])
		4'b0000: code = 1;
		4'b0001: code = 1;
		4'b0010: code = 2;
		4'b0011: code = 2;
		4'b0100: code = 3;
		default: code = 0;
	endcase
	case(addr[15:4])
		12'h781: io_code = 1;
		12'h780: io_code = 2;
		12'h703: io_code = 3;
		12'h702: io_code = 4;
		12'h701: io_code = 5;
		12'h700: io_code = 6;
		default: io_code = 0;
	endcase
end


endmodule
