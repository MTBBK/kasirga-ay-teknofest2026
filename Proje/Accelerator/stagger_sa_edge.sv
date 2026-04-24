`timescale 1ns / 1ps

module stagger_sa_edge (
  input  clk,
  input  rst,
  input  en_i, //aç kapa örnek tasarımda vardı ama kullanmıyoruz şuan ama belki de kullanırız silmeyim şimdilik

  input  [7:0] word_i [0:7],
  input  [7:0] skew_o [0:7]
);

  reg [55:0] buf_q1; //1 çevrim gecikme
  reg [47:0] buf_q2; //2
  reg [39:0] buf_q3; //3
  reg [31:0] buf_q4; //4
  reg [23:0] buf_q5; //5
  reg [15:0] buf_q6; //6
  reg [7:0]  buf_q7; //7 çevrim gecikme

  //assign skew_o = {//girişi rag array e çevirince burayı da değiştirdim alttaki gibi oldu
  //  buf_q7[7:0], buf_q6[7:0], buf_q5[7:0], buf_q4[7:0], 
  //  buf_q3[7:0], buf_q2[7:0], buf_q1[7:0], word_i[7:0]
  //};
  assign skew_o[0] =  word_i[0];
  assign skew_o[1] =  buf_q1[7:0];
  assign skew_o[2] =  buf_q2[7:0];
  assign skew_o[3] =  buf_q3[7:0];
  assign skew_o[4] =  buf_q4[7:0];
  assign skew_o[5] =  buf_q5[7:0];
  assign skew_o[6] =  buf_q6[7:0];
  assign skew_o[7] =  buf_q7[7:0];
  
  always @(posedge clk) begin
    if (rst) begin
      buf_q1 <= 'd0;
      buf_q2 <= 'd0;
      buf_q3 <= 'd0;
      buf_q4 <= 'd0;
      buf_q5 <= 'd0;
      buf_q6 <= 'd0;
      buf_q7 <= 'd0;
    end else begin
      if (1'b1) begin//en_i olacak normalde
        buf_q1 <= {word_i[3'd7],word_i[3'd6],word_i[3'd5],word_i[3'd4],word_i[3'd3],word_i[3'd2],word_i[3'd1]};
        buf_q2 <= buf_q1[55:8];
        buf_q3 <= buf_q2[47:8];
        buf_q4 <= buf_q3[39:8];
        buf_q5 <= buf_q4[31:8];
        buf_q6 <= buf_q5[23:8];
        buf_q7 <= buf_q6[15:8];
      end
    end
  end

endmodule