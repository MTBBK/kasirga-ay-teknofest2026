`timescale 1ns / 1ps
module processin_element_tb(

    );
    
    localparam accumwidth = 32;
    logic clk= 0;
    logic rst;
    
    logic [8:0]left_in;
    logic [7:0]top_in;
    logic [8:0]left_out;
    logic [7:0]top_out; 
    
    logic infer_done;
    
    logic interestregionfinished_i1;
    logic interestregionfinished_i2;
    logic interestregionfinished_o1;
    logic interestregionfinished_o2;
    
    logic alloutputsready;//interestregionfinished sinyali ilerlemeyi bitirdi şimdi çıktılar tepeden toplanacak demek
    logic [31:0]reservein1;
    logic [31:0]reserveout1;
    logic [31:0]reservein2;
    logic [31:0]reserveout2;
    processing_element uut
    (.clk(clk),
    .rst(rst),
    .infer_done(infer_done),
    .bati_in(left_in),
    .kuzey_in(top_in),
    .interestregionfinished_i(interestregionfinished_i1),
    .interestregionfinished_o(interestregionfinished_o1),
    .dogu_out(left_out),
    .guney_out(top_out),
    .sendoutputs(alloutputsready),       
    .reserve_in(reservein1),
    .reserve_out(reserveout1)
    );
    
    
    logic [7:0]top_in2;
    logic [8:0]left_out2; 
    logic [7:0]top_out2; 
    processing_element uut2
    (.clk(clk),
    .rst(rst),
    .infer_done(infer_done),
    .bati_in(left_out),
    .kuzey_in(top_in2),
    .interestregionfinished_i(interestregionfinished_i2),
    .interestregionfinished_o(interestregionfinished_o2),
    .dogu_out(left_out2),
    .guney_out(top_out2),
    .sendoutputs(alloutputsready),       
    .reserve_in(reservein2),
    .reserve_out(reserveout2)
    );
    
    always #5 clk = ~clk;
    always @(posedge clk)begin
        interestregionfinished_i2 <= interestregionfinished_i1;
    end
    
    initial begin 
        rst = 1;
        left_in = 9'sd0;
        top_in = 8'sd0;
        top_in2 = 8'sd0;
        interestregionfinished_i1 = 1'b0;
        interestregionfinished_i2 = 1'b0;
        alloutputsready = 1'b0;
        reservein1 = 1'b0;
        reservein2 = 1'b0;
        infer_done = 1'b0;
        #12;
        rst = 0;
        
        left_in = 9'sd2;
        top_in = 8'sd3;
        #10;
        
        left_in = 9'sd1;
        top_in = 8'sd1;
        top_in2 = 8'sd2;
        #10;
        
        left_in = 9'sd4;
        top_in = 8'sd5;
        top_in2 = 8'sd3;
        #10;
        
        left_in = 9'sd7;
        top_in = 8'sd5;
        top_in2 = 8'sd2;
        #10;
        
        left_in = 9'sd4;
        top_in = 8'sd2;
        top_in2 = 8'sd1;
        #10;
        
        left_in = 9'sd0;
        top_in = 8'sd0;
        top_in2 = 8'sd0;
        interestregionfinished_i1 = 1'b1;
        #10;
        
        interestregionfinished_i1 = 1'b0;
        left_in = 9'sd0;
        top_in = 8'sd0;
        top_in2 = 8'sd0;
        #10;
        alloutputsready =1'b1;
        $display("Kontrol");
        //@(reserveout1);
        //pe1 e giren elemanlar (2*3)+ (1*1)+ (4*5)+ (5*7)+ (4*2) = 70 oluyor
        if(reserveout1 == 32'sd70)begin 
            $display("doğru sonuç");
        end
        else begin 
            $display("hata var: beklenen:70  çıkan: %016h", reserveout1);
        end
        if(reserveout2 == 32'sd22)begin 
            $display("doğru sonuç");
        end
        else begin 
            $display("hata var: beklenen:22  çıkan: %016h", reserveout2);
        end
        $finish;
    end
    
endmodule
