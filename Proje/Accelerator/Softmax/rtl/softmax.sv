`timescale 1ns / 1ps


module softmax(
    input logic clk_i,
    input logic rst_n_i,
    input logic start_i,
    input logic signed [7:0] in_0,
    input logic signed [7:0] in_1,
    input logic signed [7:0] in_2,
    input logic signed [7:0] in_3,
    output logic signed [7:0] out_0,
    output logic signed [7:0] out_1,
    output logic signed [7:0] out_2,
    output logic signed [7:0] out_3,
    output logic  done_o
    );
    logic [8:0] ds_0;
    logic [8:0] ds_1;
    logic [8:0] ds_2;
    logic [8:0] ds_3;
    logic ds_done;
    downscale downscaler(
        .clk_i(clk_i),
        .rst_n_i(rst_n_i),
        .start_i(start_i),
        .in_0(in_0),
        .in_1(in_1),
        .in_2(in_2),
        .in_3(in_3),
        .out_0(ds_0),
        .out_1(ds_1),
        .out_2(ds_2),
        .out_3(ds_3),
        .done_o(ds_done)   
    );
    
    logic [7:0] exp_0;
    logic [7:0] exp_1;
    logic [7:0] exp_2;
    logic [7:0] exp_3;
    logic exp_done;
    
    exponential expo(
        .clk_i(clk_i),  
        .rst_n_i(rst_n_i),
        .start_i(ds_done),
        .in_0(ds_0),    
        .in_1(ds_1),    
        .in_2(ds_2),    
        .in_3(ds_3),    
        .out_0(exp_0),   
        .out_1(exp_1),   
        .out_2(exp_2),   
        .out_3(exp_3),   
        .done_o(exp_done)        
    );
    logic [7:0] exp_buf_0;
    logic [7:0] exp_buf_1;
    logic [7:0] exp_buf_2;
    logic [7:0] exp_buf_3;
    logic exp_done_buf;
    softmax_exp_to_mult_buffer buffer(
        .clk_i(clk_i),
        .rst_n_i(rst_n_i),
        .in_0_buf(exp_0),
        .in_1_buf(exp_1),
        .in_2_buf(exp_2),
        .in_3_buf(exp_3),
        .done_i_buf(exp_done),
        .out_0_buf(exp_buf_0),
        .out_1_buf(exp_buf_1),
        .out_2_buf(exp_buf_2),
        .out_3_buf(exp_buf_3),
        .done_o_buf(exp_done_buf)
    );
    
    
    logic [9:0] accumulated;
    logic acc_done;
    
    accumulator acc(
        .clk_i(clk_i),     
        .rst_n_i(rst_n_i),   
        .start_i(exp_done),   
        .done_o(acc_done),   
        .in_0(exp_0),
        .in_1(exp_1),
        .in_2(exp_2),
        .in_3(exp_3),
        .out(accumulated) 
    
    );
    
    logic [15:0] reciprocal_val;
    logic rec_done;
    
    reciprocal rec(
        .clk_i(clk_i),     
        .rst_n_i(rst_n_i), 
        .start_i(acc_done),
        .done_o(rec_done), 
        .in(accumulated),     
        .out(reciprocal_val)
    );
    logic mult_start;
    assign mult_start=exp_done_buf&rec_done;
    logic [7:0] mult_out_0,mult_out_1,mult_out_2,mult_out_3;
    multiplier mult(
        .clk_i(clk_i),     
        .rst_n_i(rst_n_i),   
        .start_i(mult_start),   
        .done_o(done_o),
        .in_exp_0(exp_buf_0),
        .in_exp_1(exp_buf_1),
        .in_exp_2(exp_buf_2),
        .in_exp_3(exp_buf_3),
        .in_rec(reciprocal_val),  
        .out_0(mult_out_0),   
        .out_1(mult_out_1),   
        .out_2(mult_out_2),   
        .out_3(mult_out_3)    
    );
   
    // TFLite INT8 Format Dönüşümü: 128 Çıkarmak yerine SADECE 7. Biti Ters Çeviriyoruz (0 Donanım Maliyeti)
    assign out_0 = { ~mult_out_0[7], mult_out_0[6:0] };
    assign out_1 = { ~mult_out_1[7], mult_out_1[6:0] };
    assign out_2 = { ~mult_out_2[7], mult_out_2[6:0] };
    assign out_3 = { ~mult_out_3[7], mult_out_3[6:0] };
endmodule




