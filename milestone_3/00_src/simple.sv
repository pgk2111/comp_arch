module simple
   (
    // Signals belonging to the stage where the branch is predicted.
    input      is_control,
    input      imm,
    output reg predicted_flag_o      //result of predictor
    );
   
   // Static branch prediction - backward branches are predicted as taken,
   // forward branches as not taken.
   assign predicted_flag_o = is_control && imm;

endmodule : simple