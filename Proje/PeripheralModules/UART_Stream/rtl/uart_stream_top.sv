`timescale 1ns / 1ps

module uart_stream_top #(
    parameter integer baud_rate = 921600, //(bps) 
    parameter integer clock_frequency = 100 //Mhz
) (
    // Physical UART Ports
    input  logic uart_rx_i,
    output logic uart_tx_o,

    // AXI4-Lite Interface Ports
    input  logic        S_AXI_ACLK, 
    input  logic        S_AXI_ARESETN, 
    // Write Address
    input  logic [31:0] S_AXI_AWADDR,
    input  logic        S_AXI_AWVALID,
    output logic        S_AXI_AWREADY,
    // Write Data
    input  logic [31:0] S_AXI_WDATA,
    input  logic [3:0]  S_AXI_WSTRB,
    input  logic        S_AXI_WVALID,
    output logic        S_AXI_WREADY,
    // Write Response
    output logic [1:0]  S_AXI_BRESP,
    output logic        S_AXI_BVALID,
    input  logic        S_AXI_BREADY,
    // Read Address
    input  logic [31:0] S_AXI_ARADDR,
    input  logic        S_AXI_ARVALID,
    output logic        S_AXI_ARREADY,
    // Read Data
    output logic [31:0] S_AXI_RDATA,
    output logic        S_AXI_RVALID,
    output logic [1:0]  S_AXI_RRESP,
    input  logic        S_AXI_RREADY,
    
    output logic [7:0]  stream_rx_byte_o,      
    output logic        stream_rx_byte_valid_o, 
    
    output logic [31:0] fsm_tx_start_addr_o,        
    output logic        fsm_tx_trigger_o,     
    input  logic        fsm_tx_dump_done_i,   
    input  logic [31:0] fsm_read_data_i,  
    input  logic        fsm_stream_done_i,
    
    input  logic        hw_rx_clear_i,   // YENİ EKLENDİ
    output logic        stream_enable_o,  // YENİ EKLENDİ
    input  logic        accelerator_started,
    input  logic        accelerator_done,
    input logic write_done_i,
    input logic loader_done_i,
    input logic loader_started_i,
    input logic infer_done_i
);

    // User Registers (Memory Map)
    localparam  ADDR_UART_CPB = 32'h00006000,
                ADDR_UART_STP = 32'h00006004,
                ADDR_UART_RDR = 32'h00006008, 
                ADDR_UART_TDR = 32'h0000600C, 
                ADDR_UART_CFG = 32'h00006010,
                ADDR_TX_DUMP_ADR  = 32'h00006014,
                ADDR_TX_DUMP_DATA = 32'h00006018;
                
    // UART_CPB Calculation
    localparam int CPB_VALUE = (clock_frequency * 1000000) / baud_rate; 
    
    logic [31:0] uart_cpb; 
    logic [31:0] uart_stp; 
    logic [31:0] uart_rdr; 
    logic [31:0] uart_tdr; 
    logic [31:0] uart_cfg; 
    logic [31:0] tx_dump_adr;
    
    assign fsm_tx_start_addr_o = tx_dump_adr;
    assign fsm_tx_trigger_o    = uart_cfg[3]; 
    
    assign stream_enable_o = uart_cfg[5];
    
    // Set Unused Channels
    assign S_AXI_BRESP = 2'b00;
    assign S_AXI_RRESP = 2'b00;

    // Internal UART wires
    logic tx_done, rx_done, tx_busy;
    logic [31:0] rx_data_raw;
    
    logic rx_clear_trigger; 
    assign rx_clear_trigger = (S_AXI_ARVALID && S_AXI_ARREADY && (S_AXI_ARADDR == ADDR_UART_RDR)) || hw_rx_clear_i;
    
    // 1. AXI4-Lite Bus Signals & Handshaking
    logic axi_awready, axi_arready, axi_rvalid, axi_bvalid;
    logic [31:0] axi_rdata;
    
    assign S_AXI_AWREADY = axi_awready;
    assign S_AXI_WREADY  = axi_awready;
    assign S_AXI_ARREADY = axi_arready;
    assign S_AXI_BVALID  = axi_bvalid;
    assign S_AXI_RDATA   = axi_rdata;
    assign S_AXI_RVALID  = axi_rvalid;

    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_awready <= 1'b0;
            axi_bvalid  <= 1'b0;
            axi_arready <= 1'b0;
            axi_rvalid  <= 1'b0;
        end else begin
            axi_awready <= (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID);
            if (axi_awready && ~axi_bvalid)
                axi_bvalid <= 1'b1;
            else if (S_AXI_BREADY && axi_bvalid)
                axi_bvalid <= 1'b0;

            axi_arready <= (~axi_arready && S_AXI_ARVALID);
            if (axi_arready && ~axi_rvalid)
                axi_rvalid <= 1'b1;
            else if (axi_rvalid && S_AXI_RREADY)
                axi_rvalid <= 1'b0;
        end
    end
    
    // 2. Software Write Logic & Hardware Status Updates
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            uart_cpb    <= CPB_VALUE;
            uart_stp    <= 32'd0;
            uart_tdr    <= 32'd0;
            uart_cfg    <= 32'd0;
            tx_dump_adr <= 32'd0;
        end else begin
            if (axi_awready) begin
                case (S_AXI_AWADDR)
                    ADDR_UART_CPB: begin
                        if(S_AXI_WSTRB[0]) uart_cpb[7:0]   <= S_AXI_WDATA[7:0];
                        if(S_AXI_WSTRB[1]) uart_cpb[15:8]  <= S_AXI_WDATA[15:8];
                        if(S_AXI_WSTRB[2]) uart_cpb[23:16] <= S_AXI_WDATA[23:16];
                        if(S_AXI_WSTRB[3]) uart_cpb[31:24] <= S_AXI_WDATA[31:24];
                    end
                    ADDR_UART_STP: begin
                        if(S_AXI_WSTRB[0]) uart_stp[7:0]   <= S_AXI_WDATA[7:0];
                        if(S_AXI_WSTRB[1]) uart_stp[15:8]  <= S_AXI_WDATA[15:8];
                        if(S_AXI_WSTRB[2]) uart_stp[23:16] <= S_AXI_WDATA[23:16];
                        if(S_AXI_WSTRB[3]) uart_stp[31:24] <= S_AXI_WDATA[31:24];
                    end
                    ADDR_UART_TDR: begin
                        if(S_AXI_WSTRB[0]) uart_tdr[7:0]   <= S_AXI_WDATA[7:0];
                        if(S_AXI_WSTRB[1]) uart_tdr[15:8]  <= S_AXI_WDATA[15:8];
                        if(S_AXI_WSTRB[2]) uart_tdr[23:16] <= S_AXI_WDATA[23:16];
                        if(S_AXI_WSTRB[3]) uart_tdr[31:24] <= S_AXI_WDATA[31:24];
                    end
                    ADDR_UART_CFG: begin
                        if(S_AXI_WSTRB[0]) begin
                            uart_cfg[0] <= S_AXI_WDATA[0];
                            uart_cfg[3] <= S_AXI_WDATA[3];
                            uart_cfg[5] <= S_AXI_WDATA[5]; 
                            if (S_AXI_WDATA[0]) uart_cfg[2] <= 1'b0;
                        end
                    end
                    ADDR_TX_DUMP_ADR: begin 
                        if(S_AXI_WSTRB[0]) tx_dump_adr[7:0]   <= S_AXI_WDATA[7:0];
                        if(S_AXI_WSTRB[1]) tx_dump_adr[15:8]  <= S_AXI_WDATA[15:8];
                        if(S_AXI_WSTRB[2]) tx_dump_adr[23:16] <= S_AXI_WDATA[23:16];
                        if(S_AXI_WSTRB[3]) tx_dump_adr[31:24] <= S_AXI_WDATA[31:24];
                    end
                endcase
            end

            if (rx_done) begin
                uart_cfg[1] <= 1'b1; 
            end
            if (rx_clear_trigger) begin
                uart_cfg[1] <= 1'b0;
            end
            if (accelerator_started) uart_cfg[6] <= 1'b1;
            if (accelerator_done )    uart_cfg[7] <= 1'b1;
            if (write_done_i    ) uart_cfg[8] <= 1'b1;
            if (loader_done_i   )    uart_cfg[9] <= 1'b1;
            if (loader_started_i) uart_cfg[10] <= 1'b1;
            if (infer_done_i     )    uart_cfg[11] <= 1'b1;
            if (fsm_tx_dump_done_i) uart_cfg[3] <= 1'b0;
            
            if (fsm_stream_done_i) begin
                uart_cfg[4] <= 1'b1; // Done bayrağını 1 yap
                uart_cfg[5] <= 1'b0; // YENİ: Stream Enable'ı otomatik kapat!
            end 
            else if (axi_awready && (S_AXI_AWADDR == ADDR_UART_CFG) && S_AXI_WSTRB[0] && (S_AXI_WDATA[4] == 1'b0)) begin
                uart_cfg[4] <= 1'b0;
            end
            
            if (tx_done) begin
                uart_cfg[0] <= 1'b0; 
                uart_cfg[2] <= 1'b1; 
            end
        end
    end

    // Capture RX Data when it's done
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            uart_rdr <= 32'd0;
        end else if (rx_done) begin
            uart_rdr <= rx_data_raw;
        end
        else if (S_AXI_ARVALID && S_AXI_ARREADY && (S_AXI_ARADDR == ADDR_UART_RDR)) begin
            uart_rdr <= 32'd0; 
        end
    end

    // 3. Software Read Logic
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_rdata <= 32'd0;
        end else if (axi_arready) begin
            case (S_AXI_ARADDR)
                ADDR_UART_CPB:     axi_rdata <= uart_cpb;
                ADDR_UART_STP:     axi_rdata <= uart_stp;
                ADDR_UART_RDR:     axi_rdata <= uart_rdr;
                ADDR_UART_TDR:     axi_rdata <= uart_tdr;
                ADDR_UART_CFG:     axi_rdata <= uart_cfg;
                ADDR_TX_DUMP_ADR:  axi_rdata <= tx_dump_adr;
                ADDR_TX_DUMP_DATA: axi_rdata <= fsm_read_data_i;
                default:           axi_rdata <= 32'd0;
            endcase
        end
    end

    // 4. Instantiating Core Logic
    uart_rx RX (
        .clock_i(S_AXI_ACLK),
        .reset_i(S_AXI_ARESETN),
        .uart_cpb(uart_cpb),
        .uart_stp(uart_stp),
        .rx_in(uart_rx_i),
        .rx_clear(rx_clear_trigger),
        .uart_rdr(rx_data_raw),
        .rx_done(rx_done)
    );
    
    uart_tx TX (
        .clock_i(S_AXI_ACLK),
        .reset_i(S_AXI_ARESETN),
        .uart_cpb(uart_cpb),
        .uart_stp(uart_stp),
        .uart_tdr({24'd0, uart_tdr[7:0]}),
        .tx_enable(uart_cfg[0]),
        .tx_busy(tx_busy),
        .tx_done(tx_done),
        .tx_out(uart_tx_o)
    );
    
    assign stream_rx_byte_o       = rx_data_raw[7:0];
    assign stream_rx_byte_valid_o = rx_done;

endmodule


