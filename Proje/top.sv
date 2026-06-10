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


module top(
    input logic clk_i,
    input logic rst_n_i,
    input logic fetch_enable,
    
    input  logic uart_rx_i,
    output logic uart_tx_o,
    
    //i2c inout'a çevrilmeli ???
    //output logic scl_o,
    //output logic sda_out_o,
    //output logic sda_oe_o,
    //input  logic sda_in_i,
    
    output logic [15:0] gpio_o,
    input  logic [15:0] gpio_i,
    
    output logic sclk_o,
    output logic cs_o,
    inout wire qspi_io_0,
    inout wire qspi_io_1,
    inout wire qspi_io_2,
    inout wire qspi_io_3

    );
    
    parameter uart_baud_rate=921600;
    parameter clk_freq_Mhz=100;
    parameter clk_freq_Hz=50_000_000;
    
    
    //DATA MEMORY obi-axi
    logic obi_req_data;        
    logic obi_gnt_data;         
    logic obi_rvalid_data;       
    logic [31:0] obi_addr_data;  
    logic [31:0] obi_wdata_data;
    logic obi_we_data;           
    logic [3:0] obi_be_data;     
    logic [31:0] obi_rdata_data;
                       
    
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
    
    
    //AI Accelerator Axi Signals
    // WRITE ADDRESS CHANNEL
     wire awvalid_ac;
    wire awready_ac;
     wire [31:0] awaddr_ac;
    // WRITE DATA CHANNEL
     wire wvalid_ac;
    wire wready_ac;
     wire [31:0] wdata_ac;
     wire [3:0] wstrb_ac;
    // WRITE RESPONSE CHANNEL
    wire bvalid_ac;
     wire bready_ac;
    wire [1:0] bresp_ac;
    // READ ADDRESS CHANNEL
     wire arvalid_ac;
    wire arready_ac;
     wire [31:0] araddr_ac;
    // READ DATA CHANNEL
    wire rvalid_ac;
     wire rready_ac;
    wire [1:0] rresp_ac;
    wire [31:0] rdata_ac;
    logic arlen_ac;
    logic rlast_ac;
    logic awlen_ac;
    logic wlast_ac;
    
    logic sleep_en;
    
    logic [31:0] interrupt;
    assign interrupt=32'd0;
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
    .dm_halt_addr_i           (32'd0),
    .dm_exception_addr_i      (32'd0),
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
    .debug_req_i              (1'b0),
    .debug_havereset_o        (),
    .debug_running_o          (),
    .debug_halted_o           ()
);

    
    i2c_axi_wrapper i2c_top_inst();
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
    timer_top #(.CLK_FREQ(clk_freq_Hz)) timer_top_inst(.clk(clk_i),
                             .rst_i(rst_n_i),
                             .AWVALID(awvalid_slv3), .AWREADY(awready_slv3), .AWADDR(awaddr_slv3),
                             .WDATA(wdata_slv3),     .WSTRB(wstrb_slv3),     .WVALID(wvalid_slv3), .WREADY(wready_slv3) ,
                             .BVALID(bvalid_slv3),   .BREADY(bready_slv3),   .BRESP(bresp_slv3),
                             .ARVALID(arvalid_slv3), .ARREADY(arready_slv3), .ARADDR(araddr_slv3),
                             .RVALID(rvalid_slv3),   .RREADY(rready_slv3),   .RDATA(rdata_slv3), .RRESP(rresp_slv3)
    
    
    );
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
            .rdata_slv7(rdata_slv7)
    );
    obi_to_axi_readonly obi_to_axi_instr(
       .obi_req_i(obi_req_instr_i),          
       .obi_gnt_o(obi_gnt_instr_o),          
       .obi_rvalid_o(obi_rvalid_instr_o),       
       .obi_addr_i(obi_addr_instr_i),  
       .obi_rdata_o(obi_rdata_instr_o),                  
       .axi_araddr_o(axi_araddr_instr_o),
       .axi_arvalid_o(axi_arvalid_instr_o),      
       .axi_arready_i(axi_arready_instr_i),                        
       .axi_rdata_i(axi_rdata_instr_i), 
       .axi_rvalid_i(axi_rvalid_instr_i),       
       .axi_rready_o(axi_rready_instr_o)       
    
    );
    
    
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
        
        .AWVALID_DMA(awvalid_ac),
        .ARREADY_DMA(arready_ac),
        .AWREADY_DMA(awready_ac),
        .AWADDR_DMA(awaddr_ac),
        .WVALID_DMA(wvalid_ac),
        .WREADY_DMA(wready_ac),
        .WDATA_DMA(wdata_ac),
        .WSTRB_DMA(wstrb_ac),
        .BVALID_DMA(bvalid_ac),
        .BREADY_DMA(bready_ac),
        .ARVALID_DMA(arvalid_ac),
        .ARADDR_DMA(araddr_ac),
        .RVALID_DMA(rvalid_ac),
        .RREADY_DMA(rready_ac),
        .RDATA_DMA(rdata_ac),
        
        .ARLEN_DMA(arlen_ac),
        .RLAST_DMA(rlast_ac),
        
        .AWLEN_DMA(awlen_ac),
        .WLAST_DMA(wlast_ac)
       
        );

    
    
endmodule
