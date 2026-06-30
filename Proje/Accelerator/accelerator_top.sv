`timescale 1ns / 1ps

module accelerator_top(
    input logic clk,
    input logic rst,

    // Write Address Channel
    input  logic [31:0]  S_AXI_AWADDR,
    input  logic         S_AXI_AWVALID,
    output logic         S_AXI_AWREADY,
    // Write Data Channel
    input  logic [31:0]  S_AXI_WDATA,
    input  logic [3:0]   S_AXI_WSTRB,
    input  logic         S_AXI_WVALID,
    output logic         S_AXI_WREADY,
    // Write Response Channel
    output logic [1:0]   S_AXI_BRESP,
    output logic         S_AXI_BVALID,
    input  logic         S_AXI_BREADY,
    // Read Address Channel
    input  logic [31:0]  S_AXI_ARADDR,
    input  logic         S_AXI_ARVALID,
    output logic         S_AXI_ARREADY,
    // Read Data Channel
    output logic [31:0]  S_AXI_RDATA,
    output logic         S_AXI_RVALID,
    output logic [1:0]   S_AXI_RRESP,
    input  logic         S_AXI_RREADY,
    
    output logic [31:0] M_AXI_ARADDR,
    output logic [7:0] M_AXI_ARLEN,
    output logic [2:0] M_AXI_ARSIZE,
    output logic [1:0] M_AXI_ARBURST,
    output logic M_AXI_ARVALID,
    input  logic M_AXI_ARREADY,

    input  logic [31:0] M_AXI_RDATA,
    input  logic [1:0] M_AXI_RRESP,
    input  logic M_AXI_RLAST,
    input  logic M_AXI_RVALID,
    output logic M_AXI_RREADY,
    output logic interrupt
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
    
    //bufferv3 matrixBuffer(
    //    .clk(clk),                  
    //    .write_enable(write_enable),
    //    .addr(buff_read_addr),
    //    .din(din),
    //    .dout(buff_read_data)
    //);
    
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
    logic signed [7:0]softmax_results[0:3];
    softmax softmax_inst(
        .clk_i(clk),
        .rst_n_i(!rst),
        .start_i(),
        .in_0(fc_results[0]),  
        .in_1(fc_results[1]),  
        .in_2(fc_results[2]),  
        .in_3(fc_results[3]),  
        .out_0(softmax_results[0]),
        .out_1(softmax_results[1]),
        .out_2(softmax_results[2]),
        .out_3(softmax_results[3])
    
    );
    logic [1:0] results_class;
    logic [1:0] result;
    logic maxindex1;
    logic maxindex2;
    always_comb begin 
        maxindex1=(softmax_results[1]>softmax_results[0])?1'b1:1'b0;
        maxindex2=(softmax_results[3]>softmax_results[2])?1'b1:1'b0;
        if(maxindex1&&maxindex2)begin 
            if(softmax_results[3]>softmax_results[1]) result=4'd3;
            else result=4'd1;
        end
        else if(!maxindex1&&!maxindex2)begin 
            if(softmax_results[2]>softmax_results[0]) result=4'd2;
            else result=4'd0;  
        end
    end
    
    assign results_class=result;
    
    
    logic busy;
    logic infer_done;
    logic loader_done;
    logic soft_reset;
    logic start_loader;
    
    logic [9:0] loader_addr;
    logic [63:0] loader_din;
    logic [7:0] loader_we;
    
    acc_axi_slave acc_axi_slave_inst (
   // Input Ports - Single Bit
   .busy               (busy),            
   .infer_done         (infer_done),      
   .loader_done        (loader_done),     
   .S_AXI_ACLK         (S_AXI_ACLK),      
   .S_AXI_ARESETN      (S_AXI_ARESETN),   
   .S_AXI_ARVALID      (S_AXI_ARVALID),   
   .S_AXI_AWVALID      (S_AXI_AWVALID),   
   .S_AXI_BREADY       (S_AXI_BREADY),    
   .S_AXI_RREADY       (S_AXI_RREADY),    
   .S_AXI_WVALID       (S_AXI_WVALID),    
   // Input Ports - Busses
   .result_class  (result_class),
   .S_AXI_ARADDR (S_AXI_ARADDR[31:0]),
   .S_AXI_AWADDR (S_AXI_AWADDR[31:0]),
   .S_AXI_WDATA  (S_AXI_WDATA[31:0]),
   .S_AXI_WSTRB   (S_AXI_WSTRB[3:0]),
   // Output Ports - Single Bit
   .interrupt_o        (interrupt),     
   .S_AXI_ARREADY      (S_AXI_ARREADY),   
   .S_AXI_AWREADY      (S_AXI_AWREADY),   
   .S_AXI_BVALID       (S_AXI_BVALID),    
   .S_AXI_RVALID       (S_AXI_RVALID),    
   .S_AXI_WREADY       (S_AXI_WREADY),    
   .soft_reset         (soft_reset),      
   .start_loader       (start_loader),    
   // Output Ports - Busses
   .S_AXI_BRESP   (S_AXI_BRESP[1:0]),
   .S_AXI_RDATA  (S_AXI_RDATA[31:0]),
   .S_AXI_RRESP   (S_AXI_RRESP[1:0])
   // InOut Ports - Single Bit
   // InOut Ports - Busses
);

axi4_dma_loader axi4_dma_loader_inst (
   // Input Ports - Single Bit
   .clk                (clk),             
   .M_AXI_ARREADY      (M_AXI_ARREADY),   
   .M_AXI_RLAST        (M_AXI_RLAST),     
   .M_AXI_RVALID       (M_AXI_RVALID),    
   .rst                (rst),             
   .start_loader       (start_loader),    
   // Input Ports - Busses
   .M_AXI_RDATA        (M_AXI_RDATA[31:0]),
   .M_AXI_RRESP        (M_AXI_RRESP[1:0]),
   // Output Ports - Single Bit
   .loader_done        (loader_done),     
   .M_AXI_ARVALID      (M_AXI_ARVALID),   
   .M_AXI_RREADY       (M_AXI_RREADY),    
   // Output Ports - Busses
   .loader_addr        (buff_read_addr),
   .loader_din         (loader_din),
   .loader_we          (loader_we),  
   .M_AXI_ARADDR       (M_AXI_ARADDR[31:0]),
   .M_AXI_ARBURST      (M_AXI_ARBURST[1:0]),
   .M_AXI_ARLEN        (M_AXI_ARLEN[7:0]),
   .M_AXI_ARSIZE       (M_AXI_ARSIZE[2:0])
   // InOut Ports - Single Bit
   // InOut Ports - Busses
);

buffer_byte_en buffer(
    .clk(clk),
    .write_enable(loader_we),
    .addr(buff_read_addr),
    .din(loader_din),
    .dout(buff_read_data)
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

