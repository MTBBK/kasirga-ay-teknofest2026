`timescale 1ns / 1ps

module stagger_sa_edge_10
import accelerator_config_pkg::*; 
(
  input  clk,
  input  rst,
  input infer_done,
  input  en_i, //aç kapa örnek tasarımda vardı ama kullanmıyoruz şuan ama belki de kullanırız silmeyim şimdilik

  input signed [7:0] word_i [0:FEEDLANE_COUNT-1'b1],
  output  signed [7:0] skew_o [0:FEEDLANE_COUNT-1'b1]
);

    assign skew_o[0]  =  word_i[0];

    genvar i;
    generate 
        for(i = 0;i<FEEDLANE_COUNT-1'b1;i++)begin:bufq
            logic [7+i*8:0] bufq;
            assign skew_o[i+1'b1] = bufq[7:0];
            
            logic [7+i*8:0] bufq_next;
            always_comb begin 
                bufq_next[7+i*8-:8] = word_i[i+1'b1];
                if(i!= 0)begin
                    bufq_next[0+:7+i*8-7] = bufq[8+:7+i*8-7];
                end
            end
            
            always_ff @(posedge clk)begin
                if(rst)begin 
                    bufq <= '0;
                    //bufq_next<= '0;
                end
                else if(infer_done==1'b1)begin 
                    bufq <= '0;
                    //bufq_next<= '0;
                end
                else begin
                    bufq <= bufq_next;
                end
            end
        end
    endgenerate


//    logic [71:0] buf_q1; //1 çevrim gecikme
//    logic [63:0] buf_q2; //2
//    logic [55:0] buf_q3; //3
//    logic [47:0] buf_q4; //4
//    logic [39:0] buf_q5; //5
//    logic [31:0] buf_q6; //6
//    logic [23 :0] buf_q7; //7 çevrim gecikme
//    logic [15 :0] buf_q8; //8
//    logic [7 :0] buf_q9;//9
    
//    assign skew_o[0]  =  word_i[0];
//    assign skew_o[1]  =  buf_q1[7:0];
//    assign skew_o[2]  =  buf_q2[7:0];
//    assign skew_o[3]  =  buf_q3[7:0];
//    assign skew_o[4]  =  buf_q4[7:0];
//    assign skew_o[5]  =  buf_q5[7:0];
//    assign skew_o[6]  =  buf_q6[7:0];
//    assign skew_o[7]  =  buf_q7[7:0];
//    assign skew_o[8]  =  buf_q8[7:0];
//    assign skew_o[9]  =  buf_q9[7:0];
    
//    always_ff @(posedge clk) begin
//        if (rst) begin
//            buf_q1 <= '0;
//            buf_q2 <= '0;
//            buf_q3 <= '0;
//            buf_q4 <= '0;
//            buf_q5 <= '0;
//            buf_q6 <= '0;
//            buf_q7 <= '0;
//            buf_q8 <= '0;
//            buf_q9 <= '0;
//        end 
//        else if(infer_done==1'b1)begin
//            buf_q1 <= '0;
//            buf_q2 <= '0;
//            buf_q3 <= '0;
//            buf_q4 <= '0;
//            buf_q5 <= '0;
//            buf_q6 <= '0;
//            buf_q7 <= '0;
//            buf_q8 <= '0;
//            buf_q9 <= '0;
//        end
//        else begin
//            if (1'b1) begin//en_i olacak normalde
//                buf_q1 <= {word_i[4'd9],word_i[4'd8],word_i[3'd7],word_i[3'd6],word_i[3'd5],word_i[3'd4],word_i[3'd3],word_i[3'd2],word_i[3'd1]};
//                buf_q2 <= buf_q1[71:8];
//                buf_q3 <= buf_q2[63:8];
//                buf_q4 <= buf_q3[55:8];
//                buf_q5 <= buf_q4[47:8];
//                buf_q6 <= buf_q5[39:8];
//                buf_q7 <= buf_q6[31:8];
//                buf_q8 <= buf_q7[23:8];
//                buf_q9 <= buf_q8[15:8];
//            end
//        end
//    end
endmodule
