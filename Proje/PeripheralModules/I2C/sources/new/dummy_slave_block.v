module dummy_slave_block (
    input wire clk,
    input wire rst_n, 
    
    input wire scl_i,
    input wire sda_i,
    output wire scl_o,
    output wire sda_o
);

i2c_slave #(
    .FILTER_LEN(4)
) osman (
    .clk(clk),
    .rst(~rst_n), // because the golden slave uses active-high reset

    .scl_i(scl_i), 
    .sda_i(sda_i),
    .scl_o(scl_o), 
    .sda_o(sda_o),
    .scl_t(), // Ignored
    .sda_t(), // Ignored

    .enable(1'b1),
    .device_address(7'h55),      // The address that will trigger from VIO
    .device_address_mask(7'h7F), // Match exact address
    .release_bus(1'b0),

    // Auto-feed the axi interface so it doesn't freeze
    .s_axis_data_tdata(8'hAA), 
    .s_axis_data_tvalid(1'b1),
    .s_axis_data_tlast(1'b0), 
    .s_axis_data_tready(),     
    .m_axis_data_tdata(),      
    .m_axis_data_tvalid(),     
    .m_axis_data_tready(1'b1), 
    .m_axis_data_tlast(),
    .busy(), .bus_address(), .bus_addressed(), .bus_active()
);
endmodule