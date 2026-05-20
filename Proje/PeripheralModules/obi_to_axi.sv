module obi_to_axi(
    input  obi_req_i,
    output obi_gnt_o,
    output obi_rvalid_o,
    input  [31:0] obi_addr_i,
    input  [31:0] obi_wdata_i,
    input  obi_we_i,
    input  [3:0] obi_be_i,
    output [31:0] obi_rdata_o,
   
    output [31:0] axi_araddr_o,
    output axi_arvalid_o,
    input  axi_arready_i,
    
    input  [31:0] axi_rdata_i,
    input  axi_rvalid_i,
    output axi_rready_o,
    
    output [31:0] axi_awaddr_o,
    output axi_awvalid_o,
    input  axi_awready_i,
    input  axi_wready_i,
    output [31:0] axi_wdata_o,
    output axi_wvalid_o,
    output [3:0] axi_wstrb_o,
    input  axi_bvalid_i,
    output axi_bready_o
);

    //Pass addresses and data
    assign axi_araddr_o = obi_addr_i;
    assign axi_awaddr_o = obi_addr_i;
    assign axi_wdata_o  = obi_wdata_i;
    assign axi_wstrb_o   = obi_be_i;
    assign obi_rdata_o   = axi_rdata_i;

    //Assert valids immediately when a request is active
    assign axi_arvalid_o = obi_req_i & ~obi_we_i;
    assign axi_awvalid_o = obi_req_i & obi_we_i;
    assign axi_wvalid_o  = obi_req_i & obi_we_i;

    assign axi_rready_o  = 1'b1;
    assign axi_bready_o  = 1'b1;

    //Grant the OBI bus as soon as the AXI slave accepts the transaction
    assign obi_gnt_o     = (!obi_we_i) ? axi_arready_i : (axi_awready_i & axi_wready_i);
    
    //Return valid back to OBI master
    assign obi_rvalid_o  = axi_rvalid_i || axi_bvalid_i;

endmodule
