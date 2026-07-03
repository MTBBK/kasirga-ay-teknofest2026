`timescale 1ns / 1ps

module axi4_dma_loader_tb();

    logic clk=0;
    logic rst=1;

    //axi master ports
    logic [31:0] M_AXI_ARADDR;
    logic [4:0] M_AXI_ARLEN;
    logic M_AXI_ARVALID;
    logic M_AXI_ARREADY=0;
    logic [31:0] M_AXI_RDATA=0;
    logic M_AXI_RLAST=0;
    logic M_AXI_RVALID=0;
    logic M_AXI_RREADY;

    //bram ports
    logic [7:0] loader_we;
    logic [9:0] loader_addr;
    logic [63:0] loader_din;

    //control ports
    logic start_loader = 0;
    logic loader_done;

    axi4_dma_loader DUT (
        .clk(clk), 
        .rst(rst),
        .M_AXI_ARADDR(M_AXI_ARADDR), 
        .M_AXI_ARLEN(M_AXI_ARLEN),
        .M_AXI_ARVALID(M_AXI_ARVALID), 
        .M_AXI_ARREADY(M_AXI_ARREADY),
        .M_AXI_RDATA(M_AXI_RDATA),
        .M_AXI_RLAST(M_AXI_RLAST), 
        .M_AXI_RVALID(M_AXI_RVALID),
        .M_AXI_RREADY(M_AXI_RREADY),
        .loader_we(loader_we), 
        .loader_addr(loader_addr), 
        .loader_din(loader_din),
        .start_loader(start_loader), 
        .loader_done(loader_done)
    );

    always #5 clk=~clk;
    
    //a temporary 64-bit array to match the format of the memory file
    logic [63:0] temp_file_mem [0:4095]; 
    
    //8-bit byte array for the axi bus
    logic [7:0] input_file_mem [0:32767]; 

    initial begin
        //clearing both of the memories 
        for (int i=0; i<4096; i++) temp_file_mem[i]=64'h0;
        for (int i=0; i<32768; i++) input_file_mem[i]=8'h0;
        
        //loading 64-bit hex data into the temporary array
        $readmemh("input_data.mem",temp_file_mem);
        
        //unpack the 64 bit lines in little endian format
        for (int i=0; i<4096; i++) begin
            input_file_mem[i*8+0]=temp_file_mem[i][7:0]; 
            input_file_mem[i*8+1]=temp_file_mem[i][15:8];
            input_file_mem[i*8+2]=temp_file_mem[i][23:16];
            input_file_mem[i*8+3]=temp_file_mem[i][31:24];
            input_file_mem[i*8+4]=temp_file_mem[i][39:32];
            input_file_mem[i*8+5]=temp_file_mem[i][47:40];
            input_file_mem[i*8+6]=temp_file_mem[i][55:48];
            input_file_mem[i*8+7]=temp_file_mem[i][63:56];
        end
        
        $display("memory got unpacked");
    end
    //mock axi slave logic
    logic [4:0] burst_count=0;
    logic [4:0] expected_len=0;
    logic [31:0] current_addr=0; 
    
    //base address offset for the memory translation
    logic [31:0] BASE_ADDR=32'h0001_2000; 

    always_ff @(posedge clk) begin
        if (rst) begin
            M_AXI_ARREADY<=1'b0;
            M_AXI_RVALID<=1'b0;
        end else begin
            //1. accept address
            if (M_AXI_ARVALID && !M_AXI_ARREADY && !M_AXI_RVALID) begin
                M_AXI_ARREADY<=1'b1;
                expected_len<=M_AXI_ARLEN;
                burst_count<=0;
                
                //subtract BASE_ADDR to index cleanly into our array starting at 0
                current_addr<=M_AXI_ARADDR-BASE_ADDR; 
            end else begin
                M_AXI_ARREADY<=1'b0;
            end

            //2. send data from the memory file
            if (M_AXI_ARREADY && M_AXI_ARVALID) begin
                M_AXI_RVALID<=1'b1;
                
                //fetch first 4 bytes using the offset address
                M_AXI_RDATA<={input_file_mem[(M_AXI_ARADDR-BASE_ADDR)+3],
                              input_file_mem[(M_AXI_ARADDR-BASE_ADDR)+2],
                              input_file_mem[(M_AXI_ARADDR-BASE_ADDR)+1],
                              input_file_mem[(M_AXI_ARADDR-BASE_ADDR)+0]};
                M_AXI_RLAST<=(M_AXI_ARLEN==0);
                
                //advance pointer by 4 bytes
                current_addr<=(M_AXI_ARADDR-BASE_ADDR)+4; 
                
            end else if (M_AXI_RVALID && M_AXI_RREADY) begin
                if (M_AXI_RLAST) begin
                    M_AXI_RVALID<=1'b0;
                    M_AXI_RLAST<=1'b0;
                end else begin
                    burst_count<=burst_count+1;
                    
                    //fetch next 4 bytes using the advanced pointer
                    M_AXI_RDATA<={input_file_mem[current_addr+3],
                                  input_file_mem[current_addr+2],
                                  input_file_mem[current_addr+1],
                                  input_file_mem[current_addr+0]};
                    M_AXI_RLAST<=(burst_count+1 == expected_len);
                    
                    //advance pointer by 4 bytes
                    current_addr<=current_addr+4; 
                end
            end
        end
    end
    
    //use buffer_byte_en
    logic [9:0] tb_raddr=0;
    logic [63:0] tb_dout;

    
    buffer_byte_en DUT_buffer (
        .clk(clk),
        .write_enable(loader_we),
        .waddr(loader_addr),
        .raddr(tb_raddr),
        .din(loader_din),
        .dout(tb_dout)
    );
    
    task print_padded_memory();
        $display("padded memory");
        
        for (int i = 0; i < 334; i++) begin
            //give the buffer the address we want to read
            tb_raddr=i;      
            
            //wait for the clock edge so the buffer can process the read
            @(posedge clk);    
            
            //wait 1 nanosecond for the dout to update
            #1;                
            
            //print the 64 bit string
            $display("%016X", tb_dout);
        end
    endtask
    //test sequence
    initial begin
            
        #20 rst = 0; #10;
        
        $display("starting DMA loader");
        @(posedge clk) start_loader=1;
        @(posedge clk) start_loader=0;

        wait(loader_done);
        $display("[time: %0t] loader done", $time);

        print_padded_memory();

        #50;
        $finish;
    end
endmodule
