`timescale 1ns / 1ps

module processing_element #(
    parameter int accum_bit_width = 32,
    parameter int bias = 0
)(
    input logic clk,
    input logic rst,

    input logic signed [8:0] bati_in,
    input logic signed [7:0] kuzey_in,
    input logic interestregionfinished_i,
    output logic interestregionfinished_o,
    output logic signed [8:0] dogu_out,
    output logic signed [7:0] guney_out,

    input logic sendoutputs,
    input logic [31:0] reserve_in,
    output logic [31:0] reserve_out
);

    function automatic logic [31:0] setbias(input int biasindx);
        case(biasindx)
            0: return 32'h00000000;
            1: return 32'hFFFFFE8A;//conv kernel0bias
            2: return 32'h000000A9;//conv kernel1bias
            3: return 32'hFFFFFFD0;//conv kernel2bias
            4: return 32'h000000D0;//conv kernel3bias
            5: return 32'h00000052;//conv kernel4bias
            6: return 32'h00000006;//conv kernel5bias
            7: return 32'hFFFFFB4F;//conv kernel6bias
            8: return 32'hFFFFFD4A;//conv kernel7bias
            9: return 32'h000001AB;//fc bias
            10: return 32'hFFFFFDFA;//fc bias
            11: return 32'hFFFFFFA2;//fc bias
            12: return 32'h000000BA;//fc bias
            default: return 32'h00000000;
        endcase
    endfunction

    localparam logic [31:0] BIAS_VAL = setbias(bias);

    (* USE_DSP = "YES" *) logic signed [accum_bit_width-1 : 0] outputValue;
    logic signed [accum_bit_width-1 : 0] reserveValue;

    assign reserve_out = reserveValue;

    always_ff @(posedge clk) begin
        if(rst) begin
            dogu_out <= 8'd0;
            guney_out <= 8'd0;
            reserveValue <= '0;
            outputValue <= BIAS_VAL;
            interestregionfinished_o <= 1'b0;
        end
        else begin
            interestregionfinished_o <= interestregionfinished_i;
            dogu_out <= bati_in;
            guney_out <= kuzey_in;

            if(interestregionfinished_i) begin
                reserveValue <= outputValue;
                outputValue <= BIAS_VAL;
            end
            else begin
                outputValue <= (bati_in * kuzey_in) + outputValue;

                if(sendoutputs) begin
                    reserveValue <= reserve_in;
                end
            end
        end
    end

endmodule