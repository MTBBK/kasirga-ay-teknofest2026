`timescale 1ns / 1ps

module QSPI(
    input logic clk,
    input logic rst,
    input logic [7:0] instr,
    input logic [1:0] data_mode,
    input logic rw_mode,
    input logic [4:0] dummy_cycle_count,
    input logic [7:0] data_width,
    input logic [5:0] prescaler,
    input logic clear_status,
    input logic [31:0] addr,
    input logic start_req,
    
    input  logic [31:0] tx_data_i,
    output logic [31:0] rx_data_o,
    output logic tx_fifo_rd_en,
    output logic rx_fifo_wr_en,
    input logic [1:0] fifo_control,
    input logic tx_fifo_empty,
    input logic rx_fifo_full,

    output logic [11:0] status,


    output logic qspi_sclk,
    output logic qspi_cs,
    output logic [3:0] qspi_data_o,
    input logic [3:0] qspi_data_i,
    output logic [3:0] qspi_data_oe
);
    typedef enum logic [2:0] {
    IDLE     = 3'd0,
    CMD      = 3'd1,
    ADDR     = 3'd2,
    DUMMY    = 3'd3,
    DATA_TX  = 3'd4,
    DATA_RX  = 3'd5,
    DONE     = 3'd6
} state;

    state current_state, next_state;
    
    
    
    localparam logic [7:0] READ             =8'h03;    //Read rx   
    localparam logic [7:0] DOR              =8'h3B;    //(Read Dual Out) rx
    localparam logic [7:0] QOR              =8'h6B;    //(Read Quad Out) rx
    localparam logic [7:0] PP               =8'h02;    //(Page Program) 
    localparam logic [7:0] QPP              =8'h32;    //(Quad Page Program)
    localparam logic [7:0] SE               =8'hD8;    //(Sector Erase)
    localparam logic [7:0] READ_ID          =8'h9E;    //(Read Electronic Manufacturer Signature) /no adress
    localparam logic [7:0] RDID             =8'h9F;    //(Read ID - JEDEC Manufacturer ID and JEDEC CFI) /no adress
    localparam logic [7:0] RES              =8'hAB;    //(Read Electronic Signature) /no adress
    localparam logic [7:0] RDSR1            =8'h05;    //(Read Status Register-1) /no adress
    localparam logic [7:0] RDSR2            =8'h70;    //(Read Status Register-2) /no adress
    localparam logic [7:0] RDCR             =8'hB5;    //(Read Configuration Register) /no adress
    localparam logic [7:0] WRR              =8'h01;    //(Write Register - Status-1, Configuration-1) /no adress
    localparam logic [7:0] WRDI             =8'h04;    //(Write Disable) /no adress
    localparam logic [7:0] WREN             =8'h06;    //(Write Enable) /no adress
    localparam logic [7:0] CLSR             =8'h50;    //(Clear Status Register-1) /no adress
    localparam logic [7:0] RESET_EN         =8'h66;    //(Software Reset_Enable) /no adress
    localparam logic [7:0] RESET_MEM        =8'h99;    //(Software Reset_Memory) /no adress

    
    logic done;
    logic busy;
    assign status[0]=done;
    assign status[1]=busy;
    logic sclk_tick;
    
    //dividing the clock with the prescalar
    logic sclk_enable;
    assign sclk_enable = ~qspi_cs;
    logic qspi_sclk_reg;
    logic [5:0] counter;
    always_ff @(posedge clk or negedge rst)begin
        if(!rst)begin 
            counter<=6'h0;
            qspi_sclk_reg<=1'h0;
        end
        else begin 
            if(counter==prescaler)begin 
                qspi_sclk_reg<=~qspi_sclk_reg;
                counter<=6'h0;
                sclk_tick<=1'b1;
            end
            else begin 
                counter<=counter+1;
                sclk_tick<=1'b0;       
            end
        end
    end
    assign qspi_sclk=(sclk_enable)?qspi_sclk_reg:1'b0;    
    //
    
    logic [5:0] addr_count;
    assign addr_count=6'd24;
    
    //counters
    logic [2:0] cmd_counter;
    logic [4:0] dummy_counter;
    logic [4:0] addr_counter;

    
    
    always_comb @(*)begin
        next_state = current_state;
        busy       = 1'b1;         
        qspi_cs  = 1'b0; 
        
        case(current_state) 
            IDLE:begin
                if(start_req)begin
                    next_state=CMD;
                    busy=1'b1;
                    qspi_cs=1'b0;                   
                end
                else begin 
                    busy=1'b0;
                    qspi_cs=1'b1;  
                end
            end
            CMD:begin
                qspi_data_oe=4'b0001;
                qspi_data_o[0]=instr[3'd7-cmd_counter];
                if(cmd_counter==3'd7)begin 
                    if (instr == READ || instr == DOR || instr == QOR || 
                        instr == PP || instr == QPP || instr == SE) begin
                        next_state = ADDR;
                    end
                    else if (instr == READ_ID || instr == RDID || instr == RES || 
                        instr == RDSR1 || instr == RDSR2 || instr == RDCR) begin
                        next_state=DATA_RX;
                    end
                    else if(instr == WRR)begin 
                        next_state=DATA_TX;
                    end
                    else begin 
                        next_state=DONE;
                    end
                end
            end
            ADDR:begin
                logic [5:0] target_cycles;
            
                if(data_mode==2'b01)begin
                    qspi_data_oe=4'b0001;
                    qspi_data_o[0]=addr[addr_count-addr_counter-1];
                    target_cycles=addr_count-1;
                end                
                else if(data_mode==2'b10)begin
                    qspi_data_oe=4'b0011; 
                    qspi_data_o[1]=addr[addr_count-(2*addr_counter)-1];
                    qspi_data_o[0]=addr[addr_count-(2*addr_counter)-2];
                    target_cycles=(addr_count/2)-1;
                end
                else if(data_mode==2'b11)begin
                    qspi_data_oe=4'b1111; 
                    qspi_data_o[3]=addr[addr_count-(4*addr_counter)-1];
                    qspi_data_o[2]=addr[addr_count-(4*addr_counter)-2];
                    qspi_data_o[1]=addr[addr_count-(4*addr_counter)-3];
                    qspi_data_o[0]=addr[addr_count-(4*addr_counter)-4];
                    target_cycles=(addr_count/4)-1;                    
                end
                    
                
                if(addr_counter==target_cycles)begin 
                    if(instr == READ) begin 
                        next_state=DATA_RX;
                    end
                    else if(instr == DOR || instr == QOR) begin 
                        next_state=DUMMY;
                    end
                    else if (instr == PP || instr == QPP)begin 
                        next_state=DATA_TX;
                    end
                    else next_state=DONE;
                end
            end
            DUMMY:begin 
                if(dummy_counter==dummy_cycle_count)begin 
                    next_state=DATA_RX;
                end
            end
        
            default begin  
                next_state=IDLE;
            end
        
        endcase 
    
    
    end

    always_ff @(posedge clk or negedge rst)begin 
        if(!rst)begin 
            current_state<=IDLE;
        end
        else if(sclk_tick) begin 
            current_state<=next_state;

            if(current_state==CMD)begin 
                cmd_counter<=cmd_counter+1;
            end
            else if(current_state==DUMMY)begin 
                dummy_counter<=dummy_counter+1;
            end
            else if(current_state==ADDR)begin 
                addr_counter<=addr_counter+1;
            end
            else begin 
                cmd_counter<=3'd0;
                dummy_counter<=5'd0;
                addr_counter<=5'd0;   
            end
        end
    end


    

endmodule
