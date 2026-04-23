`timescale 1ns / 1ps

module uart_rx_tb();

    // Inputs to the DUT
    logic        clock_i;
    logic        reset_i;
    logic [31:0] uart_cpb;
    logic [31:0] uart_stp;
    logic        rx_in;
    logic        rx_clear;

    // Outputs from the DUT
    logic [7:0]  uart_rdr;
    logic        rx_done;

    // Instantiate the Unit Under Test (UUT)
    uart_rx uut (
        .clock_i(clock_i),
        .reset_i(reset_i),
        .uart_cpb(uart_cpb),
        .uart_stp(uart_stp),
        .rx_in(rx_in),
        .rx_clear(rx_clear),
        .uart_rdr(uart_rdr),
        .rx_done(rx_done)
    );

    // Clock generation (50MHz)
    always #10 clock_i = ~clock_i;

    // Helper task to simulate receiving a byte
    task send_byte(input [7:0] data);
        integer i;
        begin
            // 1. Start Bit
            rx_in = 0;
            repeat(uart_cpb) @(posedge clock_i);

            // 2. Data Bits (LSB first)
            for (i = 0; i < 8; i = i + 1) begin
                rx_in = data[i];
                repeat(uart_cpb) @(posedge clock_i);
            end

            // 3. Stop Bit
            rx_in = 1;
            repeat(uart_cpb) @(posedge clock_i);
        end
    endtask

    initial begin
        // Initialize
        clock_i  = 0;
        reset_i  = 0;
        rx_in    = 1; // Idle high
        rx_clear = 0;
        uart_cpb = 32'd16; // 16 clocks per bit
        uart_stp = 32'd0;  // 1 stop bit

        // --- 1. Reset Phase ---
        #50 reset_i = 1;
        #40;

        // --- 2. Receive Byte 0x55 (01010101) ---
        $display("Starting transmission of 0x55...");
        send_byte(8'h55);
        
        // Wait for hardware to set rx_done (UART_CFG[1])
        wait(rx_done == 1);
        $display("Received Data: 0x%h (Expected: 0x55)", uart_rdr);

        // --- 3. Software Clear Phase ---
        // Per your instructions, SW must clear the done bit 
        @(posedge clock_i);
        rx_clear = 1;
        @(posedge clock_i);
        rx_clear = 0;
        $display("rx_done cleared by software.");

        // --- 4. Receive Byte 0xBE ---
        #100;
        $display("Starting transmission of 0xBE...");
        send_byte(8'hBE);
        
        wait(rx_done == 1);
        $display("Received Data: 0x%h (Expected: 0xBE)", uart_rdr);

        #200;
        $display("Simulation Finished.");
        $stop;
    end

    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, uart_rx_tb);
    end

endmodule
