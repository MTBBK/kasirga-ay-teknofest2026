`timescale 1ns / 1ps
//
//  Bu testbench hızlandırıcının kendisini test etmek için yazılmıştır. Verinin bellekten getirilmesi ve sonucun geri yazılması kısımlarını çıkarıp hızlandırıcı rtlsini test eder.
//
module accelerator_top_tb
import accelerator_config_pkg::*;
(

    );
    logic clk = 0;
    logic rst;
        
    logic fcready;
    logic [63:0]buff_read_data;
    
    logic [9:0]buff_read_addr;
    feeder_sa_output_t sa_word_o;
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
        .infer_done(infer_done),
//        .fcready(fcready),
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
        .infer_done(infer_done),
        .im2colfeeder_started(sawordo_started),
        .sa_weight_o(sa_weight_o)
    );
    
    logic signed[31:0] sa_line_outputs[0:7];
    logic alloutputsready;
    sa_wrapper sa_wrapper(
        .clk(clk),
        .rst(rst),
        .infer_done(infer_done),
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
    
    //logic [63:0] outputbufferdataout;                                       
    logic signed [7:0]fc_results[0:3];
    logic fc_manager_done;
    fc_manager fullyconnected_manager(//feederdan çok manager gibi oldu bu hali
        .clk(clk),                
        .rst(rst),          
        .infer_done(infer_done),      
        .basla(fcfeederbasla),        
        .fc_input_data(omanager_buffwritedata),
        .fc_input_data_addr(omanager_buffwritaddress),
        .fc_input_data_valid(omanager_buffwriteenable),
//        .fcready(fcready),
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

    
//    int file_handle;
//    initial begin
//      file_handle = $fopen("sistolik_dizi_girdileri_10_fcreadysinyalli.txt", "w");
      
//      if (file_handle == 0) begin
//        $display("error");
//        $finish;
//      end
//      for(int i = 0;i<500;i++)begin
//        @(posedge sawordo_started);
//            @(posedge clk);
//        for(int j =0;j<8;j++)begin
//            $fstrobe(file_handle, "Counter: %0d | Time: %0t | Wire Value: %p", i, $time, sa_word_o);
//            @(posedge clk);
//        end
//      end
//    end
    
//    int file_handle;
//    initial begin
//      file_handle = $fopen("omanager_girdileri_5.txt", "w");
      
//      if (file_handle == 0) begin
//        $display("error");
//        $finish;
//      end
//      for(int i = 0;i<100;i++)begin
//        @(posedge alloutputsready);
//        for(int j =0;j<5;j++)begin
//            $fstrobe(file_handle, "Counter: %0d | Time: %0t | Wire Value: %p", i, $time, omanager.sa_line_outputs);
//            @(posedge clk);
//        end
//      end
//    end

    integer i;
    integer wait_cycles;
    
    initial begin 
        rst = 1; 
        loader_done = 1'b0;
        
        repeat(5) @(posedge clk); 
        rst = 0;
        repeat(2) @(posedge clk);
    
        for (i = 0; i < 10; i++) begin
            $display("test %0d ", i);
            
            run_and_check();
            wait_cycles = $urandom_range(0, 50);
            
            if (wait_cycles == 0)begin
                $display("sifir gecikem testi");
            end
            else begin
                $display("%0d cevrim bosta bekle", wait_cycles);
            end
            repeat(wait_cycles) @(posedge clk);
        end
        
        $display("tum testler basarili");
        
//        $fclose(file_handle);
        $finish;
    end
    
    task run_and_check();
        begin
            @(posedge clk);
            loader_done = 1'b1;
            @(posedge clk);
            loader_done = 1'b0;
            
            wait(infer_done == 1'b1);
            
            @(posedge clk);
            
//            if (fc_results[0] !== 8'sh80) $error("hata 80 != %0h",fc_results[0]);
//            if (fc_results[1] !== 8'sh61) $error("hata 61 != %0h",fc_results[1]);
//            if (fc_results[2] !== 8'sh59) $error("hata 59 != %0h",fc_results[2]);
//            if (fc_results[3] !== 8'sh67) $error("hata 67 != %0h",fc_results[3]);
            if (fc_results[0] !== 8'sh80) $error("hata 80 != %0h",fc_results[0]);
            if (fc_results[1] !== 8'sh5f) $error("hata 61 != %0h",fc_results[1]);
            if (fc_results[2] !== 8'sh57) $error("hata 59 != %0h",fc_results[2]);
            if (fc_results[3] !== 8'sh65) $error("hata 67 != %0h",fc_results[3]);
            else  $display("sonuc doğru");

            fc_results = '{default:'0};
        end
    endtask
    
    assert property (@(posedge clk) disable iff (rst) !$isunknown(buff_read_data))
    else $error("buffreaddata null %0t",$time);
    
endmodule