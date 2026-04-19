`timescale 1ns / 1ps
module processin_element_tb(

    );
    
    localparam accumwidth = 32;
    logic clk= 0;
    logic rst;
    logic [7:0]left_in;
    logic [7:0]top_in;
    logic [2:0]kernel_count;
    logic [7:0]left_out;
    logic [7:0]top_out; 
    logic [255:0] outputs;
    
    processing_element uut
    (.clk(clk),
    .rst(rst),
    .bati_in(left_in),
    .kuzey_in(top_in),
    .kernel_count(kernel_count),
    .dogu_out(left_out),
    .guney_out(top_out),
    .outputs(outputs)
    );
    
    
    logic [7:0]top_in2;
    logic [7:0]left_out2; 
    logic [7:0]top_out2; 
    logic [255:0] outputs2;
    processing_element uut2
    (.clk(clk),
    .rst(rst),
    .bati_in(left_out),
    .kuzey_in(top_in2),
    .kernel_count(kernel_count),
    .dogu_out(left_out2),
    .guney_out(top_out2),
    .outputs(outputs2)
    );
    
    always #5 clk = ~clk;
    
    initial begin 
        rst = 1;
        left_in = 8'd0;
        top_in = 8'd0;
        kernel_count = 2'd0;
        top_in2 = 8'd0;
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
        kernel_count = 2'd1;
        left_in = 8'd4;
        top_in = 8'd2;
        top_in2 = 8'd1;
        #10;
    end
    
endmodule
