(* keep_hierarchy = "yes" *)
module clock_divider (
    input  logic clk_50mhz_i,
    input  logic rst_n_i,
    output logic clk_25mhz_o
);

    logic [1:0] counter;

    always_ff @(posedge clk_50mhz_i) begin
        if (!rst_n_i) begin
            counter     <= 2'b00;
            clk_25mhz_o <= 1'b0;
        end else begin
            counter <= counter + 1'b1;
            
            // 100 MHz / 2 = 50 MHz (Sayacin 0. biti)
            clk_25mhz_o <= counter[0]; 
            
        end
    end

endmodule
