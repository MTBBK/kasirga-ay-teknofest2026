`timescale 1ns / 1ps

module tb_uart_tx();

    // Inputs to the DUT
    logic        clock_i;
    logic        reset_i;
    logic [31:0] uart_cpb;
    logic [31:0] uart_stp;
    logic [31:0] uart_tdr;
    logic        tx_enable;

    // Outputs from the DUT
    logic        tx_done;
    logic        tx_out;

    // Instantiate the Unit Under Test (UUT)
    uart_tx uut (
        .clock_i(clock_i),
        .reset_i(reset_i),
        .uart_cpb(uart_cpb),
        .uart_stp(uart_stp),
        .uart_tdr(uart_tdr),
        .tx_enable(tx_enable),
        .tx_done(tx_done),
        .tx_out(tx_out)
    );

    // Clock generation (e.g., 50MHz -> 20ns period)
    always #10 clock_i = ~clock_i;

    initial begin
        // Initialize Signals
        clock_i   = 0;
        reset_i   = 0;
        tx_enable = 0;
        uart_cpb  = 32'd10; // High speed for simulation (10 clocks per bit)
        uart_stp  = 32'd0;  // 1 Stop bit
        uart_tdr  = 32'hA5; // Data to send: 10100101

        // --- 1. Reset Phase ---
        #50 reset_i = 1;
        #20;

        // --- 2. Transmit First Byte (0xA5) ---
        @(posedge clock_i);
        tx_enable = 1; // Set UART_CFG[0]
        
        // Wait for tx_done (UART_CFG[2])
        wait(tx_done == 1);
        
        @(posedge clock_i);
        tx_enable = 0; // Clear enable after done
        #100;

        // --- 3. Transmit Second Byte (0x3C) with 2 Stop Bits ---
        uart_tdr = 32'h3C;
        uart_stp = 32'd2; // Select 2 stop bits
        
        @(posedge clock_i);
        tx_enable = 1;
        
        wait(tx_done == 1);
        
        @(posedge clock_i);
        tx_enable = 0;

        #200;
        $display("AAAAAAAAAAAAAAASimulation Finished Successfully");
        $stop;
    end

    // Monitor for VCD file generation (compatible with your Makefile)
    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, uart_tx_tb);
    end

endmodule
