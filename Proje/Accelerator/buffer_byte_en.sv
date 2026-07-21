`timescale 1ns / 1ps
module buffer_byte_en #(
    parameter DATA_WIDTH=64,
    parameter ADDR_WIDTH=10,
    parameter DEPTH=512   
)(
    input  logic clk,
    input  logic [7:0] write_enable,
    input  logic [ADDR_WIDTH-1:0] waddr,
    input  logic [ADDR_WIDTH-1:0] raddr,
    input  logic [DATA_WIDTH-1:0] din,
    output logic [DATA_WIDTH-1:0] dout
);
    
    logic [DATA_WIDTH-1:0] ram [0:DEPTH-1];
    
    always_ff @(posedge clk) begin
        if (write_enable[0]) ram[waddr][7:0]<=din[7:0];
        if (write_enable[1]) ram[waddr][15:8]<=din[15:8];
        if (write_enable[2]) ram[waddr][23:16]<=din[23:16];
        if (write_enable[3]) ram[waddr][31:24]<=din[31:24];
        if (write_enable[4]) ram[waddr][39:32]<=din[39:32];
        if (write_enable[5]) ram[waddr][47:40]<=din[47:40];
        if (write_enable[6]) ram[waddr][55:48]<=din[55:48];
        if (write_enable[7]) ram[waddr][63:56]<=din[63:56];
    end
    
    always_ff @(posedge clk) begin
        dout <= ram[raddr];
    end

endmodule
