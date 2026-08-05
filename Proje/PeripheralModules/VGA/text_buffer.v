`timescale 1ns / 1ps

module text_buffer(
    input clk,
    input [11:0] write_addr,
    input [7:0]  write_data,
    input        write_en,
    input clk_read,
    input [11:0] read_addr,
    output reg [7:0] read_data
);
reg [7:0] bellek [0:2399];
initial begin
$readmemh("text_buffer.mem", bellek);
end


always@(posedge clk)begin 
    if(write_en)begin 
        bellek[write_addr]<=write_data;
    end
end

always@(posedge clk_read)begin 
    read_data<=bellek[read_addr];
end

endmodule
