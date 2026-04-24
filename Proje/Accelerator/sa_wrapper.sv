`timescale 1ns / 1ps

module sa_wrapper(
input logic clk,
input logic rst,
input logic [7:0]left_in[0:7],
input logic [7:0]top_in[0:7],
output logic [31:0] pe_outputs[0:63] 
    );
    //bu module diziye girecek satır ve sutun gelir
    //biz bunları skew etmek için stagger modulune sokarız
    //onun çıktısını da sa ya takarız
    //??buraya doğru satırın sutunun gelmesi lazım ?? herhalde bufferdan alacaz oınu da
    
    //şuan bu module sa ya girecek satır ve sutunlar sırayla verildiğinde doğru şekilde çıktı verebiliyor olması lazım
    //hizalamaya gerek duymamamız lazım tb de. denemek lazım 
    
    logic [7:0] solkenarskewed [7:0];
    stagger_sa_edge solkenar_stagger(
    .clk(clk),
    .rst(rst),
    .en_i(1'b1),
    .word_i(left_in),
    .skew_o(solkenarskewed)
    );
    
    logic [7:0] ustkenarskewed [7:0];
    stagger_sa_edge ustkenar_stagger(
    .clk(clk),
    .rst(rst),
    .en_i(1'b1),
    .word_i(top_in),
    .skew_o(ustkenarskewed)
    );
    
    sa_top sistoli_kdizi (
        .clk(clk),
        .rst(rst),
        .left_in(solkenarskewed),
        .top_in(ustkenarskewed),
        .pe_outputs(pe_outputs)
    );
        
endmodule
