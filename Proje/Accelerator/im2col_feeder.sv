`timescale 1ns / 1ps

module im2col_feeder(
    input logic clk,
    input logic rst,
    input logic [63:0]buff_read_data,
    output logic [9:0]buff_read_addr,
    output logic [7:0]sa_word_o[0:9]
    );
    
    logic [2:0] global_word_offset;
    logic addressvalid;
    logic datavalid;
    
    logic [2:0]fifofeeder_colcnt;
    logic [7:0] fifofeeder [0:9][0:7];
    logic fifofeeder_ready;//fifofeederın veri yüklenmesi için hazır olduğunu(boş olduğunu) gösteriyor, sa yı beslemeye hazır demek değil!!
    
    logic startread;//feedlaneler içindeki lanereglerde biriktirmeye başla sinyali
    logic [9:0]fifovalid;//feedlanelerden gelen fifoya yüklenecek verinin geçerli olduğunu gösteren sinyal
    logic [9:0]lanereg_ready;//feedlane içeriisind eki laneregin veri kabul etmeye hazır olduğunu gösteren sinyal, hepsi bir olunca başla sinyali vermeyi düşünüyorum 
    logic [7:0] laneregs [0:9][0:7];

    assign startread = &lanereg_ready; 
    
    always_ff @(posedge clk)begin
        if (rst) begin 
            datavalid <= 1'b0;
        end
        else begin      
            datavalid <= addressvalid;
        end
    end
    
    index_counters indexunit(
    .clk(clk),
    .rst(rst),
    .start(startread),
    .laneregsready(lanereg_ready),
    .buff_read_addr(buff_read_addr),
    .global_word_offset(global_word_offset),
    .addressvalid(addressvalid)
    );
    
    genvar i;
    generate
        for (i = 0;i<10;i=i+1) begin : feedlane
            feed_lane #(.LOCAL_OFFSET(2*i)) lane(
            .clk(clk),
            .rst(rst),
            
            .global_word_offset(global_word_offset),
            .buff_read_data(buff_read_data),
            .buffdata_valid(datavalid),
            .startread(startread),
            .fifofeeder_ready(fifofeeder_ready && (&fifovalid)),
            
            .lanereg_ready(lanereg_ready[i]),
            .fifovalid(fifovalid[i]),//laneregin verisi valid mi yani hazır mı
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
            for (int i = 0; i < 10; i=i+1) begin
                 sa_word_o[i] <= '0;
            end
            fifofeeder_colcnt <= '0;
            fifofeeder <= '{default: '0};
            fifofeeder_ready <= 1'b1;
        end
        else begin
            case(feeder_state)
                //!!!!bir çevrim bekleme oluyor besleme yapılırken, senddata durumu bitince eğer zaten tekrar hazırsa göndermeye direkt waitlanes e gelmeden tekrar senddata başlayabilir
                waitlanes:begin
                    fifofeeder_ready <= 1'b1;
                    for (int i = 0; i < 10; i=i+1) begin
                        sa_word_o[i] <= '0;
                    end
                    if(&fifovalid && fifofeeder_ready)begin//valid ready handshake'i
                        fifofeeder <= laneregs;
                        fifofeeder_ready <= 1'b0;
                        feeder_state <= senddata;
                        fifofeeder_colcnt <= 3'b000;
                    end
                end
                senddata:begin
                    for (int i = 0; i < 10; i=i+1) begin
                        sa_word_o[i] <= fifofeeder[i][fifofeeder_colcnt];
                    end
                    if (fifofeeder_colcnt < 3'd7) begin
                        fifofeeder_colcnt <= fifofeeder_colcnt + 1'b1;
                    end 
                    else begin
                        feeder_state <= waitlanes;
                        fifofeeder_ready <= 1'b1;
                    end
                end
            endcase
        end
    end
    
    
    
    
    //logic [7:0] line_buffer [0:39];
    //
    //typedef enum logic [1:0] {
    //    idle = 2'b00,
    //    oku = 2'b01,
    //    bitti = 2'b10
    //} state;
    //state current_state;
    //
    //logic [2:0] readcount;//line bufferı doldurmak için 3 kere okuma yapmamız lazım
    //logic basla;
    //
    //always_ff @(posedge clk)begin 
    //    case(current_state)
    //        idle:begin 
    //            if(basla)begin 
    //                current_state <= oku;
    //                readcount <= 2'd0;
    //            end
    //        end
    //        oku:begin
    //            //bufferdan veri geldi mi kontrol falan etmek gerekebilir.
    //            
    //            line_buffer[8 * readcount] <= buff_read_data[7:0];
    //            line_buffer[8 * readcount + 1] <= buff_read_data[15:8];
    //            line_buffer[8 * readcount + 2] <= buff_read_data[23:16];
    //            line_buffer[8 * readcount + 3] <= buff_read_data[31:24];
    //            line_buffer[8 * readcount + 4] <= buff_read_data[39:32];
    //            line_buffer[8 * readcount + 5] <= buff_read_data[47:40];
    //            line_buffer[8 * readcount + 6] <= buff_read_data[55:48];
    //            line_buffer[8 * readcount + 7] <= buff_read_data[63:56];
    //            if (readcount < 3'd4) begin
    //                readcount <= readcount + 1'b1;
    //            end else begin
    //                current_state <= bitti;
    //                readcount <= 0;
    //            end
    //        end
    //        bitti:begin
    //            fifofeeder[0][0] <= 8'd0;
    //            fifofeeder[0][1] <= 8'd0;
    //            fifofeeder[0][2] <= 8'd0;
    //            for (int j = 0; j < 5;j = j+1 ) begin
    //                fifofeeder[0][j+3] <= line_buffer[j];
    //            end
    //            
    //            fifofeeder[1][0] <= 8'd0;
    //            for (int j = 0; j < 7;j = j+1) begin
    //                fifofeeder[1][j+1] <= line_buffer[j];
    //            end
    //            
    //            
    //            for (int i = 2; i <10; i=i+1) begin
    //                for (int j = 0; j < 8; j=j+1) begin
    //                    fifofeeder[i][j] <= line_buffer[(i*2-3)+j];
    //                end
    //            end
    //            current_state <= idle;
    //            fifofeeder_basla <= 1'b1;
    //        end
    //    endcase
    //end
    //
    //always_ff @(posedge clk) begin
    //    if (rst) begin
    //        
    //    end 
    //    else if (fifofeeder_basla) begin //başla sinyali
    //        for (int i = 0; i < 8; i=i+1) begin
    //            sa_word_o[i] <= fifofeeder[i][fifofeeder_colcnt];
    //        end
    //        
    //        if (fifofeeder_colcnt < 3'd7) begin
    //            fifofeeder_colcnt <= fifofeeder_colcnt + 1'b1;
    //        end else begin
    //            fifofeeder_colcnt <= 0;
    //            fifofeeder_basla <= 1'b0;
    //        end
    //    end
    //    else begin 
    //        for (int i = 0; i < 8; i=i+1) begin
    //            sa_word_o[i] <= 8'b0000_0000;
    //        end
    //    end
    //end
    ////3 ÇEVRİMDE GEREKLİ VERİYİ OKUYUM FEEDERA KOYUYORUZ, ONUN SA YA GİRMESİ 8 ÇEVRİM SÜRÜYOR BİZ O SIRADA YENİ VERİYİ OKUYUP SAKLAYACAĞIZ VE BU İKİ ARRAYİN UYUMLU ÇALIŞMASI İÇİN SİNYALLER LAZIM
endmodule