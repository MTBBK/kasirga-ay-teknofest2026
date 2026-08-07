`timescale 1ns / 1ps

module im2col_feeder
import accelerator_config_pkg::*;
(
    input logic clk,
    input logic rst,
    input logic infer_done,
//    input logic fcready,
    input logic [63:0]buff_read_data,
    output logic [9:0]buff_read_addr,
    output logic signed[7:0]sa_word_o[0:FEEDLANE_COUNT-1],
    //output feeder_sa_output_t sa_word_o,
    output logic sawordo_started,//diğer besleyici modul için sinyal. ben veri göndermeye başladım diyor
    output logic endofregion,
    input logic start
    );
    
    logic [2:0] global_word_offset;
    logic addressvalid;
    logic datavalid;
    
    logic [2:0]fifofeeder_colcnt;
    //logic [7:0] fifofeeder [0:9][0:7];
    feeder_t fifofeeder;
    logic fifofeeder_ready;//fifofeederın veri yüklenmesi için hazır olduğunu(boş olduğunu) gösteriyor, sa yı beslemeye hazır demek değil!!
    
    logic startread;//feedlaneler içindeki lanereglerde biriktirmeye başla sinyali
    logic [FEEDLANE_COUNT-1'b1:0]lanereg_data_valid;//feedlanelerden gelen fifoya yüklenecek verinin geçerli olduğunu gösteren sinyal
    logic [FEEDLANE_COUNT-1'b1:0]lanereg_ready;//feedlane içeriisind eki laneregin veri kabul etmeye hazır olduğunu gösteren sinyal, hepsi bir olunca başla sinyali vermeyi düşünüyorum 
    //logic [7:0] laneregs [0:9][0:7];
    feeder_t laneregs;
    assign startread = start&&(&lanereg_ready); 
    
    always_ff @(posedge clk)begin
        if (rst) begin 
            datavalid <= 1'b0;
        end
        else begin      
            datavalid <= addressvalid;
        end
    end
    
    address_generator agu(
    .clk(clk),
    .rst(rst),
    .infer_done(infer_done),
    .start(startread),
    .laneregsready(lanereg_ready),
    .buff_read_addr(buff_read_addr),
    .global_word_offset(global_word_offset),
    .addressvalid(addressvalid)
    );
    
    logic [4:0]endofregioncount;
    genvar i;
    generate
        for (i = 0;i<FEEDLANE_COUNT;i=i+1) begin : feedlane
            feed_lane #(.LOCAL_OFFSET(2*i)) lane(
            .clk(clk),
            .rst(rst),
            .infer_done(infer_done),
            //.fcready(fcready||(endofregioncount != 4'd10)),
            .global_word_offset(global_word_offset),
            .buff_read_data(buff_read_data),
            .buffdata_valid(datavalid),
            .startread(startread),
            .fifofeeder_ready(fifofeeder_ready && (&lanereg_data_valid)),
            
            .lanereg_ready(lanereg_ready[i]),
            .lanereg_data_valid(lanereg_data_valid[i]),//laneregin verisi valid mi yani hazır mı
            .sendtofifo(laneregs[i])//buraya doğrudan fifofeederı mı bağlasam diye denemeler yaptım şuan araya bu şekilde kablo atıp handshake esnasında fifofeedera almaya karar verdim
            );
        end
    endgenerate
    
    
    typedef enum logic [1:0] {
        waitlanes = 2'b00,
        senddata = 2'b01
    } fifofeederstate;
    fifofeederstate feeder_state;
    
    
    always_ff @(posedge clk)begin
        if(rst)begin
            //reset işlemleri
            feeder_state <= waitlanes;
            for (int i = 0; i < FEEDLANE_COUNT; i=i+1) begin
                 sa_word_o[i] <= '0;
            end
            fifofeeder_colcnt <= '0;
            fifofeeder <= '{default: '0};
            fifofeeder_ready <= 1'b1;
            endofregioncount <= '0;
            endofregion<= 1'b0;
        end
        else begin
            endofregion<= 1'b0;
            case(feeder_state)
                //!!!!bir çevrim bekleme oluyor besleme yapılırken, senddata durumu bitince eğer zaten tekrar hazırsa göndermeye direkt waitlanes e gelmeden tekrar senddata başlayabilir
                //ping pong yapılabilir?
                waitlanes:begin
                    fifofeeder_ready <= 1'b1;
                    sawordo_started <= 1'b0;
                    for (int i = 0; i < FEEDLANE_COUNT; i=i+1) begin
                        sa_word_o[i] <= '0;
                    end
                    if(&lanereg_data_valid && start)begin//valid ready handshake'i
                        fifofeeder <= laneregs;
                        fifofeeder_ready <= 1'b0;
                        feeder_state <= senddata;
                        fifofeeder_colcnt <= 3'b000;
                        sawordo_started <= 1'b1;
                        
                        endofregioncount <= endofregioncount+1'b1;//yeni kısım
                        if(endofregioncount == 4'd10)begin
//                            if(fcready)begin
                            endofregioncount<= 5'd1;
                            endofregion <= 1'b1;//end of region sinyali yeni feeder verilerinden hemen önce gelip sa da biriken değerleri toparlıyor
//                            end
//                            else begin
////                            fifofeeder <= fifofeeder;
//                            fifofeeder_ready <= 1'b1;
//                            feeder_state <=waitlanes;
//                            fifofeeder_colcnt <= 3'b000;
//                            sawordo_started <= 1'b0;
                            
//                            endofregioncount <= endofregioncount;//yeni kısım
//                            end
                        end
                    end
                end
                senddata:begin
                    for (int i = 0; i < FEEDLANE_COUNT; i=i+1) begin
                        sa_word_o[i] <= fifofeeder[i][fifofeeder_colcnt];
                    end
                    if (fifofeeder_colcnt < 3'd7) begin
                        fifofeeder_colcnt <= fifofeeder_colcnt + 1'b1;
                    end 
                    else begin
                        feeder_state <= waitlanes;
                        fifofeeder_ready <= 1'b1;
                        sawordo_started <= 1'b0;
                        
//                        endofregioncount <= endofregioncount+1'b1;//yeni kısım
//                        if(endofregioncount == 4'd9)begin
//                            endofregioncount<= 5'd0;
//                            endofregion <= 1'b1;//end of region sinyali yeni feeder verilerinden hemen önce gelip sa da biriken değerleri toparlıyor
//                        end
                    end
                    
                    ///////////////////
                    //1 çevrimlik gecikmeyi gidermek için: son hattı vermeden önceki çevrim ready=1 yapıyoruz sonraki 
                    //çevrim de feedlane verisini yakalamaya çalışıyoruz aynı anda son hattı çıkışa verirken
                    
                end
            endcase
            if(infer_done)begin
                feeder_state <= waitlanes;
                for (int i = 0; i < FEEDLANE_COUNT; i=i+1) begin
                     sa_word_o[i] <= '0;
                end
                fifofeeder_colcnt <= '0;
                fifofeeder <= '{default: '0};
                fifofeeder_ready <= 1'b1;
                endofregioncount <= '0;
                endofregion<= 1'b0;
            end
        end
    end
    
endmodule