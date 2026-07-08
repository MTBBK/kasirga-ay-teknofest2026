`timescale 1ns / 1ps

module uart_stream_to_axi #(
    parameter logic [31:0] WRITE_START_ADDR = 32'h0001_2000, 
    parameter int          TOTAL_BYTES      = 2256        
)(
    input  logic        clk_i,
    input  logic        rst_n_i,

    input  logic [7:0]  rx_byte_i,        
    input  logic        rx_byte_valid_i,  
    
    input  logic [31:0] tx_start_addr_i,
    input  logic        tx_start_trigger_i,
    output logic        tx_dump_done_o,
    output logic [31:0] read_data_o,

    // WRITE Channels
    output logic [31:0] M_AXI_AWADDR,
    output logic        M_AXI_AWVALID,
    input  logic        M_AXI_AWREADY,

    output logic [31:0] M_AXI_WDATA,
    output logic [3:0]  M_AXI_WSTRB,
    output logic        M_AXI_WVALID,
    input  logic        M_AXI_WREADY,

    input  logic [1:0]  M_AXI_BRESP,
    input  logic        M_AXI_BVALID,
    output logic        M_AXI_BREADY,
    
    // READ Channels
    output logic [31:0] M_AXI_ARADDR,
    output logic        M_AXI_ARVALID,
    input  logic        M_AXI_ARREADY,
    
    input  logic [31:0] M_AXI_RDATA,
    input  logic [1:0]  M_AXI_RRESP,
    input  logic        M_AXI_RVALID,
    output logic        M_AXI_RREADY,

    output logic        stream_done_o
);

    assign M_AXI_WSTRB = 4'b1111;
    logic [31:0] word_buffer;
    logic [1:0]  byte_cnt;
    logic [31:0] byte_total_counter;
    logic [31:0] current_address;
    
    logic [31:0] read_addr_reg;
    
    typedef enum logic [2:0] {
        IDLE,
        COLLECT_BYTES,
        AXI_WRITE_REQ,
        AXI_WRITE_RESP,
        AXI_READ_REQ,
        AXI_READ_RESP
    } state_t;

    state_t state;

    always_ff @(posedge clk_i) begin 
        if(!rst_n_i) begin 
            stream_done_o      <= 'd0;
            M_AXI_WDATA        <= 'd0;
            M_AXI_WVALID       <= 'd0;            
            M_AXI_AWADDR       <= 'd0;
            M_AXI_AWVALID      <= 'd0;
            M_AXI_BREADY       <= 'd0;
            current_address    <= WRITE_START_ADDR;
            byte_cnt           <= 'd0;
            word_buffer        <= 'd0;
            byte_total_counter <= 'd0;
            M_AXI_ARADDR       <= '0;
            state              <= IDLE;
            read_addr_reg      <= '0;   
            M_AXI_ARVALID      <= '0;
            M_AXI_RREADY       <= '0;
            tx_dump_done_o     <= '0;
            read_data_o        <= '0;
        end
        else begin 
            case(state)
                IDLE: begin
                    stream_done_o  <= 'd0;
                    tx_dump_done_o <= 1'b0;
                    if(tx_start_trigger_i) begin
                        read_addr_reg <= tx_start_addr_i;
                        M_AXI_ARVALID <= 1'b1;
                        state         <= AXI_READ_REQ;                        
                    end
                    else begin 
                        current_address    <= WRITE_START_ADDR;
                        byte_cnt           <= 'd0;
                        word_buffer        <= 'd0;
                        byte_total_counter <= 'd0;
                        state              <= COLLECT_BYTES;  
                    end
                end
                
                COLLECT_BYTES: begin 
                    if(rx_byte_valid_i) begin 
                        word_buffer <= {rx_byte_i, word_buffer[31:8]};
                        byte_cnt <= byte_cnt + 1;
                        byte_total_counter <= byte_total_counter + 1;
                        
                        if(byte_cnt == 2'd3 || byte_total_counter == TOTAL_BYTES - 1) begin 
                            state         <= AXI_WRITE_REQ;
                            M_AXI_AWVALID <= 1'b1;
                            M_AXI_WVALID  <= 1'b1;
                            M_AXI_AWADDR <= current_address;
                            M_AXI_WDATA  <= word_buffer;
                            M_AXI_BREADY <= 1'b1;
                        end
                    end                
                end
                
                AXI_WRITE_REQ: begin 
                    

                    if (M_AXI_AWREADY && M_AXI_AWVALID) M_AXI_AWVALID <= 1'b0;
                    if (M_AXI_WREADY  && M_AXI_WVALID)  M_AXI_WVALID  <= 1'b0;

                    // İki kanalın işlemi de bittiyse (veya bitmiş haldeyse) RESP'e geç
                    if ((!M_AXI_AWVALID || M_AXI_AWREADY) && (!M_AXI_WVALID || M_AXI_WREADY)) begin
                         // Response'u almaya hazırız
                        state <= AXI_WRITE_RESP;
                    end
                end
                
                AXI_WRITE_RESP: begin 
                    if(M_AXI_BVALID && M_AXI_BREADY) begin 
                        M_AXI_BREADY <= 1'b0;
                        current_address <= current_address + 4;
                        word_buffer <= 32'd0;
                        byte_cnt <= 'd0;
                        
                        // Tüm baytlar yazıldıysa işlemi bitir
                        if(byte_total_counter >= TOTAL_BYTES) begin 
                            stream_done_o <= 1'b1;
                            state <= IDLE;
                        end
                        else begin 
                            state <= COLLECT_BYTES;
                        end
                    end 
                end
                
                AXI_READ_REQ: begin 
                    M_AXI_ARADDR <= read_addr_reg;
                    
                    if(M_AXI_ARREADY && M_AXI_ARVALID) begin 
                        M_AXI_ARVALID <= 1'b0; 
                        M_AXI_RREADY  <= 1'b1; 
                        state         <= AXI_READ_RESP;
                    end
                end
                
                AXI_READ_RESP: begin 
                    if(M_AXI_RREADY && M_AXI_RVALID) begin 
                        read_data_o    <= M_AXI_RDATA;
                        tx_dump_done_o <= 1'b1;
                        M_AXI_RREADY   <= 1'b0;
                        state          <= IDLE;
                    end 
                end
                
                default: state <= IDLE;
            endcase
        end
    end
endmodule