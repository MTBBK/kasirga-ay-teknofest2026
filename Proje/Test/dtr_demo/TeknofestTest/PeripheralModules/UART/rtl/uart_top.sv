`timescale 1ns / 1ps

module uart_top #(
    parameter integer baud_rate = 921600, //(bps) Safe default for 115200 at 100MHz
    parameter integer clock_frequency = 100 //Mhz
) (
    // Physical UART Ports
    input  logic uart_rx_i,
    output logic uart_tx_o,

    // AXI4-Lite Interface Ports
    // Global Signals
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
    
    // Set Unused Channels
    assign S_AXI_BRESP = 2'b00;
    assign S_AXI_RRESP = 2'b00;
	//UART_CPB Calculation
	localparam int CPB_VALUE = (clock_frequency * 1000000) / baud_rate;	
    // Internal UART wires
    logic tx_done, rx_done, tx_busy;
    logic [31:0] rx_data_raw;
	logic rx_clear_trigger;
	assign rx_clear_trigger = (S_AXI_ARVALID && S_AXI_ARREADY && (S_AXI_ARADDR == ADDR_UART_RDR));
	
    // 1. AXI4-Lite Bus Signals & Handshaking
    logic axi_awready, axi_arready, axi_rvalid, axi_bvalid;

    logic [31:0] axi_rdata;
	
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
    
    // 2. Software Write Logic & Hardware Status Updates

    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            uart_cpb <= CPB_VALUE;
            uart_stp <= 32'd0;
            uart_tdr <= 32'd0;
            uart_cfg <= 32'd0;
        end else begin
            // Software Write Operations (AXI)
            if (axi_awready) begin
                case (S_AXI_AWADDR)
					ADDR_UART_CPB:begin // 0x00
				        if(S_AXI_WSTRB[0]) uart_cpb[7:0] <= S_AXI_WDATA[7:0];
				        if(S_AXI_WSTRB[1]) uart_cpb[15:8] <= S_AXI_WDATA[15:8];
				        if(S_AXI_WSTRB[2]) uart_cpb[23:16] <= S_AXI_WDATA[23:16];
				        if(S_AXI_WSTRB[3]) uart_cpb[31:24] <= S_AXI_WDATA[31:24];
				    end
					ADDR_UART_STP:begin // 0x04
				        if(S_AXI_WSTRB[0]) uart_stp[7:0] <= S_AXI_WDATA[7:0];
				        if(S_AXI_WSTRB[1]) uart_stp[15:8] <= S_AXI_WDATA[15:8];
				        if(S_AXI_WSTRB[2]) uart_stp[23:16] <= S_AXI_WDATA[23:16];
				        if(S_AXI_WSTRB[3]) uart_stp[31:24] <= S_AXI_WDATA[31:24];
				    end
                    // ADDR_UART_RDR 0x08 is RDR (Read Only)
					ADDR_UART_TDR:begin // 0x0C
				        if(S_AXI_WSTRB[0]) uart_tdr[7:0] <= S_AXI_WDATA[7:0];
				        if(S_AXI_WSTRB[1]) uart_tdr[15:8] <= S_AXI_WDATA[15:8];
				        if(S_AXI_WSTRB[2]) uart_tdr[23:16] <= S_AXI_WDATA[23:16];
				        if(S_AXI_WSTRB[3]) uart_tdr[31:24] <= S_AXI_WDATA[31:24];
				    end
					ADDR_UART_CFG:begin // 0x10
				        if(S_AXI_WSTRB[0]) begin
				            uart_cfg[0] <= S_AXI_WDATA[0];
				            // Clear tx_done when a new TX is started
				            if (S_AXI_WDATA[0]) uart_cfg[2] <= 1'b0;
				        end
				    end
                endcase
            end

            if (rx_done) begin
                uart_cfg[1] <= 1'b1; // Set data received bit
            end
            
            // Clear rx_data_ready when software reads RDR
            if (rx_clear_trigger) begin
                uart_cfg[1] <= 1'b0;
            end
            
            if (tx_done) begin
                uart_cfg[0] <= 1'b0; // Clear transmit start bit
                uart_cfg[2] <= 1'b1; // Set transmit completed bit
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
       	            
        // When the AXI bus successfully reads the RDR register, clear it!
        else if (S_AXI_ARVALID && S_AXI_ARREADY && (S_AXI_ARADDR == ADDR_UART_RDR))
            uart_rdr <= 32'd0; 
    end

    // 3. Software Read Logic

    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_rdata <= 32'd0;
        end else if (axi_arready) begin
            case (S_AXI_ARADDR)
                ADDR_UART_CPB: axi_rdata <= uart_cpb;
                ADDR_UART_STP: axi_rdata <= uart_stp;
                ADDR_UART_RDR: axi_rdata <= uart_rdr;
                ADDR_UART_TDR: axi_rdata <= uart_tdr;
                ADDR_UART_CFG: axi_rdata <= uart_cfg;
                default: axi_rdata <= 32'd0;
            endcase
        end
    end

    // 4. Instantiating your Core Logic
    
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
        .uart_tdr(uart_tdr),
        .tx_enable(uart_cfg[0]),
        .tx_busy(tx_busy),
        .tx_done(tx_done),
        .tx_out(uart_tx_o)
    );
endmodule
