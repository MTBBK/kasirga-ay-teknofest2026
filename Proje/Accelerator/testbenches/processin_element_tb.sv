`timescale 1ns / 1ps
module processin_element_tb(

    );
    
    localparam accumwidth = 32;
    logic clk= 0;
    logic rst;
    logic [7:0]left_in;
    logic [7:0]top_in;
    logic [7:0]left_out;
    logic [7:0]top_out; 
    logic [31:0] output1;
    logic interestregionfinished_i1;
    logic interestregionfinished_i2;
    logic interestregionfinished_o1;
    logic interestregionfinished_o2;
    
    processing_element uut
    (.clk(clk),
    .rst(rst),
    .bati_in(left_in),
    .kuzey_in(top_in),
    .interestregionfinished_i(interestregionfinished_i1),
    .interestregionfinished_o(interestregionfinished_o1),
    .dogu_out(left_out),
    .guney_out(top_out),
    .outputs(output1)
    );
    
    
    logic [7:0]top_in2;
    logic [7:0]left_out2; 
    logic [7:0]top_out2; 
    logic [31:0] output2;
    processing_element uut2
    (.clk(clk),
    .rst(rst),
    .bati_in(left_out),
    .kuzey_in(top_in2),
    .interestregionfinished_i(interestregionfinished_i2),
    .interestregionfinished_o(interestregionfinished_o2),
    .dogu_out(left_out2),
    .guney_out(top_out2),
    .outputs(output2)
    );
    
    always #5 clk = ~clk;
    
    initial begin 
        rst = 1;
        left_in = 8'd0;
        top_in = 8'd0;
        top_in2 = 8'd0;
        interestregionfinished_i1 = 1'b0;
        interestregionfinished_i2 = 1'b0;
        #12;
        rst = 0;
        
        left_in = 8'd2;
        top_in = 8'd3;
        #10;
        
        left_in = 8'd1;
        top_in = 8'd1;
        top_in2 = 8'd2;
        #10;
        
        left_in = 8'd4;
        top_in = 8'd5;
        top_in2 = 8'd3;
        #10;
        
        left_in = 8'd7;
        top_in = 8'd5;
        top_in2 = 8'd2;
        #10;
        
        left_in = 8'd4;
        top_in = 8'd2;
        top_in2 = 8'd1;
        #10;
        
        left_in = 8'd0;
        top_in = 8'd0;
        top_in2 = 8'd0;
        interestregionfinished_i1 = 1'b1;
        #10;
        
        interestregionfinished_i1 = 1'b0;
        left_in = 8'd0;
        top_in = 8'd0;
        top_in2 = 8'd0;
        interestregionfinished_i2 = 1'b1;
        #10;
        interestregionfinished_i2 = 1'b0;
        #5;
        $display("Kontrol");
        //pe1 e giren elemanlar (2*3)+ (1*1)+ (4*5)+ (5*7)+ (4*2) = 70 oluyor
        if(output1 == 7'd70)begin 
            $display("doğru sonuç");
        end
        else begin 
            $display("hata var: beklenen:70  çıkan: %016h", output1);
        end
        if(output2 == 7'd22)begin 
            $display("doğru sonuç");
        end
        else begin 
            $display("hata var: beklenen:22  çıkan: %016h", output2);
        end
        $finish;
    end
    
endmodule
