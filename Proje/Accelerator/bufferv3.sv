`timescale 1ns / 1ps

module bufferv3 #(
    parameter DATA_WIDTH =  64,//bir adresteki veri genişliği 64 bit
    parameter ADDR_WIDTH = 10,//adres genişliği (2^10 = 1024 derinlik)
    parameter DEPTH = (1 << ADDR_WIDTH),//kaç tane farklı addresten veri okuyabiliriz
    parameter FCWEIGHTS = 0
)(
    input  logic clk,
    input  logic write_enable,//veri yaz 
    input  logic [ADDR_WIDTH-1:0] addr,//adres girişi
    input  logic [DATA_WIDTH-1:0] din,//veri girişi (write enable yapılması lazım kullanılması için)
    output logic [DATA_WIDTH-1:0] dout//veri çıkışı
);

    logic [DATA_WIDTH-1:0] ram [DEPTH-1:0];
    
    initial begin 
        if(FCWEIGHTS == 1)begin
            $readmemh("fc_weights.mem",ram);
        end
        else begin
            $readmemh("input_data.mem",ram);//$readmemh("convdenemematrisi14x46.mem",ram);
        end
    end
    
    always_ff @(posedge clk) begin
        if (write_enable) begin
            ram[addr] <= din;
        end
        dout <= ram[addr];
    end

endmodule