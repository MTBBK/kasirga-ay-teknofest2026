`timescale 1ns / 1ps
module output_manager(
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
    
    //typedef enum logic [1:0] {
    //    idle = 2'b00,
    //    sendtopostprocess = 2'b01
    //} state;
    //state current_state;
    
    //logic signed [31:0] collectedoutputs[0:79];
    //logic [6:0] linecount;
    logic signed [7:0] bufferdata [0:7];
    logic [3:0] buffaddress;
     
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
    
    logic [3:0] saoutputlinecount;
    always_ff @(posedge clk)begin
        if(rst)begin
            //current_state <= idle;
            //ollectedoutputs <= '{default: '0};
            //linecount <= '0;
            inputvalid <= 1'b0;
            postp_in <= '{default: '0};
            saoutputlinecount <= '0;
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
            
            //case(current_state)
            //    idle:begin
            //        inputvalid <= 1'b0;
            //        //collectedoutputs <= '{default: '0};
            //        if(alloutputsready==1'b1)begin
            //            //collectedoutputs <= pe_outputs;
            //            current_state <= sendtopostprocess;
            //            
            //            postp_in[0] <= sa_line_outputs[0];
            //            postp_in[1] <=  sa_line_outputs[1]; 
            //            postp_in[2] <=  sa_line_outputs[2];
            //            postp_in[3] <=  sa_line_outputs[3];
            //            postp_in[4] <=  sa_line_outputs[4];
            //            postp_in[5] <=  sa_line_outputs[5];
            //            postp_in[6] <= sa_line_outputs[6];
            //            postp_in[7] <= sa_line_outputs[7];
            //            
            //            inputvalid <= 1'b1;
            //            //linecount <= linecount + 4'd8;//10 çevrimlik sayaç koyulacak 10 çevrim sonra bitmiş olacak zaten veri gelişi
            //            saoutputlinecount <= saoutputlinecount +1'b1;
            //        end
            //    end
            //    sendtopostprocess:begin
            //        //postp_in[0] <= collectedoutputs[linecount];
            //        //postp_in[1] <= collectedoutputs[linecount+4'd1];
            //        //postp_in[2] <= collectedoutputs[linecount+4'd2];
            //        //postp_in[3] <= collectedoutputs[linecount+4'd3];
            //        //postp_in[4] <= collectedoutputs[linecount+4'd4];
            //        //postp_in[5] <= collectedoutputs[linecount+4'd5];
            //        //postp_in[6] <= collectedoutputs[linecount+4'd6];
            //        //postp_in[7] <= collectedoutputs[linecount+4'd7];
            //        //
            //        //inputvalid <= 1'b1;
            //        //linecount <= linecount + 4'd8;
            //        //if(linecount == 7'd72)begin
            //        //    linecount <= '0;
            //        //    current_state <= idle;
            //        //end
            //        ////
            //        //her çevrim bir line gelse
            //        
            //        postp_in[0] <= sa_line_outputs[0];
            //        postp_in[1] <=  sa_line_outputs[1]; 
            //        postp_in[2] <=  sa_line_outputs[2];
            //        postp_in[3] <=  sa_line_outputs[3];
            //        postp_in[4] <=  sa_line_outputs[4];
            //        postp_in[5] <=  sa_line_outputs[5];
            //        postp_in[6] <= sa_line_outputs[6];
            //        postp_in[7] <= sa_line_outputs[7];
            //        
            //        inputvalid <= 1'b1;
            //        //linecount <= linecount + 4'd8;//10 çevrimlik sayaç koyulacak 10 çevrim sonra bitmiş olacak zaten veri gelişi
            //        saoutputlinecount <= saoutputlinecount +1'b1;
            //        if(saoutputlinecount == 9)begin
            //            saoutputlinecount <= '0;
            //            current_state <= idle;
            //        end
            //        
            //    end
            //endcase
        end
    end
    
    logic [3:0] sayac;
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
                if(sayac == 4'd9)begin
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