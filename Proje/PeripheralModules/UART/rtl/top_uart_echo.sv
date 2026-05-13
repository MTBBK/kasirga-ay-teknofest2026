`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/30/2026 11:56:59 AM
// Design Name: 
// Module Name: top_uart_echo
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

module top_uart_echo (
    input  logic clk_i,
    input  logic rst_btn_i,
    input  logic uart_rx_i,
    output logic uart_tx_o
);

    logic rst_n;

    assign rst_n = ~rst_btn_i;

    logic [31:0] uart_cpb;
    logic [31:0] uart_stp;

    logic [7:0] rx_data;
    logic rx_done;
    logic rx_clear;

    logic [31:0] tx_data;
    logic tx_start;
    logic tx_done;

    assign uart_cpb = 32'd100; // Basys 3 = 100 MHz, 100000000 / 1000000 ≈ 100
    assign uart_stp = 32'd0;   // 1 stop bit

    uart_rx RX (
        .clock_i(clk_i),
        .reset_i(rst_n),
        .uart_cpb(uart_cpb),
        .uart_stp(uart_stp),
        .rx_in(uart_rx_i),
        .rx_clear(rx_clear),
        .uart_rdr(rx_data),
        .rx_done(rx_done)
    );

    uart_tx TX (
        .clock_i(clk_i),
        .reset_i(rst_n),
        .uart_cpb(uart_cpb),
        .uart_stp(uart_stp),
        .uart_tdr(tx_data),
        .tx_enable(tx_start),
        .tx_done(tx_done),
        .tx_out(uart_tx_o)
    );

    typedef enum logic [1:0] {
        IDLE,
        SEND,
        WAIT_DONE,
        CLEAR_RX
    } state_t;

    state_t state;

    always_ff @(posedge clk_i or negedge rst_n) begin
        if (!rst_n) begin
            state    <= IDLE;
            tx_data  <= 32'd0;
            tx_start <= 1'b0;
            rx_clear <= 1'b0;
        end else begin
            tx_start <= 1'b0;
            rx_clear <= 1'b0;

            case (state)
                IDLE: begin
                    if (rx_done) begin
                        tx_data <= {24'd0, rx_data}; // echo received byte
                        tx_start <= 1'b1;
                        state <= WAIT_DONE;
                    end
                end

                WAIT_DONE: begin
                    if (tx_done) begin
                        rx_clear <= 1'b1;
                        state <= CLEAR_RX;
                    end
                end

                CLEAR_RX: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule
