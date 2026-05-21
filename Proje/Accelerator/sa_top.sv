`timescale 1ns / 1ps

module sa_top(
input logic clk,
input logic rst,
input logic [7:0]left_in[0:9],
input logic [7:0]top_in[0:7],
input logic interestregionfinished,
output logic signed [31:0] pe_outputs[0:79] ,
output logic alloutputsready
    );
    
    logic [7:0] yataykablo [0:9][0:8];
    logic [7:0] dikeykablo [0:10][0:7];
    logic signed [31:0] outputs [0:79];
    
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
    assign alloutputsready = endofregionkablo[10][7];
    assign pe_outputs = outputs;
    
    //bi initial bloğuna almak lazım çok uzun oldu
    assign yataykablo[0][0] = left_in[0];
    assign yataykablo[1][0] = left_in[1];
    assign yataykablo[2][0] = left_in[2];
    assign yataykablo[3][0] = left_in[3];
    assign yataykablo[4][0] = left_in[4];
    assign yataykablo[5][0] = left_in[5];
    assign yataykablo[6][0] = left_in[6];
    assign yataykablo[7][0] = left_in[7];
    assign yataykablo[8][0] = left_in[8];
    assign yataykablo[9][0] = left_in[9];
    
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
                processing_element processyapanelement
                (.clk(clk),
                .rst(rst),
                .bati_in(yataykablo[i][j]),
                .kuzey_in(dikeykablo[i][j]),
                .interestregionfinished_i(endofregionkablo[i][j]), 
                .interestregionfinished_o(endofregionkablo[i+1][j]),
                .dogu_out(yataykablo[i][j+1]),
                .guney_out(dikeykablo[i+1][j]),
                .outputs(outputs[i*8+j])
                );
            end
        end
    endgenerate
    
endmodule
