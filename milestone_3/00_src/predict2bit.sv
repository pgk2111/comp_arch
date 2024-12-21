module predict2bit(
    input clk,
    input rst,

    // Signals belonging to the stage where the branch is predicted.
    output predicted_flag_o,     //result of predictor

    input is_taken,       // prev insn was bf
	 input ex_br,          // current is br

    // Signals belonging to the stage where the branch is resolved.
    input is_br      // prev op was cond brn
    );



  localparam [1:0]
      STATE_STRONGLY_NOT_TAKEN = 2'b00,
      STATE_WEAKLY_NOT_TAKEN   = 2'b01,
      STATE_WEAKLY_TAKEN       = 2'b10,
      STATE_STRONGLY_TAKEN     = 2'b11;

   reg [1:0] state = STATE_WEAKLY_TAKEN;

   assign predicted_flag_o = (state[1] && ex_br);
 
   always @(posedge clk) begin
      if (!rst) begin
         state <= STATE_WEAKLY_TAKEN;
      end else begin
         if (is_br) begin
            if (!is_taken) begin
               // change fsm state:
               //   STATE_STRONGLY_TAKEN -> STATE_WEAKLY_TAKEN
               //   STATE_WEAKLY_TAKEN -> STATE_WEAKLY_NOT_TAKEN
               //   STATE_WEAKLY_NOT_TAKEN -> STATE_STRONGLY_NOT_TAKEN
               //   STATE_STRONGLY_NOT_TAKEN -> STATE_STRONGLY_NOT_TAKEN
               case (state)
                  STATE_STRONGLY_TAKEN:
                     state <= STATE_WEAKLY_TAKEN;
                  STATE_WEAKLY_TAKEN:
                     state <= STATE_WEAKLY_NOT_TAKEN;
                  STATE_WEAKLY_NOT_TAKEN:
                     state <= STATE_STRONGLY_NOT_TAKEN;
                  STATE_STRONGLY_NOT_TAKEN:
                     state <= STATE_STRONGLY_NOT_TAKEN;
               endcase
            end else begin
               // change fsm state:
               //   STATE_STRONGLY_NOT_TAKEN -> STATE_WEAKLY_NOT_TAKEN
               //   STATE_WEAKLY_NOT_TAKEN -> STATE_WEAKLY_TAKEN
               //   STATE_WEAKLY_TAKEN -> STATE_STRONGLY_TAKEN
               //   STATE_STRONGLY_TAKEN -> STATE_STRONGLY_TAKEN
               case (state)
                  STATE_STRONGLY_NOT_TAKEN:
                     state <= STATE_WEAKLY_NOT_TAKEN;
                  STATE_WEAKLY_NOT_TAKEN:
                     state <= STATE_WEAKLY_TAKEN;
                  STATE_WEAKLY_TAKEN:
                     state <= STATE_STRONGLY_TAKEN;
                  STATE_STRONGLY_TAKEN:
                     state <= STATE_STRONGLY_TAKEN;
               endcase
            end
         end
      end
   end
endmodule