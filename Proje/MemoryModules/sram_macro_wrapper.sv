`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/12/2026 12:09:06 PM
// Design Name: 
// Module Name: sram_macro_wrapper8kb
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


module sram_macro_wrapper #(
    parameter BANK_COUNT=4
)(
    // Port 0: Okuma/Yazma (RW) Portu
    input  logic        clk0,
    input  logic        csb0,      // Active-low Chip Select
    input  logic        web0,      // Active-low Write Enable
    input  logic [3:0]  wmask0,    // 4-bit Write Mask (Byte enable)
    input  logic [31:0] addr0,     // 11-bit Adres (2048 kelime icin)
    input  logic [31:0] din0,      // 32-bit Yazilacak Veri
    output logic [31:0] dout0,     // 32-bit Okunan Veri

    // Port 1: Sadece Okuma (R) Portu
    input  logic        clk1,
    input  logic        csb1,      // Active-low Chip Select
    input  logic [31:0] addr1,     // 11-bit Adres (2048 kelime icin)
    output logic [31:0] dout1      // 32-bit Okunan Veri
    );
    localparam bank_count_log=$clog2(BANK_COUNT);
    logic [BANK_COUNT-1:0] csb0_i;
    logic [BANK_COUNT-1:0] web0_i;
    logic [BANK_COUNT-1:0] csb1_i;
    logic [BANK_COUNT-1:0] [31:0] dout0_i;
    logic [BANK_COUNT-1:0] [31:0] dout1_i;
    logic [bank_count_log-1:0] dout0_sel;
    logic [bank_count_log-1:0] dout1_sel;
    
    always_ff @(posedge clk0)begin 
        if(!csb0)begin 
            dout0_sel<=addr0[9+: bank_count_log];
        end
    end
    always_ff @(posedge clk1)begin 
        if(!csb1)begin 
            dout1_sel<=addr1[9+: bank_count_log];
        end
    end
    always_comb begin
        csb0_i={BANK_COUNT{1'b1}};
        if(!csb0)begin 
            csb0_i[addr0[9+: bank_count_log]]=1'b0;
        end
    end
    always_comb begin
        csb1_i={BANK_COUNT{1'b1}};
        if(!csb1)begin 
            csb1_i[addr1[9+: bank_count_log]]=1'b0;
        end
    end
    
    assign dout0=dout0_i[dout0_sel];
    assign dout1=dout1_i[dout1_sel];
    genvar i;
    generate 
        for(i=0; i<BANK_COUNT; i++) begin 
            sky130_sram_2kbyte_1rw1r_32x512_8 #(.VERBOSE(0)) sram(
                .clk0(clk0),
                .csb0(csb0_i[i]),
                .web0(web0),
                .wmask0(wmask0),
                .addr0(addr0[8:0]),
                .din0(din0),
                .dout0(dout0_i[i]),
                
                .clk1(clk1),
                .csb1(csb1_i[i]),
                .addr1(addr1[8:0]),
                .dout1(dout1_i[i])
            );


        end // <--- DIKKAT: for dongusunun bitisi (end) BURADA olmali!
    endgenerate 

endmodule


