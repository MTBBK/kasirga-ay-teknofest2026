`timescale 1ns / 1ps

module tb_golden_slave;

// parameters
localparam CLK_PERIOD=20;
localparam SCL_PERIOD=2500;
localparam SLAVE_ADDR=7'h48;
localparam SLAVE_MASK=7'h7f;

// signals
logic clk=0;
logic rst=1;

logic [7:0] s_axis_tdata=8'h00;
logic s_axis_tvalid=0;
wire s_axis_tready;

wire [7:0] m_axis_tdata;
wire m_axis_tvalid;
logic m_axis_tready=1;
wire m_axis_tlast;

logic scl_master=1;
logic sda_master=1;
wire scl_slave_o; 
wire scl_slave_t;
wire sda_slave_o; 
wire sda_slave_t;

wire scl_bus=scl_master & (scl_slave_t ? 1'b1 : scl_slave_o);
wire sda_bus=sda_master & (sda_slave_t ? 1'b1 : sda_slave_o);

logic enable=1;
logic release_bus=0;

// dut
i2c_golden_slave #(.FILTER_LEN(4)) dut (
    .clk(clk),
    .rst(rst),
    .release_bus(release_bus),
    .s_axis_data_tdata(s_axis_tdata),
    .s_axis_data_tvalid(s_axis_tvalid),
    .s_axis_data_tready(s_axis_tready),
    .m_axis_data_tdata(m_axis_tdata),
    .m_axis_data_tvalid(m_axis_tvalid),
    .m_axis_data_tready(m_axis_tready),
    .m_axis_data_tlast(m_axis_tlast),
    .scl_i(scl_bus),
    .scl_o(scl_slave_o),
    .scl_t(scl_slave_t),
    .sda_i(sda_bus),
    .sda_o(sda_slave_o),
    .sda_t(sda_slave_t),
    .busy(),
    .bus_address(),
    .bus_addressed(),
    .bus_active(),
    .enable(enable),
    .device_address(SLAVE_ADDR),
    .device_address_mask(SLAVE_MASK)
);

//clock
always #(CLK_PERIOD/2) clk=~clk;

// received byte capture 
logic [7:0] received_bytes [0:15];
int rx_count=0;

always @(posedge clk) begin
    if (m_axis_tvalid && m_axis_tready) begin
        received_bytes[rx_count] = m_axis_tdata;
        rx_count++;
        $display("[%0t ns] Slave received byte: 0x%02X (last=%b)",
                 $time, m_axis_tdata, m_axis_tlast);
    end
end

//I2C master tasks 
task scl_half();
    #(SCL_PERIOD/2);
endtask

task i2c_start();
    sda_master = 1; 
    scl_master = 1; 
    scl_half();
    sda_master = 0;                 
    scl_half();
    scl_master = 0;                 
    scl_half();
endtask

task i2c_stop();
    sda_master = 0; 
    scl_master = 0; 
    scl_half();
    scl_master = 1;                 
    scl_half();
    sda_master = 1;                 
    scl_half();
endtask

task automatic i2c_send_byte(input logic [7:0] data, output logic ack);
    int i;
    for(i = 7; i >= 0; i--) begin
        sda_master=data[i];
        scl_master=0; 
        scl_half();
        scl_master=1; 
        scl_half();
        scl_master=0; 
        scl_half();
    end
    sda_master=1;
    scl_master=1; 
    scl_half();
    ack=sda_bus;
    scl_master=0; 
    scl_half();
endtask

task automatic i2c_recv_byte(output logic [7:0] data, input logic send_nack);
    int i;
    sda_master=1;
    data=8'h00;
    for(i = 7; i >= 0; i--) begin
        scl_master=0; 
        scl_half();
        scl_master=1; 
        scl_half();
        data[i]=sda_bus;
        scl_master = 0; 
        scl_half();
    end
    sda_master=send_nack;
    scl_master=1; 
    scl_half();
    scl_master=0; 
    scl_half();
    sda_master=1;
endtask

// testing
logic ack_bit;
logic [7:0] read_data;
int pass_count=0;
int fail_count=0;

initial begin
    rst=1;
    repeat(10) @(posedge clk);
    rst=0;
    repeat(5)  @(posedge clk);

    // test 1: 1 byte write
    $display("\ntest-1 master writes 0xAB to slave addr 0x48");   
    rx_count=0;

    i2c_start();
    i2c_send_byte({SLAVE_ADDR, 1'b0},ack_bit);
    i2c_send_byte(8'hAB, ack_bit);
    i2c_stop();
    repeat(20) @(posedge clk);

    if (rx_count == 1 && received_bytes[0] == 8'hAB) begin
        $display("pass, received 0xAB correctly");
        pass_count++;
    end else begin
        $display("fail, expected 0xAB");
        fail_count++;
    end
 
    // test 2: 2 byte write
    $display("\ntest-2 master writes 2 bytes: 0x11, 0x22");
    rx_count=0;
 
    i2c_start();
    i2c_send_byte({SLAVE_ADDR, 1'b0},ack_bit);
    i2c_send_byte(8'h11, ack_bit);
    i2c_send_byte(8'h22, ack_bit);
    i2c_stop();
    repeat(20) @(posedge clk);
 
    if (rx_count==2 && received_bytes[0]==8'h11 && received_bytes[1]==8'h22) begin
        $display("pass, received 0x11 and 0x22 correctly");
        pass_count++;
    end else begin
        $display("fail, expected 0x11 and 0x22");
        fail_count++;
    end
 
    // test 3: 1 byte read
    $display("\ntest-3 master reads 1 byte from slave (expect 0x5A)");
 
    fork
        begin
            i2c_start();
            i2c_send_byte({SLAVE_ADDR, 1'b1},ack_bit);
            i2c_recv_byte(read_data, 1'b1);
            i2c_stop();
        end
        begin
            wait(s_axis_tready===1'b1);
            @(posedge clk);
            s_axis_tdata =8'h5A;
            s_axis_tvalid=1;
            @(posedge clk);
            s_axis_tvalid=0;
        end
    join
 
    repeat(20) @(posedge clk);
 
    if(read_data==8'h5A)begin
        $display("pass, master received 0x5A");
        pass_count++;
    end else begin
        $display("fail, expected 0x5A");
        fail_count++;
    end
 
    // tets 4: wrong address, no response 
    $display("\ntest-4 writes to wrong address 0x55 (expect no ACK)");
    rx_count = 0;
 
    i2c_start();
    i2c_send_byte({7'h55, 1'b0},ack_bit);
    i2c_stop();
    repeat(10) @(posedge clk);
 
    if (ack_bit==1'b1 && rx_count==0) begin
        $display("pass, slave correctly ignored wrong address");
        pass_count++;
    end else begin
        $display("fail, slave responded to wrong address");
        fail_count++;
    end
 
    // total results
    $display("\nresults: %0d passed, %0d failed", pass_count, fail_count);
    if (fail_count == 0)
        $display("all passed");
    else
        $display("some failed");
 
    $finish;
end
 
// timeout
initial begin
    #500_000_000;
    $display("timeout: simulation exceeded limit");
    $finish;
end
 
endmodule
 
