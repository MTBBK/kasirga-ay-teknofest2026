# asic/constraints/design.sdc
# --- 1. Primary Board Clock (50MHz / 20ns) ---
create_clock -name clk_main -period 40.0 [get_ports clk_i_50mHz]
# --- 2. Generated Clock for VGA (25MHz) ---
#create_generated_clock -name clk_25mhz -source [get_ports clk_i_50mHz] -divide_by 2 \
#   [get_pins -of_objects [get_nets clk_25] -filter {direction == output}]
# --- 3. Clock Domain Crossings (CRITICAL) ---set_clock_groups -asynchronous \-group [get_clocks clk_main]
    #-group [get_clocks clk_25mhz]
# --- 4. Clock Uncertainties & Transitions ---
set_clock_uncertainty -setup 0.2  [get_clocks clk_main]
set_clock_uncertainty -hold  0.05 [get_clocks clk_main]
set_clock_transition  0.15        [get_clocks clk_main]
# --- 5. IO Constraints ---
set_input_delay 1.0 -clock [get_clocks clk_main] [all_inputs]
set_output_delay 1.0 -clock [get_clocks clk_main] [all_outputs]
set_input_transition 0.5 [all_inputs]
set_load 0.05 [all_outputs]
# Targeted fix for port-to-register hold violations (qspi_io_*, gpio_i[*],
# fetch_enable, uart_rx_i). Unlike -min input delay, this directly forces
# a minimum delay requirement on exactly these paths, giving the resizer
# a concrete, per-path hold target instead of a blanket arrival-time
# assumption applied to all ports uniformly across all corners.
set_min_delay 0.5 -from [get_ports {qspi_io_0 qspi_io_1 qspi_io_2 qspi_io_3 gpio_i* fetch_enable uart_rx_i}]
# --- 6. False Paths ---
set_false_path -from [get_ports rst_i]
set_false_path -through [get_ports sda_io]
