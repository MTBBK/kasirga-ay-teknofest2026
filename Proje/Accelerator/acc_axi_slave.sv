`timescale 1ns / 1ps

module acc_axi_slave (

    // Global Signals
    input  logic        S_AXI_ACLK,
    input  logic         S_AXI_ARESETN,

    // Write Address Channel
    input  logic [31:0]  S_AXI_AWADDR,
    input  logic         S_AXI_AWVALID,
    output logic         S_AXI_AWREADY,
    // Write Data Channel
    input  logic [31:0]  S_AXI_WDATA,
    input  logic [3:0]   S_AXI_WSTRB,
    input  logic         S_AXI_WVALID,
    output logic         S_AXI_WREADY,
    // Write Response Channel
    output logic [1:0]   S_AXI_BRESP,
    output logic         S_AXI_BVALID,
    input  logic         S_AXI_BREADY,
    // Read Address Channel
    input  logic [31:0]  S_AXI_ARADDR,
    input  logic         S_AXI_ARVALID,
    output logic         S_AXI_ARREADY,
    // Read Data Channel
    output logic [31:0]  S_AXI_RDATA,
    output logic         S_AXI_RVALID,
    output logic [1:0]   S_AXI_RRESP,
    input  logic         S_AXI_RREADY,

    //control outputs for axi4_dma_loader 
    output logic start_loader,     

    //status inputs from axi4_dma_loader 
    input  logic loader_done,//dma finished
    input  logic infer_done,//fc layer finished
    input  logic busy,            

    //result
    input  logic [1:0] result_class,//0=nothing 1=unknown 2=yes 3=no

    //interrupt, wire to CPU interrupt pin not sure if this should be here if not [INTERRUPT] tag too should be removed from this
    output logic interrupt_o
);
    //User Registers (Memory Map)
    localparam  ADDR_ACC_CTRL = 32'h0001_2000,
                ADDR_ACC_STAT = 32'h0001_2004,
                ADDR_ACC_RES  = 32'h0001_2008,
                ADDR_ACC_INT  = 32'h0001_200C;

    assign S_AXI_BRESP = 2'b00;
    assign S_AXI_RRESP = 2'b00;
    
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
    
    logic        reg_load_done;
    logic        reg_infer_done;
    logic [1:0]  reg_result;

    
    assign start_loader = axi_awready && (S_AXI_AWADDR == ADDR_ACC_CTRL)
                          && S_AXI_WSTRB[0] && S_AXI_WDATA[0];
    logic int_clear;
    assign int_clear = axi_awready && (S_AXI_AWADDR == ADDR_ACC_INT)
                       && S_AXI_WSTRB[0] && S_AXI_WDATA[0];

    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            reg_load_done  <= 1'b0;
            reg_infer_done <= 1'b0;
            reg_result     <= 2'd0;
        end else begin
            reg_load_done  <= (int_clear ? 1'b0 : reg_load_done)  | loader_done;
            reg_infer_done <= (int_clear ? 1'b0 : reg_infer_done) | infer_done;

            if (infer_done) reg_result <= result_class;
        end
    end

    //the thing i wrote earlier wrote about [INTERRUPT] 
    assign interrupt_o = reg_infer_done;
    
    // 3. Software Read Logic 
    
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_rdata <= 32'd0;
        end else if (axi_arready) begin
            case (S_AXI_ARADDR)
                ADDR_ACC_CTRL: axi_rdata <= 32'd0;                 // write-only
                ADDR_ACC_STAT: axi_rdata <= {29'd0, busy, reg_infer_done, reg_load_done};
                ADDR_ACC_RES:  axi_rdata <= {30'd0, reg_result};
                ADDR_ACC_INT:  axi_rdata <= 32'd0;                 // write-only
                default:       axi_rdata <= 32'd0;
            endcase
        end
    end

endmodule
