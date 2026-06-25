`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/24/2026 12:43:02 PM
// Design Name: 
// Module Name: exponential
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


module exponential(
    input logic clk_i,
    input logic rst_n_i,
    input logic start_i,
    input logic signed  [8:0] in_0,
    input logic signed  [8:0] in_1,
    input logic signed  [8:0] in_2,
    input logic signed  [8:0] in_3,
    output logic [7:0] out_0,
    output logic [7:0] out_1,
    output logic [7:0] out_2,
    output logic [7:0] out_3,
    output logic done_o
    
    
    );
    
    
    logic [7:0] rom_addr_0;
    logic [7:0] rom_addr_1;
    logic [7:0] rom_addr_2;
    logic [7:0] rom_addr_3;

    // sub_out_0 negatifse tersini alıp 1 ekle (Mutlak değer), sıfırsa doğrudan 0 ver
    assign rom_addr_0 = (in_0 == 0) ? 8'b0 : (~in_0[7:0] + 1'b1);
    assign rom_addr_1 = (in_1 == 0) ? 8'b0 : (~in_1[7:0] + 1'b1);
    assign rom_addr_2 = (in_2 == 0) ? 8'b0 : (~in_2[7:0] + 1'b1);
    assign rom_addr_3 = (in_3 == 0) ? 8'b0 : (~in_3[7:0] + 1'b1);
    
    
    
    logic [7:0] exp_rom [0:255];
    initial begin 
        $readmemh("exp_rom.mem",exp_rom);  
    end
    logic [7:0] exp_0_komb, exp_1_komb,exp_2_komb,exp_3_komb;
    assign exp_0_komb = exp_rom[rom_addr_0];
    assign exp_1_komb = exp_rom[rom_addr_1];
    assign exp_2_komb = exp_rom[rom_addr_2];
    assign exp_3_komb = exp_rom[rom_addr_3];
    
    
    
    always_ff@(posedge clk_i)begin 
        if(!rst_n_i)begin 
            out_0<='0;
            out_1<='0;
            out_2<='0;
            out_3<='0; 
            done_o<='0;
        end
        else if(start_i) begin 
            out_0<=exp_0_komb; 
            out_1<=exp_1_komb; 
            out_2<=exp_2_komb; 
            out_3<=exp_3_komb; 
            done_o<=1;
        end
        else begin 
            done_o<='0;
        end
        
    
    end
    
endmodule
