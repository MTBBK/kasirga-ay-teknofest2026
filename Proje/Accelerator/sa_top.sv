`timescale 1ns / 1ps

module sa_top(
input logic clk,
input logic rst,
input logic [7:0]left_in[0:7],
input logic [7:0]top_in[0:7],
output logic [31:0] pe_outputs[0:63] 
    );
    
    logic [7:0] yataykablo [0:7][0:8];
    logic [7:0] dikeykablo [0:8][0:7];
    logic [31:0] outputs [0:63];
    logic [2:0] kernel_count = 3'd0;
    
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
        for (i = 0;i<8;i=i+1) begin : chains
            for (j=0;j<8;j=j+1) begin : pe_ss
                processing_element uut
                (.clk(clk),
                .rst(rst),
                .bati_in(yataykablo[i][j]),
                .kuzey_in(dikeykablo[i][j]),
                .kernel_count(kernel_count),
                .dogu_out(yataykablo[i][j+1]),
                .guney_out(dikeykablo[i+1][j]),
                .outputs(outputs[i*8+j])
                );
            end
        end
    endgenerate
    
    
	//logic [7:0] out_left0,out_left1,out_left2,out_left3,out_left4,out_left5,out_left6,out_left7,out_left8;
	//logic [7:0] out_top0,out_top1,out_top2,out_top3,out_top4,out_top5,out_top6,out_top7,out_top8;
	//
	//logic [255:0] outputs [8:0];
    //3x3 oluşturalım deneme amaçlı sonradan generate ile yapılacak
    // P0|P1|P2
    // P3|P4|P5
    // P6|P7|P8
    //tırnaklı inputlar için buffer koyulacak, bufferın latencysi ayarlanacak
    //processing_element P0 (clk,rst,"ilk left in","ilk top in",  out_left0,out_top0,outputs[0]);
    //processing_element P1 (clk,rst,out_left0,"ikinci top in",   out_left1,out_top1,outputs[1]);
    //processing_element P2 (clk,rst,out_left1,"üçüncü top in",   out_left2,out_top2,outputs[2]);
    //processing_element P3 (clk,rst,"ikinci left in",out_top0,   out_left3,out_top3,outputs[3]);
    //processing_element P4 (clk,rst,out_left3,out_top1,          out_left4,out_top4,outputs[4]);
    //processing_element P5 (clk,rst,out_left4,out_top2,          out_left5,out_top5,outputs[5]);
    //processing_element P6 (clk,rst,"üçüncü left in",out_top3,   out_left6,out_top6,outputs[6]);
    //processing_element P7 (clk,rst,out_left6,out_top4,          out_left7,out_top7,outputs[7]);
    //processing_element P8 (clk,rst,out_left7,out_top5,          out_left8,out_top8,outputs[8]);
    
endmodule
