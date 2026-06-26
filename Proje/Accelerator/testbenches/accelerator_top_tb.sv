`timescale 1ns / 1ps
module accelerator_top_tb(

    );
    logic clk = 0;
    logic rst;
    
    accelerator_top uut(
        .clk(clk),
        .rst(rst)
    );
    
    always #5 clk = ~clk;
    
    logic [63:0] expected_buffer [0:59];
    integer hata = 0;
    initial begin
        $readmemh("tb_output_buffer_expected.mem", expected_buffer);
    end

    initial begin 
        rst = 1; 
        #20; 
        rst = 0;
        //Test için ağırlıkları değiştiriyoruz sonuç matrisini bu değerlere göre hesapladık  
        //NOT!!: eski test yapılacaksa 14x46 lık matrisi kullanan eski scale ve shift değerleriyle bias olmadan olan. bu kısım çalıştırılmalı
        //for(int i = 0;i<8;i=i+1)begin
        //    for(int j= 0;j<80;j=j+1)begin       
        //        if(i>4)begin                    
        //            uut.weightBuffer.conv_weights[i][j] = 15*i-j;
        //        end                             
        //        else if(j>40)begin              
        //            uut.weightBuffer.conv_weights[i][j] = j-3*i; 
        //        end                             
        //        else begin                      
        //            uut.weightBuffer.conv_weights[i][j] = i+j;   
        //        end                             
        //    end                                 
        //end                                     
        #1135;//ilk çıktılar
        #4645;//14x46 lık giriş matrisine göre 6 interest regionun tamamı bitti 
        //58x46 nın tamamını yapması 5000 çevrim civarı sürüyor gibi görünüyor
        
        $display("Kontrol");
        for (int i = 0; i < 60; i++) begin
            if (uut.outputbuffer.ram[i] !== expected_buffer[i]) begin
                $display("Hata adres %0d: beklenen: %016h, çıkan: %016h", i, expected_buffer[i], uut.outputbuffer.ram[i]);
                hata++;
            end
        end
        
        if (hata == 0)begin
            $display("LETSGOOOOOOOOO");
        end
        else begin
            $display("Toplam %0d hata var", hata);
        end    
        //45075te biterse bütün girdi verisini göndermiş oluyor feeder, simulasyonu finishten 39275ns daha çalıştırmak demek bu.
        $finish;
    end

endmodule
