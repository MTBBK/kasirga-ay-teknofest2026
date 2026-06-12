module obi_to_axi(
    input  clk,
    input  rst_n,
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

    //Track outstanding transactions to avoid AXI out-of-order responses breaking OBI
    reg outstanding;
    reg outstanding_we;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            outstanding <= 1'b0;
            outstanding_we <= 1'b0;
        end else if (obi_req_i && obi_gnt_o && !obi_rvalid_o) begin
            outstanding <= 1'b1;
            outstanding_we <= obi_we_i;
        end else if (obi_rvalid_o && (!obi_req_i || !obi_gnt_o)) begin
            outstanding <= 1'b0;
        end else if (obi_rvalid_o && obi_req_i && obi_gnt_o) begin
            outstanding <= 1'b1;
            outstanding_we <= obi_we_i;
        end
    end

    //Assert valids immediately
    assign axi_arvalid_o = obi_req_i & ~obi_we_i & (!outstanding);
    assign axi_awvalid_o = obi_req_i & obi_we_i & (!outstanding);
    assign axi_wvalid_o  = obi_req_i & obi_we_i & (!outstanding);

    assign axi_rready_o  = 1'b1;
    assign axi_bready_o  = 1'b1;

    //Grant the OBI bus as soon as the AXI slave accepts the transaction
    assign obi_gnt_o     = ((!obi_we_i) ? axi_arready_i : (axi_awready_i & axi_wready_i)) & (!outstanding);
    
    //Return valid back to OBI master based on the type of outstanding transaction
    assign obi_rvalid_o  = outstanding ? (outstanding_we ? axi_bvalid_i : axi_rvalid_i) : (obi_we_i ? axi_bvalid_i : axi_rvalid_i);

endmodule
