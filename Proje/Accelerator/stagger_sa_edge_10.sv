`timescale 1ns / 1ps

import accelerator_config_pkg::*;

module stagger_sa_edge_10
(
  input  clk,
  input  rst,
  input  infer_done,
  input  en_i, //aç kapa örnek tasarımda vardı ama kullanmıyoruz şuan ama belki de kullanırız silmeyim şimdilik

  input  signed [7:0] word_i [0:FEEDLANE_COUNT-1'b1],
  output signed [7:0] skew_o [0:FEEDLANE_COUNT-1'b1]
);

    assign skew_o[0]  =  word_i[0];

    genvar i;
    generate
        for(i = 0; i < FEEDLANE_COUNT-1'b1; i++) begin : gen_bufq
            logic [7+i*8:0] bufq;
            assign skew_o[i+1'b1] = bufq[7:0];

            logic [7+i*8:0] bufq_next;

            if (i == 0) begin : gen_comb_0
                always_comb begin
                    bufq_next = word_i[1];
                end
            end
            else begin : gen_comb_gt0
                always_comb begin

                    bufq_next[7+i*8-:8] = word_i[i+1'b1];

                    bufq_next[0+:i*8]   = bufq[8+:i*8];
                end
            end

            always_ff @(posedge clk) begin
                if (rst) begin
                    bufq <= '0;
                end
                else if (infer_done == 1'b1) begin
                    bufq <= '0;
                end
                else if (en_i == 1'b1) begin
                    bufq <= bufq_next;
                end
            end
        end
    endgenerate

endmodule
