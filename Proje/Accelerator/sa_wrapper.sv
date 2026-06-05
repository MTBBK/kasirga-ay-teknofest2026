`timescale 1ns / 1ps

module sa_wrapper(
input logic clk,
input logic rst,
input logic [7:0]left_in[0:9],
input logic [7:0]top_in[0:7],
input logic interestregionfinished,
output logic signed [31:0] pe_outputs[0:79], 
output logic alloutputsready
    );
    //bu module diziye girecek satır ve sutun gelir
    //biz bunları skew etmek için stagger modulune sokarız
    //onun çıktısını da sa ya takarız
    
    
    logic [7:0] solkenarskewed [0:9];
    stagger_sa_edge #(.datacount(10)) solkenar_stagger(
    .clk(clk),
    .rst(rst),
    .en_i(1'b1),
    .word_i(left_in),
    .skew_o(solkenarskewed)
    );
    
    logic [7:0] ustkenarskewed [0:7];
    stagger_sa_edge #(.datacount(8)) ustkenar_stagger(
    .clk(clk),
    .rst(rst),
    .en_i(1'b1),
    .word_i(top_in),
    .skew_o(ustkenarskewed)
    );
    
    //logic alloutputsready;
    systolic_array sa(
        .clk(clk),
        .rst(rst),
        .left_in(solkenarskewed),
        .top_in(ustkenarskewed),
        .interestregionfinished(interestregionfinished),
        .pe_outputs(pe_outputs),
        .alloutputsready(alloutputsready)
    );
        
endmodule
