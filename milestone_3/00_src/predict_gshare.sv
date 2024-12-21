module predict_gshare #(
parameter GSHARE_BITS_NUM = 10,
parameter OPTION_OPERAND_WIDTH = 32
)
(
input rst,
input clk,
    // Signals belonging to the stage where the branch is predicted.
output logic predicted_flag,     //result of predictor
	
input is_taken,
input is_control,
    // Signals belonging to the stage where the branch is resolved.
input is_br,      // prev op was cond brn

input [OPTION_OPERAND_WIDTH-1:0]  branch_pc,
input [OPTION_OPERAND_WIDTH-1:0]  pc
);

localparam [1:0]
      STATE_STRONGLY_NOT_TAKEN = 2'b00,
      STATE_WEAKLY_NOT_TAKEN   = 2'b01,
      STATE_WEAKLY_TAKEN       = 2'b10,
      STATE_STRONGLY_TAKEN     = 2'b11;
localparam FSM_NUM = 2 ** GSHARE_BITS_NUM;
integer i = 0;

reg [1:0] state [0:FSM_NUM];
reg [GSHARE_BITS_NUM:0] brn_hist_reg = 0;
reg [GSHARE_BITS_NUM - 1:0] prev_idx = 0;

// +2 bits for alignement
wire [GSHARE_BITS_NUM - 1:0] state_idx = brn_hist_reg[GSHARE_BITS_NUM - 1:0] ^ branch_pc[GSHARE_BITS_NUM + 1:2];
wire [GSHARE_BITS_NUM - 1:0] current_index = brn_hist_reg[GSHARE_BITS_NUM - 1:0] ^ pc[GSHARE_BITS_NUM + 1:2];
	
assign predicted_flag = (state[current_index][1]);

always_ff @(posedge clk) begin
 if (!rst) begin
  brn_hist_reg <= 0;
  prev_idx <= 0;
  for(i = 0; i < FSM_NUM; i = i + 1) begin
   state[i] <= STATE_WEAKLY_TAKEN;
  end
 end else begin
  if (is_control) begin
	prev_idx <= state_idx;
  end
  if (is_br) begin
   brn_hist_reg <= {brn_hist_reg[GSHARE_BITS_NUM - 1 : 0], is_taken};
   if (!is_taken) begin
    unique case (state[prev_idx])
     STATE_STRONGLY_TAKEN: state[prev_idx] <= STATE_WEAKLY_TAKEN;
     STATE_WEAKLY_TAKEN: state[prev_idx] <= STATE_WEAKLY_NOT_TAKEN;
     STATE_WEAKLY_NOT_TAKEN: state[prev_idx] <= STATE_STRONGLY_NOT_TAKEN;
     STATE_STRONGLY_NOT_TAKEN: state[prev_idx] <= STATE_STRONGLY_NOT_TAKEN;
    endcase
   end else begin
    unique case (state[prev_idx])
     STATE_STRONGLY_NOT_TAKEN: state[prev_idx] <= STATE_WEAKLY_NOT_TAKEN;
     STATE_WEAKLY_NOT_TAKEN: state[prev_idx] <= STATE_WEAKLY_TAKEN;
     STATE_WEAKLY_TAKEN: state[prev_idx] <= STATE_STRONGLY_TAKEN;
     STATE_STRONGLY_TAKEN: state[prev_idx] <= STATE_STRONGLY_TAKEN;
    endcase
   end
  end
 end
end
endmodule : predict_gshare