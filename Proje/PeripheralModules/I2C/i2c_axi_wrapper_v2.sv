`timescale 1ns / 1ps

module i2c_axi_wrapper #(
    parameter SYS_CLK = 50_000_000,
    parameter SCL_CLK = 400_000
)(
    input wire clk,
    input wire rst_n, // Aktif düşük reset

    // I2C Fiziksel Arayüzü
    output wire o_scl,
    output wire o_sda_out,
    output wire o_sda_oe,
    input  wire i_sda_in,

    // Kesme Çıkışı (Rapordaki isterlere göre eklendi)
    output wire o_intr,

    // AXI4-Lite Arayüzü
    input  wire        AWVALID,
    output wire        AWREADY,
    input  wire [31:0] AWADDR,

    input  wire        WVALID,
    output wire        WREADY,
    input  wire [31:0] WDATA,
    input  wire [3:0]  WSTRB,

    output wire        BVALID,
    input  wire        BREADY,
    output wire [1:0]  BRESP,

    input  wire        ARVALID,
    output wire        ARREADY,
    input  wire [31:0] ARADDR,

    output wire        RVALID,
    input  wire        RREADY,
    output wire [31:0] RDATA
);

    // Bellek Haritası Offset Tanımları
    localparam [15:0] OFFSET_I2C_NBY = 16'h7000,
                      OFFSET_I2C_ADR = 16'h7004,
                      OFFSET_I2C_RDR = 16'h7008,
                      OFFSET_I2C_TDR = 16'h700C,
                      OFFSET_I2C_CFG = 16'h7010;

    // Yazmaçlar 
    reg [31:0] I2C_NBY;
    reg [31:0] I2C_ADR;
    reg [31:0] I2C_TDR;
    reg [31:0] I2C_CFG; // [0]:TX_EN, [1]:TX_DONE, [2]:RX_EN, [3]:RX_DONE, [4]:BUSY
    
    wire [31:0] core_rx_data;
    wire core_tx_done, core_rx_done, core_busy;

    // AXI Dahili Sinyaller
    reg axi_rready, axi_awready;
    reg [31:0] axi_rdata;
    reg axi_bvalid, axi_rvalid;

    // Kesme Mantığı: İşlem bittiğinde sinyal üretir 
    assign o_intr = I2C_CFG[1] | I2C_CFG[3]; 

    // AXI Atamaları
    assign BVALID  = axi_bvalid;
    assign RVALID  = axi_rvalid;
    assign RDATA   = axi_rdata;
    assign WREADY  = axi_awready;
    assign AWREADY = axi_awready;
    assign ARREADY = axi_rready;
    assign BRESP   = 2'b00; // OKAY yanıtı
    
    wire axi_write_ready, axi_read_ready;
    
    assign axi_write_ready = axi_awready;
    assign axi_read_ready = (ARVALID && ARREADY);

    // I2C Master Core Entegrasyonu
    I2C_master #(
        .CLK_FREQ(SYS_CLK),
        .I2C_FREQ(SCL_CLK)
    ) i2c_core_inst (
        .clk(clk),
        .rst_n(rst_n),
        .i_slave_addr(I2C_ADR[6:0]),
        .i_tx_data(I2C_TDR),
        .o_rx_data(core_rx_data),
        .i_num_bytes(I2C_NBY[2:0]),
        .i_tx_en(I2C_CFG[0]),
        .o_tx_done(core_tx_done),
        .i_rx_en(I2C_CFG[2]),
        .o_rx_done(core_rx_done),
        .o_busy(core_busy),
        .o_scl(o_scl),
        .o_sda_out(o_sda_out),
        .o_sda_oe(o_sda_oe),
        .i_sda_in(i_sda_in)
    );

    // Write
    always @(posedge clk) begin
        if(!rst_n) begin
            I2C_NBY <= 32'b0;
            I2C_ADR <= 32'b0;
            I2C_TDR <= 32'b0;
            I2C_CFG <= 32'b0;
        end
        else begin
            // Durum Güncellemeleri
            I2C_CFG[4] <= core_busy;
    
            // Done sinyalleri gelince enable'ları temizle (self-clearing)
            if (core_tx_done) I2C_CFG[0] <= 1'b0;
            if (core_rx_done) I2C_CFG[2] <= 1'b0;
    
            // Done sticky bit mantığı
            if (I2C_CFG[0] || I2C_CFG[2]) begin
                I2C_CFG[1] <= 1'b0;
                I2C_CFG[3] <= 1'b0;
            end else begin
                if (core_tx_done) I2C_CFG[1] <= 1'b1;
                if (core_rx_done) I2C_CFG[3] <= 1'b1;
            end
            // AXI üzerinden yazma işlemi
            if (axi_write_ready) begin
                case(AWADDR[15:0])
                    OFFSET_I2C_NBY: begin
                        if(WSTRB[0]) I2C_NBY[7:0]   <= WDATA[7:0];
                        if(WSTRB[1]) I2C_NBY[15:8]  <= WDATA[15:8];
                        if(WSTRB[2]) I2C_NBY[23:16] <= WDATA[23:16];
                        if(WSTRB[3]) I2C_NBY[31:24] <= WDATA[31:24];
                    end
                    OFFSET_I2C_ADR: begin
                        if(WSTRB[0]) I2C_ADR[7:0]   <= WDATA[7:0];
                        if(WSTRB[1]) I2C_ADR[15:8]  <= WDATA[15:8];
                        if(WSTRB[2]) I2C_ADR[23:16] <= WDATA[23:16];
                        if(WSTRB[3]) I2C_ADR[31:24] <= WDATA[31:24];
                    end
                    OFFSET_I2C_TDR: begin
                        if(WSTRB[0]) I2C_TDR[7:0]   <= WDATA[7:0];
                        if(WSTRB[1]) I2C_TDR[15:8]  <= WDATA[15:8];
                        if(WSTRB[2]) I2C_TDR[23:16] <= WDATA[23:16];
                        if(WSTRB[3]) I2C_TDR[31:24] <= WDATA[31:24];
                    end
                    OFFSET_I2C_CFG: begin
                        if(WSTRB[0]) begin
                            I2C_CFG[0] <= WDATA[0]; // TX_EN
                            I2C_CFG[2] <= WDATA[2]; // RX_EN
                        end
                        if(WSTRB[1]) I2C_CFG[15:8]  <= WDATA[15:8];
                        if(WSTRB[2]) I2C_CFG[23:16] <= WDATA[23:16];
                        if(WSTRB[3]) I2C_CFG[31:24] <= WDATA[31:24];
                    end
                endcase
            end
        end
        end

    // Read
    always @(posedge clk) begin
            if(!rst_n) axi_rdata <= 0;
            else if(axi_read_ready) begin
                case(ARADDR[15:0])
                    OFFSET_I2C_NBY: axi_rdata <= I2C_NBY;
                    OFFSET_I2C_ADR: axi_rdata <= I2C_ADR;
                    OFFSET_I2C_RDR: axi_rdata <= core_rx_data;
                    OFFSET_I2C_TDR: axi_rdata <= I2C_TDR;
                    OFFSET_I2C_CFG: axi_rdata <= I2C_CFG;
                    default:        axi_rdata <= 32'hDEADBEEF;
                endcase
            end
        end

    // AXI Handshaking
initial axi_bvalid = 1'b0;
    always@(posedge clk) begin
        if(!rst_n)
            axi_bvalid <= 1'b0;
        else if(axi_write_ready)
            axi_bvalid <= 1'b1;
        else if(BREADY)
            axi_bvalid <= 1'b0;
    end

    initial axi_rvalid = 1'b0;
    always@(posedge clk) begin
        if(!rst_n)
            axi_rvalid <= 1'b0;
        else if(axi_read_ready)
            axi_rvalid <= 1'b1;
        else if(RREADY)
            axi_rvalid <= 1'b0;
    end

    initial axi_awready = 1'b0;
    always@(posedge clk) begin
        if(!rst_n)
            axi_awready <= 1'b0;
        else 
            axi_awready <= !axi_awready && (AWVALID && WVALID) && (!BVALID && BREADY);
    end

    always@(*) begin
        axi_rready = !RVALID;
    end

endmodule
