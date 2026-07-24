`timescale 1ns / 1ps
//TODOS                                                        
//gereksiz idle durumu ve durum makinesi temizlenebilir
module buffer_weight(
    input logic clk,
    input logic rst,
    input logic infer_done,
    input logic im2colfeeder_started,//im2col feeder dan geliyor veri göndermeden 1 çevrim önce 1 yapıyor
         // biz 1 gördüğümüzde ilk verisini göndermiş oluyor biz de ilk verimizi onunla beraber gönderiyoruz,
         // son verisini gönderirken de 0 a çekiyor biz de sonraki çevrim 0 ı görüp yeni veri göndermiyoruz tekrar 1 olmasını bekliyoruz
    output logic signed[7:0]sa_weight_o[0:7]
    
    //belki çıktı valid sinyali eklenebilir veya girdilere diğer modullere de giren start vs gibi sinyaller eklenebilir, bir araya geldiklerinde belli olur gibi
    
    );
    //ağırlıklar da int8 galiba ama modeli daha ayrıntılı incelememiz lazım
    
    typedef enum logic [1:0] {
        idle = 2'b00,
        senddata = 2'b01
    } state;
    state current_state;
    
    logic [7:0] conv_weights [0:7][0:79];//8 kernel var her kernel flatten olunca 80 verisi var(10x8) her veri 8 bit?? 
    logic [6:0] count;
    
    initial begin
        $readmemh("conv_weights.mem", conv_weights);
    end
    
    always_ff @(posedge clk)begin
        if(rst)begin 
            count <= '0;
            //ağırlıkları sıfırlamak zorunda mıyız??
            current_state <= idle;
            for(int i = 0;i<8 ;i=i+1)begin
                sa_weight_o[i] <= '0;
            end
        end
        else begin
            case(current_state)
                idle:begin 
                    for(int i = 0;i<8 ;i=i+1)begin
                        sa_weight_o[i] <= '0;
                    end
                    count <= '0;
                    current_state <= senddata;
                    //if(start)begin 
                    //    for(int i = 0;i<8 ;i=i+1)begin// başladığı çevrim göndermeye başladık? belki bir sonraki çevrimde başlamayı da tercih edebiliriz
                    //        sa_weight_o[i] <= conv_weights[i][count];
                    //    end
                    //    count <= count + 1'b1;
                    //end
                end
                senddata:begin
                    for(int i = 0;i<8 ;i=i+1)begin
                        sa_weight_o[i] <= '0;
                    end
                    
                    if(im2colfeeder_started== 1'b1)begin 
                        for(int i = 0;i<8 ;i=i+1)begin
                            sa_weight_o[i] <= conv_weights[i][count];
                        end
                        count <= count + 1'b1;
                        if(count == 7'd79)begin
                            current_state<= senddata;//şuan idle devre dışı
                            count <= '0;
                        end
                    end
                end
            endcase
            if(infer_done==1'b1)begin 
                count <= '0;
                current_state <= idle;
                for(int i = 0;i<8 ;i=i+1)begin
                    sa_weight_o[i] <= '0;
                end
            end
        end
    end
    
endmodule