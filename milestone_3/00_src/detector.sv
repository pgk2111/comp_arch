module detector (
 input        rst_n,
 input        wb_sel_e,
 input        predict,
 input        is_taken,
 input [4:0]  rd_addr_e,
 input [4:0]  rs1_addr_d,
 input [4:0]  rs2_addr_d,
 output logic IF_ID_en,
 output logic PC_en,
 output logic BTB_en,
 output logic ID_EX_flush,
 output logic IF_ID_flush,
 output logic EX_M_flush,
 output logic correct_o
);

logic correct;

assign correct = (predict ^ is_taken);

 always_comb begin
            IF_ID_en = 1'b1;
            PC_en = 1'b1;
				BTB_en = 1'b1;
            ID_EX_flush = 1'b0;
				IF_ID_flush = 1'b0;
				EX_M_flush = 1'b0;
				correct_o = 1'b0;
        if (!rst_n) begin
            // Reset the control signals to allow normal operation
            IF_ID_en = 1'b0;
            PC_en = 1'b0;
				BTB_en = 1'b0;
            ID_EX_flush = 1'b1;
				IF_ID_flush = 1'b1;
				EX_M_flush = 1'b1;
				correct_o = 1'b0;
        end else begin
            // Default is to not stall
            IF_ID_en = 1'b1;
            PC_en = 1'b1;
				BTB_en = 1'b1;
            ID_EX_flush = 1'b0;
				IF_ID_flush = 1'b0;
				EX_M_flush = 1'b0;
				correct_o = 1'b0;
				if (correct) begin
				    PC_en = 1'b1;
                IF_ID_en = 1'b0;
					 BTB_en = 1'b0;
                // Flush the ID/EX stage to insert a NOP
                ID_EX_flush = 1'b1;
					 IF_ID_flush = 1'b1;
					 EX_M_flush = 1'b1;	
					 correct_o = 1'b1;
				end else if (wb_sel_e && (rd_addr_e != 0) && (rd_addr_e == rs1_addr_d || rd_addr_e == rs2_addr_d)) begin
                // Stall the pipeline by stopping updates to the PC and IF/ID register
                PC_en = 1'b0;
					 BTB_en = 1'b0;
                IF_ID_en = 1'b0;
                // Flush the ID/EX stage to insert a NOP
                ID_EX_flush = 1'b1;
					 IF_ID_flush = 1'b0;
					 EX_M_flush = 1'b0;
            end 	
        end
    end 
endmodule : detector