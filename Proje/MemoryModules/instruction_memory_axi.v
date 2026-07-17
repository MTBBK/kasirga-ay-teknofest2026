module instruction_memory_axi #(
    parameter SIZE = 200,
    parameter BASE_ADDRESS = 32'h00000000
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
    output wire [31:0] RDATA,
    
    output reg boot_ended

);

assign BRESP = 2'b00;

reg [31:0] memory [(SIZE/4)-1:0];




reg axi_rready,axi_awready;
reg [31:0] axi_rdata;
reg axi_bvalid,axi_rvalid;

assign BVALID  = axi_bvalid;
assign RVALID  = axi_rvalid;
assign RDATA   = axi_rdata;
assign WREADY  = axi_awready;
assign AWREADY = axi_awready;
assign ARREADY = axi_rready;

wire [31:0] correct_read_address = (ARADDR - BASE_ADDRESS) >> 2;
wire [31:0] correct_write_address = (AWADDR -BASE_ADDRESS) >> 2;

wire axi_write_ready,axi_read_ready;

assign axi_write_ready = axi_awready;
assign axi_read_ready = (ARVALID && ARREADY);

integer i;
initial begin
    for (i = 0; i < (SIZE/4); i = i + 1) begin
       memory[i] = 32'h00000000;
    end
end
always@(posedge clk) begin
        if(!rst_i)begin
            boot_ended <= 1'b0;
        end else 
            if (axi_write_ready) begin
                if(correct_write_address == 2047)begin
                    boot_ended <= 1'b1;
                end
                if(WSTRB[0])
                    memory[correct_write_address][7:0] <= WDATA[7:0];
                if(WSTRB[1])
                    memory[correct_write_address][15:8] <= WDATA[15:8];
                if(WSTRB[2])
                    memory[correct_write_address][23:16] <= WDATA[23:16];
                if(WSTRB[3])
                    memory[correct_write_address][31:24] <= WDATA[31:24];
        end
end

always @(posedge clk)begin
    if(!rst_i)
        axi_rdata <= 32'b0;
    if(!ARVALID || RREADY)begin
        axi_rdata <= memory[correct_read_address];
    end
end

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

endmodule