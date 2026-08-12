module memory_axilite #(
    parameter SIZE = 8192,
    parameter BASE_ADDRESS = 32'h00001000
) (

    input wire clk,
	input wire rst_i,

    input wire AWVALID,
    output wire AWREADY,
    input wire [31:0] AWADDR,

    input wire WVALID,
    output wire WREADY,
    input wire [31:0] WDATA,
    input wire [3:0] WSTRB,

    output wire BVALID,
    input wire BREADY,
    output wire [1:0] BRESP,

    input wire ARVALID,
    output wire ARREADY,
    input wire [31:0] ARADDR,

    output wire RVALID,
    input wire RREADY,
    output wire [31:0] RDATA
);

assign BRESP = 2'b00;


wire [31:0] dout_unused;
wire [31:0] sram_rdata;


reg axi_rready,axi_awready;
reg [31:0] axi_rdata;
reg axi_bvalid,axi_rvalid;

assign BVALID  = axi_bvalid;
assign RVALID  = axi_rvalid;
assign RDATA   = sram_rdata;
assign WREADY  = axi_awready;
assign AWREADY = axi_awready;
assign ARREADY = axi_rready;

wire [31:0] correct_read_address = (ARADDR - BASE_ADDRESS) >> 2;
wire [31:0] correct_write_address = (AWADDR -BASE_ADDRESS) >> 2;

wire axi_write_ready,axi_read_ready;

assign axi_write_ready = axi_awready;
assign axi_read_ready = (ARVALID && ARREADY);

initial axi_bvalid = 1'b0;
always@(posedge clk)begin
    if(!rst_i)
        axi_bvalid <= 1'b0;
    else if(axi_write_ready)
        axi_bvalid <= 1'b1;
    else if(BREADY)
        axi_bvalid <= 1'b0;
end

initial axi_rvalid = 1'b0;
always@(posedge clk)begin
    if(!rst_i)
        axi_rvalid <= 1'b0;
    else if(axi_read_ready)
        axi_rvalid <= 1'b1;
    else if(RREADY)
        axi_rvalid <= 1'b0;
end

initial axi_awready = 1'b0;
always@(posedge clk) begin
    if(!rst_i)
        axi_awready <= 1'b0;
    else 
        axi_awready <= !axi_awready 
                       && (AWVALID && WVALID) 
                       && (!BVALID && BREADY);
end

always@(*)begin
    axi_rready = !RVALID;
end

 sram_macro_wrapper#(.BANK_COUNT(SIZE/2048)) macro(
    // Port 0: Okuma/Yazma (RW) Portu
    .clk0(clk),
    .csb0(~axi_write_ready),      // Active-low Chip Select
    .web0(~axi_write_ready),      // Active-low Write Enable
    .wmask0(WSTRB),    // 4-bit Write Mask (Byte enable)
    .addr0(correct_write_address),     // 11-bit Adres (2048 kelime icin)
    .din0(WDATA),      // 32-bit Yazilacak Veri
    .dout0(dout_unused),     // 32-bit Okunan Veri

    // Port 1: Sadece Okuma (R) Portu
    .clk1(clk),
    .csb1(~axi_read_ready),      // Active-low Chip Select
    .addr1(correct_read_address),     // 11-bit Adres (2048 kelime icin)
    .dout1(sram_rdata)      // 32-bit Okunan Veri
    );

endmodule
