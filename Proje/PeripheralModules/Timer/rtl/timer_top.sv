`timescale 1ns / 1ps

module timer_top #(
    parameter int CLK_FREQ = 50_000_000
)(
    input wire clk,
    input wire rst_i, // Aktif-düşük reset

    // AXI4-Lite
    input wire AWVALID,
    output wire AWREADY,
    input wire [31:0] AWADDR,

    input wire WVALID,
    output wire WREADY,
    input wire [31:0] WDATA,
    input wire [3:0] WSTRB,

    output wire BVALID,
    input wire BREADY,
    output wire [1:0] BRESP,

    input wire ARVALID,
    output wire ARREADY,
    input wire [31:0] ARADDR,

    output wire RVALID,
    input wire RREADY,
    output wire [31:0] RDATA,  
    output wire [1:0] RRESP
);

    localparam ADDR_TIM_PRE = 32'h0001_1000,
               ADDR_TIM_ARE = 32'h0001_1004,
               ADDR_TIM_CLR = 32'h0001_1008,
               ADDR_TIM_ENA = 32'h0001_100C,
               ADDR_TIM_MOD = 32'h0001_1010,
               ADDR_TIM_CNT = 32'h0001_1014,
               ADDR_TIM_EVN = 32'h0001_1018,
               ADDR_TIM_EVC = 32'h0001_101C;

    reg [31:0] TIM_PRE, TIM_ARE, TIM_CLR, TIM_ENA, TIM_MOD, TIM_EVC;
    wire [31:0] tim_cnt_wire, tim_evn_wire;
    
    assign RRESP = 2'b00;
    reg axi_awready;
    reg [31:0] axi_rdata;
    reg axi_bvalid, axi_rvalid;
    reg axi_rready;
    
    
        timer #(
        .CLK_FREQ(CLK_FREQ)
    ) i_timer_core (
        .clk_i    (clk),
        .rst_i    (!rst_i),         // rst-i terslendi
        .tim_pre  (TIM_PRE),
        .tim_are  (TIM_ARE),
        .tim_clr  (TIM_CLR[0]),     // Rapor: Yazmacın alt biti kullanılır
        .tim_ena  (TIM_ENA[0]),
        .tim_mod  (TIM_MOD[0]),
        .tim_evc  (TIM_EVC[0]),
        .tim_cnt  (tim_cnt_wire),
        .tim_evn  (tim_evn_wire)
    );

    assign BRESP   = 2'b00;
    assign BVALID  = axi_bvalid;
    assign RVALID  = axi_rvalid;
    assign RDATA   = axi_rdata;
    assign WREADY  = axi_awready;
    assign AWREADY = axi_awready;
    assign ARREADY = axi_rready;

    wire axi_write_ready = axi_awready;
    wire axi_read_ready  = (ARVALID && ARREADY);

    always @(posedge clk) begin
        if (!rst_i) begin
            TIM_PRE <= 32'hFFFF_FFFF; 
            TIM_ARE <= 32'hFFFF_FFFF;
            TIM_CLR <= 32'b0;
            TIM_ENA <= 32'b0;
            TIM_MOD <= 32'h0000_0001;
            TIM_EVC <= 32'b0;
        end 
        else if (axi_write_ready) begin
            case (AWADDR)
                ADDR_TIM_PRE: begin
                    if(WSTRB[0]) TIM_PRE[7:0]   <= WDATA[7:0];
                    if(WSTRB[1]) TIM_PRE[15:8]  <= WDATA[15:8];
                    if(WSTRB[2]) TIM_PRE[23:16] <= WDATA[23:16];
                    if(WSTRB[3]) TIM_PRE[31:24] <= WDATA[31:24];
                end
                ADDR_TIM_ARE: begin
                    if(WSTRB[0]) TIM_ARE[7:0]   <= WDATA[7:0];
                    if(WSTRB[1]) TIM_ARE[15:8]  <= WDATA[15:8];
                    if(WSTRB[2]) TIM_ARE[23:16] <= WDATA[23:16];
                    if(WSTRB[3]) TIM_ARE[31:24] <= WDATA[31:24];
                end
                ADDR_TIM_CLR: begin
                    if(WSTRB[0]) TIM_CLR[7:0]   <= WDATA[7:0];
                    if(WSTRB[1]) TIM_CLR[15:8]  <= WDATA[15:8];
                    if(WSTRB[2]) TIM_CLR[23:16] <= WDATA[23:16];
                    if(WSTRB[3]) TIM_CLR[31:24] <= WDATA[31:24];
                end                
                ADDR_TIM_ENA: begin
                    if(WSTRB[0]) TIM_ENA[7:0]   <= WDATA[7:0];
                    if(WSTRB[1]) TIM_ENA[15:8]  <= WDATA[15:8];
                    if(WSTRB[2]) TIM_ENA[23:16] <= WDATA[23:16];
                    if(WSTRB[3]) TIM_ENA[31:24] <= WDATA[31:24];
                end
                ADDR_TIM_MOD: begin
                    if(WSTRB[0]) TIM_MOD[7:0]   <= WDATA[7:0];
                    if(WSTRB[1]) TIM_MOD[15:8]  <= WDATA[15:8];
                    if(WSTRB[2]) TIM_MOD[23:16] <= WDATA[23:16];
                    if(WSTRB[3]) TIM_MOD[31:24] <= WDATA[31:24];
                end
                ADDR_TIM_EVC: begin
                    if(WSTRB[0]) TIM_EVC[7:0]   <= WDATA[7:0];
                    if(WSTRB[1]) TIM_EVC[15:8]  <= WDATA[15:8];
                    if(WSTRB[2]) TIM_EVC[23:16] <= WDATA[23:16];
                    if(WSTRB[3]) TIM_EVC[31:24] <= WDATA[31:24];
                end
                default: ;
            endcase
        end
    end

    // Read Logic 
    always @(posedge clk) begin
        if (!rst_i)
            axi_rdata <= 32'b0;
        else if (!ARVALID || RREADY) begin
            case (ARADDR)
                ADDR_TIM_PRE: axi_rdata <= TIM_PRE;
                ADDR_TIM_ARE: axi_rdata <= TIM_ARE;
                ADDR_TIM_CLR: axi_rdata <= TIM_CLR;
                ADDR_TIM_ENA: axi_rdata <= TIM_ENA;
                ADDR_TIM_MOD: axi_rdata <= TIM_MOD;
                ADDR_TIM_CNT: axi_rdata <= tim_cnt_wire; // Donanımdan gelen anlık değer
                ADDR_TIM_EVN: axi_rdata <= tim_evn_wire; // Donanımdan gelen olay sayısı
                ADDR_TIM_EVC: axi_rdata <= TIM_EVC;
                default:      axi_rdata <= 32'h0;
            endcase
        end
    end

    // AXI Handshaking
    initial axi_bvalid = 1'b0;
    always @(posedge clk) begin
        if (!rst_i) axi_bvalid <= 1'b0;
        else if (axi_write_ready) axi_bvalid <= 1'b1;
        else if (BREADY) axi_bvalid <= 1'b0;
    end

    initial axi_rvalid = 1'b0;
    always @(posedge clk) begin
        if (!rst_i) axi_rvalid <= 1'b0;
        else if (axi_read_ready) axi_rvalid <= 1'b1;
        else if (RREADY) axi_rvalid <= 1'b0;
    end

    initial axi_awready = 1'b0;
    always @(posedge clk) begin
        if (!rst_i) axi_awready <= 1'b0;
        else axi_awready <= !axi_awready && (AWVALID && WVALID) && (!BVALID);
    end

    always @(*) begin
        axi_rready = !RVALID;
    end
    
endmodule
