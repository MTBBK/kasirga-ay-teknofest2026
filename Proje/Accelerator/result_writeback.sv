`timescale 1ns / 1ps
module result_writeback #(
    parameter logic [31:0] RESULT_ADDR = 32'h0001_27B8 // BASE_ADDR + 1960
)(
    input  logic clk,
    input  logic rst,

    input  logic infer_done,
    input  logic [3:0] result_class,//to write the value in one cold form 
    input  logic signed [7:0] softmax_0,       
    input  logic signed [7:0] softmax_1,
    input  logic signed [7:0] softmax_2,
    input  logic signed [7:0] softmax_3,

    // axi4 lite write master
    output logic [31:0] M_AXI_AWADDR,
    output logic M_AXI_AWVALID,
    input  logic M_AXI_AWREADY,
    output logic [31:0] M_AXI_WDATA,
    output logic [3:0] M_AXI_WSTRB,
    output logic M_AXI_WVALID,
    input  logic M_AXI_WREADY,
    input  logic M_AXI_BVALID,
    output logic M_AXI_BREADY,

    output logic write_done
);
    localparam logic [31:0] SOFTMAX_ADDR = RESULT_ADDR + 32'd4;

    typedef enum logic [2:0] {
        IDLE,
        SEND_CLASS,
        WAIT_RESP_CLASS,
        SEND_SOFTMAX,
        WAIT_RESP_SOFTMAX
    } state_t;
    state_t state;

    logic aw_done;
    logic w_done;

    logic [3:0]        latched_result;
    logic signed [7:0] latched_sm_0, latched_sm_1, latched_sm_2, latched_sm_3;

    logic [31:0] awaddr_r;
    logic [31:0] wdata_r;
    logic [3:0]  wstrb_r;

    assign M_AXI_AWADDR = awaddr_r;
    assign M_AXI_WDATA  = wdata_r;
    assign M_AXI_WSTRB  = wstrb_r;
    assign M_AXI_BREADY = 1'b1; 

    always_ff @(posedge clk) begin
        if (rst) begin
            state<=IDLE;
            M_AXI_AWVALID<=1'b0;
            M_AXI_WVALID<=1'b0;
            write_done<=1'b0;
            latched_result<=4'd0;
            latched_sm_0<=8'sd0;
            latched_sm_1<=8'sd0;
            latched_sm_2<=8'sd0;
            latched_sm_3<=8'sd0;
            aw_done<= 1'b0;
            w_done<=1'b0;
            awaddr_r<=32'd0;
            wdata_r<=32'd0;
            wstrb_r<=4'd0;
        end else begin
            write_done<=1'b0;

            case (state)
                IDLE: begin
                    if (infer_done) begin
                        latched_result<=result_class;
                        latched_sm_0<=softmax_0;
                        latched_sm_1<=softmax_1;
                        latched_sm_2<=softmax_2;
                        latched_sm_3<=softmax_3;

                        awaddr_r<=RESULT_ADDR;
                        wdata_r<={softmax_2, softmax_1, softmax_0, 4'd0, result_class};
                        wstrb_r<=4'b1111;

                        M_AXI_AWVALID<=1'b1;
                        M_AXI_WVALID<=1'b1;
                        aw_done<=1'b0;
                        w_done<=1'b0;
                        state<=SEND_CLASS;
                    end
                end

                SEND_CLASS: begin
                    if (M_AXI_AWVALID && M_AXI_AWREADY) begin
                        M_AXI_AWVALID <= 1'b0;
                        aw_done       <= 1'b1;
                    end
                    if (M_AXI_WVALID && M_AXI_WREADY) begin
                        M_AXI_WVALID <= 1'b0;
                        w_done       <= 1'b1;
                    end
                    if ((M_AXI_AWREADY || aw_done) && (M_AXI_WREADY || w_done)) begin
                        aw_done <= 1'b0;
                        w_done  <= 1'b0;
                        state   <= WAIT_RESP_CLASS;
                    end
                end

                WAIT_RESP_CLASS: begin
                    if (M_AXI_BVALID) begin
                        awaddr_r <= SOFTMAX_ADDR;
                        wdata_r  <= {24'd0, latched_sm_3};
                        wstrb_r  <= 4'b0001;

                        M_AXI_AWVALID <= 1'b1;
                        M_AXI_WVALID  <= 1'b1;
                        aw_done       <= 1'b0;
                        w_done        <= 1'b0;
                        state         <= SEND_SOFTMAX;
                    end
                end

                SEND_SOFTMAX: begin
                    if (M_AXI_AWVALID && M_AXI_AWREADY) begin
                        M_AXI_AWVALID <= 1'b0;
                        aw_done       <= 1'b1;
                    end
                    if (M_AXI_WVALID && M_AXI_WREADY) begin
                        M_AXI_WVALID <= 1'b0;
                        w_done       <= 1'b1;
                    end
                    if ((M_AXI_AWREADY || aw_done) && (M_AXI_WREADY || w_done)) begin
                        aw_done <= 1'b0;
                        w_done  <= 1'b0;
                        state   <= WAIT_RESP_SOFTMAX;
                    end
                end

                WAIT_RESP_SOFTMAX: begin
                    if (M_AXI_BVALID) begin
                        write_done <= 1'b1;
                        state      <= IDLE;
                    end
                end
            endcase
        end
    end
endmodule
