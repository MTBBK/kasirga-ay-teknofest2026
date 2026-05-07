`timescale 1ns/1ps

module uart_top(
    input logic clk_i,
    input logic reset_ni,

    input logic rx_i,
    output logic tx_o,

    // AXI-4 Lite Interface
    input logic AWVALID,
    output logic AWREADY,
    input logic [31:0] AWADDR,

    input logic WVALID,
    output logic WREADY,
    input logic [31:0] WDATA,
    input logic [3:0] WSTRB,

    output logic BVALID,
    input logic BREADY,
    output logic [1:0] BRESP,

    input logic ARVALID,
    output logic ARREADY,
    input logic [31:0] ARADDR,

    output logic RVALID,
    input logic RREADY,
    output logic [31:0] RDATA

);

logic axi_rready, axi_awready;
logic [31:0] axi_rdata;
logic axi_bvalid, axi_rvalid;

assign BVALID  = axi_bvalid;
assign RVALID  = axi_rvalid;
assign RDATA   = axi_rdata;
assign WREADY  = axi_awready && !tx_busy;
assign AWREADY = axi_awready && !tx_busy;
assign ARREADY = axi_rready;

logic axi_write_ready, axi_read_ready;
assign axi_write_ready = AWREADY; // axi_awready ve !tx_busy birleşimi
assign axi_read_ready = (ARVALID && ARREADY);

// Adres Haritası
localparam  ADDR_UART_CPB = 32'h00005000,
            ADDR_UART_STP = 32'h00005004,
            ADDR_UART_RDR = 32'h00005008,
            ADDR_UART_TDR = 32'h0000500C,
            ADDR_UART_CFG = 32'h00005010;

logic [31:0] UART_CPB, UART_CPB_next;
logic [31:0] UART_STP, UART_STP_next;
logic [31:0] UART_RDR, UART_RDR_next;
logic [31:0] UART_TDR, UART_TDR_next;
logic [31:0] UART_CFG, UART_CFG_next; 

logic transmit_enable;
assign transmit_enable = UART_CFG[0] && ~UART_CFG[2];

logic [7:0] rx_data_wire;
logic data_received;
logic transmit_done;
logic tx_busy;

uart_tx uart_tx_instance (
    .clock_i   (clk_i),
    .reset_i   (reset_ni),
    .uart_cpb  (UART_CPB),
    .uart_stp  (UART_STP),
    .uart_tdr  (UART_TDR),
    .tx_enable (transmit_enable),
    .tx_done   (transmit_done),
    .tx_out    (tx_o)
);

uart_rx uart_rx_instance (
    .clock_i   (clk_i),
    .reset_i   (reset_ni),
    .uart_cpb  (UART_CPB),
    .uart_stp  (UART_STP),
    .rx_in     (rx_i),
    .rx_clear  (UART_CFG[3]), 
    .uart_rdr  (rx_data_wire),
    .rx_done   (data_received)
);

always_ff @(posedge clk_i) begin
    if(~reset_ni) begin
        UART_CPB <= 32'd434; 
        UART_STP <= 0;
        UART_RDR <= 0;
        UART_TDR <= 0;
        UART_CFG <= 0;
    end else if(axi_write_ready && WVALID) begin
        case(AWADDR)
            ADDR_UART_CFG: begin
                if(WSTRB[0]) UART_CFG[7:0]   <= WDATA[7:0];
                if(WSTRB[1]) UART_CFG[15:8]  <= WDATA[15:8];
                if(WSTRB[2]) UART_CFG[23:16] <= WDATA[23:16];
                if(WSTRB[3]) UART_CFG[31:24] <= WDATA[31:24];
            end
            ADDR_UART_CPB: begin
                if(WSTRB[0]) UART_CPB[7:0]   <= WDATA[7:0];
                if(WSTRB[1]) UART_CPB[15:8]  <= WDATA[15:8];
                if(WSTRB[2]) UART_CPB[23:16] <= WDATA[23:16];
                if(WSTRB[3]) UART_CPB[31:24] <= WDATA[31:24];
            end
            ADDR_UART_STP: begin
                if(WSTRB[0]) UART_STP[7:0]   <= WDATA[7:0];
                if(WSTRB[1]) UART_STP[15:8]  <= WDATA[15:8];
                if(WSTRB[2]) UART_STP[23:16] <= WDATA[23:16];
                if(WSTRB[3]) UART_STP[31:24] <= WDATA[31:24];
            end
            ADDR_UART_TDR: begin
                if(WSTRB[0]) UART_TDR[7:0]   <= WDATA[7:0];
                if(WSTRB[1]) UART_TDR[15:8]  <= WDATA[15:8];
                if(WSTRB[2]) UART_TDR[23:16] <= WDATA[23:16];
                if(WSTRB[3]) UART_TDR[31:24] <= WDATA[31:24];
            end
        endcase
    end else begin
        UART_CPB <= UART_CPB_next;
        UART_STP <= UART_STP_next;
        UART_RDR <= UART_RDR_next;
        UART_TDR <= UART_TDR_next;
        UART_CFG <= UART_CFG_next;
    end
end

// Okuma
always @(posedge clk_i) begin
    if(!reset_ni)
        axi_rdata <= 32'b0;
    else if(!ARVALID || RREADY) begin
        case(ARADDR)
            ADDR_UART_CFG: axi_rdata <= UART_CFG;
            ADDR_UART_CPB: axi_rdata <= UART_CPB;
            ADDR_UART_STP: axi_rdata <= UART_STP;
            ADDR_UART_RDR: axi_rdata <= UART_RDR;
            ADDR_UART_TDR: axi_rdata <= UART_TDR;
            default:       axi_rdata <= 32'h0;
        endcase
    end
end

always_ff @(posedge clk_i or negedge reset_ni) begin
    if (!reset_ni) tx_busy <= 1'b0;
    else if (transmit_enable) tx_busy <= 1'b1;
    else if (transmit_done)   tx_busy <= 1'b0;
end
    
always_ff @(posedge clk_i) begin
    if(!reset_ni)
        axi_bvalid <= 1'b0;
    else if(axi_write_ready && WVALID)
        axi_bvalid <= 1'b1;
    else if(BREADY)
        axi_bvalid <= 1'b0;
end

always_ff @(posedge clk_i) begin
    if(!reset_ni)
        axi_rvalid <= 1'b0;
    else if(axi_read_ready)
        axi_rvalid <= 1'b1;
    else if(RREADY)
        axi_rvalid <= 1'b0;
end

always_ff @(posedge clk_i) begin
    if(!reset_ni)
        axi_awready <= 1'b0;
    else 
        axi_awready <= !axi_awready 
                       && (AWVALID && WVALID) 
                       && (!BVALID || BREADY);
end

// KNext
always_comb begin
    axi_rready = !RVALID;

    UART_CPB_next = UART_CPB;
    UART_STP_next = UART_STP;
    UART_RDR_next = UART_RDR;
    UART_TDR_next = UART_TDR;
    UART_CFG_next = UART_CFG;

    if(data_received) begin
        UART_RDR_next = {24'b0, rx_data_wire};
    end

    // Donanım bayrakları set eder, yazılım 0 yazana kadar 1 kalır
    if(data_received) UART_CFG_next[1] = 1'b1;
    if(transmit_done) UART_CFG_next[2] = 1'b1;

end

endmodule
