`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/30/2026 11:54:36 AM
// Design Name: 
// Module Name: uart_tx
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


module uart_rx (
    input  logic        clock_i,
    input  logic        reset_i,
    
    input  logic [31:0] uart_cpb,
    input  logic [31:0] uart_stp, // Added to match register map
    input  logic        rx_in,
    input  logic        rx_clear, // To clear UART_CFG[1] 

    output logic [31:0]  uart_rdr, // Data register 
    output logic        rx_done   // UART_CFG[1] 
);

    typedef enum logic [1:0] {IDLE, START, FLOW, STOP} states_e;
    states_e state, state_next;

    logic [31:0] baud_cnt, baud_cnt_next;
    logic [31:0] stop_limit; // Logic to handle variable stop lengths
    logic [2:0]  bit_idx, bit_idx_next;
    logic [31:0]  rx_shifter, rx_shifter_next;
    logic        done_reg, done_next;

    always_ff @(posedge clock_i or negedge reset_i) begin
        if (!reset_i) begin
            state      <= IDLE;
            baud_cnt   <= 0;
            bit_idx    <= 0;
            rx_shifter <= 32'h0;
            done_reg   <= 1'b0;
        end else begin
            state      <= state_next;
            baud_cnt   <= baud_cnt_next;
            bit_idx    <= bit_idx_next;
            rx_shifter <= rx_shifter_next;
            // SW Clear logic for UART_CFG[1]
            done_reg   <= rx_clear ? 1'b0 : done_next; 
        end
    end

    always_comb begin
        state_next      = state;
        baud_cnt_next   = baud_cnt;
        bit_idx_next    = bit_idx;
        rx_shifter_next = rx_shifter;
        done_next       = done_reg;

        // Calculate stop limit based on UART_STP[1:0] specs 
        case(uart_stp[1:0])
            2'b00:   stop_limit = uart_cpb;                    // 1 Stop bit
            2'b01:   stop_limit = uart_cpb + (uart_cpb >> 1);  // 1.5 Stop bits
            2'b10, 
            2'b11:   stop_limit = (uart_cpb << 1);             // 2 Stop bits
            default: stop_limit = uart_cpb;
        endcase

        case (state)
            IDLE: begin
                baud_cnt_next = 0;
                bit_idx_next  = 0;
                if (rx_in == 1'b0) begin // Start bit detection
                    state_next = START;
                end
            end
            START: begin
                if (baud_cnt >= (uart_cpb >> 1)) begin // Sample middle
                    state_next = FLOW;
                    baud_cnt_next = 0;
                    bit_idx_next = 0;
                end else baud_cnt_next = baud_cnt + 1;
            end
            FLOW: begin
                if (baud_cnt >= uart_cpb - 1) begin
                    rx_shifter_next[bit_idx] = rx_in;
                    baud_cnt_next = 0;
                    if (bit_idx == 3'd7) state_next = STOP;
                    else bit_idx_next = bit_idx + 1;
                end else baud_cnt_next = baud_cnt + 1;
            end
            STOP: begin
                // Wait for the duration specified by uart_stp
                if (baud_cnt >= stop_limit - 1) begin
                    done_next = 1'b1; // Set UART_CFG[1]
                    state_next = IDLE;
                end else baud_cnt_next = baud_cnt + 1;
            end
        endcase
    end
    
    assign uart_rdr = rx_shifter;
    assign rx_done  = done_reg;
endmodule
