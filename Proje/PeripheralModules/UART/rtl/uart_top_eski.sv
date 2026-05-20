`timescale 1ns / 1ps

module uart_top #(
    parameter integer baud_rate = 115200,  //(bps) Safe default for 115200 at 100MHz
    parameter integer clock_frequency = 100 //Mhz
) (
    // Physical UART Ports
    input  logic uart_rx_i,
    output logic uart_tx_o,
    
    // AXI4-Lite Interface Ports
    // Global Signals
    input  logic S_AXI_ACLK, //Clock
    input  logic S_AXI_ARESETN, //Reset
    // Write Address Channel
    input  logic [31:0] S_AXI_AWADDR,
    input  logic        S_AXI_AWVALID,
    output logic        S_AXI_AWREADY,
    // Write Data Channel
    input  logic [31:0] S_AXI_WDATA,
    input  logic [3:0]  S_AXI_WSTRB,
    input  logic        S_AXI_WVALID,
    output logic        S_AXI_WREADY,
    // Write Response Channel
    output logic [1:0]  S_AXI_BRESP,
    output logic        S_AXI_BVALID,
    input  logic        S_AXI_BREADY,
    // Read Address Channel
    input  logic [31:0] S_AXI_ARADDR,
    input  logic        S_AXI_ARVALID,
    output logic        S_AXI_ARREADY,
    // Read Data Channel
    output logic [31:0] S_AXI_RDATA,
    output logic [1:0]  S_AXI_RRESP,
    output logic        S_AXI_RVALID,
    input  logic        S_AXI_RREADY
);

	//User Registers (Memory Map)
    localparam  ADDR_UART_CPB = 32'h00005000,
                ADDR_UART_STP = 32'h00005004,
                ADDR_UART_RDR = 32'h00005008, 
                ADDR_UART_TDR = 32'h0000500C, 
                ADDR_UART_CFG = 32'h00005010; 
	
	//UART_CPB Calculation
    logic [31:0] uart_cpb = (clock_frequency * 1000000) / baud_rate; // Offset 0x00
    logic [31:0] uart_stp; // Offset 0x04
    logic [31:0] uart_rdr; // Offset 0x08 (Read Only)
    logic [31:0] uart_tdr; // Offset 0x0C
    logic [31:0] uart_cfg; // Offset 0x10
    
    //Internal UART wires
    wire rx_done;
    wire [31:0] rx_data_raw;
    wire tx_done;
    wire tx_busy;
    
    // Changing from comb 'assign' to registered 'logic'
    logic auto_tx_start;

    // AXI4-Lite Handshake Logic
    logic axi_awready, axi_wready, axi_bvalid;
    logic axi_arready, axi_rvalid;
    
    assign S_AXI_AWREADY = axi_awready;
    assign S_AXI_WREADY  = axi_wready;
    assign S_AXI_BRESP   = 2'b00; // Set Unused Channel
    assign S_AXI_BVALID  = axi_bvalid;
    assign S_AXI_ARREADY = axi_arready;
    assign S_AXI_RRESP   = 2'b00; // Set Unused Channel
    assign S_AXI_RVALID  = axi_rvalid;

    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_awready <= 0; axi_wready <= 0; axi_bvalid <= 0;
            axi_arready <= 0; axi_rvalid <= 0;
        end else begin
        	//Write handshake
            axi_awready <= (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID);
            axi_wready  <= (~axi_wready && S_AXI_AWVALID && S_AXI_WVALID);
            if (axi_awready && axi_wready) axi_bvalid <= 1'b1;
            else if (S_AXI_BREADY && axi_bvalid) axi_bvalid <= 1'b0;
			//Read handshake
            axi_arready <= (~axi_arready && S_AXI_ARVALID);
            if (axi_arready && ~axi_rvalid) axi_rvalid <= 1'b1;
            else if (axi_rvalid && S_AXI_RREADY) axi_rvalid <= 1'b0;
        end
    end

    // AUTO-START TRIGGER: Registered to delay by 1 clock cycle so uart_tdr updates first
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            auto_tx_start <= 1'b0;
        end else begin
            auto_tx_start <= (S_AXI_AWVALID && S_AXI_WVALID && axi_awready && axi_wready && (S_AXI_AWADDR == ADDR_UART_TDR));
        end
    end

    // Write Logic and Auto-Clear Logic
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
        	uart_stp <= 32'd0;
            uart_tdr <= 32'd0;
            uart_cfg <= 32'd0;
        end else begin
            //Hardware Status Priorities
            if (rx_done) begin
                uart_cfg[1] <= 1'b1; //Set data received bit, flag data ready
            end else if (S_AXI_ARVALID && axi_arready && (S_AXI_ARADDR == ADDR_UART_RDR)) begin
                uart_cfg[1] <= 1'b0; // Auto clear flag when RDR is read
            end

            if (tx_done) uart_cfg[2] <= 1'b1; //Set transmit completed bit

            //Software Write
            if (S_AXI_AWVALID && S_AXI_WVALID && axi_awready && axi_wready) begin
                case (S_AXI_AWADDR)
                    ADDR_UART_TDR: if (S_AXI_WSTRB[0]) uart_tdr[7:0] <= S_AXI_WDATA[7:0];
                    ADDR_UART_CFG: if (S_AXI_WSTRB[0]) uart_cfg[0] <= S_AXI_WDATA[0]; 
                endcase
            end
        end
    end

    //RX Capture
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) 
            uart_rdr <= 32'd0;
        else if (rx_done) 
            uart_rdr <= rx_data_raw;
            
        // When the AXI bus successfully reads the RDR register, clear it!
        else if (S_AXI_ARVALID && S_AXI_ARREADY && (S_AXI_ARADDR == ADDR_UART_RDR))
            uart_rdr <= 32'd0; 
    end

    //Software Read Logic
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            S_AXI_RDATA <= 32'd0;
        end else if (axi_arready) begin
            case (S_AXI_ARADDR)
                ADDR_UART_CPB: S_AXI_RDATA <= uart_cpb;
                ADDR_UART_STP: S_AXI_RDATA <= uart_stp;
                ADDR_UART_RDR: S_AXI_RDATA <= uart_rdr;
                ADDR_UART_TDR: S_AXI_RDATA <= uart_tdr;
                //tx_busy is mapped to uart_cfg[3]
                ADDR_UART_CFG: S_AXI_RDATA <= {uart_cfg[31:4], tx_busy, uart_cfg[2:0]};
                default: S_AXI_RDATA <= 32'd0;
            endcase
        end
    end

    // Core Instantiations
    uart_rx RX (
        .clock_i(S_AXI_ACLK),
        .reset_i(S_AXI_ARESETN),
        .uart_cpb(uart_cpb), 
        .uart_stp(uart_stp),
        .rx_in(uart_rx_i), 
        .rx_clear(1'b0),
        .uart_rdr(rx_data_raw), 
        .rx_done(rx_done)
    );

    uart_tx TX (
        .clock_i(S_AXI_ACLK), 
        .reset_i(S_AXI_ARESETN),
        .uart_cpb(uart_cpb), 
        .uart_stp(uart_stp),
        .uart_tdr(uart_tdr),
        .tx_enable(auto_tx_start),
        .tx_busy(tx_busy), //uart_cfg[3]
        .tx_done(tx_done), 
        .tx_out(uart_tx_o)
    );
endmodule
