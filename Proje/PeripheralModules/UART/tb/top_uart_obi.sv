`timescale 1ns / 1ps

module top_uart_obi (
    input  logic clk_i,
    input  logic rst_btn_i,
    input  logic uart_rx_i,
    output logic uart_tx_o
);

    // ─── Reset ───────────────────────────────────────────────────────
    logic rst_n;
    assign rst_n = ~rst_btn_i;

    // ─── UART Register Addresses ─────────────────────────────────────
    localparam [31:0] ADDR_UART_CFG = 32'h00005010;
    localparam [31:0] ADDR_UART_RDR = 32'h00005008;
    localparam [31:0] ADDR_UART_TDR = 32'h0000500C;

    // ─── OBI Master signals ─────────────────────────────────────────
    logic        obi_req;
    logic        obi_gnt;
    logic        obi_rvalid;
    logic [31:0] obi_addr;
    logic [31:0] obi_wdata;
    logic        obi_we;
    logic [3:0]  obi_be;
    logic [31:0] obi_rdata;

    // ─── AXI-Lite wires (bridge ↔ uart_top) ─────────────────────────
    // Write Address Channel
    logic [31:0] axi_awaddr;
    logic        axi_awvalid;
    logic        axi_awready;
    // Write Data Channel
    logic [31:0] axi_wdata;
    logic        axi_wvalid;
    logic        axi_wready;
    logic [3:0]  axi_wstrb;
    // Write Response Channel
    logic [1:0]  axi_bresp;
    logic        axi_bvalid;
    logic        axi_bready;
    // Read Address Channel
    logic [31:0] axi_araddr;
    logic        axi_arvalid;
    logic        axi_arready;
    // Read Data Channel
    logic [31:0] axi_rdata;
    logic        axi_rvalid;
    logic        axi_rready;
    logic [1:0]  axi_rresp;

    // ─── OBI to AXI Bridge ──────────────────────────────────────────
    obi_to_axi bridge (
        // OBI side
        .obi_req_i    (obi_req),
        .obi_gnt_o    (obi_gnt),
        .obi_rvalid_o (obi_rvalid),
        .obi_addr_i   (obi_addr),
        .obi_wdata_i  (obi_wdata),
        .obi_we_i     (obi_we),
        .obi_be_i     (obi_be),
        .obi_rdata_o  (obi_rdata),
        // AXI Read Address
        .axi_araddr_o  (axi_araddr),
        .axi_arvalid_o (axi_arvalid),
        .axi_arready_i (axi_arready),
        // AXI Read Data
        .axi_rdata_i   (axi_rdata),
        .axi_rvalid_i  (axi_rvalid),
        .axi_rready_o  (axi_rready),
        // AXI Write Address
        .axi_awaddr_o  (axi_awaddr),
        .axi_awvalid_o (axi_awvalid),
        .axi_awready_i (axi_awready),
        .axi_wready_i  (axi_wready),
        // AXI Write Data
        .axi_wdata_o   (axi_wdata),
        .axi_wvalid_o  (axi_wvalid),
        .axi_wstrb_o   (axi_wstrb),
        // AXI Write Response
        .axi_bvalid_i  (axi_bvalid),
        .axi_bready_o  (axi_bready)
    );

    // ─── UART Top (AXI-Lite Slave) ──────────────────────────────────
    uart_top #(
        .baud_rate       (921600),
        .clock_frequency (100)
    ) uart_inst (
        // Physical pins
        .uart_rx_i     (uart_rx_i),
        .uart_tx_o     (uart_tx_o),
        // AXI-Lite interface
        .S_AXI_ACLK    (clk_i),
        .S_AXI_ARESETN (rst_n),
        .S_AXI_AWADDR  (axi_awaddr),
        .S_AXI_AWVALID (axi_awvalid),
        .S_AXI_AWREADY (axi_awready),
        .S_AXI_WDATA   (axi_wdata),
        .S_AXI_WSTRB   (axi_wstrb),
        .S_AXI_WVALID  (axi_wvalid),
        .S_AXI_WREADY  (axi_wready),
        .S_AXI_BRESP   (axi_bresp),
        .S_AXI_BVALID  (axi_bvalid),
        .S_AXI_BREADY  (axi_bready),
        .S_AXI_ARADDR  (axi_araddr),
        .S_AXI_ARVALID (axi_arvalid),
        .S_AXI_ARREADY (axi_arready),
        .S_AXI_RDATA   (axi_rdata),
        .S_AXI_RVALID  (axi_rvalid),
        .S_AXI_RRESP   (axi_rresp),
        .S_AXI_RREADY  (axi_rready)
    );

    // ─── OBI Master FSM (Echo Logic) ────────────────────────────────
    // This FSM acts like a simple CPU:
    //   1. Poll UART_CFG until bit[1] (rx_data_ready) is set
    //   2. Read UART_RDR to get the received byte
    //   3. Write the byte to UART_TDR
    //   4. Write UART_CFG bit[0] = 1 to start TX
    //   5. Poll UART_CFG until bit[2] (tx_done) is set, then repeat

    typedef enum logic [3:0] {
        S_IDLE,
        // Poll for RX data ready
        S_POLL_CFG_REQ,
        S_POLL_CFG_WAIT,
        S_POLL_CFG_CHECK,
        // Read RX data
        S_READ_RDR_REQ,
        S_READ_RDR_WAIT,
        // Write TX data
        S_WRITE_TDR_REQ,
        S_WRITE_TDR_WAIT,
        // Start TX
        S_WRITE_CFG_REQ,
        S_WRITE_CFG_WAIT,
        // Wait for TX to complete
        S_POLL_DONE_REQ,
        S_POLL_DONE_WAIT,
        S_POLL_DONE_CHECK
    } fsm_state_t;

    fsm_state_t fsm_state;
    logic [31:0] captured_data;  // Holds the byte read from RDR
    logic [31:0] cfg_snapshot;   // Holds the value read from CFG

    always_ff @(posedge clk_i or negedge rst_n) begin
        if (!rst_n) begin
            fsm_state    <= S_IDLE;
            obi_req      <= 1'b0;
            obi_addr     <= 32'd0;
            obi_wdata    <= 32'd0;
            obi_we       <= 1'b0;
            obi_be       <= 4'b1111;
            captured_data <= 32'd0;
            cfg_snapshot <= 32'd0;
        end else begin
            case (fsm_state)

                // ── Start: begin polling for RX data ────────────
                S_IDLE: begin
                    fsm_state <= S_POLL_CFG_REQ;
                end

                // ── POLL UART_CFG: check if rx_data_ready ───────
                S_POLL_CFG_REQ: begin
                    obi_req  <= 1'b1;
                    obi_addr <= ADDR_UART_CFG;
                    obi_we   <= 1'b0;  // Read
                    obi_be   <= 4'b1111;
                    if (obi_gnt) begin
                        obi_req   <= 1'b0;
                        fsm_state <= S_POLL_CFG_WAIT;
                    end
                end

                S_POLL_CFG_WAIT: begin
                    obi_req <= 1'b0;
                    if (obi_rvalid) begin
                        cfg_snapshot <= obi_rdata;
                        fsm_state    <= S_POLL_CFG_CHECK;
                    end
                end

                S_POLL_CFG_CHECK: begin
                    if (cfg_snapshot[1]) begin
                        // RX data ready! Go read it.
                        fsm_state <= S_READ_RDR_REQ;
                    end else begin
                        // Not ready yet, keep polling.
                        fsm_state <= S_POLL_CFG_REQ;
                    end
                end

                // ── READ UART_RDR: capture received byte ────────
                S_READ_RDR_REQ: begin
                    obi_req  <= 1'b1;
                    obi_addr <= ADDR_UART_RDR;
                    obi_we   <= 1'b0;  // Read
                    obi_be   <= 4'b1111;
                    if (obi_gnt) begin
                        obi_req   <= 1'b0;
                        fsm_state <= S_READ_RDR_WAIT;
                    end
                end

                S_READ_RDR_WAIT: begin
                    obi_req <= 1'b0;
                    if (obi_rvalid) begin
                        captured_data <= obi_rdata;
                        fsm_state     <= S_WRITE_TDR_REQ;
                    end
                end

                // ── WRITE UART_TDR: set the byte to echo ────────
                S_WRITE_TDR_REQ: begin
                    obi_req   <= 1'b1;
                    obi_addr  <= ADDR_UART_TDR;
                    obi_wdata <= captured_data;
                    obi_we    <= 1'b1;  // Write
                    obi_be    <= 4'b1111;
                    if (obi_gnt) begin
                        obi_req   <= 1'b0;
                        fsm_state <= S_WRITE_TDR_WAIT;
                    end
                end

                S_WRITE_TDR_WAIT: begin
                    obi_req <= 1'b0;
                    if (obi_rvalid) begin
                        // Write response received, now trigger TX
                        fsm_state <= S_WRITE_CFG_REQ;
                    end
                end

                // ── WRITE UART_CFG: set bit[0] to start TX ──────
                S_WRITE_CFG_REQ: begin
                    obi_req   <= 1'b1;
                    obi_addr  <= ADDR_UART_CFG;
                    obi_wdata <= 32'h00000001;  // bit[0] = 1 → TX start
                    obi_we    <= 1'b1;  // Write
                    obi_be    <= 4'b0001;  // Only byte 0
                    if (obi_gnt) begin
                        obi_req   <= 1'b0;
                        fsm_state <= S_WRITE_CFG_WAIT;
                    end
                end

                S_WRITE_CFG_WAIT: begin
                    obi_req <= 1'b0;
                    if (obi_rvalid) begin
                        // TX started, now poll for completion
                        fsm_state <= S_POLL_DONE_REQ;
                    end
                end

                // ── POLL UART_CFG: wait for tx_done (bit[2]) ────
                S_POLL_DONE_REQ: begin
                    obi_req  <= 1'b1;
                    obi_addr <= ADDR_UART_CFG;
                    obi_we   <= 1'b0;  // Read
                    obi_be   <= 4'b1111;
                    if (obi_gnt) begin
                        obi_req   <= 1'b0;
                        fsm_state <= S_POLL_DONE_WAIT;
                    end
                end

                S_POLL_DONE_WAIT: begin
                    obi_req <= 1'b0;
                    if (obi_rvalid) begin
                        cfg_snapshot <= obi_rdata;
                        fsm_state    <= S_POLL_DONE_CHECK;
                    end
                end

                S_POLL_DONE_CHECK: begin
                    if (cfg_snapshot[2]) begin
                        // TX done! Go back to polling for next byte.
                        fsm_state <= S_POLL_CFG_REQ;
                    end else begin
                        // TX still in progress, keep polling.
                        fsm_state <= S_POLL_DONE_REQ;
                    end
                end

                default: fsm_state <= S_IDLE;

            endcase
        end
    end

endmodule
