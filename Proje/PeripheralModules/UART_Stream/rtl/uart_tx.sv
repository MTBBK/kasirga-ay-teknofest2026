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


module uart_tx(
    input  logic        clock_i,
    input  logic        reset_i,
    input  logic [31:0] uart_cpb, // Clock-per-bit 
    input  logic [31:0] uart_stp, // Stop bit config 
    input  logic [31:0] uart_tdr, // Data to transmit 
    input  logic        tx_enable, // UART_CFG[0] 
 	
 	output logic 		tx_busy,
    output logic        tx_done,   // UART_CFG[2] 
    output logic        tx_out     // Serial output 
);

    typedef enum logic [1:0] {IDLE, START, FLOW, STOP} states_e;
    states_e state, state_next;
	
	assign tx_busy = (state != IDLE) || (state_next != IDLE);
	
    logic [31:0] baud_counter, baud_counter_next;
    logic [31:0] stop_limit;
    logic [7:0]  data_latch, data_latch_next;
    logic [2:0]  bit_index, bit_index_next;

    always_ff @(posedge clock_i or negedge reset_i) begin
        if (!reset_i) begin
            state        <= IDLE;
            baud_counter <= 0;
            bit_index    <= 0;
            data_latch   <= 8'h0;
        end else begin
            state        <= state_next;
            baud_counter <= baud_counter_next;
            bit_index    <= bit_index_next;
            data_latch   <= data_latch_next;
        end
    end

    always_comb begin
        state_next        = state;
        baud_counter_next = baud_counter;
        bit_index_next    = bit_index;
        data_latch_next   = data_latch;
        tx_out            = 1'b1; // Idle high 
        tx_done           = 1'b0;

        // Calculate stop limit based on UART_STP [cite: 3, 4]
        case(uart_stp[1:0])
            2'b00:   stop_limit = uart_cpb;                    // 1 Stop bit
            2'b01:   stop_limit = uart_cpb + (uart_cpb >> 1);  // 1.5 Stop bits
            2'b10, 
            2'b11:   stop_limit = (uart_cpb << 1);             // 2 Stop bits
            default: stop_limit = uart_cpb;
        endcase

        case(state)
            IDLE: begin
                if (tx_enable) begin
                    data_latch_next   = uart_tdr[7:0];
                    state_next        = START;
                    baud_counter_next = 0;
                end
            end
            START: begin
                tx_out = 1'b0; // Start bit
                if (baud_counter >= uart_cpb - 1) begin
                    baud_counter_next = 0;
                    state_next        = FLOW;
                    bit_index_next    = 0;
                end else begin
                    baud_counter_next = baud_counter + 1;
                end
            end
            FLOW: begin
                tx_out = data_latch[bit_index];
                if (baud_counter >= uart_cpb - 1) begin
                    baud_counter_next = 0;
                    if (bit_index == 3'd7) begin
                        state_next = STOP;
                    end else begin
                        bit_index_next = bit_index + 1;
                    end
                end else begin
                    baud_counter_next = baud_counter + 1;
                end
            end
            STOP: begin
                tx_out = 1'b1;
                if (baud_counter >= stop_limit - 1) begin
                    baud_counter_next = 0;
                    tx_done           = 1'b1; // Set UART_CFG[2] 
                    state_next        = IDLE;
                end else begin
                    baud_counter_next = baud_counter + 1;
                end
            end
        endcase
    end
endmodule
