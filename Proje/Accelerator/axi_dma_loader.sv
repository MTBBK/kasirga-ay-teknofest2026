`timescale 1ns / 1ps

module axi4_dma_loader #(
    //cnn model geometry
    parameter int PADDED_W=46,
    parameter int PADDED_H=58,
    parameter int REAL_W=40,
    parameter int REAL_H=49,
    parameter int PAD_LEFT=3,
    parameter int PAD_TOP=4,
    parameter logic [7:0] PAD_VAL=8'h80,
    parameter logic [31:0] BASE_ADDR=32'h0001_2000
)(
    input  logic clk,
    input  logic rst,

    //to memory axi dma port(axi4 master)
   
    output logic [31:0] M_AXI_ARADDR,
    output logic [4:0] M_AXI_ARLEN,
    output logic M_AXI_ARVALID,
    input  logic M_AXI_ARREADY,

    input  logic [31:0] M_AXI_RDATA,
    input  logic M_AXI_RLAST,
    input  logic M_AXI_RVALID,
    output logic M_AXI_RREADY,
    
    //to local buffer 
    
    output logic [7:0] loader_we,
    output logic [9:0] loader_addr,
    output logic [63:0] loader_din,

    //control interface (from config slave)
    
    input  logic start_loader,
    output logic loader_done
);

    //constant axi burst parameters
    localparam logic [2:0] M_AXI_ARSIZE=3'b010; //4 bytes per beat (matches the 32-bit dma memory port)
    localparam logic [1:0] M_AXI_ARBURST=2'b01;  //incrementing burst

    logic [63:0] PADDING_BLOCK;
    assign PADDING_BLOCK = {8{PAD_VAL}};

    typedef enum logic [2:0] {
        IDLE, 
        PASS1_PAD, 
        PASS2_REQ, 
        PASS2_READ, 
        PASS2_STRADDLE, 
        DONE
    } state_t;
    state_t state;

    logic [8:0] pass1_addr;
    logic [5:0] row_idx;
    logic [5:0] col_idx; 

    //combinational straddle math
    //tracks where the current 4-byte axi word belongs in the padded 2D grid
    logic [12:0] current_byte_idx;
    assign current_byte_idx=(row_idx + PAD_TOP)* PADDED_W+PAD_LEFT+col_idx;

    logic [9:0] bram_addr_0, bram_addr_1;
    assign bram_addr_0 = current_byte_idx>>3; //to divide with 8 
    assign bram_addr_1 = (current_byte_idx + 3)>>3; 

    logic [2:0] offset;
    assign offset = current_byte_idx % 8;

    logic [7:0] we_0, we_1;
    logic [63:0] din_0, din_1;
    
    //slices the 32-bit axi data into the correct byte lanes of the 64-bit bram
    assign we_0=8'(8'h0F<<offset);
    assign din_0=64'(M_AXI_RDATA)<<(offset * 8);
    assign we_1=8'(8'h0F>>(8 - offset));
    assign din_1=64'(M_AXI_RDATA)>>((8 - offset) * 8);

    //save registers for straddling boundaries
    logic [7:0] saved_we_1;
    logic [63:0] saved_din_1;
    logic [9:0] saved_addr_1;
    logic saved_rlast;

    always_ff @(posedge clk) begin
        if (rst) begin
            state<=IDLE;
            loader_done<= 1'b0;
            M_AXI_ARVALID<=1'b0;
            M_AXI_RREADY<=1'b0;
            loader_we<=8'd0;
            pass1_addr<='0;
            row_idx<='0;
            col_idx<='0;
        end else begin
            loader_we<=8'd0; //default off
            loader_done<=1'b0;

            case (state)
                IDLE: begin
                    if (start_loader) begin
                        state<=PASS1_PAD;
                        pass1_addr<= '0;
                        
                        row_idx<='0; //reset the row tracker for repeat runs
                        col_idx<='0; //reset the col tracker for repeat runs
                        
                        loader_done<=1'b0;
                    end
                end

                PASS1_PAD: begin
                    loader_we<=8'hFF;
                    loader_din<=PADDING_BLOCK;
                    loader_addr<=pass1_addr;

                    if (pass1_addr==9'd333) begin //334 words covers the 46x58 grid
                        state<=PASS2_REQ;
                        pass1_addr<='0;
                    end else begin
                        pass1_addr<=pass1_addr+1;
                    end
                end

                PASS2_REQ: begin
                    M_AXI_ARADDR<=BASE_ADDR+(row_idx * REAL_W);
                    M_AXI_ARLEN<=5'd9; //10 beats (40 bytes per row)
                    M_AXI_ARVALID<=1'b1;

                    if (M_AXI_ARREADY && M_AXI_ARVALID) begin
                        M_AXI_ARVALID<=1'b0;
                        M_AXI_RREADY<=1'b1;
                        state<=PASS2_READ;
                    end
                end

                PASS2_READ: begin
                    if (M_AXI_RVALID && M_AXI_RREADY) begin
                        loader_we<=we_0;
                        loader_din<=din_0;
                        loader_addr<=bram_addr_0;

                        if (bram_addr_0 == bram_addr_1) begin
                            //axi data fits perfectly in one bram word
                            col_idx<=col_idx + 4;
                            if (M_AXI_RLAST) begin
                                M_AXI_RREADY<=1'b0;
                                row_idx<=row_idx + 1;
                                col_idx<='0;
                                if (row_idx==REAL_H - 1) state<= DONE;
                                else state<=PASS2_REQ;
                            end
                        end else begin
                            //data straddles a bram word boundary save spillover.
                            saved_we_1<=we_1;
                            saved_din_1<=din_1;
                            saved_addr_1<=bram_addr_1;
                            saved_rlast<=M_AXI_RLAST;

                            M_AXI_RREADY<=1'b0; //pause axi bus
                            state<=PASS2_STRADDLE;
                        end
                    end
                end

                PASS2_STRADDLE: begin
                    //write the spillover bytes to the next ram address
                    loader_we<=saved_we_1;
                    loader_din<=saved_din_1;
                    loader_addr<=saved_addr_1;

                    col_idx<=col_idx+4;
                    M_AXI_RREADY<=1'b1; //resume axi bus

                    if (saved_rlast) begin
                        M_AXI_RREADY<=1'b0;
                        row_idx<=row_idx+1;
                        col_idx<='0;
                        if (row_idx==REAL_H-1) state<=DONE;
                        else state<=PASS2_REQ;
                    end else begin
                        state<=PASS2_READ;
                    end
                end

                DONE: begin
                    loader_done<=1'b1;
                    if (!start_loader) state<=IDLE;
                end
            endcase
        end
    end
endmodule
