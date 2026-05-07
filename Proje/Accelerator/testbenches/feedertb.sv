`timescale 1ns / 1ps
module feedertb(

    );
    logic clk=0;
    logic rst;
    logic [63:0]buff_read_data;
    
    logic [9:0]buff_read_addr;
    logic [7:0]sa_word_o[0:9];
    
    im2col_feeder uut(
        .clk(clk),
        .rst(rst),
        .buff_read_data(buff_read_data),
        .buff_read_addr(buff_read_addr),
        .sa_word_o(sa_word_o)
    );
    
    //bu testbenchte doğrudan veri yüklü bufferı test ettik buffera yükleme yapmıyoruz
    logic write_enable = 0;//kullanmıyorum
    logic [63:0] din = '0;//kullanmıyorum
    
    bufferv3 buffer(
        .clk(clk),                  
        .write_enable(write_enable),
        .addr(buff_read_addr),
        .din(din),
        .dout(buff_read_data)
    );
    
    always #5 clk = ~clk;
    
    initial begin
        rst = 1; 
        #20; 
        rst = 0;
        #5000;//tam hesaplamak lazım, eksik kalmış simulasyonu devam ettirerek bakılabiliyor devammına
        $finish;
        
    end
    /*
    mevcut eksikler,
    -sistem sonsuza kadar devam edeyor açma kapama tuşu yok
    -beslemeler arası 1 çevrimlik boşlluk oluyor, sanırım state geçişinden kaynaklı düzeltilebilir gibi duruyor
    -bufferdaki matris same padding uygulanmış gibi davranarak veri çekiyor, sorun olmaz gibi matrise sıfırlarla padding yaparak koyabilirsek 
        yoksa adres ve veri çekme mantığını biraz karmaşıklaştırabilir
    -waveformda baya bi analiz ettim ama matris tekrarlayan değerlerden oluştuğu için ufak ihtimal de olsa belki bir şeyler gözden kaçmış olabilir
        başka matrisle de denenebilir, ya da direkt conv işlemi esnasında tekrar test edilebilir.
    */
endmodule
