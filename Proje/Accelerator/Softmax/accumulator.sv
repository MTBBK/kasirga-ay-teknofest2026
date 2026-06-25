`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/24/2026 12:43:33 PM
// Design Name: 
// Module Name: accumulator
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


module accumulator(
    input logic clk_i,
    input logic rst_n_i,
    input logic start_i,
    output logic done_o,
    input logic [7:0] in_0,
    input logic [7:0] in_1,
    input logic [7:0] in_2,
    input logic [7:0] in_3,
    output logic [9:0] out
    );
    logic [9:0] sum_internal;
    assign sum_internal=in_0+in_1+in_2+in_3;
    
    always_ff@(posedge clk_i)begin 
        if(!rst_n_i)begin 
            out<='0;
            done_o<='0;
        end
        else if(start_i) begin 
            out<=sum_internal; 
            done_o<=1;
        end
        else begin 
            done_o<='0;
        end
        
    
    end
    
endmodule
