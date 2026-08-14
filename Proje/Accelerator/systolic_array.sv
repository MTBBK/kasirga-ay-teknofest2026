`timescale 1ns / 1ps

import accelerator_config_pkg::*; 

module systolic_array
(
input logic clk,
input logic rst,
input logic infer_done,
input logic signed [7:0]left_in[0:FEEDLANE_COUNT-1'b1],
input logic signed [7:0]top_in[0:7],
input logic interestregionfinished,
output logic signed [31:0] sa_line_outputs[0:7],
output logic alloutputsready
    );
    
    logic signed [8:0] yataykablo [0:FEEDLANE_COUNT-1'b1][0:8];
    logic signed [7:0] dikeykablo [0:FEEDLANE_COUNT][0:7];
    
    logic signed [31:0] outputkablo [0:FEEDLANE_COUNT][0:7];
    //en alttan giren kablolar. biz boşalan veriyi üstten alıcaz, alttan sıfırlar girse iyi olur.
    assign outputkablo[FEEDLANE_COUNT][0] = '0;
    assign outputkablo[FEEDLANE_COUNT][1] = '0;
    assign outputkablo[FEEDLANE_COUNT][2] = '0;
    assign outputkablo[FEEDLANE_COUNT][3] = '0;
    assign outputkablo[FEEDLANE_COUNT][4] = '0;
    assign outputkablo[FEEDLANE_COUNT][5] = '0;
    assign outputkablo[FEEDLANE_COUNT][6] = '0;
    assign outputkablo[FEEDLANE_COUNT][7] = '0;
    assign sa_line_outputs[0] = outputkablo[0][0];
    assign sa_line_outputs[1] = outputkablo[0][1];
    assign sa_line_outputs[2] = outputkablo[0][2];
    assign sa_line_outputs[3] = outputkablo[0][3];
    assign sa_line_outputs[4] = outputkablo[0][4];
    assign sa_line_outputs[5] = outputkablo[0][5];
    assign sa_line_outputs[6] = outputkablo[0][6];
    assign sa_line_outputs[7] = outputkablo[0][7];
    
    logic endofregionkablo[0:FEEDLANE_COUNT][0:7];
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
    
    logic [5:0] sa_send_outputs_counter; //64 feedlane count a kadar yetiyor bit genişliği
    always_ff@(posedge clk)begin 
        if(rst)begin
            alloutputsready<=1'b0;
            sa_send_outputs_counter <= '0;
        end
        else if(infer_done==1'b1)begin 
            alloutputsready<=1'b0;
            sa_send_outputs_counter <= '0;
        end
        else begin 
            if(endofregionkablo[FEEDLANE_COUNT][7])begin 
                alloutputsready<= 1'b1;
            end
            if(alloutputsready)begin 
                sa_send_outputs_counter <= sa_send_outputs_counter + 1'b1;
                if(sa_send_outputs_counter == FEEDLANE_COUNT-1'b1)begin 
                    alloutputsready <= 1'b0;
                    sa_send_outputs_counter <= '0;
                end
            end
        end
    end
    
    generate
        for(genvar i = 0;i<FEEDLANE_COUNT;i++)begin:yatay_kablo_bagla
            assign yataykablo[i][0] = left_in[i] + 10'sd128;
        end
    endgenerate
    
    assign dikeykablo[0][0] = top_in[0];
    assign dikeykablo[0][1] = top_in[1];
    assign dikeykablo[0][2] = top_in[2];
    assign dikeykablo[0][3] = top_in[3];
    assign dikeykablo[0][4] = top_in[4];
    assign dikeykablo[0][5] = top_in[5];
    assign dikeykablo[0][6] = top_in[6];
    assign dikeykablo[0][7] = top_in[7];
    
    genvar i,j;
    generate
        for (i = 0;i<FEEDLANE_COUNT;i=i+1) begin : chains
            for (j=0;j<8;j=j+1) begin : pe_ss
                processing_element #(.bias(j+1'b1)) processyapanelement//i yerine j :((((
                (.clk(clk),
                .rst(rst),
                .infer_done(infer_done),
                .bati_in(yataykablo[i][j]),
                .kuzey_in(dikeykablo[i][j]),
                .interestregionfinished_i(endofregionkablo[i][j]), 
                .interestregionfinished_o(endofregionkablo[i+1][j]),
                .dogu_out(yataykablo[i][j+1]),
                .guney_out(dikeykablo[i+1][j]),
                .sendoutputs(alloutputsready),
                .reserve_in(outputkablo[i+1][j]),
                .reserve_out(outputkablo[i][j])
                );
            end
        end
    endgenerate
    
endmodule
