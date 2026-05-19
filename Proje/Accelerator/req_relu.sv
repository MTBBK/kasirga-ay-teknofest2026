`timescale 1ns / 1ps
module req_relu(
input logic clk,
input logic rst,

input logic input_valid,

input logic signed [31:0]data_in,
input logic [15:0]scale_factor,
input logic [4:0]shift_amount,
output logic [7:0]data_out,
output logic output_valid
    );
    logic [47:0] scaled_val;
    logic [31:0] post_relu;
    logic [7:0] final_out;
    logic [31:0] shifted;

    always_comb  begin//RELU     buralara hep registerlar eklenecek borular döşenecek memleket kalkındırılacak (critical path yüksek muhtmelen)
        if (data_in < 0)begin 
            post_relu = 32'sd0;
        end
        else begin 
            post_relu = data_in;
        end
    end

    always_comb begin//SCALE
        scaled_val = post_relu * scale_factor;
    end

    always_comb begin
        shifted = (scaled_val >> shift_amount);
        
        if (shifted > 32'd255)begin
            final_out = 8'd255;
        end
        else begin
            final_out = shifted[7:0];   
        end
    end
    
    assign data_out = final_out;
    assign output_valid = input_valid;

endmodule
