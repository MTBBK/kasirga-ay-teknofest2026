`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// obi_addr_demux
//
// Splits the CV32E40P instruction-fetch OBI port into two branches:
//   - "sys" branch : normal ROM / Instruction Memory path (unchanged)
//   - "dbg" branch : debug ROM inside the Debug Module
//
// Address decode: (core_addr_i & DBG_MASK) == (DBG_BASE & DBG_MASK).
//
// This module is intentionally instruction-fetch specific: read-only, no we/be/
// wdata plumbing. It sits BETWEEN the core's instr_* OBI port and the existing
// obi_to_axi_readonly bridge, so the read-only XBAR itself (which only decodes
// ROM + Instruction Memory) does not need to change.
//
// Response routing: OBI is pipelined (rvalid can arrive one or more cycles
// after grant, and by then core_addr_i may already reflect the NEXT request).
// A one-bit register (pending_dbg_q) latches which branch owns the currently
// outstanding transaction on grant, so rvalid/rdata are mux'd back to the core
// from the correct branch. This assumes single-outstanding OBI on this port,
// matching the existing obi_to_axi_readonly bridge (no internal pipelining).
//////////////////////////////////////////////////////////////////////////////////

module obi_addr_demux #(
    parameter logic [31:0] DBG_BASE = 32'h0001_0000,
    parameter logic [31:0] DBG_MASK = 32'h000F_F000   // matches xbar slv8 decode
) (
    input  logic clk_i,
    input  logic rst_ni,

    // Upstream: core instruction OBI (read-only)
    input  logic        core_req_i,
    input  logic [31:0] core_addr_i,
    output logic        core_gnt_o,
    output logic        core_rvalid_o,
    output logic [31:0] core_rdata_o,

    // Downstream 0: system path -> obi_to_axi_readonly
    output logic        sys_req_o,
    output logic [31:0] sys_addr_o,
    input  logic        sys_gnt_i,
    input  logic        sys_rvalid_i,
    input  logic [31:0] sys_rdata_i,

    // Downstream 1: Debug Module debug-ROM port
    output logic        dbg_req_o,
    output logic [31:0] dbg_addr_o,
    input  logic        dbg_gnt_i,
    input  logic        dbg_rvalid_i,
    input  logic [31:0] dbg_rdata_i
);

  logic is_dbg;
  assign is_dbg = ((core_addr_i & DBG_MASK) == (DBG_BASE & DBG_MASK));

  // Request phase: fork to exactly one branch based on the address
  assign sys_req_o  = core_req_i & ~is_dbg;
  assign sys_addr_o = core_addr_i;
  assign dbg_req_o  = core_req_i &  is_dbg;
  assign dbg_addr_o = core_addr_i;
  assign core_gnt_o = is_dbg ? dbg_gnt_i : sys_gnt_i;

  // Response phase: remember which branch the outstanding request went to
  logic pending_dbg_q;
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      pending_dbg_q <= 1'b0;
    end else if (core_req_i && core_gnt_o) begin
      pending_dbg_q <= is_dbg;
    end
  end

  assign core_rvalid_o = pending_dbg_q ? dbg_rvalid_i : sys_rvalid_i;
  assign core_rdata_o  = pending_dbg_q ? dbg_rdata_i  : sys_rdata_i;

endmodule