# ----------------------------------------------------------------------------
# Basys 3 Master Clock (100 MHz on pin W5)
# ----------------------------------------------------------------------------
set_property PACKAGE_PIN W5 [get_ports clk]
set_property IOSTANDARD LVCMOS33 [get_ports clk]
create_clock -period 10.000 -name sys_clk_pin -waveform {0.000 5.000} -add [get_ports clk]

# o_scl mapped to LED 0 (Rightmost LED)
set_property PACKAGE_PIN U16 [get_ports o_scl]
set_property IOSTANDARD LVCMOS33 [get_ports o_scl]

# o_sda_out mapped to LED 1
set_property PACKAGE_PIN E19 [get_ports o_sda_out]
set_property IOSTANDARD LVCMOS33 [get_ports o_sda_out]

# o_sda_oe mapped to LED 2
set_property PACKAGE_PIN U19 [get_ports o_sda_oe]
set_property IOSTANDARD LVCMOS33 [get_ports o_sda_oe]

# i_sda_in_0 kept on JA4 just so Vivado doesn't complain about a missing pin
set_property PACKAGE_PIN G2 [get_ports i_sda_in_0]
set_property IOSTANDARD LVCMOS33 [get_ports i_sda_in_0]

set_property PACKAGE_PIN L1 [get_ports o_ready_led]
set_property IOSTANDARD LVCMOS33 [get_ports o_ready_led]
