`timescale 1ns/1ps
module tb_I2C_master;
//because the test is long you have type "run -all" in TCL console for the test to finish all the way
    localparam CLK_FREQ=50_000_000;
    localparam I2C_FREQ=400_000;
    localparam TICKS=CLK_FREQ / I2C_FREQ;
    localparam CLK_P=20;

    logic clk=0;
    logic rst_n=0;
    logic [6:0] i_slave_addr;
    logic [31:0] i_tx_data;
    logic [31:0] o_rx_data;
    logic [2:0] i_num_bytes;
    logic i_tx_en=0;
    logic o_tx_done;
    logic i_rx_en=0;
    logic o_rx_done;
    logic o_busy;
    logic o_scl;
    logic o_sda_out;
    logic o_sda_oe;
    logic o_error;

    logic slave_sda=1;
    logic slave_is_sending=0;
    
    logic sda_bus;
    always_comb begin
        if(o_sda_oe) begin
            sda_bus=o_sda_out & slave_sda;
        end
        else begin
            if(slave_is_sending) begin 
                sda_bus=slave_sda;
            end
            else begin 
                sda_bus=1'b0;
            end
        end    
    end
    
    I2C_master#(
        .CLK_FREQ(CLK_FREQ),
        .I2C_FREQ(I2C_FREQ)
    ) dut(
        .clk(clk),
        .rst_n(rst_n),
        .i_slave_addr(i_slave_addr),
        .i_tx_data(i_tx_data),
        .o_rx_data(o_rx_data),
        .i_num_bytes(i_num_bytes),
        .i_tx_en(i_tx_en),
        .o_tx_done(o_tx_done),
        .i_rx_en(i_rx_en),
        .o_rx_done(o_rx_done),
        .o_busy(o_busy),
        .o_error(o_error),
        .o_scl(o_scl),
        .o_sda_out(o_sda_out),
        .o_sda_oe(o_sda_oe),
        .i_sda_in(sda_bus)
        
    );

    always #(CLK_P/2) clk=~clk;

    task send_slave_byte;
        input [7:0] data;
        integer b;
        slave_is_sending=1;
        for (b=7; b>=0; b=b-1) begin
            #(CLK_P);
            slave_sda=(data>>b) & 1'b1;
            @(posedge o_scl);
            @(negedge o_scl);
        end
        slave_sda=1;
        slave_is_sending=0;
    endtask

    initial begin
        i_slave_addr=0; 
        i_tx_data=0; 
        i_num_bytes=1;
        slave_sda=1;

        rst_n=0;
        repeat(5)@(posedge clk);
        rst_n=1;
        repeat(5)@(posedge clk);

        // TEST 1 - 1-byte WRITE  addr=0x48  data=0xAB
        i_slave_addr=7'h48;
        i_tx_data=32'h000000AB;
        i_num_bytes=3'd1;

        @(posedge clk); 
        #1; 
        i_tx_en=1;
        @(posedge clk); 
        #1; 
        i_tx_en=0;

        wait (o_tx_done);
        @(posedge clk); 
        #1;

        // TEST 2 - 1-byte READ  addr=0x48  expect=0x5A
        i_slave_addr=7'h48;
        i_num_bytes=3'd1;

        @(posedge clk); 
        #1; 
        i_rx_en=1;
        @(posedge clk); 
        #1; 
        i_rx_en=0;

        wait(o_busy == 1);

        repeat(8) 
        @(negedge o_scl);
        @(posedge o_scl); 
        @(negedge o_scl);
        @(posedge o_scl); 
        @(negedge o_scl);

        send_slave_byte(8'h5A);

        @(posedge o_rx_done);
        @(posedge clk); 
        #1;

        // TEST 3 - 4-byte WRITE  data=0x44332211
        i_slave_addr=7'h48;
        i_tx_data=32'h44332211;
        i_num_bytes=3'd4;

        @(posedge clk);
        #1; 
        i_tx_en=1;
        @(posedge clk);
        #1; 
        i_tx_en=0;

        @(posedge o_tx_done);
        @(posedge clk); 
        #1;

        // TEST 4 - 2-byte READ  expect byte0=0xDE  byte1=0xAD
        i_slave_addr=7'h48;
        i_num_bytes=3'd2;

        @(posedge clk); 
        #1; 
        i_rx_en=1;
        @(posedge clk); 
        #1; 
        i_rx_en=0;

        wait(o_busy == 1);

        repeat(8) 
        @(negedge o_scl);
        @(posedge o_scl); 
        @(negedge o_scl);
        @(posedge o_scl); 
        @(negedge o_scl);

        send_slave_byte(8'hDE);
        @(posedge o_scl); 
        @(negedge o_scl);
        send_slave_byte(8'hAD);

        @(posedge o_rx_done);
        @(posedge clk); 
        #1;

        repeat(15) @(posedge clk);
        $finish;
    end

    initial begin
        #500_000;
        $finish;
    end
endmodule
