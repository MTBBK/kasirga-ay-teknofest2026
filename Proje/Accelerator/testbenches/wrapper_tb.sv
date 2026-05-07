`timescale 1ns / 1ps

module wrapper_tb(
    );
    
    logic clk=0;
    logic rst;
    logic [7:0] left_inputs [0:7];
    logic [7:0] top_inputs  [0:7];
    logic [31:0] outputs [0:63];
    
    sa_wrapper uutsawrapper (
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
    //beklenen sonuç AxB matris çarouımı
    //86, 52, 66, 56, 63, 55, 77, 48
    //36, 22, 28, 26, 29, 26, 33, 21
    //72, 44, 56, 52, 58, 52, 66, 42
    //108, 66, 84, 78, 87, 78, 99, 63
    //144, 88, 112, 104, 116, 104, 132, 84
    //180, 110, 140, 130, 145, 130, 165, 105
    //216, 132, 168, 156, 174, 156, 198, 126
    //252, 154, 196, 182, 203, 182, 231, 147                       
    
    initial begin 
        rst = 1;
        clear_inputs();
        #20;
        rst = 0;
        for (int i = 0; i < 8; i++) begin
            left_inputs[0] <= matA[0][i];
            left_inputs[1] <= matA[1][i];
            left_inputs[2] <= matA[2][i];
            left_inputs[3] <= matA[3][i];
            left_inputs[4] <= matA[4][i];
            left_inputs[5] <= matA[5][i];
            left_inputs[6] <= matA[6][i];
            left_inputs[7] <= matA[7][i];
            top_inputs <= matB[i];
            @(posedge clk);
        end
        clear_inputs();
        #210;
        $finish;
    end
    
    
    task clear_inputs();
        for (int i = 0; i < 8; i++) begin
            left_inputs[i] <= 0;
            top_inputs[i] <= 0;
        end
    endtask
endmodule
