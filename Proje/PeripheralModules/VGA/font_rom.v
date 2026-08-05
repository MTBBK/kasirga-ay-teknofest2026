`timescale 1ns / 1ps

module font_rom(
    input clk,
    input [10:0] read_addr,
    output reg [7:0] read_data
    );

reg [7:0] bellek [0:2047];
integer i;
initial begin
    for (i = 0; i < 2048; i = i + 1) begin
        bellek[i] = 8'h00;
    end
    $readmemh("font_rom.mem", bellek);
end

always@(posedge clk)begin 
    read_data<=bellek[read_addr];
end


endmodule
