`timescale 1ns / 1ps

module cv32e40p_clock_gate (
    input  logic clk_i,         // Ana Saat
    input  logic en_i,          // Çekirdekten gelen uyutma/aktif etme sinyali
    input  logic scan_cg_en_i,  // Test (Scan) modu aktiflik sinyali
    output logic clk_o          // Çıktı Saati (İşlemciye giden)
);

    logic en_latch;
    logic en_or;

    assign en_or = en_i | scan_cg_en_i;

    // Saat sinyali LOW (0) iken enable sinyalini kilitle
    always_latch begin
        if (!clk_i) begin
            en_latch = en_or;
        end
    end

    // Kilitlenmiş enable sinyali ile saati güvenli şekilde AND'le
    assign clk_o = en_latch & clk_i;

endmodule