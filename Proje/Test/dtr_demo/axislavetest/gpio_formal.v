`timescale 1ns / 1ps
`default_nettype none

module gpio_formal (
    input wire clk,
    input wire rst_n,

    input wire        AWVALID,
    input wire [31:0] AWADDR,

    input wire        WVALID,
    input wire [31:0] WDATA,
    input wire  [3:0] WSTRB,

    input wire        BREADY,

    input wire        ARVALID,
    input wire [31:0] ARADDR,

    input wire        RREADY,

    input wire [15:0] input_pins
);

    // ----------------------------------------------------------------
    //  DUT
    // ----------------------------------------------------------------
    wire        AWREADY, WREADY;
    wire        BVALID;
    wire  [1:0] BRESP;
    wire        ARREADY;
    wire        RVALID;
    wire [31:0] RDATA;
    wire  [1:0] RRESP;
    wire [15:0] output_pins;

    gpio dut (
        .clk         (clk),
        .rst_i       (rst_n),        // rst_i aktif-düşük = rst_n
        .output_pins (output_pins),
        .input_pins  (input_pins),

        .AWVALID (AWVALID), .AWREADY (AWREADY), .AWADDR (AWADDR),
        .WVALID  (WVALID),  .WREADY  (WREADY),  .WDATA  (WDATA),  .WSTRB (WSTRB),
        .BVALID  (BVALID),  .BREADY  (BREADY),  .BRESP  (BRESP),
        .ARVALID (ARVALID), .ARREADY (ARREADY),  .ARADDR (ARADDR),
        .RVALID  (RVALID),  .RREADY  (RREADY),  .RDATA  (RDATA),  .RRESP (RRESP)
    );

    // ----------------------------------------------------------------
    //  faxil_slave — AXI4-Lite protokol doğrulayıcı
    // ----------------------------------------------------------------
    wire [3:0] f_rd_outstanding;
    wire [3:0] f_wr_outstanding;
    wire [3:0] f_awr_outstanding;

    faxil_slave #(
        .C_AXI_DATA_WIDTH   (32),
        .C_AXI_ADDR_WIDTH   (32),
        .F_OPT_ASSUME_RESET (1),  // reset dışarıdan geliyor
        .F_OPT_NO_RESET     (0),
        .F_AXI_MAXWAIT      (12),
        .F_AXI_MAXRSTALL    (12),
        .F_AXI_MAXDELAY     (12),
        .F_LGDEPTH          (4)
    ) faxil_inst (
        .i_clk             (clk),
        .i_axi_reset_n     (rst_n),

        .i_axi_awvalid     (AWVALID),  .i_axi_awready (AWREADY),
        .i_axi_awaddr      (AWADDR),   .i_axi_awprot  (3'b000),

        .i_axi_wvalid      (WVALID),   .i_axi_wready  (WREADY),
        .i_axi_wdata       (WDATA),    .i_axi_wstrb   (WSTRB),

        .i_axi_bvalid      (BVALID),   .i_axi_bready  (BREADY),
        .i_axi_bresp       (BRESP),

        .i_axi_arvalid     (ARVALID),  .i_axi_arready (ARREADY),
        .i_axi_araddr      (ARADDR),   .i_axi_arprot  (3'b000),

        .i_axi_rvalid      (RVALID),   .i_axi_rready  (RREADY),
        .i_axi_rdata       (RDATA),    .i_axi_rresp   (RRESP),

        .f_axi_rd_outstanding  (f_rd_outstanding),
        .f_axi_wr_outstanding  (f_wr_outstanding),
        .f_axi_awr_outstanding (f_awr_outstanding)
    );

endmodule
`default_nettype wire
