`timescale 1ns / 1ps
module vga_timing_generator (
input clk_pixel_i, // 25.175 MHz
input rst_i,
output wire [9:0] h_count_o,
output wire [9:0] v_count_o,
output wire h_sync_o,
output wire v_sync_o,
output wire video_on_o
);

    localparam h_visible=640,
               h_front_p=16,
               h_sync=96,
               h_back_p=48,
               h_total=800;
    
    localparam v_visible=480,
               v_front_p=10,
               v_sync=2,
               v_back_p=33,
               v_total=525;
     reg [9:0] h_count;
     reg [9:0] v_count;
     
     reg [9:0] h_count_reg1;
     reg [9:0] v_count_reg1;
     
     reg [9:0] h_count_reg2;
     reg [9:0] v_count_reg2;
    assign h_sync_o=((h_count_o>=h_visible+h_front_p)&&(h_count_o<h_visible+h_front_p+h_sync))? 1'b0: 1'b1;
   
    assign v_sync_o=((v_count_o>=v_visible+v_front_p)&&(v_count_o<v_visible+v_front_p+v_sync))? 1'b0: 1'b1;
    
    assign video_on_o=((h_count_o<h_visible)&&(v_count_o<v_visible))? 1'b1: 1'b0;   
    assign h_count_o=h_count_reg2;
    assign v_count_o=v_count_reg2;
    always@(posedge clk_pixel_i)begin 
        if(rst_i)begin 
            h_count<=10'd0;
            v_count<=10'd0;
            h_count_reg1 <= 0;
            h_count_reg2 <= 0;

            v_count_reg1 <= 0;
            v_count_reg2 <= 0;
        end
        else begin
            if(h_count<h_total-1)begin 
                h_count<=h_count+10'h1;
            end
            else if(h_count==h_total-1)begin
                if(v_count==v_total-1)begin 
                    v_count<=10'h0;
                end
                else begin 
                    v_count<=v_count+10'h1;
                end
                h_count<=10'h0;
            end
            h_count_reg1<=h_count;
            h_count_reg2<=h_count_reg1;
            v_count_reg1<=v_count;
            v_count_reg2<=v_count_reg1;
            
            
        
        end
    
    end



endmodule
