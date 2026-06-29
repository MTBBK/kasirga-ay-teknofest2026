`timescale 1ns / 1ps

module accelerator_top(
input logic clk,
input logic rst

    );
    
    logic [63:0]buff_read_data;
    
    logic [9:0]buff_read_addr;
    logic [7:0]sa_word_o[0:9];
    logic sawordo_started;
    logic endofregion;
    im2col_feeder im2colFeeder(
        .clk(clk),
        .rst(rst),
        .buff_read_data(buff_read_data),
        .buff_read_addr(buff_read_addr),
        .sa_word_o(sa_word_o),
        .sawordo_started(sawordo_started),
        .endofregion(endofregion)
    );
    
    logic write_enable = 0;
    logic [63:0] din = '0;
    
    bufferv3 matrixBuffer(
        .clk(clk),                  
        .write_enable(write_enable),
        .addr(buff_read_addr),
        .din(din),
        .dout(buff_read_data)
    );
    
    logic [7:0]sa_weight_o[0:7];
    buffer_weight weightBuffer(
        .clk(clk),                  
        .rst(rst),
        .im2colfeeder_started(sawordo_started),
        .sa_weight_o(sa_weight_o)
    );
    
    logic signed[31:0] pe_outputs[0:79];
    logic alloutputsready;
    sa_wrapper sa_wrapper(
        .clk(clk),
        .rst(rst),
        .left_in(sa_word_o),
        .top_in(sa_weight_o),
        .interestregionfinished(endofregion),
        .pe_outputs(pe_outputs),
        .alloutputsready(alloutputsready)//BUERA
    );
    
    logic [63:0] omanager_buffwritedata;
    logic [9:0] omanager_buffwritaddress;
    logic omanager_buffwriteenable;
    logic fcfeederbasla;
    output_manager omanager(
        .clk(clk),
        .rst(rst),
        .alloutputsready(alloutputsready),
        .pe_outputs(pe_outputs),
        .buffwritedata(omanager_buffwritedata),
        .buffwriteaddr(omanager_buffwritaddress), 
        .buffwriteenable(omanager_buffwriteenable),
        .feederbasla(fcfeederbasla)
    );
    
    logic [9:0] outputbuffaddress;
        logic [9:0] fcfeeder_buffaddress;
    outputbuff_arbiter oarbit(
        .omanageraddress(omanager_buffwritaddress),
        .omanagerwriteenable(omanager_buffwriteenable),
        .fcfeederaddress(fcfeeder_buffaddress),
        .outputaddress(outputbuffaddress)
    );
    
    logic [63:0] outputbufferdataout;                                       
    logic signed [7:0]fc_results[0:3];  
    fc_manager fullyconnected_manager(//feederdan çok manager gibi oldu bu hali
        .clk(clk),                
        .rst(rst),                
        .basla(fcfeederbasla),        
        .buff_read_data(outputbufferdataout),
        .buff_read_addr(fcfeeder_buffaddress),
        .resultvals(fc_results) 
    );
    
    bufferv3 outputbuffer(
        .clk(clk),                  
        .write_enable(omanager_buffwriteenable),//veri ya
        .addr(outputbuffaddress),
        .din(omanager_buffwritedata),
        .dout(outputbufferdataout)
    );
    
    
    //tb üst satırdan itibaren kopyalayıp bu kodun yerine yapıştırdım bi hata falan çıkarsa diye silmiyorum
    //logic [63:0] omanager_buffwritedata;
    //logic [9:0] omanager_buffwritaddress;
    //logic omanager_buffwriteenable;
    //output_manager omanager(
    //    .clk(clk),
    //    .rst(rst),
    //    .alloutputsready(alloutputsready),
    //    .pe_outputs(pe_outputs),
    //    .buffwritedata(omanager_buffwritedata),
    //    .buffwriteaddr(omanager_buffwritaddress), 
    //    .buffwriteenable(omanager_buffwriteenable)     
    //);
    //
    //logic [63:0] outputbufferdataout;
    //bufferv3 outputbuffer(
    //    .clk(clk),                  
    //    .write_enable(omanager_buffwriteenable),//veri ya
    //    .addr(omanager_buffwritaddress),
    //    .din(omanager_buffwritedata),
    //    .dout(outputbufferdataout)
    //);
    
endmodule
