module BTB #(
    parameter ADDR_WIDTH = 32,  // Width of the address
	 parameter TAG_WIDTH = 10,   
    parameter BTB_SIZE = 1024     // Number of entries in the BTB
)(
    input logic                   clk,
    input logic                   reset,
	 input logic                   BTB_en,
	 input logic  [ADDR_WIDTH-1:0] pc,
    input logic  [ADDR_WIDTH-1:0] branch_pc,        // Program counter of the branch instruction
    input logic                   branch_taken,      // Indicates if the branch was taken
    input logic  [ADDR_WIDTH-1:0] branch_target,    // Target address if the branch is taken
    output logic                  predicted_taken,  // Prediction: branch is taken
    output logic [ADDR_WIDTH-1:0] predicted_target // Predicted target address
);

    // BTB entry structure
    typedef struct packed {     	 // Valid bit
	     logic                  valid;
        logic [TAG_WIDTH-1:0]  tag;       // Tag to identify the instruction
        logic [ADDR_WIDTH-1:0] target;    // Target address
    } btb_entry_t;

    // Branch Target Buffer
    btb_entry_t btb[BTB_SIZE];

    // Index and tag extraction from PC
    wire [ADDR_WIDTH-TAG_WIDTH-3:0]index = branch_pc[ADDR_WIDTH-TAG_WIDTH-1:2];
    wire [TAG_WIDTH-1:0] tag = branch_pc[ADDR_WIDTH-1:ADDR_WIDTH-TAG_WIDTH];
	 
	 wire [ADDR_WIDTH-TAG_WIDTH-3:0]index_pc = pc[ADDR_WIDTH-TAG_WIDTH-1:2];
    wire [TAG_WIDTH-1:0] tag_pc = pc[ADDR_WIDTH-1:ADDR_WIDTH-TAG_WIDTH];

    always_ff @(posedge clk) begin
        if (!reset) begin
            // Reset BTB
            for (int i = 0; i < BTB_SIZE; i = i + 1) begin
				    btb[i].valid <= 1'b0;
                btb[i].tag <= {TAG_WIDTH{1'b0}};
                btb[i].target <= {ADDR_WIDTH{1'b0}};
            end
        end else begin
		      if (branch_taken) begin
				    btb[index].valid <= 1'b1;
                btb[index].tag <= tag;
                btb[index].target <= branch_target;
            end
        end
	end
	
	always_comb begin
		predicted_taken <= 1'b0;
      predicted_target <= {ADDR_WIDTH{1'b0}};
		if (BTB_en) begin	
				if ((btb[index_pc].tag == tag_pc) && btb[index_pc].valid) begin
                predicted_taken <= 1'b1;
                predicted_target <= btb[index_pc].target;
            end else begin
                predicted_taken <= 1'b0;
                predicted_target <= {ADDR_WIDTH{1'b0}};
            end
			  end
	end

endmodule : BTB