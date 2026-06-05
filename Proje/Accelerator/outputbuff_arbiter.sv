`timescale 1ns / 1ps

module outputbuff_arbiter(
input [9:0]omanageraddress,
input omanagerwriteenable,
input [9:0]fcfeederaddress,
output [9:0]outputaddress

    );
    
    //always_comb begin
    //    if(omanager)
    //end
    
    assign outputaddress = omanagerwriteenable ? omanageraddress: fcfeederaddress;
endmodule
