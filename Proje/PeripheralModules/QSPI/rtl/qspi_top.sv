`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/13/2026 04:17:36 PM
// Design Name: 
// Module Name: qspi_top
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


module qspi_top(
    input logic S_AXI_ACLK,
    input logic S_AXI_ARESETN,
    
    
    output logic sclk,
    output logic cs,
    inout wire qspi_io_0,
    inout wire qspi_io_1,
    inout wire qspi_io_2,
    inout wire qspi_io_3,
    
    
    // AXI-4 Lite Interface
    input logic S_AXI_AWVALID,
    output logic S_AXI_AWREADY,
    input logic [31:0] S_AXI_AWADDR,

    input logic S_AXI_WVALID,
    output logic S_AXI_WREADY,
    input logic [31:0] S_AXI_WDATA,
    input logic [3:0] S_AXI_WSTRB,

    output logic S_AXI_BVALID,
    input logic S_AXI_BREADY,
    output logic [1:0] S_AXI_BRESP,

    input logic S_AXI_ARVALID,
    output logic S_AXI_ARREADY,
    input logic [31:0] S_AXI_ARADDR,

    output logic S_AXI_RVALID,
    input logic S_AXI_RREADY,
    output logic [31:0] S_AXI_RDATA,
    output logic [1:0] S_AXI_RRESP
    );
    
    logic [3:0] qspi_data_i;
    logic [3:0] qspi_data_o;
    logic [3:0] qspi_data_oe;
    
    assign qspi_io_0=qspi_data_oe[0] ? qspi_data_o[0] : 1'bz;
    assign qspi_io_1=qspi_data_oe[1] ? qspi_data_o[1] : 1'bz;
    assign qspi_io_2=qspi_data_oe[2] ? qspi_data_o[2] : 1'bz;
    assign qspi_io_3=qspi_data_oe[3] ? qspi_data_o[3] : 1'bz;
    
    assign qspi_data_i ={qspi_io_3,qspi_io_2,qspi_io_1,qspi_io_0};
    
    pullup(qspi_io_0);
    pullup(qspi_io_1);
    pullup(qspi_io_2);
    pullup(qspi_io_3);
    
    qspi_axi_wrapper wrapper_inst (
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        
        .S_AXI_AWVALID(S_AXI_AWVALID), .S_AXI_AWREADY(S_AXI_AWREADY), .S_AXI_AWADDR(S_AXI_AWADDR),
        .S_AXI_WDATA(S_AXI_WDATA),     .S_AXI_WSTRB(S_AXI_WSTRB), .S_AXI_WVALID(S_AXI_WVALID), .S_AXI_WREADY(S_AXI_WREADY) ,
        .S_AXI_BVALID(S_AXI_BVALID),   .S_AXI_BREADY(S_AXI_BREADY), .S_AXI_BRESP(S_AXI_BRESP),
        
        .S_AXI_ARVALID(S_AXI_ARVALID), .S_AXI_ARREADY(S_AXI_ARREADY), .S_AXI_ARADDR(S_AXI_ARADDR),
        .S_AXI_RVALID(S_AXI_RVALID),   .S_AXI_RREADY(S_AXI_RREADY),   .S_AXI_RDATA(S_AXI_RDATA), .S_AXI_RRESP(S_AXI_RRESP),
        
        .sclk(sclk),
        .cs(cs),
        
        .qspi_data_o(qspi_data_o),
        .qspi_data_i(qspi_data_i),
        .qspi_data_oe(qspi_data_oe)
    );
endmodule
