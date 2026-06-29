`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/25/2026 12:14:18 PM
// Design Name: 
// Module Name: softmax_exp_to_mult_buffer
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


module softmax_exp_to_mult_buffer(
    input logic clk_i,
    input logic rst_n_i,

    input logic [7:0] in_0_buf,
    input logic [7:0] in_1_buf,
    input logic [7:0] in_2_buf,
    input logic [7:0] in_3_buf,
    input logic done_i_buf,
    
    output logic [7:0] out_0_buf,
    output logic [7:0] out_1_buf,
    output logic [7:0] out_2_buf,
    output logic [7:0] out_3_buf,
    output logic done_o_buf
    );
    
    logic [7:0] buf_0_1;
    logic [7:0] buf_1_1;
    logic [7:0] buf_2_1;
    logic [7:0] buf_3_1;
    logic       done_buf_1;

    always_ff@(posedge clk_i)begin 
        if(!rst_n_i)begin 
            buf_0_1<='0;    
            buf_1_1<='0;    
            buf_2_1<='0;    
            buf_3_1<='0;    
            done_buf_1<='0;            
            out_0_buf<='0;    
            out_1_buf<='0;    
            out_2_buf<='0;    
            out_3_buf<='0;    
            done_o_buf<='0; 
            
        
        end
        else begin 
            buf_0_1 <= in_0_buf;
            buf_1_1 <= in_1_buf;
            buf_2_1 <= in_2_buf;
            buf_3_1 <= in_3_buf;
            done_buf_1 <= done_i_buf;
            
            out_0_buf <= buf_0_1;
            out_1_buf <= buf_1_1;
            out_2_buf <= buf_2_1;
            out_3_buf <= buf_3_1;
            done_o_buf <= done_buf_1;

        end
    
    
    end
    
    
endmodule
