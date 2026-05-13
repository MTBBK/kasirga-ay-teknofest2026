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
    input logic clk,
    input logic rst_n,
    
    output logic sclk,
    output logic cs,
    
    output logic [3:0]  qspi_data_o,  
    input  logic [3:0]  qspi_data_i,  
    output logic [3:0]  qspi_data_oe,
    
    // AXI-4 Lite Interface
    input logic AWVALID,
    output logic AWREADY,
    input logic [31:0] AWADDR,

    input logic WVALID,
    output logic WREADY,
    input logic [31:0] WDATA,
    input logic [3:0] WSTRB,

    output logic BVALID,
    input logic BREADY,
    output logic [1:0] BRESP,

    input logic ARVALID,
    output logic ARREADY,
    input logic [31:0] ARADDR,

    output logic RVALID,
    input logic RREADY,
    output logic [31:0] RDATA,
    output logic [1:0] RRESP
    );
    
    
    localparam ADDR_QSPI_CCR=32'h0009_0000,
               ADDR_QSPI_ADR=32'h0009_0004,
               ADDR_QSPI_DR=32'h0009_0008,
               ADDR_QSPI_STA=32'h0009_000C,
               ADDR_QSPI_FCR=32'h0009_0010;
               
    logic [31:0] QSPI_CCR;
    logic [31:0] QSPI_ADR;
    logic [31:0] QSPI_STA;
    logic [31:0] QSPI_FCR;
    
    
    logic start_req;
    logic [31:0] tx_data_i;
    logic [31:0] rx_data_o;

    logic [31:0] axi_rx_data;
    
    logic [11:0] qspi_core_status;
    logic [3:0] axi_error_flags;
    assign QSPI_STA={20'd0,axi_error_flags|qspi_core_status[11:8],qspi_core_status[7:0]};   
    
    
    
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
        .clk(clk),
        .rst_n(rst_n),
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
        .clk(clk),
        .rst_n(rst_n),
        .flush(QSPI_FCR[0]),
        .wr_en(rx_fifo_wr_en),
        .data_in(rx_data_o),
        .rd_en(rx_fifo_rd_en),
        .data_out(axi_rx_data),
        .full(rx_fifo_full),
        .empty(rx_fifo_empty)
    );
    fifo #(.DATA_WIDTH(32),.DEPTH(64)) tx_fifo(
        .clk(clk),
        .rst_n(rst_n),
        .flush(QSPI_FCR[1]),
        .wr_en(tx_fifo_wr_en),
        .data_in(WDATA),
        .rd_en(tx_fifo_rd_en),
        .data_out(tx_data_i),
        .full(tx_fifo_full),
        .empty(tx_fifo_empty)
    );
    
    
    assign BRESP = 2'b00;
    assign RRESP = 2'b00;

    logic axi_rready, axi_awready;
    logic [31:0] axi_rdata;
    logic axi_bvalid, axi_rvalid;

    assign BVALID  = axi_bvalid;
    assign RVALID  = axi_rvalid;
    assign RDATA   = axi_rdata;
    assign WREADY  = axi_awready;
    assign AWREADY = axi_awready;
    assign ARREADY = axi_rready;
    
    logic axi_write_ready, axi_read_ready;
    
    assign axi_write_ready = axi_awready;
    assign axi_read_ready = (ARVALID && ARREADY);

    assign start_req = (axi_write_ready && (AWADDR == ADDR_QSPI_CCR));
    assign tx_fifo_wr_en = (axi_write_ready && (AWADDR == ADDR_QSPI_DR)&&!tx_fifo_full);
    assign rx_fifo_rd_en = (axi_read_ready && (ARADDR == ADDR_QSPI_DR)&&!rx_fifo_empty);
    assign rx_underflow = axi_read_ready && (ARADDR == ADDR_QSPI_DR) && rx_fifo_empty;
    assign tx_overflow = axi_write_ready && (AWADDR == ADDR_QSPI_DR) && tx_fifo_full;

    always_ff @(posedge clk) begin
        if(!rst_n) begin
            QSPI_CCR<=32'd0;
            QSPI_ADR<=32'd0;
            QSPI_FCR<=32'd0;
            axi_error_flags<=4'd0;
        end
        else begin
            QSPI_FCR<=32'd0;
            if (axi_write_ready)begin 
                case(AWADDR) 
                ADDR_QSPI_CCR:begin 
                    if(WSTRB[0]) QSPI_CCR[7:0]<=WDATA[7:0];
                    if(WSTRB[1]) QSPI_CCR[15:8]<=WDATA[15:8];
                    if(WSTRB[2]) QSPI_CCR[23:16]<=WDATA[23:16];
                    if(WSTRB[3]) QSPI_CCR[31:24]<=WDATA[31:24]; 
                end
                ADDR_QSPI_ADR:begin 
                    if(WSTRB[0]) QSPI_ADR[7:0]<=WDATA[7:0];
                    if(WSTRB[1]) QSPI_ADR[15:8]<=WDATA[15:8];
                    if(WSTRB[2]) QSPI_ADR[23:16]<=WDATA[23:16];
                    if(WSTRB[3]) QSPI_ADR[31:24]<=WDATA[31:24]; 
                end
                ADDR_QSPI_FCR:begin 
                    if(WSTRB[0]) QSPI_FCR[7:0]<=WDATA[7:0];
                    if(WSTRB[1]) QSPI_FCR[15:8]<=WDATA[15:8];
                    if(WSTRB[2]) QSPI_FCR[23:16]<=WDATA[23:16];
                    if(WSTRB[3]) QSPI_FCR[31:24]<=WDATA[31:24];
                end 
                endcase
            end                     
       end
    end

    // Read
    always_ff @(posedge clk) begin
        if(!rst_n)
            axi_rdata <= 32'b0;
        else if(axi_read_ready) begin
            case(ARADDR)
                ADDR_QSPI_CCR:  axi_rdata<=QSPI_CCR;
                ADDR_QSPI_ADR:  axi_rdata<=QSPI_ADR;
                ADDR_QSPI_DR:begin
                    if(rx_fifo_empty)begin
                        axi_rdata<=32'd0;
                    end    
                    else begin
                        axi_rdata<=axi_rx_data; 
                    end                
                end
                ADDR_QSPI_STA:  axi_rdata<=QSPI_STA;
                ADDR_QSPI_FCR:  axi_rdata<=QSPI_FCR;
                default:       axi_rdata <= 32'h0;
            endcase
        end
    end
    
    always_ff @(posedge clk)begin 
        if(!rst_n)begin 
            axi_error_flags<=4'd0;
        end
        else begin 
            if (axi_write_ready && WSTRB[3] && WDATA[31] &&AWADDR==ADDR_QSPI_CCR) axi_error_flags <= 4'd0;
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

    always_ff @(posedge clk) begin
        if(!rst_n)
            axi_bvalid <= 1'b0;
        else if(axi_write_ready)
            axi_bvalid <= 1'b1;
        else if(BREADY)
            axi_bvalid <= 1'b0;
    end

    always_ff @(posedge clk) begin
        if(!rst_n)
            axi_rvalid <= 1'b0;
        else if(axi_read_ready)
            axi_rvalid <= 1'b1;
        else if(RREADY)
            axi_rvalid <= 1'b0;
    end

    always_ff @(posedge clk) begin
        if(!rst_n)
            axi_awready <= 1'b0;
        else 
            axi_awready <= !axi_awready && (AWVALID && WVALID) && (!BVALID);
    end

    always_comb begin
        axi_rready = !RVALID;
    end

endmodule
