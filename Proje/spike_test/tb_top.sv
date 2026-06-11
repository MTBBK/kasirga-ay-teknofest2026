`timescale 1ns / 1ps

module tb_top;

    // --- Saat ve Reset Sinyalleri ---
    logic clk_i;
    logic rst_ni;

    // --- Arayüz Sinyalleri ---
    logic        instr_req, instr_gnt, instr_rvalid;
    logic [31:0] instr_addr, instr_rdata;
    logic        data_req, data_gnt, data_rvalid, data_we;
    logic [3:0]  data_be;
    logic [31:0] data_addr, data_wdata, data_rdata;

    // Saat Üretimi (50 MHz = 20ns)
    initial begin
        clk_i = 0;
        forever #10 clk_i = ~clk_i;
    end

    // Reset ve Kontrol Bloğu
    initial begin
        rst_ni = 0;
        #45; 
        rst_ni = 1; 
        
        // Süreyi 100us yapıyoruz (Tüm döngülerin ve bellek yazmalarının bitmesi için)
        #100000; 
        $display("Simulasyon suresi doldu. Test bitiriliyor...");
        $finish;
    end

    // --- RAM Modülü ---
    cv32e40p_sim_ram #(
        .RAM_SIZE_BYTES(65536),
        .INIT_FILE("test.hex")
    ) u_ram (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .instr_req_i(instr_req), .instr_gnt_o(instr_gnt), .instr_addr_i(instr_addr),
        .instr_rvalid_o(instr_rvalid), .instr_rdata_o(instr_rdata),
        .data_req_i(data_req), .data_gnt_o(data_gnt), .data_we_i(data_we),
        .data_be_i(data_be), .data_addr_i(data_addr), .data_wdata_i(data_wdata),
        .data_rvalid_o(data_rvalid), .data_rdata_o(data_rdata)
    );

    // --- CV32E40P Çekirdeği ---
    cv32e40p_core #(
        .COREV_PULP(0), // Standart RISC-V modu (Derleme flaglerinle uyumlu)
        .FPU(1)
    ) u_core (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .boot_addr_i(32'h00000000), .mtvec_addr_i(32'h00000000),
        .dm_halt_addr_i(32'h00000000), .hart_id_i(32'h0),
        .dm_exception_addr_i(32'h00000000), .fetch_enable_i(1'b1),
        .irq_i(32'b0), .debug_req_i(1'b0),
        .instr_req_o(instr_req), .instr_gnt_i(instr_gnt), .instr_rvalid_i(instr_rvalid),
        .instr_addr_o(instr_addr), .instr_rdata_i(instr_rdata),
        .data_req_o(data_req), .data_gnt_i(data_gnt), .data_rvalid_i(data_rvalid),
        .data_we_o(data_we), .data_be_o(data_be), .data_addr_o(data_addr),
        .data_wdata_o(data_wdata), .data_rdata_i(data_rdata)
    );

    // --- GELİŞMİŞ VIVADO TRACER ---
    integer log_file;
    logic [31:0] final_opcode;

    initial begin
        log_file = $fopen("simulation_trace.log", "w");
    end

    always_ff @(posedge clk_i) begin
        // rst_ni: Reset bitmiş olmalı
        // u_core.instr_valid_id: Komut deşifrede geçerli
        // u_core.id_ready: Pipeline ilerliyor (Stall yok)
        // !u_core.pc_set: Branch flush durumlarını ayıklar (Hayalet komutları engeller)
        if (rst_ni && u_core.instr_valid_id && u_core.id_ready && !u_core.pc_set) begin
            
            // 16-bit / 32-bit ayrımı
            if (u_core.instr_rdata_id[1:0] == 2'b11)
                final_opcode = u_core.instr_rdata_id;
            else
                final_opcode = {16'h0000, u_core.instr_rdata_id[15:0]};

            $fdisplay(log_file, "0x%h 0x%h", u_core.pc_id, final_opcode);
            // Canlı izleme
            $display("TRACER: PC=0x%h OP=0x%h", u_core.pc_id, final_opcode);
        end
    end

    final begin
        if (log_file != 0) begin
            $fclose(log_file);
            $display("TRACER: Log dosyası başarıyla kapatıldı.");
        end
    end

endmodule
