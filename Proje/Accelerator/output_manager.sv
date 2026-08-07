`timescale 1ns / 1ps
module output_manager
import accelerator_config_pkg::*; 
(
input logic clk,
input logic rst,
input logic alloutputsready,

//input logic signed[31:0] pe_outputs[0:79],
input logic signed [31:0] sa_line_outputs[0:7],
output logic [63:0]buffwritedata,
output logic [3:0]buffwriteaddr,
output logic buffwriteenable,
output logic feederbasla
    );
    
    logic signed [7:0] bufferdata [0:7];
    logic [5:0] buffaddress;//feedlane artarsa artması gerekebilir
     
    //REQ SİNYALLERİ
    logic signed [31:0] postp_in [0:7];
    logic signed [7:0] postp_out[0:7];
    logic inputvalid;
    logic [7:0] outputvalid;
    
    localparam int scalevals[0:7] = '{1653229999,1516545207,2000799311,1159928266,1498403863,1285645282,2146175029,1756589032};
    localparam int shiftvals[0:7] = '{41,43,41,41,41,41,41,41};
    genvar i;
    generate
        for(i=0;i<8;i=i+1)begin: post_p
            relu_req #(.scale(scalevals[i]),.shift(shiftvals[i]))postprocess(
                .clk(clk),                
                .rst(rst),          
                .input_valid(inputvalid),                 
                .data_in(postp_in[i]), 
                .data_out(postp_out[i]),
                .output_valid(outputvalid[i])      
            );
        end
    endgenerate
    
    always_ff @(posedge clk)begin
        if(rst)begin
            inputvalid <= 1'b0;
            postp_in <= '{default: '0};
        end
        else begin             
            inputvalid <= 1'b0;   
            if(alloutputsready==1'b1)begin
                                                   
                postp_in[0] <= sa_line_outputs[0]; 
                postp_in[1] <=  sa_line_outputs[1];
                postp_in[2] <=  sa_line_outputs[2];
                postp_in[3] <=  sa_line_outputs[3];
                postp_in[4] <=  sa_line_outputs[4];
                postp_in[5] <=  sa_line_outputs[5];
                postp_in[6] <= sa_line_outputs[6]; 
                postp_in[7] <= sa_line_outputs[7];
                
                inputvalid <= 1'b1;                
               
            end
            
        end
    end
    
    logic [5:0] sayac;
    always_ff @(posedge clk)begin
        if(rst)begin
            sayac <= '0;
            bufferdata <= '{default: '0};
            buffaddress <= '0;

        end
        else begin
            bufferdata <= '{default: '0};
            buffwriteenable <= 1'b0;
            buffaddress <= '0;
            feederbasla <= 1'b0;
            
            if(&outputvalid)begin
                bufferdata <= postp_out; 
                buffwriteenable <= 1'b1;
                buffaddress <= buffaddress + 1'b1;
                
                sayac <= sayac + 1'b1;
                if(sayac == FEEDLANE_COUNT-1'b1)begin
                    sayac <= '0;
                    feederbasla <= 1'b1;//10x8 lik sa dan 10 farklı conv pencersesinin, 8 farklı kerneldeki sonucunu requantize edip yazdıktan sonra diğerleri gelene kadar fully connecteda başla diyor
                end
            end
        end
    end
    
    /// 
    assign buffwriteaddr = buffaddress - 1'b1;
    
    assign buffwritedata[7:0] = bufferdata[0];
    assign buffwritedata[15:8] = bufferdata[1];
    assign buffwritedata[23:16] = bufferdata[2];
    assign buffwritedata[31:24] = bufferdata[3];
    assign buffwritedata[39:32] = bufferdata[4];
    assign buffwritedata[47:40] = bufferdata[5];
    assign buffwritedata[55:48] = bufferdata[6];
    assign buffwritedata[63:56] = bufferdata[7];
    
endmodule