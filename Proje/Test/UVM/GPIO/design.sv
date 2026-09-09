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
    

    localparam ADDR_GPIO_IDR = 32'h00007000, // Giriş veri yazmacı (Offset 0x00)
               ADDR_GPIO_ODR = 32'h00007004; // Çıkış veri yazmacı (Offset 0x04)

    assign output_pins = GPIO_ODR[15:0];

    always@(posedge clk) begin
        if (!rst_i) begin
            GPIO_ODR <= 32'b0;
        end else begin
            // Software Write Operations (AXI)
            if (axi_awready) begin
                case (AWADDR)
					ADDR_GPIO_ODR:begin // 0x00
				        if(WSTRB[0]) GPIO_ODR[7:0]   <= WDATA[7:0];
                        if(WSTRB[1]) GPIO_ODR[15:8]  <= WDATA[15:8];
                        // Üst bitlere yazılan değer etkisizdir 
                        if(WSTRB[2]) GPIO_ODR[23:16] <= WDATA[23:16];
                        if(WSTRB[3]) GPIO_ODR[31:24] <= WDATA[31:24];
				    end
					
                endcase
            end
        end
    end

    // 3. Software Read Logic
    always@(posedge clk) begin
        if (!rst_i) begin
            axi_rdata <= 32'd0;
        end else if (axi_arready) begin
            case (ARADDR)
                ADDR_GPIO_IDR: axi_rdata <= {16'b0, input_pins}; // Üst 16-bit her zaman 0 
                ADDR_GPIO_ODR: axi_rdata <= GPIO_ODR;
                default: axi_rdata <= 32'd0;
            endcase
        end
    end

    // Handshake logic (simplified standard AXI template)
    always@(posedge clk) begin
        if (!rst_i) begin
            axi_awready <= 1'b0;
            axi_bvalid  <= 1'b0;
            axi_arready <= 1'b0;
            axi_rvalid  <= 1'b0;
        end else begin
            // Write handshaking
            axi_awready <= (~axi_awready && AWVALID && WVALID);
            if (axi_awready && ~axi_bvalid)
                axi_bvalid <= 1'b1;
            else if (BREADY && axi_bvalid)
                axi_bvalid <= 1'b0;

            // Read handshaking
            axi_arready <= (~axi_arready && ARVALID);
            if (axi_arready && ~axi_rvalid)
                axi_rvalid <= 1'b1;
            else if (axi_rvalid && RREADY)
                axi_rvalid <= 1'b0;
        end
    end
    

endmodule


    

    


