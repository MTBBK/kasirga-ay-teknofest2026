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
    output logic [7:0] M_AXI_ARLEN,
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

    //padding geometry
    localparam int GAP_LEN=PADDED_W-REAL_W;//right-pad(r)+left-pad(r+1), contiguous

    localparam int TOP_WORDS=(PAD_TOP*PADDED_W)/8;//full words fully inside the top pad rows

    localparam int TOTAL_WORDS=(PADDED_W*PADDED_H+7)/8;//words needed for the whole grid

    localparam int FINAL_START=(REAL_H-1+PAD_TOP)*PADDED_W+PAD_LEFT+REAL_W;//right-pad start of last row

    localparam int BOTTOM_START_WORD = FINAL_START/8 + 1;// first word fully inside bottom pad rows

    typedef enum logic [3:0] {
        IDLE,
        TOP_PAD,
        PAD_A,
        PAD_B,
        PASS2_REQ,
        PASS2_READ,
        PASS2_STRADDLE,
        BOTTOM_PAD,
        DONE
    } state_t;
    state_t state;

    typedef enum logic [1:0] { 
        PAD_INIT, 
        PAD_GAP, 
        PAD_FINAL 
    } pad_ctx_t;
    pad_ctx_t pad_ctx;

    logic [9:0] pad_word_ctr;//shared sweep counter for TOP_PAD/BOTTOM_PAD
    logic [5:0] row_idx;
    logic [5:0] col_idx;

    //straddle math for AXI data
    logic [12:0] current_byte_idx;
    assign current_byte_idx=(row_idx+PAD_TOP)*PADDED_W+PAD_LEFT+col_idx;

    logic [9:0] bram_addr_0, bram_addr_1;
    assign bram_addr_0=current_byte_idx>>3;
    assign bram_addr_1=(current_byte_idx + 3)>>3;

    logic [2:0] offset;
    assign offset=current_byte_idx%8;

    logic [7:0] we_0, we_1;
    logic [63:0] din_0, din_1;

    assign we_0=8'(8'h0F<<offset);
    assign din_0=64'(M_AXI_RDATA)<<(offset * 8);
    assign we_1=8'(8'h0F>>(8 - offset));
    assign din_1=64'(M_AXI_RDATA)>>((8 - offset) * 8);

    logic [7:0] saved_we_1;
    logic [63:0] saved_din_1;
    logic [9:0] saved_addr_1;
    logic saved_rlast;

    //math for the pad margin writes (PAD_A/PAD_B)
    logic [12:0] pad_start_idx;
    logic [3:0]  pad_length;

    always_comb begin
        case (pad_ctx)
            PAD_INIT: begin
                pad_start_idx=PAD_TOP*PADDED_W;//left-pad of row0
                pad_length=PAD_LEFT;
            end
            PAD_GAP: begin
                pad_start_idx=(row_idx+PAD_TOP)*PADDED_W+PAD_LEFT+REAL_W;//right-pad(row_idx)+left-pad(row_idx+1)
                pad_length    = GAP_LEN;
            end
            default: begin//PAD_FINAL
                pad_start_idx=(row_idx+PAD_TOP)*PADDED_W+PAD_LEFT+REAL_W;//right-pad(last row)
                pad_length    = 4'd8 - (pad_start_idx % 8);//extend to fill the word exactly
            end
        endcase
    end

    logic [2:0] pad_offset;
    logic [9:0] pad_word0;
    assign pad_offset=pad_start_idx[2:0];
    assign pad_word0=pad_start_idx[12:3];

    logic [7:0]  pad_mask_lsb;
    logic [15:0] pad_mask16;
    assign pad_mask_lsb=8'hFF >> (4'd8-pad_length);
    assign pad_mask16={8'b0, pad_mask_lsb} << pad_offset;

    logic [7:0] pad_we_0, pad_we_1;
    logic [9:0] pad_addr_0, pad_addr_1;
    assign pad_we_0=pad_mask16[7:0];
    assign pad_we_1=pad_mask16[15:8];
    assign pad_addr_0=pad_word0;
    assign pad_addr_1=pad_word0 + 10'd1;
    logic pad_straddle;
    assign pad_straddle=|pad_we_1;

    always_ff @(posedge clk) begin
        if (rst) begin
            state<=IDLE;
            pad_ctx<=PAD_INIT;
            loader_done<=1'b0;
            M_AXI_ARVALID<=1'b0;
            M_AXI_RREADY<=1'b0;
            loader_we<=8'd0;
            pad_word_ctr<='0;
            row_idx<='0;
            col_idx<='0;
        end else begin
            loader_we<=8'd0; //default off
            loader_done<=1'b0;

            case (state)
                IDLE: begin
                    if (start_loader) begin
                        state<=TOP_PAD;
                        pad_word_ctr<='0;
                        row_idx<='0;
                        col_idx<='0;
                        loader_done<=1'b0;
                    end
                end

                TOP_PAD: begin
                    loader_we<=8'hFF;
                    loader_din<=PADDING_BLOCK;
                    loader_addr<=pad_word_ctr;

                    if (pad_word_ctr==TOP_WORDS-1) begin
                        state<=PAD_A;
                        pad_ctx<=PAD_INIT;
                    end else begin
                        pad_word_ctr<=pad_word_ctr+1;
                    end
                end

                PAD_A: begin
                    loader_we<=pad_we_0;
                    loader_din<=PADDING_BLOCK;
                    loader_addr<=pad_addr_0;

                    if (pad_straddle) begin
                        state<=PAD_B;
                    end else begin
                        case (pad_ctx)
                            PAD_INIT: state<=PASS2_REQ;
                            PAD_GAP: begin
                                row_idx<=row_idx+1;
                                col_idx<='0;
                                state<=PASS2_REQ;
                            end
                            default: begin //PAD_FINAL
                                pad_word_ctr<=BOTTOM_START_WORD[9:0];
                                state<=BOTTOM_PAD;
                            end
                        endcase
                    end
                end

                PAD_B: begin
                    loader_we<=pad_we_1;
                    loader_din<=PADDING_BLOCK;
                    loader_addr<=pad_addr_1;

                    case (pad_ctx)
                        PAD_INIT: state<=PASS2_REQ;
                        PAD_GAP: begin
                            row_idx<=row_idx+1;
                            col_idx<='0;
                            state<=PASS2_REQ;
                        end
                        default: begin //PAD_FINAL
                            pad_word_ctr<=BOTTOM_START_WORD[9:0];
                            state<=BOTTOM_PAD;
                        end
                    endcase
                end

                PASS2_REQ: begin
                    M_AXI_ARADDR<=BASE_ADDR+(row_idx * REAL_W);
                    M_AXI_ARLEN<=8'd9; 
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
                            col_idx<=col_idx + 4;
                            if (M_AXI_RLAST) begin
                                M_AXI_RREADY<=1'b0;
                                if (row_idx==REAL_H - 1) pad_ctx<=PAD_FINAL;
                                else pad_ctx<=PAD_GAP;
                                state<=PAD_A;
                            end
                        end else begin
                            saved_we_1<=we_1;
                            saved_din_1<=din_1;
                            saved_addr_1<=bram_addr_1;
                            saved_rlast<=M_AXI_RLAST;

                            M_AXI_RREADY<=1'b0;
                            state<=PASS2_STRADDLE;
                        end
                    end
                end

                PASS2_STRADDLE: begin
                    loader_we<=saved_we_1;
                    loader_din<=saved_din_1;
                    loader_addr<=saved_addr_1;

                    col_idx<=col_idx+4;
                    M_AXI_RREADY<=1'b1;

                    if (saved_rlast) begin
                        M_AXI_RREADY<=1'b0;
                        if (row_idx==REAL_H-1) pad_ctx<=PAD_FINAL;
                        else pad_ctx<=PAD_GAP;
                        state<=PAD_A;
                    end else begin
                        state<=PASS2_READ;
                    end
                end

                BOTTOM_PAD: begin
                    loader_we<=8'hFF;
                    loader_din<=PADDING_BLOCK;
                    loader_addr<=pad_word_ctr;

                    if (pad_word_ctr==TOTAL_WORDS-1) begin
                        state<=DONE;
                    end else begin
                        pad_word_ctr<=pad_word_ctr+1;
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
