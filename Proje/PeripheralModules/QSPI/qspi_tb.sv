`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/06/2026 05:59:54 PM
// Design Name: 
// Module Name: qspi_tb
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


module qspi_tb(

    );
    
 
    logic clk;
    logic rst_n;
    logic [7:0] instr;
    logic [1:0] data_mode;
    logic [4:0] dummy_cycle_count;
    logic [7:0] data_width;
    logic [5:0] prescaler;
    logic clear_status;
    logic [31:0] addr;
    logic start_req;
    
    logic [31:0] tx_data_i;
    logic [31:0] rx_data_o;
    logic tx_fifo_rd_en;
    logic rx_fifo_wr_en;
    logic [1:0] fifo_control;
    logic tx_fifo_empty;
    logic tx_fifo_full;
    logic rx_fifo_empty;
    logic rx_fifo_full;
    logic tx_fifo_flush;
    logic rx_fifo_flush;

    logic [11:0] status;


    logic qspi_sclk;
    logic qspi_cs;
    logic [3:0] qspi_data_o; 
    logic [3:0] qspi_data_i;
    logic [3:0] qspi_data_oe;
    
    
    
    
    
    
    always #5 clk = ~clk;
    
    
    QSPI dut(
    .clk(clk),
    .rst_n(rst_n),
    .instr(instr),
    .data_mode(data_mode),
    .dummy_cycle_count(dummy_cycle_count),
    .data_width(data_width),
    .prescaler(prescaler),
    .clear_status(clear_status),
    .addr(addr),
    .start_req(start_req),
    .tx_data_i(tx_data_i),
    .rx_data_o(rx_data_o),
    .tx_fifo_rd_en(tx_fifo_rd_en),
    .rx_fifo_wr_en(rx_fifo_wr_en),
    .fifo_control(fifo_control),
    .tx_fifo_empty(tx_fifo_empty),
    .tx_fifo_full(tx_fifo_full),
    .rx_fifo_empty(rx_fifo_empty),
    .rx_fifo_full(rx_fifo_full),
    .tx_fifo_flush(tx_fifo_flush),
    .rx_fifo_flush(rx_fifo_flush),
    .status(status),
    .qspi_sclk(qspi_sclk),
    .qspi_cs(qspi_cs),
    .qspi_data_o(qspi_data_o),
    .qspi_data_i(qspi_data_i),
    .qspi_data_oe(qspi_data_oe)
    );
    
    
    
    initial begin
        clk=0;
        qspi_data_i = 4'b0000;
        rst_n=1;
        #10;
        rst_n=0;
        #20;
        rst_n=1;
        
        start_req=1;
        
        //prescalar test
        prescaler=0;
        #50;
        prescaler=1;
        #50
        prescaler=0;
        start_req=0;
        
        #10;
        rst_n=0;
        #10;
        rst_n=1;
        
        
        //READ test;
        instr=8'h03;
        addr=32'd0;
        dummy_cycle_count=0;
        data_width=3;
        data_mode=2'b01; 
        clear_status=0;
        fifo_control=2'b01;
        #20;
        fifo_control=2'b00;
        rx_fifo_empty=0;
        rx_fifo_full=0;
        
        #20;
        start_req=1;
        #20;
        start_req=0;
        
        //start sending data
        
    
    
    end
    
    // --- SAHTE FLASH ÇİPİ (MOCK FLASH) ---
    logic [31:0] mock_flash_data = 32'hFADEEDAF; // Flash'tan okumayı beklediğimiz sahte veri
    integer bit_idx = 31;

    always @(negedge qspi_sclk) begin
        if (!qspi_cs) begin // Sadece CS sıfırken (iletişim varken) tepki ver
            // DUT "DATA_RX" durumundaysa veri göndermeye başla
            // (Testbench içinden DUT'un iç sinyallerine "." ile erişebilirsin)
            if (dut.current_state == 3'd5) begin 
                // Single Modda (01), Flash veriyi MISO (Pin 1) üzerinden gönderir
                qspi_data_i[1] <= mock_flash_data[bit_idx];
                
                if (bit_idx > 0) begin
                    bit_idx <= bit_idx - 1;
                end
            end
        end
        else begin
            bit_idx <= 31; // CS 1 olunca sayacı başa sar
            qspi_data_i <= 4'b0000;
        end
    end
   
endmodule
