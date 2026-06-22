`timescale 1ns / 1ps

module tb_top();

    // Sinyaller
    logic clk_i;
    logic rst_n_i;
    logic fetch_enable;
    
    // Uart sinyalleri
    logic uart_rx_i;
    logic uart_tx_o;
    
    //gpio sinyalleri
    wire [15:0] gpio_o;
    wire [15:0] gpio_i;
    assign gpio_i=16'hadef;
    
    //I2C sinyalleri
    wire scl_o;
    wire sda_io;
    
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
        .scl_o(scl_o),
        .sda_io(sda_io),
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


    pullup(sda_io);
   
    
    // =====================================================================
    // 2. GOLDEN SLAVE AXI-STREAM KONTROL SİNYALLERİ
    // =====================================================================
    logic [7:0] slave_tx_data  = 8'hAA; // Master okuma yaparsa (READ), slave bu veriyi göndersin
    logic       slave_tx_valid = 1'b1;  // Slave göndermeye her zaman hazır
    logic       slave_tx_ready;
    
    logic [7:0] slave_rx_data;          // Master'dan gelen veri buraya düşecek
    logic       slave_rx_valid;
    logic       slave_rx_ready = 1'b1;  // Slave veri almaya her zaman hazır
    
    wire slave_sda_o;
    wire slave_sda_t;
    
    // Slave'in kendi inout SDA pinini tristate mantığıyla sda_net'e bağlıyoruz
    assign sda_io = slave_sda_t ? 1'bz : slave_sda_o;
    
    // =====================================================================
    // 3. GOLDEN SLAVE INSTANTIATION
    // =====================================================================
    i2c_slave #(
        .FILTER_LEN(4)
    ) golden_slave_inst (
        .clk(clk_i),
        .rst(!rst_n_i), // Slave modülü active-high reset kullanır, invert ediyoruz
    
        // --- Konfigürasyon ---
        .enable(1'b1),
        .device_address(7'h01),      // C kodunda (i2c_WRITE(3, 0x01..)) kullandığın adres!
        .device_address_mask(7'h7F), // Tam eşleşme istiyoruz
    
        // --- I2C Arayüzü ---
        .scl_i(scl_o), // Master'ın ürettiği SCL'yi dinliyor
        .scl_o(),        // BOŞ BIRAK: Senin master'da clock stretching yok (scl_o sadece output)
        .scl_t(),        // BOŞ BIRAK: Çakışmayı önlüyoruz
        .sda_i(sda_io), // Hattan veriyi okur
        .sda_o(slave_sda_o), // Hatta veri (veya ACK) basmak istediğinde
        .sda_t(slave_sda_t), // Tri-state kontrolü
    
        // --- AXI Stream TX (Slave'den -> Master'a) ---
        // Eğer C kodunda i2c_READ yaparsan, bu veri gidecek
        .s_axis_data_tdata(slave_tx_data),
        .s_axis_data_tvalid(slave_tx_valid),
        .s_axis_data_tready(slave_tx_ready),
        .s_axis_data_tlast(1'b0),
    
        // --- AXI Stream RX (Master'dan -> Slave'e) ---
        // Eğer C kodunda i2c_WRITE yaparsan, Master'ın gönderdiği baytlar buraya dökülür
        .m_axis_data_tdata(slave_rx_data),
        .m_axis_data_tvalid(slave_rx_valid),
        .m_axis_data_tready(slave_rx_ready),
        .m_axis_data_tlast(),
    
        // --- Durum Sinyalleri (İsteğe bağlı) ---
        .busy(),
        .bus_address(),
        .bus_addressed(),
        .bus_active(),
        .release_bus(1'b0)
    );
    
    // =====================================================================
    // 4. TESTBENCH EKRAN MONİTÖRÜ (DEBUG)
    // =====================================================================
    // Master'ın gönderdiği her veri baytını terminalde gösterir:
    always @(posedge clk_i) begin
        if (slave_rx_valid && slave_rx_ready) begin
            $display("[I2C GOLDEN SLAVE] Master'dan Veri Geldi! Deger: 0x%02X", slave_rx_data);
        end
    end
endmodule

// ----------------------------------------------------------------------------
// SİMÜLASYON UART TERMİNAL AJANI (Zaman Damgalı)
// ----------------------------------------------------------------------------
module simulated_uart_rx #(
    parameter integer BIT_PERIOD_NS = 1085
)(
    input wire rx_i
);

    reg [7:0] rx_data;
    integer i;
    logic is_new_line = 1'b1; // Zaman damgasını sadece satır başlarında basmak için

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
                #(BIT_PERIOD_NS);  // Bir sonraki bitin ortasına git
                rx_data[i] = rx_i; // Biti örnekle
            end

            // 4. STOP BİTİNİ BEKLE (Hat tekrar 1 olmalı)
            #(BIT_PERIOD_NS);
            if (rx_i == 1'b1) begin
                // VERİ BAŞARIYLA ALINDI!
                
                // Eğer yeni bir satırın ilk karakteriyse ve boşluk/enter değilse zamanı bas
                if (is_new_line && (rx_data != 8'h0D) && (rx_data != 8'h0A)) begin
                    $write("[%0t ns] ", $time); // Şimdiki simülasyon zamanını yazdır
                    is_new_line = 1'b0;         // Bayrağı indir ki harf harf zaman basmasın
                end

                // Karakteri ekrana bas
                $write("%c", rx_data); 

                // Eğer gelen karakter '\n' (Line Feed - 0x0A) ise, bir sonraki harf için bayrağı kaldır
                if (rx_data == 8'h0A) begin 
                    is_new_line = 1'b1;
                end

            end else begin
                $display("\n[%0t ns] [UART HATA] Frame hatasi (Stop biti okunamadi). Gelen: %h", $time, rx_data);
            end
        end
    end
endmodule

