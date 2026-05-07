`timescale 1ns / 1ps
//Bu testbench ilk yazılan matrixBuffer ı sa_wrapper ile birlikte kontrol ediyor
//şuanki buffer sadece 8x8 matris tutması ve sa yı besleyebilmesi için yazılmıştır.
//conv işlemi için çözüm içermemektedir, matris çarpımını başarılı şekilde yapmaktadır
//testbenchte önce bufferlara veriler yüklenir sonra okunarak matris çarpımı yapılır.
module buffdeneme1_tb();

    logic clk = 0;
    logic rst;
    
    logic [7:0] buffindata [0:7];
    logic we_a;
    
    logic re_b;
    logic [2:0]indeks_a;
    logic [2:0]indeks_b;
    
    logic [7:0] buffoutdataA [0:7];
    logic [7:0] buffoutdataB [0:7];

    matrixBuffer uutbuff1 (
        .clk(clk),
        .indekstipi(1'b1),
        .we_a(we_a),
        .indeks_a(indeks_a),
        .din_a(buffindata),
        .re_b(re_b),
        .indeks_b(indeks_b),
        .dout_b(buffoutdataA)
    );
    
    matrixBuffer uutbuff2 (//diğer bufferdan tek farklı kablosu veri çıkışı çünkü test için yüklemelerini ve okumalarını aynı anda yapacağız ve aynı verileri yükleyeceğim
        .clk(clk),
        .indekstipi(1'b0),
        .we_a(we_a),//iki matris te aynı anda yüklensin test için sorun olmaz
        .indeks_a(indeks_a),
        .din_a(buffindata),//test kolay olsun diye iki matrise de aynı vevriyi yüklüyoruz
        .re_b(re_b),
        .indeks_b(indeks_b),
        .dout_b(buffoutdataB)
    );
    
    logic [31:0] outputs [0:63];
    sa_wrapper uutsawrapper (
        .clk(clk),
        .rst(rst),
        .left_in(buffoutdataA),
        .top_in(buffoutdataB),
        .pe_outputs(outputs)
    );
    
    always #5 clk = ~clk;

    logic [7:0] test_matrix [0:7][0:7];
    //beklenen sonuç AxB matris çarouımı
    //86, 52, 66, 56, 63, 55, 77, 48
    //36, 22, 28, 26, 29, 26, 33, 21
    //72, 44, 56, 52, 58, 52, 66, 42
    //108, 66, 84, 78, 87, 78, 99, 63
    //144, 88, 112, 104, 116, 104, 132, 84
    //180, 110, 140, 130, 145, 130, 165, 105
    //216, 132, 168, 156, 174, 156, 198, 126
    //252, 154, 196, 182, 203, 182, 231, 147  
    
    initial begin
        $readmemh("buffdeneme1matA.mem", test_matrix);
        rst = 1;
        we_a = 0;
        re_b = 0; 
        #20;
        rst = 0;
        we_a = 1;
        
        //veriyi buffera yükle
        for (int i = 0; i < 8; i++) begin
            @(posedge clk);
            indeks_a = i;
            buffindata = test_matrix[i];
        end
        @(posedge clk);
        we_a=0;
        #20;
        //şimdi iki matriste aynı veri ile yüklü okumaya başlayacağız okuduğumuzu sa wrappera göndereceğiz
        #10;
        re_b=1;
        indeks_b = 0;
        #10;
        re_b=1;
        indeks_b = 1;
        #10;
        re_b=1;
        indeks_b = 2;
        #10;
        re_b=1;
        indeks_b = 3;
        #10;
        re_b=1;
        indeks_b = 4;
        #10;
        re_b=1;
        indeks_b = 5;
        #10;
        re_b=1;
        indeks_b = 6;
        #10;
        re_b=1;
        indeks_b = 7;
        #10;
        re_b=0;
        #500;
        $finish;
    end
endmodule
