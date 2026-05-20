`timescale 1ns / 1ps

module tb_obi2axi_uart();

    // Clock and Reset
    reg clk;
    reg rst_n;

    // OBI Bus Emulator Wires (Driven by Testbench)
    reg         tb_obi_req;
    wire        tb_obi_gnt;
    wire        tb_obi_rvalid;
    reg  [31:0] tb_obi_addr;
    reg  [31:0] tb_obi_wdata;
    reg         tb_obi_we;
    reg  [3:0]  tb_obi_be;
    wire [31:0] tb_obi_rdata;

    // Interconnect AXI Wires (Bridge <-> UART)
    wire [31:0] axi_araddr;
    wire        axi_arvalid;
    wire        axi_arready;
    wire [31:0] axi_rdata;
    wire        axi_rvalid;
    wire        axi_rready;
    
    wire [31:0] axi_awaddr;
    wire        axi_awvalid;
    wire        axi_awready;
    wire        axi_wready;
    wire [31:0] axi_wdata;
    wire        axi_wvalid;
    wire [3:0]  axi_wstrb;
    wire        axi_bvalid;
    wire        axi_bready;

    // Physical UART Signals
    reg  uart_rx;
    wire uart_tx;

    //---------------------------------------------------------
    // 1. Device Under Test (DUT) Instantiations
    //---------------------------------------------------------
    
    // Bridge Instance
    obi_to_axi bridge_i (
        .obi_req_i    (tb_obi_req),
        .obi_gnt_o    (tb_obi_gnt),
        .obi_rvalid_o (tb_obi_rvalid),
        .obi_addr_i   (tb_obi_addr),
        .obi_wdata_i  (tb_obi_wdata),
        .obi_we_i     (tb_obi_we),
        .obi_be_i     (tb_obi_be),
        .obi_rdata_o  (tb_obi_rdata),
        
        .axi_araddr_o (axi_araddr),
        .axi_arvalid_o(axi_arvalid),
        .axi_arready_i(axi_arready),
        .axi_rdata_i  (axi_rdata),
        .axi_rvalid_i (axi_rvalid),
        .axi_rready_o (axi_rready),
        
        .axi_awaddr_o (axi_awaddr),
        .axi_awvalid_o(axi_awvalid),
        .axi_awready_i(axi_awready),
        .axi_wready_i (axi_wready),
        .axi_wdata_o  (axi_wdata),
        .axi_wvalid_o (axi_wvalid),
        .axi_wstrb_o  (axi_wstrb),
        .axi_bvalid_i (axi_bvalid),
        .axi_bready_o (axi_bready)
    );

    // UART Top Instance
    uart_top #(
        .baud_rate(115200),
        .clock_frequency(100)
    ) uart_top_i (
        .S_AXI_ACLK   (clk),
        .S_AXI_ARESETN(rst_n),
        .uart_rx_i    (uart_rx),
        .uart_tx_o    (uart_tx),
        
        .S_AXI_AWADDR (axi_awaddr),
        .S_AXI_AWVALID(axi_awvalid),
        .S_AXI_AWREADY(axi_awready),
        
        .S_AXI_WDATA  (axi_wdata),
        .S_AXI_WSTRB  (axi_wstrb),
        .S_AXI_WVALID (axi_wvalid),
        .S_AXI_WREADY (axi_wready),
        
        .S_AXI_BRESP  (), 
        .S_AXI_BVALID (axi_bvalid),
        .S_AXI_BREADY (axi_bready),
        
        .S_AXI_ARADDR (axi_araddr),
        .S_AXI_ARVALID(axi_arvalid),
        .S_AXI_ARREADY(axi_arready),
        
        .S_AXI_RDATA  (axi_rdata),
        .S_AXI_RVALID (axi_rvalid),
        .S_AXI_RRESP  (),
        .S_AXI_RREADY (axi_rready)
    );

    //---------------------------------------------------------
    // 2. Clock Generator (100 MHz System Clock) [cite: 8]
    //---------------------------------------------------------
    always begin
        clk = 1'b0; #5;
        clk = 1'b1; #5;
    end

    //---------------------------------------------------------
    // 3. Test Stimulus Procedural Block
    //---------------------------------------------------------
    initial begin
        // Setup Waveform Dumping
        $dumpfile("obi2axi_uart_test.vcd");
        $dumpvars(0, tb_obi2axi_uart);

        // Initialize Signals
        rst_n       <= 1'b0;
        uart_rx     <= 1'b1;
        tb_obi_req  <= 1'b0;
        tb_obi_addr <= 32'b0;
        tb_obi_wdata<= 32'b0;
        tb_obi_we   <= 1'b0;
        tb_obi_be   <= 4'b0000;

        // Hold Reset Phase
        #100;
        @(posedge clk);
        rst_n <= 1'b1; // De-assert reset (AXI-Lite standard is active-low)
        #50;

        $display("=== STARTING OBI-TO-AXI UART TEST ===");

        //---------------------------------------------------------
        // TEST CASE 1: WRITE TO UART TRANSMIT DATA REGISTER (0x0000500C)
        //---------------------------------------------------------
        $display("[%t] Phase 1: Initiating OBI Write to ADDR 0x0000500C...", $time);
        
        @(posedge clk);
        tb_obi_addr  <= 32'h0000500C; // Target ADDR_UART_TDR
        tb_obi_wdata <= 32'hDEADBEEF; // Test patterns
        tb_obi_we    <= 1'b1;         // Write operation
        tb_obi_be    <= 4'b1111;      // Byte Enable
        tb_obi_req   <= 1'b1;         // Assert Request

        // Wait for OBI Grant to indicate handshake completion
        @(posedge clk);
        while (!tb_obi_gnt) begin
            @(posedge clk);
        end
        
        // De-assert request on the clock edge following the grant
        tb_obi_req   <= 1'b0;
        tb_obi_we    <= 1'b0;
        
        // Wait for the write verification response back from AXI
        while (!tb_obi_rvalid) begin
            @(posedge clk);
        end
        $display("[%t] SUCCESS: Write Transaction acknowledged by Slave.", $time);
        #50;

        //---------------------------------------------------------
        // TEST CASE 2: READ BACK FROM THE SAME REGISTER (0x0000500C)
        //---------------------------------------------------------
        $display("[%t] Phase 2: Initiating OBI Read from ADDR 0x0000500C...", $time);
        
        @(posedge clk);
        tb_obi_addr  <= 32'h0000500C; // Target ADDR_UART_TDR
        tb_obi_we    <= 1'b0;         // Read operation
        tb_obi_be    <= 4'b1111;      // Byte Enable
        tb_obi_req   <= 1'b1;         // Assert Request

        // Wait for OBI Grant
        @(posedge clk);
        while (!tb_obi_gnt) begin
            @(posedge clk);
        end
        tb_obi_req   <= 1'b0;         // Clean request drop

        // Wait for Valid data loop back
        while (!tb_obi_rvalid) begin
            @(posedge clk);
        end

        // Verify Data Integrity
        if (tb_obi_rdata === 32'hDEADBEEF) begin
            $display("[%t] MATCH SUCCESS: Read Data matches written value: 0x%h", $time, tb_obi_rdata);
        end else begin
            $display("[%t] ERROR MISMATH: Expected 0xDEADBEEF, Got: 0x%h", $time, tb_obi_rdata);
        end

        #100;
        $display("=== SIMULATION COMPLETE ===");
        $finish;
    end

endmodule
