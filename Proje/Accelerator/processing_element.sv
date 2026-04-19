`timescale 1ns / 1ps

module processing_element #(parameter int accum_bit_width = 32
)(
input logic clk,
input logic rst,

input logic [7:0] bati_in,//input boyutları parametrize edilebilir ama gerek yok gibi
input logic [7:0] kuzey_in,
input logic [2:0] kernel_count,

output logic [7:0] dogu_out,
output logic [7:0] guney_out,
output logic [8*accum_bit_width-1:0] outputs

    ); 
    
    logic [accum_bit_width-1'd1 : 0] outputsarr [7:0] = '{default: 8'h00}; 
    //logic [2:0] kernel_count = 3'd0;//input olarak verilebilir? -öyle yaptım belki tekrar değişir
    
    assign outputs = {outputsarr[3'd7],outputsarr[3'd6],outputsarr[3'd5],outputsarr[3'd4],outputsarr[3'd3],outputsarr[3'd2],outputsarr[3'd1],outputsarr[3'd0]};
    
    always_ff @(posedge clk) begin 
        if(rst) begin 
            dogu_out <= 8'd0;
            guney_out <= 8'd0;
            //kernel_count <= 8'd0; input olarak verdik
            //outputarr sıfırlanacak
        end
        
        else begin 
              dogu_out <=  bati_in;
              guney_out <= kuzey_in;
              outputsarr[kernel_count] <= bati_in * kuzey_in + outputsarr[kernel_count];
        end
    end
    
endmodule
