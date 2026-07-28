`timescale 1ns / 1ps

module stagger_sa_edge_10 (
  input  clk,
  input  rst,
  input infer_done,
  input  en_i, //aç kapa örnek tasarımda vardı ama kullanmıyoruz şuan ama belki de kullanırız silmeyim şimdilik

  input   signed [7:0] word_i [0:9],
  output  signed [7:0] skew_o [0:9]
);
    logic [71:0] buf_q1; //1 çevrim gecikme
    logic [63:0] buf_q2; //2
    logic [55:0] buf_q3; //3
    logic [47:0] buf_q4; //4
    logic [39:0] buf_q5; //5
    logic [31:0] buf_q6; //6
    logic [23 :0] buf_q7; //7 çevrim gecikme
    logic [15 :0] buf_q8; //8
    logic [7 :0] buf_q9;//9
    
    assign skew_o[0]  =  word_i[0];
    assign skew_o[1]  =  buf_q1[7:0];
    assign skew_o[2]  =  buf_q2[7:0];
    assign skew_o[3]  =  buf_q3[7:0];
    assign skew_o[4]  =  buf_q4[7:0];
    assign skew_o[5]  =  buf_q5[7:0];
    assign skew_o[6]  =  buf_q6[7:0];
    assign skew_o[7]  =  buf_q7[7:0];
    assign skew_o[8]  =  buf_q8[7:0];
    assign skew_o[9]  =  buf_q9[7:0];
    
    always_ff @(posedge clk) begin
        if (rst) begin
            buf_q1 <= '0;
            buf_q2 <= '0;
            buf_q3 <= '0;
            buf_q4 <= '0;
            buf_q5 <= '0;
            buf_q6 <= '0;
            buf_q7 <= '0;
            buf_q8 <= '0;
            buf_q9 <= '0;
        end 
        else if(infer_done==1'b1)begin
            buf_q1 <= '0;
            buf_q2 <= '0;
            buf_q3 <= '0;
            buf_q4 <= '0;
            buf_q5 <= '0;
            buf_q6 <= '0;
            buf_q7 <= '0;
            buf_q8 <= '0;
            buf_q9 <= '0;
        end
        else begin
            if (1'b1) begin//en_i olacak normalde
                buf_q1 <= {word_i[4'd9],word_i[4'd8],word_i[3'd7],word_i[3'd6],word_i[3'd5],word_i[3'd4],word_i[3'd3],word_i[3'd2],word_i[3'd1]};
                buf_q2 <= buf_q1[71:8];
                buf_q3 <= buf_q2[63:8];
                buf_q4 <= buf_q3[55:8];
                buf_q5 <= buf_q4[47:8];
                buf_q6 <= buf_q5[39:8];
                buf_q7 <= buf_q6[31:8];
                buf_q8 <= buf_q7[23:8];
                buf_q9 <= buf_q8[15:8];
            end
        end
    end
    

//    assign skew_o[0] = word_i[0];

//    logic signed [7:0] d1_ch1;
//    always_ff @(posedge clk) d1_ch1 <= word_i[1];
//    assign skew_o[1] = d1_ch1;

//    logic signed [7:0] d1_ch2, d2_ch2;
//    always_ff @(posedge clk) begin
//        d1_ch2 <= word_i[2];
//        d2_ch2 <= d1_ch2;
//    end
//    assign skew_o[2] = d2_ch2;

//    logic signed [7:0] d1_ch3, d2_ch3, d3_ch3;
//    always_ff @(posedge clk) begin
//        d1_ch3 <= word_i[3];
//        d2_ch3 <= d1_ch3;
//        d3_ch3 <= d2_ch3;
//    end
//    assign skew_o[3] = d3_ch3;

//    logic signed [7:0] d1_ch4, d2_ch4, d3_ch4, d4_ch4;
//    always_ff @(posedge clk) begin
//        d1_ch4 <= word_i[4];
//        d2_ch4 <= d1_ch4;
//        d3_ch4 <= d2_ch4;
//        d4_ch4 <= d3_ch4;
//    end
//    assign skew_o[4] = d4_ch4;

//    logic signed [7:0] d1_ch5, d2_ch5, d3_ch5, d4_ch5, d5_ch5;
//    always_ff @(posedge clk) begin
//        d1_ch5 <= word_i[5];
//        d2_ch5 <= d1_ch5;
//        d3_ch5 <= d2_ch5;
//        d4_ch5 <= d3_ch5;
//        d5_ch5 <= d4_ch5;
//    end
//    assign skew_o[5] = d5_ch5;

//    logic signed [7:0] d1_ch6, d2_ch6, d3_ch6, d4_ch6, d5_ch6, d6_ch6;
//    always_ff @(posedge clk) begin
//        d1_ch6 <= word_i[6];
//        d2_ch6 <= d1_ch6;
//        d3_ch6 <= d2_ch6;
//        d4_ch6 <= d3_ch6;
//        d5_ch6 <= d4_ch6;
//        d6_ch6 <= d5_ch6;
//    end
//    assign skew_o[6] = d6_ch6;

//    logic signed [7:0] d1_ch7, d2_ch7, d3_ch7, d4_ch7, d5_ch7, d6_ch7, d7_ch7;
//    always_ff @(posedge clk) begin
//        d1_ch7 <= word_i[7];
//        d2_ch7 <= d1_ch7;
//        d3_ch7 <= d2_ch7;
//        d4_ch7 <= d3_ch7;
//        d5_ch7 <= d4_ch7;
//        d6_ch7 <= d5_ch7;
//        d7_ch7 <= d6_ch7;
//    end
//    assign skew_o[7] = d7_ch7;

//    logic signed [7:0] d1_ch8, d2_ch8, d3_ch8, d4_ch8, d5_ch8, d6_ch8, d7_ch8, d8_ch8;
//    always_ff @(posedge clk) begin
//        d1_ch8 <= word_i[8];
//        d2_ch8 <= d1_ch8;
//        d3_ch8 <= d2_ch8;
//        d4_ch8 <= d3_ch8;
//        d5_ch8 <= d4_ch8;
//        d6_ch8 <= d5_ch8;
//        d7_ch8 <= d6_ch8;
//        d8_ch8 <= d7_ch8;
//    end
//    assign skew_o[8] = d8_ch8;

//    logic signed [7:0] d1_ch9, d2_ch9, d3_ch9, d4_ch9, d5_ch9, d6_ch9, d7_ch9, d8_ch9, d9_ch9;
//    always_ff @(posedge clk) begin
//        d1_ch9 <= word_i[9];
//        d2_ch9 <= d1_ch9;
//        d3_ch9 <= d2_ch9;
//        d4_ch9 <= d3_ch9;
//        d5_ch9 <= d4_ch9;
//        d6_ch9 <= d5_ch9;
//        d7_ch9 <= d6_ch9;
//        d8_ch9 <= d7_ch9;
//        d9_ch9 <= d8_ch9;
//    end
//    assign skew_o[9] = d9_ch9;
endmodule

