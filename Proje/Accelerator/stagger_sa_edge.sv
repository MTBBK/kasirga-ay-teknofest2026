`timescale 1ns / 1ps

module stagger_sa_edge #(parameter int datacount = 8
)(
  input  clk,
  input  rst,
  input  en_i, //aç kapa örnek tasarımda vardı ama kullanmıyoruz şuan ama belki de kullanırız silmeyim şimdilik

  input   signed [7:0] word_i [0:datacount-1],
  output  signed [7:0] skew_o [0:datacount-1]
);

//    assign skew_o[0]  =  word_i[0];
//    logic [8*datacount-1:0] bufq_array [0:datacount-2];

//    genvar i;
//    generate
//        for(i=0; i<datacount-1; i=i+1) begin : regs
//            localparam WIDTH = 8*datacount - 8*i - 8; 
            
//            logic [WIDTH-1 : 0] bufq;
            
//            assign bufq_array[i][WIDTH-1:0] = bufq;
            
//            assign skew_o[i+1] = bufq[7:0];
    
//            always_ff @(posedge clk) begin
//                if(rst) begin
//                    bufq <= '0;
//                end
//                else begin 
//                    if (i == 0) begin 
//                        for (int k = 1; k < datacount; k = k + 1) begin
//                            bufq[(k-1)*8 +: 8] <= word_i[k];
//                        end
//                    end 
//                    else begin  
//                        localparam PREV_WIDTH = 8*datacount - 8*(i-1) - 8;
//                        bufq <= bufq_array[i-1][PREV_WIDTH-1 : 8];
//                    end
//                end
//            end
//        end
//    endgenerate
    //generate ile parametrik hale getirmeden önceki hali dursun istedim
    logic [55:0] buf_q1; //1 çevrim gecikme
    logic [47:0] buf_q2; //2
    logic [39:0] buf_q3; //3
    logic [31:0] buf_q4; //4
    logic [23:0] buf_q5; //5
    logic [15:0] buf_q6; //6
    logic [7 :0] buf_q7; //7 çevrim gecikme
    
    assign skew_o[0]  =  word_i[0];
    assign skew_o[1]  =  buf_q1[7:0];
    assign skew_o[2]  =  buf_q2[7:0];
    assign skew_o[3]  =  buf_q3[7:0];
    assign skew_o[4]  =  buf_q4[7:0];
    assign skew_o[5]  =  buf_q5[7:0];
    assign skew_o[6]  =  buf_q6[7:0];
    assign skew_o[7]  =  buf_q7[7:0];
    always_ff @(posedge clk) begin
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
    
endmodule