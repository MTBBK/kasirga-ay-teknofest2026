`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09.04.2026 13:55:46
// Design Name: 
// Module Name: gpio
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


`timescale 1ns / 1ps

module gpio (
    input  wire        clk,
    input  wire        rst_i,

    output wire [15:0] output_pins,
    input  wire [15:0] input_pins,

    input  wire        ARVALID,
    output reg         ARREADY,
    input  wire [31:0] ARADDR,

    output reg         RVALID,
    input  wire        RREADY,
    output reg  [31:0] RDATA,
    output wire [1:0]  RRESP
);

    reg [15:0] gpio_odr_reg;
    
    localparam ADDR_GPIO_IDR = 32'h00; // Offset 0x00
    localparam ADDR_GPIO_ODR = 32'h04; // Offset 0x04

    assign output_pins = gpio_odr_reg;
    assign RRESP = 2'b00; // OKAY

    //READ
    always @(posedge clk) begin
        if (!rst_i) begin //rst=0 ise reset at
            ARREADY  <= 1'b0;
            RVALID   <= 1'b0;
            RDATA    <= 32'h0;
        end else begin
            // Okuma Adres El Sýkýþmasý
            if (!ARREADY && ARVALID) begin
                ARREADY <= 1'b1;
            end else begin
                ARREADY <= 1'b0;
            end

            // Veri Okuma (IDR veya ODR)
            if (ARREADY && ARVALID && !RVALID) begin
                RVALID <= 1'b1;
                case (ARADDR[7:0])
                    ADDR_GPIO_IDR: RDATA <= {16'h0000, input_pins}; // IDR: Üst bitler her zaman 0
                    ADDR_GPIO_ODR: RDATA <= {16'h0000, gpio_odr_reg}; // ODR: Okunabilir (RW)
                    default:       RDATA <= 32'h0000_0000;
                endcase
            end

            if (RREADY && RVALID) begin
                RVALID <= 1'b0;
            end
        end
    end

endmodule
