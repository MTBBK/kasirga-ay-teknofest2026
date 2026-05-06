`timescale 1ns / 1ps

module master_wrapper #(
    // because of basys3 100MHz clock
    parameter CLK_FREQ =100000000, 
    parameter I2C_FREQ =400000
)(
    input  wire        clk,
    input  wire        rst_n,
    input  wire [6:0]  i_slave_addr,
    input  wire [31:0] i_tx_data,
    input  wire [2:0]  i_num_bytes,
    input  wire        i_tx_en,
    input  wire        i_rx_en,
    
    output wire [31:0] o_rx_data,
    output wire        o_tx_done,
    output wire        o_rx_done,
    output wire        o_busy,
    output wire        o_scl,
    output wire        o_sda_out,
    output wire        o_sda_oe,
    input  wire        i_sda_in
);

    I2C_master #(
        .CLK_FREQ(CLK_FREQ),
        .I2C_FREQ(I2C_FREQ)
    ) my_real_master (
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
        .o_scl(o_scl),
        .o_sda_out(o_sda_out),
        .o_sda_oe(o_sda_oe),
        .i_sda_in(i_sda_in)
    );

endmodule