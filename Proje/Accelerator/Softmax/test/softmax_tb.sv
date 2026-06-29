`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/25/2026 12:30:46 PM
// Design Name: 
// Module Name: softmax_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module softmax_tb();

    logic clk_i=0;
    logic rst_n_i;
    logic start_i;
    logic signed [7:0] in_0;
    logic signed [7:0] in_1;
    logic signed [7:0] in_2;
    logic signed [7:0] in_3;
    logic [7:0] out_0;
    logic [7:0] out_1;
    logic [7:0] out_2;
    logic [7:0] out_3;
    logic done_o;
    
    
    softmax softmax_init(
        .clk_i(clk_i),
        .rst_n_i(rst_n_i),
        .start_i(start_i),
        .in_0(in_0),
        .in_1(in_1),
        .in_2(in_2),
        .in_3(in_3),
        .out_0(out_0),
        .out_1(out_1),
        .out_2(out_2),
        .out_3(out_3),
        .done_o(done_o)
    );
    initial begin 
        forever #10 clk_i=~clk_i;
    end
    
    initial begin 
        #20;
        rst_n_i=0;
        start_i=0;
        in_0 = 0; in_1 = 0; in_2 = 0; in_3 = 0;
        #20;
        rst_n_i=1;
        #20;
        in_0<=-8'sd128;
        in_1<=8'sd97;
        in_2<=8'sd88;
        in_3<=8'sd102;
        #20;
        start_i<=1;
        
    end
endmodule

