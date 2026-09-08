`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// tb_core_debug2
//
// Extends tb_core_debug (tb_core_halt/) by adding the REAL data-side round
// trip top.sv actually relies on for the debug ROM's "I'm halted" flag
// write: core.data_* -> obi_to_axi.sv -> AXI4-Lite -> (same conversion +
// 2:1 arbiter dm_jtag_subsystem.sv uses, copied verbatim here since we
// drive DMI directly and don't want to route through JTAG pins) ->
// dm_obi_top. Addresses outside the debug window (0x10000-0x10FFF) go to
// a stub data memory, same as before.
//
// tb_core_debug (v1) already proved: debug_req reaches the core, the core
// fetches from the debug ROM, and the core's OWN debug_halted_o goes high.
// It could NOT prove the data-side round trip because that path was
// stubbed out. This version specifically isolates that round trip.
//////////////////////////////////////////////////////////////////////////////////

import dm::*;

module tb_core_debug2 (
    input  logic clk_i,
    input  logic rst_ni,

    input  logic [6:0]  dmi_req_addr_i,
    input  logic [31:0] dmi_req_data_i,
    input  logic [1:0]  dmi_req_op_i,
    input  logic        dmi_req_valid_i,
    output logic        dmi_req_ready_o,

    output logic [31:0] dmi_resp_data_o,
    output logic [1:0]  dmi_resp_resp_o,
    output logic        dmi_resp_valid_o,
    input  logic        dmi_resp_ready_i,

    output logic debug_req_o,
    output logic debug_halted_o,
    output logic debug_running_o,
    output logic instr_dbg_req_o,
    output logic instr_dbg_gnt_o,
    output logic instr_dbg_rvalid_o,
    output logic data_dbg_req_o,
    output logic data_dbg_gnt_o,
    output logic data_dbg_rvalid_o,
    output logic data_in_dbg_window_o
);

  localparam logic [31:0] DBG_BASE_ADDR = 32'h0001_0000;
  localparam logic [31:0] DBG_ADDR_MASK = 32'h000F_F000;

  dm::dmi_req_t  dmi_req;
  dm::dmi_resp_t dmi_resp;
  assign dmi_req.addr = dmi_req_addr_i;
  assign dmi_req.data = dmi_req_data_i;
  assign dmi_req.op   = dm::dtm_op_e'(dmi_req_op_i);
  assign dmi_resp_data_o = dmi_resp.data;
  assign dmi_resp_resp_o = dmi_resp.resp;

  // ------------------------------------------------------------------
  // Core <-> instruction OBI (unchanged from v1)
  // ------------------------------------------------------------------
  logic        core_instr_req, core_instr_gnt, core_instr_rvalid;
  logic [31:0] core_instr_addr, core_instr_rdata;

  logic        sys_req;
  logic [31:0] sys_addr;
  logic        sys_gnt, sys_rvalid;
  logic [31:0] sys_rdata;
  assign sys_gnt = sys_req;
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) sys_rvalid <= 1'b0;
    else         sys_rvalid <= sys_req;
  end
  assign sys_rdata = 32'h0000006F; // JAL x0, 0

  logic        instr_dbg_req, instr_dbg_gnt, instr_dbg_rvalid;
  logic [31:0] instr_dbg_addr, instr_dbg_rdata;
  assign instr_dbg_req_o    = instr_dbg_req;
  assign instr_dbg_gnt_o    = instr_dbg_gnt;
  assign instr_dbg_rvalid_o = instr_dbg_rvalid;

  obi_addr_demux #(
      .DBG_BASE (DBG_BASE_ADDR),
      .DBG_MASK (DBG_ADDR_MASK)
  ) u_demux (
      .clk_i         (clk_i),
      .rst_ni        (rst_ni),
      .core_req_i    (core_instr_req),
      .core_addr_i   (core_instr_addr),
      .core_gnt_o    (core_instr_gnt),
      .core_rvalid_o (core_instr_rvalid),
      .core_rdata_o  (core_instr_rdata),
      .sys_req_o     (sys_req),
      .sys_addr_o    (sys_addr),
      .sys_gnt_i     (sys_gnt),
      .sys_rvalid_i  (sys_rvalid),
      .sys_rdata_i   (sys_rdata),
      .dbg_req_o     (instr_dbg_req),
      .dbg_addr_o    (instr_dbg_addr),
      .dbg_gnt_i     (instr_dbg_gnt),
      .dbg_rvalid_i  (instr_dbg_rvalid),
      .dbg_rdata_i   (instr_dbg_rdata)
  );

  // ------------------------------------------------------------------
  // Core <-> data OBI: REAL round trip for the debug window
  // (core -> obi_to_axi.sv -> AXI4-Lite -> DM), stub memory otherwise.
  // ------------------------------------------------------------------
  logic        core_data_req, core_data_gnt, core_data_rvalid;
  logic        core_data_we;
  logic [3:0]  core_data_be;
  logic [31:0] core_data_addr, core_data_wdata, core_data_rdata;

  logic is_dbg_data;
  assign is_dbg_data = ((core_data_addr & DBG_ADDR_MASK) == (DBG_BASE_ADDR & DBG_ADDR_MASK));
  assign data_in_dbg_window_o = is_dbg_data;

  logic        stub_req, stub_gnt, stub_rvalid;
  assign stub_req = core_data_req & ~is_dbg_data;
  assign stub_gnt = stub_req;
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) stub_rvalid <= 1'b0;
    else         stub_rvalid <= stub_req;
  end

  logic        dbg_data_req;
  assign dbg_data_req = core_data_req & is_dbg_data;

  logic        axi_arvalid, axi_arready, axi_rvalid, axi_rready;
  logic [31:0] axi_araddr, axi_rdata;
  logic        axi_awvalid, axi_awready, axi_wvalid, axi_wready, axi_bvalid, axi_bready;
  logic [31:0] axi_awaddr, axi_wdata;
  logic [3:0]  axi_wstrb;

  logic        dbg_data_gnt, dbg_data_rvalid;
  logic [31:0] dbg_data_rdata;

  obi_to_axi u_obi_to_axi_dbg (
      .clk          (clk_i),
      .rst_n        (rst_ni),
      .obi_req_i    (dbg_data_req),
      .obi_gnt_o    (dbg_data_gnt),
      .obi_rvalid_o (dbg_data_rvalid),
      .obi_addr_i   (core_data_addr),
      .obi_wdata_i  (core_data_wdata),
      .obi_we_i     (core_data_we),
      .obi_be_i     (core_data_be),
      .obi_rdata_o  (dbg_data_rdata),

      .axi_araddr_o (axi_araddr), .axi_arvalid_o (axi_arvalid), .axi_arready_i (axi_arready),
      .axi_rdata_i  (axi_rdata),  .axi_rvalid_i  (axi_rvalid),  .axi_rready_o  (axi_rready),

      .axi_awaddr_o (axi_awaddr), .axi_awvalid_o (axi_awvalid), .axi_awready_i (axi_awready),
      .axi_wready_i (axi_wready), .axi_wdata_o (axi_wdata), .axi_wvalid_o (axi_wvalid), .axi_wstrb_o (axi_wstrb),
      .axi_bvalid_i (axi_bvalid), .axi_bready_o (axi_bready)
  );

  assign core_data_gnt    = is_dbg_data ? dbg_data_gnt    : stub_gnt;
  assign core_data_rvalid = is_dbg_data ? dbg_data_rvalid : stub_rvalid;
  assign core_data_rdata  = is_dbg_data ? dbg_data_rdata  : 32'd0;

  assign data_dbg_req_o    = dbg_data_req;
  assign data_dbg_gnt_o    = dbg_data_gnt;
  assign data_dbg_rvalid_o = dbg_data_rvalid;

  // ------------------------------------------------------------------
  // dm_jtag_subsystem's AXI4-Lite -> OBI conversion + 2:1 arbiter,
  // copied verbatim (no JTAG pins needed here, DMI driven directly).
  // ------------------------------------------------------------------
  typedef enum logic [1:0] {AXI_IDLE, AXI_WAIT_RVALID, AXI_RESP} axi_state_e;
  axi_state_e axi_state_q, axi_state_d;

  logic        data_is_write_q;
  logic [31:0] data_rdata_q;

  logic        data_req, data_we, data_gnt, data_rvalid;
  logic [31:0] data_addr, data_wdata, data_rdata;
  logic [3:0]  data_be;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) axi_state_q <= AXI_IDLE;
    else         axi_state_q <= axi_state_d;
  end

  always_comb begin
    axi_state_d  = axi_state_q;
    axi_awready  = 1'b0;
    axi_wready   = 1'b0;
    axi_arready  = 1'b0;
    data_req     = 1'b0;
    data_we      = 1'b0;
    data_addr    = 32'd0;
    data_be      = 4'hF;
    data_wdata   = 32'd0;

    unique case (axi_state_q)
      AXI_IDLE: begin
        if (axi_awvalid && axi_wvalid) begin
          data_req   = 1'b1;
          data_we    = 1'b1;
          data_addr  = axi_awaddr;
          data_be    = axi_wstrb;
          data_wdata = axi_wdata;
          if (data_gnt) begin
            axi_awready = 1'b1;
            axi_wready  = 1'b1;
            axi_state_d = AXI_WAIT_RVALID;
          end
        end else if (axi_arvalid) begin
          data_req  = 1'b1;
          data_we   = 1'b0;
          data_addr = axi_araddr;
          if (data_gnt) begin
            axi_arready = 1'b1;
            axi_state_d = AXI_WAIT_RVALID;
          end
        end
      end
      AXI_WAIT_RVALID: begin
        if (data_rvalid) axi_state_d = AXI_RESP;
      end
      AXI_RESP: begin
        if (data_is_write_q) begin
          if (axi_bready) axi_state_d = AXI_IDLE;
        end else begin
          if (axi_rready) axi_state_d = AXI_IDLE;
        end
      end
      default: axi_state_d = AXI_IDLE;
    endcase
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      data_is_write_q <= 1'b0;
      data_rdata_q    <= 32'd0;
    end else begin
      if (axi_state_q == AXI_IDLE && data_req && data_gnt) begin
        data_is_write_q <= data_we;
      end
      if (axi_state_q == AXI_WAIT_RVALID && data_rvalid) begin
        data_rdata_q <= data_rdata;
      end
    end
  end

  assign axi_bvalid = (axi_state_q == AXI_RESP) &&  data_is_write_q;
  assign axi_rvalid = (axi_state_q == AXI_RESP) && !data_is_write_q;
  assign axi_rdata  = data_rdata_q;

  // 2:1 arbiter into dm_obi_top (same priority/aid scheme as dm_jtag_subsystem.sv)
  logic        dm_slave_req, dm_slave_gnt, dm_slave_we;
  logic [31:0] dm_slave_addr, dm_slave_wdata, dm_slave_rdata;
  logic [3:0]  dm_slave_be;
  logic        dm_slave_aid, dm_slave_rvalid, dm_slave_rid;

  assign dm_slave_req   = data_req | instr_dbg_req;
  assign dm_slave_we    = data_req ? data_we    : 1'b0;
  assign dm_slave_addr  = data_req ? data_addr  : instr_dbg_addr;
  assign dm_slave_be    = data_req ? data_be    : 4'hF;
  assign dm_slave_wdata = data_req ? data_wdata : 32'd0;
  assign dm_slave_aid   = data_req ? 1'b0       : 1'b1;

  assign data_gnt      = dm_slave_gnt &  data_req;
  assign instr_dbg_gnt = dm_slave_gnt & ~data_req & instr_dbg_req;

  assign data_rvalid      = dm_slave_rvalid & ~dm_slave_rid;
  assign instr_dbg_rvalid = dm_slave_rvalid &  dm_slave_rid;
  assign data_rdata       = dm_slave_rdata;
  assign instr_dbg_rdata  = dm_slave_rdata;

  dm::hartinfo_t hartinfo;
  assign hartinfo = dm::hartinfo_t'({8'd0, 4'd2, 3'd0, 1'b1, dm::DataCount, dm::DataAddr});

  logic [31:0] dm_halt_addr, dm_exception_addr;
  assign dm_halt_addr      = DBG_BASE_ADDR + dm::HaltAddress[31:0];
  assign dm_exception_addr = DBG_BASE_ADDR + dm::ExceptionAddress[31:0];

  dm_obi_top #(
      .IdWidth         (1),
      .NrHarts         (1),
      .BusWidth        (32),
      .DmBaseAddress   (DBG_BASE_ADDR),
      .SelectableHarts (1'b1)
  ) u_dm_obi_top (
      .clk_i           (clk_i),
      .rst_ni          (rst_ni),
      .testmode_i      (1'b0),
      .ndmreset_o      (),
      .dmactive_o      (),
      .debug_req_o     (debug_req_o),
      .unavailable_i   (1'b0),
      .hartinfo_i      (hartinfo),

      .slave_req_i     (dm_slave_req),
      .slave_gnt_o     (dm_slave_gnt),
      .slave_we_i      (dm_slave_we),
      .slave_addr_i    (dm_slave_addr),
      .slave_be_i      (dm_slave_be),
      .slave_wdata_i   (dm_slave_wdata),
      .slave_aid_i     (dm_slave_aid),
      .slave_rvalid_o  (dm_slave_rvalid),
      .slave_rdata_o   (dm_slave_rdata),
      .slave_rid_o     (dm_slave_rid),

      .master_req_o         (),
      .master_addr_o        (),
      .master_we_o          (),
      .master_wdata_o       (),
      .master_be_o          (),
      .master_gnt_i         (1'b0),
      .master_rvalid_i      (1'b0),
      .master_err_i         (1'b0),
      .master_other_err_i   (1'b0),
      .master_rdata_i       (32'd0),

      .dmi_rst_ni      (rst_ni),
      .dmi_req_valid_i (dmi_req_valid_i),
      .dmi_req_ready_o (dmi_req_ready_o),
      .dmi_req_i       (dmi_req),

      .dmi_resp_valid_o (dmi_resp_valid_o),
      .dmi_resp_ready_i (dmi_resp_ready_i),
      .dmi_resp_o       (dmi_resp)
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
      .rst_ni                   (rst_ni),
      .clk_i                    (clk_i),
      .scan_cg_en_i             (1'b0),

      .fetch_enable_i           (1'b1),
      .pulp_clock_en_i          (1'b0),
      .core_sleep_o             (),

      .boot_addr_i              (32'd0),
      .mtvec_addr_i             (32'd0),
      .dm_halt_addr_i           (dm_halt_addr),
      .dm_exception_addr_i      (dm_exception_addr),
      .hart_id_i                (32'd0),

      .instr_addr_o             (core_instr_addr),
      .instr_req_o              (core_instr_req),
      .instr_gnt_i              (core_instr_gnt),
      .instr_rvalid_i           (core_instr_rvalid),
      .instr_rdata_i            (core_instr_rdata),

      .data_addr_o              (core_data_addr),
      .data_req_o               (core_data_req),
      .data_gnt_i               (core_data_gnt),
      .data_we_o                (core_data_we),
      .data_be_o                (core_data_be),
      .data_wdata_o             (core_data_wdata),
      .data_rvalid_i            (core_data_rvalid),
      .data_rdata_i             (core_data_rdata),

      .irq_i                    (32'd0),
      .irq_ack_o                (),
      .irq_id_o                 (),

      .debug_req_i              (debug_req_o),
      .debug_havereset_o        (),
      .debug_running_o          (debug_running_o),
      .debug_halted_o           (debug_halted_o)
  );

endmodule
