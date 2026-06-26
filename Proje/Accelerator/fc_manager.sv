`timescale 1ns / 1ps
//TODOS:
//output bufferı tamamen aradan çıkartıp direkt outputları burada biriktirebiliriz aslında
//80 değeri kaydetmek yerine output buffera veri yazıldığını görünce okuyup 8 tanesini gönderip tekrar okuyup tekrar gönderebiliriz
//pe ler içerisinde signed işlem yapılıyor ancak veri girişimizin unsigned olması olazım yanlış algılıyor onun dışı doğru
module fc_manager(
input logic clk,
input logic rst,
input logic basla,//writeenable,
input logic [63:0]buff_read_data,
output logic [9:0]buff_read_addr
    );
    logic [9:0]readaddres_counter;
    
    logic bitti;
    logic [3:0] outputready;
    logic [7:0] yataykablo[0:4];
    logic [7:0] dikeykablo[0:1][0:3];
    logic signed [31:0] outputs[0:3];
    
    logic [7:0] stagger1;
    logic [7:0] stagger2[0:1];
    logic [7:0] stagger3[0:2];
    
    always_ff @(posedge clk)begin
        dikeykablo[0][1] <= stagger1;
        
        stagger2[1] <= stagger2[0];
        dikeykablo[0][2] <= stagger2[1];
        
        stagger3[1] <= stagger3[0];
        stagger3[2] <= stagger3[1];
        dikeykablo[0][3] <= stagger3[2];
    end
    
    logic [11:0]weight_buffer_addr;
    logic [31:0]weight_buffer_data;
    
    genvar i;
    generate
        for(i =0;i<4;i=i+1)begin:pe
            processing_element #(.bias(i+4'd9))processyapanelement
                (.clk(clk),
                .rst(rst),
                .bati_in(yataykablo[i]),
                .kuzey_in(dikeykablo[0][i]),
                .interestregionfinished_i(bitti), 
                .interestregionfinished_o(outputready[i]),
                .dogu_out(yataykablo[i+1'b1]),
                .guney_out(dikeykablo[1][i]),
                .outputs(outputs[i])
            );
        end
    endgenerate
    
    
    logic [7:0] data [0:79];
    logic [6:0] count;
    logic start_send;
    
    typedef enum logic [1:0] {
        idle = 2'b00,
        gecicioku = 2'b10,
        read = 2'b01
    } state;
    state current_state;
    
    always_ff @(posedge clk)begin//datayı al
        if(rst)begin
            readaddres_counter <= '0;
            yataykablo[0] <= '0;       
            dikeykablo[0][0] <='0;
            stagger1 <= '0;     
            stagger2 <= '{default: '0};
            stagger3 <= '{default: '0};
            weight_buffer_addr <= '0;
            data <= '{default: '0};
            count <= '0;
            start_send <= 1'b0;
            current_state <= idle;
            //bitti <= 1'b0;
        end
        else begin
            case(current_state)
                idle:begin 
                    if(basla)begin 
                        current_state <= gecicioku;
                    end
                end
                gecicioku:begin
                    current_state <= read;
                    readaddres_counter <= readaddres_counter + 1'b1;
                end
                read:begin
                    
                    data[count]      <= buff_read_data[7:0];
                    data[count+3'd1] <= buff_read_data[15:8];
                    data[count+3'd2] <= buff_read_data[23:16];
                    data[count+3'd3] <= buff_read_data[31:24];
                    data[count+3'd4] <= buff_read_data[39:32];
                    data[count+3'd5] <= buff_read_data[47:40];
                    data[count+3'd6] <= buff_read_data[55:48];
                    data[count+3'd7] <= buff_read_data[63:56];
                    count <= count +4'd8;
                    start_send <= 1'b1;
                    if(count == 7'd72)begin 
                        current_state <= idle;
                        count <= '0;
                    end
                    else begin
                        readaddres_counter <= readaddres_counter + 1'b1;
                    end
                    
                    if(count == 7'd0)begin
                    //bu ifi ve ağırlık belseme kısmındaki adres artırma kısmını okuma uyuşmazlığı çözülsün diye yazdım benzeri veri kısmında da var biraz karıştırdı kodu
                        weight_buffer_addr <= weight_buffer_addr + 1'b1;
                    end
                end
            endcase
        end    
    end
    
    logic [6:0] sendcount;
    always_ff @(posedge clk)begin//datayı ver
        if(rst)begin 
            sendcount<= '0;
        end
        else begin
            yataykablo[0] <= '0; 
            if(start_send == 1'b1)begin
                yataykablo[0] <= data[sendcount];
                sendcount <= sendcount + 1'b1;
                if(sendcount == 7'd79)begin
                    sendcount <= '0;
                    start_send <= 1'b0;
                end
            end
        end
    end
    
    logic we;
    logic [31:0]din;
    logic [3:0] bitti_stagger;
    assign bitti = bitti_stagger[3];
    
    always_ff @(posedge clk)begin//ağırlıkları ver
        if(rst)begin
            we <= 0;
            din <= '0;
            bitti_stagger <= '0;
        end
        else begin
            dikeykablo[0][0] <= '0;
            stagger1 <=         '0;
            stagger2[0] <=      '0;
            stagger3[0] <=         '0;   
            if(start_send)begin
                dikeykablo[0][0] <= weight_buffer_data[7:0];
                stagger1 <= weight_buffer_data[15:8];
                stagger2[0] <= weight_buffer_data[23:16];
                stagger3[0] <= weight_buffer_data[31:24];
                if(sendcount != 7'd79)begin
                    weight_buffer_addr <= weight_buffer_addr + 1'b1;
                end
                
            end
            
            if(weight_buffer_addr == 12'd4000)begin
                bitti_stagger[0] <= 1'b1;
                weight_buffer_addr <= '0;
            end
            else begin 
                bitti_stagger <= bitti_stagger << 1;
            end
        end
    end
    
    logic signed [7:0]resultvals[0:3];
    logic signed [7:0]requantization_outputs[0:3];
    logic [3:0]req_output_valid;
    genvar j;
    generate
        for(j = 0; j< 4 ;j = j+1)begin: req_unit
            relu_req #(.scale(32'sd1932201080),.shift(6'd42),.zero_point(4'd14)) fc_requantization(
                .clk(clk),
                .rst(rst),
               
                .input_valid(&outputready),
                
                .data_in(outputs[j]),
                .data_out(requantization_outputs[j]),
                .output_valid(req_output_valid[j])
            );        
        end
    endgenerate
    
    always_ff @(posedge clk) begin 
        if(rst)begin 
            resultvals <= '{default:'0};   
        end
        else begin
            //
            if(&req_output_valid)begin
                resultvals <= requantization_outputs;
            end
        end
    end
    
    bufferv3  #(
    .DATA_WIDTH(32),
    .ADDR_WIDTH(12),
    .FCWEIGHTS(1)) fcweights
    (
        .clk(clk),
        .write_enable(we),
        .addr(weight_buffer_addr),
        .din(din),
        .dout(weight_buffer_data)
    );
    
    assign buff_read_addr = readaddres_counter;
    
endmodule