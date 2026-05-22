`timescale 1ns / 1ps
module accelerator_top_tb(

    );
    logic clk = 0;
    logic rst;
    
    accelerator_top uut(
        .clk(clk),
        .rst(rst)
    );
    
    always #5 clk = ~clk;
    
    logic [63:0] expected_buffer [0:59];
    integer hata = 0;
    initial begin
        $readmemh("tb_output_buffer_expected.mem", expected_buffer);
    end

    initial begin 
        rst = 1; 
        #20; 
        rst = 0;
        #1135;//ilk çıktılar
        #4645;//14x46 lık giriş matrisine göre 6 interest regionun tamamı bitti 
        //56x46 nın tamamını yapması 5000 çevrim civarı sürüyor gibi görünüyor
        
        $display("Kontrol");
        for (int i = 0; i < 60; i++) begin
            if (uut.outputbuffer.ram[i] !== expected_buffer[i]) begin
                $display("Hata adres %0d: beklenen: %016h, çıkan: %016h", i, expected_buffer[i], uut.outputbuffer.ram[i]);
                hata++;
            end
        end
        
        if (hata == 0)begin
            $display("LETSGOOOOOOOOO");
        end
        else begin
            $display("Toplam %0d hata var", hata);
        end    
        $finish;
    end

endmodule
