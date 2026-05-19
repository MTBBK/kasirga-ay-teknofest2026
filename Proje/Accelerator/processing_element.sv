`timescale 1ns / 1ps
//ZERO GATİNG EKLENEBİLİR GELİŞTİRME OLARAK
//RESERVE REGİSTER EKLENEBİLİR SANIRIM BLOCK MATRİS MULTİPLATİONU HIZLANDIRIYOR TOPLANACAK VERİYİ RESERVEDE TUTARAK
module processing_element #(parameter int accum_bit_width = 32
)(
    input logic clk,
input logic rst,

input logic signed [7:0] bati_in,//input boyutları parametrize edilebilir ama gerek yok gibi
input logic signed [7:0] kuzey_in,
input logic interestregionfinished_i,
output logic interestregionfinished_o,
output logic [7:0] dogu_out,
output logic [7:0] guney_out,
output logic [31:0] outputs
//output logic [8*accum_bit_width-1:0] outputs

    ); 
    
    logic signed [accum_bit_width-1'd1 : 0] outputValue = '0; 
    logic signed [accum_bit_width-1'd1 : 0] reserveValue = '0;// output value tamamlanınca buna verilir.
    
    assign outputs = reserveValue;
    
    always_ff @(posedge clk) begin 
        if(rst) begin 
            dogu_out <= 8'd0;
            guney_out <= 8'd0;
        end
        else begin 
            interestregionfinished_o <= interestregionfinished_i;
            dogu_out <=  bati_in;
            guney_out <= kuzey_in;
            if(kuzey_in != 8'd0 || bati_in != 8'd0)begin
                outputValue <= 32'((bati_in * kuzey_in)) + outputValue;
            end
            if(interestregionfinished_i)begin 
                reserveValue <= outputValue;
                outputValue <= '0;
            end
        end
    end
    
endmodule
