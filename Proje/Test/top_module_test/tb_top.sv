`timescale 1ns / 1ps

module tb_top();

    // Sinyaller
    logic clk_i;
    logic rst_n_i;
    logic fetch_enable;
    
    // Uart sinyalleri
    logic uart_rx_i;
    logic uart_tx_o;
    logic uart_stream_rx_i;
    logic uart_stream_tx_o;
    
    //gpio sinyalleri
    wire [15:0] gpio_o;
    wire [15:0] gpio_i;
    assign gpio_i=16'hadef;
    
    //I2C sinyalleri
    wire scl_o;
    wire sda_io;
    
    // QSPI Sinyalleri
    wire sclk_o;
    wire cs_n; 
    wire qspi_io_0; 
    wire qspi_io_1; 
    wire qspi_io_2; 
    wire qspi_io_3; 
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
        .qspi_io_3(qspi_io_3),
        .uart_stream_rx_i(uart_stream_rx_i), 
        .uart_stream_tx_o(uart_stream_tx_o)
    );

    // ---------------------------------------------------------
    // 1. UART TERMİNAL AJANI BAĞLANTISI (921600 Baud)
    // ---------------------------------------------------------
    simulated_uart_rx #(
        .BIT_PERIOD_NS(1085) // 1 saniye / 921600 baud = ~1085 ns
    ) terminal_ajan (
        .rx_i(uart_tx_o) // İşlemciden çıkan TX'i ajanın RX girişine bağlıyoruz
    );

    // ---------------------------------------------------------
    // 2. QSPI FLASH BAĞLANTISI
    // ---------------------------------------------------------
    integer vcc = 3000; 
    
    N25Qxxx flash_mem (
        .S(cs_n),           
        .C_(sclk_o),        
        .HOLD_DQ3(qspi_io_3), 
        .DQ0(qspi_io_0),    
        .DQ1(qspi_io_1),    
        .Vcc(vcc),
        .Vpp_W_DQ2(qspi_io_2) 
    );

    // ---------------------------------------------------------
    // 3. CLOCK VE RESET YÖNETİMİ
    // ---------------------------------------------------------
    initial begin
        clk_i = 0;
        forever #5 clk_i = ~clk_i; 
    end

    initial begin
        rst_n_i = 0;
        fetch_enable = 0;
        uart_rx_i = 1;
        uart_stream_rx_i = 1; // Başlangıçta UART hattı IDLE (High) olmalı
        
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

    // ---------------------------------------------------------
    // 4. BİLGİSAYARI (PC) TAKLİT EDEN VERİ ENJEKTÖRÜ (YENİ)
    // ---------------------------------------------------------
    integer file_handle;
    integer scan_status;
    logic [7:0] audio_byte;

    // 1 Baytlık veriyi 921600 baud rate ile seri pinden içeri üfleyen Task
    task send_stream_byte(input logic [7:0] data);
        begin
            // 1. Start Bit (Lojik 0)
            uart_stream_rx_i = 1'b0;
            #(1085);
            
            // 2. Data Bits (8-bit, LSB First)
            for (int j = 0; j < 8; j++) begin
                uart_stream_rx_i = data[j];
                #(1085);
            end
            
            // 3. Stop Bit (Lojik 1)
            uart_stream_rx_i = 1'b1;
            #(1085);
        end
    endtask
    integer tb_byte_count = 0;
    initial begin
        // Reset kalkmasını bekle
        wait (rst_n_i == 1'b1);
        
        // Çekirdeğin init işlemlerini bitirmesi için GPIO-15'in 1 olmasını bekle
        wait (gpio_o[15] == 1'b1); 
        
        $display("[TB] İşlemci hazır, veri akışına başlanıyor.");
        file_handle = $fopen("audio_input.mem", "r");
        if (file_handle == 0) begin
            $display("[TB UYARI] audio_input.hex dosyasi bulunamadi! Veri gonderimi yapilmayacak.");
        end else begin
            $display("[TB] Bilgisayardan (PC) Inference ses verisi gonderilmeye basliyor...");
            
            while (!$feof(file_handle) && tb_byte_count < 1960) begin // <--- LİMİT EKLENDİ
                scan_status = $fscanf(file_handle, "%h\n", audio_byte);
                if (scan_status == 1) begin
                    send_stream_byte(audio_byte);
                    tb_byte_count = tb_byte_count + 1;
                end
            end
            $display("[TB] Tum Inference verisi basariyla AXI-Stream uzerinden gonderildi.");
            
            $fclose(file_handle);
            $display("[TB] Tum Inference verisi basariyla AXI-Stream uzerinden gonderildi.");
        end
    end

    // ---------------------------------------------------------
    // 5. I2C GOLDEN SLAVE SIMÜLASYONU
    // ---------------------------------------------------------
    pullup(sda_io);
    
    logic [7:0] slave_tx_data  = 8'hAA; 
    logic       slave_tx_valid = 1'b1;  
    logic       slave_tx_ready;
    
    logic [7:0] slave_rx_data;          
    logic       slave_rx_valid;
    logic       slave_rx_ready = 1'b1;  
    
    wire slave_sda_o;
    wire slave_sda_t;
    
    assign sda_io = slave_sda_t ? 1'bz : slave_sda_o;
    
    i2c_slave #(
        .FILTER_LEN(4)
    ) golden_slave_inst (
        .clk(clk_i),
        .rst(!rst_n_i), 
    
        .enable(1'b1),
        .device_address(7'h01),      
        .device_address_mask(7'h7F), 
    
        .scl_i(scl_o), 
        .scl_o(),        
        .scl_t(),        
        .sda_i(sda_io), 
        .sda_o(slave_sda_o), 
        .sda_t(slave_sda_t), 
    
        .s_axis_data_tdata(slave_tx_data),
        .s_axis_data_tvalid(slave_tx_valid),
        .s_axis_data_tready(slave_tx_ready),
        .s_axis_data_tlast(1'b0),
    
        .m_axis_data_tdata(slave_rx_data),
        .m_axis_data_tvalid(slave_rx_valid),
        .m_axis_data_tready(slave_rx_ready),
        .m_axis_data_tlast(),
    
        .busy(),
        .bus_address(),
        .bus_addressed(),
        .bus_active(),
        .release_bus(1'b0)
    );
    
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
    logic is_new_line = 1'b1; 

    initial begin
        $display("[UART AJANI] Terminal dinleniyor... (921600 Baud)");
        forever begin
            @(negedge rx_i);
            #(BIT_PERIOD_NS / 2);

            rx_data = 8'b0;
            for (i=0; i<8; i=i+1) begin
                #(BIT_PERIOD_NS);  
                rx_data[i] = rx_i; 
            end

            #(BIT_PERIOD_NS);
            if (rx_i == 1'b1) begin
                if (is_new_line && (rx_data != 8'h0D) && (rx_data != 8'h0A)) begin
                    $write("[%0t ns] ", $time); 
                    is_new_line = 1'b0;         
                end

                $write("%c", rx_data); 

                if (rx_data == 8'h0A) begin 
                    is_new_line = 1'b1;
                end
            end else begin
                $display("\n[%0t ns] [UART HATA] Frame hatasi (Stop biti okunamadi). Gelen: %h", $time, rx_data);
            end
        end
    end
endmodule