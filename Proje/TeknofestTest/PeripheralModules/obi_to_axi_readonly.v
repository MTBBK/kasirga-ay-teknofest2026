`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/02/2026 12:01:30 PM
// Design Name: 
// Module Name: obi_to_axi_readonly
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


module obi_to_axi_readonly(
    input  obi_req_i,
    output obi_gnt_o,
    output obi_rvalid_o,
    input  [31:0] obi_addr_i,
    output [31:0] obi_rdata_o,
    
    output [31:0] axi_araddr_o,
    output axi_arvalid_o,
    input  axi_arready_i,
    
    input  [31:0] axi_rdata_i,
    input  axi_rvalid_i,
    output axi_rready_o
    );
    
    assign axi_araddr_o = obi_addr_i;
    
    assign obi_gnt_o = axi_arready_i;
    assign axi_arvalid_o = obi_req_i;
    assign axi_rready_o  = 1;
    assign obi_rvalid_o  = axi_rvalid_i; 
    
    assign obi_rdata_o   = axi_rdata_i;
    
endmodule
