`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/06/2026 05:20:49 PM
// Design Name: 
// Module Name: fifo
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module fifo #(parameter DATA_WIDTH=32,parameter DEPTH=64)(
    input logic clk,
    input logic rst_n,
    input logic flush,
    
    input logic wr_en,
    input logic [DATA_WIDTH-1:0] data_in,
    
    input logic rd_en,
    output logic [DATA_WIDTH-1:0] data_out,
    
    output logic full,
    output logic empty
    );
    
    logic [DATA_WIDTH-1:0] mem [0:DEPTH-1];
    
    localparam PTR_WIDTH=$clog2(DEPTH);
    
    logic [PTR_WIDTH:0] wr_ptr;
    logic [PTR_WIDTH:0] rd_ptr;
    
    assign full=((wr_ptr[PTR_WIDTH]!=rd_ptr[PTR_WIDTH])&&(wr_ptr[PTR_WIDTH-1:0]==rd_ptr[PTR_WIDTH-1:0]));
    assign empty=(wr_ptr==rd_ptr);
    assign data_out = empty ? {DATA_WIDTH{1'b0}} : mem[rd_ptr[PTR_WIDTH-1:0]];
    
    always_ff @(posedge clk or negedge rst_n)begin 
        if(!rst_n)begin 
            wr_ptr <= 0;
            rd_ptr <= 0;
        end
        else if(flush)begin 
            wr_ptr <= 0;
            rd_ptr <= 0;
        end 
        else begin
            if (wr_en&&!full)begin 
                mem[wr_ptr[PTR_WIDTH-1:0]]<=data_in;
                wr_ptr<=wr_ptr+1;
            
            end
            else if(rd_en&&!empty)begin 
                rd_ptr<=rd_ptr+1;
            end      
        end
    end
 
endmodule

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
                           WRSR       = 8'h01,
                           WRCR       = 8'hB1, 
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
    
    // 1. GÜNCELLENMİŞ SAAT ÜRETECİ: IDLE ve DONE'da saati güvenle durduruyoruz
    always_ff @(posedge clk or negedge rst_n)begin
        if(!rst_n)begin 
            counter <= 6'h0;
            qspi_sclk_reg <= 1'b0;
        end
        else begin
            if (current_state == IDLE || current_state == DONE) begin 
                counter <= 6'h0;
                qspi_sclk_reg <= 1'b0; // Saat güvenli bir şekilde sıfırda bekler
            end
            else if(counter == prescaler)begin 
                counter <= 6'h0;
                qspi_sclk_reg <= ~qspi_sclk_reg; // Saati tersle
            end
            else begin 
                counter <= counter + 1;        
            end            
        end
    end
    
    // 2. GLITCH KORUMASI: Kombinasyonel maske yerine doğrudan register'ı çıkışa veriyoruz
    // Böylece 0 nanosaniyelik hayalet vuruşlar (tCH ihlali) sonsuza dek yok oluyor.
    assign qspi_sclk = qspi_sclk_reg;
                 
    // Eski qspi_sclk_prev bloğunu tamamen sil!
    // --------------------------------------------------------

    // 3. KUSURSUZ KENAR TESPİTİ (tCHDX İhlalini Çözer)
    // Veri, saat tam 0'a düşmek üzereyken (Düşen Kenar) değiştirilir.
    assign shift_tick  = (current_state != IDLE) && (current_state != DONE) && 
                         (counter == prescaler) && (qspi_sclk_reg == 1'b1);
                         
    // Veri, saat tam 1'e çıkmak üzereyken (Yükselen Kenar) örneklenir.
    assign sample_tick = (current_state != IDLE) && (current_state != DONE) && 
                         (counter == prescaler) && (qspi_sclk_reg == 1'b0);
    
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
    logic [5:0] target_cycles;
    
    // QPI Modu Hesaplaması
    always_comb begin 
        if(data_mode==2'b01)begin 
            
            if(instr==QOR||instr==QPP)begin 
                target_data_cycles=total_data_bits/4;
            end
            else if(instr==DOR)begin 
                target_data_cycles=total_data_bits/2;
            end
            else begin 
                target_data_cycles=total_data_bits;
            end
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
                    else if(instr == WRSR||instr==WRCR)begin 
                        next_state=DATA_TX;
                    end
                    else begin 
                        next_state=DONE;
                    end
                end
            end
            ADDR:begin
                target_cycles='d0;
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
                        if(instr==QPP)begin
                            qspi_data_oe=4'b1111; 
                            qspi_data_o[3:0] = (tx_data_i >> (28 - 4*(data_tx_counter % 8))) & 4'b1111; 
                        end
                        else begin 
                            qspi_data_oe=4'b0001;
                            qspi_data_o[0] = (tx_data_i >> (31 - (data_tx_counter % 32))) & 1'b1;
                        end
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
                    if(data_rx_counter == target_data_cycles)begin 
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
                fifo_error_reg[2] <= 1'b1;
            end
            if (current_state == DATA_RX && rx_fifo_full) begin
                fifo_error_reg[3] <= 1'b1;
            end
            
            case(current_state)
                IDLE: begin
                    if(start_req) begin
                        current_state <= CMD;
                        done_reg      <= 1'b0;
                        rx_shift_reg  <= 32'b0;
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
                                if ((data_mode == 2'b01 && instr == QPP && (data_tx_counter % 8) == 7)   ||
                                    (data_mode == 2'b01 && instr != QPP && (data_tx_counter % 32) == 31) ||
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
                            2'b01:begin  
                                if(instr==QOR)begin 
                                    rx_shift_reg <= {rx_shift_reg[27:0], qspi_data_i[3:0]};
                                end
                                else if(instr==DOR)begin 
                                    rx_shift_reg <= {rx_shift_reg[29:0], qspi_data_i[1:0]};
                                end
                                else begin 
                                    rx_shift_reg <= {rx_shift_reg[30:0], qspi_data_i[1]};
                                end
                                 
                            
                            end
                            2'b10: rx_shift_reg <= {rx_shift_reg[29:0], qspi_data_i[1:0]};
                            2'b11: rx_shift_reg <= {rx_shift_reg[27:0], qspi_data_i[3:0]};
                        endcase
                        
                        
                        if ((data_mode == 2'b01 && instr!=QOR && instr!=DOR &&(data_rx_counter % 32) == 31) ||
                            (data_mode == 2'b01 && instr == QOR && (data_rx_counter % 8) == 7)   ||
                            (data_mode == 2'b01 && instr == DOR && (data_rx_counter % 16) == 15) ||
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





`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/11/2026 03:42:41 PM
// Design Name: 
// Module Name: qspi_axi_wrapper
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module qspi_axi_wrapper(
    
    output logic sclk,
    output logic cs,
    
    output logic [3:0]  qspi_data_o,  
    input  logic [3:0]  qspi_data_i,  
    output logic [3:0]  qspi_data_oe,
    
    input  logic                                S_AXI_ACLK, //Clock
    input  logic                                S_AXI_ARESETN, //Reset
    // Write Address Channel
    input  logic [31:0]     					S_AXI_AWADDR,
    input  logic                                S_AXI_AWVALID,
    output logic                                S_AXI_AWREADY,
    // Write Data Channel
    input  logic [31:0]     					S_AXI_WDATA,
    input  logic [3:0] 							S_AXI_WSTRB,
    input logic                                 S_AXI_WVALID,
    output logic                                S_AXI_WREADY,
    // Write Response Channel
    output logic [1:0]                          S_AXI_BRESP,
    output logic                                S_AXI_BVALID,
    input  logic                                S_AXI_BREADY,
    // Read Address Channel
    input  logic [31:0]						    S_AXI_ARADDR,
    input  logic                                S_AXI_ARVALID,
    output logic                                S_AXI_ARREADY,
    // Read Data Channel
    output logic [31:0]						    S_AXI_RDATA,
    output logic                                S_AXI_RVALID,
    output logic [1:0]                          S_AXI_RRESP,
    input  logic                                S_AXI_RREADY
    );
    
    
    localparam ADDR_QSPI_CCR=32'h0000_9000,
               ADDR_QSPI_ADR=32'h0000_9004,
               ADDR_QSPI_DR=32'h0000_9008,
               ADDR_QSPI_STA=32'h0000_900C,
               ADDR_QSPI_FCR=32'h0000_9010;
               
    logic [31:0] QSPI_CCR;
    logic [31:0] QSPI_ADR;
    logic [31:0] QSPI_STA;
    logic [31:0] QSPI_FCR;
    
    
    logic start_req;
    logic ccr_write_pulse;
    logic [31:0] tx_data_i;
    logic [31:0] rx_data_o;

    logic [31:0] axi_rx_data;
    
    logic [11:0] qspi_core_status;
    logic [3:0] axi_error_flags;
    logic [3:0] status_middle;
    assign status_middle=axi_error_flags|qspi_core_status[11:8];
    assign QSPI_STA={20'd0,status_middle,qspi_core_status[7:0]};   
    
    
    
    //RX fifo control signals
    logic rx_fifo_wr_en;
    logic rx_fifo_rd_en;
    logic rx_fifo_empty;
    logic rx_fifo_full;
    logic rx_underflow;
    
    
    //TX fifo control signals
    logic tx_fifo_wr_en;    
    logic tx_fifo_rd_en;
    logic tx_fifo_empty;
    logic tx_fifo_full;
    logic tx_overflow;
    
               
        
    qspi qspi_core_inst(
        .clk(S_AXI_ACLK),
        .rst_n(S_AXI_ARESETN),
        .instr(QSPI_CCR[7:0]),
        .data_mode(QSPI_CCR[9:8]),
        .dummy_cycle_count(QSPI_CCR[15:11]),
        .data_width(QSPI_CCR[23:16]),
        .prescaler(QSPI_CCR[30:25]),
        .clear_status(QSPI_CCR[31]),
        .addr(QSPI_ADR),
        .addr_is_32_bit(QSPI_CCR[24]),
        .start_req(start_req),
        .tx_data_i(tx_data_i),
        .rx_data_o(rx_data_o),
        .tx_fifo_rd_en(tx_fifo_rd_en),
        .rx_fifo_wr_en(rx_fifo_wr_en),
        .tx_fifo_empty(tx_fifo_empty),
        .tx_fifo_full(tx_fifo_full),
        .rx_fifo_empty(rx_fifo_empty),
        .rx_fifo_full(rx_fifo_full),
        .status(qspi_core_status),
        .qspi_sclk(sclk),
        .qspi_cs(cs),
        .qspi_data_o(qspi_data_o),
        .qspi_data_i(qspi_data_i),
        .qspi_data_oe(qspi_data_oe)
    );   
    
    
    fifo #(.DATA_WIDTH(32),.DEPTH(64)) rx_fifo(
        .clk(S_AXI_ACLK),
        .rst_n(S_AXI_ARESETN),
        .flush(QSPI_FCR[0]),
        .wr_en(rx_fifo_wr_en),
        .data_in(rx_data_o),
        .rd_en(rx_fifo_rd_en),
        .data_out(axi_rx_data),
        .full(rx_fifo_full),
        .empty(rx_fifo_empty)
    );
    fifo #(.DATA_WIDTH(32),.DEPTH(64)) tx_fifo(
        .clk(S_AXI_ACLK),
        .rst_n(S_AXI_ARESETN),
        .flush(QSPI_FCR[1]),
        .wr_en(tx_fifo_wr_en),
        .data_in(S_AXI_WDATA),
        .rd_en(tx_fifo_rd_en),
        .data_out(tx_data_i),
        .full(tx_fifo_full),
        .empty(tx_fifo_empty)
    );
    
     // 1. AXI4-Lite Bus Signals & Handshaking
    logic axi_awready, axi_arready, axi_rvalid, axi_bvalid,axi_wready;

    logic [31:0] axi_rdata;
	
	assign S_AXI_BRESP  = 2'b00;
	assign S_AXI_RRESP  = 2'b00;
    assign S_AXI_AWREADY = axi_awready;
    assign S_AXI_WREADY = axi_awready;
    assign S_AXI_ARREADY = axi_arready;
    
    assign S_AXI_BVALID  = axi_bvalid;

    assign S_AXI_RDATA   = axi_rdata;
    assign S_AXI_RVALID  = axi_rvalid;

    // Handshake logic (simplified standard AXI template)
    always_ff @(posedge S_AXI_ACLK) begin
        if (!S_AXI_ARESETN) begin
            axi_awready <= 1'b0;
            axi_bvalid  <= 1'b0;
            axi_arready <= 1'b0;
            axi_rvalid  <= 1'b0;
        end else begin
            // Write handshaking
            axi_awready <= (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID);
            if (axi_awready && ~axi_bvalid)
                axi_bvalid <= 1'b1;
            else if (S_AXI_BREADY && axi_bvalid)
                axi_bvalid <= 1'b0;

            // Read handshaking
            axi_arready <= (~axi_arready && S_AXI_ARVALID);
            if (axi_arready && ~axi_rvalid)
                axi_rvalid <= 1'b1;
            else if (axi_rvalid && S_AXI_RREADY)
                axi_rvalid <= 1'b0;
        end
    end


    assign tx_fifo_wr_en = (axi_awready && S_AXI_WVALID && (S_AXI_AWADDR == ADDR_QSPI_DR) && !tx_fifo_full);
    assign rx_fifo_rd_en = (axi_arready && S_AXI_ARVALID && (S_AXI_ARADDR == ADDR_QSPI_DR) && !rx_fifo_empty);
    assign rx_underflow = axi_arready && (S_AXI_ARADDR == ADDR_QSPI_DR) && rx_fifo_empty;
    assign tx_overflow = S_AXI_AWREADY && (S_AXI_AWADDR == ADDR_QSPI_DR) && tx_fifo_full;

    always_ff @(posedge S_AXI_ACLK) begin
        if(!S_AXI_ARESETN) begin
            QSPI_CCR<=32'd0;
            QSPI_ADR<=32'd0;
            QSPI_FCR<=32'd0;
        end
        else begin
            QSPI_FCR<=32'd0;
            if (axi_awready)begin 
                case(S_AXI_AWADDR) 
                ADDR_QSPI_CCR:begin 
                    if(S_AXI_WSTRB[0]) QSPI_CCR[7:0]<=S_AXI_WDATA[7:0];
                    if(S_AXI_WSTRB[1]) QSPI_CCR[15:8]<=S_AXI_WDATA[15:8];
                    if(S_AXI_WSTRB[2]) QSPI_CCR[23:16]<=S_AXI_WDATA[23:16];
                    if(S_AXI_WSTRB[3]) QSPI_CCR[31:24]<=S_AXI_WDATA[31:24]; 
                end
                ADDR_QSPI_ADR:begin 
                    if(S_AXI_WSTRB[0]) QSPI_ADR[7:0]<=S_AXI_WDATA[7:0];
                    if(S_AXI_WSTRB[1]) QSPI_ADR[15:8]<=S_AXI_WDATA[15:8];
                    if(S_AXI_WSTRB[2]) QSPI_ADR[23:16]<=S_AXI_WDATA[23:16];
                    if(S_AXI_WSTRB[3]) QSPI_ADR[31:24]<=S_AXI_WDATA[31:24]; 
                end
                ADDR_QSPI_FCR:begin 
                    if(S_AXI_WSTRB[0]) QSPI_FCR[7:0]<=S_AXI_WDATA[7:0];
                    if(S_AXI_WSTRB[1]) QSPI_FCR[15:8]<=S_AXI_WDATA[15:8];
                    if(S_AXI_WSTRB[2]) QSPI_FCR[23:16]<=S_AXI_WDATA[23:16];
                    if(S_AXI_WSTRB[3]) QSPI_FCR[31:24]<=S_AXI_WDATA[31:24];
                end 
                endcase
            end                     
       end
    end
    
    always_ff @(posedge S_AXI_ACLK) begin 
        if(!S_AXI_ARESETN) begin 
            axi_rdata <= 32'd0;
        end else if (axi_rvalid && S_AXI_RREADY) begin // AXI veri hattı hazırsa
            axi_rdata <= 32'd0; // Bir sonraki çevrim için temizle
        end else if (axi_arready && S_AXI_ARVALID) begin 
            case(S_AXI_ARADDR)
                ADDR_QSPI_CCR:  axi_rdata <= QSPI_CCR;
                ADDR_QSPI_ADR:  axi_rdata <= QSPI_ADR;
                ADDR_QSPI_DR:   axi_rdata <= axi_rx_data; // FIFO'dan gelen veriyi doğrudan bas
                ADDR_QSPI_STA:  axi_rdata <= QSPI_STA;
                ADDR_QSPI_FCR:  axi_rdata <= QSPI_FCR;
                default:        axi_rdata <= 32'd0;
            endcase
        end
    end
    
    always_ff @(posedge S_AXI_ACLK)begin 
        if(!S_AXI_ARESETN)begin 
            axi_error_flags<=4'd0;
        end
        else begin 
            if (S_AXI_AWREADY && S_AXI_WSTRB[3] && S_AXI_WDATA[31] && S_AXI_AWADDR==ADDR_QSPI_CCR) axi_error_flags <= 4'd0;
            else begin 
                if(rx_underflow)begin 
                    axi_error_flags[0]<=1;
                end
                 if(tx_overflow)begin 
                    axi_error_flags[1]<=1;
                end
            
            end
        end
    end

    always_ff @(posedge S_AXI_ACLK) begin
        if(!S_AXI_ARESETN)
            ccr_write_pulse <= 1'b0;
        else
            ccr_write_pulse <= (S_AXI_AWVALID && S_AXI_WVALID &&
                                    S_AXI_AWADDR == ADDR_QSPI_CCR);
    end
    always_ff @(posedge S_AXI_ACLK) begin
        if(!S_AXI_ARESETN)
            start_req <= 1'b0;
        else
            start_req <= ccr_write_pulse;  // tek driver
    end

endmodule

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/13/2026 04:17:36 PM
// Design Name: 
// Module Name: qspi_top
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module qspi_top(
    input logic S_AXI_ACLK,
    input logic S_AXI_ARESETN,
    
    
    output logic sclk,
    output logic cs,
    inout wire qspi_io_0,
    inout wire qspi_io_1,
    inout wire qspi_io_2,
    inout wire qspi_io_3,
    
    
    // AXI-4 Lite Interface
    input logic S_AXI_AWVALID,
    output logic S_AXI_AWREADY,
    input logic [31:0] S_AXI_AWADDR,

    input logic S_AXI_WVALID,
    output logic S_AXI_WREADY,
    input logic [31:0] S_AXI_WDATA,
    input logic [3:0] S_AXI_WSTRB,

    output logic S_AXI_BVALID,
    input logic S_AXI_BREADY,
    output logic [1:0] S_AXI_BRESP,

    input logic S_AXI_ARVALID,
    output logic S_AXI_ARREADY,
    input logic [31:0] S_AXI_ARADDR,

    output logic S_AXI_RVALID,
    input logic S_AXI_RREADY,
    output logic [31:0] S_AXI_RDATA,
    output logic [1:0] S_AXI_RRESP
    );
    
    logic [3:0] qspi_data_i;
    logic [3:0] qspi_data_o;
    logic [3:0] qspi_data_oe;
    
    IOBUF iobuf_inst_0 (.IO(qspi_io_0), .I(qspi_data_o[0]), .O(qspi_data_i[0]), .T(~qspi_data_oe[0]));
    IOBUF iobuf_inst_1 (.IO(qspi_io_1), .I(qspi_data_o[1]), .O(qspi_data_i[1]), .T(~qspi_data_oe[1]));
    IOBUF iobuf_inst_2 (.IO(qspi_io_2), .I(qspi_data_o[2]), .O(qspi_data_i[2]), .T(~qspi_data_oe[2]));
    IOBUF iobuf_inst_3 (.IO(qspi_io_3), .I(qspi_data_o[3]), .O(qspi_data_i[3]), .T(~qspi_data_oe[3]));
    //assign qspi_io_0=qspi_data_oe[0] ? qspi_data_o[0] : 1'bz;
    //assign qspi_io_1=qspi_data_oe[1] ? qspi_data_o[1] : 1'bz;
    //assign qspi_io_2=qspi_data_oe[2] ? qspi_data_o[2] : 1'bz;
    //assign qspi_io_3=qspi_data_oe[3] ? qspi_data_o[3] : 1'bz;
    //assign qspi_data_i ={qspi_io_3,qspi_io_2,qspi_io_1,qspi_io_0};
    

    
    qspi_axi_wrapper wrapper_inst (
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        
        .S_AXI_AWVALID(S_AXI_AWVALID), .S_AXI_AWREADY(S_AXI_AWREADY), .S_AXI_AWADDR(S_AXI_AWADDR),
        .S_AXI_WDATA(S_AXI_WDATA),     .S_AXI_WSTRB(S_AXI_WSTRB), .S_AXI_WVALID(S_AXI_WVALID), .S_AXI_WREADY(S_AXI_WREADY) ,
        .S_AXI_BVALID(S_AXI_BVALID),   .S_AXI_BREADY(S_AXI_BREADY), .S_AXI_BRESP(S_AXI_BRESP),
        
        .S_AXI_ARVALID(S_AXI_ARVALID), .S_AXI_ARREADY(S_AXI_ARREADY), .S_AXI_ARADDR(S_AXI_ARADDR),
        .S_AXI_RVALID(S_AXI_RVALID),   .S_AXI_RREADY(S_AXI_RREADY),   .S_AXI_RDATA(S_AXI_RDATA), .S_AXI_RRESP(S_AXI_RRESP),
        
        .sclk(sclk),
        .cs(cs),
        
        .qspi_data_o(qspi_data_o),
        .qspi_data_i(qspi_data_i),
        .qspi_data_oe(qspi_data_oe)
    );
endmodule


module IOBUF (
    output O,
    inout  IO,
    input  I,
    input  T
);
    assign IO = T ? 1'bz : I;
    assign O = IO;
endmodule
