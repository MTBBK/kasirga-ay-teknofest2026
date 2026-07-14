`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/30/2026 11:54:36 AM
// Design Name: 
// Module Name: uart_tx
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


module uart_tx(
    input  logic        clock_i,
    input  logic        reset_i,
    input  logic [31:0] uart_cpb, // Clock-per-bit 
    input  logic [31:0] uart_stp, // Stop bit config 
    input  logic [31:0] uart_tdr, // Data to transmit 
    input  logic        tx_enable, // UART_CFG[0] 
 	
 	output logic 		tx_busy,
    output logic        tx_done,   // UART_CFG[2] 
    output logic        tx_out     // Serial output 
);

    typedef enum logic [1:0] {IDLE, START, FLOW, STOP} states_e;
    states_e state, state_next;
	
	assign tx_busy = (state != IDLE) || (state_next != IDLE);
	
    logic [31:0] baud_counter, baud_counter_next;
    logic [31:0] stop_limit;
    logic [7:0]  data_latch, data_latch_next;
    logic [2:0]  bit_index, bit_index_next;

    always_ff @(posedge clock_i or negedge reset_i) begin
        if (!reset_i) begin
            state        <= IDLE;
            baud_counter <= 0;
            bit_index    <= 0;
            data_latch   <= 8'h0;
        end else begin
            state        <= state_next;
            baud_counter <= baud_counter_next;
            bit_index    <= bit_index_next;
            data_latch   <= data_latch_next;
        end
    end

    always_comb begin
        state_next        = state;
        baud_counter_next = baud_counter;
        bit_index_next    = bit_index;
        data_latch_next   = data_latch;
        tx_out            = 1'b1; // Idle high 
        tx_done           = 1'b0;

        // Calculate stop limit based on UART_STP [cite: 3, 4]
        case(uart_stp[1:0])
            2'b00:   stop_limit = uart_cpb;                    // 1 Stop bit
            2'b01:   stop_limit = uart_cpb + (uart_cpb >> 1);  // 1.5 Stop bits
            2'b10, 
            2'b11:   stop_limit = (uart_cpb << 1);             // 2 Stop bits
            default: stop_limit = uart_cpb;
        endcase

        case(state)
            IDLE: begin
                if (tx_enable) begin
                    data_latch_next   = uart_tdr[7:0];
                    state_next        = START;
                    baud_counter_next = 0;
                end
            end
            START: begin
                tx_out = 1'b0; // Start bit
                if (baud_counter >= uart_cpb - 1) begin
                    baud_counter_next = 0;
                    state_next        = FLOW;
                    bit_index_next    = 0;
                end else begin
                    baud_counter_next = baud_counter + 1;
                end
            end
            FLOW: begin
                tx_out = data_latch[bit_index];
                if (baud_counter >= uart_cpb - 1) begin
                    baud_counter_next = 0;
                    if (bit_index == 3'd7) begin
                        state_next = STOP;
                    end else begin
                        bit_index_next = bit_index + 1;
                    end
                end else begin
                    baud_counter_next = baud_counter + 1;
                end
            end
            STOP: begin
                tx_out = 1'b1;
                if (baud_counter >= stop_limit - 1) begin
                    baud_counter_next = 0;
                    tx_done           = 1'b1; // Set UART_CFG[2] 
                    state_next        = IDLE;
                end else begin
                    baud_counter_next = baud_counter + 1;
                end
            end
        endcase
    end
endmodule
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 04/30/2026 11:54:36 AM
// Design Name: 
// Module Name: uart_tx
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


module uart_rx (
    input  logic        clock_i,
    input  logic        reset_i,
    
    input  logic [31:0] uart_cpb,
    input  logic [31:0] uart_stp, // Added to match register map
    input  logic        rx_in,
    input  logic        rx_clear, // To clear UART_CFG[1] 

    output logic [31:0]  uart_rdr, // Data register 
    output logic        rx_done   // UART_CFG[1] 
);

    typedef enum logic [1:0] {IDLE, START, FLOW, STOP} states_e;
    states_e state, state_next;

    logic [31:0] baud_cnt, baud_cnt_next;
    logic [31:0] stop_limit; // Logic to handle variable stop lengths
    logic [2:0]  bit_idx, bit_idx_next;
    logic [31:0]  rx_shifter, rx_shifter_next;
    logic        done_reg, done_next;

    always_ff @(posedge clock_i or negedge reset_i) begin
        if (!reset_i) begin
            state      <= IDLE;
            baud_cnt   <= 0;
            bit_idx    <= 0;
            rx_shifter <= 32'h0;
            done_reg   <= 1'b0;
        end else begin
            state      <= state_next;
            baud_cnt   <= baud_cnt_next;
            bit_idx    <= bit_idx_next;
            rx_shifter <= rx_shifter_next;
            // SW Clear logic for UART_CFG[1]
            done_reg   <= rx_clear ? 1'b0 : done_next; 
        end
    end

    always_comb begin
        state_next      = state;
        baud_cnt_next   = baud_cnt;
        bit_idx_next    = bit_idx;
        rx_shifter_next = rx_shifter;
        done_next       = done_reg;

        // Calculate stop limit based on UART_STP[1:0] specs 
        case(uart_stp[1:0])
            2'b00:   stop_limit = uart_cpb;                    // 1 Stop bit
            2'b01:   stop_limit = uart_cpb + (uart_cpb >> 1);  // 1.5 Stop bits
            2'b10, 
            2'b11:   stop_limit = (uart_cpb << 1);             // 2 Stop bits
            default: stop_limit = uart_cpb;
        endcase

        case (state)
            IDLE: begin
                baud_cnt_next = 0;
                bit_idx_next  = 0;
                if (rx_in == 1'b0) begin // Start bit detection
                    state_next = START;
                end
            end
            START: begin
                if (baud_cnt >= (uart_cpb >> 1)) begin // Sample middle
                    state_next = FLOW;
                    baud_cnt_next = 0;
                    bit_idx_next = 0;
                end else baud_cnt_next = baud_cnt + 1;
            end
            FLOW: begin
                if (baud_cnt >= uart_cpb - 1) begin
                    rx_shifter_next[bit_idx] = rx_in;
                    baud_cnt_next = 0;
                    if (bit_idx == 3'd7) state_next = STOP;
                    else bit_idx_next = bit_idx + 1;
                end else baud_cnt_next = baud_cnt + 1;
            end
            STOP: begin
                // Wait for the duration specified by uart_stp
                if (baud_cnt >= stop_limit - 1) begin
                    done_next = 1'b1; // Set UART_CFG[1]
                    state_next = IDLE;
                end else baud_cnt_next = baud_cnt + 1;
            end
        endcase
    end
    
    assign uart_rdr = rx_shifter;
    assign rx_done  = done_reg;
endmodule
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
