`timescale 1ns / 1ps
//!!!!SA BOYUTU 10X8 İÇİN TASARLANDI YANİ FEEDLANE PARAMETRESİ =10 OLMALI
module wrapper_tb(
    );
    
    logic clk=0;
    logic rst;
    logic infer_done=0;
    logic [7:0] left_inputs [0:9];
    logic [7:0] top_inputs  [0:7];
    //logic [31:0] outputs [0:79];
          
    logic [31:0] sa_line_outputs[0:7];
    logic interestregionfinished;
    logic alloutputsready;
    
    sa_wrapper uutsawrapper (
        .clk(clk),
        .rst(rst),
        .infer_done(infer_done),
        .left_in(left_inputs),
        .top_in(top_inputs),
        .interestregionfinished(interestregionfinished),
        .sa_line_outputs(sa_line_outputs),
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
//    logic [31:0] sonucmat [0:9][0:7] = '{
//    '{32'd86,  32'd52,  32'd66,  32'd56,  32'd63,  32'd55,  32'd77,  32'd48},
//    '{32'd36,  32'd22,  32'd28,  32'd26,  32'd29,  32'd26,  32'd33,  32'd21},
//    '{32'd72,  32'd44,  32'd56,  32'd52,  32'd58,  32'd52,  32'd66,  32'd42},
//    '{32'd108, 32'd66,  32'd84,  32'd78,  32'd87,  32'd78,  32'd99,  32'd63},
//    '{32'd144, 32'd88,  32'd112, 32'd104, 32'd116, 32'd104, 32'd132, 32'd84},
//    '{32'd180, 32'd110, 32'd140, 32'd130, 32'd145, 32'd130, 32'd165, 32'd105},
//    '{32'd216, 32'd132, 32'd168, 32'd156, 32'd174, 32'd156, 32'd198, 32'd126},
//    '{32'd252, 32'd154, 32'd196, 32'd182, 32'd203, 32'd182, 32'd231, 32'd147},
//    '{32'd252, 32'd156, 32'd196, 32'd188, 32'd212, 32'd186, 32'd232, 32'd154},
//    '{32'd125, 32'd95,  32'd95,  32'd131, 32'd122, 32'd130, 32'd126, 32'd88}
//    };
    //mata değerleri 128 artırıldıktan sonrs matris çarpım sonucu, sistolik dizi modülünde model uygulaması yüzünden soldan giren değerlere 128 ekleniyor çünkü
    //bias değerleri de eklendi
    logic [31:0] sonucmat [0:9][0:7] = '{
    '{32'd4320, 32'd3037, 32'd3602, 32'd3592, 32'd3857, 32'd3389, 32'd3100, 32'd2042},
    '{32'd4270, 32'd3007, 32'd3564, 32'd3562, 32'd3823, 32'd3360, 32'd3056, 32'd2015},
    '{32'd4306, 32'd3029, 32'd3592, 32'd3588, 32'd3852, 32'd3386, 32'd3089, 32'd2036},
    '{32'd4342, 32'd3051, 32'd3620, 32'd3614, 32'd3881, 32'd3412, 32'd3122, 32'd2057},
    '{32'd4378, 32'd3073, 32'd3648, 32'd3640, 32'd3910, 32'd3438, 32'd3155, 32'd2078},
    '{32'd4414, 32'd3095, 32'd3676, 32'd3666, 32'd3939, 32'd3464, 32'd3188, 32'd2099},
    '{32'd4450, 32'd3117, 32'd3704, 32'd3692, 32'd3968, 32'd3490, 32'd3221, 32'd2120},
    '{32'd4486, 32'd3139, 32'd3732, 32'd3718, 32'd3997, 32'd3516, 32'd3254, 32'd2141},
    '{32'd4486, 32'd3141, 32'd3732, 32'd3724, 32'd4006, 32'd3520, 32'd3255, 32'd2148},
    '{32'd4359, 32'd3080, 32'd3631, 32'd3667, 32'd3916, 32'd3464, 32'd3149, 32'd2082}
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
        @(posedge clk);
        for(int i = 0;i<10;i=i+1)begin
            $display("i= %0d",i);
            for(int j = 0;j<8;j=j+1)begin
                if (sa_line_outputs[j] !== sonucmat[i][j]) begin
                    $display("hata: pe arrayinde [%0d][%0d] elemanı -> beklenen %d, gelen %d", i, j, sonucmat[i][j],sa_line_outputs[j]);
                    hata++;
                end
            end
            @(posedge clk);
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
