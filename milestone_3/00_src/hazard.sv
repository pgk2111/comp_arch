module hazard (
 input              rst_n,
 input              rd_wr_mem,
 input              rd_wr_wb,
 input              rd_wr_h,
 input        [4:0] rd_mem,
 input        [4:0] rd_wb,
 input        [4:0] rd_h,
 input        [4:0] rs1_addr,
 input        [4:0] rs2_addr,
 output logic [1:0] forwardA,
 output logic [1:0] forwardB
);


always_comb begin
    if (rst_n == 1'b0) begin
        forwardA = 2'b00;
    end else if ((rd_wr_mem == 1'b1) && (rd_mem != 5'h00) && (rd_mem == rs1_addr)) begin
        forwardA = 2'b10;
    end else if ((rd_wr_wb == 1'b1) && (rd_wb != 5'h00) && (rd_wb == rs1_addr)) begin
        forwardA = 2'b01;
    end else if ((rd_wr_h == 1'b1) && (rd_h != 5'h00) && (rd_h == rs1_addr)) begin
        forwardA = 2'b11;
    end else begin
	     forwardA = 2'b00;
	 end
end

always_comb begin
    if (rst_n == 1'b0) begin
        forwardB = 2'b00;
    end else if ((rd_wr_mem == 1'b1) && (rd_mem != 5'h00) && (rd_mem == rs2_addr)) begin
        forwardB = 2'b10;
    end else if ((rd_wr_wb == 1'b1) && (rd_wb != 5'h00) && (rd_wb == rs2_addr)) begin
        forwardB = 2'b01;
    end else if ((rd_wr_h == 1'b1) && (rd_h != 5'h00) && (rd_h == rs2_addr)) begin
        forwardB = 2'b11;
    end else begin
	     forwardB = 2'b00;
	 end
end

						
endmodule : hazard 