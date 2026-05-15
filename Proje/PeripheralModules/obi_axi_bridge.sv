`timescale 1ns / 1ps

module obi_axi_bridgexed(

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
    input axi_arready_i,
    
    input [31:0] axi_rdata_i,
    //Obi çıkış sinyallerine etkisi olmayacağı için RRESP sinyali kullanılmadı
    input  axi_rvalid_i,
    output axi_rready_o,
    
    output [31:0] axi_awaddr_o,
    output axi_awvalid_o,
    input axi_awready_i,
    input axi_wready_i,
    output [31:0] axi_wdata_o,
    output axi_wvalid_o,
    output [3:0] axi_wstrb_o,
    //Obi çıkış sinyallerine etkisi olmayacağı için BRESP sinyali kullanılmadı
    input  axi_bvalid_i,
    output axi_bready_o
    
    );
    
    assign axi_araddr_o = obi_addr_i;
    assign axi_awaddr_o = obi_addr_i;
    
    assign obi_gnt_o = (axi_arready_i & !obi_we_i) || (axi_awready_i & axi_wready_i) ;
    //axi_arready_i || (axi_awready_i & axi_wready_i) ;
    assign axi_arvalid_o = obi_req_i & ~obi_we_i;
    assign axi_rready_o  = 1;
    assign obi_rvalid_o  = axi_rvalid_i || axi_bvalid_i;
    
    //Hem okuma hem de yazma sonrası cevap için
    assign obi_rdata_o   = axi_rdata_i;
    
    assign axi_awvalid_o = obi_req_i & obi_we_i;
    assign axi_wvalid_o  = obi_req_i & obi_we_i;
    assign axi_wdata_o   = obi_wdata_i;
    assign axi_wstrb_o   = obi_be_i;
    assign axi_bready_o  = 1;
    
    
endmodule
