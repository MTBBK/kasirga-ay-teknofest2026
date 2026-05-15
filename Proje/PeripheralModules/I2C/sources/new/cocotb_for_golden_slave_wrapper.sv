`timescale 1ns/1ps

module cocotb_for_golden_slave_wrapper #(
    parameter CLK_FREQ=50000000,
    parameter I2C_FREQ= 400000
)(
    input logic clk,
    input logic rst_n, 
    input logic [6:0] i_slave_addr, 
    input logic [31:0] i_tx_data, 
    output logic [31:0] o_rx_data, 
    input logic [2:0] i_num_bytes, 
    input logic i_tx_en, 
    output logic o_tx_done, 
    input logic i_rx_en,  
    output logic o_rx_done, 
    output logic o_busy,
    output logic o_error, 
    
    output wire slave_sda_i,  // the bus state sent to the slave
    input  wire slave_sda_o,  // the drive from the slave
    output wire slave_scl_i,  // the bus state sent to the Slave
    input  wire slave_scl_o   // the drive from the Slave
);
    logic sda_out;
    logic sda_oe;
    logic scl_out;

    wire slave_sda_drive = (slave_sda_o === 1'b0) ? 1'b0 : 1'b1;
    wire slave_scl_drive = (slave_scl_o === 1'b0) ? 1'b0 : 1'b1;

    wire master_sda_drive = (sda_oe && sda_out == 1'b0) ? 1'b0 : 1'b1;
    
    wire bus_sda = master_sda_drive & slave_sda_drive;
    wire bus_scl = scl_out & slave_scl_drive;

    
    assign slave_sda_i = bus_sda;
    assign slave_scl_i = bus_scl;

    I2C_master #(
        .CLK_FREQ(CLK_FREQ),
        .I2C_FREQ(I2C_FREQ)
    ) ay(
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
        .o_scl(scl_out),
        .o_sda_out(sda_out),
        .o_sda_oe(sda_oe),
        .i_sda_in(bus_sda) 
    );
endmodule
