// Minimal drop-in replacement for pulp-platform/common_cells' registers.svh.
//
// The vendored common-cell/src tree in this project instantiates the `FF*
// macros (see cdc_2phase_clearable.sv) but the accompanying include/ folder
// that normally ships with common_cells was not copied in. Without this file
// `cdc_2phase_clearable.sv` (needed by dmi_cdc -> dmi_jtag -> dm_jtag_subsystem)
// fails to compile with "macro FFNR undefined" under any simulator/synthesis
// tool that actually expands the `include. Only the macros exercised by the
// files currently vendored under PeripheralModules/JTAG/vendor are defined
// below; semantics match upstream common_cells.
`ifndef COMMON_CELLS_REGISTERS_SVH_
`define COMMON_CELLS_REGISTERS_SVH_

// Flip-flop with asynchronous active-low reset.
`define FFAR(__q, __d, __reset_value, __clk, __arst_n)      \
  always_ff @(posedge (__clk) or negedge (__arst_n)) begin  \
    if (!__arst_n) __q <= (__reset_value);                  \
    else           __q <= (__d);                            \
  end

`define FF(__q, __d, __reset_value, __clk, __arst_n) \
  `FFAR(__q, __d, __reset_value, __clk, __arst_n)

`define FFARN(__q, __d, __reset_value, __clk, __arst_n) \
  `FFAR(__q, __d, __reset_value, __clk, __arst_n)

// Flip-flop with asynchronous active-high reset.
`define FFAH(__q, __d, __reset_value, __clk, __arst)     \
  always_ff @(posedge (__clk) or posedge (__arst)) begin \
    if (__arst) __q <= (__reset_value);                  \
    else        __q <= (__d);                            \
  end

// Flip-flop without any reset.
`define FFNR(__q, __d, __clk)        \
  always_ff @(posedge (__clk)) begin \
    __q <= (__d);                    \
  end

// Flip-flop with load-enable and asynchronous active-low reset.
`define FFLARN(__q, __d, __load, __reset_value, __clk, __arst_n) \
  always_ff @(posedge (__clk) or negedge (__arst_n)) begin       \
    if (!__arst_n)   __q <= (__reset_value);                     \
    else if (__load) __q <= (__d);                               \
  end

`define FFL(__q, __d, __load, __reset_value, __clk, __arst_n) \
  `FFLARN(__q, __d, __load, __reset_value, __clk, __arst_n)

// Flip-flop with load-enable and no reset.
`define FFLNR(__q, __d, __load, __clk) \
  always_ff @(posedge (__clk)) begin   \
    if (__load) __q <= (__d);          \
  end

// Flip-flop with load-enable, synchronous clear, and asynchronous active-low reset.
`define FFLARNC(__q, __d, __load, __clear, __reset_value, __clk, __arst_n) \
  always_ff @(posedge (__clk) or negedge (__arst_n)) begin                 \
    if (!__arst_n)     __q <= (__reset_value);                             \
    else if (__clear)  __q <= (__reset_value);                             \
    else if (__load)   __q <= (__d);                                       \
  end

`endif // COMMON_CELLS_REGISTERS_SVH_
