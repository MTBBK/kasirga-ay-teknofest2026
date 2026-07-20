`timescale 1ns / 1ps
module output_manager(
input logic clk,
input logic rst,
input logic alloutputsready,

input logic signed[31:0] pe_outputs[0:79],

output logic [63:0]buffwritedata,
output logic [9:0]buffwriteaddr,
output logic buffwriteenable,
output logic feederbasla
    );
    
    typedef enum logic [1:0] {
        idle = 2'b00,
        sendtopostprocess = 2'b01
    } state;
    state current_state;
    
    logic signed [31:0] collectedoutputs[0:79];
    logic [6:0] linecount;
    logic signed [7:0] bufferdata [0:7];
    logic [8:0] buffaddress;
     
    
    logic signed [31:0] postp_in [0:7];
    logic signed [7:0] postp_out[0:7];
    logic invalid;
    logic [7:0] outvalid;
    
    localparam int scalevals[0:7] = '{1653229999,1516545207,2000799311,1159928266,1498403863,1285645282,2146175029,1756589032};
    localparam int shiftvals[0:7] = '{41,43,41,41,41,41,41,41};
    genvar i;
    generate
        for(i=0;i<8;i=i+1)begin: post_p
            relu_req #(.scale(scalevals[i]),.shift(shiftvals[i]))postprocess(
                .clk(clk),                
                .rst(rst),          
                .input_valid(invalid),                 
                .data_in(postp_in[i]), 
                .data_out(postp_out[i]),
                .output_valid(outvalid[i])      
            );
        end
    endgenerate
    //int j;
    always_ff @(posedge clk)begin
        if(rst)begin
            current_state <= idle;
            collectedoutputs <= '{default: '0};
            linecount <= '0;
            buffaddress <= '0;
            invalid <= 1'b0;
            postp_in <= '{default: '0};
        end
        else begin
            case(current_state)
                idle:begin
                    invalid <= 1'b0;
                    collectedoutputs <= '{default: '0};
                    if(alloutputsready==1'b1)begin
                        collectedoutputs <= pe_outputs;
                        current_state <= sendtopostprocess;
                    end
                end
                sendtopostprocess:begin
                    //for( j= 0;j<8;j=j+1)begin
                    //    postp_in[j] <= collectedoutputs[linecount+j];
                    //end
                    postp_in[0] <= collectedoutputs[linecount];
                    postp_in[1] <= collectedoutputs[linecount+4'd1];
                    postp_in[2] <= collectedoutputs[linecount+4'd2];
                    postp_in[3] <= collectedoutputs[linecount+4'd3];
                    postp_in[4] <= collectedoutputs[linecount+4'd4];
                    postp_in[5] <= collectedoutputs[linecount+4'd5];
                    postp_in[6] <= collectedoutputs[linecount+4'd6];
                    postp_in[7] <= collectedoutputs[linecount+4'd7];
                    
                    invalid <= 1'b1;
                    linecount <= linecount + 4'd8;//burda kaldım
                    if(linecount == 7'd72)begin
                        linecount <= '0;
                        current_state <= idle;
                    end
                end
            endcase
        end
    end
    
    logic [3:0] sayac;
    always_ff @(posedge clk)begin
        if(rst)begin
            sayac <= '0;
            bufferdata <= '{default: '0};
        end
        else begin
            bufferdata <= '{default: '0};
            buffwriteenable <= 1'b0;
            feederbasla <= 1'b0;
            if(&outvalid)begin
                bufferdata <= postp_out; 
                buffwriteenable <= 1'b1;
                buffaddress <= buffaddress + 1'b1;
                
                sayac <= sayac + 1'b1;
                if(sayac == 4'd9)begin
                    sayac <= '0;
                    feederbasla <= 1'b1;
                end
            end
        end
    end
    
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

