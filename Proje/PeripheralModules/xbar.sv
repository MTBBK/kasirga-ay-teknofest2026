module xbar(

    // MASTER(core) INTERFACE
    // WRITE ADDRESS CHANNEL
    input wire awvalid_master,
    output wire awready_master,
    input wire [31:0] awaddr_master,

    // WRITE DATA CHANNEL
    input wire wvalid_master,
    output wire wready_master,
    input wire [31:0] wdata_master,
    input wire [3:0] wstrb_master,

    // WRITE RESPONSE CHANNEL
    output wire bvalid_master,
    input wire bready_master,
    output wire [1:0] bresp_master,

    // READ ADDRESS CHANNEL
    input wire arvalid_master,
    output wire arready_master,
    input wire [31:0] araddr_master,

    // READ DATA CHANNEL
    output wire rvalid_master,
    input wire rready_master,
    output wire [1:0] rresp_master,
    output wire [31:0] rdata_master,


    // SLAVE0 (INSTRUCTION_MEMORY)
    // WRITE ADDRESS CHANNEL
    output wire awvalid_slv0,
    input wire awready_slv0,
    output wire [31:0] awaddr_slv0,
    // WRITE DATA CHANNEL
    output wire wvalid_slv0,
    input wire wready_slv0,
    output wire [31:0] wdata_slv0,
    output wire [3:0]  wstrb_slv0,
    // WRITE RESPONSE CHANNEL
    input wire bvalid_slv0,
    output wire bready_slv0,
    input wire [1:0] bresp_slv0,
    // READ ADDRESS CHANNEL
    output wire arvalid_slv0,
    input wire arready_slv0,
    output wire [31:0] araddr_slv0,
    // READ DATA CHANNEL
    input wire rvalid_slv0,
    output wire rready_slv0,
    input wire [1:0] rresp_slv0,
    input wire [31:0] rdata_slv0,

    // SLAVE1 (DATA MEMORY)
    // WRITE ADDRESS CHANNEL
    output wire awvalid_slv1,
    input wire awready_slv1,
    output wire [31:0] awaddr_slv1,
    // WRITE DATA CHANNEL
    output wire wvalid_slv1,
    input wire wready_slv1,
    output wire [31:0] wdata_slv1,
    output wire [3:0]  wstrb_slv1,
    // WRITE RESPONSE CHANNEL
    input wire bvalid_slv1,
    output wire bready_slv1,
    input wire [1:0] bresp_slv1,
    // READ ADDRESS CHANNEL
    output wire arvalid_slv1,
    input wire arready_slv1,
    output wire [31:0] araddr_slv1,
    // READ DATA CHANNEL
    input wire rvalid_slv1,
    output wire rready_slv1,
    input wire [1:0] rresp_slv1,
    input wire [31:0] rdata_slv1,

    // SLAVE2 (GPIO)
    // WRITE ADDRESS CHANNEL
    output wire awvalid_slv2,
    input wire awready_slv2,
    output wire [31:0] awaddr_slv2,
    // WRITE DATA CHANNEL
    output wire wvalid_slv2,
    input wire wready_slv2,
    output wire [31:0] wdata_slv2,
    output wire [3:0] wstrb_slv2,
    // WRITE RESPONSE CHANNEL
    input wire bvalid_slv2,
    output wire bready_slv2,
    input wire [1:0] bresp_slv2,
    // READ ADDRESS CHANNEL
    output wire arvalid_slv2,
    input wire arready_slv2,
    output wire [31:0] araddr_slv2,
    // READ DATA CHANNEL
    input wire rvalid_slv2,
    output wire rready_slv2,
    input wire [1:0] rresp_slv2,
    input wire [31:0] rdata_slv2,

    // SLAVE3 (TIMER)
    // WRITE ADDRESS CHANNEL
    output wire awvalid_slv3,
    input wire awready_slv3,
    output wire [31:0] awaddr_slv3,
    // WRITE DATA CHANNEL
    output wire wvalid_slv3,
    input wire wready_slv3,
    output wire [31:0] wdata_slv3,
    output wire [3:0] wstrb_slv3,
    // WRITE RESPONSE CHANNEL
    input wire bvalid_slv3,
    output wire bready_slv3,
    input wire [1:0] bresp_slv3,
    // READ ADDRESS CHANNEL
    output wire arvalid_slv3,
    input wire arready_slv3,
    output wire [31:0] araddr_slv3,
    // READ DATA CHANNEL
    input wire rvalid_slv3,
    output wire rready_slv3,
    input wire [1:0] rresp_slv3,
    input wire [31:0] rdata_slv3,

    // SLAVE4 (UART)
    // WRITE ADDRESS CHANNEL
    output wire awvalid_slv4,
    input wire awready_slv4,
    output wire [31:0] awaddr_slv4,
    // WRITE DATA CHANNEL
    output wire wvalid_slv4,
    input wire wready_slv4,
    output wire [31:0] wdata_slv4,
    output wire [3:0] wstrb_slv4,
    // WRITE RESPONSE CHANNEL
    input wire bvalid_slv4,
    output wire bready_slv4,
    input wire [1:0] bresp_slv4,
    // READ ADDRESS CHANNEL
    output wire arvalid_slv4,
    input wire arready_slv4,
    output wire [31:0] araddr_slv4,
    // READ DATA CHANNEL
    input wire rvalid_slv4,
    output wire rready_slv4,
    input wire [1:0] rresp_slv4,
    input wire [31:0] rdata_slv4,

    // SLAVE5 (LDPC_UART)
    // WRITE ADDRESS CHANNEL
    output wire awvalid_slv5,
    input wire awready_slv5,
    output wire [31:0] awaddr_slv5,
    // WRITE DATA CHANNEL
    output wire wvalid_slv5,
    input wire wready_slv5,
    output wire [31:0] wdata_slv5,
    output wire [3:0] wstrb_slv5,
    // WRITE RESPONSE CHANNEL
    input wire bvalid_slv5,
    output wire bready_slv5,
    input wire [1:0] bresp_slv5,
    // READ ADDRESS CHANNEL
    output wire arvalid_slv5,
    input wire arready_slv5,
    output wire [31:0] araddr_slv5,
    // READ DATA CHANNEL
    input wire rvalid_slv5,
    output wire rready_slv5,
    input wire [1:0] rresp_slv5,
    input wire [31:0] rdata_slv5,

    // SLAVE6 (I2C)
    // WRITE ADDRESS CHANNEL
    output wire awvalid_slv6,
    input wire awready_slv6,
    output wire [31:0] awaddr_slv6,
    // WRITE DATA CHANNEL
    output wire wvalid_slv6,
    input wire wready_slv6,
    output wire [31:0] wdata_slv6,
    output wire [3:0] wstrb_slv6,
    // WRITE RESPONSE CHANNEL
    input wire bvalid_slv6,
    output wire bready_slv6,
    input wire [1:0] bresp_slv6,
    // READ ADDRESS CHANNEL
    output wire arvalid_slv6,
    input wire arready_slv6,
    output wire [31:0] araddr_slv6,
    // READ DATA CHANNEL
    input wire rvalid_slv6,
    output wire rready_slv6,
    input wire [1:0] rresp_slv6,
    input wire [31:0] rdata_slv6,

    // SLAVE7 (QSPI)
    // WRITE ADDRESS CHANNEL
    output wire awvalid_slv7,
    input wire awready_slv7,
    output wire [31:0] awaddr_slv7,
    // WRITE DATA CHANNEL
    output wire wvalid_slv7,
    input wire wready_slv7,
    output wire [31:0] wdata_slv7,
    output wire [3:0] wstrb_slv7,
    // WRITE RESPONSE CHANNEL
    input wire bvalid_slv7,
    output wire bready_slv7,
    input wire [1:0] bresp_slv7,
    // READ ADDRESS CHANNEL
    output wire arvalid_slv7,
    input wire arready_slv7,
    output wire [31:0] araddr_slv7,
    // READ DATA CHANNEL
    input wire rvalid_slv7,
    output wire rready_slv7,
    input wire [1:0] rresp_slv7,
    input wire [31:0] rdata_slv7,
    
     // SLAVE9 (Hizlandirici)
    // WRITE ADDRESS CHANNEL
    output wire         awvalid_slv8,
    input wire          awready_slv8,
    output wire [31:0]  awaddr_slv8,
    // WRITE DATA CHANNEL
    output wire         wvalid_slv8,
    input wire          wready_slv8,
    output wire [31:0]  wdata_slv8,
    output wire [3:0]   wstrb_slv8,
    // WRITE RESPONSE CHANNEL
    input wire          bvalid_slv8,
    output wire         bready_slv8,
    input wire [1:0]    bresp_slv8,
    // READ ADDRESS CHANNEL
    output wire         arvalid_slv8,
    input wire          arready_slv8,
    output wire [31:0]  araddr_slv8,
    // READ DATA CHANNEL
    input wire          rvalid_slv8,
    output wire         rready_slv8,
    input wire [1:0]    rresp_slv8,
    input wire [31:0]   rdata_slv8,
    
     // SLAVE9 (Hizlandirici)
    // WRITE ADDRESS CHANNEL
    output wire         awvalid_slv9,
    input wire          awready_slv9,
    output wire [31:0]  awaddr_slv9,
    // WRITE DATA CHANNEL
    output wire         wvalid_slv9,
    input wire          wready_slv9,
    output wire [31:0]  wdata_slv9,
    output wire [3:0]   wstrb_slv9,
    // WRITE RESPONSE CHANNEL
    input wire          bvalid_slv9,
    output wire         bready_slv9,
    input wire [1:0]    bresp_slv9,
    // READ ADDRESS CHANNEL
    output wire         arvalid_slv9,
    input wire          arready_slv9,
    output wire [31:0]  araddr_slv9,
    // READ DATA CHANNEL
    input wire          rvalid_slv9,
    output wire         rready_slv9,
    input wire [1:0]    rresp_slv9,
    input wire [31:0]   rdata_slv9
);
    reg [8:0] select_slv;
    always @(*) begin
        select_slv = 10'b0; 

        if (awvalid_master) begin
            if ((awaddr_master[19:12] >= 8'h01) && (awaddr_master[19:12] < 8'h03))select_slv = 10'b0000000001; //SLAVE 0 (Instructıon Mem)
            else if ((awaddr_master[15:12] >= 4'h3)&&(awaddr_master[15:12] <= 4'h4))  select_slv = 10'b0000000010; // SLAVE 1 (Data Mem)
            else if (awaddr_master[15:12] == 4'h7)   select_slv = 10'b0000000100; // SLAVE 2 (GPIO)
            else if (awaddr_master[19:12] == 8'h11)  select_slv = 10'b0000001000; // SLAVE 3 (Timer)
            else if (awaddr_master[15:12] == 4'h5)   select_slv = 10'b0000010000; // SLAVE 4 (UART)
            else if (awaddr_master[15:12] == 4'h6)   select_slv = 10'b0000100000; // SLAVE 5 (UART Stream)
            else if (awaddr_master[15:12] == 4'h8)   select_slv = 10'b0001000000; // SLAVE 6 (I2C)
            else if (awaddr_master[15:12] == 4'h9)   select_slv = 10'b0010000000; // SLAVE 7 (QSPI)
            else if (awaddr_master[19:12] == 8'h10)  select_slv = 10'b0100000000; // SLAVE 8 (JTAG)
            else if (awaddr_master[19:12] == 8'h12)  select_slv = 10'b1000000000; // SLAVE 9 (Hizlandirici)
            else select_slv = 10'b0;
        end
        else if (arvalid_master) begin
            //No read instruction from this channel to slv0
            if ((araddr_master[15:12] >= 4'h3)&&(araddr_master[15:12] <= 4'h4))       select_slv = 10'b0000000010; // SLAVE 1 (Data Mem)
            else if (araddr_master[15:12] == 4'h7)   select_slv = 10'b0000000100; // SLAVE 2 (GPIO)
            else if (araddr_master[19:12] == 8'h11)   select_slv = 10'b0000001000; // SLAVE 3 (Timer)
            else if (araddr_master[15:12] == 4'h5)   select_slv = 10'b0000010000; // SLAVE 4 (UART)
            else if (araddr_master[15:12] == 4'h6)   select_slv = 10'b0000100000; // SLAVE 5 (UART Stream)
            else if (araddr_master[15:12] == 4'h8)   select_slv = 10'b0001000000; // SLAVE 6 (I2C)
            else if (araddr_master[15:12] == 4'h9)   select_slv = 10'b0010000000; // SLAVE 7 (QSPI)
            else if (araddr_master[19:12] == 8'h10)  select_slv = 10'b0100000000; // SLAVE 8 (JTAG)
            else if (araddr_master[19:12] == 8'h12)  select_slv = 10'b1000000000; // SLAVE 9 (Hizlandirici)
            else select_slv = 10'b0;
        end
        else if (bvalid_slv0 || rvalid_slv0) select_slv = 10'b0000000001;
        else if (bvalid_slv1 || rvalid_slv1) select_slv = 10'b0000000010;
        else if (bvalid_slv2 || rvalid_slv2) select_slv = 10'b0000000100;
        else if (bvalid_slv3 || rvalid_slv3) select_slv = 10'b0000001000;
        else if (bvalid_slv4 || rvalid_slv4) select_slv = 10'b0000010000;
        else if (bvalid_slv5 || rvalid_slv5) select_slv = 10'b0000100000;
        else if (bvalid_slv6 || rvalid_slv6) select_slv = 10'b0001000000;
        else if (bvalid_slv7 || rvalid_slv7) select_slv = 10'b0010000000;
        else if (bvalid_slv8 || rvalid_slv8) select_slv = 10'b0100000000;
        else if (bvalid_slv9 || rvalid_slv9) select_slv = 10'b1000000000;
    end

    //Master to Slave Muxing
    //For each slave, signals from the master are passed through if it is selected.
    
    // SLV0
    assign awvalid_slv0 = select_slv[0] & awvalid_master;
    assign awaddr_slv0  = awaddr_master;
    assign wvalid_slv0  = select_slv[0] & wvalid_master;
    assign wdata_slv0   = wdata_master;
    assign wstrb_slv0   = wstrb_master;
    assign bready_slv0  = select_slv[0] & bready_master;
    assign arvalid_slv0 = select_slv[0] & arvalid_master;
    assign araddr_slv0  = araddr_master;
    assign rready_slv0  = select_slv[0] & rready_master;

    // SLV1
    assign awvalid_slv1 = select_slv[1] & awvalid_master;
    assign awaddr_slv1  = awaddr_master;
    assign wvalid_slv1  = select_slv[1] & wvalid_master;
    assign wdata_slv1   = wdata_master;
    assign wstrb_slv1   = wstrb_master;
    assign bready_slv1  = select_slv[1] & bready_master;
    assign arvalid_slv1 = select_slv[1] & arvalid_master;
    assign araddr_slv1  = araddr_master;
    assign rready_slv1  = select_slv[1] & rready_master;

    // SLV2
    assign awvalid_slv2 = select_slv[2] & awvalid_master;
    assign awaddr_slv2  = awaddr_master;
    assign wvalid_slv2  = select_slv[2] & wvalid_master;
    assign wdata_slv2   = wdata_master;
    assign wstrb_slv2   = wstrb_master;
    assign bready_slv2  = select_slv[2] & bready_master;
    assign arvalid_slv2 = select_slv[2] & arvalid_master;
    assign araddr_slv2  = araddr_master;
    assign rready_slv2  = select_slv[2] & rready_master;


    // SLV3
    assign awvalid_slv3 = select_slv[3] & awvalid_master; assign awaddr_slv3 = awaddr_master; assign wvalid_slv3 = select_slv[3] & wvalid_master; assign wdata_slv3 = wdata_master; assign wstrb_slv3 = wstrb_master; assign bready_slv3 = select_slv[3] & bready_master; assign arvalid_slv3 = select_slv[3] & arvalid_master; assign araddr_slv3 = araddr_master; assign rready_slv3 = select_slv[3] & rready_master;
    // SLV4
    assign awvalid_slv4 = select_slv[4] & awvalid_master; assign awaddr_slv4 = awaddr_master; assign wvalid_slv4 = select_slv[4] & wvalid_master; assign wdata_slv4 = wdata_master; assign wstrb_slv4 = wstrb_master; assign bready_slv4 = select_slv[4] & bready_master; assign arvalid_slv4 = select_slv[4] & arvalid_master; assign araddr_slv4 = araddr_master; assign rready_slv4 = select_slv[4] & rready_master;
    // SLV5
    assign awvalid_slv5 = select_slv[5] & awvalid_master; assign awaddr_slv5 = awaddr_master; assign wvalid_slv5 = select_slv[5] & wvalid_master; assign wdata_slv5 = wdata_master; assign wstrb_slv5 = wstrb_master; assign bready_slv5 = select_slv[5] & bready_master; assign arvalid_slv5 = select_slv[5] & arvalid_master; assign araddr_slv5 = araddr_master; assign rready_slv5 = select_slv[5] & rready_master;
    // SLV6
    assign awvalid_slv6 = select_slv[6] & awvalid_master; assign awaddr_slv6 = awaddr_master; assign wvalid_slv6 = select_slv[6] & wvalid_master; assign wdata_slv6 = wdata_master; assign wstrb_slv6 = wstrb_master; assign bready_slv6 = select_slv[6] & bready_master; assign arvalid_slv6 = select_slv[6] & arvalid_master; assign araddr_slv6 = araddr_master; assign rready_slv6 = select_slv[6] & rready_master;
    // SLV7
    assign awvalid_slv7 = select_slv[7] & awvalid_master; assign awaddr_slv7 = awaddr_master; assign wvalid_slv7 = select_slv[7] & wvalid_master; assign wdata_slv7 = wdata_master; assign wstrb_slv7 = wstrb_master; assign bready_slv7 = select_slv[7] & bready_master; assign arvalid_slv7 = select_slv[7] & arvalid_master; assign araddr_slv7 = araddr_master; assign rready_slv7 = select_slv[7] & rready_master;
    //SLV8
    assign awvalid_slv8 = select_slv[8] & awvalid_master; assign awaddr_slv8 = awaddr_master; assign wvalid_slv8 = select_slv[8] & wvalid_master; assign wdata_slv8 = wdata_master; assign wstrb_slv8 = wstrb_master; assign bready_slv8 = select_slv[8] & bready_master; assign arvalid_slv8 = select_slv[8] & arvalid_master; assign araddr_slv8 = araddr_master; assign rready_slv8 = select_slv[8] & rready_master;
    //SLV9
    assign awvalid_slv9 = select_slv[9] & awvalid_master; assign awaddr_slv9 = awaddr_master; assign wvalid_slv9 = select_slv[9] & wvalid_master; assign wdata_slv9 = wdata_master; assign wstrb_slv9 = wstrb_master; assign bready_slv9 = select_slv[9] & bready_master; assign arvalid_slv9 = select_slv[9] & arvalid_master; assign araddr_slv9 = araddr_master; assign rready_slv9 = select_slv[9] & rready_master;    

    //Signals from the selected slave are routed back to the master.

    assign awready_master = (select_slv[0] & awready_slv0) | (select_slv[1] & awready_slv1) |
                            (select_slv[2] & awready_slv2) | (select_slv[3] & awready_slv3) |
                            (select_slv[4] & awready_slv4) | (select_slv[5] & awready_slv5) |
                            (select_slv[6] & awready_slv6) | (select_slv[7] & awready_slv7) |
                            (select_slv[8] & awready_slv8) | (select_slv[9] & awready_slv9);

    assign wready_master  = (select_slv[0] & wready_slv0)  | (select_slv[1] & wready_slv1)  |
                            (select_slv[2] & wready_slv2)  | (select_slv[3] & wready_slv3)  |
                            (select_slv[4] & wready_slv4)  | (select_slv[5] & wready_slv5)  |
                            (select_slv[6] & wready_slv6)  | (select_slv[7] & wready_slv7)  |
                            (select_slv[8] & wready_slv8)  | (select_slv[9] & wready_slv9);

    assign bvalid_master  = (select_slv[0] & bvalid_slv0)  | (select_slv[1] & bvalid_slv1)  |
                            (select_slv[2] & bvalid_slv2)  | (select_slv[3] & bvalid_slv3)  |
                            (select_slv[4] & bvalid_slv4)  | (select_slv[5] & bvalid_slv5)  |
                            (select_slv[6] & bvalid_slv6)  | (select_slv[7] & bvalid_slv7)  |
                            (select_slv[8] & bvalid_slv8)  | (select_slv[9] & bvalid_slv9);

    assign bresp_master   = (select_slv[0] ? bresp_slv0 : 2'b0)   | (select_slv[1] ? bresp_slv1 : 2'b0)   |
                            (select_slv[2] ? bresp_slv2 : 2'b0)   | (select_slv[3] ? bresp_slv3 : 2'b0)   |
                            (select_slv[4] ? bresp_slv4 : 2'b0)   | (select_slv[5] ? bresp_slv5 : 2'b0)   |
                            (select_slv[6] ? bresp_slv6 : 2'b0)   | (select_slv[7] ? bresp_slv7 : 2'b0)   |
                            (select_slv[8] ? bresp_slv8 : 2'b0)   | (select_slv[9] ? bresp_slv9 : 2'b0);

    assign arready_master = (select_slv[0] & arready_slv0) | (select_slv[1] & arready_slv1) |
                            (select_slv[2] & arready_slv2) | (select_slv[3] & arready_slv3) |
                            (select_slv[4] & arready_slv4) | (select_slv[5] & arready_slv5) |
                            (select_slv[6] & arready_slv6) | (select_slv[7] & arready_slv7) |
                            (select_slv[8] & arready_slv8) | (select_slv[9] & arready_slv9);

    assign rvalid_master  = (select_slv[0] & rvalid_slv0)  | (select_slv[1] & rvalid_slv1)  |
                            (select_slv[2] & rvalid_slv2)  | (select_slv[3] & rvalid_slv3)  |
                            (select_slv[4] & rvalid_slv4)  | (select_slv[5] & rvalid_slv5)  |
                            (select_slv[6] & rvalid_slv6)  | (select_slv[7] & rvalid_slv7)  |
                            (select_slv[8] & rvalid_slv8)  | (select_slv[9] & rvalid_slv9);

    assign rresp_master   = (select_slv[0] ? rresp_slv0 : 2'b0)   | (select_slv[1] ? rresp_slv1 : 2'b0)   |
                            (select_slv[2] ? rresp_slv2 : 2'b0)   | (select_slv[3] ? rresp_slv3 : 2'b0)   |
                            (select_slv[4] ? rresp_slv4 : 2'b0)   | (select_slv[5] ? rresp_slv5 : 2'b0)   |
                            (select_slv[6] ? rresp_slv6 : 2'b0)   | (select_slv[7] ? rresp_slv7 : 2'b0)   |
                            (select_slv[8] ? rresp_slv8 : 2'b0)   | (select_slv[9] ? rresp_slv9 : 2'b0);

    assign rdata_master   = (select_slv[0] ? rdata_slv0 : 32'b0)  | (select_slv[1] ? rdata_slv1 : 32'b0)  |
                            (select_slv[2] ? rdata_slv2 : 32'b0)  | (select_slv[3] ? rdata_slv3 : 32'b0)  |
                            (select_slv[4] ? rdata_slv4 : 32'b0)  | (select_slv[5] ? rdata_slv5 : 32'b0)  |
                            (select_slv[6] ? rdata_slv6 : 32'b0)  | (select_slv[7] ? rdata_slv7 : 32'b0)  |
                            (select_slv[8] ? rdata_slv8 : 32'b0)  | (select_slv[9] ? rdata_slv9 : 32'b0);

endmodule

