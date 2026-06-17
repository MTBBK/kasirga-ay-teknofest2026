`timescale 1ns / 1ps

module gpio(
    input wire clk,
    input wire rst_i, 
    output wire [15:0] output_pins,
    input  wire [15:0] input_pins,
    
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
    output wire [1:0] RRESP
    );
    
    reg [31:0] GPIO_ODR;
    
    assign BRESP = 2'b00;
    assign RRESP = 2'b00;

    reg axi_arready;
    reg axi_awready;
    reg [31:0] axi_rdata;
    reg axi_bvalid, axi_rvalid;

    assign AWREADY = axi_awready;
    assign WREADY  = axi_awready;
    assign BVALID  = axi_bvalid;
    assign RVALID  = axi_rvalid;
    assign RDATA   = axi_rdata;

    assign ARREADY = axi_arready;
    
    wire axi_write_ready, axi_read_ready;
    
    assign axi_write_ready = axi_awready && AWVALID && WVALID;
    assign axi_read_ready = (ARVALID && ARREADY);

    localparam ADDR_GPIO_IDR = 32'h00000000, // Giriş veri yazmacı (Offset 0x00)
               ADDR_GPIO_ODR = 32'h00000004; // Çıkış veri yazmacı (Offset 0x04)

    assign output_pins = GPIO_ODR[15:0];

    always@(posedge clk) begin
        if(!rst_i) begin
            GPIO_ODR <= 32'b0;
        end
        else if (axi_write_ready) begin
            // Sadece ODR yazmacına yazma yapılabilir 
            if(AWADDR == ADDR_GPIO_ODR) begin
                if(WSTRB[0]) GPIO_ODR[7:0]   <= WDATA[7:0];
                if(WSTRB[1]) GPIO_ODR[15:8]  <= WDATA[15:8];
                // Üst bitlere yazılan değer etkisizdir 
                if(WSTRB[2]) GPIO_ODR[23:16] <= WDATA[23:16];
                if(WSTRB[3]) GPIO_ODR[31:24] <= WDATA[31:24];
            end
       end
    end

    // Read
    always @(posedge clk) begin
        if(!rst_i)
            axi_rdata <= 32'b0;
        else if(axi_read_ready) begin
            case(ARADDR)
                ADDR_GPIO_IDR: axi_rdata <= {16'b0, input_pins}; // Üst 16-bit her zaman 0 
                ADDR_GPIO_ODR: axi_rdata <= GPIO_ODR;
                default:       axi_rdata <= 32'h0;
            endcase
        end
    end

    initial axi_bvalid = 1'b0;
    always@(posedge clk) begin
        if(!rst_i)
            axi_bvalid <= 1'b0;
        else if(axi_write_ready)
            axi_bvalid <= 1'b1;
        else if(BREADY && axi_bvalid)
            axi_bvalid <= 1'b0;
    end

    initial axi_rvalid = 1'b0;
    always@(posedge clk) begin
        if(!rst_i)
            axi_rvalid <= 1'b0;
        else if(axi_read_ready)
            axi_rvalid <= 1'b1;
        else if(RREADY && axi_rvalid)
            axi_rvalid <= 1'b0;
    end

    initial axi_awready = 1'b0;
    always@(posedge clk) begin
        if(!rst_i)
            axi_awready <= 1'b0;
        else 
            axi_awready <= !axi_awready && (AWVALID && WVALID) && !BVALID;
    end

    initial axi_arready = 1'b0;
    always @(posedge clk) begin
        if (!rst_i)
            axi_arready <= 1'b0;
        else if (ARVALID && !axi_rvalid && !axi_arready)
            axi_arready <= 1'b1;
        else
            axi_arready <= 1'b0;
    end

endmodule
