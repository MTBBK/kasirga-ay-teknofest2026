`timescale 1ns / 1ps

module accelerator_top(
    input logic clk,
    input logic rst,
    
    output logic [31:0] M_AXI_ARADDR,
    output logic [7:0] M_AXI_ARLEN,

    output logic M_AXI_ARVALID,
    input  logic M_AXI_ARREADY,

    input  logic [31:0] M_AXI_RDATA,
    input  logic M_AXI_RLAST,
    input  logic M_AXI_RVALID,
    output logic M_AXI_RREADY,
    
    output logic [31:0] M_AXI_AWADDR,
    output logic M_AXI_AWVALID,
    input  logic M_AXI_AWREADY,
    
    output logic [31:0] M_AXI_WDATA,
    output logic [3:0] M_AXI_WSTRB,
    output logic M_AXI_WVALID,
    input  logic M_AXI_WREADY,
    
    input  logic M_AXI_BVALID,
    output logic M_AXI_BREADY,
    input  logic start_loader,
    
    
    
    output logic interrupt
    );
    
    logic [63:0]buff_read_data;
    
    logic [9:0]buff_read_addr;
    logic [7:0]sa_word_o[0:9];
    logic sawordo_started;
    logic endofregion;
    
    logic start_accelerator;
    logic infer_done;
    logic loader_done;
    always_ff@(posedge clk)begin 
        if(rst)begin
            start_accelerator<=0;
        end
        else begin 
            if(loader_done)begin 
                start_accelerator<=1;
            end
            if(infer_done)begin 
                start_accelerator<=0;
            end
        end
    end
    im2col_feeder im2colFeeder(
        .clk(clk),
        .rst(rst),
        .buff_read_data(buff_read_data),
        .buff_read_addr(buff_read_addr),
        .sa_word_o(sa_word_o),
        .sawordo_started(sawordo_started),
        .endofregion(endofregion),
        .start(start_accelerator)
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
    
    logic signed[31:0] sa_line_outputs[0:7];
    logic alloutputsready;
    sa_wrapper sa_wrapper(
        .clk(clk),
        .rst(rst),
        .left_in(sa_word_o),
        .top_in(sa_weight_o),
        .interestregionfinished(endofregion),
        .sa_line_outputs(sa_line_outputs),
        .alloutputsready(alloutputsready)//BUERA
    );
    
    //BU BAĞLANTILAR GÜNCELLENDİ ARTIK BRAME GİTMİYOR DİREKT FC MANAGERA GİDİYOR ÇIKTILAR
    //İSİMİLERİ DÜZELTİLECEK
    logic [63:0] omanager_buffwritedata;
    logic [3:0] omanager_buffwritaddress;
    logic omanager_buffwriteenable;
    logic fcfeederbasla;
    output_manager omanager(
        .clk(clk),
        .rst(rst),
        .alloutputsready(alloutputsready),
        .sa_line_outputs(sa_line_outputs),
        .buffwritedata(omanager_buffwritedata),
        .buffwriteaddr(omanager_buffwritaddress), 
        .buffwriteenable(omanager_buffwriteenable),
        .feederbasla(fcfeederbasla)
    );
    
    logic [63:0] outputbufferdataout;                                       
    logic signed [7:0]fc_results[0:3];
    logic fc_manager_done;
    fc_manager fullyconnected_manager(//feederdan çok manager gibi oldu bu hali
        .clk(clk),                
        .rst(rst),                
        .basla(fcfeederbasla),        
        .fc_input_data(omanager_buffwritedata),
        .fc_input_data_addr(omanager_buffwritaddress),
        .fc_input_data_valid(omanager_buffwriteenable),
        .resultvals(fc_results),
        .done(fc_manager_done)
    );
    
    logic signed [7:0]softmax_results[0:3];
    logic softmax_start;
    assign softmax_start=fc_manager_done;
    logic softmax_done;
    softmax softmax_inst(
        .clk_i(clk),
        .rst_n_i(!rst),
        .start_i(softmax_start),
        .done_o(softmax_done),
        .in_0(fc_results[0]),  
        .in_1(fc_results[1]),  
        .in_2(fc_results[2]),  
        .in_3(fc_results[3]),  
        .out_0(softmax_results[0]),
        .out_1(softmax_results[1]),
        .out_2(softmax_results[2]),
        .out_3(softmax_results[3])
    
    );
    logic [3:0] results_class;
    logic [3:0] result;
    logic maxindex1;
    logic maxindex2;
    always_comb begin 
        maxindex1=(softmax_results[1]>softmax_results[0])?1'b1:1'b0;
        maxindex2=(softmax_results[3]>softmax_results[2])?1'b1:1'b0;
        if(maxindex1&&maxindex2)begin 
            if(softmax_results[3]>softmax_results[1]) result=4'b0111;
            else result=4'b1101;
        end
        else if(!maxindex1&&!maxindex2)begin 
            if(softmax_results[2]>softmax_results[0]) result=4'b1011;
            else result=4'b1110;  
        end
    end
    
    assign results_class=result;
    
    
    
    assign infer_done=softmax_done;
    
    
    logic [9:0] loader_addr;
    logic [63:0] loader_din;
    logic [7:0] loader_we;
    logic write_done;

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
   // Output Ports - Single Bit
   .loader_done        (loader_done),     
   .M_AXI_ARVALID      (M_AXI_ARVALID),   
   .M_AXI_RREADY       (M_AXI_RREADY),    
   // Output Ports - Busses
    .loader_addr        (loader_addr),
   .loader_din         (loader_din),
   .loader_we          (loader_we),  
   .M_AXI_ARADDR       (M_AXI_ARADDR[31:0]),
   .M_AXI_ARLEN        (M_AXI_ARLEN[7:0])
   // InOut Ports - Single Bit
   // InOut Ports - Busses
);

result_writeback result_writeback_inst(
    .clk(clk),
    .rst(rst),
    .infer_done(infer_done),
    .result_class(results_class),
    .M_AXI_AWADDR(M_AXI_AWADDR),
    .M_AXI_AWVALID(M_AXI_AWVALID),
    .M_AXI_AWREADY(M_AXI_AWREADY),
    .M_AXI_WDATA(M_AXI_WDATA),
    .M_AXI_WSTRB(M_AXI_WSTRB),
    .M_AXI_WVALID(M_AXI_WVALID),
    .M_AXI_WREADY(M_AXI_WREADY),
    .M_AXI_BVALID(M_AXI_BVALID),
    .M_AXI_BREADY(M_AXI_BREADY),
    .write_done(write_done)  
);

buffer_byte_en buffer(
    .clk(clk),
    .write_enable(loader_we),
    .waddr(loader_addr),
    .raddr(buff_read_addr),
    .din(loader_din),
    .dout(buff_read_data)
);

assign interrupt=write_done;
   
   
endmodule

