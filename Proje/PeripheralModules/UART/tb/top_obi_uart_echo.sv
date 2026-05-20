`timescale 1ns / 1ps

module top_obi_uart_echo (
    input  logic clk_i,       // 100 MHz from Basys3 Pin W5
    input  logic rst_btn_i,   // Reset button Pin U18
    input  logic uart_rx_i,   // Rx Pin B18
    output logic uart_tx_o    // Tx Pin A18
);

    logic rst_n;
    assign rst_n = ~rst_btn_i;

    logic        obi_req, obi_gnt, obi_rvalid, obi_we;
    logic [31:0] obi_addr, obi_wdata, obi_rdata;
    logic [3:0]  obi_be;

    wire [31:0] axi_araddr, axi_awaddr, axi_wdata, axi_rdata;
    wire [3:0]  axi_wstrb;
    wire axi_arvalid, axi_arready, axi_rvalid, axi_rready;
    wire axi_awvalid, axi_awready, axi_wvalid, axi_wready, axi_bvalid, axi_bready;

    localparam logic [31:0] ADDR_UART_RDR = 32'h00005008;
    localparam logic [31:0] ADDR_UART_TDR = 32'h0000500C;
    localparam logic [31:0] ADDR_UART_CFG = 32'h00005010;

    logic [7:0] data_buffer;

    obi_to_axi bridge_inst (
        .obi_req_i(obi_req), .obi_gnt_o(obi_gnt), .obi_rvalid_o(obi_rvalid),
        .obi_addr_i(obi_addr), .obi_wdata_i(obi_wdata), .obi_we_i(obi_we), .obi_be_i(obi_be), .obi_rdata_o(obi_rdata),
        .axi_araddr_o(axi_araddr), .axi_arvalid_o(axi_arvalid), .axi_arready_i(axi_arready),
        .axi_rdata_i(axi_rdata), .axi_rvalid_i(axi_rvalid), .axi_rready_o(axi_rready),
        .axi_awaddr_o(axi_awaddr), .axi_awvalid_o(axi_awvalid), .axi_awready_i(axi_awready),
        .axi_wready_i(axi_wready), .axi_wdata_o(axi_wdata), .axi_wvalid_o(axi_wvalid), .axi_wstrb_o(axi_wstrb),
        .axi_bvalid_i(axi_bvalid), .axi_bready_o(axi_bready)
    );

    uart_top #(
        .baud_rate(115200), .clock_frequency(100)
    ) uart_core_inst (
        .S_AXI_ACLK(clk_i), .S_AXI_ARESETN(rst_n),
        .uart_rx_i(uart_rx_i), .uart_tx_o(uart_tx_o),
        .S_AXI_AWADDR(axi_awaddr), .S_AXI_AWVALID(axi_awvalid), .S_AXI_AWREADY(axi_awready),
        .S_AXI_WDATA(axi_wdata), .S_AXI_WSTRB(axi_wstrb), .S_AXI_WVALID(axi_wvalid), .S_AXI_WREADY(axi_wready),
        .S_AXI_BRESP(), .S_AXI_BVALID(axi_bvalid), .S_AXI_BREADY(axi_bready),
        .S_AXI_ARADDR(axi_araddr), .S_AXI_ARVALID(axi_arvalid), .S_AXI_ARREADY(axi_arready),
        .S_AXI_RDATA(axi_rdata), .S_AXI_RVALID(axi_rvalid), .S_AXI_RRESP(), .S_AXI_RREADY(axi_rready)
    );

    typedef enum logic [3:0] {
        POLL_RX_REQ,
        POLL_RX_WAIT,
        READ_DATA_REQ,
        READ_DATA_WAIT,
        POLL_TX_REQ,
        POLL_TX_WAIT,
        WRITE_ECHO_REQ,
        WRITE_ECHO_WAIT
    } state_t;

    state_t state;

    always_ff @(posedge clk_i or negedge rst_n) begin
        if (!rst_n) begin
            state      <= POLL_RX_REQ;
            obi_req    <= 1'b0;
            obi_addr   <= 32'b0;
            obi_wdata  <= 32'b0;
            obi_we     <= 1'b0;
            obi_be     <= 4'b1111;
            data_buffer<= 8'h00;
        end else begin
            case (state)
                // 1. Wait for incoming byte (rx_ready is bit 1)
                POLL_RX_REQ: begin
                    obi_addr <= ADDR_UART_CFG;
                    obi_we   <= 1'b0; 
                    obi_be   <= 4'b1111;
                    obi_req  <= 1'b1;
                    state    <= POLL_RX_WAIT;
                end
                POLL_RX_WAIT: begin
                    if (obi_gnt) obi_req <= 1'b0;
                    if (obi_rvalid) begin
                        if (obi_rdata[1] == 1'b1) state <= READ_DATA_REQ;
                        else                      state <= POLL_RX_REQ;
                    end
                end

                // 2. Read RDR (This triggers the hardware Auto-Clear for rx_ready!)
                READ_DATA_REQ: begin
                    obi_addr <= ADDR_UART_RDR;
                    obi_we   <= 1'b0;
                    obi_be   <= 4'b1111;
                    obi_req  <= 1'b1;
                    state    <= READ_DATA_WAIT;
                end
                READ_DATA_WAIT: begin
                    if (obi_gnt) obi_req <= 1'b0;
                    if (obi_rvalid) begin
                        data_buffer <= obi_rdata[7:0];
                        state       <= POLL_TX_REQ;
                    end
                end

                // 3. Ensure Transmitter is totally idle (tx_busy is bit 3)
                POLL_TX_REQ: begin
                    obi_addr <= ADDR_UART_CFG;
                    obi_we   <= 1'b0;
                    obi_be   <= 4'b1111;
                    obi_req  <= 1'b1;
                    state    <= POLL_TX_WAIT;
                end
                POLL_TX_WAIT: begin
                    if (obi_gnt) obi_req <= 1'b0;
                    if (obi_rvalid) begin
                        if (obi_rdata[3] == 1'b0) state <= WRITE_ECHO_REQ; // Clear to send!
                        else                      state <= POLL_TX_REQ;    // Keep waiting
                    end
                end

                // 4. Write data to TDR (This triggers the hardware Auto-Start!)
                WRITE_ECHO_REQ: begin
                    obi_addr  <= ADDR_UART_TDR;
                    obi_wdata <= {24'd0, data_buffer};
                    obi_we    <= 1'b1; 
                    obi_be    <= 4'b1111;
                    obi_req   <= 1'b1;
                    state     <= WRITE_ECHO_WAIT;
                end
                WRITE_ECHO_WAIT: begin
                    if (obi_gnt) obi_req <= 1'b0;
                    if (obi_rvalid) begin
                        state <= POLL_RX_REQ; // Loop finished cleanly!
                    end
                end

                default: state <= POLL_RX_REQ;
            endcase
        end
    end
endmodule
