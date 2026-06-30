`timescale 1ns / 1ps

module buffer_byte_en #(
    parameter DATA_WIDTH = 64,
    parameter ADDR_WIDTH = 10,
    parameter DEPTH = 334 //enough for the 46x58 padded grid
)(
    input  logic clk,
    input  logic [7:0] write_enable, //8 bit array for byte control
    input  logic [ADDR_WIDTH-1:0] addr,
    input  logic [DATA_WIDTH-1:0] din,
    output logic [DATA_WIDTH-1:0] dout
);

    logic [DATA_WIDTH-1:0] ram [DEPTH-1:0];
    
    always_ff @(posedge clk) begin
        //loop through all 8 bytes and only write the ones enabled
        for (int i=0;i<8;i=i+1) begin
            if (write_enable[i]) begin
                ram[addr][i*8 +:8]<=din[i*8+:8];
            end
        end
        dout<=ram[addr];
    end
endmodule