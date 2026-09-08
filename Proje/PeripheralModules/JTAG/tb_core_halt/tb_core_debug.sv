`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// tb_core_debug
//
// Minimal, Xilinx-primitive-free harness to answer ONE question in
// simulation: with the REAL cv32e40p_top + obi_addr_demux + dm_obi_top
// (same modules top.sv uses), does asserting haltreq over DMI actually
// make the core report itself halted?
//
// This bypasses the JTAG TAP / dmi_jtag layer entirely and drives DMI
// directly (plain valid/ready signals, no packed-struct ports, so cocotb
// can poke them without VPI struct-field headaches). We already have solid
// evidence from real hardware (openocd -d3 log) that JTAG -> DTM -> DMI
// register access works correctly, so skipping that layer here isolates
// exactly the part that's NOT yet proven: core + obi_addr_demux + dm_mem
// (debug ROM fetch / halted-flag detection).
//
// Instruction OBI "sys" branch (normal ROM/instr-mem path) is stubbed with
// a trivial always-grant memory that returns `JAL x0, 0` (opcode
// 32'h0000006F) at every address, i.e. an infinite loop -- good enough to
// keep the core busy-fetching without needing real program memory.
//////////////////////////////////////////////////////////////////////////////////

import dm::*;

module tb_core_debug (
    input  logic clk_i,
    input  logic rst_ni,

    // ---- direct DMI drive (bypasses JTAG/TAP) ----
    input  logic [6:0]  dmi_req_addr_i,
    input  logic [31:0] dmi_req_data_i,
    input  logic [1:0]  dmi_req_op_i,      // dm::dtm_op_e encoding: 1=READ, 2=WRITE
    input  logic        dmi_req_valid_i,
    output logic        dmi_req_ready_o,

    output logic [31:0] dmi_resp_data_o,
    output logic [1:0]  dmi_resp_resp_o,
    output logic        dmi_resp_valid_o,
    input  logic        dmi_resp_ready_i,

    // ---- observability for cocotb ----
    output logic debug_req_o,
    output logic debug_halted_o,
    output logic debug_running_o,
    output logic instr_dbg_req_o,
    output logic instr_dbg_gnt_o,
    output logic instr_dbg_rvalid_o,
    output logic core_instr_req_o,
    output logic core_instr_gnt_o
);

  localparam logic [31:0] DBG_BASE_ADDR = 32'h0001_0000;
  localparam logic [31:0] DBG_ADDR_MASK = 32'h000F_F000;

  // ------------------------------------------------------------------
  // DMI struct <-> flat-port packing (keeps cocotb-facing ports plain)
  // ------------------------------------------------------------------
  dm::dmi_req_t  dmi_req;
  dm::dmi_resp_t dmi_resp;

  assign dmi_req.addr = dmi_req_addr_i;
  assign dmi_req.data = dmi_req_data_i;
  assign dmi_req.op   = dm::dtm_op_e'(dmi_req_op_i);

  assign dmi_resp_data_o = dmi_resp.data;
  assign dmi_resp_resp_o = dmi_resp.resp;

  // ------------------------------------------------------------------
  // Core <-> instruction OBI
  // ------------------------------------------------------------------
  logic        core_instr_req, core_instr_gnt, core_instr_rvalid;
  logic [31:0] core_instr_addr, core_instr_rdata;
  assign core_instr_req_o = core_instr_req;
  assign core_instr_gnt_o = core_instr_gnt;

  // "sys" branch: trivial always-grant infinite-loop memory
  logic        sys_req;
  logic [31:0] sys_addr;
  logic        sys_gnt, sys_rvalid;
  logic [31:0] sys_rdata;

  assign sys_gnt = sys_req;
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) sys_rvalid <= 1'b0;
    else         sys_rvalid <= sys_req;
  end
  assign sys_rdata = 32'h0000006F; // JAL x0, 0 -> infinite loop at every address

  // "dbg" branch
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
  // Data OBI: always-grant, no side effects (core shouldn't need it here)
  // ------------------------------------------------------------------
  logic        obi_req_data, obi_gnt_data, obi_rvalid_data;
  logic        obi_we_data;
  logic [3:0]  obi_be_data;
  logic [31:0] obi_addr_data, obi_wdata_data, obi_rdata_data;

  assign obi_gnt_data = obi_req_data;
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) obi_rvalid_data <= 1'b0;
    else         obi_rvalid_data <= obi_req_data;
  end
  assign obi_rdata_data = 32'd0;

  // ------------------------------------------------------------------
  // Debug Module (instruction-fetch-only slice of dm_jtag_subsystem's
  // arbiter -- no AXI4-Lite/data side needed for this test)
  // ------------------------------------------------------------------
  logic        dm_slave_gnt, dm_slave_rvalid;
  logic [31:0] dm_slave_rdata;
  logic        dm_slave_rid;

  assign instr_dbg_gnt    = dm_slave_gnt & instr_dbg_req;
  assign instr_dbg_rvalid = dm_slave_rvalid & dm_slave_rid;
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

      .slave_req_i     (instr_dbg_req),
      .slave_gnt_o     (dm_slave_gnt),
      .slave_we_i      (1'b0),
      .slave_addr_i    (instr_dbg_addr),
      .slave_be_i      (4'hF),
      .slave_wdata_i   (32'd0),
      .slave_aid_i     (1'b1),
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

  // ------------------------------------------------------------------
  // The real core, wired exactly like top.sv's u_core instantiation
  // ------------------------------------------------------------------
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

      .data_addr_o              (obi_addr_data),
      .data_req_o               (obi_req_data),
      .data_gnt_i               (obi_gnt_data),
      .data_we_o                (obi_we_data),
      .data_be_o                (obi_be_data),
      .data_wdata_o             (obi_wdata_data),
      .data_rvalid_i            (obi_rvalid_data),
      .data_rdata_i             (obi_rdata_data),

      .irq_i                    (32'd0),
      .irq_ack_o                (),
      .irq_id_o                 (),

      .debug_req_i              (debug_req_o),
      .debug_havereset_o        (),
      .debug_running_o          (debug_running_o),
      .debug_halted_o           (debug_halted_o)
  );

endmodule
