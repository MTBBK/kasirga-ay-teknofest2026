`timescale 1ns / 1ps

module result_writeback #(
    parameter logic [31:0] RESULT_ADDR=32'h0001_27B8//BASE_ADDR + 1960
)(
    input  logic clk,
    input  logic rst,

    input  logic infer_done,
    input  logic [3:0] result_class,//to write the value in one cold form 

    //axi4 lite write master 
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
    typedef enum logic [1:0] {
        IDLE, 
        SEND, 
        WAIT_RESP
    } state_t;
    state_t state;
    
    logic aw_done;   
    logic w_done;

    logic [3:0] latched_result;

    assign M_AXI_AWADDR=RESULT_ADDR;
    assign M_AXI_WDATA={28'd0, latched_result};
    assign M_AXI_WSTRB=4'b1111;//since it's 4 bits we will only use first byte
    assign M_AXI_BREADY=1'b1;

    always_ff @(posedge clk) begin
        if (rst) begin
            state<=IDLE;
            M_AXI_AWVALID<=1'b0;
            M_AXI_WVALID<=1'b0;
            write_done<=1'b0;
            latched_result<=4'd0;
            aw_done<=1'b0;
            w_done<=1'b0;
        end else begin
            write_done<=1'b0; 

            case (state)
                IDLE:begin
                    if (infer_done) begin
                        latched_result<=result_class; 
                        M_AXI_AWVALID<=1'b1;
                        M_AXI_WVALID<= 1'b1;
                        aw_done<=1'b0;
                        w_done<=1'b0;
                        state<=SEND;
                    end
                end

                SEND: begin
                //should accept each channel independently memory_axi fires them 1 cycle apart
                    if (M_AXI_AWVALID && M_AXI_AWREADY) begin
                        M_AXI_AWVALID<=1'b0;
                        aw_done<=1'b1;
                    end
                    if(M_AXI_WVALID && M_AXI_WREADY) begin 
                        M_AXI_WVALID<=1'b0;
                        w_done<=1'b1;
                    end
                    //to check if both of them are accepted 
                    if ((M_AXI_AWREADY || aw_done) && (M_AXI_WREADY || w_done)) begin
                        aw_done<=1'b0;
                        w_done<=1'b0;
                        state<=WAIT_RESP;
                    end
                end

                WAIT_RESP: begin
                    if (M_AXI_BVALID) begin
                        write_done<=1'b1;
                        state<=IDLE;
                    end
                end
            endcase
        end
    end
endmodule



