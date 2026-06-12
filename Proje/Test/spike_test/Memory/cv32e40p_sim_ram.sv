`timescale 1ns / 1ps

module cv32e40p_sim_ram #(
    parameter RAM_SIZE_BYTES = 65536, // 64 KB RAM
    parameter INIT_FILE = "test.hex"  // Yüklenecek yazılım dosyası
)(
    input  logic        clk_i,
    input  logic        rst_ni,

    // ----------------------------------------
    // Port A: Instruction Fetch (Sadece Okuma)
    // ----------------------------------------
    input  logic        instr_req_i,
    output logic        instr_gnt_o,
    input  logic [31:0] instr_addr_i,
    output logic        instr_rvalid_o,
    output logic [31:0] instr_rdata_o,

    // ----------------------------------------
    // Port B: Data / LSU (Okuma ve Yazma)
    // ----------------------------------------
    input  logic        data_req_i,
    output logic        data_gnt_o,
    input  logic        data_we_i,
    input  logic [3:0]  data_be_i,      // Byte enable
    input  logic [31:0] data_addr_i,
    input  logic [31:0] data_wdata_i,
    output logic        data_rvalid_o,
    output logic [31:0] data_rdata_o
);

    // 32-bit (Word) tabanlı bellek dizisi
    logic [31:0] mem [0:(RAM_SIZE_BYTES/4)-1];

    // Belleği başlangıçta Hex dosyası ile doldur
    initial begin
    $readmemh("/home/osmen/cv32e40p/example_tb/core/test.hex", mem);
    end

    // --- OBI Handshake (Basitleştirilmiş) ---
    // Gelen istekleri anında kabul et (Grant)
    assign instr_gnt_o = instr_req_i;
    assign data_gnt_o  = data_req_i;

    // Adresleri Byte'tan Word'e çevir (32-bit adres -> 4'e böl -> sağa 2 kaydır)
    logic [29:0] instr_word_addr;
    logic [29:0] data_word_addr;
    assign instr_word_addr = instr_addr_i[31:2];
    assign data_word_addr  = data_addr_i[31:2];

    // --- Port A: Instruction Fetch Mantığı ---
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            instr_rvalid_o <= 1'b0;
            instr_rdata_o  <= 32'h0;
        end else begin
            // İstek geldiğinde bir sonraki cycle'da veri geçerli (valid) olur
            instr_rvalid_o <= instr_req_i; 
            if (instr_req_i) begin
                instr_rdata_o <= mem[instr_word_addr];
            end
        end
    end

    // --- Port B: Data / LSU Mantığı ---
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            data_rvalid_o <= 1'b0;
            data_rdata_o  <= 32'h0;
        end else begin
            // İstek geldiğinde bir sonraki cycle'da okuma/yazma biter, valid 1 olur
            data_rvalid_o <= data_req_i;
            
            if (data_req_i) begin
                if (data_we_i) begin
                    // Byte Enable (be) kontrolleri ile sadece istenen byte'lara yaz
                    if (data_be_i[0]) mem[data_word_addr][7:0]   <= data_wdata_i[7:0];
                    if (data_be_i[1]) mem[data_word_addr][15:8]  <= data_wdata_i[15:8];
                    if (data_be_i[2]) mem[data_word_addr][23:16] <= data_wdata_i[23:16];
                    if (data_be_i[3]) mem[data_word_addr][31:24] <= data_wdata_i[31:24];
                end
                // Her halükarda o adresteki veriyi dışarı yansıt
                data_rdata_o <= mem[data_word_addr];
            end
        end
    end

endmodule