`timescale 1ns/1ps
module I2C_master #(
    parameter CLK_FREQ=50000000,
    parameter I2C_FREQ=400000
)(
    input logic clk,
    input logic rst_n, //resets when it's 0
    // control interface
    input logic [6:0] i_slave_addr, // I2C_ADR[6:0]
    input logic [31:0] i_tx_data, // I2C_TDR
    output logic [31:0] o_rx_data, // I2C_RDR
    input logic [2:0] i_num_bytes, // I2C_NBY (1-4)
    input logic i_tx_en, // I2C_CFG[0] starts at the rising edge
    output logic o_tx_done, // I2C_CFG[1] 1 cycle is 1 pulse
    input logic i_rx_en,  // I2C_CFG[2]
    output logic o_rx_done, // I2C_CFG[3]
    output logic o_busy, // when FSM is not on IDLE 1
    output logic o_error,
    // I2C physical interface
    output logic o_scl,
    output logic o_sda_out, // SDA driving value
    output logic o_sda_oe, // 1=drive, 0=relase
    input logic i_sda_in // state of the SDA pin
    
);
    localparam /**/ TICKS= CLK_FREQ/I2C_FREQ;
    localparam /**/ T_HALF= TICKS/2; 
    localparam /**/ T_QUART= TICKS/4; 
    localparam /**/ T_3QUART= T_QUART*3;

    
    localparam S_IDLE=4'd0;
    localparam S_START=4'd1;
    localparam S_ADDR=4'd2;
    localparam S_ADDR_ACK=4'd3;
    localparam S_WR_BYTE=4'd4;
    localparam S_WR_ACK=4'd5;
    localparam S_RD_BYTE=4'd6;
    localparam S_RD_ACK=4'd7;
    localparam S_STOP=4'd8;
    localparam S_DONE=4'd9;
    

    logic [3:0 ]state;

    logic [7:0] clk_cnt;

    wire bit_start_tick=(clk_cnt==T_QUART); 
    wire bit_scl_fall=(clk_cnt==TICKS-1);
    wire bit_sda_sample=(clk_cnt==T_3QUART);

    logic [7:0] shift_rx, shift_tx;
    logic [2:0] bit_cnt, byte_cnt;
    logic r_is_read;
    logic [6:0] r_slave_addr;
    logic [31:0] r_tx_data;
    logic [2:0] r_num_bytes;
    logic [31:0] r_rx_data;
    logic scl_r; 
    logic sda_out_r; 
    logic sda_oe_r;
    logic nack_r;
    

    logic tx_en_prev, rx_en_prev;
    wire tx_en_rise=i_tx_en & ~tx_en_prev;
    wire rx_en_rise=i_rx_en & ~rx_en_prev;

    //posedge detection
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin 
            tx_en_prev<=1'b0;
            rx_en_prev<=1'b0;
        end
        else begin 
            tx_en_prev<= i_tx_en;
            rx_en_prev<=i_rx_en;
        end
    end
    //phase counter
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin 
            clk_cnt<='0;
        end
        else if(state==S_IDLE)begin 
            clk_cnt<='0;
        end
        else begin 
            if(clk_cnt==TICKS-1) begin
                clk_cnt<='0;
            end
            else begin
                clk_cnt<=clk_cnt+1'b1;
            end
        end
    end
    // SCL generation
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin 
            scl_r<=1'b1;
        end
        else begin
            case (state) 
                S_IDLE, S_DONE: scl_r<=1'b1;
                S_START:
                    if(clk_cnt<T_HALF)begin
                        scl_r<=1'b1;
                    end
                    else begin 
                        scl_r<=1'b0;
                    end
                S_STOP:
                    if(clk_cnt>=T_HALF)begin
                        scl_r<=1'b1;
                    end
                    else begin 
                        scl_r<=1'b0;
                    end
                default:
                    if(clk_cnt>=T_HALF)begin
                        scl_r<=1'b1;
                    end
                    else begin 
                        scl_r<=1'b0;
                    end
                endcase
        end
    end
    //FSM
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            state<=S_IDLE;
            bit_cnt<=3'd7;
            byte_cnt<='0;
            r_is_read<='0;
            r_slave_addr<='0; 
            r_tx_data<='0; 
            r_num_bytes<=3'd1;
            shift_tx<='0;
            shift_rx<='0; 
            r_rx_data<='0;
            sda_out_r<=1'b1; 
            sda_oe_r<=1'b1;
            o_tx_done<='0; 
            o_rx_done<='0;
            o_error<=1'b0;
            nack_r<=1'b0;  
        end
        else begin
            o_tx_done<=1'b0;
            o_rx_done<=1'b0;
            case (state)
                S_IDLE: begin
                    o_error <= 1'b0;
                    sda_out_r<=1'b1; 
                    sda_oe_r<=1'b1;
                    bit_cnt<=3'd7; 
                    byte_cnt<='0;
                        if (tx_en_rise) begin
                            r_is_read<=1'b0; 
                            r_slave_addr<=i_slave_addr;
                            r_tx_data<=i_tx_data;
                            if(i_num_bytes==0)begin 
                                r_num_bytes<=3'd1;
                            end
                            else if(i_num_bytes>4)begin 
                                r_num_bytes<=3'd4;                            
                            end
                            else begin 
                                r_num_bytes<=i_num_bytes;
                            end
                            state<=S_START;
                            end 
                        else if (rx_en_rise) begin
                        r_is_read<=1'b1; 
                        r_slave_addr<=i_slave_addr;
                        if(i_num_bytes==0)begin
                            r_num_bytes<=3'd1;
                        end
                        else if(i_num_bytes>4) begin 
                            r_num_bytes<=3'd4;                        
                        end
                        else begin
                            r_num_bytes<=i_num_bytes;
                        end
                        state<=S_START;
                        end
                end

                
                S_START: begin
                    sda_oe_r<=1'b1;
                    if(clk_cnt < T_QUART) begin
                        sda_out_r<=1'b1;  
                    end
                    else begin
                        sda_out_r <=1'b0; 
                    end
                    if(bit_scl_fall) begin
                        shift_tx<={r_slave_addr, r_is_read};
                        bit_cnt<=3'd7; 
                        state<=S_ADDR;
                    end
                end

                
                S_ADDR:begin
                    sda_oe_r<=1'b1;
                    if(bit_start_tick)begin 
                        sda_out_r<=shift_tx[7];
                    end
                    if(bit_scl_fall) begin
                        shift_tx<={shift_tx[6:0],1'b0};
                        if (bit_cnt==0) begin 
                            state<=S_ADDR_ACK;
                        end
                        else begin 
                            bit_cnt<=bit_cnt-1;
                        end
                    end
                end

                
                S_ADDR_ACK: begin
                    if(clk_cnt >= T_QUART) begin
                        sda_out_r <= 1'b1;
                        sda_oe_r  <= 1'b0;//release SDA so slave can pull low for ACK
                    end
                    if(bit_sda_sample) begin      
                    nack_r <= i_sda_in;//0=ACK 1=NACK
                    end
                    if(bit_scl_fall) begin
                        sda_oe_r <= 1'b1;
                        bit_cnt  <= 3'd7;
                        if(nack_r) begin
                            state <= S_STOP; // abort, release the bus
                        end
                        else if(r_is_read) begin
                            state <= S_RD_BYTE;
                        end
                        else begin
                            shift_tx <= r_tx_data[7:0];
                            state    <= S_WR_BYTE;
                        end
                    end
                end

                
                S_WR_BYTE:begin
                    sda_oe_r<=1'b1;
                    if(bit_start_tick) begin 
                        sda_out_r<=shift_tx[7];
                    end
                    if(bit_scl_fall) begin
                        shift_tx<={shift_tx[6:0],1'b0};
                        if(bit_cnt==0) begin 
                            state<=S_WR_ACK;
                        end
                        else begin 
                            bit_cnt<=bit_cnt-1;
                        end
                    end                    
                end

                
                S_WR_ACK: begin
                    if(clk_cnt >= T_QUART) begin
                        sda_out_r <= 1'b1;
                        sda_oe_r  <= 1'b0; //release SDA for slave ACK
                    end
                    if(bit_sda_sample) begin     
                        nack_r <= i_sda_in;//0=ACK 1=NACK
                    end
                    if(bit_scl_fall) begin
                        sda_oe_r <= 1'b1;
                        bit_cnt  <= 3'd7;
                        if(nack_r) begin
                            state <= S_STOP;//slave rejected byte, abort
                        end
                        else begin
                            byte_cnt <= byte_cnt + 1;
                            if(byte_cnt == r_num_bytes-1) begin
                                state <= S_STOP;
                            end
                            else begin
                                case(byte_cnt)
                                    3'd0: shift_tx <= r_tx_data[15:8];
                                    3'd1: shift_tx <= r_tx_data[23:16];
                                    3'd2: shift_tx <= r_tx_data[31:24];
                                    default: shift_tx <= '1;
                                endcase
                                state <= S_WR_BYTE;
                            end
                        end
                    end
                end

                
                S_RD_BYTE:begin
                    if(clk_cnt>=T_QUART) begin 
                        sda_out_r<=1'b1; 
                        sda_oe_r<=1'b0;
                    end
                    if(bit_sda_sample) begin
                        shift_rx<={shift_rx[6:0], i_sda_in};
                    end
                    if(bit_scl_fall) begin
                        if (bit_cnt==0)begin 
                            state<=S_RD_ACK;
                        end
                        else begin           
                            bit_cnt<=bit_cnt-1;
                        end
                    end            
                end

                
                S_RD_ACK:begin
                    if(clk_cnt>= T_QUART) begin 
                        sda_oe_r<=1'b1;
                        if(byte_cnt==r_num_bytes-1)begin
                            sda_out_r<=1'b1;
                        end
                        else begin
                            sda_out_r<=1'b0;
                        end
                    end 
                    if(bit_scl_fall) begin
                        case(byte_cnt)
                            3'd0: r_rx_data[7:0]<=shift_rx;
                            3'd1: r_rx_data[15:8]<=shift_rx;
                            3'd2: r_rx_data[23:16]<=shift_rx;
                            3'd3: r_rx_data[31:24]<=shift_rx;
                            default:;
                        endcase
                        byte_cnt<=byte_cnt+1; 
                        bit_cnt<=3'd7;
                        if(byte_cnt==r_num_bytes-1) begin
                            state<=S_STOP;
                        end
                        else begin
                            state<=S_RD_BYTE;
                        end                        
                    end  
                end
                
                
                S_STOP:begin
                    sda_oe_r<=1'b1;
                    if(clk_cnt >= T_3QUART) begin
                        sda_out_r<= 1'b1;
                    end
                    else if (clk_cnt>=T_QUART) begin
                        sda_out_r <=1'b0;
                    end
                    if(bit_scl_fall) begin 
                        state<=S_DONE;
                    end
                end

                
                S_DONE: begin
                    sda_out_r <= 1'b1;
                    sda_oe_r  <= 1'b1;
                    nack_r    <= 1'b0;
                    if(nack_r) begin
                        o_error <= 1'b1;//pulse error so AXI wrapper can set CFG[4]
                    end
                    else if(r_is_read) begin
                        o_rx_done <= 1'b1;
                    end
                    else begin
                        o_tx_done <= 1'b1;
                    end
                    state <= S_IDLE;
                end

                default: state<=S_IDLE;

            endcase
        end
    end

    assign o_scl=scl_r;
    assign o_sda_out=sda_out_r;
    assign o_sda_oe=sda_oe_r;
    assign o_rx_data=r_rx_data;
    assign o_busy=(state != S_IDLE);


endmodule


     


`timescale 1ns / 1ps

module i2c_axi_wrapper #(
    parameter SYS_CLK = 50_000_000,
    parameter SCL_CLK = 400_000
)(
    input wire clk,
    input wire rst_n, // Aktif düþük reset

    // I2C Fiziksel Arayüzü
    output wire o_scl,

    inout  wire sda,

    // Kesme Çýkýþý (Rapordaki isterlere göre eklendi)
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
    output wire [31:0] RDATA,
    output wire  [1:0]      RRESP
);

    // Bellek Haritasý Offset Tanýmlarý
    localparam [15:0] OFFSET_I2C_NBY = 16'h8000,
                      OFFSET_I2C_ADR = 16'h8004,
                      OFFSET_I2C_RDR = 16'h8008,
                      OFFSET_I2C_TDR = 16'h800C,
                      OFFSET_I2C_CFG = 16'h8010;
    assign RRESP = 2'b00;

    // Yazmaçlar 
    reg [31:0] I2C_NBY;
    reg [31:0] I2C_ADR;
    reg [31:0] I2C_TDR;
    reg [31:0] I2C_CFG; // [0]:TX_EN, [1]:TX_DONE, [2]:RX_EN, [3]:RX_DONE, [4]:ERROR
    
    wire [31:0] core_rx_data;
    wire core_tx_done, core_rx_done, core_busy;

    // AXI Dahili Sinyaller
    reg axi_rready, axi_awready;
    reg [31:0] axi_rdata;
    reg axi_bvalid, axi_rvalid;

    // Kesme Mantýðý: Ýþlem bittiðinde sinyal üretir 
    assign o_intr = I2C_CFG[1] | I2C_CFG[3]; 

    // SDA — Open-Drain IOBUF
    // Sadece oe=1 ve out=0 iken hattı 0'a çek, diğer her durumda Hi-Z
    // ----------------------------------------------------------------
    wire sda_out_internal;
    wire sda_oe_internal;
    wire sda_in_internal;

    wire sda_drive_en = sda_oe_internal && (sda_out_internal == 1'b0);

    IOBUF sda_iobuf (
        .IO (sda),
        .I  (1'b0),           // open-drain: sadece 0 sürebiliriz
        .O  (sda_in_internal),
        .T  (~sda_drive_en)   // T=1 → Hi-Z, T=0 → 0 sür
    );

    // AXI Atamalarý
    assign BVALID  = axi_bvalid;
    assign RVALID  = axi_rvalid;
    assign RDATA   = axi_rdata;
    assign WREADY  = axi_awready;
    assign AWREADY = axi_awready;
    assign ARREADY = axi_rready;
    assign BRESP   = 2'b00; // OKAY yanýtý
    
    wire axi_write_ready, axi_read_ready;
    
    assign axi_write_ready = axi_awready;
    assign axi_read_ready = (ARVALID && ARREADY);
    
    logic o_error;

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
        .o_error(o_error),
        .o_scl(o_scl),
        .o_sda_out(sda_out_internal),
        .o_sda_oe(sda_oe_internal),
        .i_sda_in(sda_in_internal)
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
            // I2C_CFG[4] <= o_error; // Removed non-sticky assignment

            // Done sinyalleri pulse olduğu için sticky (yapışkan) bit mantığı:
            // Yeni bir işlem (Enable) tetiklendiğinde önceki 'Done' bitleri temizlenir.
            if (I2C_CFG[0] || I2C_CFG[2]) begin
                I2C_CFG[1] <= 1'b0; 
                I2C_CFG[3] <= 1'b0; 
                I2C_CFG[4] <= 1'b0; 
            end else begin
                if (core_tx_done) I2C_CFG[1] <= 1'b1;
                if (core_rx_done) I2C_CFG[3] <= 1'b1;
                if (o_error)      I2C_CFG[4] <= 1'b1;
            end

            // AXI üzerinden yazma iþlemi
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
        end else if (core_busy) begin
                // Self-clearing: Core iþlemi algýladýktan sonra wrapper Enable bitlerini sýfýrlar
                I2C_CFG[0] <= 1'b0;
                I2C_CFG[2] <= 1'b0;
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

module IOBUF (
    output O,
    inout  IO,
    input  I,
    input  T
);
    assign IO = T ? 1'bz : I;
    assign O = IO;
endmodule


