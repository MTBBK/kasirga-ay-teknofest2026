`timescale 1ns / 1ps

module wrapper_tb(
    );
    
    logic clk=0;
    logic rst;
    logic [7:0] left_inputs [0:9];
    logic [7:0] top_inputs  [0:7];
    logic [31:0] outputs [0:79];
    
    logic interestregionfinished;
    logic alloutputsready;
    
    sa_wrapper uutsawrapper (
        .clk(clk),
        .rst(rst),
        .left_in(left_inputs),
        .top_in(top_inputs),
        .interestregionfinished(interestregionfinished),
        .pe_outputs(outputs),
        .alloutputsready(alloutputsready)
    );
  
    always #5 clk = ~clk;
    
    //soldan giren
    logic [7:0] matA [0:9][0:7] = '{'{1,2,1,2,3,3,3,2},'{1,1,1,1,1,1,1,1},'{2,2,2,2,2,2,2,2},'{3,3,3,3,3,3,3,3},
                                    '{4,4,4,4,4,4,4,4},'{5,5,5,5,5,5,5,5},'{6,6,6,6,6,6,6,6},'{7,7,7,7,7,7,7,7},
                                    '{8,6,8,8,8,6,8,6},'{9,7,7,9,2,2,2,1}};
    //üstten giren               
    logic [7:0] matB [0:7][0:7] = '{'{2,1,0,5,5,5,3,2},'{2,3,2,3,2,3,4,2},'{3,2,3,2,1,2,1,1},'{3,3,3,3,3,3,3,3},
                                    '{4,2,2,2,4,1,4,4},'{9,5,5,5,1,5,5,1},'{6,4,6,4,6,4,6,4},'{7,2,7,2,7,3,7,4}}; 
    //beklenen sonuç AxB matris çarouımı
    logic [31:0] sonucmat [0:9][0:7] = '{
    '{32'd86,  32'd52,  32'd66,  32'd56,  32'd63,  32'd55,  32'd77,  32'd48},
    '{32'd36,  32'd22,  32'd28,  32'd26,  32'd29,  32'd26,  32'd33,  32'd21},
    '{32'd72,  32'd44,  32'd56,  32'd52,  32'd58,  32'd52,  32'd66,  32'd42},
    '{32'd108, 32'd66,  32'd84,  32'd78,  32'd87,  32'd78,  32'd99,  32'd63},
    '{32'd144, 32'd88,  32'd112, 32'd104, 32'd116, 32'd104, 32'd132, 32'd84},
    '{32'd180, 32'd110, 32'd140, 32'd130, 32'd145, 32'd130, 32'd165, 32'd105},
    '{32'd216, 32'd132, 32'd168, 32'd156, 32'd174, 32'd156, 32'd198, 32'd126},
    '{32'd252, 32'd154, 32'd196, 32'd182, 32'd203, 32'd182, 32'd231, 32'd147},
    '{32'd252, 32'd156, 32'd196, 32'd188, 32'd212, 32'd186, 32'd232, 32'd154},
    '{32'd125, 32'd95,  32'd95,  32'd131, 32'd122, 32'd130, 32'd126, 32'd88}
    };
                 
    
    integer hata = 0;
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
            left_inputs[8] <= matA[8][i];
            left_inputs[9] <= matA[9][i];
            top_inputs <= matB[i];
           
            @(posedge clk);
        end
        interestregionfinished <= 1'b1;
        clear_inputs();
        @(posedge clk);
        interestregionfinished <= 1'b0;
        wait(alloutputsready== 1'b1);
        #20;
        for (int i = 0; i < 10; i++) begin
            for (int j = 0; j < 8; j++) begin
                if (outputs[8*i+j] !== sonucmat[i][j]) begin
                    $display("hata: pe arrayinde [%0d][%0d] elemanı -> beklenen %d, gelen %d", i, j, sonucmat[i][j], outputs[8*i+j]);
                    hata++;
                end
                
            end
        end
        if(hata == 0)begin 
            $display("hepsi doğru");
        end
        $finish;
    end
    
    
    task clear_inputs();
        for (int i = 0; i < 8; i++) begin
            top_inputs[i] <= 0;
        end
        for (int i = 0; i < 10; i++) begin
            left_inputs[i] <= 0;
        end
    endtask
endmodule
