`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/11/2026 03:42:41 PM
// Design Name: 
// Module Name: qspi_axi_wrapper
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


module qspi_axi_wrapper(
    
    output logic sclk,
    output logic cs,
    
    output logic [3:0]  qspi_data_o,  
    input  logic [3:0]  qspi_data_i,  
    output logic [3:0]  qspi_data_oe,
    
    input  logic                                S_AXI_ACLK, //Clock
    input  logic                                S_AXI_ARESETN, //Reset
    // Write Address Channel
    input  logic [31:0]     					S_AXI_AWADDR,
    input  logic                                S_AXI_AWVALID,
    output logic                                S_AXI_AWREADY,
    // Write Data Channel
    input  logic [31:0]     					S_AXI_WDATA,
    input  logic [3:0] 							S_AXI_WSTRB,
    input logic                                 S_AXI_WVALID,
    output logic                                S_AXI_WREADY,
    // Write Response Channel
    output logic [1:0]                          S_AXI_BRESP,
    output logic                                S_AXI_BVALID,
    input  logic                                S_AXI_BREADY,
    // Read Address Channel
    input  logic [31:0]						    S_AXI_ARADDR,
    input  logic                                S_AXI_ARVALID,
    output logic                                S_AXI_ARREADY,
    // Read Data Channel
    output logic [31:0]						    S_AXI_RDATA,
    output logic                                S_AXI_RVALID,
    output logic [1:0]                          S_AXI_RRESP,
    input  logic                                S_AXI_RREADY
    );
    
    
    localparam ADDR_QSPI_CCR=32'h0000_9000,
               ADDR_QSPI_ADR=32'h0000_9004,
               ADDR_QSPI_DR=32'h0000_9008,
               ADDR_QSPI_STA=32'h0000_900C,
               ADDR_QSPI_FCR=32'h0000_9010;
               
    logic [31:0] QSPI_CCR;
    logic [31:0] QSPI_ADR;
    logic [31:0] QSPI_STA;
    logic [31:0] QSPI_FCR;
    
    
    logic start_req;
    logic ccr_write_pulse;
    logic [31:0] tx_data_i;
    logic [31:0] rx_data_o;

    logic [31:0] axi_rx_data;
    
    logic [11:0] qspi_core_status;
    logic [3:0] axi_error_flags;
    logic [3:0] status_middle;
    assign status_middle=axi_error_flags|qspi_core_status[11:8];
    assign QSPI_STA={20'd0,status_middle,qspi_core_status[7:0]};   
    
    
    
    //RX fifo control signals
    logic rx_fifo_wr_en;
    logic rx_fifo_rd_en;
    logic rx_fifo_empty;
    logic rx_fifo_full;
    logic rx_underflow;
    
    
    //TX fifo control signals
    logic tx_fifo_wr_en;    
    logic tx_fifo_rd_en;
    logic tx_fifo_empty;
    logic tx_fifo_full;
    logic tx_overflow;
    
               
        
    qspi qspi_core_inst(
        .clk(S_AXI_ACLK),
        .rst_n(S_AXI_ARESETN),
        .instr(QSPI_CCR[7:0]),
        .data_mode(QSPI_CCR[9:8]),
        .dummy_cycle_count(QSPI_CCR[15:11]),
        .data_width(QSPI_CCR[23:16]),
        .prescaler(QSPI_CCR[30:25]),
        .clear_status(QSPI_CCR[31]),
        .addr(QSPI_ADR),
        .addr_is_32_bit(QSPI_CCR[24]),
        .start_req(start_req),
        .tx_data_i(tx_data_i),
        .rx_data_o(rx_data_o),
        .tx_fifo_rd_en(tx_fifo_rd_en),
        .rx_fifo_wr_en(rx_fifo_wr_en),
        .tx_fifo_empty(tx_fifo_empty),
        .tx_fifo_full(tx_fifo_full),
        .rx_fifo_empty(rx_fifo_empty),
        .rx_fifo_full(rx_fifo_full),
        .status(qspi_core_status),
        .qspi_sclk(sclk),
        .qspi_cs(cs),
        .qspi_data_o(qspi_data_o),
        .qspi_data_i(qspi_data_i),
        .qspi_data_oe(qspi_data_oe)
    );   
    
    
    fifo #(.DATA_WIDTH(32),.DEPTH(64)) rx_fifo(
        .clk(S_AXI_ACLK),
        .rst_n(S_AXI_ARESETN),
        .flush(QSPI_FCR[0]),
        .wr_en(rx_fifo_wr_en),
        .data_in(rx_data_o),
        .rd_en(rx_fifo_rd_en),
        .data_out(axi_rx_data),
        .full(rx_fifo_full),
        .empty(rx_fifo_empty)
    );
    fifo #(.DATA_WIDTH(32),.DEPTH(64)) tx_fifo(
        .clk(S_AXI_ACLK),
        .rst_n(S_AXI_ARESETN),
        .flush(QSPI_FCR[1]),
        .wr_en(tx_fifo_wr_en),
        .data_in(S_AXI_WDATA),
        .rd_en(tx_fifo_rd_en),
        .data_out(tx_data_i),
        .full(tx_fifo_full),
        .empty(tx_fifo_empty)
    );
    
     // 1. AXI4-Lite Bus Signals & Handshaking
    logic axi_awready, axi_arready, axi_rvalid, axi_bvalid,axi_wready;

    logic [31:0] axi_rdata;
	
	assign S_AXI_BRESP  = 2'b00;
	assign S_AXI_RRESP  = 2'b00;
    assign S_AXI_AWREADY = axi_awready;
    assign S_AXI_WREADY = axi_awready;
    assign S_AXI_ARREADY = axi_arready;
    
    assign S_AXI_BVALID  = axi_bvalid;

    assign S_AXI_RDATA   = axi_rdata;
    assign S_AXI_RVALID  = axi_rvalid;

    // Handshake logic (simplified standard AXI template)
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_awready <= 1'b0;
            axi_bvalid  <= 1'b0;
            axi_arready <= 1'b0;
            axi_rvalid  <= 1'b0;
        end else begin
            // Write handshaking
            axi_awready <= (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID);
            if (axi_awready && ~axi_bvalid)
                axi_bvalid <= 1'b1;
            else if (S_AXI_BREADY && axi_bvalid)
                axi_bvalid <= 1'b0;

            // Read handshaking
            axi_arready <= (~axi_arready && S_AXI_ARVALID);
            if (axi_arready && ~axi_rvalid)
                axi_rvalid <= 1'b1;
            else if (axi_rvalid && S_AXI_RREADY)
                axi_rvalid <= 1'b0;
        end
    end


    assign tx_fifo_wr_en = (axi_awready && S_AXI_WVALID && (S_AXI_AWADDR == ADDR_QSPI_DR) && !tx_fifo_full);
    assign rx_fifo_rd_en = (axi_arready && S_AXI_ARVALID && (S_AXI_ARADDR == ADDR_QSPI_DR) && !rx_fifo_empty);
    assign rx_underflow = axi_arready && (S_AXI_ARADDR == ADDR_QSPI_DR) && rx_fifo_empty;
    assign tx_overflow = S_AXI_AWREADY && (S_AXI_AWADDR == ADDR_QSPI_DR) && tx_fifo_full;

    always_ff @(posedge S_AXI_ACLK) begin
        if(!S_AXI_ARESETN) begin
            QSPI_CCR<=32'd0;
            QSPI_ADR<=32'd0;
            QSPI_FCR<=32'd0;
        end
        else begin
            QSPI_FCR<=32'd0;
            if (axi_awready)begin 
                case(S_AXI_AWADDR) 
                ADDR_QSPI_CCR:begin 
                    if(S_AXI_WSTRB[0]) QSPI_CCR[7:0]<=S_AXI_WDATA[7:0];
                    if(S_AXI_WSTRB[1]) QSPI_CCR[15:8]<=S_AXI_WDATA[15:8];
                    if(S_AXI_WSTRB[2]) QSPI_CCR[23:16]<=S_AXI_WDATA[23:16];
                    if(S_AXI_WSTRB[3]) QSPI_CCR[31:24]<=S_AXI_WDATA[31:24]; 
                end
                ADDR_QSPI_ADR:begin 
                    if(S_AXI_WSTRB[0]) QSPI_ADR[7:0]<=S_AXI_WDATA[7:0];
                    if(S_AXI_WSTRB[1]) QSPI_ADR[15:8]<=S_AXI_WDATA[15:8];
                    if(S_AXI_WSTRB[2]) QSPI_ADR[23:16]<=S_AXI_WDATA[23:16];
                    if(S_AXI_WSTRB[3]) QSPI_ADR[31:24]<=S_AXI_WDATA[31:24]; 
                end
                ADDR_QSPI_FCR:begin 
                    if(S_AXI_WSTRB[0]) QSPI_FCR[7:0]<=S_AXI_WDATA[7:0];
                    if(S_AXI_WSTRB[1]) QSPI_FCR[15:8]<=S_AXI_WDATA[15:8];
                    if(S_AXI_WSTRB[2]) QSPI_FCR[23:16]<=S_AXI_WDATA[23:16];
                    if(S_AXI_WSTRB[3]) QSPI_FCR[31:24]<=S_AXI_WDATA[31:24];
                end 
                endcase
            end                     
       end
    end
    
    always_ff @(posedge S_AXI_ACLK) begin 
        if(!S_AXI_ARESETN) begin 
            axi_rdata <= 32'd0;
        end else if (axi_rvalid && S_AXI_RREADY) begin // AXI veri hattı hazırsa
            axi_rdata <= 32'd0; // Bir sonraki çevrim için temizle
        end else if (axi_arready && S_AXI_ARVALID) begin 
            case(S_AXI_ARADDR)
                ADDR_QSPI_CCR:  axi_rdata <= QSPI_CCR;
                ADDR_QSPI_ADR:  axi_rdata <= QSPI_ADR;
                ADDR_QSPI_DR:   axi_rdata <= axi_rx_data; // FIFO'dan gelen veriyi doğrudan bas
                ADDR_QSPI_STA:  axi_rdata <= QSPI_STA;
                ADDR_QSPI_FCR:  axi_rdata <= QSPI_FCR;
                default:        axi_rdata <= 32'd0;
            endcase
        end
    end
    
    always_ff @(posedge S_AXI_ACLK)begin 
        if(!S_AXI_ARESETN)begin 
            axi_error_flags<=4'd0;
        end
        else begin 
            if (S_AXI_AWREADY && S_AXI_WSTRB[3] && S_AXI_WDATA[31] && S_AXI_AWADDR==ADDR_QSPI_CCR) axi_error_flags <= 4'd0;
            else begin 
                if(rx_underflow)begin 
                    axi_error_flags[0]<=1;
                end
                 if(tx_overflow)begin 
                    axi_error_flags[1]<=1;
                end
            
            end
        end
    end

    always_ff @(posedge S_AXI_ACLK) begin
        if(!S_AXI_ARESETN)
            ccr_write_pulse <= 1'b0;
        else
            ccr_write_pulse <= (S_AXI_AWVALID && S_AXI_WVALID &&
                                    S_AXI_AWADDR == ADDR_QSPI_CCR);
    end
    always_ff @(posedge S_AXI_ACLK) begin
        if(!S_AXI_ARESETN)
            start_req <= 1'b0;
        else
            start_req <= ccr_write_pulse;  // tek driver
    end

endmodule
