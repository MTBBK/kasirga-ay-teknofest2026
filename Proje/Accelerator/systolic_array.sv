`timescale 1ns / 1ps

module systolic_array(
input logic clk,
input logic rst,
input logic signed [7:0]left_in[0:9],
input logic signed [7:0]top_in[0:7],
input logic interestregionfinished,
//output logic signed [31:0] pe_outputs[0:79] ,
output logic signed [31:0] sa_line_outputs[0:7],
output logic alloutputsready
    );
    
    logic signed [8:0] yataykablo [0:9][0:8];
    logic signed [7:0] dikeykablo [0:10][0:7];
    //logic signed [31:0] outputs [0:79];
    
    logic signed [31:0] outputkablo [0:10][0:7];
    assign outputkablo[10][0] = '0;//en alttan giren kablolar. biz boşalan veriyi üstten alıcaz, alttan sıfırlar girse olur.
    assign outputkablo[10][1] = '0;
    assign outputkablo[10][2] = '0;
    assign outputkablo[10][3] = '0;
    assign outputkablo[10][4] = '0;
    assign outputkablo[10][5] = '0;
    assign outputkablo[10][6] = '0;
    assign outputkablo[10][7] = '0;
    assign sa_line_outputs[0] = outputkablo[0][0];
    assign sa_line_outputs[1] = outputkablo[0][1];
    assign sa_line_outputs[2] = outputkablo[0][2];
    assign sa_line_outputs[3] = outputkablo[0][3];
    assign sa_line_outputs[4] = outputkablo[0][4];
    assign sa_line_outputs[5] = outputkablo[0][5];
    assign sa_line_outputs[6] = outputkablo[0][6];
    assign sa_line_outputs[7] = outputkablo[0][7];
    
    logic endofregionkablo[0:10][0:7];
    assign endofregionkablo[0][0] = interestregionfinished;
    always_ff @(posedge clk)begin
        if(rst)begin
        end
        else begin 
            endofregionkablo[0][1] <= endofregionkablo[0][0];
            endofregionkablo[0][2] <= endofregionkablo[0][1];
            endofregionkablo[0][3] <= endofregionkablo[0][2];
            endofregionkablo[0][4] <= endofregionkablo[0][3];
            endofregionkablo[0][5] <= endofregionkablo[0][4];
            endofregionkablo[0][6] <= endofregionkablo[0][5];
            endofregionkablo[0][7] <= endofregionkablo[0][6];
            
        end
    end
    
    //assign alloutputsready = endofregionkablo[10][7];
    logic [3:0] sa_send_outputs_counter; 
    always_ff@(posedge clk)begin 
        if(rst)begin
            alloutputsready<=1'b0;
            sa_send_outputs_counter <= '0;
        end
        else begin 
            if(endofregionkablo[10][7])begin 
                alloutputsready<= 1'b1;
            end
            if(alloutputsready)begin 
                sa_send_outputs_counter <= sa_send_outputs_counter + 1'b1;
                if(sa_send_outputs_counter == 4'd9)begin 
                    alloutputsready <= 1'b0;
                    sa_send_outputs_counter <= '0;
                end
            end
        end
    end
    //assign pe_outputs = outputs;
    
    //bi initial bloğuna almak lazım çok uzun oldu. ~2 ay sonra~ neyse boşver hoş duruyor 
    assign yataykablo[0][0] = left_in[0] + 10'sd128;
    assign yataykablo[1][0] = left_in[1] + 10'sd128;
    assign yataykablo[2][0] = left_in[2] + 10'sd128;
    assign yataykablo[3][0] = left_in[3] + 10'sd128;
    assign yataykablo[4][0] = left_in[4] + 10'sd128;
    assign yataykablo[5][0] = left_in[5] + 10'sd128;
    assign yataykablo[6][0] = left_in[6] + 10'sd128;
    assign yataykablo[7][0] = left_in[7] + 10'sd128;
    assign yataykablo[8][0] = left_in[8] + 10'sd128;
    assign yataykablo[9][0] = left_in[9] + 10'sd128;
    
    assign dikeykablo[0][0] = top_in[0];
    assign dikeykablo[0][1] = top_in[1];
    assign dikeykablo[0][2] = top_in[2];
    assign dikeykablo[0][3] = top_in[3];
    assign dikeykablo[0][4] = top_in[4];
    assign dikeykablo[0][5] = top_in[5];
    assign dikeykablo[0][6] = top_in[6];
    assign dikeykablo[0][7] = top_in[7];
    
    genvar i,j;
    generate //parametrize edilebilir ama gereksiz yere karmaşık gösteredebilir
        for (i = 0;i<10;i=i+1) begin : chains
            for (j=0;j<8;j=j+1) begin : pe_ss
                processing_element #(.bias(i+1'b1)) processyapanelement //#(.bias(i+1'b1))bunu ekleyince biaslar oturmalı
                (.clk(clk),
                .rst(rst),
                .bati_in(yataykablo[i][j]),
                .kuzey_in(dikeykablo[i][j]),
                .interestregionfinished_i(endofregionkablo[i][j]), 
                .interestregionfinished_o(endofregionkablo[i+1][j]),
                .dogu_out(yataykablo[i][j+1]),
                .guney_out(dikeykablo[i+1][j]),
                .sendoutputs(alloutputsready),
                .reserve_in(outputkablo[i+1][j]),//bunlar kendi aralarında bağlanacak artık veri akış kabloları gibi
                .reserve_out(outputkablo[i][j])//bunlar kendi aralarında bağlanacak artık veri akış kabloları gibi
                );
            end
        end
    endgenerate
    
endmodule
