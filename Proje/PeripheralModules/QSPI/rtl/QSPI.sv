`timescale 1ns / 1ps

module QSPI(
    input logic clk,
    input logic rst_n,
    input logic [7:0] instr,
    input logic [1:0] data_mode,
    input logic [4:0] dummy_cycle_count,
    input logic [7:0] data_width,
    input logic [5:0] prescaler,
    input logic clear_status,
    input logic [31:0] addr,
    input logic addr_is_32_bit,
    input logic start_req,
    
    input  logic [31:0] tx_data_i,
    output logic [31:0] rx_data_o,
    output logic tx_fifo_rd_en,
    output logic rx_fifo_wr_en,
    input logic [1:0] fifo_control,
    input logic tx_fifo_empty,
    input logic tx_fifo_full,
    input logic rx_fifo_empty,
    input logic rx_fifo_full,
    output logic tx_fifo_flush,
    output logic rx_fifo_flush,

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
    
    
    
    localparam logic [7:0] READ             =8'h03;    //Read    
    localparam logic [7:0] DOR              =8'h3B;    //(Read Dual Out) 
    localparam logic [7:0] QOR              =8'h6B;    //(Read Quad Out) 
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

    //status connections
    logic done_reg;
    logic [3:0] fifo_error_reg;
    logic busy;
    
    assign status[0]=done_reg;
    assign status[1]=busy;
    assign status[3:2]=2'd0;
    assign status[4]=rx_fifo_full;
    assign status[5]=rx_fifo_empty;
    assign status[6]=tx_fifo_full;
    assign status[7]=tx_fifo_empty;
    assign status[11:8]=fifo_error_reg;
    
    
    
    
    
    
    logic sclk_tick;
    
    //dividing the clock with the prescalar
    logic sclk_enable;
    assign sclk_enable = ~qspi_cs;
    logic qspi_sclk_reg;
    logic [5:0] counter;
    always_ff @(posedge clk or negedge rst_n)begin
        if(!rst_n)begin 
            counter<=6'h0;
            qspi_sclk_reg<=1'h0;
        end
        else begin
            if(prescaler!=0)begin
                if(counter==prescaler)begin 
                    counter<=6'h0;
                end
                else begin 
                    counter<=counter+1;       
                end            
                if(counter < ((prescaler+1)>>1))begin 
                    qspi_sclk_reg<=1'b1;
                end
                else qspi_sclk_reg<=1'b0;
             
            end

        end
    end
    assign qspi_sclk = (sclk_enable)
                 ? ((prescaler == 0) ? clk : qspi_sclk_reg)
                 : 1'b0;
                 
    logic qspi_sclk_prev;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n)begin 
            qspi_sclk_prev<=0;
        end
        else begin 
            qspi_sclk_prev <= qspi_sclk_reg;
        end
    end

    assign sclk_tick = (prescaler == 0) ? 1'b1 : (~qspi_sclk_reg & qspi_sclk_prev);  
    
    logic [5:0] addr_count;
    assign addr_count=(addr_is_32_bit)?6'd32:6'd24;
    logic [31:0] rx_shift_reg;
    
    //counters
    logic [3:0] cmd_counter;
    logic [4:0] dummy_counter;
    logic [4:0] addr_counter;
    logic [11:0] data_tx_counter;
    logic [11:0] data_rx_counter;
    
    //read-write cycle calculation
    logic [11:0] total_data_bits;
    logic [11:0] target_data_cycles;
    logic [3:0] target_cmd_cycles;
    assign total_data_bits=(data_width+1)*8;
    always_comb begin 
        if(data_mode==2'b01)begin 
            target_data_cycles=total_data_bits;
            target_cmd_cycles=8;
        end
        else if(data_mode==2'b10)begin 
            target_data_cycles=total_data_bits/2;
            target_cmd_cycles=4;
        end
        else if(data_mode==2'b11)begin 
            target_data_cycles=total_data_bits/4;
            target_cmd_cycles=2;
        end
        else begin 
            target_data_cycles=0;
            target_cmd_cycles=0;
        end
    end
    
    
    always_comb begin
        next_state   = current_state;
        busy         = 1'b1;         
        qspi_cs      = 1'b0; 
        qspi_data_oe = 4'b0000;
        qspi_data_o  = 4'b0000;
        tx_fifo_rd_en = 1'b0;
        rx_fifo_wr_en = 1'b0;
        rx_data_o     = rx_shift_reg;
        
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
                if(data_mode==2'b01)begin 
                    qspi_data_oe=4'b0001;
                    qspi_data_o[0]=instr[3'd7-cmd_counter];
                end
                else if(data_mode==2'b10)begin 
                    qspi_data_oe=4'b0011;
                    qspi_data_o[1]=instr[3'd7-2*(cmd_counter)];
                    qspi_data_o[0]=instr[3'd7-2*(cmd_counter)-1];
                
                end
                else if(data_mode==2'b11)begin
                    qspi_data_oe=4'b1111;
                    qspi_data_o[3]=instr[3'd7-4*(cmd_counter)];
                    qspi_data_o[2]=instr[3'd7-4*(cmd_counter)-1];
                    qspi_data_o[1]=instr[3'd7-4*(cmd_counter)-2];
                    qspi_data_o[0]=instr[3'd7-4*(cmd_counter)-3]; 
                
                end
                if(cmd_counter==target_cmd_cycles-1)begin 
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
                        if(dummy_cycle_count!=0)begin 
                            next_state=DUMMY;
                        end
                        else begin 
                            next_state=DATA_RX;
                        end
                    end
                    else if (instr == PP || instr == QPP)begin 
                        next_state=DATA_TX;
                    end
                    else next_state=DONE;
                end
            end
            DUMMY:begin 
                if(dummy_counter==dummy_cycle_count-1)begin 
                    next_state=DATA_RX;
                end
            end
        
            
            DATA_TX:begin 
                if(tx_fifo_empty)begin
                    next_state=DONE;
                end
                else begin
                    tx_fifo_rd_en=0;
                    if(data_mode==2'b01)begin
                        qspi_data_oe=4'b0001;
                        qspi_data_o[0]=tx_data_i[31-(data_tx_counter%32)];
                        if ((data_tx_counter % 32) == 31) tx_fifo_rd_en = 1'b1;
                    end                
                    else if(data_mode==2'b10)begin
                        qspi_data_oe=4'b0011; 
                        qspi_data_o[1]=tx_data_i[31-2*(data_tx_counter%16)];
                        qspi_data_o[0]=tx_data_i[30-2*(data_tx_counter%16)];
                        if ((data_tx_counter % 16) == 15) tx_fifo_rd_en = 1'b1;
                    end
                    else if(data_mode==2'b11)begin
                        qspi_data_oe=4'b1111; 
                        qspi_data_o[3]=tx_data_i[31-4*(data_tx_counter%8)];
                        qspi_data_o[2]=tx_data_i[30-4*(data_tx_counter%8)];
                        qspi_data_o[1]=tx_data_i[29-4*(data_tx_counter%8)];
                        qspi_data_o[0]=tx_data_i[28-4*(data_tx_counter%8)];
                        if ((data_tx_counter % 8) == 7) tx_fifo_rd_en = 1'b1;                  
                    end
                
                    if(data_tx_counter==target_data_cycles-1)begin 
                        next_state=DONE;
                        tx_fifo_rd_en = 1'b0;
                    end
                end
            
            end
            DATA_RX:begin
                if(rx_fifo_full)begin 
                    next_state=DONE;
                end
                else begin
                    rx_fifo_wr_en=0;
                    if(data_mode==2'b01)begin
                        rx_data_o[31-(data_rx_counter%32)]=qspi_data_i[1];
                        if ((data_rx_counter % 32) == 31) rx_fifo_wr_en = 1'b1;
                    end                
                    else if(data_mode==2'b10)begin
                        rx_data_o[31-2*(data_rx_counter%16)]=qspi_data_i[1];
                        rx_data_o[30-2*(data_rx_counter%16)]=qspi_data_i[0]; 
                        if ((data_rx_counter % 16) == 15) rx_fifo_wr_en = 1'b1;
                    end
                    else if(data_mode==2'b11)begin
                        rx_data_o[31-4*(data_rx_counter%8)]=qspi_data_i[3];
                        rx_data_o[30-4*(data_rx_counter%8)]=qspi_data_i[2];
                        rx_data_o[29-4*(data_rx_counter%8)]=qspi_data_i[1];
                        rx_data_o[28-4*(data_rx_counter%8)]=qspi_data_i[0];
                        if ((data_rx_counter % 8) == 7) rx_fifo_wr_en = 1'b1;                  
                    end
                    if(data_rx_counter==target_data_cycles-1)begin 
                        next_state=DONE;
                        rx_fifo_wr_en = 1'b0;
                    end
                end 
            end
            DONE:begin 
                qspi_cs=1'b1;
                next_state=IDLE;
                qspi_data_oe=4'b0000;
            end
            default begin  
                next_state=IDLE;
            end
        endcase 
    
    
    end
    
    
    

    always_ff @(posedge clk or negedge rst_n)begin 
        if(!rst_n)begin
            rx_shift_reg<=0;
            current_state<=IDLE;
            done_reg<=1'b0;
            fifo_error_reg<=4'd0;
            rx_fifo_flush   <= 1'b0;
            tx_fifo_flush   <= 1'b0;
            cmd_counter     <= 4'd0;            
            dummy_counter   <= 5'd0;
            addr_counter    <= 5'd0;
            data_tx_counter <= 12'd0;
            data_rx_counter <= 12'd0;   
        end 
        else begin
            if(clear_status)begin 
                done_reg<=1'b0;
                fifo_error_reg<=4'd0;
            end
        
            if(fifo_control!=2'b00)begin 
               rx_fifo_flush <= (fifo_control[0]); 
               tx_fifo_flush <= (fifo_control[1]);
               current_state <= IDLE; 
            end
            else if(sclk_tick)begin 
                current_state<=next_state;
                tx_fifo_flush <= 1'b0;
                rx_fifo_flush <= 1'b0;
                
                if (next_state == DONE && current_state != DONE) begin
                    done_reg <= 1'b1;
                end
                
                if (current_state == DATA_TX && tx_fifo_empty) begin
                    fifo_error_reg <= 4'b1010; // TX Underflow
                end
                else if (current_state == DATA_RX && rx_fifo_full) begin
                    fifo_error_reg <= 4'b1001; // RX Overflow
                end
                
                
                if(current_state==CMD)begin 
                    cmd_counter<=cmd_counter+1;
                end
                else if(current_state==DUMMY)begin 
                    dummy_counter<=dummy_counter+1;
                end
                else if(current_state==ADDR)begin 
                    addr_counter<=addr_counter+1;                
                end
                else if(current_state==DATA_TX)begin 
                    data_tx_counter<=data_tx_counter+1;
                end
                else if(current_state==DATA_RX)begin 
                    data_rx_counter<=data_rx_counter+1;
                    rx_shift_reg <= rx_data_o;
                end
                else begin 
                    cmd_counter<=3'd0;
                    dummy_counter<=5'd0;
                    addr_counter<=5'd0;
                    data_tx_counter<=12'd0;
                    data_rx_counter<=12'd0; 
                end   
            end
        end
    end
    
    


    

endmodule