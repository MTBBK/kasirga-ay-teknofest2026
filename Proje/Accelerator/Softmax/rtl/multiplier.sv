`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/24/2026 12:44:28 PM
// Design Name: 
// Module Name: multiplier
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


module multiplier(
    input logic clk_i,
    input logic rst_n_i,
    input logic start_i,
    output logic done_o,
    input logic [7:0]  in_exp_0,
    input logic [7:0]  in_exp_1,
    input logic [7:0]  in_exp_2,
    input logic [7:0]  in_exp_3,
    input logic [15:0] in_rec,
    output logic [7:0] out_0,
    output logic [7:0] out_1,
    output logic [7:0] out_2,
    output logic [7:0] out_3
    );
    logic [23:0] res_internal_0;
    logic [23:0] res_internal_1;
    logic [23:0] res_internal_2;
    logic [23:0] res_internal_3;
    
    assign res_internal_0=in_exp_0*in_rec;
    assign res_internal_1=in_exp_1*in_rec;
    assign res_internal_2=in_exp_2*in_rec;
    assign res_internal_3=in_exp_3*in_rec;
    
    always_ff@(posedge clk_i)begin 
        if(!rst_n_i)begin 
            out_0<='0;
            out_1<='0;
            out_2<='0;
            out_3<='0; 
            done_o<='0;
        end
        else if(start_i) begin 
            out_0<=res_internal_0[23:16]; 
            out_1<=res_internal_1[23:16]; 
            out_2<=res_internal_2[23:16]; 
            out_3<=res_internal_3[23:16]; 
            done_o<=1;
        end
        else begin 
            done_o<='0;
        end
        
    
    end
    
endmodule
