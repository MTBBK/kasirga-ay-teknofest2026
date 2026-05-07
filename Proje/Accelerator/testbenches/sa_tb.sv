`timescale 1ns / 1ps
module sa_tb(

    );

    logic clk = 0;
    logic rst;
    logic [7:0] left_inputs [0:7];
    logic [7:0] top_inputs  [0:7];
    logic [31:0] outputs [0:63];
    
    sa_top uut (
        .clk(clk),
        .rst(rst),
        .left_in(left_inputs),
        .top_in(top_inputs),
        .pe_outputs(outputs)
    );

    always #5 clk = ~clk;
    
    //soldan giren
    logic [7:0] matA [0:7][0:7] = '{'{1,2,1,2,3,3,3,2},'{1,1,1,1,1,1,1,1},'{2,2,2,2,2,2,2,2},'{3,3,3,3,3,3,3,3},
                                    '{4,4,4,4,4,4,4,4},'{5,5,5,5,5,5,5,5},'{6,6,6,6,6,6,6,6},'{7,7,7,7,7,7,7,7}};
    //üstten giren               
    logic [7:0] matB [0:7][0:7] = '{'{2,1,0,5,5,5,3,2},'{2,3,2,3,2,3,4,2},'{3,2,3,2,1,2,1,1},'{3,3,3,3,3,3,3,3},
                                    '{4,2,2,2,4,1,4,4},'{9,5,5,5,1,5,5,1},'{6,4,6,4,6,4,6,4},'{7,2,7,2,7,3,7,4}}; 
    
    initial begin
        rst = 1;
        clear_inputs();
        #20 rst = 0;

        feed_matrices(matA,matB);

        $display("Test Tamamlandı");
        $finish;
    end

    task feed_matrices(input logic [7:0] matrixA [0:7][0:7],input logic [7:0] matrixB [0:7][0:7]);//8 bitlik değerler tutan 8x8 iki matrix
        for (int t = 0; t < 23; t++) begin//zamanın döngüsü t = 0, t= 1 ...
            for (int i = 0; i < 8; i++) begin//satır ve sütunların döngüsü i=0 birinci satır ve sütun vs.
                // A matrisi satırları soldan girişler
                if (t >= i && t < i + 8)
                    left_inputs[i] <= matrixA[i][t-i];
                else
                    left_inputs[i] <= 0;

                // B matrisi sütunları üstten girişler
                if (t >= i && t < i + 8)
                    top_inputs[i] <= matrixB[t-i][i];
                else
                    top_inputs[i] <= 0;
            end
            @(posedge clk);
        end
        clear_inputs();
    endtask

    task clear_inputs();
        for (int i = 0; i < 8; i++) begin
            left_inputs[i] <= 0;
            top_inputs[i] <= 0;
        end
    endtask
endmodule