`timescale 1ns / 1ps
//TODOS:
module fc_manager
import accelerator_config_pkg::*; 
(
input logic clk,
input logic rst,
input logic infer_done,
input logic basla,
input logic [63:0]fc_input_data,
input logic [3:0]fc_input_data_addr,
input logic fc_input_data_valid,//!!burada bir handshake mekanizmadı yok şuan zaten fc sıradaki conv penceresinden önce bitmesi gerekiyor diye ilerdeki değişikliklerde dikkat etmek gerekebilir
////////
//output logic fcready,
output logic signed [7:0]resultvals[0:3],
output logic done
    );
    //buradan okunacak artık veriler
    logic pingpongcounter;
    logic signed [7:0] fc_inputs [0:8*FEEDLANE_COUNT-1'b1];
    always_ff @(posedge clk)begin 
        if(rst)begin 
            fc_inputs <= '{default:'0};
        end
        else begin 
            if(fc_input_data_valid)begin//&&pingpongcounter==0
                fc_inputs[8*fc_input_data_addr]      <= fc_input_data[7:0];
                fc_inputs[8*fc_input_data_addr+3'd1] <= fc_input_data[15:8];
                fc_inputs[8*fc_input_data_addr+3'd2] <= fc_input_data[23:16];
                fc_inputs[8*fc_input_data_addr+3'd3] <= fc_input_data[31:24];
                fc_inputs[8*fc_input_data_addr+3'd4] <= fc_input_data[39:32];
                fc_inputs[8*fc_input_data_addr+3'd5] <= fc_input_data[47:40];
                fc_inputs[8*fc_input_data_addr+3'd6] <= fc_input_data[55:48];
                fc_inputs[8*fc_input_data_addr+3'd7] <= fc_input_data[63:56];
            end
        end
    end
    ///cigibugulee
    
//    logic signed [7:0] fc_inputs_pong [0:8*FEEDLANE_COUNT-1'b1];
//    always_ff @(posedge clk)begin 
//        if(rst)begin 
//            fc_inputs_pong <= '{default:'0};
//        end
//        else begin 
//            if(fc_input_data_valid&&pingpongcounter==1)begin
//                fc_inputs_pong[8*fc_input_data_addr]      <= fc_input_data[7:0];
//                fc_inputs_pong[8*fc_input_data_addr+3'd1] <= fc_input_data[15:8];
//                fc_inputs_pong[8*fc_input_data_addr+3'd2] <= fc_input_data[23:16];
//                fc_inputs_pong[8*fc_input_data_addr+3'd3] <= fc_input_data[31:24];
//                fc_inputs_pong[8*fc_input_data_addr+3'd4] <= fc_input_data[39:32];
//                fc_inputs_pong[8*fc_input_data_addr+3'd5] <= fc_input_data[47:40];
//                fc_inputs_pong[8*fc_input_data_addr+3'd6] <= fc_input_data[55:48];
//                fc_inputs_pong[8*fc_input_data_addr+3'd7] <= fc_input_data[63:56];
//            end
//        end
//    end
    
    logic bitti;
    logic [3:0] outputready;
    logic [8:0] yataykablo[0:4];
    logic [7:0] dikeykablo[0:1][0:3];
    
    logic signed [31:0] outputs[0:3];
    
    logic [7:0] stagger1;
    logic [7:0] stagger2[0:1];
    logic [7:0] stagger3[0:2];
    
    
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
                .interestregionfinished_i(bitti_stagger[i+1'b1]), 
                .interestregionfinished_o(outputready[i]),
                .dogu_out(yataykablo[i+1'b1]),
                .guney_out(dikeykablo[1][i]),
                .sendoutputs(1'b0),                                                                      
                .reserve_in(32'd0),//bunlar kendi aralarında bağlanacak artık veri akış kabloları gibi  
                .reserve_out(outputs[i]),//bunlar kendi aralarında bağlanacak artık veri akış kabloları gibi
                .infer_done(infer_done)       
            );
        end
    endgenerate
    
    logic start_send;
    logic [8:0] sendcount;
    
    always_ff @(posedge clk)begin//datayı ver
        if(rst)begin
            yataykablo[0] <= '0;       
            start_send <= 1'b0;
            sendcount<= '0;
//                    fcready <= 1'b01;
                    pingpongcounter <= 0;
        end
        else begin
            if(basla)begin ///olur gibi
                start_send <= 1'b1;
//                    fcready <= 1'b0;
            end
            yataykablo[0] <= '0;                 
            if(start_send == 1'b1)begin  
                yataykablo[0] <= fc_inputs[sendcount] + 10'sd128;
//                if(pingpongcounter==0)begin    
//                    yataykablo[0] <= fc_inputs[sendcount] + 10'sd128;
//                end
//                else begin 
//                    yataykablo[0] <= fc_inputs_pong[sendcount] + 10'sd128;
//                end
                sendcount <= sendcount + 1'b1;   
                if(sendcount == 8*FEEDLANE_COUNT-1'b1)begin      
                    sendcount <= '0;             
                    start_send <= 1'b0;  
//                    fcready <= 1'b1;    
                    pingpongcounter <= ~pingpongcounter;    
                end                              
            end           
            if(infer_done== 1'b1)begin
                yataykablo[0] <= '0;    
                start_send <= 1'b0;
                sendcount<= '0;
            end                       
        end    
    end
    
    
    //logic we;
    //logic [31:0]din;//!!dikkat
    logic [4:0] bitti_stagger;
    assign bitti = bitti_stagger[3];
    
    always_ff @(posedge clk)begin//ağırlıkları ver
        
        ///STAGGER MEKANİZMASI YÖNETİMİ 
        dikeykablo[0][1] <= stagger1;   
                                        
        stagger2[1] <= stagger2[0];     
        dikeykablo[0][2] <= stagger2[1];
                                        
        stagger3[1] <= stagger3[0];     
        stagger3[2] <= stagger3[1];     
        dikeykablo[0][3] <= stagger3[2];
        
        if(rst)begin
            //we <= 0;
            //din <= '0;
            bitti_stagger <= '0;
            weight_buffer_addr <= '0;
            dikeykablo[0][0] <='0;     
            stagger1 <= '0;            
            stagger2 <= '{default: '0};
            stagger3 <= '{default: '0};
        end
        else begin
            /////MULTİPLE DRİVER İÇİN DÜZELTME DENEMESİ
            ////bu ifi ve ağırlık belseme kısmındaki adres artırma kısmını okuma uyuşmazlığı çözülsün diye yazdım benzeri veri kısmında da var biraz karıştırdı kodu
            /////AĞIRLIK BESLEME MEKANİZMASI
            if(basla)begin 
                weight_buffer_addr <= weight_buffer_addr + 1'b1;
            end
            dikeykablo[0][0] <= '0;
            stagger1 <=         '0;
            stagger2[0] <=      '0;
            stagger3[0] <=         '0;   
            if(start_send)begin
                dikeykablo[0][0] <= weight_buffer_data[7:0];
                stagger1 <= weight_buffer_data[15:8];
                stagger2[0] <= weight_buffer_data[23:16];
                stagger3[0] <= weight_buffer_data[31:24];
                if(sendcount != 8*FEEDLANE_COUNT-1'b1)begin
                    weight_buffer_addr <= weight_buffer_addr + 1'b1;
                end
                
            end
            
            /////FC IŞLEMI BİTİMİ
            if(weight_buffer_addr == 12'd4000)begin// bütün fc işlemi bitti demek (bütün ağırlıkları verdik)
                bitti_stagger[0] <= 1'b1;
                weight_buffer_addr <= '0;
            end
            else begin 
                bitti_stagger <= bitti_stagger << 1;
            end
            
            if(infer_done ==1'b1)begin
                //we <= 0;
                //din <= '0;
                bitti_stagger <= '0;
                weight_buffer_addr <= '0;
                dikeykablo[0][0] <='0;     
                stagger1 <= '0;            
                stagger2 <= '{default: '0};
                stagger3 <= '{default: '0};
            end
        end
    end
    
    logic [31:0] req_input;
    logic [7:0] req_output;
    logic req_o_valid;
    logic req_i_valid;
    relu_req #(.scale(32'sd1932201080),.shift(6'd42),.zero_point(4'd14)) fc_requantization( 
        .clk(clk),                                                                          
        .rst(rst),                                                                          
                                                                                            
        .input_valid(req_i_valid),                                                         
                                                                                            
        .data_in(req_input),                                                               
        .data_out(req_output),                                               
        .output_valid(req_o_valid)                                                  
    );    
                        
    logic [1:0] resultvaluecount;                 
    always_ff @(posedge clk) begin //req çıktısını topla bittiğini bildir 
        if(rst)begin 
            resultvals <= '{default:'0}; 
            done<=1'b0;  
            resultvaluecount <= '0;
        end
        else begin
//            done<=1'b0;
//            if(&req_output_valid)begin
//                resultvals <= requantization_outputs;
//                done<=1'b1;
//            end
            done <= 1'b0;
            if(outputready[0]==1'b1)begin
                req_input <= outputs[0];
                req_i_valid <= 1'b1;
            end
            else if(outputready[1]==1'b1)begin
                req_input <= outputs[1];
                req_i_valid <= 1'b1;
            end
            else if(outputready[2]==1'b1)begin
                req_input <= outputs[2];
                req_i_valid <= 1'b1;
            end
            else if(outputready[3]==1'b1)begin
                req_input <= outputs[3];
                req_i_valid <= 1'b1;
            end
            else begin
                req_input <= 32'd0;
                req_i_valid <= 1'b0;
            end
            
            if(req_o_valid ==1'b1)begin
                resultvals[resultvaluecount] <= req_output;
                resultvaluecount <= resultvaluecount+1'b1;
                if(resultvaluecount==2'b11)begin 
                    done <= 1'b1;
                end
            end
            else begin 
                resultvaluecount <= '0;
            end
        end
    end
    
    bufferv3  #(
    .DATA_WIDTH(32),
    .ADDR_WIDTH(12),
    .FCWEIGHTS(1)) fcweights
    (
        .clk(clk),
        .write_enable(1'b0),//we yerine sıfır bağladım
        .addr(weight_buffer_addr),
        .din(32'd0),
        .dout(weight_buffer_data)
    );
    
    //assign buff_read_addr = readaddres_counter;
    
endmodule