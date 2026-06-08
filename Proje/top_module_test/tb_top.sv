`timescale 1ns / 1ps

module tb_top();

    // Sinyaller
    logic clk_i;
    logic rst_n_i;
    logic fetch_enable;
    
    // Top modül G/Ç'ları
    logic uart_rx_i;
    logic uart_tx_o;
    wire [15:0] gpio_o;
    wire [15:0] gpio_i;
    
    // QSPI Sinyalleri
    wire sclk_o;
    wire cs_n; // cs_ olarak tanımlamışsın, cs_n (active low) olarak düzeltelim
    wire qspi_io_0; // MOSI (Data 0)
    wire qspi_io_1; // MISO (Data 1)
    wire qspi_io_2; // Data 2 (WP/Hold vb.)
    wire qspi_io_3; // Data 3
    pullup(qspi_io_0);
    pullup(qspi_io_1);
    pullup(qspi_io_2);
    pullup(qspi_io_3);
    
    // İşlemci ve Çevre Birimlerini İçeren Top Modül
    top dut_top (
        .clk_i(clk_i),
        .rst_n_i(rst_n_i),
        .fetch_enable(fetch_enable),
        .uart_rx_i(uart_rx_i),
        .uart_tx_o(uart_tx_o),
        .gpio_o(gpio_o),
        .gpio_i(gpio_i),
        .sclk_o(sclk_o),
        .cs_o(cs_n),
        .qspi_io_0(qspi_io_0),
        .qspi_io_1(qspi_io_1),
        .qspi_io_2(qspi_io_2),
        .qspi_io_3(qspi_io_3)
    );

    // ---------------------------------------------------------
    // UART TERMİNAL AJANI BAĞLANTISI (921600 Baud)
    // ---------------------------------------------------------
    simulated_uart_rx #(
        .BIT_PERIOD_NS(1085) // 1 saniye / 921600 baud = ~1085 ns
    ) terminal_ajan (
        .rx_i(uart_tx_o) // İşlemciden çıkan TX'i ajanın RX girişine bağlıyoruz
    );

    // Micron Flash Simülasyon Modülü Bağlantısı
    // Not: N25Qxxx portları versiyona göre değişebilir. 
    // Yüklediğin koddaki 'HOLD_pin' veya 'RESET_pin' tanımlarına göre portlar şekilleniyor.
    // Standart SPI Quad modu için genelde aşağıdaki gibidir:
    
    integer vcc = 3000; // VCC sinyali (modelin internal logic'i için gerekebilir)
    
    N25Qxxx flash_mem (
        .S(cs_n),           // Chip Select
        .C_(sclk_o),        // Clock (C_ veya C olarak tanımlı olabilir modelde)
        .HOLD_DQ3(qspi_io_3), // DQ3 / HOLD
        .DQ0(qspi_io_0),    // DQ0 / MOSI
        .DQ1(qspi_io_1),    // DQ1 / MISO
        .Vcc(vcc),
        .Vpp_W_DQ2(qspi_io_2) // DQ2 / VPP/WP
        // .RESET2(...) // Eğer model RESET_pin veya Feature_8 tanımıyla derlendiyse bu port da gerekebilir.
    );

    // Clock Üretimi (100 MHz)
    initial begin
        clk_i = 0;
        forever #5 clk_i = ~clk_i; 
    end

    // Reset ve Başlangıç
    initial begin
        rst_n_i = 0;
        rst_n_i = 0;
        fetch_enable = 0;
        uart_rx_i = 1;
        
        #200; // Sistemin oturması için bekle
        rst_n_i = 0;
        #200;
        rst_n_i = 1;
        fetch_enable = 1; // İşlemci çalışmaya başlasın
        
        // Simülasyon süresi
        #500000000;
        $display("Simulasyon bitti.");
        $finish;
    end

endmodule

// ----------------------------------------------------------------------------
// SİMÜLASYON UART TERMİNAL AJANI (921600 Baud'a göre ayarlandı)
// ----------------------------------------------------------------------------
module simulated_uart_rx #(
    parameter integer BIT_PERIOD_NS = 1085
)(
    input wire rx_i
);

    reg [7:0] rx_data;
    integer i;

    initial begin
        $display("[UART AJANI] Terminal dinleniyor... (921600 Baud)");
        forever begin
            // 1. START BİTİNİ BEKLE (Yüksekten düşüğe geçiş)
            @(negedge rx_i);
            
            // 2. Start bitinin ortasına kadar bekle (Doğru örnekleme için)
            #(BIT_PERIOD_NS / 2);

            // 3. 8 DATA BİTİNİ OKU (LSB Önce)
            rx_data = 8'b0;
            for (i=0; i<8; i=i+1) begin
                #(BIT_PERIOD_NS); // Bir sonraki bitin ortasına git
                rx_data[i] = rx_i; // Biti örnekle
            end

            // 4. STOP BİTİNİ BEKLE (Hat tekrar 1 olmalı)
            #(BIT_PERIOD_NS);
            if (rx_i == 1'b1) begin
                // VERİ BAŞARIYLA ALINDI! ASCII'ye çevir ve Terminale Bas
                $write("%c", rx_data); // Alt satıra geçmeden yan yana yazdırır
            end else begin
                $display("\n[UART HATA] Frame hatası (Stop biti okunamadı). Gelen bozuk veri: %h", rx_data);
            end
        end
    end
endmodule
