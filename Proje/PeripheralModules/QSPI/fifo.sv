`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/06/2026 05:20:49 PM
// Design Name: 
// Module Name: fifo
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


module fifo #(parameter DATA_WIDTH=32,parameter DEPTH=64)(
    input logic clk,
    input logic rst_n,
    input logic flush,
    
    input logic wr_en,
    input logic [DATA_WIDTH-1:0] data_in,
    
    input logic rd_en,
    output logic [DATA_WIDTH-1:0] data_out,
    
    output logic full,
    output logic empty
    );
    
    logic [DATA_WIDTH-1:0] mem [0:DEPTH-1];
    
    localparam PTR_WIDTH=$clog2(DEPTH);
    
    logic [PTR_WIDTH:0] wr_ptr;
    logic [PTR_WIDTH:0] rd_ptr;
    
    assign full=((wr_ptr[PTR_WIDTH]!=rd_ptr[PTR_WIDTH])&&(wr_ptr[PTR_WIDTH-1:0]==rd_ptr[PTR_WIDTH-1:0]));
    assign empty=(wr_ptr==rd_ptr);
    assign data_out=mem[rd_ptr[PTR_WIDTH-1:0]];
    
    always_ff @(posedge clk or negedge rst_n)begin 
        if(!rst_n)begin 
            wr_ptr <= 0;
            rd_ptr <= 0;
        end
        else if(flush)begin 
            wr_ptr <= 0;
            rd_ptr <= 0;
        end 
        else begin
            if (wr_en&&!full)begin 
                mem[wr_ptr[PTR_WIDTH-1:0]]<=data_in;
                wr_ptr<=wr_ptr+1;
            
            end
            else if(rd_en&&!empty)begin 
                rd_ptr<=rd_ptr+1;
            end      
        end
    end
 
endmodule
