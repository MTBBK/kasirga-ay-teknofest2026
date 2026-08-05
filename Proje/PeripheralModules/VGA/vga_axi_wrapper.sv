`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 07/31/2026 01:24:23 PM
// Design Name: 
// Module Name: vga_axi_wrapper
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


module vga_axi_wrapper(
    
    output logic vga_h_sync_o,
    output logic vga_v_sync_o,
    output logic [11:0] vga_rgb_o,
    input logic clk_25,
    // AXI4-Lite Interface Ports
    // Global Signals
    input  logic                                S_AXI_ACLK, //Clock
    input  logic                                S_AXI_ARESETN, //Reset
    // Write Address Channel
    input  logic [31:0]     					S_AXI_AWADDR,
    input  logic                                S_AXI_AWVALID,
    output logic                                S_AXI_AWREADY,
    // Write Data Channel
    input  logic [31:0]     					S_AXI_WDATA,
    input  logic [3:0] 							S_AXI_WSTRB,
    input logic                                 S_AXI_WVALID,
    output logic                                S_AXI_WREADY,
    // Write Response Channel
    output logic [1:0]                          S_AXI_BRESP,
    output logic                                S_AXI_BVALID,
    input  logic                                S_AXI_BREADY,
    // Read Address Channel
    input  logic [31:0]						    S_AXI_ARADDR,
    input  logic                                S_AXI_ARVALID,
    output logic                                S_AXI_ARREADY,
    // Read Data Channel
    output logic [31:0]						    S_AXI_RDATA,
    output logic                                S_AXI_RVALID,
    output logic [1:0]                          S_AXI_RRESP,
    input  logic                                S_AXI_RREADY
    );
    logic [31:0] VGA_TBD;
    logic [31:0] VGA_TBA;
    
    logic [11:0]    text_buffer_addr_for_cpu_o;
    logic [7:0]     text_buffer_data_for_cpu_i;
    logic           text_buffer_wr_en_i;
    
    assign text_buffer_addr_for_cpu_o=VGA_TBA[11:0];
    assign text_buffer_data_for_cpu_i=S_AXI_WDATA[7:0];
    
    localparam  ADDR_VGA_TBD = 32'h00012000,
                ADDR_VGA_TBA = 32'h00012004;
    
    assign S_AXI_BRESP = 2'b00;
    assign S_AXI_RRESP = 2'b00;

	
    // 1. AXI4-Lite Bus Signals & Handshaking
    logic axi_awready, axi_arready, axi_rvalid, axi_bvalid;

    logic [31:0] axi_rdata;
	
    assign S_AXI_AWREADY = axi_awready;
    assign S_AXI_WREADY = axi_awready;
    assign S_AXI_ARREADY = axi_arready;
    
    assign S_AXI_BVALID  = axi_bvalid;

    assign S_AXI_RDATA   = axi_rdata;
    assign S_AXI_RVALID  = axi_rvalid;

    // Handshake logic (simplified standard AXI template)
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_awready <= 1'b0;
            axi_bvalid  <= 1'b0;
            axi_arready <= 1'b0;
            axi_rvalid  <= 1'b0;
        end else begin
            // Write handshaking
            axi_awready <= (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID);
            if (axi_awready && ~axi_bvalid)
                axi_bvalid <= 1'b1;
            else if (S_AXI_BREADY && axi_bvalid)
                axi_bvalid <= 1'b0;

            // Read handshaking
            axi_arready <= (~axi_arready && S_AXI_ARVALID);
            if (axi_arready && ~axi_rvalid)
                axi_rvalid <= 1'b1;
            else if (axi_rvalid && S_AXI_RREADY)
                axi_rvalid <= 1'b0;
        end
    end
    
    // 2. Software Write Logic & Hardware Status Updates

    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            VGA_TBD<=32'd0;
            VGA_TBA<=32'd0;
        end else begin
            // Software Write Operations (AXI)
            if (axi_awready) begin
                case (S_AXI_AWADDR)
                    ADDR_VGA_TBD: begin
                        if(S_AXI_WSTRB[0]) VGA_TBD[7:0]   <= S_AXI_WDATA[7:0];
                        if(S_AXI_WSTRB[1]) VGA_TBD[15:8]  <= S_AXI_WDATA[15:8];
                        if(S_AXI_WSTRB[2]) VGA_TBD[23:16] <= S_AXI_WDATA[23:16];
                        if(S_AXI_WSTRB[3]) VGA_TBD[31:24] <= S_AXI_WDATA[31:24];
                    end
                    ADDR_VGA_TBA: begin
                        if(S_AXI_WSTRB[0]) VGA_TBA[7:0]   <= S_AXI_WDATA[7:0];
                        if(S_AXI_WSTRB[1]) VGA_TBA[15:8]  <= S_AXI_WDATA[15:8];
                        if(S_AXI_WSTRB[2]) VGA_TBA[23:16] <= S_AXI_WDATA[23:16];
                        if(S_AXI_WSTRB[3]) VGA_TBA[31:24] <= S_AXI_WDATA[31:24];
                    end
               endcase
            end
        end
    end

    // 3. Software Read Logic

    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_rdata <= 32'd0;
        end else if (axi_arready) begin
            case (S_AXI_ARADDR)
                ADDR_VGA_TBD: axi_rdata <= VGA_TBD;
                ADDR_VGA_TBA: axi_rdata <= VGA_TBA;
                default: axi_rdata <= 32'd0;
            endcase
        end
    end
    assign text_buffer_wr_en_i=axi_awready&&(S_AXI_AWADDR==ADDR_VGA_TBD);
    vga_controller vga(
        .clk_pixel_i(clk_25),
        .clk_system(S_AXI_ACLK),
        .rst_i(~S_AXI_ARESETN),
        .vga_h_sync_o(vga_h_sync_o),
        .vga_v_sync_o(vga_v_sync_o),
        .vga_rgb_o(vga_rgb_o),
        .text_buffer_addr_for_cpu_o(text_buffer_addr_for_cpu_o),
        .text_buffer_data_for_cpu_i(text_buffer_data_for_cpu_i),
        .text_buffer_wr_en_i       (text_buffer_wr_en_i       )
    
    );
    
endmodule
