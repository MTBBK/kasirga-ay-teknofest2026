//`timescale 1ns / 1ps

//module feed_lane #(parameter int LOCAL_OFFSET = 0
//)(
//input logic clk,
//input logic rst,

//input logic [2:0]global_word_offset,
//input logic [63:0]buff_read_data,
//input logic buffdata_valid,
//input logic startread,
//input logic fifofeeder_ready,

//output logic lanereg_ready,//bramden veri okunup doldurulmaya başlanabilir.
//output logic fifovalid,
//output logic [7:0]sendtofifo[0:7]
//    );
    
//    typedef enum logic [1:0] {
//        start = 2'b00,
//        read = 2'b01,
//        finish = 2'b10,
//        set_offset = 2'b11
//    } state;
//    state current_state;
    
//    logic signed [5:0] offset;
    
//    logic [63:0] lanereg;
//    logic [3:0]  lrcount; //lanereg e kaç veri koyduk
//    logic [63:0] part_new;
//    logic [3:0]  num_elements;//bu çevrim eklenen eleman sayısı lanerege

//    assign num_elements = (offset >= 0) ? (4'd8 - offset[4:0]) : (4'd8 + offset[4:0]);//bi kontrol lazım

//    //always_comb begin//SIKINTI ÇOK LUT HARCIYOR
//    //    if (offset >= 0) begin
//    //        part_new = (buff_read_data >> (offset * 8)) << (lrcount * 8);
//    //    end else begin
//    //        part_new = buff_read_data << ((-offset) * 8);
//    //    end
//    //end
//    logic [5:0] shift_bits;

//    always_comb begin
//        part_new = 64'd0; // Varsayılan değer ataması latch oluşumunu engeller
        
//        if (offset >= 0) begin
//            // İlk okuma: lrcount her zaman 0'dır, sola kaydırmaya gerek yok!
//            shift_bits = {offset[2:0], 3'b000}; // offset * 8 işlemine eşdeğer (0 LUT)
//            part_new = buff_read_data >> shift_bits;
//        end else begin
//            // İkinci okuma: sadece lrcount kadar sola kaydırıyoruz
//            shift_bits = {lrcount[2:0], 3'b000}; // (-offset * 8) işlemine eşdeğer
//            part_new = buff_read_data << shift_bits;
//        end
//    end
////    logic [63:0] intermediate_reg;
////    logic buffdatavalid_interm;
////    logic buffdata_valid_final;
////    always_ff @(posedge clk) begin
////        buffdatavalid_interm <= 1'b0;
////        buffdata_valid_final <= 1'b0;
////        if (buffdata_valid) begin
////            intermediate_reg <= (buff_read_data >> (offset << 3));
////            buffdatavalid_interm <= 1'b1;
////        end
////        if(buffdatavalid_interm)begin 
////            part_new <=(intermediate_reg << (lrcount << 3));
////            buffdata_valid_final <= 1'b1;
////        end
////    end

//    ////
//    always_ff @(posedge clk) begin
//        if (rst) begin
//            current_state <= start;
//            lanereg <= '0;
//            lrcount <= '0;
//            offset <= '0;
//            lanereg_ready <= 1'b1;
//            fifovalid <= 1'b0;
//        end 
//        else begin
//            case(current_state) 
//                start:begin
//                    if(startread)begin 
//                        current_state <= set_offset;
//                        lanereg_ready <= 1'b1;
//                        fifovalid <= 1'b0;
//                        lanereg <= 64'd0;
//                        lrcount <= 4'd0;
//                    end
//                end
//                set_offset:begin
//                    current_state <= read;
//                    lanereg_ready <= 1'b1; 
//                    fifovalid <= 1'b0;
//                    lanereg <= 64'd0;
//                    lrcount <= 4'd0;
//                    offset <= global_word_offset + LOCAL_OFFSET;
//                end
//                read:begin
//                    if(buffdata_valid)begin
//                        if(offset < 8 && offset > -8)begin
//                            lanereg <= lanereg | part_new;
//                            lrcount<= lrcount + num_elements;
//                            offset <= offset - 4'd8;//signed olacak
//                            if(lrcount+num_elements == 4'd8)begin 
//                                //okuma işlemi bitti bütün gerekli veriyi aldık
//                                current_state <= finish;
//                                lanereg_ready <= 1'b0;                    
//                                fifovalid <= 1'b1;
//                            end
//                        end
//                        else begin 
//                            offset <= offset - 4'd8;
//                        end
//                    end
//                end
//                finish:begin
//                    if(fifofeeder_ready)begin//handshake i  bekliyoruz
//                        current_state <= start;
//                        fifovalid <= 1'b0;
//                        lanereg_ready <= 1'b1;
//                    end
//                end
//            endcase
//        end
//    end
    
//    assign sendtofifo[0] = lanereg[7:0];
//    assign sendtofifo[1] = lanereg[15:8];
//    assign sendtofifo[2] = lanereg[23:16];
//    assign sendtofifo[3] = lanereg[31:24];
//    assign sendtofifo[4] = lanereg[39:32];
//    assign sendtofifo[5] = lanereg[47:40];
//    assign sendtofifo[6] = lanereg[55:48];
//    assign sendtofifo[7] = lanereg[63:56];
    
//    //for(int i = 0;i<8;i = i+1)begin 
//    //    sendtofifo[i] <= lanereg[i*8 +: 8];// bu işlemi assign ile yapalım üst modulde araya wire atalım sinyal validken ve fifofeeder ready iken wiredan kendine alsın fifo feeder
//    //end
    
//endmodule

`timescale 1ns / 1ps

module feed_lane #(
    parameter int LOCAL_OFFSET = 0
)(
    input logic clk,
    input logic rst,
    input logic infer_done,
//    input logic fcready,
    input logic [2:0] global_word_offset,
    input logic [63:0] buff_read_data,
    input logic buffdata_valid,
    input logic startread,
    input logic fifofeeder_ready,
    output logic lanereg_ready,
    output logic lanereg_data_valid,
    output logic [7:0] sendtofifo[0:7]
);
    
    typedef enum logic [1:0] {
        start      = 2'b00,
        set_offset = 2'b01,
        read       = 2'b10,
        finish     = 2'b11
    } state;
    state current_state;
    
    logic signed [5:0] offset;
    logic [7:0]        lanereg[0:7];
    logic [3:0]        lrcount; 
    logic [3:0]        num_elements;

    logic [7:0] buff_bytes[0:7];
    logic [7:0] part_new[0:7];

    assign buff_bytes[0] = buff_read_data[7:0];
    assign buff_bytes[1] =buff_read_data[15:8];
    assign buff_bytes[2] =buff_read_data[23:16];
    assign buff_bytes[3] = buff_read_data[31:24];
    assign buff_bytes[4] = buff_read_data[39:32];
    assign buff_bytes[5] = buff_read_data[47:40];
    assign buff_bytes[6] = buff_read_data[55:48];
    assign buff_bytes[7] = buff_read_data[63:56];

    assign num_elements = (offset >= 0) ? (4'd8 - offset[4:0]) : (4'd8 + offset[4:0]);

    always_comb begin
        for(int i=0; i<8; i++) begin
            part_new[i] = 8'd0;
        end
        
        if (offset >= 0) begin
            for (int i = 0; i < 8; i++) begin
                if ((i + offset[2:0]) < 8) begin
                    part_new[i] = buff_bytes[i + offset[2:0]];
                end
            end
        end else begin
            for (int i = 0; i < 8; i++) begin
                if (i >= lrcount[2:0]) begin
                    part_new[i] = buff_bytes[i - lrcount[2:0]];
                end
            end
        end
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            current_state <= start;
            lrcount       <= '0;
            offset        <= '0;
            lanereg_ready <= 1'b1;
            lanereg_data_valid     <= 1'b0;
            for(int i=0; i<8; i++) lanereg[i] <= 8'd0;
        end 
        else if(infer_done==1'b1)begin
            current_state <= start;
            lrcount       <= '0;
            offset        <= '0;
            lanereg_ready <= 1'b1;
            lanereg_data_valid     <= 1'b0;
            for(int i=0; i<8; i++) lanereg[i] <= 8'd0;
        end
        else begin
            case(current_state) 
                start: begin
                    if(startread) begin 
                        current_state <= set_offset;
                        lanereg_ready <= 1'b1;
                        lanereg_data_valid     <= 1'b0;
                        lrcount       <= 4'd0;
                        for(int i=0; i<8; i++) lanereg[i] <= 8'd0;
                    end
                end
                
                set_offset: begin
                    current_state <= read;
                    lanereg_ready <= 1'b1; 
                    lanereg_data_valid     <= 1'b0;
                    lrcount       <= 4'd0;
                    offset        <= global_word_offset + LOCAL_OFFSET;
                    for(int i=0; i<8; i++) lanereg[i] <= 8'd0;
                end
                
                read: begin
                    if(buffdata_valid) begin
                        if(offset < 8 && offset > -8) begin
                            for(int i=0; i<8; i++) begin
                                lanereg[i] <= lanereg[i] | part_new[i];
                            end
                            
                            lrcount <= lrcount + num_elements;
                            offset  <= offset - 4'd8;
                            
                            if((lrcount + num_elements) == 4'd8) begin 
                                current_state <= finish;
                                lanereg_ready <= 1'b0;                    
                                lanereg_data_valid     <= 1'b1;
                            end
                        end
                        else begin 
                            offset <= offset - 4'd8;
                        end
                    end
                end
                
                finish: begin
                    if(fifofeeder_ready) begin//&& fcready) begin
                        current_state <= start;
                        lanereg_data_valid     <= 1'b0;
                        lanereg_ready <= 1'b1;
                    end
                end
                default: current_state <= start;
            endcase
        end
    end
    
    assign sendtofifo = lanereg;
    
endmodule
