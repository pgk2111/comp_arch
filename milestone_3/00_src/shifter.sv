module shifter(
 input logic  [31:0] inA,
 input logic  [ 4:0] inB,
 input logic         en,
 output logic [31:0] out
);

logic [31:0] w,x,y,z;
logic [31:0] A;
logic [ 4:0] B;

assign A = (en) ? inA : 32'b0;
assign B = (en) ? inB : 5'b0;

//16 bit shift right 
mux2  ins16_31 (.in0(A[31]),.in1(1'b0),.sel(B[4]),.out(w[31]));
mux2  ins16_30 (.in0(A[30]),.in1(1'b0),.sel(B[4]),.out(w[30]));
mux2  ins16_29 (.in0(A[29]),.in1(1'b0),.sel(B[4]),.out(w[29]));
mux2  ins16_28 (.in0(A[28]),.in1(1'b0),.sel(B[4]),.out(w[28]));
mux2  ins16_27 (.in0(A[27]),.in1(1'b0),.sel(B[4]),.out(w[27]));
mux2  ins16_26 (.in0(A[26]),.in1(1'b0),.sel(B[4]),.out(w[26]));
mux2  ins16_25 (.in0(A[25]),.in1(1'b0),.sel(B[4]),.out(w[25]));
mux2  ins16_24 (.in0(A[24]),.in1(1'b0),.sel(B[4]),.out(w[24]));
mux2  ins16_23 (.in0(A[23]),.in1(1'b0),.sel(B[4]),.out(w[23]));
mux2  ins16_22 (.in0(A[22]),.in1(1'b0),.sel(B[4]),.out(w[22]));
mux2  ins16_21 (.in0(A[21]),.in1(1'b0),.sel(B[4]),.out(w[21]));
mux2  ins16_20 (.in0(A[20]),.in1(1'b0),.sel(B[4]),.out(w[20]));
mux2  ins16_19 (.in0(A[19]),.in1(1'b0),.sel(B[4]),.out(w[19]));
mux2  ins16_18 (.in0(A[18]),.in1(1'b0),.sel(B[4]),.out(w[18]));
mux2  ins16_17 (.in0(A[17]),.in1(1'b0),.sel(B[4]),.out(w[17]));
mux2  ins16_16 (.in0(A[16]),.in1(1'b0),.sel(B[4]),.out(w[16]));
mux2  ins16_15 (.in0(A[15]),.in1(A[31]),.sel(B[4]),.out(w[15]));
mux2  ins16_14 (.in0(A[14]),.in1(A[30]),.sel(B[4]),.out(w[14]));
mux2  ins16_13 (.in0(A[13]),.in1(A[29]),.sel(B[4]),.out(w[13]));
mux2  ins16_12 (.in0(A[12]),.in1(A[28]),.sel(B[4]),.out(w[12]));
mux2  ins16_11 (.in0(A[11]),.in1(A[27]),.sel(B[4]),.out(w[11]));
mux2  ins16_10 (.in0(A[10]),.in1(A[26]),.sel(B[4]),.out(w[10]));
mux2  ins16_09 (.in0(A[9]),.in1(A[25]),.sel(B[4]),.out(w[9]));
mux2  ins16_08 (.in0(A[8]),.in1(A[24]),.sel(B[4]),.out(w[8]));
mux2  ins16_07 (.in0(A[7]),.in1(A[23]),.sel(B[4]),.out(w[7]));
mux2  ins16_06 (.in0(A[6]),.in1(A[22]),.sel(B[4]),.out(w[6]));
mux2  ins16_05 (.in0(A[5]),.in1(A[21]),.sel(B[4]),.out(w[5]));
mux2  ins16_04 (.in0(A[4]),.in1(A[20]),.sel(B[4]),.out(w[4]));
mux2  ins16_03 (.in0(A[3]),.in1(A[19]),.sel(B[4]),.out(w[3]));
mux2  ins16_02 (.in0(A[2]),.in1(A[18]),.sel(B[4]),.out(w[2]));
mux2  ins16_01 (.in0(A[1]),.in1(A[17]),.sel(B[4]),.out(w[1]));
mux2  ins16_00 (.in0(A[0]),.in1(A[16]),.sel(B[4]),.out(w[0]));

//8 bit shift right
mux2  ins8_31 (.in0(w[31]),.in1(1'b0),.sel(B[3]),.out(z[31]));
mux2  ins8_30 (.in0(w[30]),.in1(1'b0),.sel(B[3]),.out(z[30]));
mux2  ins8_29 (.in0(w[29]),.in1(1'b0),.sel(B[3]),.out(z[29]));
mux2  ins8_28 (.in0(w[28]),.in1(1'b0),.sel(B[3]),.out(z[28]));
mux2  ins8_27 (.in0(w[27]),.in1(1'b0),.sel(B[3]),.out(z[27]));
mux2  ins8_26 (.in0(w[26]),.in1(1'b0),.sel(B[3]),.out(z[26]));
mux2  ins8_25 (.in0(w[25]),.in1(1'b0),.sel(B[3]),.out(z[25]));
mux2  ins8_24 (.in0(w[24]),.in1(1'b0),.sel(B[3]),.out(z[24]));
mux2  ins8_23 (.in0(w[23]),.in1(w[31]),.sel(B[3]),.out(z[23]));
mux2  ins8_22 (.in0(w[22]),.in1(w[30]),.sel(B[3]),.out(z[22]));
mux2  ins8_21 (.in0(w[21]),.in1(w[29]),.sel(B[3]),.out(z[21]));
mux2  ins8_20 (.in0(w[20]),.in1(w[28]),.sel(B[3]),.out(z[20]));
mux2  ins8_19 (.in0(w[19]),.in1(w[27]),.sel(B[3]),.out(z[19]));
mux2  ins8_18 (.in0(w[18]),.in1(w[26]),.sel(B[3]),.out(z[18]));
mux2  ins8_17 (.in0(w[17]),.in1(w[25]),.sel(B[3]),.out(z[17]));
mux2  ins8_16 (.in0(w[16]),.in1(w[24]),.sel(B[3]),.out(z[16]));
mux2  ins8_15 (.in0(w[15]),.in1(w[23]),.sel(B[3]),.out(z[15]));
mux2  ins8_14 (.in0(w[14]),.in1(w[22]),.sel(B[3]),.out(z[14]));
mux2  ins8_13 (.in0(w[13]),.in1(w[21]),.sel(B[3]),.out(z[13]));
mux2  ins8_12 (.in0(w[12]),.in1(w[20]),.sel(B[3]),.out(z[12]));
mux2  ins8_11 (.in0(w[11]),.in1(w[19]),.sel(B[3]),.out(z[11]));
mux2  ins8_10 (.in0(w[10]),.in1(w[18]),.sel(B[3]),.out(z[10]));
mux2  ins8_09 (.in0(w[9]),.in1(w[17]),.sel(B[3]),.out(z[9]));
mux2  ins8_08 (.in0(w[8]),.in1(w[16]),.sel(B[3]),.out(z[8]));
mux2  ins8_07 (.in0(w[7]),.in1(w[15]),.sel(B[3]),.out(z[7]));
mux2  ins8_06 (.in0(w[6]),.in1(w[14]),.sel(B[3]),.out(z[6]));
mux2  ins8_05 (.in0(w[5]),.in1(w[13]),.sel(B[3]),.out(z[5]));
mux2  ins8_04 (.in0(w[4]),.in1(w[12]),.sel(B[3]),.out(z[4]));
mux2  ins8_03 (.in0(w[3]),.in1(w[11]),.sel(B[3]),.out(z[3]));
mux2  ins8_02 (.in0(w[2]),.in1(w[10]),.sel(B[3]),.out(z[2]));
mux2  ins8_01 (.in0(w[1]),.in1(w[9]),.sel(B[3]),.out(z[1]));
mux2  ins8_00 (.in0(w[0]),.in1(w[8]),.sel(B[3]),.out(z[0]));

//4 bit shift right
mux2  ins4_31 (.in0(z[31]),.in1(1'b0),.sel(B[2]),.out(y[31]));
mux2  ins4_30 (.in0(z[30]),.in1(1'b0),.sel(B[2]),.out(y[30]));
mux2  ins4_29 (.in0(z[29]),.in1(1'b0),.sel(B[2]),.out(y[29]));
mux2  ins4_28 (.in0(z[28]),.in1(1'b0),.sel(B[2]),.out(y[28]));
mux2  ins4_27 (.in0(z[27]),.in1(z[31]),.sel(B[2]),.out(y[27]));
mux2  ins4_26 (.in0(z[26]),.in1(z[30]),.sel(B[2]),.out(y[26]));
mux2  ins4_25 (.in0(z[25]),.in1(z[29]),.sel(B[2]),.out(y[25]));
mux2  ins4_24 (.in0(z[24]),.in1(z[28]),.sel(B[2]),.out(y[24]));
mux2  ins4_23 (.in0(z[23]),.in1(z[27]),.sel(B[2]),.out(y[23]));
mux2  ins4_22 (.in0(z[22]),.in1(z[26]),.sel(B[2]),.out(y[22]));
mux2  ins4_21 (.in0(z[21]),.in1(z[25]),.sel(B[2]),.out(y[21]));
mux2  ins4_20 (.in0(z[20]),.in1(z[24]),.sel(B[2]),.out(y[20]));
mux2  ins4_19 (.in0(z[19]),.in1(z[23]),.sel(B[2]),.out(y[19]));
mux2  ins4_18 (.in0(z[18]),.in1(z[22]),.sel(B[2]),.out(y[18]));
mux2  ins4_17 (.in0(z[17]),.in1(z[21]),.sel(B[2]),.out(y[17]));
mux2  ins4_16 (.in0(z[16]),.in1(z[20]),.sel(B[2]),.out(y[16]));
mux2  ins4_15 (.in0(z[15]),.in1(z[19]),.sel(B[2]),.out(y[15]));
mux2  ins4_14 (.in0(z[14]),.in1(z[18]),.sel(B[2]),.out(y[14]));
mux2  ins4_13 (.in0(z[13]),.in1(z[17]),.sel(B[2]),.out(y[13]));
mux2  ins4_12 (.in0(z[12]),.in1(z[16]),.sel(B[2]),.out(y[12]));
mux2  ins4_11 (.in0(z[11]),.in1(z[15]),.sel(B[2]),.out(y[11]));
mux2  ins4_10 (.in0(z[10]),.in1(z[14]),.sel(B[2]),.out(y[10]));
mux2  ins4_09 (.in0(z[9]),.in1(z[13]),.sel(B[2]),.out(y[9]));
mux2  ins4_08 (.in0(z[8]),.in1(z[12]),.sel(B[2]),.out(y[8]));
mux2  ins4_07 (.in0(z[7]),.in1(z[11]),.sel(B[2]),.out(y[7]));
mux2  ins4_06 (.in0(z[6]),.in1(z[10]),.sel(B[2]),.out(y[6]));
mux2  ins4_05 (.in0(z[5]),.in1(z[9]),.sel(B[2]),.out(y[5]));
mux2  ins4_04 (.in0(z[4]),.in1(z[8]),.sel(B[2]),.out(y[4]));
mux2  ins4_03 (.in0(z[3]),.in1(z[7]),.sel(B[2]),.out(y[3]));
mux2  ins4_02 (.in0(z[2]),.in1(z[6]),.sel(B[2]),.out(y[2]));
mux2  ins4_01 (.in0(z[1]),.in1(z[5]),.sel(B[2]),.out(y[1]));
mux2  ins4_00 (.in0(z[0]),.in1(z[4]),.sel(B[2]),.out(y[0]));

//2 bit shift right

mux2  ins_63 (.in0(y[31]),.in1(1'b0),.sel(B[1]),.out(x[31]));
mux2  ins_62 (.in0(y[30]),.in1(1'b0),.sel(B[1]),.out(x[30]));
mux2  ins_61 (.in0(y[29]),.in1(y[31]),.sel(B[1]),.out(x[29]));
mux2  ins_60 (.in0(y[28]),.in1(y[30]),.sel(B[1]),.out(x[28]));
mux2  ins_59 (.in0(y[27]),.in1(y[29]),.sel(B[1]),.out(x[27]));
mux2  ins_58 (.in0(y[26]),.in1(y[28]),.sel(B[1]),.out(x[26]));
mux2  ins_57 (.in0(y[25]),.in1(y[27]),.sel(B[1]),.out(x[25]));
mux2  ins_56 (.in0(y[24]),.in1(y[26]),.sel(B[1]),.out(x[24]));
mux2  ins_55 (.in0(y[23]),.in1(y[25]),.sel(B[1]),.out(x[23]));
mux2  ins_54 (.in0(y[22]),.in1(y[24]),.sel(B[1]),.out(x[22]));
mux2  ins_53 (.in0(y[21]),.in1(y[23]),.sel(B[1]),.out(x[21]));
mux2  ins_52 (.in0(y[20]),.in1(y[22]),.sel(B[1]),.out(x[20]));
mux2  ins_51 (.in0(y[19]),.in1(y[21]),.sel(B[1]),.out(x[19]));
mux2  ins_50 (.in0(y[18]),.in1(y[20]),.sel(B[1]),.out(x[18]));
mux2  ins_49 (.in0(y[17]),.in1(y[19]),.sel(B[1]),.out(x[17]));
mux2  ins_48 (.in0(y[16]),.in1(y[18]),.sel(B[1]),.out(x[16]));
mux2  ins_47 (.in0(y[15]),.in1(y[17]),.sel(B[1]),.out(x[15]));
mux2  ins_46 (.in0(y[14]),.in1(y[16]),.sel(B[1]),.out(x[14]));
mux2  ins_45 (.in0(y[13]),.in1(y[15]),.sel(B[1]),.out(x[13]));
mux2  ins_44 (.in0(y[12]),.in1(y[14]),.sel(B[1]),.out(x[12]));
mux2  ins_43 (.in0(y[11]),.in1(y[13]),.sel(B[1]),.out(x[11]));
mux2  ins_42 (.in0(y[10]),.in1(y[12]),.sel(B[1]),.out(x[10]));
mux2  ins_41 (.in0(y[9]),.in1(y[11]),.sel(B[1]),.out(x[9]));
mux2  ins_40 (.in0(y[8]),.in1(y[10]),.sel(B[1]),.out(x[8]));
mux2  ins_39 (.in0(y[7]),.in1(y[9]),.sel(B[1]),.out(x[7]));
mux2  ins_38 (.in0(y[6]),.in1(y[8]),.sel(B[1]),.out(x[6]));
mux2  ins_37 (.in0(y[5]),.in1(y[7]),.sel(B[1]),.out(x[5]));
mux2  ins_36 (.in0(y[4]),.in1(y[6]),.sel(B[1]),.out(x[4]));
mux2  ins_35 (.in0(y[3]),.in1(y[5]),.sel(B[1]),.out(x[3]));
mux2  ins_34 (.in0(y[2]),.in1(y[4]),.sel(B[1]),.out(x[2]));
mux2  ins_33 (.in0(y[1]),.in1(y[3]),.sel(B[1]),.out(x[1]));
mux2  ins_32 (.in0(y[0]),.in1(y[2]),.sel(B[1]),.out(x[0]));

//1 bit shift right
mux2  ins_31 (.in0(x[31]),.in1(1'b0),.sel(B[0]),.out(out[31]));
mux2  ins_30 (.in0(x[30]),.in1(x[31]),.sel(B[0]),.out(out[30]));
mux2  ins_29 (.in0(x[29]),.in1(x[30]),.sel(B[0]),.out(out[29]));
mux2  ins_28 (.in0(x[28]),.in1(x[29]),.sel(B[0]),.out(out[28]));
mux2  ins_27 (.in0(x[27]),.in1(x[28]),.sel(B[0]),.out(out[27]));
mux2  ins_26 (.in0(x[26]),.in1(x[27]),.sel(B[0]),.out(out[26]));
mux2  ins_25 (.in0(x[25]),.in1(x[26]),.sel(B[0]),.out(out[25]));
mux2  ins_24 (.in0(x[24]),.in1(x[25]),.sel(B[0]),.out(out[24]));
mux2  ins_23 (.in0(x[23]),.in1(x[24]),.sel(B[0]),.out(out[23]));
mux2  ins_22 (.in0(x[22]),.in1(x[23]),.sel(B[0]),.out(out[22]));
mux2  ins_21 (.in0(x[21]),.in1(x[22]),.sel(B[0]),.out(out[21]));
mux2  ins_20 (.in0(x[20]),.in1(x[21]),.sel(B[0]),.out(out[20]));
mux2  ins_19 (.in0(x[19]),.in1(x[20]),.sel(B[0]),.out(out[19]));
mux2  ins_18 (.in0(x[18]),.in1(x[19]),.sel(B[0]),.out(out[18]));
mux2  ins_17 (.in0(x[17]),.in1(x[18]),.sel(B[0]),.out(out[17]));
mux2  ins_16 (.in0(x[16]),.in1(x[17]),.sel(B[0]),.out(out[16]));
mux2  ins_15 (.in0(x[15]),.in1(x[16]),.sel(B[0]),.out(out[15]));
mux2  ins_14 (.in0(x[14]),.in1(x[15]),.sel(B[0]),.out(out[14]));
mux2  ins_13 (.in0(x[13]),.in1(x[14]),.sel(B[0]),.out(out[13]));
mux2  ins_12 (.in0(x[12]),.in1(x[13]),.sel(B[0]),.out(out[12]));
mux2  ins_11 (.in0(x[11]),.in1(x[12]),.sel(B[0]),.out(out[11]));
mux2  ins_10 (.in0(x[10]),.in1(x[11]),.sel(B[0]),.out(out[10]));
mux2  ins_09 (.in0(x[9]),.in1(x[10]),.sel(B[0]),.out(out[9]));
mux2  ins_08 (.in0(x[8]),.in1(x[9]),.sel(B[0]),.out(out[8]));
mux2  ins_07 (.in0(x[7]),.in1(x[8]),.sel(B[0]),.out(out[7]));
mux2  ins_06 (.in0(x[6]),.in1(x[7]),.sel(B[0]),.out(out[6]));
mux2  ins_05 (.in0(x[5]),.in1(x[6]),.sel(B[0]),.out(out[5]));
mux2  ins_04 (.in0(x[4]),.in1(x[5]),.sel(B[0]),.out(out[4]));
mux2  ins_03 (.in0(x[3]),.in1(x[4]),.sel(B[0]),.out(out[3]));
mux2  ins_02 (.in0(x[2]),.in1(x[3]),.sel(B[0]),.out(out[2]));
mux2  ins_01 (.in0(x[1]),.in1(x[2]),.sel(B[0]),.out(out[1]));
mux2  ins_00 (.in0(x[0]),.in1(x[1]),.sel(B[0]),.out(out[0]));

endmodule
