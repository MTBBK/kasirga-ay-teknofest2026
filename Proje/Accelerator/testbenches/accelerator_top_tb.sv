`timescale 1ns / 1ps
//
//  Bu testbench hızlandırıcının kendisini test etmek için yazılmıştır. Verinin bellekten getirilmesi ve sonucun geri yazılması kısımlarını çıkarıp hızlandırıcı rtlsini test eder.
//
module accelerator_top_tb(

    );
    logic clk = 0;
    logic rst;
        
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
    logic fc_manager_done;
    fc_manager fullyconnected_manager(//feederdan çok manager gibi oldu bu hali
        .clk(clk),                
        .rst(rst),                
        .basla(fcfeederbasla),        
        .buff_read_data(outputbufferdataout),
        .buff_read_addr(fcfeeder_buffaddress),
        .resultvals(fc_results),
        .done(fc_manager_done)
    );
    
    bufferv3 outputbuffer(
        .clk(clk),                  
        .write_enable(omanager_buffwriteenable),//veri ya
        .addr(outputbuffaddress),
        .din(omanager_buffwritedata),
        .dout(outputbufferdataout)
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
    
    buffer_byte_en buffer(
        .clk(clk),
        .write_enable(loader_we),
        .waddr(loader_addr),
        .raddr(buff_read_addr),
        .din(loader_din),
        .dout(buff_read_data)
    );
    
    assign interrupt=write_done;
    
    always #5 clk = ~clk;
    
    initial begin
        $readmemh("input_data.mem", buffer.ram);
    end
    
    initial begin 
        rst = 1; 
        #20; 
        rst = 0;
        loader_done = 1'b1;
        #10;
        loader_done = 1'b0;
        #1135;//ilk çıktılar
        #4645;//14x46 lık giriş matrisine göre 6 interest regionun tamamı bitti 
        //58x46 nın tamamını yapması 5000 çevrim civarı sürüyor gibi görünüyor
       
        //45075te biterse bütün girdi verisini göndermiş oluyor feeder, simulasyonu finishten 39275ns daha çalıştırmak demek bu.
        $finish;
    end

endmodule
