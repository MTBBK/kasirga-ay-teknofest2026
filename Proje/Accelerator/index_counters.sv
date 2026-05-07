`timescale 1ns / 1ps
module index_counters(
input logic clk,
input logic rst,

input logic start,
input logic [9:0] laneregsready,
output logic [9:0]buff_read_addr,
output logic [2:0]global_word_offset,
output logic addressvalid
    );
    
    parameter int X_MAX = 46; //matrisin satır uzunluğu 
    
    logic [5:0]interestregion_indexx;
    logic [5:0]interestregion_indexy;
    logic [15:0] iregion_index;
    assign iregion_index = (interestregion_indexy * X_MAX) + interestregion_indexx;
    
    logic [5:0]indexx;
    logic [5:0]indexy;
    logic [15:0]index;
    assign index = (indexy * X_MAX) + indexx;
    
    logic [15:0]indexpointer;
    assign indexpointer = iregion_index + index;

    assign buff_read_addr   = indexpointer >> 3;//her adreste 8 veri olduğu için 8 e böl
    assign global_word_offset = indexpointer[2:0];//son 3 bit 64 bit içindeki hangi 8 bit olduğunu söyler
    ///////////////////////////////////////////////////
    
    typedef enum logic [1:0] {
        idle = 2'b00,
        readrow = 2'b01,
        finish = 2'b10
    } agustate;
    agustate agu_state;
    
    logic [3:0]row_count;
    
    always_ff @(posedge clk)begin
        if(rst)begin
            interestregion_indexx <= '0;
            interestregion_indexy <= '0;   
            indexx <= '0;
            indexy <= '0;
            row_count <= '0;
            agu_state <= idle;
            addressvalid <= 1'b0;
        end
        else begin
            case(agu_state)
                idle:begin
                    addressvalid <= 1'b0;
                    if(start)begin
                        agu_state <= readrow;
                        addressvalid <= 1'b1;
                        indexx <= 6'd0;
                        indexy <= row_count;
                        row_count <= row_count + 1'b1;
                        if(row_count == 4'd10)begin//10 olması gerekiyor gibi
                            //10 satırda bitti yani interest region bitti sıradaki interest regiona geçmemiz lazım.
                            indexx <= 6'd0;
                            indexy <= 6'd0;
                            row_count <= 4'd1;//row count değerini, index y ye bir sonraki startta vereceğimiz için şimdi 1 yapıyoruz  
                            if(interestregion_indexx == 6'd0)begin//sıradaki 10 pencere aynı satırda mı alta mı geçiyoruz?
                                interestregion_indexx <= interestregion_indexx + 5'd20;
                            end
                            else begin 
                                interestregion_indexx <= 6'd0;
                                interestregion_indexy <= interestregion_indexy + 2'd2;
                            end
                        end
                        
                    end
                end
                readrow:begin
                    if(|laneregsready)begin 
                        indexx <= indexx + 4'd8;
                        addressvalid <= 1'b1;
                    end
                    else begin 
                        agu_state <= idle;
                        addressvalid <= 1'b0;
                    end
                end
                
                finish:begin
                    //sonuncu interest regionun indekslerini hesaplayıp oraya geldiysek bir şey yapma diyebiliriz şimdilik gerek yok gibi
                end
            endcase
        end
    end
    
endmodule
