`timescale 1ns / 1ps
module processing_element #(parameter int accum_bit_width = 32,
parameter bias = 0
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

    ); 
    
    logic [31:0] biasvalue;
    initial begin 
        case(bias)
        0:begin biasvalue <= '0;end
        1:begin biasvalue <= 32'hFFFFFE8A;end//conv kernel0bias
        2:begin biasvalue <= 32'h000000A9;end//conv kernel1bias
        3:begin biasvalue <= 32'hFFFFFFD0;end//conv kernel2bias
        4:begin biasvalue <= 32'h000000D0;end//conv kernel3bias
        5:begin biasvalue <= 32'h00000052;end//conv kernel4bias
        6:begin biasvalue <= 32'h00000006;end//conv kernel5bias
        7:begin biasvalue <= 32'hFFFFFB4F;end//conv kernel6bias
        8:begin biasvalue <= 32'hFFFFFD4A;end//conv kernel7bias
        
        9:begin biasvalue <= 32'h000001AB;end//fc bias
        10:begin biasvalue <= 32'hFFFFFDFA;end//fc bias
        11:begin biasvalue <= 32'hFFFFFFA2;end//fc bias
        12:begin biasvalue <= 32'h000000BA;end//fc bias
        endcase
    end
    
    logic signed [accum_bit_width-1'd1 : 0] outputValue = '0; 
    logic signed [accum_bit_width-1'd1 : 0] reserveValue = '0;
    
    assign outputs = reserveValue;
    
    logic signed [9:0] bati_offset ;//sonradan eklendi
    assign bati_offset = bati_in + 10'sd128;
    
    always_ff @(posedge clk) begin 
        if(rst) begin 
            dogu_out <= 8'd0;
            guney_out <= 8'd0;
            reserveValue <= '0;
            outputValue <= biasvalue;//bias değeri koymam lazım
        end
        else begin 
            interestregionfinished_o <= interestregionfinished_i;
            dogu_out <=  bati_in;
            guney_out <= kuzey_in;
            //if(kuzey_in != 8'd0 || bati_in != 8'd0)begin
            //    outputValue <= 32'(((bati_in + 9'sd128) * kuzey_in)) + outputValue; //!!!BURADAKİ DEĞİŞİKLİĞE DİKKATT
            //end
            if(kuzey_in != 8'd0 || bati_offset != 10'd0)begin                           
                outputValue <= 32'(((bati_offset) * kuzey_in)) + outputValue;
            end                                                                    
            if(interestregionfinished_i)begin 
                reserveValue <= outputValue;
                outputValue <= biasvalue;//bias değeri koyacağım
            end
        end
    end
    
endmodule
