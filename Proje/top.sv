`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/01/2026 11:44:46 AM
// Design Name: 
// Module Name: top
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

`define ENABLE_JTAG
module top(
    input logic clk_i,
    input logic rst_n_i,
    input logic fetch_enable,
    
    input  logic uart_rx_i,
    output logic uart_tx_o,
    input logic uart_stream_rx_i,
    output logic uart_stream_tx_o,
    
    output logic scl_o,
    inout logic sda_io,
    
    output logic [15:0] gpio_o,
    input  logic [15:0] gpio_i,
    
    output logic sclk_o,
    output logic cs_o,
    inout wire qspi_io_0,
    inout wire qspi_io_1,
    inout wire qspi_io_2,
    inout wire qspi_io_3
`ifdef ENABLE_JTAG
    ,
    input  logic jtag_tck_i,
    input  logic jtag_tms_i,
    input  logic jtag_trst_ni,
    input  logic jtag_tdi_i,
    output logic jtag_tdo_o
`endif
    );
    
    parameter uart_baud_rate=921600;
    parameter clk_freq_Mhz=100;
    parameter clk_freq_Hz=50_000_000;
    
    logic interrupt_1_bit;
    //Data Memory obi-axi
    logic obi_req_data;        
    logic obi_gnt_data;         
    logic obi_rvalid_data;       
    logic [31:0] obi_addr_data;  
    logic [31:0] obi_wdata_data;
    logic obi_we_data;           
    logic [3:0] obi_be_data;     
    logic [31:0] obi_rdata_data;
                       
    
    //Instruction Memory obi-axi
    logic obi_req_instr_i;
    logic obi_gnt_instr_o;
    logic obi_rvalid_instr_o;
    logic [31:0] obi_addr_instr_i;
    logic [31:0] obi_rdata_instr_o;
    logic [31:0] axi_araddr_instr_o;
    logic axi_arvalid_instr_o;
    logic axi_arready_instr_i;
    logic [31:0] axi_rdata_instr_i;
    logic axi_rvalid_instr_i;
    logic axi_rready_instr_;

    // ---------------------------------------------------------------
    // JTAG / Debug Module (optional, see ENABLE_JTAG)
    // ---------------------------------------------------------------
    // Instruction bus, downstream of the demux, feeding obi_to_axi_readonly.
    // When ENABLE_JTAG is off these are simple pass-throughs of the core's
    // raw instruction OBI signals (see assigns below).
    wire        obi_req_instr_sys;
    wire        obi_gnt_instr_sys;
    wire        obi_rvalid_instr_sys;
    wire [31:0] obi_addr_instr_sys;
    wire [31:0] obi_rdata_instr_sys;

`ifdef ENABLE_JTAG
    logic        dbg_req_from_jtag;
    logic [31:0] dbg_halt_addr_from_jtag;
    logic [31:0] dbg_exception_addr_from_jtag;

    logic        instr_dbg_req;
    logic        instr_dbg_gnt;
    logic        instr_dbg_rvalid;
    logic [31:0] instr_dbg_addr;
    logic [31:0] instr_dbg_rdata;

    // Must match dm_jtag_subsystem's DmBaseAddress parameter below, AND
    // the xbar module's actual slv8 decode (xbar.sv: awaddr_master[19:12]
    // == 8'h10), so the window is 0x0001_0000-0x0001_0FFF.
    localparam logic [31:0] DBG_BASE_ADDR = 32'h0001_0000;
    localparam logic [31:0] DBG_ADDR_MASK = 32'h000F_F000; // mirrors xbar's [19:12] decode
`endif

    
    
    
    
    
    
    
    
    
    //XBAR Sýgnals

    // MASTER(core) INTERFACE
    // WRITE ADDRESS CHANNEL
    wire awvalid_master;
     wire awready_master;
    wire [31:0] awaddr_master;

    // WRITE DATA CHANNEL
    wire wvalid_master;
     wire wready_master;
    wire [31:0] wdata_master;
    wire [3:0] wstrb_master;

    // WRITE RESPONSE CHANNEL
     wire bvalid_master;
     wire bready_master;
     wire [1:0] bresp_master;

    // READ ADDRESS CHANNEL
    wire arvalid_master;
     wire arready_master;
    wire [31:0] araddr_master;

    // READ DATA CHANNEL
     wire rvalid_master;
    wire rready_master;
     wire [1:0] rresp_master;
     wire [31:0] rdata_master;


    // SLAVE0 (INSTRUCTION_MEMORY)
    // WRITE ADDRESS CHANNEL
     wire awvalid_slv0;
    wire awready_slv0;
     wire [31:0] awaddr_slv0;
    // WRITE DATA CHANNEL
     wire wvalid_slv0;
    wire wready_slv0;
     wire [31:0] wdata_slv0;
     wire [3:0]  wstrb_slv0;
    // WRITE RESPONSE CHANNEL
    wire bvalid_slv0;
     wire bready_slv0;
    wire [1:0] bresp_slv0;
    // READ ADDRESS CHANNEL
     wire arvalid_slv0;
    wire arready_slv0;
     wire [31:0] araddr_slv0;
    // READ DATA CHANNEL
    wire rvalid_slv0;
     wire rready_slv0;
    wire [1:0] rresp_slv0;
    wire [31:0] rdata_slv0;

    // SLAVE1 (DATA MEMORY)
    // WRITE ADDRESS CHANNEL
     wire awvalid_slv1;
    wire awready_slv1;
     wire [31:0] awaddr_slv1;
    // WRITE DATA CHANNEL
     wire wvalid_slv1;
    wire wready_slv1;
     wire [31:0] wdata_slv1;
     wire [3:0]  wstrb_slv1;
    // WRITE RESPONSE CHANNEL
    wire bvalid_slv1;
     wire bready_slv1;
    wire [1:0] bresp_slv1;
    // READ ADDRESS CHANNEL
     wire arvalid_slv1;
    wire arready_slv1;
     wire [31:0] araddr_slv1;
    // READ DATA CHANNEL
     wire rvalid_slv1;
     wire rready_slv1;
     wire [1:0] rresp_slv1;
     wire [31:0] rdata_slv1;

    // SLAVE2 (GPIO)
    // WRITE ADDRESS CHANNEL
     wire awvalid_slv2;
    wire awready_slv2;
     wire [31:0] awaddr_slv2;
    // WRITE DATA CHANNEL
     wire wvalid_slv2;
    wire wready_slv2;
     wire [31:0] wdata_slv2;
     wire [3:0] wstrb_slv2;
    // WRITE RESPONSE CHANNEL
     wire bvalid_slv2;
     wire bready_slv2;
     wire [1:0] bresp_slv2;
    // READ ADDRESS CHANNEL
     wire arvalid_slv2;
    wire arready_slv2;
     wire [31:0] araddr_slv2;
    // READ DATA CHANNEL
    wire rvalid_slv2;
     wire rready_slv2;
    wire [1:0] rresp_slv2;
    wire [31:0] rdata_slv2;

    // SLAVE3 (TIMER)
    // WRITE ADDRESS CHANNEL
     wire awvalid_slv3;
    wire awready_slv3;
     wire [31:0] awaddr_slv3;
    // WRITE DATA CHANNEL
     wire wvalid_slv3;
    wire wready_slv3;
     wire [31:0] wdata_slv3;
     wire [3:0] wstrb_slv3;
    // WRITE RESPONSE CHANNEL
    wire bvalid_slv3;
     wire bready_slv3;
    wire [1:0] bresp_slv3;
    // READ ADDRESS CHANNEL
     wire arvalid_slv3;
    wire arready_slv3;
     wire [31:0] araddr_slv3;
    // READ DATA CHANNEL
    wire rvalid_slv3;
     wire rready_slv3;
    wire [1:0] rresp_slv3;
    wire [31:0] rdata_slv3;

    // SLAVE4 (UART)
    // WRITE ADDRESS CHANNEL
     wire awvalid_slv4;
    wire awready_slv4;
     wire [31:0] awaddr_slv4;
    // WRITE DATA CHANNEL
     wire wvalid_slv4;
    wire wready_slv4;
     wire [31:0] wdata_slv4;
     wire [3:0] wstrb_slv4;
    // WRITE RESPONSE CHANNEL
    wire bvalid_slv4;
     wire bready_slv4;
    wire [1:0] bresp_slv4;
    // READ ADDRESS CHANNEL
     wire arvalid_slv4;
    wire arready_slv4;
     wire [31:0] araddr_slv4;
    // READ DATA CHANNEL
    wire rvalid_slv4;
     wire rready_slv4;
    wire [1:0] rresp_slv4;
    wire [31:0] rdata_slv4;

    // SLAVE5 (LDPC_UART)
    // WRITE ADDRESS CHANNEL
     wire awvalid_slv5;
    wire awready_slv5;
     wire [31:0] awaddr_slv5;
    // WRITE DATA CHANNEL
     wire wvalid_slv5;
    wire wready_slv5;
     wire [31:0] wdata_slv5;
     wire [3:0] wstrb_slv5;
    // WRITE RESPONSE CHANNEL
    wire bvalid_slv5;
     wire bready_slv5;
    wire [1:0] bresp_slv5;
    // READ ADDRESS CHANNEL
     wire arvalid_slv5;
    wire arready_slv5;
     wire [31:0] araddr_slv5;
    // READ DATA CHANNEL
    wire rvalid_slv5;
     wire rready_slv5;
    wire [1:0] rresp_slv5;
    wire [31:0] rdata_slv5;

    // SLAVE6 (I2C)
    // WRITE ADDRESS CHANNEL
     wire awvalid_slv6;
    wire awready_slv6;
     wire [31:0] awaddr_slv6;
    // WRITE DATA CHANNEL
     wire wvalid_slv6;
    wire wready_slv6;
     wire [31:0] wdata_slv6;
     wire [3:0] wstrb_slv6;
    // WRITE RESPONSE CHANNEL
    wire bvalid_slv6;
     wire bready_slv6;
    wire [1:0] bresp_slv6;
    // READ ADDRESS CHANNEL
     wire arvalid_slv6;
    wire arready_slv6;
     wire [31:0] araddr_slv6;
    // READ DATA CHANNEL
    wire rvalid_slv6;
     wire rready_slv6;
    wire [1:0] rresp_slv6;
    wire [31:0] rdata_slv6;

    // SLAVE7 (QSPI)
    // WRITE ADDRESS CHANNEL
     wire awvalid_slv7;
    wire awready_slv7;
     wire [31:0] awaddr_slv7;
    // WRITE DATA CHANNEL
     wire wvalid_slv7;
    wire wready_slv7;
     wire [31:0] wdata_slv7;
     wire [3:0] wstrb_slv7;
    // WRITE RESPONSE CHANNEL
    wire bvalid_slv7;
     wire bready_slv7;
    wire [1:0] bresp_slv7;
    // READ ADDRESS CHANNEL
    wire arvalid_slv7;
    wire arready_slv7;
    wire [31:0] araddr_slv7;
    // READ DATA CHANNEL
    wire rvalid_slv7;
     wire rready_slv7;
    wire [1:0] rresp_slv7;
    wire [31:0] rdata_slv7;
    
    // SLAVE8 (JTAG)
    // WRITE ADDRESS CHANNEL
     wire awvalid_slv8;
    wire awready_slv8;
     wire [31:0] awaddr_slv8;
    // WRITE DATA CHANNEL
     wire wvalid_slv8;
    wire wready_slv8;
     wire [31:0] wdata_slv8;
     wire [3:0] wstrb_slv8;
    // WRITE RESPONSE CHANNEL
    wire bvalid_slv8;
     wire bready_slv8;
    wire [1:0] bresp_slv8;
    // READ ADDRESS CHANNEL
    wire arvalid_slv8;
    wire arready_slv8;
    wire [31:0] araddr_slv8;
    // READ DATA CHANNEL
    wire rvalid_slv8;
     wire rready_slv8;
    wire [1:0] rresp_slv8;
    wire [31:0] rdata_slv8;
    
    // SLAVE9 (Hizlandirici)
    // WRITE ADDRESS CHANNEL
     wire awvalid_slv9;
    wire awready_slv9;
     wire [31:0] awaddr_slv9;
    // WRITE DATA CHANNEL
     wire wvalid_slv9;
    wire wready_slv9;
     wire [31:0] wdata_slv9;
     wire [3:0] wstrb_slv9;
    // WRITE RESPONSE CHANNEL
    wire bvalid_slv9;
     wire bready_slv9;
    wire [1:0] bresp_slv9;
    // READ ADDRESS CHANNEL
    wire arvalid_slv9;
    wire arready_slv9;
    wire [31:0] araddr_slv9;
    // READ DATA CHANNEL
    wire rvalid_slv9;
     wire rready_slv9;
    wire [1:0] rresp_slv9;
    wire [31:0] rdata_slv9;
    
    
    logic sleep_en;
    
    logic [31:0] interrupt;
    assign interrupt={15'd0,interrupt_1_bit,16'd0};
    logic [31:0] boot_addr;
    assign boot_addr=32'h0000_0000;
    
    wire r_arvalid_slv0,r_arready_slv0,r_rvalid_slv0,r_rready_slv0,r_arvalid_slv1,r_arready_slv1,r_rvalid_slv1,r_rready_slv1;
    wire [31:0] r_araddr_slv0, r_rdata_slv0,r_araddr_slv1;
    wire [31:0] r_rdata_slv1;
    
    wire boot_ended;
    wire boot_ended_o;
    logic program_enable;
    assign program_enable=1'b1;
    assign boot_ended = program_enable ? 1 : boot_ended_o;
    assign rvalid_slv0 = r_rvalid_slv1 & !boot_ended;
    assign arready_slv0 = r_arready_slv1 & !boot_ended;
    
    
    
    
    

    //Core   
    cv32e40p_top #(
    .FPU                      ( 0 ),
    .FPU_ADDMUL_LAT           ( 0 ),
    .FPU_OTHERS_LAT           ( 0 ),
    .ZFINX                    ( 0 ),
    .COREV_PULP               ( 0 ),
    .COREV_CLUSTER            ( 0 ),
    .NUM_MHPMCOUNTERS         ( 1 )
) u_core (
    // Clock and reset
    .rst_ni                   (rst_n_i),
    .clk_i                    (clk_i),
    .scan_cg_en_i             (1'b0),

    // Special control signals
    .fetch_enable_i           (fetch_enable),
    .pulp_clock_en_i          (1'b0),
    .core_sleep_o             (sleep_en),

    // Configuration
    .boot_addr_i              (boot_addr),
    .mtvec_addr_i             (32'd0),
`ifdef ENABLE_JTAG
    .dm_halt_addr_i           (dbg_halt_addr_from_jtag),
    .dm_exception_addr_i      (dbg_exception_addr_from_jtag),
`else
    .dm_halt_addr_i           (32'd0),
    .dm_exception_addr_i      (32'd0),
`endif
    .hart_id_i                (32'd0),

    // Instruction memory interface
    .instr_addr_o             (obi_addr_instr_i),
    .instr_req_o              (obi_req_instr_i),
    .instr_gnt_i              (obi_gnt_instr_o),
    .instr_rvalid_i           (obi_rvalid_instr_o),
    .instr_rdata_i            (obi_rdata_instr_o),

    // Data memory interface
    .data_addr_o              (obi_addr_data),
    .data_req_o               (obi_req_data),
    .data_gnt_i               (obi_gnt_data),
    .data_we_o                (obi_we_data),
    .data_be_o                (obi_be_data),
    .data_wdata_o             (obi_wdata_data),
    .data_rvalid_i            (obi_rvalid_data),
    .data_rdata_i             (obi_rdata_data),

     // Interrupt interface
    .irq_i                    (interrupt),
    .irq_ack_o                (),
    .irq_id_o                 (),

    // Debug interface
`ifdef ENABLE_JTAG
    .debug_req_i              (dbg_req_from_jtag),
`else
    .debug_req_i              (1'b0),
`endif
    .debug_havereset_o        (),
    .debug_running_o          (),
    .debug_halted_o           ()
);

`ifdef ENABLE_JTAG
    // ---------------------------------------------------------------
    // Instruction-bus demux: fork debug-window instruction fetches
    // (debug ROM code, run while the core is halted) away from the
    // normal ROM/Instruction-Memory path, straight to the DM.
    // ---------------------------------------------------------------
    obi_addr_demux #(
        .DBG_BASE (DBG_BASE_ADDR),
        .DBG_MASK (DBG_ADDR_MASK)
    ) u_instr_dbg_demux (
        .clk_i         (clk_i),
        .rst_ni        (rst_n_i),

        .core_req_i    (obi_req_instr_i),
        .core_addr_i   (obi_addr_instr_i),
        .core_gnt_o    (obi_gnt_instr_o),
        .core_rvalid_o (obi_rvalid_instr_o),
        .core_rdata_o  (obi_rdata_instr_o),

        .sys_req_o     (obi_req_instr_sys),
        .sys_addr_o    (obi_addr_instr_sys),
        .sys_gnt_i     (obi_gnt_instr_sys),
        .sys_rvalid_i  (obi_rvalid_instr_sys),
        .sys_rdata_i   (obi_rdata_instr_sys),

        .dbg_req_o     (instr_dbg_req),
        .dbg_addr_o    (instr_dbg_addr),
        .dbg_gnt_i     (instr_dbg_gnt),
        .dbg_rvalid_i  (instr_dbg_rvalid),
        .dbg_rdata_i   (instr_dbg_rdata)
    );

    // ---------------------------------------------------------------
    // JTAG TAP + DTM + Debug Module
    // ---------------------------------------------------------------
    dm_jtag_subsystem #(
        .IdcodeValue   (32'h249511C3), // arbitrary but LSB must be 1 (JTAG spec)
        .DmBaseAddress (DBG_BASE_ADDR)
    ) u_dm_jtag_subsystem (
        .clk_i     (clk_i),
        .rst_ni    (rst_n_i),

        .jtag_tck_i   (jtag_tck_i),
        .jtag_tms_i   (jtag_tms_i),
        .jtag_trst_ni (jtag_trst_ni),
        .jtag_tdi_i   (jtag_tdi_i),
        .jtag_tdo_o   (jtag_tdo_o),

        .debug_req_o          (dbg_req_from_jtag),
        .dm_halt_addr_o       (dbg_halt_addr_from_jtag),
        .dm_exception_addr_o  (dbg_exception_addr_from_jtag),

        .instr_dbg_req_i    (instr_dbg_req),
        .instr_dbg_addr_i   (instr_dbg_addr),
        .instr_dbg_gnt_o    (instr_dbg_gnt),
        .instr_dbg_rvalid_o (instr_dbg_rvalid),
        .instr_dbg_rdata_o  (instr_dbg_rdata),

        .s_axi_awvalid_i (awvalid_slv8), .s_axi_awready_o (awready_slv8), .s_axi_awaddr_i (awaddr_slv8),
        .s_axi_wvalid_i  (wvalid_slv8),  .s_axi_wready_o  (wready_slv8),  .s_axi_wdata_i  (wdata_slv8), .s_axi_wstrb_i (wstrb_slv8),
        .s_axi_bvalid_o  (bvalid_slv8),  .s_axi_bready_i  (bready_slv8),  .s_axi_bresp_o  (bresp_slv8),
        .s_axi_arvalid_i (arvalid_slv8), .s_axi_arready_o (arready_slv8), .s_axi_araddr_i (araddr_slv8),
        .s_axi_rvalid_o  (rvalid_slv8),  .s_axi_rready_i  (rready_slv8),  .s_axi_rdata_o  (rdata_slv8), .s_axi_rresp_o (rresp_slv8)
    );
`else
    // JTAG disabled: instruction bus feeds obi_to_axi_readonly unchanged,
    // and slv8 is left unconnected exactly as in the original design.
    assign obi_req_instr_sys  = obi_req_instr_i;
    assign obi_addr_instr_sys = obi_addr_instr_i;
    assign obi_gnt_instr_o    = obi_gnt_instr_sys;
    assign obi_rvalid_instr_o = obi_rvalid_instr_sys;
    assign obi_rdata_instr_o  = obi_rdata_instr_sys;
`endif

    //Peripheral Modules

    //I2C 
    i2c_axi_wrapper i2c_top_inst(
        .clk(clk_i),
        .rst_n(rst_n_i),
        .o_scl(scl_o),
        .sda(sda_io),
        .o_intr(),
        .AWVALID(awvalid_slv6), .AWREADY(awready_slv6), .AWADDR(awaddr_slv6),
        .WDATA(wdata_slv6),     .WSTRB(wstrb_slv6),     .WVALID(wvalid_slv6), .WREADY(wready_slv6) ,
        .BVALID(bvalid_slv6),   .BREADY(bready_slv6),   .BRESP(bresp_slv6),
        .ARVALID(arvalid_slv6), .ARREADY(arready_slv6), .ARADDR(araddr_slv6),
        .RVALID(rvalid_slv6),   .RREADY(rready_slv6),   .RDATA(rdata_slv6), .RRESP(rresp_slv6)
    );

    //QSPI
    qspi_top qspi_top_inst( .S_AXI_ACLK(clk_i),
                            .S_AXI_ARESETN(rst_n_i),
                            .sclk(sclk_o),
                            .cs(cs_o),
                            .qspi_io_0(qspi_io_0),
                            .qspi_io_1(qspi_io_1),
                            .qspi_io_2(qspi_io_2),
                            .qspi_io_3(qspi_io_3),
                            .S_AXI_AWVALID(awvalid_slv7), .S_AXI_AWREADY(awready_slv7), .S_AXI_AWADDR(awaddr_slv7),
                            .S_AXI_WDATA(wdata_slv7),     .S_AXI_WSTRB(wstrb_slv7), .S_AXI_WVALID(wvalid_slv7), .S_AXI_WREADY(wready_slv7) ,
                            .S_AXI_BVALID(bvalid_slv7),   .S_AXI_BREADY(bready_slv7), .S_AXI_BRESP(bresp_slv7),
                            
                            .S_AXI_ARVALID(arvalid_slv7), .S_AXI_ARREADY(arready_slv7), .S_AXI_ARADDR(araddr_slv7),
                            .S_AXI_RVALID(rvalid_slv7),   .S_AXI_RREADY(rready_slv7),   .S_AXI_RDATA(rdata_slv7), .S_AXI_RRESP(rresp_slv7)
    );

    //Timer
    timer_top #(.CLK_FREQ(clk_freq_Hz)) timer_top_inst(.clk(clk_i),
                             .rst_i(rst_n_i),
                             .AWVALID(awvalid_slv3), .AWREADY(awready_slv3), .AWADDR(awaddr_slv3),
                             .WDATA(wdata_slv3),     .WSTRB(wstrb_slv3),     .WVALID(wvalid_slv3), .WREADY(wready_slv3) ,
                             .BVALID(bvalid_slv3),   .BREADY(bready_slv3),   .BRESP(bresp_slv3),
                             .ARVALID(arvalid_slv3), .ARREADY(arready_slv3), .ARADDR(araddr_slv3),
                             .RVALID(rvalid_slv3),   .RREADY(rready_slv3),   .RDATA(rdata_slv3), .RRESP(rresp_slv3)
    
    
    );

    //GPIO
    gpio gpio_top_inst(.clk(clk_i),
                       .rst_i(rst_n_i),
                       .output_pins(gpio_o),
                       .input_pins(gpio_i),
                       .AWVALID(awvalid_slv2), .AWREADY(awready_slv2), .AWADDR(awaddr_slv2),
                       .WDATA(wdata_slv2),     .WSTRB(wstrb_slv2),     .WVALID(wvalid_slv2), .WREADY(wready_slv2) ,
                       .BVALID(bvalid_slv2),   .BREADY(bready_slv2),   .BRESP(bresp_slv2),
                       .ARVALID(arvalid_slv2), .ARREADY(arready_slv2), .ARADDR(araddr_slv2),
                       .RVALID(rvalid_slv2),   .RREADY(rready_slv2),   .RDATA(rdata_slv2), .RRESP(rresp_slv2)
    
    );

    //UART
    uart_top #(.baud_rate(uart_baud_rate),.clock_frequency(clk_freq_Mhz)) uart_top_inst(   
              .S_AXI_ACLK(clk_i),     
              .S_AXI_ARESETN(rst_n_i), 
              .uart_rx_i(uart_rx_i),
              .uart_tx_o(uart_tx_o),
              .S_AXI_AWVALID(awvalid_slv4), .S_AXI_AWREADY(awready_slv4), .S_AXI_AWADDR(awaddr_slv4),
              .S_AXI_WDATA(wdata_slv4),     .S_AXI_WSTRB(wstrb_slv4), .S_AXI_WVALID(wvalid_slv4), .S_AXI_WREADY(wready_slv4) ,
              .S_AXI_BVALID(bvalid_slv4),   .S_AXI_BREADY(bready_slv4), .S_AXI_BRESP(bresp_slv4),
              
              .S_AXI_ARVALID(arvalid_slv4), .S_AXI_ARREADY(arready_slv4), .S_AXI_ARADDR(araddr_slv4),
              .S_AXI_RVALID(rvalid_slv4),   .S_AXI_RREADY(rready_slv4),   .S_AXI_RDATA(rdata_slv4), .S_AXI_RRESP(rresp_slv4)
                                                                                         
    
    );
    
    logic [7:0]  stream_rx_byte_o;     
    logic        stream_rx_byte_valid_o;
                                        
    logic [31:0] fsm_tx_start_addr_o;   
    logic [31:0] fsm_tx_length_o;       
    logic        fsm_tx_trigger_o;      
    logic        fsm_tx_dump_done_i;    
    logic [7:0]  fsm_tx_data_i;         
    logic        fsm_tx_enable_i;      
    logic        fsm_tx_done_o;          
    logic [31:0] read_data;
    
    logic [31:0] uart_to_axi_AWADDR;
    logic        uart_to_axi_AWVALID;
    logic        uart_to_axi_AWREADY;
                         
    logic [31:0] uart_to_axi_WDATA;  
    logic [3:0]  uart_to_axi_WSTRB;  
    logic        uart_to_axi_WVALID; 
    logic        uart_to_axi_WREADY; 
                        
    logic [1:0]  uart_to_axi_BRESP;  
    logic        uart_to_axi_BVALID;
    logic        uart_to_axi_BREADY; 
                            
    logic [31:0] uart_to_axi_ARADDR; 
    logic        uart_to_axi_ARVALID;
    logic        uart_to_axi_ARREADY;
                            
    logic [31:0] uart_to_axi_RDATA;  
    logic [1:0]  uart_to_axi_RRESP;  
    logic        uart_to_axi_RVALID; 
    logic        uart_to_axi_RREADY;
    
    logic stream_done;

    uart_stream_top #(.baud_rate(uart_baud_rate),.clock_frequency(clk_freq_Mhz)) uart_stream_inst(   
              .S_AXI_ACLK(clk_i),     
              .S_AXI_ARESETN(rst_n_i), 
              .uart_rx_i(uart_stream_rx_i),
              .uart_tx_o(uart_stream_tx_o),
              .S_AXI_AWVALID(awvalid_slv5), .S_AXI_AWREADY(awready_slv5), .S_AXI_AWADDR(awaddr_slv5),
              .S_AXI_WDATA(wdata_slv5),     .S_AXI_WSTRB(wstrb_slv5), .S_AXI_WVALID(wvalid_slv5), .S_AXI_WREADY(wready_slv5) ,
              .S_AXI_BVALID(bvalid_slv5),   .S_AXI_BREADY(bready_slv5), .S_AXI_BRESP(bresp_slv5),
              
              .S_AXI_ARVALID(arvalid_slv5), .S_AXI_ARREADY(arready_slv5), .S_AXI_ARADDR(araddr_slv5),
              .S_AXI_RVALID(rvalid_slv5),   .S_AXI_RREADY(rready_slv5),   .S_AXI_RDATA(rdata_slv5), .S_AXI_RRESP(rresp_slv5),
              
              .stream_rx_byte_o(stream_rx_byte_o),      
              .stream_rx_byte_valid_o(stream_rx_byte_valid_o),
                                     
              .fsm_tx_start_addr_o(fsm_tx_start_addr_o),          
              .fsm_tx_trigger_o(fsm_tx_trigger_o),      
              .fsm_tx_dump_done_i(fsm_tx_dump_done_i),
              .fsm_read_data_i(read_data) ,
              .fsm_stream_done_i(stream_done)  
                       
    );
    
    

    
    uart_stream_to_axi uart_to_axi(
        .clk_i(clk_i),             
        .rst_n_i(rst_n_i),           
                                              
        .rx_byte_i(stream_rx_byte_o),         
        .rx_byte_valid_i(stream_rx_byte_valid_o),   
                   
        .tx_start_addr_i(fsm_tx_start_addr_o),          
        .tx_start_trigger_i(fsm_tx_trigger_o),
        .tx_dump_done_o(fsm_tx_dump_done_i), 
        .read_data_o(read_data),   
                  
        .M_AXI_AWADDR(uart_to_axi_AWADDR),      
        .M_AXI_AWVALID(uart_to_axi_AWVALID),     
        .M_AXI_AWREADY(uart_to_axi_AWREADY),     
                           
        .M_AXI_WDATA(uart_to_axi_WDATA),       
        .M_AXI_WSTRB(uart_to_axi_WSTRB),       
        .M_AXI_WVALID(uart_to_axi_WVALID),      
        .M_AXI_WREADY(uart_to_axi_WREADY),      
                           
        .M_AXI_BRESP(uart_to_axi_BRESP),       
        .M_AXI_BVALID(uart_to_axi_BVALID),      
        .M_AXI_BREADY(uart_to_axi_BREADY),      
                                                           
        .M_AXI_ARADDR(uart_to_axi_ARADDR),      
        .M_AXI_ARVALID(uart_to_axi_ARVALID),     
        .M_AXI_ARREADY(uart_to_axi_ARREADY),     
                           
        .M_AXI_RDATA(uart_to_axi_RDATA),       
        .M_AXI_RRESP(uart_to_axi_RRESP),       
        .M_AXI_RVALID(uart_to_axi_RVALID),      
        .M_AXI_RREADY(uart_to_axi_RREADY),      
                          
        .stream_done_o(stream_done)      
    );
    
    
    logic [31:0] dma_araddr;
    logic [7:0]  dma_arlen;  
    logic        dma_arvalid;            
    logic        dma_arready;            
                                         
    logic [31:0] dma_rdata;   
    logic        dma_rlast;              
    logic        dma_rvalid;             
    logic        dma_rready;
    
    logic [31:0] dma_awaddr ;
    logic        dma_awvalid;
    logic        dma_awready;
    logic [31:0] dma_wdata  ;
    logic [3:0]  dma_wstrb  ;
    logic        dma_wvalid ;
    logic        dma_wready ;
    logic        dma_bvalid ;
    logic        dma_bready ;
    
    
    
    
    
    
    
    
    
    
     
           
    accelerator_top accelerator_top_inst (
       .clk(clk_i),
       .rst(!rst_n_i),          
       .M_AXI_ARADDR    (dma_araddr ), 
       .M_AXI_ARLEN     (dma_arlen  ),  
       .M_AXI_ARVALID   (dma_arvalid),
       .M_AXI_ARREADY   (dma_arready),             
       .M_AXI_RDATA     (dma_rdata  ),    
       .M_AXI_RLAST     (dma_rlast  ),  
       .M_AXI_RVALID    (dma_rvalid ), 
       .M_AXI_RREADY    (dma_rready ),
       .M_AXI_AWADDR    (dma_awaddr ),
       .M_AXI_AWVALID   (dma_awvalid),
       .M_AXI_AWREADY   (dma_awready),
       .M_AXI_WDATA     (dma_wdata  ),
       .M_AXI_WSTRB     (dma_wstrb  ),
       .M_AXI_WVALID    (dma_wvalid ),
       .M_AXI_WREADY    (dma_wready ),
       .M_AXI_BVALID    (dma_bvalid ),
       .M_AXI_BREADY    (dma_bready ),
       .start_loader    (stream_done),
       .interrupt       (interrupt_1_bit)
    );




    //XBAR R/W
    xbar xbar_inst(

            
            .awvalid_master (awvalid_master),
            .awready_master (awready_master),
            .awaddr_master (awaddr_master),
            .wvalid_master (wvalid_master),
            .wready_master (wready_master),
            .wdata_master (wdata_master),
            .wstrb_master (wstrb_master),
            .bvalid_master (bvalid_master),
            .bready_master (bready_master),
            .bresp_master (bresp_master),
            .arvalid_master (arvalid_master),
            .arready_master (arready_master),
            .araddr_master (araddr_master),
            .rvalid_master (rvalid_master),
            .rready_master (rready_master),
            .rresp_master (rresp_master),
            .rdata_master (rdata_master),
            
            
            .awvalid_slv0(awvalid_slv0),
            .awready_slv0(awready_slv0),
            .awaddr_slv0(awaddr_slv0),
            .wvalid_slv0(wvalid_slv0),
            .wready_slv0(wready_slv0),
            .wdata_slv0(wdata_slv0),
            .wstrb_slv0(wstrb_slv0),
            .bvalid_slv0(bvalid_slv0),
            .bready_slv0(bready_slv0),
            .bresp_slv0(),
            //read is done from r/o xbar
            .arvalid_slv0(),
            .arready_slv0(),
            .araddr_slv0(),
            .rvalid_slv0(),
            .rready_slv0(),
            .rresp_slv0(),
            .rdata_slv0(),
            
            .awvalid_slv1(awvalid_slv1),
            .awready_slv1(awready_slv1),
            .awaddr_slv1(awaddr_slv1),
            .wvalid_slv1(wvalid_slv1),
            .wready_slv1(wready_slv1),
            .wdata_slv1(wdata_slv1),
            .wstrb_slv1(wstrb_slv1),
            .bvalid_slv1(bvalid_slv1),
            .bready_slv1(bready_slv1),
            .bresp_slv1(bresp_slv1),
            .arvalid_slv1(arvalid_slv1),
            .arready_slv1(arready_slv1),
            .araddr_slv1(araddr_slv1),
            .rvalid_slv1(rvalid_slv1),
            .rready_slv1(rready_slv1),
            .rresp_slv1(rresp_slv1),
            .rdata_slv1(rdata_slv1),
            
            .awvalid_slv2(awvalid_slv2),
            .awready_slv2(awready_slv2),
            .awaddr_slv2(awaddr_slv2),
            .wvalid_slv2(wvalid_slv2),
            .wready_slv2(wready_slv2),
            .wdata_slv2(wdata_slv2),
            .wstrb_slv2(wstrb_slv2),
            .bvalid_slv2(bvalid_slv2),
            .bready_slv2(bready_slv2),
            .bresp_slv2(bresp_slv2),
            .arvalid_slv2(arvalid_slv2),
            .arready_slv2(arready_slv2),
            .araddr_slv2(araddr_slv2),
            .rvalid_slv2(rvalid_slv2),
            .rready_slv2(rready_slv2),
            .rresp_slv2(rresp_slv2),
            .rdata_slv2(rdata_slv2),
            
            .awvalid_slv3(awvalid_slv3),
            .awready_slv3(awready_slv3),
            .awaddr_slv3(awaddr_slv3),
            .wvalid_slv3(wvalid_slv3),
            .wready_slv3(wready_slv3),
            .wdata_slv3(wdata_slv3),
            .wstrb_slv3(wstrb_slv3),
            .bvalid_slv3(bvalid_slv3),
            .bready_slv3(bready_slv3),
            .bresp_slv3(bresp_slv3),
            .arvalid_slv3(arvalid_slv3),
            .arready_slv3(arready_slv3),
            .araddr_slv3(araddr_slv3),
            .rvalid_slv3(rvalid_slv3),
            .rready_slv3(rready_slv3),
            .rresp_slv3(rresp_slv3),
            .rdata_slv3(rdata_slv3),
            
            .awvalid_slv4(awvalid_slv4),
            .awready_slv4(awready_slv4),
            .awaddr_slv4(awaddr_slv4),
            .wvalid_slv4(wvalid_slv4),
            .wready_slv4(wready_slv4),
            .wdata_slv4(wdata_slv4),
            .wstrb_slv4(wstrb_slv4),
            .bvalid_slv4(bvalid_slv4),
            .bready_slv4(bready_slv4),
            .bresp_slv4(bresp_slv4),
            .arvalid_slv4(arvalid_slv4),
            .arready_slv4(arready_slv4),
            .araddr_slv4(araddr_slv4),
            .rvalid_slv4(rvalid_slv4),
            .rready_slv4(rready_slv4),
            .rresp_slv4(rresp_slv4),
            .rdata_slv4(rdata_slv4),
            
            .awvalid_slv5(awvalid_slv5),
            .awready_slv5(awready_slv5),
            .awaddr_slv5(awaddr_slv5),
            .wvalid_slv5(wvalid_slv5),
            .wready_slv5(wready_slv5),
            .wdata_slv5(wdata_slv5),
            .wstrb_slv5(wstrb_slv5),
            .bvalid_slv5(bvalid_slv5),
            .bready_slv5(bready_slv5),
            .bresp_slv5(bresp_slv5),
            .arvalid_slv5(arvalid_slv5),
            .arready_slv5(arready_slv5),
            .araddr_slv5(araddr_slv5),
            .rvalid_slv5(rvalid_slv5),
            .rready_slv5(rready_slv5),
            .rresp_slv5(rresp_slv5),
            .rdata_slv5(rdata_slv5),
            
            .awvalid_slv6(awvalid_slv6),
            .awready_slv6(awready_slv6),
            .awaddr_slv6(awaddr_slv6),
            .wvalid_slv6(wvalid_slv6),
            .wready_slv6(wready_slv6),
            .wdata_slv6(wdata_slv6),
            .wstrb_slv6(wstrb_slv6),
            .bvalid_slv6(bvalid_slv6),
            .bready_slv6(bready_slv6),
            .bresp_slv6(bresp_slv6),
            .arvalid_slv6(arvalid_slv6),
            .arready_slv6(arready_slv6),
            .araddr_slv6(araddr_slv6),
            .rvalid_slv6(rvalid_slv6),
            .rready_slv6(rready_slv6),
            .rresp_slv6(rresp_slv6),
            .rdata_slv6(rdata_slv6),
            
            .awvalid_slv7(awvalid_slv7),
            .awready_slv7(awready_slv7),
            .awaddr_slv7(awaddr_slv7),
            .wvalid_slv7(wvalid_slv7),
            .wready_slv7(wready_slv7),
            .wdata_slv7(wdata_slv7),
            .wstrb_slv7(wstrb_slv7),
            .bvalid_slv7(bvalid_slv7),
            .bready_slv7(bready_slv7),
            .bresp_slv7(bresp_slv7),
            .arvalid_slv7(arvalid_slv7),
            .arready_slv7(arready_slv7),
            .araddr_slv7(araddr_slv7),
            .rvalid_slv7(rvalid_slv7),
            .rready_slv7(rready_slv7),
            .rresp_slv7(rresp_slv7),
            .rdata_slv7(rdata_slv7),
            
            .awvalid_slv8(awvalid_slv8),
            .awready_slv8(awready_slv8),
            .awaddr_slv8(awaddr_slv8),
            .wvalid_slv8(wvalid_slv8),
            .wready_slv8(wready_slv8),
            .wdata_slv8(wdata_slv8),
            .wstrb_slv8(wstrb_slv8),
            .bvalid_slv8(bvalid_slv8),
            .bready_slv8(bready_slv8),
            .bresp_slv8(bresp_slv8),
            .arvalid_slv8(arvalid_slv8),
            .arready_slv8(arready_slv8),
            .araddr_slv8(araddr_slv8),
            .rvalid_slv8(rvalid_slv8),
            .rready_slv8(rready_slv8),
            .rresp_slv8(rresp_slv8),
            .rdata_slv8(rdata_slv8),
            
            .awvalid_slv9(awvalid_slv9),
            .awready_slv9(awready_slv9),
            .awaddr_slv9(awaddr_slv9),
            .wvalid_slv9(wvalid_slv9),
            .wready_slv9(wready_slv9),
            .wdata_slv9(wdata_slv9),
            .wstrb_slv9(wstrb_slv9),
            .bvalid_slv9(bvalid_slv9),
            .bready_slv9(bready_slv9),
            .bresp_slv9(bresp_slv9),
            .arvalid_slv9(arvalid_slv9),
            .arready_slv9(arready_slv9),
            .araddr_slv9(araddr_slv9),
            .rvalid_slv9(rvalid_slv9),
            .rready_slv9(rready_slv9),
            .rresp_slv9(rresp_slv9),
            .rdata_slv9(rdata_slv9)
    );
    
    //XBAR R/O
    xbar_readonly ro_xbar(
            .arvalid_master(axi_arvalid_instr_o),    
            .arready_master(axi_arready_instr_i),    
            .araddr_master(axi_araddr_instr_o),     
                                                   
            .rvalid_master(axi_rvalid_instr_i),     
            .rready_master(axi_rready_instr_o),     
            .rdata_master(axi_rdata_instr_i),      
                                                                 
            .arvalid_slv0(r_arvalid_slv0),      
            .arready_slv0(r_arready_slv0),      
            .araddr_slv0(r_araddr_slv0),       
                                                  
            .rvalid_slv0(r_rvalid_slv0),       
            .rready_slv0(r_rready_slv0),       
            .rdata_slv0(r_rdata_slv0),        
                                         
            .arvalid_slv1(r_arvalid_slv1),      
            .arready_slv1(r_arready_slv1),      
            .araddr_slv1(r_araddr_slv1),       
                                                    
            .rvalid_slv1(r_rvalid_slv1),       
            .rready_slv1(r_rready_slv1),       
            .rdata_slv1(r_rdata_slv1)         
    );

    
    //R/O obi-to-axi
    obi_to_axi_readonly obi_to_axi_instr(
       .obi_req_i(obi_req_instr_sys),          
       .obi_gnt_o(obi_gnt_instr_sys),          
       .obi_rvalid_o(obi_rvalid_instr_sys),       
       .obi_addr_i(obi_addr_instr_sys),  
       .obi_rdata_o(obi_rdata_instr_sys),                  
       .axi_araddr_o(axi_araddr_instr_o),
       .axi_arvalid_o(axi_arvalid_instr_o),      
       .axi_arready_i(axi_arready_instr_i),                        
       .axi_rdata_i(axi_rdata_instr_i), 
       .axi_rvalid_i(axi_rvalid_instr_i),       
       .axi_rready_o(axi_rready_instr_o)       
    
    );
    
    //R/W obi-to-axi
    obi_to_axi obi_to_axi_data(
    .clk(clk_i),
    .rst_n(rst_n_i),
    .obi_req_i(obi_req_data),
    .obi_gnt_o(obi_gnt_data),
    .obi_rvalid_o(obi_rvalid_data),
    .obi_addr_i(obi_addr_data),
    .obi_wdata_i(obi_wdata_data),
    .obi_we_i(obi_we_data),
    .obi_be_i(obi_be_data),
    .obi_rdata_o(obi_rdata_data),
    
    .axi_araddr_o(araddr_master),
    .axi_arvalid_o(arvalid_master),
    .axi_arready_i(arready_master),
    .axi_rdata_i(rdata_master),
    .axi_rvalid_i(rvalid_master),
    .axi_rready_o(rready_master),
    .axi_awaddr_o(awaddr_master),
    .axi_awvalid_o(awvalid_master),
    .axi_awready_i(awready_master),
    .axi_wready_i(wready_master),
    .axi_wdata_o(wdata_master),
    .axi_wvalid_o(wvalid_master),
    .axi_wstrb_o(wstrb_master),
    .axi_bvalid_i(bvalid_master),
    .axi_bready_o(bready_master)
    
    );
    

    //Instruction Memory
    instruction_memory_axi  #(
         .BASE_ADDRESS(32'h0000_1000),
         .SIZE(8192)
        ) instruction_memory (
        .clk(clk_i),
        .rst_i(rst_n_i),
        .AWVALID(awvalid_slv0),
        .AWREADY(awready_slv0),
        .AWADDR(awaddr_slv0),
        .WVALID(wvalid_slv0),
        .WREADY(wready_slv0),
        .WDATA(wdata_slv0),
        .WSTRB(wstrb_slv0),
        .BVALID(bvalid_slv0),
        .BREADY(bready_slv0),
        .BRESP(bresp_slv0),
        .ARVALID(r_arvalid_slv1),
        .ARREADY(r_arready_slv1),
        .ARADDR(r_araddr_slv1),
        .RVALID(r_rvalid_slv1),
        .RREADY(r_rready_slv1),
        .RDATA(r_rdata_slv1),
        .boot_ended(boot_ended_o)
    );
    
   //ROM
   memory_axi_readonly #(
        .SIZE(1024),
        .MEMFILE("boot.mem"),
        .BASE_ADDRESS(32'h0000_0000)
    ) ROM (
        .clk(clk_i),
        .rst_i(rst_n_i),
        .ARVALID(r_arvalid_slv0),
        .ARREADY(r_arready_slv0),
        .ARADDR(r_araddr_slv0),
        .RVALID(r_rvalid_slv0),
        .RREADY(r_rready_slv0),
        .RDATA(r_rdata_slv0)
    );
    
    //Data Memory
    memory_axi#(
        .BASE_ADDRESS(32'h0000_3000)
        ) data_memory(
        .clk(clk_i),
        .rst_i(rst_n_i),
        .ARADDR(araddr_slv1),
        .ARVALID(arvalid_slv1),
        .ARREADY(arready_slv1),
        .RDATA(rdata_slv1),
        .RVALID(rvalid_slv1),
        .RREADY(rready_slv1),
        .AWADDR(awaddr_slv1),
        .AWVALID(awvalid_slv1),
        .AWREADY(awready_slv1),
        .WREADY(wready_slv1),
        .WSTRB(wstrb_slv1),
        .WDATA(wdata_slv1),
        .BVALID(bvalid_slv1),
        .BREADY(bready_slv1),
        .WVALID(wvalid_slv1),
        
        .AWVALID_DMA(),
        .ARREADY_DMA(),
        .AWREADY_DMA(),
        .AWADDR_DMA(),
        .WVALID_DMA(),
        .WREADY_DMA(),
        .WDATA_DMA(),
        .WSTRB_DMA(),
        .BVALID_DMA(),
        .BREADY_DMA(),
        .ARVALID_DMA(),
        .ARADDR_DMA(),
        .RVALID_DMA(),
        .RREADY_DMA(),
        .RDATA_DMA(),
        
        .ARLEN_DMA(),
        .RLAST_DMA(),
        
        .AWLEN_DMA(),
        .WLAST_DMA()
        );
        
        //Accelerator Data Memory
    memory_axi#(
        .BASE_ADDRESS(32'h0000_12000),
        .SIZE(30720)
        ) accelerator_memory(
        .clk(clk_i),
        .rst_i(rst_n_i),
        
        .AWADDR(uart_to_axi_AWADDR),  
        .AWVALID(uart_to_axi_AWVALID),
        .AWREADY(uart_to_axi_AWREADY),
                                      
        .WDATA(uart_to_axi_WDATA),    
        .WSTRB(uart_to_axi_WSTRB),    
        .WVALID(uart_to_axi_WVALID),  
        .WREADY(uart_to_axi_WREADY),  
                                      
        .BRESP(uart_to_axi_BRESP),    
        .BVALID(uart_to_axi_BVALID),  
        .BREADY(uart_to_axi_BREADY),  
                                      
        .ARADDR(uart_to_axi_ARADDR),  
        .ARVALID(uart_to_axi_ARVALID),
        .ARREADY(uart_to_axi_ARREADY),
                                      
        .RDATA(uart_to_axi_RDATA),      
        .RVALID(uart_to_axi_RVALID),  
        .RREADY(uart_to_axi_RREADY),  
        
        .AWVALID_DMA(dma_awvalid),     
        .AWREADY_DMA(dma_awready),
        .AWADDR_DMA (dma_awaddr),
        .WVALID_DMA (dma_wvalid),
        .WREADY_DMA (dma_wready),
        .WDATA_DMA  (dma_wdata),
        .WSTRB_DMA  (dma_wstrb),
        .BVALID_DMA (dma_bvalid),
        .BREADY_DMA (dma_bready),
        .ARREADY_DMA(dma_arready),
        .ARVALID_DMA(dma_arvalid),
        .ARADDR_DMA(dma_araddr),
        .RVALID_DMA(dma_rvalid),
        .RREADY_DMA(dma_rready),
        .RDATA_DMA(dma_rdata),
        
        .ARLEN_DMA(dma_arlen),
        .RLAST_DMA(dma_rlast),
        
        .AWLEN_DMA(6'd0),
        .WLAST_DMA(1'b1)
        );
endmodule