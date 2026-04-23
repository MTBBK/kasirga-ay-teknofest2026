`timescale 1ns/1ps
module i2c_master_ctrl2 #(
    parameter int CLK_FREQ=50_000_000,
    parameter int I2C_FREQ=400_000
)(
    input logic clk,
    input logic rst_n, //resets when it's 0
    // control interface
    input logic [6:0] i_slave_addr, // I2C_ADR[6:0]
    input logic [31:0] i_tx_data, // I2C_TDR
    output logic [31:0] o_rx_data, // I2C_RDR
    input logic [2:0] i_num_bytes, // I2C_NBY (1–4)
    input logic i_tx_en, // I2C_CFG[0] starts at the rising edge
    output logic o_tx_done, // I2C_CFG[1] 1 cycle is 1 pulse
    input logic i_rx_en,  // I2C_CFG[2]
    output logic o_rx_done, // I2C_CFG[3]
    output logic o_busy, // when FSM is not on IDLE 1
    // I2C physical interface
    output logic o_scl,
    output logic o_sda_out, // SDA driving value
    output logic o_sda_oe, // 1=drive, 0=relase
    input logic i_sda_in // state of the SDA pin
);
    localparam int TICKS= CLK_FREQ/I2C_FREQ;
    localparam int T_HALF= TICKS/2; 
    localparam int T_QUART= TICKS/4; 
    localparam int T_3QUART= T_QUART*3;

    typedef enum logic [3:0]{  
        S_IDLE=0,
        S_START=1,
        S_ADDR=2,
        S_ADDR_ACK=3,
        S_WR_BYTE=4,
        S_WR_ACK=5,
        S_RD_BYTE=6,
        S_RD_ACK=7,
        S_STOP=8,
        S_DONE=9
    } state_e;

    state_e state;

    logic [7:0] clk_cnt;

    logic bit_start_tick=(clk_cnt=='0); //fills all the bits with 0
    logic bit_scl_fall=(clk_cnt==TICKS-1);
    logic bit_sda_sample=(clk_cnt==T_3QUART);

    logic [7:0] shift_rx, shift_tx;
    logic [2:0] bit_cnt, byte_cnt;
    logic r_is_read;
    logic [6:0] r_slave_addr;
    logic [31:0] r_tx_data;
    logic [2:0] r_num_bytes;
    logic [31:0] r_rx_data;
    logic scl_r, sda_out_r, sda_oe_r;

    logic tx_en_prev, rx_en_prev;
    logic tx_en_rise=i_tx_en & ~tx_en_prev;
    logic rx_en_rise=i_rx_en & ~rx_en_prev;

    //posedge detection
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin 
            tx_en_prev<=1'b0;
            rx_en_prev<=1'b0;
        end
        else begin 
            tx_en_prev<= i_tx_en;
            rx_en_prev<=i_rx_en;
        end
    end
    //phase counter
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin 
            clk_cnt<='0;
        end
        else if(state==S_IDLE)begin 
            clk_cnt<='0;
        end
        else begin 
            if(clk_cnt==TICKS-1) begin
                clk_cnt='0;
            end
            else begin
                clk_cnt=clk_cnt+1'b1;
            end
        end
    end
    // SCL generation
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin 
            scl_r<=1'b1;
        end
        else begin
            case (state) 
                S_IDLE, S_DONE: scl_r<=1'b1;
                S_START:
                    if(clk_cnt<T_HALF)begin
                        scl_r<=1'b1;
                    end
                    else begin 
                        scl_r<=1'b0;
                    end
                S_STOP:
                    if(clk_cnt>=T_HALF)begin
                        scl_r<=1'b1;
                    end
                    else begin 
                        scl_r<=1'b0;
                    end
                default:
                    if(clk_cnt>=T_HALF)begin
                        scl_r<=1'b1;
                    end
                    else begin 
                        scl_r<=1'b0;
                    end
                endcase
        end
    end
    //FSM
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            state<=S_IDLE;
            bit_cnt<=3'd7;
            byte_cnt<='0;
            r_is_read<='0;
            r_slave_addr<='0; 
            r_tx_data<='0; 
            r_num_bytes<=3'd1;
            shift_tx<='0;
            shift_rx<='0; 
            r_rx_data<='0;
            sda_out_r<=1'b1; 
            sda_oe_r<=1'b1;
            o_tx_done<='0; 
            o_rx_done<='0;
        end
        else begin
            o_tx_done<=1'b0;
            o_rx_done<=1'b0;
            case (state)
                S_IDLE: begin
                    sda_out_r<=1'b1; 
                    sda_oe_r<=1'b1;
                    bit_cnt<=3'd7; 
                    byte_cnt<='0;
                        if (tx_en_rise) begin
                            r_is_read<=1'b0; 
                            r_slave_addr<=i_slave_addr;
                            r_tx_data<=i_tx_data;
                            if(i_num_bytes==0||i_num_bytes>4)begin 
                                r_num_bytes<=3'd1;
                            end
                            else begin 
                                r_num_bytes<=i_num_bytes;
                            end
                            state<=S_START;
                            end 
                        else if (rx_en_rise) begin
                        r_is_read<=1'b1; 
                        r_slave_addr<=i_slave_addr;
                        if(i_num_bytes==0||i_num_bytes>4)begin
                            r_num_bytes<=3'd1;
                        end
                        else begin
                            r_num_bytes<=i_num_bytes;
                        end
                        state<=S_START;
                        end
                end

                
                S_START: begin
                    sda_oe_r<=1'b1;
                    if(clk_cnt < T_QUART) begin
                        sda_out_r<=1'b1;  
                    end
                    else begin
                        sda_out_r <=1'b0; 
                    end
                    if(bit_scl_fall) begin
                        shift_tx<={r_slave_addr, r_is_read};
                        bit_cnt<=3'd7; 
                        state<=S_ADDR;
                    end
                end

                
                S_ADDR:begin
                    sda_oe_r<=1'b1;
                    if(bit_start_tick)begin 
                        sda_out_r<=shift_tx[7];
                    end
                    if(bit_scl_fall) begin
                        shift_tx<={shift_tx[6:0],1'b0};
                        if (bit_cnt==0) begin 
                            state<=S_ADDR_ACK;
                        end
                        else begin 
                            bit_cnt<=bit_cnt-1;
                        end
                    end
                end

                
                S_ADDR_ACK:begin
                    if(bit_scl_fall) begin
                    sda_oe_r<=1'b1; 
                    bit_cnt<=3'd7;
                        if(r_is_read) begin
                            state<=S_RD_BYTE;
                        end
                        else begin 
                            shift_tx<=r_tx_data[7:0]; 
                            state<=S_WR_BYTE; 
                        end
                    end 
                    else begin 
                        sda_out_r<=1'b1; 
                        sda_oe_r<=1'b0; 
                    end         
                end

                
                S_WR_BYTE:begin
                    sda_oe_r<=1'b1;
                    if(bit_start_tick) begin 
                        sda_out_r<=shift_tx[7];
                    end
                    if(bit_scl_fall) begin
                        shift_tx<={shift_tx[6:0],1'b0};
                        if(bit_cnt==0) begin 
                            state<=S_WR_ACK;
                        end
                        else begin 
                            bit_cnt<=bit_cnt-1;
                        end
                    end                    
                end

                
                S_WR_ACK:begin
                    if(bit_scl_fall) begin
                    sda_oe_r<=1'b1; 
                    bit_cnt<=3'd7;
                    byte_cnt<=byte_cnt+1;
                    if(byte_cnt==r_num_bytes-1) begin
                        state<=S_STOP;
                    end else begin
                        case(byte_cnt)          // Sonraki byte'ı yükle
                            3'd0: shift_tx<=r_tx_data[15:8];
                            3'd1: shift_tx<=r_tx_data[23:16];
                            3'd2: shift_tx<=r_tx_data[31:24];
                            default: shift_tx<='1;
                        endcase
                        state<=S_WR_BYTE;
                    end
                    end 
                    else begin 
                        sda_out_r<=1'b1; 
                        sda_oe_r<=1'b0; 
                    end
                end

                
                S_RD_BYTE:begin
                    sda_out_r<=1'b1; 
                    sda_oe_r<=1'b0;
                    if(bit_sda_sample) begin
                        shift_rx<={shift_rx[6:0], i_sda_in};
                    end
                    if(bit_scl_fall) begin
                        if (bit_cnt==0)begin 
                            state<=S_RD_ACK;
                        end
                        else begin           
                            bit_cnt<=bit_cnt-1;
                        end
                    end            
                end

                
                S_RD_ACK:begin
                    sda_oe_r<=1'b1;
                    if(byte_cnt==r_num_bytes-1)begin
                        sda_out_r<=1'b1;
                    end
                    else begin
                       sda_out_r<=1'b0;
                    end 
                    if(bit_scl_fall) begin
                        case(byte_cnt)
                            3'd0: r_rx_data[7:0]<=shift_rx;
                            3'd1: r_rx_data[15:8]<=shift_rx;
                            3'd2: r_rx_data[23:16]<=shift_rx;
                            3'd3: r_rx_data[31:24]<=shift_rx;
                            default:;
                        endcase
                        byte_cnt<=byte_cnt+1; 
                        bit_cnt<=3'd7;
                        if(byte_cnt==r_num_bytes-1) begin
                            state<=S_STOP;
                        end
                        else begin
                            state<=S_RD_BYTE;
                        end                        
                    end  
                end
                
                
                S_STOP:begin
                    sda_oe_r<=1'b1;
                    if(clk_cnt >= T_3QUART) begin
                        sda_out_r<= 1'b1;
                    end
                    else begin
                        sda_out_r <=1'b0;
                    end
                    if(bit_scl_fall) begin 
                        state<=S_DONE;
                    end
                end

                
                S_DONE:begin
                    sda_out_r<=1'b1; 
                    sda_oe_r<=1'b1;
                    if (r_is_read) begin 
                        o_rx_done<=1'b1;
                    end
                    else begin                                   
                        o_tx_done<=1'b1;
                    end
                    state<=S_IDLE;        
                end

                default: state<=S_IDLE;

            endcase
        end
    end

    assign o_scl=scl_r;
    assign o_sda_out=sda_out_r;
    assign o_sda_oe=sda_oe_r;
    assign o_rx_data=r_rx_data;
    assign o_busy=(state != S_IDLE);


endmodule


     