`timescale 1ns / 1ps

module tb_axi_uart_wrapper();

    // Clock and Reset
    logic clk;
    logic resetn;

    // UART Physical Signals
    logic uart_loopback;

    // AXI4-Lite Signals
    logic [31:0] awaddr;
    logic        awvalid;
    logic        awready;
    logic [31:0] wdata;
    logic [3:0]  wstrb;
    logic        wvalid;
    logic        wready;
    logic        bresp;
    logic        bvalid;
    logic        bready;
    logic [31:0] araddr;
    logic        arvalid;
    logic        arready;
    logic [31:0] rdata;
    logic        rvalid;
    logic        rready;
    logic        rresp;

    // Register Addresses [cite: 24]
    localparam ADDR_UART_CPB = 32'h00005000;
    localparam ADDR_UART_STP = 32'h00005004;
    localparam ADDR_UART_RDR = 32'h00005008;
    localparam ADDR_UART_TDR = 32'h0000500C;
    localparam ADDR_UART_CFG = 32'h00005010;

    // Clock Generation (100MHz)
    initial clk = 0;
    always #5 clk = ~clk;

    // DUT Instantiation 
    axi_uart_wrapper #(
        .baud_rate(115200),
        .clock_frequency(100)
    ) dut (
        .uart_rx_i(uart_loopback), // Loopback TX to RX 
        .uart_tx_o(uart_loopback),
        .S_AXI_ACLK(clk),
        .S_AXI_ARESETN(resetn),
        .S_AXI_AWADDR(awaddr),
        .S_AXI_AWVALID(awvalid),
        .S_AXI_AWREADY(awready),
        .S_AXI_WDATA(wdata),
        .S_AXI_WSTRB(wstrb),
        .S_AXI_WVALID(wvalid),
        .S_AXI_WREADY(wready),
        .S_AXI_BRESP(bresp),
        .S_AXI_BVALID(bvalid),
        .S_AXI_BREADY(bready),
        .S_AXI_ARADDR(araddr),
        .S_AXI_ARVALID(arvalid),
        .S_AXI_ARREADY(arready),
        .S_AXI_RDATA(rdata),
        .S_AXI_RVALID(rvalid),
        .S_AXI_RRESP(rresp),
        .S_AXI_RREADY(rready)
    );

    // AXI Write Task
    task axi_write(input [31:0] addr, input [31:0] data);
        begin
            @(posedge clk);
            awaddr = addr;
            awvalid = 1;
            wdata = data;
            wstrb = 4'hF;
            wvalid = 1;
            bready = 1;
            
            wait(awready && wready);
            @(posedge clk);
            awvalid = 0;
            wvalid = 0;
            
            wait(bvalid);
            @(posedge clk);
            bready = 0;
        end
    endtask

    // AXI Read Task
    task axi_read(input [31:0] addr, output [31:0] data);
        begin
            @(posedge clk);
            araddr = addr;
            arvalid = 1;
            rready = 1;
            
            wait(arready);
            @(posedge clk);
            arvalid = 0;
            
            wait(rvalid);
            data = rdata;
            @(posedge clk);
            rready = 0;
        end
    endtask

    // Main Test Sequence
    logic [31:0] read_val;
    initial begin
        // Initialize Signals 
        resetn = 0;
        awaddr = 0; awvalid = 0; wdata = 0; wstrb = 0; wvalid = 0; bready = 0;
        araddr = 0; arvalid = 0; rready = 0;
        
        #100;
        resetn = 1;
        #50;

        $display("--- Starting AXI UART Test ---");

        // 1. Configure Stop Bits (1 Stop Bit) [cite: 61, 87]
        axi_write(ADDR_UART_STP, 32'h0);
        
        // 2. Load Data into Transmit Data Register [cite: 35, 91]
        $display("Writing 0xAB to TDR...");
        axi_write(ADDR_UART_TDR, 32'hAB);

        // 3. Start Transmission (Set CFG[0]) [cite: 37, 47]
        $display("Starting Transmission...");
        axi_write(ADDR_UART_CFG, 32'h00000001);

        // 4. Wait for TX and RX to complete
        // At 115200 baud, 10 bits (Start + 8 Data + 1 Stop) takes ~86us
        do begin
            axi_read(ADDR_UART_CFG, read_val);
            #1000; // Poll every 1us
        end while (read_val[2] == 0); // Wait for TX Done
        
        // 5. Read Status Register 
        axi_read(ADDR_UART_CFG, read_val);
        $display("Status Register: 0x%h (Expect bit 1 and 2 to be set)", read_val);

        // 6. Read Received Data [cite: 42, 73]
        axi_read(ADDR_UART_RDR, read_val);
        $display("Received Data: 0x%h (Expect 0xAB)", read_val[7:0]);

        if (read_val[7:0] == 8'hAB)
            $display("TEST PASSED");
        else
            $display("TEST FAILED");

        #100;
        $finish;
    end

endmodule
