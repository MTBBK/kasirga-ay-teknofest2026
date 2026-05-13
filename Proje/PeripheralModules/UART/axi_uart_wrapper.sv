`timescale 1ns / 1ps

module axi_uart_wrapper #(
    parameter integer baud_rate = 115200, //bps // Safe default for 115200 at 100MHz
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
    // Write Response Channel
    output logic                                S_AXI_BVALID,
    input  logic                                S_AXI_BREADY,
    // Read Address Channel
    input  logic [31:0]						    S_AXI_ARADDR,
    input  logic                                S_AXI_ARVALID,
    output logic                                S_AXI_ARREADY,
    // Read Data Channel
    output logic [31:0]						    S_AXI_RDATA,
    output logic                                S_AXI_RVALID,
    input  logic                                S_AXI_RREADY
);
	//UART_CPB Calculation
	localparam int CPB_VALUE = (clock_frequency * 1000000) / baud_rate;	
    // Internal UART wires
    logic tx_done;
    logic rx_done;
    logic tx_busy;
    logic [31:0] rx_data;

    // 1. AXI4-Lite Bus Signals & Handshaking

    logic axi_awready;
    logic axi_arready;
    
    logic axi_rvalid;
    logic axi_bvalid;

    logic [31:0] axi_rdata;
	
    assign S_AXI_AWREADY = axi_awready && !tx_busy;
    assign S_AXI_ARREADY = axi_arready;
    
    assign S_AXI_BVALID  = axi_bvalid;

    assign S_AXI_RDATA   = axi_rdata;
    assign S_AXI_RVALID  = axi_rvalid;

    // Handshake logic (simplified standard AXI template)
    always_ff @(posedge S_AXI_ACLK) begin
        if (~S_AXI_ARESETN) begin
            axi_awready <= 1'b0;
            axi_bvalid  <= 1'b0;
            axi_arready <= 1'b0;
            axi_rvalid  <= 1'b0;
        end else begin
            // Write handshaking
            axi_awready <= (~axi_awready && S_AXI_AWVALID);
            
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


    // 2. User Registers (Memory Map)

    logic [31:0] uart_cpb, uart_cpb_next;      // Offset 0x00
    logic [31:0] uart_stp, uart_stp_next;      // Offset 0x04
    logic [31:0]  uart_rdr, uart_rdr_next;     // Offset 0x08 (Read Only)
    logic [31:0] uart_tdr, uart_tdr_next;      // Offset 0x0C
    logic [31:0] uart_cfg, uart_cfg_next;      // Offset 0x10
	
	localparam  ADDR_UART_CPB = 32'h00005000,
            	ADDR_UART_STP = 32'h00005004,
	            ADDR_UART_RDR = 32'h00005008,
                ADDR_UART_TDR = 32'h0000500C,
     	        ADDR_UART_CFG = 32'h00005010;


    logic axi_write_ready, axi_read_ready;

    assign axi_write_ready = S_AXI_AWREADY;
    assign axi_read_ready = S_AXI_ARREADY;

    // 3. Software Write Logic & Hardware Status Updates

    always_ff @(posedge S_AXI_ACLK) begin
        if (~S_AXI_ARESETN) begin
            uart_cpb <= CPB_VALUE;
            uart_stp <= 32'd0;
            uart_rdr <= 32'd0;
            uart_tdr <= 32'd0;
            uart_cfg <= 32'd0;
        end else begin
            // Hardware Status Updates
            if (rx_done) begin
                uart_cfg[1] <= 1'b1; // Set data received bit
            end
            
            if (tx_done) begin
                uart_cfg[0] <= 1'b0; // Clear transmit start bit
                uart_cfg[2] <= 1'b1; // Set transmit completed bit
            end

            // Software Write Operations (AXI)
            if (axi_write_ready) begin
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
				        if(S_AXI_WSTRB[0]) uart_cfg[7:0] <= S_AXI_WDATA[7:0];
				        if(S_AXI_WSTRB[1]) uart_cfg[15:8] <= S_AXI_WDATA[15:8];
				        if(S_AXI_WSTRB[2]) uart_cfg[23:16] <= S_AXI_WDATA[23:16];
				        if(S_AXI_WSTRB[3]) uart_cfg[31:24] <= S_AXI_WDATA[31:24];
				    end
                endcase
            end
            else begin
				uart_cpb <= uart_cpb_next;
				uart_stp <= uart_stp_next;
				uart_rdr <= uart_rdr_next;
				uart_tdr <= uart_tdr_next;
				uart_cfg <= uart_cfg_next;
			end
        end
    end

    // Capture RX Data when it's done
    always_ff @(posedge S_AXI_ACLK) begin
        if (~S_AXI_ARESETN) begin
            uart_rdr <= 32'd0;
        end else if (rx_done) begin
            uart_rdr <= rx_data;
        end
    end

    // 4. Software Read Logic

    always_ff @(posedge S_AXI_ACLK) begin
        if (~S_AXI_ARESETN) begin
            axi_rdata <= 32'd0;
        end else if (axi_read_ready) begin
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

    // 5. Hardware Triggers (Edges)

    // Detect 0->1 transition on CFG[0] to pulse tx_enable
    logic tx_start_pulse;
    assign tx_start_pulse = axi_write_ready && uart_cfg[0];

    // Detect 1->0 transition on CFG[1] to pulse rx_clear   
    logic rx_clear_pulse;
    assign rx_clear_pulse = uart_cfg[1];

    // 6. Instantiating your Core Logic
    
    uart_rx RX (
        .clock_i(S_AXI_ACLK),
        .reset_i(S_AXI_ARESETN),
        .uart_cpb(uart_cpb),
        .uart_stp(uart_stp),
        .rx_in(uart_rx_i),
        .rx_clear(rx_clear_pulse),
        .uart_rdr(rx_data),
        .rx_done(rx_done)
    );
    
    uart_tx TX (
        .clock_i(S_AXI_ACLK),
        .reset_i(S_AXI_ARESETN),
        .uart_cpb(uart_cpb),
        .uart_stp(uart_stp),
        .uart_tdr(uart_tdr),
        .tx_enable(tx_start_pulse),
        .tx_busy(tx_busy),
        .tx_done(tx_done),
        .tx_out(uart_tx_o)
    );
	
	// 7. Combinational
	always_comb begin
		uart_cpb_next <= uart_cpb;
		uart_stp_next <= uart_stp;
		uart_rdr_next <= uart_rdr;
		uart_tdr_next <= uart_tdr;
		uart_cfg_next <= uart_cfg;
	end
endmodule
