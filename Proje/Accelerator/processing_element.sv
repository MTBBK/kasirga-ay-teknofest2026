`timescale 1ns / 1ps
//TODOS:
//Belki lut sayısını azaltmak için zero gatingi silebiliriz (harcıyor mu bilmiyorum) NOT:kaldırmak lut kullanımını azalttı
module processing_element #(parameter int accum_bit_width = 32,
parameter bias = 0
)(
    input logic clk,
    input logic rst,

input logic signed [8:0] bati_in,
input logic signed [7:0] kuzey_in,
input logic interestregionfinished_i,
output logic interestregionfinished_o,
output logic signed [8:0] dogu_out,
output logic signed [7:0] guney_out,

input logic sendoutputs,
input logic [31:0] reserve_in,
output logic [31:0] reserve_out

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
    
    logic signed [accum_bit_width-1'd1 : 0] outputValue ; 
    logic signed [accum_bit_width-1'd1 : 0] reserveValue;
    
    logic signed [accum_bit_width-1'd1 : 0] outputValue_next ; 
    logic signed [accum_bit_width-1'd1 : 0] reserveValue_next ;
    logic signed [8:0] dogu_out_next;
    logic signed [7:0] guney_out_next;
    logic interestregionfinished_o_next;
    
    assign reserve_out = reserveValue;
    
    //logic [31:0] carpim_sonuc_dsp;
    //logic [31:0] carpim_sonuc_lut;
    //if(bias < 3'd3)begin                     
    //    (* use_dsp = "yes" *)assign carpim_sonuc_dsp = 32'(((bati_in) * kuzey_in)) + outputValue;
    //end
    //else begin
    //    (* use_dsp = "no" *)assign carpim_sonuc_lut = 32'(((bati_in) * kuzey_in)) + outputValue;
    //end
    
    always_comb begin
        dogu_out_next = bati_in;          
        guney_out_next = kuzey_in;      
        interestregionfinished_o_next = interestregionfinished_i;
        reserveValue_next = reserveValue;
        //outputValue_next = outputValue;
        outputValue_next= 32'(((bati_in) * kuzey_in)) + outputValue ;
        //if(kuzey_in != 8'd0 || bati_in!= 10'd0)begin 
            //if(bias < 3'd3)begin                     
            //    (* use_dsp = "yes" *)outputValue_next = 32'(((bati_in) * kuzey_in)) + outputValue;
            //end
            //else begin
            //    (* use_dsp = "no" *)outputValue_next = 32'(((bati_in) * kuzey_in)) + outputValue;
            //end
        //end           
        if(interestregionfinished_i)begin 
            reserveValue_next = outputValue;
            outputValue_next = biasvalue;
        end
        else if(sendoutputs)begin
            reserveValue_next = reserve_in;
        end
    end
    
    
    always_ff @(posedge clk) begin 
        if(rst) begin 
            dogu_out <= 8'd0;
            guney_out <= 8'd0;
            reserveValue <= '0;
            outputValue <= biasvalue;
            interestregionfinished_o <= 1'b0;
        end
        else begin 
            interestregionfinished_o <= interestregionfinished_o_next;
            dogu_out <=  dogu_out_next;
            guney_out <= guney_out_next; 
            reserveValue <= reserveValue_next;   
            outputValue <= outputValue_next;  
        end
    end
    
endmodule

//`timescale 1ns / 1ps
////TODOS:
////Belki lut sayısını azaltmak için zero gatingi silebiliriz (harcıyor mu bilmiyorum)
//module processing_element #(parameter int accum_bit_width = 32,
//parameter bias = 0
//)(
//    input logic clk,
//    input logic rst,

//input logic signed [8:0] bati_in,//input boyutları parametrize edilebilir ama gerek yok gibi
//input logic signed [7:0] kuzey_in,
//input logic interestregionfinished_i,
//output logic interestregionfinished_o,
//output logic signed [8:0] dogu_out,
//output logic signed [7:0] guney_out,

//input logic sendoutputs,
//input logic [31:0] reserve_in,
//output logic [31:0] reserve_out

//    ); 
    
//    logic [31:0] biasvalue;
//    initial begin 
//        case(bias)
//        0:begin biasvalue <= '0;end
//        1:begin biasvalue <= 32'hFFFFFE8A;end//conv kernel0bias
//        2:begin biasvalue <= 32'h000000A9;end//conv kernel1bias
//        3:begin biasvalue <= 32'hFFFFFFD0;end//conv kernel2bias
//        4:begin biasvalue <= 32'h000000D0;end//conv kernel3bias
//        5:begin biasvalue <= 32'h00000052;end//conv kernel4bias
//        6:begin biasvalue <= 32'h00000006;end//conv kernel5bias
//        7:begin biasvalue <= 32'hFFFFFB4F;end//conv kernel6bias
//        8:begin biasvalue <= 32'hFFFFFD4A;end//conv kernel7bias
        
//        9:begin biasvalue <= 32'h000001AB;end//fc bias
//        10:begin biasvalue <= 32'hFFFFFDFA;end//fc bias
//        11:begin biasvalue <= 32'hFFFFFFA2;end//fc bias
//        12:begin biasvalue <= 32'h000000BA;end//fc bias
//        endcase
//    end
    
//    logic signed [accum_bit_width-1'd1 : 0] outputValue = '0; 
//    logic signed [accum_bit_width-1'd1 : 0] reserveValue = '0;
    
//    assign reserve_out = reserveValue;
    
//    //logic signed [9:0] bati_offset ;//sonradan eklendi
//    //assign bati_offset = bati_in + 10'sd128;
    
//    always_ff @(posedge clk) begin 
//        if(rst) begin 
//            dogu_out <= 8'd0;
//            guney_out <= 8'd0;
//            reserveValue <= '0;
//            outputValue <= biasvalue;//bias değeri koymam lazım
//        end
//        else begin 
//            interestregionfinished_o <= interestregionfinished_i;
//            dogu_out <=  bati_in;
//            guney_out <= kuzey_in;
//            //if(kuzey_in != 8'd0 || bati_in != 8'd0)begin
//            //    outputValue <= 32'(((bati_in + 9'sd128) * kuzey_in)) + outputValue; //!!!BURADAKİ DEĞİŞİKLİĞE DİKKATT
//            //end
//            if(kuzey_in != 8'd0 || bati_in!= 10'd0)begin                           
//                outputValue <= 32'(((bati_in) * kuzey_in)) + outputValue;
//            end                                                                    
//            if(interestregionfinished_i)begin 
//                reserveValue <= outputValue;
//                outputValue <= biasvalue;//bias değeri koyacağım
//            end
//            if(sendoutputs)begin
//                //reserve_out<= reserveValue;
//                reserveValue<= reserve_in;
//            end
//        end
//    end
    
//endmodule
