`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/06/2026 05:59:54 PM
// Design Name: 
// Module Name: qspi_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module qspi_tb();
    
    logic clk;
    logic rst_n;
    logic [7:0] instr;
    logic [1:0] data_mode;
    logic [4:0] dummy_cycle_count;
    logic [7:0] data_width;
    logic [5:0] prescaler;
    logic clear_status;
    logic [31:0] addr;
    logic addr_is_32_bit;
    logic start_req;
    
    logic [31:0] tx_data_i;
    logic [31:0] rx_data_o;
    logic tx_fifo_rd_en;
    logic rx_fifo_wr_en;
    logic tx_fifo_empty;
    logic tx_fifo_full;
    logic rx_fifo_empty;
    logic rx_fifo_full;

    logic [11:0] status;


    logic qspi_sclk;
    logic qspi_cs;
    logic [3:0] qspi_data_o; 
    logic [3:0] qspi_data_i;
    logic [3:0] qspi_data_oe;
    
    localparam data_width_in_bits=31;
    logic [data_width_in_bits:0] data_out;
    logic [4:0] data_counter=0;
    
    logic [31:0] addr_out=0;
    logic [4:0] addr_counter=0;
    logic [31:0] expected_address=0;
    
    logic [7:0] cmd_out=0;
    logic [4:0] cmd_counter=0;
    logic [7:0] expected_command=0;
    localparam read_test_value= 32'hFADEEDAF;
    localparam write_test_value= 32'hABCDABCD;
    
    logic [4:0] dummy_cycle_count_result=0;
    
    always #5 clk = ~clk;
    
    qspi dut(
    .clk(clk),
    .rst_n(rst_n),
    .instr(instr),
    .data_mode(data_mode),
    .dummy_cycle_count(dummy_cycle_count),
    .data_width(data_width),
    .prescaler(prescaler),
    .clear_status(clear_status),
    .addr(addr),
    .addr_is_32_bit(addr_is_32_bit),
    .start_req(start_req),
    .tx_data_i(tx_data_i),
    .rx_data_o(rx_data_o),
    .tx_fifo_rd_en(tx_fifo_rd_en),
    .rx_fifo_wr_en(rx_fifo_wr_en),
    .tx_fifo_empty(tx_fifo_empty),
    .tx_fifo_full(tx_fifo_full),
    .rx_fifo_empty(rx_fifo_empty),
    .rx_fifo_full(rx_fifo_full),
    .status(status),
    .qspi_sclk(qspi_sclk),
    .qspi_cs(qspi_cs),
    .qspi_data_o(qspi_data_o),
    .qspi_data_i(qspi_data_i),
    .qspi_data_oe(qspi_data_oe)
    );
    
    initial begin
        clk=0;
        qspi_data_i = 4'b0000;
        addr_is_32_bit=0;
        rst_n=1;
        #10;
        rst_n=0;
        #20;
        rst_n=1;
        
        start_req=1;
        
        //prescalar test
        prescaler=0;
        #50;
        prescaler=1;
        #50
        prescaler=6;
        start_req=0;
        
        #10;
        rst_n=0;
        #10;
        rst_n=1;
        
        
        // ==========================================
        // READ TEST SENARYOSU (Single SPI - 0x03)
        // ==========================================
        expected_command = 8'h03;
        expected_address = 32'd6;
        
        instr = expected_command;
        addr  = expected_address;
        dummy_cycle_count = 0;
        data_width = 3;      // 4 bayt (32-bit) okuma
        data_mode = 2'b01;   // Single Mode
        
        clear_status = 0;
        
        // Okuma için RX FIFO'nun dolu OLMAMASI gerekir
        rx_fifo_full = 0;  
        rx_fifo_empty = 1; // Başlangıçta FIFO boş
        
        // Önceki işlemlerden kalan izleri temizleyelim
        cmd_out = 8'd0;
        addr_out = 32'd0;
        
        #20;
        start_req = 1;
        #20;
        start_req = 0;

        wait(status[0] == 1); // Modülün DONE durumuna geçmesini bekle
        #10; // Verilerin rx_data_o register'ına tam oturması için ufak bir bekleme
        
        $display("\n==================================================");
        $display("              READ TEST SONUCLARI(Single Mod)       ");
        $display("==================================================");
        
        if (cmd_out === expected_command && addr_out === expected_address && rx_data_o === read_test_value) begin
            $display(">> BASARILI: Okuma islemi tamamen dogru gerceklesti!");
            $display("   Komut : Beklenen: %h        | Gelen: %h",expected_command, cmd_out);
            $display("   Adres : Beklenen: %08x   | Gelen: %08x", expected_address, addr_out);
            $display("   Veri  : Beklenen: %h | Gelen: %h", read_test_value,rx_data_o);
        end 
        else begin
            $display(">> HATA: Okuma isleminde uyusmazlik var!");
            if (cmd_out !== expected_command) 
                $display("   [X] Komut Hatali! Beklenen: %h, Gelen: %h", expected_command, cmd_out);
            if (addr_out !== expected_address) 
                $display("   [X] Adres Hatali! Beklenen: %08x, Gelen: %08x", expected_address, addr_out);
            if (rx_data_o !== read_test_value) 
                $display("   [X] Veri Hatali!  Beklenen: %h, Gelen: %h",read_test_value, rx_data_o);
        end
        $display("==================================================\n");
        
        // Testin bir sonraki aşaması (PP testi vs.) için reset atıp ortamı hazırlayalım
        #20;
        rst_n = 0;
        #20;
        rst_n = 1;
        #20;
        
        // ==========================================
        // READ TEST SENARYOSU (Dual SPI - 0x03)
        // ==========================================
        expected_command = 8'h03;
        expected_address = 32'd6;
        
        instr = expected_command;
        addr  = expected_address;
        dummy_cycle_count = 0;
        data_width = 3;      // 4 bayt (32-bit) okuma
        data_mode = 2'b10;   // Dual Mode
        
        clear_status = 0;
        
        // Okuma için RX FIFO'nun dolu OLMAMASI gerekir
        rx_fifo_full = 0;  
        rx_fifo_empty = 1; // Başlangıçta FIFO boş
        
        // Önceki işlemlerden kalan izleri temizleyelim
        cmd_out = 8'd0;
        addr_out = 32'd0;
        
        #20;
        start_req = 1;
        #20;
        start_req = 0;

        wait(status[0] == 1); // Modülün DONE durumuna geçmesini bekle
        #10; // Verilerin rx_data_o register'ına tam oturması için ufak bir bekleme
        
        $display("\n==================================================");
        $display("              READ TEST SONUCLARI(Dual Mode)        ");
        $display("==================================================");
        
        if (cmd_out === expected_command && addr_out === expected_address && rx_data_o === read_test_value) begin
            $display(">> BASARILI: Okuma islemi tamamen dogru gerceklesti!");
            $display("   Komut : Beklenen: %h        | Gelen: %h",expected_command, cmd_out);
            $display("   Adres : Beklenen: %08x   | Gelen: %08x", expected_address, addr_out);
            $display("   Veri  : Beklenen: %h | Gelen: %h", read_test_value,rx_data_o);
        end 
        else begin
            $display(">> HATA: Okuma isleminde uyusmazlik var!");
            if (cmd_out !== expected_command) 
                $display("   [X] Komut Hatali! Beklenen: %h, Gelen: %h", expected_command, cmd_out);
            if (addr_out !== expected_address) 
                $display("   [X] Adres Hatali! Beklenen: %08x, Gelen: %08x", expected_address, addr_out);
            if (rx_data_o !== read_test_value) 
                $display("   [X] Veri Hatali!  Beklenen: %h, Gelen: %h",read_test_value, rx_data_o);
        end
        $display("==================================================\n");
        
        // Testin bir sonraki aşaması için reset
        #20;
        rst_n = 0;
        #20;
        rst_n = 1;
        #20;
        
        // ==========================================
        // READ TEST SENARYOSU (Quad SPI - 0x03)
        // ==========================================
        expected_command = 8'h03;
        expected_address = 32'd6;
        
        instr = expected_command;
        addr  = expected_address;
        dummy_cycle_count = 0;
        data_width = 3;      // 4 bayt (32-bit) okuma
        data_mode = 2'b11;   // Quad Mode
        
        clear_status = 0;
        
        // Okuma için RX FIFO'nun dolu OLMAMASI gerekir
        rx_fifo_full = 0;  
        rx_fifo_empty = 1; // Başlangıçta FIFO boş
        
        // Önceki işlemlerden kalan izleri temizleyelim
        cmd_out = 8'd0;
        addr_out = 32'd0;
        
        #20;
        start_req = 1;
        #20;
        start_req = 0;

        wait(status[0] == 1); // Modülün DONE durumuna geçmesini bekle
        #10; // Verilerin rx_data_o register'ına tam oturması için ufak bir bekleme
        
        $display("\n==================================================");
        $display("              READ TEST SONUCLARI(Quad Mode)        ");
        $display("==================================================");
        
        if (cmd_out === expected_command && addr_out === expected_address && rx_data_o === read_test_value) begin
            $display(">> BASARILI: Okuma islemi tamamen dogru gerceklesti!");
            $display("   Komut : Beklenen: %h        | Gelen: %h",expected_command, cmd_out);
            $display("   Adres : Beklenen: %08x   | Gelen: %08x", expected_address, addr_out);
            $display("   Veri  : Beklenen: %h | Gelen: %h", read_test_value,rx_data_o);
        end 
        else begin
            $display(">> HATA: Okuma isleminde uyusmazlik var!");
            if (cmd_out !== expected_command) 
                $display("   [X] Komut Hatali! Beklenen: %h, Gelen: %h", expected_command, cmd_out);
            if (addr_out !== expected_address) 
                $display("   [X] Adres Hatali! Beklenen: %08x, Gelen: %08x", expected_address, addr_out);
            if (rx_data_o !== read_test_value) 
                $display("   [X] Veri Hatali!  Beklenen: %h, Gelen: %h",read_test_value, rx_data_o);
        end
        $display("==================================================\n");
        
        // Testin bir sonraki aşaması için reset
        #20;
        rst_n = 0;
        #20;
        rst_n = 1;
        #20;
        
        // ==========================================
        // PP (PAGE PROGRAM) TEST SENARYOSU Single mode
        // ==========================================
        expected_command = 8'h02;
        expected_address = 32'd7;
        
        instr = expected_command;
        addr  = expected_address;
        data_mode = 2'b01;
        
        
        tx_fifo_full  = 0;
        tx_fifo_empty = 0; // FIFO'da veri var (Sonsuz döngüyü engeller)
        tx_data_i     = write_test_value; // Göndermek istediğimiz veri
        
        // Önceki testlerden kalan değerleri temizleyelim
        data_out = 32'd0;
        cmd_out  = 8'd0;
        addr_out = 32'd0;
        
        #20;
        start_req = 1;
        #20;
        start_req = 0;
        
        wait(status[0] == 1); // Modülün DONE durumuna geçmesini bekle
        #10; // Verilerin data_out gibi registerlara tam yazılması için ufak bir bekleme
        
        $display("\n==================================================");
        $display("               PP TEST SONUCLARI(Single Mode)       ");
        $display("==================================================");
        
        if (cmd_out === expected_command && addr_out === expected_address && data_out === write_test_value) begin
            $display(">> BASARILI: Tum degerler dogru iletildi!");
            $display("   Komut : Beklenen: %h        | Gelen: %h",expected_command, cmd_out);
            $display("   Adres : Beklenen: %08x   | Gelen: %08x", expected_address, addr_out);
            $display("   Veri  : Beklenen: %h | Gelen: %h",write_test_value, data_out);
        end 
        else begin
            $display(">> HATA: İletilen degerlerde uyusmazlik var!");
            if (cmd_out !== expected_command) 
                $display("   [X] Komut Hatali! Beklenen: %h, Gelen: %h", expected_command, cmd_out);
            if (addr_out !== expected_address) 
                $display("   [X] Adres Hatali! Beklenen: %08x, Gelen: %08x", expected_address, addr_out);
            if (data_out !== write_test_value) 
                $display("   [X] Veri Hatali!  Beklenen: %h, Gelen: %h", write_test_value,data_out);
        end
        $display("==================================================\n");
        
        // Testin bir sonraki aşaması için reset
        #20;
        rst_n = 0;
        #20;
        rst_n = 1;
        
        // ==========================================
        // PP (PAGE PROGRAM) TEST SENARYOSU Dual Mode
        // ==========================================
        expected_command = 8'h02;
        expected_address = 32'd7;
        
        instr = expected_command;
        addr  = expected_address;
        data_mode = 2'b10;
        
        
        tx_fifo_full  = 0;
        tx_fifo_empty = 0; // FIFO'da veri var (Sonsuz döngüyü engeller)
        tx_data_i     = write_test_value; // Göndermek istediğimiz veri
        
        // Önceki testlerden kalan değerleri temizleyelim
        data_out = 32'd0;
        cmd_out  = 8'd0;
        addr_out = 32'd0;
        
        #20;
        start_req = 1;
        #20;
        start_req = 0;
        
        wait(status[0] == 1); // Modülün DONE durumuna geçmesini bekle
        #10; // Verilerin data_out gibi registerlara tam yazılması için ufak bir bekleme
        
        $display("\n==================================================");
        $display("               PP TEST SONUCLARI(Dual Mode)         ");
        $display("==================================================");
        
        if (cmd_out === expected_command && addr_out === expected_address && data_out === write_test_value) begin
            $display(">> BASARILI: Tum degerler dogru iletildi!");
            $display("   Komut : Beklenen: %h        | Gelen: %h",expected_command, cmd_out);
            $display("   Adres : Beklenen: %08x   | Gelen: %08x", expected_address, addr_out);
            $display("   Veri  : Beklenen: %h | Gelen: %h",write_test_value, data_out);
        end 
        else begin
            $display(">> HATA: İletilen degerlerde uyusmazlik var!");
            if (cmd_out !== expected_command) 
                $display("   [X] Komut Hatali! Beklenen: %h, Gelen: %h", expected_command, cmd_out);
            if (addr_out !== expected_address) 
                $display("   [X] Adres Hatali! Beklenen: %08x, Gelen: %08x", expected_address, addr_out);
            if (data_out !== write_test_value) 
                $display("   [X] Veri Hatali!  Beklenen: %h, Gelen: %h", write_test_value,data_out);
        end
        $display("==================================================\n");
        
        // Testin bir sonraki aşaması için reset
        #20;
        rst_n = 0;
        #20;
        rst_n = 1;
        
        // ==========================================
        // PP (PAGE PROGRAM) TEST SENARYOSU Quad Mode
        // ==========================================
        expected_command = 8'h02;
        expected_address = 32'd7;
        
        instr = expected_command;
        addr  = expected_address;
        data_mode = 2'b11;
        
        
        tx_fifo_full  = 0;
        tx_fifo_empty = 0; // FIFO'da veri var (Sonsuz döngüyü engeller)
        tx_data_i     = write_test_value; // Göndermek istediğimiz veri
        
        // Önceki testlerden kalan değerleri temizleyelim
        data_out = 32'd0;
        cmd_out  = 8'd0;
        addr_out = 32'd0;
        
        #20;
        start_req = 1;
        #20;
        start_req = 0;
        
        wait(status[0] == 1); // Modülün DONE durumuna geçmesini bekle
        #10; // Verilerin data_out gibi registerlara tam yazılması için ufak bir bekleme
        
        $display("\n==================================================");
        $display("               PP TEST SONUCLARI(Quad Mode)         ");
        $display("==================================================");
        
        if (cmd_out === expected_command && addr_out === expected_address && data_out === write_test_value) begin
            $display(">> BASARILI: Tum degerler dogru iletildi!");
            $display("   Komut : Beklenen: %h        | Gelen: %h",expected_command, cmd_out);
            $display("   Adres : Beklenen: %08x   | Gelen: %08x", expected_address, addr_out);
            $display("   Veri  : Beklenen: %h | Gelen: %h",write_test_value, data_out);
        end 
        else begin
            $display(">> HATA: İletilen degerlerde uyusmazlik var!");
            if (cmd_out !== expected_command) 
                $display("   [X] Komut Hatali! Beklenen: %h, Gelen: %h", expected_command, cmd_out);
            if (addr_out !== expected_address) 
                $display("   [X] Adres Hatali! Beklenen: %08x, Gelen: %08x", expected_address, addr_out);
            if (data_out !== write_test_value) 
                $display("   [X] Veri Hatali!  Beklenen: %h, Gelen: %h", write_test_value,data_out);
        end
        $display("==================================================\n");
        
        // Testin bir sonraki aşaması için reset
        #20;
        rst_n = 0;
        #20;
        rst_n = 1;
        
        // ==========================================
        // DUMMY CYCLE TEST SENARYOSU (DOR - Dual Mode)
        // ==========================================
        expected_command = 8'h3B;
        expected_address = 32'd23;
        
        instr = expected_command;
        addr  = expected_address;
        data_mode = 2'b10;
        
        
        rx_fifo_full  = 0;
        rx_fifo_empty = 0; 
        dummy_cycle_count = 8;
        
        // Önceki testlerden kalan değerleri temizleyelim
        data_out = 32'd0;
        cmd_out  = 8'd0;
        addr_out = 32'd0;
        
        
        #20;
        start_req = 1;
        #20;
        start_req = 0;
        
        wait(status[0]==1); // Modülün DONE durumuna geçmesini bekle
        #10; // Verilerin data_out gibi registerlara tam yazılması için ufak bir bekleme
        
        $display("\n==================================================");
        $display("       DOR TEST SONUCLARI(Dual Mode) (Dummy Cycle)");
        $display("==================================================");
        
        // IF ile Beklenen (Expected) ve Gerçekleşen (Actual) karşılaştırması
        if (cmd_out === expected_command && addr_out === expected_address && rx_data_o === read_test_value && dummy_cycle_count_result === dummy_cycle_count) begin
            $display(">> BASARILI: Tum degerler dogru okundu ve doğru sayıda dummy cycle geçti!");
            $display("   Komut : Beklenen: %h        | Gelen: %h",expected_command, cmd_out);
            $display("   Adres : Beklenen: %08x   | Gelen: %08x", expected_address, addr_out);
            $display("   Veri  : Beklenen: %h | Gelen: %h",read_test_value, rx_data_o);
            $display("   Dummy Cycle Sayisi: Beklenen: %h | Gelen: %h ",dummy_cycle_count,dummy_cycle_count_result);
        end 
        else begin
            $display(">> HATA: İletilen degerlerde uyusmazlik var!");
            if (cmd_out !== expected_command) 
                $display("   [X] Komut Hatali! Beklenen: %h, Gelen: %h", expected_command, cmd_out);
            if (addr_out !== expected_address) 
                $display("   [X] Adres Hatali! Beklenen: %08x, Gelen: %08x", expected_address, addr_out);
            if (rx_data_o !== read_test_value) 
                $display("   [X] Veri Hatali!  Beklenen: %h, Gelen: %h", read_test_value, rx_data_o);
            if (dummy_cycle_count_result !== dummy_cycle_count)
                $display("   [X] Dummy Hatali!  Beklenen: %h, Gelen: %h", dummy_cycle_count, dummy_cycle_count_result);
        end
        $display("==================================================\n");

    $finish;
    
    end
    
    // --- SAHTE FLASH ÇİPİ (MOCK FLASH) ---
    logic [31:0] mock_flash_data = read_test_value; // Flash'tan okumayı beklediğimiz sahte veri
    integer bit_idx = 31;
    
    
    //cmd result
    always @(posedge qspi_sclk)begin 
        if(!qspi_cs)begin 
            if(dut.current_state==3'd1)begin 
                if(data_mode==2'b01)begin   
                    cmd_out[7-cmd_counter]<=qspi_data_o[0];                 
                end
                else if(data_mode==2'b10)begin 
                    cmd_out[7-2*(cmd_counter)]<=qspi_data_o[1];
                    cmd_out[7-2*(cmd_counter)-1]<=qspi_data_o[0];
                end
                else if(data_mode==2'b11)begin 
                    cmd_out[7-4*(cmd_counter)]<=qspi_data_o[3];
                    cmd_out[7-4*(cmd_counter)-1]<=qspi_data_o[2];
                    cmd_out[7-4*(cmd_counter)-2]<=qspi_data_o[1];
                    cmd_out[7-4*(cmd_counter)-3]<=qspi_data_o[0];
                end
                cmd_counter<=cmd_counter+1;
            end
        end
    end
    
    logic [5:0] addr_count;
    assign addr_count=(addr_is_32_bit)?6'd32:6'd24;
    
    //address result
    always @(posedge qspi_sclk)begin 
        if(!qspi_cs)begin 
            if(dut.current_state==3'd2)begin 
                if(data_mode==2'b01)begin 
                    addr_out[addr_count-addr_counter-1]<=qspi_data_o[0];                 
                end
                else if(data_mode==2'b10)begin 
                    addr_out[addr_count-2*(addr_counter)-1]<=qspi_data_o[1];
                    addr_out[addr_count-2*(addr_counter)-2]<=qspi_data_o[0];
                end
                else if(data_mode==2'b11)begin 
                    addr_out[addr_count-4*(addr_counter)-1]<=qspi_data_o[3];
                    addr_out[addr_count-4*(addr_counter)-2]<=qspi_data_o[2];
                    addr_out[addr_count-4*(addr_counter)-3]<=qspi_data_o[1];
                    addr_out[addr_count-4*(addr_counter)-4]<=qspi_data_o[0];
                end
                addr_counter<=addr_counter+1;
            end
        end
    end
    
    // dummy cycle counter test
    always@(posedge qspi_sclk)begin 
        if(!qspi_cs)begin 
            if(dut.current_state==3'd3)begin 
               dummy_cycle_count_result<=dummy_cycle_count_result+1;
            end
        end
    end
    
    //DataTX
    always @(posedge qspi_sclk)begin 
        if(!qspi_cs)begin 
            if(dut.current_state==3'd4)begin 
                if(data_mode==2'b01)begin 

                    if(instr==dut.QPP)begin 
                        data_out[data_width_in_bits-4*(data_counter)]<=qspi_data_o[3];
                        data_out[data_width_in_bits-4*(data_counter)-1]<=qspi_data_o[2];
                        data_out[data_width_in_bits-4*(data_counter)-2]<=qspi_data_o[1];
                        data_out[data_width_in_bits-4*(data_counter)-3]<=qspi_data_o[0];
                    end
                    else begin 
                        data_out[data_width_in_bits-data_counter]<=qspi_data_o[0];
                    end
                end
                else if(data_mode==2'b10)begin 
                    data_out[data_width_in_bits-2*(data_counter)]<=qspi_data_o[1];
                    data_out[data_width_in_bits-2*(data_counter)-1]<=qspi_data_o[0];
                end
                else if(data_mode==2'b11)begin 
                    data_out[data_width_in_bits-4*(data_counter)]<=qspi_data_o[3];
                    data_out[data_width_in_bits-4*(data_counter)-1]<=qspi_data_o[2];
                    data_out[data_width_in_bits-4*(data_counter)-2]<=qspi_data_o[1];
                    data_out[data_width_in_bits-4*(data_counter)-3]<=qspi_data_o[0];
                end
                data_counter<=data_counter+1;
            end
        end
    end
    
    // =================================================================
    // Gelişmiş Pin Tabanlı Sahte Flash Modeli (Mock Flash BFM)
    // =================================================================
    logic [7:0] start_data_cycle;
    logic [7:0] active_cycle;
    integer sclk_ctr = 0;
    
    // Protokol kurallarına göre verinin başlayacağı standart SCLK çevrimi
    assign start_data_cycle = (data_mode == 2'b01) ? (32 + dummy_cycle_count) :
                              (data_mode == 2'b10) ? (16 + dummy_cycle_count) :
                              (data_mode == 2'b11) ? (8 + dummy_cycle_count)  : 0;

    // Prescaler 0 ise donanımın clock-skipping fazına uymak için +1 çevrim ofset eklenir
    assign active_cycle = start_data_cycle + ((prescaler == 0) ? 1 : 0);
    
    always @(negedge qspi_sclk or posedge qspi_cs) begin
        if (qspi_cs) begin
            bit_idx     = 31; 
            qspi_data_i = 4'b0000;
            sclk_ctr    = 0; // CS kalkınca saat sayacı sıfırlanır
        end
        else begin 
            sclk_ctr = sclk_ctr + 1; // Her düşen kenarda saat sayılır
            
            if (sclk_ctr >= active_cycle) begin
                if(data_mode==2'b01) begin
                    if(instr==dut.QOR)begin 
                        qspi_data_i[3] = mock_flash_data[bit_idx];
                        qspi_data_i[2] = mock_flash_data[bit_idx-1];
                        qspi_data_i[1] = mock_flash_data[bit_idx-2];
                        qspi_data_i[0] = mock_flash_data[bit_idx-3];
                        if (bit_idx >= 3) bit_idx = bit_idx - 4;      
                        else bit_idx = 31;
                    end
                    else if(instr==dut.DOR)begin 
                        qspi_data_i[1] = mock_flash_data[bit_idx];
                        qspi_data_i[0] = mock_flash_data[bit_idx-1];
                        if (bit_idx >= 1) bit_idx = bit_idx - 2;      
                        else bit_idx = 31;
                    end
                    else begin 
                        qspi_data_i[1] = mock_flash_data[bit_idx];
                        if (bit_idx >= 1) bit_idx = bit_idx - 1;
                    end

                end
                else if(data_mode==2'b10) begin 
                    qspi_data_i[1] = mock_flash_data[bit_idx];
                    qspi_data_i[0] = mock_flash_data[bit_idx-1];
                    if (bit_idx >= 1) bit_idx = bit_idx - 2;      
                    else bit_idx = 31;
                end
                else if(data_mode==2'b11) begin 
                    qspi_data_i[3] = mock_flash_data[bit_idx];
                    qspi_data_i[2] = mock_flash_data[bit_idx-1];
                    qspi_data_i[1] = mock_flash_data[bit_idx-2];
                    qspi_data_i[0] = mock_flash_data[bit_idx-3];
                    if (bit_idx >= 3) bit_idx = bit_idx - 4;      
                    else bit_idx = 31;    
                end
            end
        end
    end
    
    always @(posedge qspi_cs) begin
        data_counter <= 0;
        addr_counter<=0;
        cmd_counter<=0;
    end
   
endmodule