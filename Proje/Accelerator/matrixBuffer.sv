`timescale 1ns / 1ps
module matrixBuffer (
    input  logic clk,
    
    input logic indekstipi, //0 satır 1 sütun indeksi satır adreslerken mi sutun adreslerken mi kullanacağımızı belirliyor
    
    input logic we_a,
    input logic [2:0] indeks_a,// bu her zaman satırı göstersin yükleme sırasında kullanılıyor zaten
    input logic [7:0] din_a [0:7],
    
    input logic re_b,
    input logic [2:0] indeks_b,
    output logic [7:0] dout_b [0:7]
);                                                                                                                          
            
    logic [7:0] ram_memory [0:7][0:7];
        
    always_ff @(posedge clk) begin
        if (we_a) begin
            ram_memory[indeks_a] <= din_a;
        end
    end
    
    always_ff @(posedge clk)begin 
        if(re_b)begin 
            if(indekstipi == 1'b0)begin
                dout_b <= ram_memory[indeks_b];
            end
            else begin 
                dout_b <= {ram_memory[0][indeks_b],ram_memory[1][indeks_b],ram_memory[2][indeks_b],ram_memory[3][indeks_b],
                           ram_memory[4][indeks_b],ram_memory[5][indeks_b],ram_memory[6][indeks_b],ram_memory[7][indeks_b]};
            end
        end
    end
endmodule