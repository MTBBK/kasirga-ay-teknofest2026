`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/24/2026 12:42:39 PM
// Design Name: 
// Module Name: downscale
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


module downscale(
    input logic clk_i,
    input logic rst_n_i,
    input logic start_i,
    output logic done_o,
    
    input logic signed  [7:0] in_0,
    input logic signed  [7:0] in_1,
    input logic signed  [7:0] in_2,
    input logic signed  [7:0] in_3,
    output logic signed [8:0] out_0,
    output logic signed [8:0] out_1,
    output logic signed [8:0] out_2,
    output logic signed [8:0] out_3
    );
    
    logic signed [7:0] max1;
    logic signed [7:0] max2;
    logic signed [7:0] max;

    always_comb begin 
        max1 = (in_0 > in_1) ? in_0 : in_1;
        max2 = (in_2 > in_3) ? in_2 : in_3;
        max= (max1 > max2) ? max1 : max2;
    end
    
    always_ff @(posedge clk_i)begin 
        if(!rst_n_i)begin 
            out_0 <= '0;
            out_1 <= '0;
            out_2 <= '0;
            out_3 <= '0;
            done_o <= 0;        
        end
        else if (start_i) begin 
            out_0 <= in_0 - max;
            out_1 <= in_1 - max;
            out_2 <= in_2 - max;
            out_3 <= in_3 - max;
            done_o <= 1;
        end
        else begin
            done_o <= 0;
        end
    
    end
    
endmodule

