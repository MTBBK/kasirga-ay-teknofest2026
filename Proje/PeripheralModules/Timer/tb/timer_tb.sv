`timescale 1ns / 1ps

module tb_timer();

    // ---------------------------------------------------------
    // 1. Sinyal Tanımlamaları
    // ---------------------------------------------------------
    logic        clk_i;
    logic        rst_i;
    logic [31:0] tim_pre;
    logic [31:0] tim_are;
    logic        tim_clr;
    logic        tim_ena;
    logic        tim_mod;
    logic [31:0] tim_cnt;
    logic [31:0] tim_evn;
    logic        tim_evc;

    // ---------------------------------------------------------
    // 2. Modül Bağlantısı (Instantiation - DUT)
    // ---------------------------------------------------------
    timer #(.CLK_FREQ(10)) dut (
        .clk_i   (clk_i),
        .rst_i   (rst_i),
        .tim_pre (tim_pre),
        .tim_are (tim_are),
        .tim_clr (tim_clr),
        .tim_ena (tim_ena),
        .tim_mod (tim_mod),
        .tim_cnt (tim_cnt),
        .tim_evn (tim_evn),
        .tim_evc (tim_evc)
    );

    // ---------------------------------------------------------
    // 3. Saat (Clock) Üretimi - 100 MHz (10ns periyot)
    // ---------------------------------------------------------
    initial begin
        clk_i = 0;
        forever #5 clk_i = ~clk_i; // Her 5ns'de bir durum değiştir
    end

    // ---------------------------------------------------------
    // 4. Doğrulama Senaryoları (Test Sequences)
    // ---------------------------------------------------------
    initial begin
        // Başlangıç Değerleri (Reset state)
        rst_i   = 1;
        tim_pre = 0;
        tim_are = 5;
        tim_clr = 0;
        tim_ena = 0;
        tim_mod = 1; // 1: Yukarı sayma
        tim_evc = 0;

        // SENARYO 1: Reset Durumu Kontrolü
        #20;
        rst_i = 0;
        $display("[%0t] Reset kaldirildi. Baslangic durumlari kontrol ediliyor...", $time);
        
        // SENARYO 2: Temel Sayma ve Auto-Reload (Up-Count) Testi
        tim_ena = 1;
        $display("[%0t] SENARYO 2: ENA=1, Yukari sayma (ARE=5) basladi.", $time);
        wait(tim_evn == 1); 
        @(posedge clk_i);
        $display("[%0t] -> Hedefe ulasildi. CNT sifirlandi, EVN=%0d", $time, tim_evn);

        // SENARYO 3: Prescaler (Frekans Bölücü) Testi
        tim_ena = 0;
        tim_pre = 2; // Frekansı 3'e böl
        tim_are = 3;
        
        tim_clr = 1; 
        @(posedge clk_i);
        tim_clr = 0;
        
        tim_ena = 1;
        $display("[%0t] SENARYO 3: Prescaler Testi (PRE=2, ARE=3) basladi.", $time);
        wait(tim_evn == 2); 
        @(posedge clk_i);

        // SENARYO 4: Aşağı Sayma (Down-Count) Testi
        tim_ena = 0;
        tim_pre = 0; // Prescaler iptal
        tim_are = 4;
        tim_mod = 0; // 0: Aşağı sayma
        
        tim_clr = 1;
        @(posedge clk_i);
        tim_clr = 0;
        
        tim_ena = 1;
        $display("[%0t] SENARYO 4: Asagi Sayma (Down-Count) basladi (ARE=4).", $time);
        
        wait(tim_cnt == tim_are); 
        
        wait(tim_cnt == 0);       
        
        @(posedge clk_i);
        $display("[%0t] -> Asagi saymada 0'a ulasildi, deger basa sardi. CNT=%0d", $time, tim_cnt);

        // SENARYO 5: Şartname Köşe Durumu (Corner Case) Testi
        tim_ena = 0;
        @(negedge clk_i); // Sinyali GÜVENLİ AN'da (düşen kenar) uygula!
        tim_clr = 1; 
        @(posedge clk_i); // Saatin vurduğu anı bekle
        #1;               // RTL'in güncellenmesi için (NBA) 1ns bekle
        tim_clr = 0;
        
        if (tim_cnt == 0)
            $display("[%0t] SENARYO 5 BASARILI: ENA=0 iken CLR sinyali ile sayac basariyla sifirlandi.", $time);
        else
            $display("[%0t] SENARYO 5 HATASI: ENA=0 iken CLR calismadi! CNT=%0d", $time, tim_cnt);

        // SENARYO 6: Olay Temizleme (Event Clear) Testi
        @(negedge clk_i); // Sinyali GÜVENLİ AN'da uygula!
        tim_evc = 1;
        @(posedge clk_i); // Yükselen kenar vurdu
        #1;               // Güncellenmeyi bekle
        tim_evc = 0;
        
        if (tim_evn == 0)
            $display("[%0t] SENARYO 6 BASARILI: Event Clear (EVC) basariyla uygulandi. EVN=%0d", $time, tim_evn);
        else
            $display("[%0t] SENARYO 6 HATASI: EVC calismadi! EVN=%0d", $time, tim_evn);
          
        //Senaryo 7 tim_pre==0xFFFF_FFFF
        tim_mod = 1;
        tim_ena = 0;
        tim_pre = 32'hFFFF_FFFF;
        tim_are = 3;
        
        tim_clr = 1; 
        @(posedge clk_i);
        tim_clr = 0;
        
        tim_ena = 1;
        $display("[%0t] SENARYO 7: Prescaler Testi 2 (PRE=0xFFFF_FFFF, ARE=3) basladi.", $time);
        wait(tim_evn == 2); 
        @(posedge clk_i);

        // Testi Tamamla
        #50;
        $display("[%0t] Tum test senaryolari tamamlandi.", $time);
        $finish;
    end

    // ---------------------------------------------------------
    // 5. Dalga Formu (Waveform) Kaydı (Vivado / ModelSim için)
    // ---------------------------------------------------------
    initial begin
        $dumpfile("timer_tb.vcd");
        $dumpvars(0, tb_timer);
    end

endmodule