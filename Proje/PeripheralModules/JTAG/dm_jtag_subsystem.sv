`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// dm_jtag_subsystem
//
// Wraps riscv-dbg (https://github.com/pulp-platform/riscv-dbg) for CV32E40P:
//   - dmi_jtag   : JTAG TAP + DTM (DMI) + internal TCK<->core-clock CDC
//   - dm_obi_top : OBI-native Debug Module wrapper around dm_top
//
// Exposes to the rest of the SoC:
//   - Raw JTAG pins (route these to top-level ports)
//   - debug_req_o / dm_halt_addr_o / dm_exception_addr_o for cv32e40p_top
//   - An OBI-style port for instruction-fetch accesses to the debug ROM
//     (drive this from the "dbg" branch of obi_addr_demux on the instr bus)
//   - An AXI4-Lite slave port that plugs DIRECTLY into this SoC's existing
//     "slv8 (JTAG)" XBAR slot (wire it 1:1 to awvalid_slv8/... in top.sv)
//
// The instruction-fetch port and the AXI4-Lite (data) port are arbitrated
// into dm_obi_top's single OBI slave port using its built-in aid_i/rid_o
// transaction-ID mechanism (IdWidth=1): 0 = data/AXI4-Lite side,
// 1 = instruction side. This is what dm_obi_top's aid/rid feature exists
// for, and it is what correctly solves the "which requester does this
// rvalid belong to" problem for a pipelined single-cycle-pulse response.
//
// System Bus Access (SBA) is intentionally NOT connected (see master_* tie
// -offs below). SBA would require the DM to become a second master on the
// main XBAR, which is a single-master interconnect here -- that needs an
// AXI arbiter/interconnect IP and is out of scope for the bonus JTAG
// requirement. Standard OpenOCD (riscv013 driver) does not need SBA: it
// uses Program Buffer + Abstract Command execution by default, which only
// needs the slave port implemented here.
//////////////////////////////////////////////////////////////////////////////////

import dm::*;

module dm_jtag_subsystem #(
    parameter logic [31:0] IdcodeValue   = 32'h00000db3,
    // Must match: (a) the XBAR's address-decode range assigned to slv8
    // (xbar.sv decodes slv8 on awaddr_master[19:12]==8'h10, i.e. the window
    // is 0x0001_0000-0x0001_0FFF), and (b) obi_addr_demux's DBG_BASE on the
    // instruction-bus instance.
    parameter logic [31:0] DmBaseAddress = 32'h0001_0000
) (
    input  logic clk_i,
    input  logic rst_ni,     // system PoR, active low

    // ---------------- JTAG pins (route to top-level SoC ports) ----------
    input  logic jtag_tck_i,
    input  logic jtag_tms_i,
    input  logic jtag_trst_ni,
    input  logic jtag_tdi_i,
    output logic jtag_tdo_o,

    // ---------------- To cv32e40p_top ------------------------------------
    output logic        debug_req_o,
    output logic [31:0] dm_halt_addr_o,
    output logic [31:0] dm_exception_addr_o,

    // ---------------- Instruction-side debug OBI port ---------------------
    // Drive from obi_addr_demux's "dbg" branch on the instruction bus.
    // Read-only: no we/be needed from the requester side.
    input  logic        instr_dbg_req_i,
    input  logic [31:0] instr_dbg_addr_i,
    output logic        instr_dbg_gnt_o,
    output logic        instr_dbg_rvalid_o,
    output logic [31:0] instr_dbg_rdata_o,

    // ---------------- Data-side AXI4-Lite slave port -----------------------
    // Wire this 1:1 to top.sv's existing slv8 signals.
    input  logic        s_axi_awvalid_i,
    output logic        s_axi_awready_o,
    input  logic [31:0] s_axi_awaddr_i,
    input  logic        s_axi_wvalid_i,
    output logic        s_axi_wready_o,
    input  logic [31:0] s_axi_wdata_i,
    input  logic [3:0]  s_axi_wstrb_i,
    output logic        s_axi_bvalid_o,
    input  logic        s_axi_bready_i,
    output logic [1:0]  s_axi_bresp_o,
    input  logic        s_axi_arvalid_i,
    output logic        s_axi_arready_o,
    input  logic [31:0] s_axi_araddr_i,
    output logic        s_axi_rvalid_o,
    input  logic        s_axi_rready_i,
    output logic [31:0] s_axi_rdata_o,
    output logic [1:0]  s_axi_rresp_o
);

  // ------------------------------------------------------------------
  // DMI (JTAG <-> Debug Module Interface), incl. internal TAP + CDC
  // ------------------------------------------------------------------
  dm::dmi_req_t  dmi_req;
  logic          dmi_req_valid, dmi_req_ready;
  dm::dmi_resp_t dmi_resp;
  logic          dmi_resp_valid, dmi_resp_ready;
  logic          dmi_rst_n;

  dmi_jtag #(
      .IdcodeValue (IdcodeValue)
  ) u_dmi_jtag (
      .clk_i            (clk_i),
      .rst_ni           (rst_ni),
      .testmode_i       (1'b0),

      .dmi_rst_no       (dmi_rst_n),
      .dmi_req_o        (dmi_req),
      .dmi_req_valid_o  (dmi_req_valid),
      .dmi_req_ready_i  (dmi_req_ready),

      .dmi_resp_i       (dmi_resp),
      .dmi_resp_ready_o (dmi_resp_ready),
      .dmi_resp_valid_i (dmi_resp_valid),

      .tck_i            (jtag_tck_i),
      .tms_i            (jtag_tms_i),
      .trst_ni          (jtag_trst_ni),
      .td_i             (jtag_tdi_i),
      .td_o             (jtag_tdo_o),
      .tdo_oe_o         ()             // single-device chain: TDO always driven, oe unused
  );

  // ------------------------------------------------------------------
  // hartinfo: standard RI5CY/CV32E40P-style Program-Buffer configuration
  // (matches the values used by CV32E40P reference SoCs, e.g. core-v-mcu)
  // Packed field order (MSB->LSB): zero1[31:24], nscratch[23:20], zero0[19:17],
  // dataaccess[16], datasize[15:12], dataaddr[11:0]  (see dm::hartinfo_t)
  // ------------------------------------------------------------------
  dm::hartinfo_t hartinfo;
  assign hartinfo = dm::hartinfo_t'({8'd0, 4'd2, 3'd0, 1'b1, dm::DataCount, dm::DataAddr});

  assign dm_halt_addr_o      = DmBaseAddress + dm::HaltAddress[31:0];
  assign dm_exception_addr_o = DmBaseAddress + dm::ExceptionAddress[31:0];

  // ------------------------------------------------------------------
  // AXI4-Lite (slv8) -> single-outstanding OBI request, data side
  // ------------------------------------------------------------------
  typedef enum logic [1:0] {AXI_IDLE, AXI_WAIT_RVALID, AXI_RESP} axi_state_e;
  axi_state_e axi_state_q, axi_state_d;

  logic        data_is_write_q;
  logic [31:0] data_rdata_q;

  logic        data_req;
  logic        data_we;
  logic [31:0] data_addr;
  logic [3:0]  data_be;
  logic [31:0] data_wdata;
  logic        data_gnt;
  logic        data_rvalid;
  logic [31:0] data_rdata;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) axi_state_q <= AXI_IDLE;
    else         axi_state_q <= axi_state_d;
  end

  always_comb begin
    axi_state_d     = axi_state_q;
    s_axi_awready_o = 1'b0;
    s_axi_wready_o  = 1'b0;
    s_axi_arready_o = 1'b0;
    data_req        = 1'b0;
    data_we         = 1'b0;
    data_addr       = 32'd0;
    data_be         = 4'hF;
    data_wdata      = 32'd0;

    unique case (axi_state_q)
      AXI_IDLE: begin
        if (s_axi_awvalid_i && s_axi_wvalid_i) begin
          data_req   = 1'b1;
          data_we    = 1'b1;
          data_addr  = s_axi_awaddr_i;
          data_be    = s_axi_wstrb_i;
          data_wdata = s_axi_wdata_i;
          if (data_gnt) begin
            s_axi_awready_o = 1'b1;
            s_axi_wready_o  = 1'b1;
            axi_state_d     = AXI_WAIT_RVALID;
          end
        end else if (s_axi_arvalid_i) begin
          data_req  = 1'b1;
          data_we   = 1'b0;
          data_addr = s_axi_araddr_i;
          if (data_gnt) begin
            s_axi_arready_o = 1'b1;
            axi_state_d     = AXI_WAIT_RVALID;
          end
        end
      end

      AXI_WAIT_RVALID: begin
        // request already accepted (single-outstanding); just wait for rvalid
        if (data_rvalid) axi_state_d = AXI_RESP;
      end

      AXI_RESP: begin
        if (data_is_write_q) begin
          if (s_axi_bready_i) axi_state_d = AXI_IDLE;
        end else begin
          if (s_axi_rready_i) axi_state_d = AXI_IDLE;
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

  assign s_axi_bvalid_o = (axi_state_q == AXI_RESP) &&  data_is_write_q;
  assign s_axi_bresp_o  = 2'b00;
  assign s_axi_rvalid_o = (axi_state_q == AXI_RESP) && !data_is_write_q;
  assign s_axi_rdata_o  = data_rdata_q;
  assign s_axi_rresp_o  = 2'b00;

  // ------------------------------------------------------------------
  // 2:1 arbiter into dm_obi_top's single OBI slave port
  // Priority: data (AXI4-Lite / program-buffer memory ops) over
  // instruction fetch (debug ROM code) when both request in the same
  // cycle. aid 0 = data side, aid 1 = instruction side.
  // ------------------------------------------------------------------
  logic        dm_slave_req;
  logic        dm_slave_gnt;
  logic        dm_slave_we;
  logic [31:0] dm_slave_addr;
  logic [3:0]  dm_slave_be;
  logic [31:0] dm_slave_wdata;
  logic        dm_slave_rvalid;
  logic [31:0] dm_slave_rdata;
  logic        dm_slave_aid;
  logic        dm_slave_rid;

  assign dm_slave_req   = data_req | instr_dbg_req_i;
  assign dm_slave_we    = data_req ? data_we    : 1'b0;
  assign dm_slave_addr  = data_req ? data_addr  : instr_dbg_addr_i;
  assign dm_slave_be    = data_req ? data_be    : 4'hF;
  assign dm_slave_wdata = data_req ? data_wdata : 32'd0;
  assign dm_slave_aid   = data_req ? 1'b0       : 1'b1;

  assign data_gnt        = dm_slave_gnt &  data_req;
  assign instr_dbg_gnt_o = dm_slave_gnt & ~data_req & instr_dbg_req_i;

  assign data_rvalid        = dm_slave_rvalid & ~dm_slave_rid;
  assign instr_dbg_rvalid_o = dm_slave_rvalid &  dm_slave_rid;
  assign data_rdata         = dm_slave_rdata;
  assign instr_dbg_rdata_o  = dm_slave_rdata;

  // ------------------------------------------------------------------
  // Debug Module (OBI-native wrapper)
  // ------------------------------------------------------------------
  dm_obi_top #(
      .IdWidth         (1),
      .NrHarts         (1),
      .BusWidth        (32),
      .DmBaseAddress   (DmBaseAddress),
      .SelectableHarts (1'b1)
  ) u_dm_obi_top (
      .clk_i           (clk_i),
      .rst_ni          (rst_ni),
      .testmode_i      (1'b0),
      .ndmreset_o      (),           // not wired to a system-wide reset yet
      .dmactive_o      (),           // optional status, unused
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

      // SBA master port: intentionally unused (see file header)
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

      .dmi_rst_ni      (dmi_rst_n),
      .dmi_req_valid_i (dmi_req_valid),
      .dmi_req_ready_o (dmi_req_ready),
      .dmi_req_i       (dmi_req),

      .dmi_resp_valid_o (dmi_resp_valid),
      .dmi_resp_ready_i (dmi_resp_ready),
      .dmi_resp_o       (dmi_resp)
  );

endmodule