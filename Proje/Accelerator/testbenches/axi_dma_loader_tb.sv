`timescale 1ns / 1ps

module axi4_dma_loader_tb();

    logic clk = 0;
    logic rst = 1;

    //axi master ports
    logic [31:0] M_AXI_ARADDR;
    logic [7:0] M_AXI_ARLEN;
    logic [2:0] M_AXI_ARSIZE;
    logic [1:0] M_AXI_ARBURST;
    logic M_AXI_ARVALID;
    logic M_AXI_ARREADY = 0;
    logic [31:0] M_AXI_RDATA = 0;
    logic [1:0] M_AXI_RRESP = 0;
    logic M_AXI_RLAST = 0;
    logic M_AXI_RVALID = 0;
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
        .M_AXI_ARSIZE(M_AXI_ARSIZE), 
        .M_AXI_ARBURST(M_AXI_ARBURST),
        .M_AXI_ARVALID(M_AXI_ARVALID), 
        .M_AXI_ARREADY(M_AXI_ARREADY),
        .M_AXI_RDATA(M_AXI_RDATA), 
        .M_AXI_RRESP(M_AXI_RRESP),
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

    //mock 30kB shared memory
    
    logic [7:0] burst_count=0;
    logic [7:0] expected_len=0;
    logic [7:0] pixel_val=8'h01; //starts at 01, 02, 03...

    always_ff @(posedge clk) begin
        if (rst) begin
            M_AXI_ARREADY<=1'b0;
            M_AXI_RVALID<=1'b0;
            pixel_val<=8'h01;
        end else begin
            //1. accept address
            if (M_AXI_ARVALID && !M_AXI_ARREADY && !M_AXI_RVALID) begin
                M_AXI_ARREADY<=1'b1;
                expected_len<=M_AXI_ARLEN;
                burst_count<=0;
            end else begin
                M_AXI_ARREADY<=1'b0;
            end

            //2. send predictable data (4 bytes at a time)
            if (M_AXI_ARREADY && M_AXI_ARVALID) begin
                M_AXI_RVALID<=1'b1;
                //size the additions to 8 bits to prevent 32-bit expansion
                M_AXI_RDATA<={pixel_val+8'd3, pixel_val+8'd2, pixel_val+8'd1, pixel_val}; 
                M_AXI_RLAST<=(expected_len == 0);
            end else if (M_AXI_RVALID && M_AXI_RREADY) begin
                if (M_AXI_RLAST) begin
                    M_AXI_RVALID<=1'b0;
                    M_AXI_RLAST<=1'b0;
                    pixel_val<=pixel_val + 8'd4; //move to next 4 pixels
                end else begin
                    burst_count<=burst_count + 1;
                    pixel_val<=pixel_val + 8'd4; //move to next 4 pixels
                    //size the additions to 8 bits
                    M_AXI_RDATA<={pixel_val+8'd7, pixel_val+8'd6, pixel_val+8'd5, pixel_val+8'd4}; 
                    M_AXI_RLAST<=(burst_count + 1 == expected_len);
                end
            end
        end
    end

    //mock local buffer_byte_en 
    
    logic [63:0] mock_ram [0:511];
    always_ff @(posedge clk) begin
        for (int i = 0; i < 8; i++) begin
            if (loader_we[i]) begin
                mock_ram[loader_addr][i*8 +: 8]<=loader_din[i*8 +: 8];
            end
        end
    end
    
    //visualizer task
  
    task print_padded_memory();
        $display("padded memory");
        $display("addr | byte7 byte6 byte5 byte4 byte3 byte2 byte1 byte0 ");
        $display("-------------------------------------------------------");
        // 333 to (because 46*58=2668 and 2668/8=333.5) display the entire buffer
        for (int i = 0; i < 334; i++) begin
            $display(" %3d |   %h    %h    %h    %h    %h    %h    %h    %h", 
                i,
                mock_ram[i][63:56], mock_ram[i][55:48], mock_ram[i][47:40], mock_ram[i][39:32],
                mock_ram[i][31:24], mock_ram[i][23:16], mock_ram[i][15:8],  mock_ram[i][7:0]
            );
        end
    endtask

    //test sequence
 
    initial begin
        //reset the ram to all zeros so we know the 80s are really being written
        for (int i=0; i<512; i++) mock_ram[i] = 64'd0;
        
        #20 rst = 0; #10;
        
        $display("starting DMA loader");
        @(posedge clk) start_loader = 1;
        @(posedge clk) start_loader = 0;

        wait(loader_done);
        $display("[time: %0t] loader done", $time);

        //call the visualizer
        print_padded_memory();

        #50;
        $finish;
    end
endmodule