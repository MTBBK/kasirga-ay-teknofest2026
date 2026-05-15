`timescale 1ns / 1ps

module qspi(
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
    input logic tx_fifo_empty,
    input logic tx_fifo_full,
    input logic rx_fifo_empty,
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
    
    localparam logic [7:0] READ       = 8'h03, 
                           DOR        = 8'h3B, 
                           QOR        = 8'h6B, 
                           PP         = 8'h02, 
                           QPP        = 8'h32, 
                           SE         = 8'hD8, 
                           READ_ID    = 8'h9E, 
                           RDID       = 8'h9F, 
                           RES        = 8'hAB, 
                           RDSR1      = 8'h05, 
                           RDSR2      = 8'h70, 
                           RDCR       = 8'hB5, 
                           WRR        = 8'h01, 
                           WRDI       = 8'h04, 
                           WREN       = 8'h06, 
                           CLSR       = 8'h50, 
                           RESET_EN   = 8'h66, 
                           RESET_MEM  = 8'h99, 
                           EN4B       = 8'hB7, 
                           EX4B       = 8'hE9; 

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
    
    logic sample_tick;
    logic shift_tick;
    
    logic sclk_enable;
    assign sclk_enable = ~qspi_cs;
    logic qspi_sclk_reg;
    logic [5:0] counter;
    
    always_ff @(posedge clk or negedge rst_n)begin
        if(!rst_n)begin 
            counter <= 6'h0;
            qspi_sclk_reg <= 1'b0;
        end
        else begin
            if (current_state == IDLE) begin 
                counter <= 6'h0;
                qspi_sclk_reg <= 1'b0;
            end
            else if(prescaler != 0)begin
                if(counter == prescaler)begin 
                    counter <= 6'h0;
                end
                else begin 
                    counter <= counter + 1;       
                end            
                
                if(counter < ((prescaler+1)>>1))begin 
                    qspi_sclk_reg <= 1'b0; 
                end
                else begin
                    qspi_sclk_reg <= 1'b1;
                end
            end
            else begin
                qspi_sclk_reg <= ~qspi_sclk_reg;
            end
        end
    end
    
    assign qspi_sclk = (sclk_enable) ? ((prescaler == 0) ? clk : qspi_sclk_reg) : 1'b0;
                 
    logic qspi_sclk_prev;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n)begin 
            qspi_sclk_prev <= 1'b0;
        end
        else begin 
            qspi_sclk_prev <= qspi_sclk_reg;
        end
    end

    // Kusursuz Kenar Tespitleri (Senin orijinal mantığın)
    assign shift_tick  = (prescaler == 0) ? 1'b1 : (~qspi_sclk_reg & qspi_sclk_prev);
    assign sample_tick = (prescaler == 0) ? 1'b1 : (qspi_sclk_reg & ~qspi_sclk_prev);
    
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
    
    // QPI Modu Hesaplaması
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
        rx_data_o    = rx_shift_reg;
        
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
                // ICARUS COMPILER HATASI ÇÖZÜLDÜ (Shift >> kullanıldı)
                if(data_mode==2'b01)begin 
                    qspi_data_oe=4'b0001;
                    qspi_data_o[0] = (instr >> (7 - cmd_counter)) & 1'b1;
                end
                else if(data_mode==2'b10)begin 
                    qspi_data_oe=4'b0011;
                    qspi_data_o[1:0] = (instr >> (6 - 2*cmd_counter)) & 2'b11;
                end
                else if(data_mode==2'b11)begin
                    qspi_data_oe=4'b1111;
                    qspi_data_o[3:0] = (cmd_counter == 0) ? instr[7:4] : instr[3:0];
                end
                
                // ORİJİNAL ÇALIŞAN -1
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
                // ICARUS COMPILER HATASI ÇÖZÜLDÜ
                if(data_mode==2'b01)begin
                    qspi_data_oe=4'b0001;
                    qspi_data_o[0] = (addr >> (addr_count - addr_counter - 1)) & 1'b1;
                    target_cycles=addr_count-1;
                end                
                else if(data_mode==2'b10)begin
                    qspi_data_oe=4'b0011; 
                    qspi_data_o[1:0] = (addr >> (addr_count - 2*addr_counter - 2)) & 2'b11;
                    target_cycles=(addr_count/2)-1;
                end
                else if(data_mode==2'b11)begin
                    qspi_data_oe=4'b1111; 
                    qspi_data_o[3:0] = (addr >> (addr_count - 4*addr_counter - 4)) & 4'b1111;
                    target_cycles=(addr_count/4)-1;                    
                end
                    
                // ORİJİNAL ÇALIŞAN -1
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
                // ORİJİNAL ÇALIŞAN -1
                if(dummy_counter==dummy_cycle_count-1)begin 
                    next_state=DATA_RX;
                end
            end
        
            DATA_TX:begin 
                if(tx_fifo_empty)begin
                    next_state=DONE;
                end
                else begin
                    if(data_mode==2'b01)begin
                        qspi_data_oe=4'b0001;
                        qspi_data_o[0] = (tx_data_i >> (31 - (data_tx_counter % 32))) & 1'b1;
                    end                
                    else if(data_mode==2'b10)begin
                        qspi_data_oe=4'b0011; 
                        qspi_data_o[1:0] = (tx_data_i >> (30 - 2*(data_tx_counter % 16))) & 2'b11;
                    end
                    else if(data_mode==2'b11)begin
                        qspi_data_oe=4'b1111; 
                        qspi_data_o[3:0] = (tx_data_i >> (28 - 4*(data_tx_counter % 8))) & 4'b1111;                 
                    end
                
                    // ORİJİNAL ÇALIŞAN -1
                    if(data_tx_counter==target_data_cycles-1)begin 
                        next_state=DONE;
                    end
                end
            end
            DATA_RX:begin
                if(rx_fifo_full)begin 
                    next_state=DONE;
                end
                else begin
                    // İŞTE BÜTÜN HATAYI ÇÖZEN O TEK FARK!
                    // Veriyi okuduğumuz state olduğu için, diğerleri gibi erken KAPANAMAZ! 
                    // Tam hedef sayısına ulaştığında kapanmalıdır! (-1 YOK)
                    if(data_rx_counter == target_data_cycles - ((prescaler == 0) ? 1 : 0))begin 
                        next_state=DONE;
                    end
                end 
            end
            DONE:begin 
                qspi_cs=1'b1;
                next_state=IDLE;
                qspi_data_oe=4'b0000;
            end
            default: begin  
                next_state=IDLE;
            end
        endcase 
    end

    always_ff @(posedge clk or negedge rst_n) begin 
        if(!rst_n) begin
            current_state   <= IDLE;
            done_reg        <= 1'b0;
            cmd_counter     <= 0;
            addr_counter    <= 0;
            dummy_counter   <= 0;
            data_tx_counter <= 0;
            data_rx_counter <= 0;
            rx_shift_reg    <= 0;
            rx_fifo_wr_en   <= 0;
            tx_fifo_rd_en   <= 0;
            fifo_error_reg  <= 4'b0000;
        end 
        else begin
            if(clear_status)begin  
                done_reg <= 1'b0; 
                fifo_error_reg <= 4'b0000;
            end
            if (current_state == DATA_TX && tx_fifo_empty) begin
                fifo_error_reg <= 4'b1010;
            end
            else if (current_state == DATA_RX && rx_fifo_full) begin
                fifo_error_reg <= 4'b1001;
            end
            
            case(current_state)
                IDLE: begin
                    if(start_req) begin
                        current_state <= CMD;
                        done_reg      <= 1'b0;
                    end
                    cmd_counter <= 0; addr_counter <= 0; dummy_counter <= 0;
                    data_tx_counter <= 0; data_rx_counter <= 0;
                end
        
                CMD, ADDR, DUMMY, DATA_TX: begin
                    if(shift_tick) begin
                        case(current_state)
                            CMD:     cmd_counter <= cmd_counter + 1;
                            ADDR:    addr_counter <= addr_counter + 1;
                            DUMMY:   dummy_counter <= dummy_counter + 1;
                            DATA_TX: begin 
                                data_tx_counter <= data_tx_counter + 1; 
                                if ((data_mode == 2'b01 && (data_tx_counter % 32) == 31) ||
                                    (data_mode == 2'b10 && (data_tx_counter % 16) == 15) ||
                                    (data_mode == 2'b11 && (data_tx_counter % 8) == 7)   ||
                                    (data_tx_counter == target_data_cycles - 1)) begin
                                    tx_fifo_rd_en <= 1'b1;
                                end else begin
                                    tx_fifo_rd_en <= 1'b0;
                                end
                            end
                        endcase
                        if (next_state == DONE) done_reg <= 1'b1;
                        current_state <= next_state;
                    end
                    else begin  
                        tx_fifo_rd_en <= 1'b0;
                    end
                end
                
                DATA_RX: begin
                    if (sample_tick) begin
                        data_rx_counter <= data_rx_counter + 1;
                        case(data_mode)
                            2'b01: rx_shift_reg <= {rx_shift_reg[30:0], qspi_data_i[1]};
                            2'b10: rx_shift_reg <= {rx_shift_reg[29:0], qspi_data_i[1:0]};
                            2'b11: rx_shift_reg <= {rx_shift_reg[27:0], qspi_data_i[3:0]};
                        endcase
                        
                        // İŞTE VURUCU HAMLE: rx_fifo_wr_en tam zamanında, -1 varken tetiklenmeli!
                        if ((data_mode == 2'b01 && (data_rx_counter % 32) == 31) ||
                            (data_mode == 2'b10 && (data_rx_counter % 16) == 15) ||
                            (data_mode == 2'b11 && (data_rx_counter % 8) == 7)   ||
                            (data_rx_counter == target_data_cycles - 1)) begin
                            rx_fifo_wr_en <= 1'b1;
                        end else begin
                            rx_fifo_wr_en <= 1'b0;
                        end
                    end 
                    else begin
                        rx_fifo_wr_en <= 1'b0;
                    end
                    
                    if (shift_tick) begin
                        if (next_state == DONE) done_reg <= 1'b1;
                        current_state <= next_state;
                    end
                end
                    
                DONE: begin
                    current_state <= IDLE;
                end
            endcase
        end
    end
endmodule