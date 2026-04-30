set_property PACKAGE_PIN W5 [get_ports clk_i]
set_property IOSTANDARD LVCMOS33 [get_ports clk_i]
create_clock -add -name sys_clk_pin -period 10.00 -waveform {0 5} [get_ports clk_i]

set_property PACKAGE_PIN U18 [get_ports rst_btn_i]
set_property IOSTANDARD LVCMOS33 [get_ports rst_btn_i]

set_property PACKAGE_PIN B18 [get_ports uart_rx_i]
set_property IOSTANDARD LVCMOS33 [get_ports uart_rx_i]

set_property PACKAGE_PIN A18 [get_ports uart_tx_o]
set_property IOSTANDARD LVCMOS33 [get_ports uart_tx_o]