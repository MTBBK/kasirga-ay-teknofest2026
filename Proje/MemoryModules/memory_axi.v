module memory_axi #(
    parameter SIZE = 8192,
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
    
    input  wire AWVALID_DMA,
    output wire AWREADY_DMA,
    input  wire [31:0] AWADDR_DMA,
    input  wire [5:0] AWLEN_DMA,
    
    input  wire WVALID_DMA,
    output wire WREADY_DMA,
    input wire [31:0] WDATA_DMA,
    input wire [3:0] WSTRB_DMA,
    input wire WLAST_DMA,
    
    output wire BVALID_DMA,
    input wire BREADY_DMA,
    
    input wire ARVALID_DMA,
    output wire ARREADY_DMA,
    input wire [31:0] ARADDR_DMA,
    input wire [4:0] ARLEN_DMA,
    
    output wire RVALID_DMA,
    input wire RREADY_DMA,
    output wire [31:0] RDATA_DMA,
    output reg RLAST_DMA

);

assign BRESP = 2'b00;
assign RRESP = 2'b00;

assign BRESP_DMA = 2'b00;
assign RRESP_DMA = 2'b00;

reg [31:0] memory [(SIZE/4)-1:0];

//AXI4 DMA SIGNALS
reg [5:0] write_burst_counter;
reg [5:0] write_burst_length;

reg [4:0] read_burst_counter;
reg [4:0] read_burst_counter_next;
reg [4:0] read_burst_length;

reg axi_rready_dma,axi_awready_dma,axi_wready_dma;
reg [127:0] axi_rdata_dma;
reg axi_bvalid_dma,axi_rvalid_dma;

assign BVALID_DMA  = axi_bvalid_dma;
assign RVALID_DMA  = axi_rvalid_dma;
assign RDATA_DMA   = axi_rdata_dma;
assign WREADY_DMA  = axi_wready_dma;
assign AWREADY_DMA = axi_awready_dma;
assign ARREADY_DMA = axi_rready_dma;

wire axi_write_ready_dma,axi_read_ready_dma;

assign axi_write_ready_dma = axi_wready_dma;
assign axi_read_ready_dma = (ARVALID_DMA === 1) && (ARREADY_DMA === 1);

wire [31:0] correct_read_address_dma = (ARADDR_DMA - BASE_ADDRESS) >> 2;
wire [31:0] correct_write_address_dma = (AWADDR_DMA -BASE_ADDRESS) >> 2 ;

wire [31:0] burst_write_address_dma = correct_write_address_dma + write_burst_counter;
wire [31:0] burst_read_address_dma = correct_read_address_dma + read_burst_counter_next;

//AXI4 Lite SIGNALS
reg axi_rready,axi_awready;
reg [31:0] axi_rdata;
reg axi_bvalid,axi_rvalid;

assign BVALID  = axi_bvalid;
assign RVALID  = axi_rvalid;
assign RDATA   = axi_rdata;
assign WREADY  = axi_awready & !axi_write_ready_dma;
assign AWREADY = axi_awready & !axi_write_ready_dma;
assign ARREADY = axi_rready  & !axi_read_ready_dma;

wire [31:0] correct_read_address = (ARADDR - BASE_ADDRESS) >> 2;
wire [31:0] correct_write_address = (AWADDR - BASE_ADDRESS) >> 2;

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
            if(axi_write_ready_dma)
            begin
                if(WSTRB_DMA[0])
                    memory[burst_write_address_dma][7:0]  <= WDATA_DMA[7:0];
                if(WSTRB_DMA[1])
                    memory[burst_write_address_dma][15:8] <= WDATA_DMA[15:8];
                if(WSTRB_DMA[2])
                    memory[burst_write_address_dma][23:16] <= WDATA_DMA[23:16];
                if(WSTRB_DMA[3])
                    memory[burst_write_address_dma][31:24] <= WDATA_DMA[31:24];
            end
            else if (axi_write_ready)
            begin
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

//AXI4 Lite RDATA assignment
always @(posedge clk)begin
    if(!rst_i)
        axi_rdata <= 32'b0;
    if(!ARVALID || RREADY)begin
        axi_rdata <= memory[correct_read_address];
    end
end

//AXI4 DMA  RDATA assignment
always @(posedge clk)begin
    if(!rst_i)
        axi_rdata_dma <= 128'b0;
    if(axi_read_ready_dma || RREADY_DMA)begin
        axi_rdata_dma <= memory[burst_read_address_dma];
    end
end

//AXI4 Lite BVALID
initial axi_bvalid = 1'b0;
always@(posedge clk)begin
    if(!rst_i)
        axi_bvalid <= 1'b0;
    else if(axi_write_ready)
        axi_bvalid <= 1'b1;
    else if(BREADY)
        axi_bvalid <= 1'b0;
end


//AXI4 DMA BVALID
initial axi_bvalid_dma = 1'b0;
always@(posedge clk) begin
    if(!rst_i)
        axi_bvalid_dma <= 1'b0;
    // DÜZELTME: Sadece WLAST_DMA değil, aynı zamanda verinin 
    // bellek tarafından kabul edildiği (axi_write_ready_dma) anı bekliyoruz.
    else if(WLAST_DMA && axi_write_ready_dma)
        axi_bvalid_dma <= 1'b1;
    else if(BREADY_DMA && axi_bvalid_dma)
        axi_bvalid_dma <= 1'b0;
end

//AXI4 Lite RVALID 
initial axi_rvalid = 1'b0;
always@(posedge clk)begin
    if(!rst_i)
        axi_rvalid <= 1'b0;
    else if(axi_read_ready)
        axi_rvalid <= 1'b1;
    else if(RREADY)
        axi_rvalid <= 1'b0;
end

//AXI4 RVALID DMA
initial axi_rvalid_dma = 1'b0;
always@(posedge clk)begin
    if(!rst_i)
    begin
        axi_rvalid_dma <= 1'b0;
        read_burst_counter <= 5'b0;
        read_burst_length <= 5'b0;
        RLAST_DMA <= 0;
    end
    else if(axi_read_ready_dma)
    begin
        axi_rvalid_dma <= 1'b1;
        read_burst_counter <= 0;
        read_burst_length  <= ARLEN_DMA;
        RLAST_DMA <= 0;
    end
    else if(RREADY_DMA)
    begin
        if(read_burst_counter == read_burst_length)
        begin
            read_burst_counter <= 5'b0;
            axi_rvalid_dma <= 1'b0;
        end else
        begin
            read_burst_counter <= read_burst_counter_next;
        end
        
        if(read_burst_counter == read_burst_length-1)
            RLAST_DMA <= 1;
        if(RLAST_DMA)
            RLAST_DMA <= 0;
    end
end

//AXI4 Lite AWREADY
initial axi_awready = 1'b0;
always@(posedge clk) begin
    if(!rst_i)
        axi_awready <= 1'b0;
    else 
        axi_awready <= !axi_awready 
                       && (AWVALID && WVALID) 
                       && (!BVALID && BREADY);
end

//AXI4 DMA AWREADY
initial axi_awready_dma = 1'b0;
always@(posedge clk) begin
    if(!rst_i)
        axi_awready_dma <= 1'b0;
    else if(!axi_awready_dma && AWVALID_DMA && (!BVALID_DMA && BREADY_DMA))
    begin
        axi_awready_dma <= 1;
        write_burst_length <= AWLEN_DMA;
    end
    if(axi_awready_dma)
        axi_awready_dma <= 0;
end

//AXI4 DMA WREADY
initial axi_wready_dma = 1'b0;
always@(posedge clk) begin
    if(!rst_i)
    begin
        axi_wready_dma <= 1'b0;
        write_burst_counter <= 4'b0;
    end
    else if((AWVALID_DMA && AWREADY_DMA) && (!BVALID_DMA && BREADY_DMA) && !axi_wready_dma)
    begin
        axi_wready_dma <= 1;
        write_burst_counter <= 0;
    end else if(axi_wready_dma)
    begin
        if(write_burst_counter == write_burst_length)
        begin
            axi_wready_dma <= 0;
            write_burst_counter <= 0;
        end
        else
            write_burst_counter <= write_burst_counter + 1;
    end
end

always@(*)begin
    axi_rready = !RVALID;
    axi_rready_dma = !RVALID_DMA;
end

always@(*)
    if(RVALID_DMA)
        read_burst_counter_next = read_burst_counter + 1;
    else
        read_burst_counter_next = 0;
endmodule
