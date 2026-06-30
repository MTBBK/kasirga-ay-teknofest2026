`timescale 1ns / 1ps
module relu_req #(parameter scale= 1653229999 ,parameter shift=41, parameter zero_point= -128)(//32 13 yaparsak çok az doğruluk kaybıyla devam edebiliyor büyük çarpma yerine tercih edilebilir belki
input logic clk,
input logic rst,

input logic input_valid,

input logic signed [31:0]data_in,
output logic signed[7:0]data_out,
output logic output_valid
    );
    logic signed [63:0] scaled_val;
    logic [31:0] post_relu;
    logic signed[7:0] final_out;
    logic signed[31:0] shifted;
    logic signed[31:0] shifted_zeropoint;

    logic validreg1,validreg2;
    
    always_ff @(posedge clk)begin
        if(rst)begin
            validreg1 <=1'b0;
            validreg2 <=1'b0;
        end
        else begin
            validreg1 <= input_valid;
            validreg2 <= validreg1;
            output_valid <= validreg2;
        end
    end
    
    always_ff @(posedge clk) begin//scale
        if(input_valid ==1'b1)begin
            scaled_val <= data_in * scale;
        end
    end
    
    always_ff @(posedge clk) begin//shift
        if(validreg1==1'b1)begin
            shifted <= (scaled_val >>> shift);
        end
    end
    assign shifted_zeropoint = shifted + zero_point;//shifted - 32'd128;
    
    always_ff @(posedge clk) begin
        if(validreg2==1'b1)begin
            if (shifted_zeropoint > 32'sd127)begin
                final_out <= 8'd127;
            end
            else if(shifted_zeropoint < - 32'sd128)begin
                final_out <= -8'sd128;
            end
            else begin
                final_out <= shifted_zeropoint[7:0];   
            end
        end
    end
    assign data_out = final_out;
    //always_comb begin//SCALE
    //    scaled_val = data_in * scale;
    //end
    //
    //
    //always_comb begin
    //    shifted = (scaled_val >>> shift);
    //    shifted_zeropoint = shifted + zero_point;//shifted - 32'd128;
    //    if (shifted_zeropoint > 32'sd127)begin
    //        final_out = 8'd127;
    //    end
    //    else if(shifted_zeropoint < - 32'sd128)begin
    //        final_out = -8'sd128;
    //    end
    //    else begin
    //        final_out = shifted_zeropoint[7:0];   
    //    end
    //end
    //assign data_out = final_out;
    //assign output_valid = input_valid;

endmodule
