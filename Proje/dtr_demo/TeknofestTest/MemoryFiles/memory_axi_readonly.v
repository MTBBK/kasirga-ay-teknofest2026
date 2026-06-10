module memory_axi_readonly #(
    parameter SIZE = 1024,
    parameter MEMFILE = "",
    parameter BASE_ADDRESS = 32'h00000000
) (

    input wire clk,
	input wire rst_i,

    input wire ARVALID,
    output wire ARREADY,
    input wire [31:0] ARADDR,

    output wire RVALID,
    input wire RREADY,
    output wire [31:0] RDATA

);


reg [31:0] memory [(SIZE/4)-1:0];



reg axi_rready;
reg [31:0] axi_rdata;
reg axi_rvalid;

assign RVALID  = axi_rvalid;
assign RDATA   = axi_rdata;
assign ARREADY = axi_rready;

wire [31:0] correct_read_address = (ARADDR - BASE_ADDRESS) >> 2;

wire axi_read_ready;

assign axi_read_ready = (ARVALID && ARREADY);

integer i;
initial begin
    for (i = 0; i < (SIZE/4); i = i + 1) begin
       memory[i] = 32'h00000000;
    end
    $readmemh(MEMFILE, memory);
end

always @(posedge clk)begin
    if(!rst_i)
        axi_rdata <= 32'b0;
    if(!ARVALID || RREADY)begin
        axi_rdata <= memory[correct_read_address];
    end
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

always@(*)begin
    axi_rready = !RVALID;
end

endmodule
