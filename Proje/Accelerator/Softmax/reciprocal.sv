`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/24/2026 12:44:05 PM
// Design Name: 
// Module Name: reciprocal
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


module reciprocal(
    input logic clk_i,
    input logic rst_n_i,
    input logic start_i,
    output logic done_o,
    input logic [9:0] in,
    output logic [15:0] out
    );
    
    logic [15:0] rec_rom [0:1023];
    initial begin 
        $readmemh("reciprocal_rom.mem",rec_rom);  
    end
    
    logic [15:0] rec_internal;
    assign rec_internal=rec_rom[in];
    always_ff@(posedge clk_i)begin 
        if(!rst_n_i)begin 
            out<='0;
            done_o<='0;
        end
        else if(start_i) begin 
            out<=rec_internal; 
            done_o<=1;
        end
        else begin 
            done_o<='0;
        end
        
    
    end
    
endmodule
