`ifndef AXI4_SLAVE_IF_SV
`define AXI4_SLAVE_IF_SV
interface axi4_slave_if (input logic aclk, input logic aresetn);
    // Write Address Channel
    logic [31:0] awaddr;
    logic        awvalid;
    logic        awready;

    // Write Data Channel
    logic [31:0] wdata;
    logic [3:0]  wstrb;
    logic        wvalid;
    logic        wready;

    // Write Response Channel
    logic [1:0]  bresp;
    logic        bvalid;
    logic        bready;

    // Read Address Channel
    logic [31:0] araddr;
    logic        arvalid;
    logic        arready;

    // Read Data Channel
    logic [31:0] rdata;
    logic [1:0]  rresp;
    logic        rvalid;
    logic        rready;

    clocking slave_cb @(posedge aclk);
        default input #1ns output #1ns;
        input  awaddr, awvalid, wdata, wstrb, wvalid, bready;
        output awready, wready, bresp, bvalid;
        
        input  araddr, arvalid, rready;
        output arready, rdata, rresp, rvalid;
    endclocking
    
    clocking monitor_cb @(posedge aclk);
        default input #1ns output #1ns;
        input awaddr, awvalid, awready, wdata, wvalid, wready, bresp, bvalid, bready;
        input araddr, arvalid, arready, rdata, rresp, rvalid, rready;
    endclocking
endinterface
`endif

`ifndef UART_CTRL_IF_SV
`define UART_CTRL_IF_SV
interface uart_ctrl_if(input logic clk);
    logic [7:0]  rx_byte;
    logic        rx_byte_valid;
    logic        hw_rx_clear;
    logic        stream_enable;
    
    logic [31:0] tx_start_addr;
    logic        tx_start_trigger;
    logic        tx_dump_done;
    logic [31:0] read_data;
    logic        stream_done;
    
    clocking cb @(posedge clk);
        output rx_byte, rx_byte_valid, stream_enable, tx_start_addr, tx_start_trigger;
        input  hw_rx_clear, tx_dump_done, read_data, stream_done;
    endclocking
endinterface
`endif


package uart_uvm_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    class axi4_slave_item extends uvm_sequence_item;
        rand bit [31:0] addr;
        rand bit [31:0] data;
        rand bit        is_write; 
        
        `uvm_object_utils_begin(axi4_slave_item)
            `uvm_field_int(addr, UVM_ALL_ON)
            `uvm_field_int(data, UVM_ALL_ON)
            `uvm_field_int(is_write, UVM_ALL_ON)
        `uvm_object_utils_end
        
        function new(string name = "axi4_slave_item");
            super.new(name);
        endfunction
    endclass

    class axi4_slave_driver extends uvm_driver #(axi4_slave_item);
        `uvm_component_utils(axi4_slave_driver)
        
        virtual axi4_slave_if vif;
        
        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction
        
        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            if(!uvm_config_db#(virtual axi4_slave_if)::get(this, "", "vif", vif))
                `uvm_fatal("NO_VIF",{"virtual interface must be set for: ",get_full_name(),".vif"});
        endfunction
        
        task run_phase(uvm_phase phase);
            vif.slave_cb.awready <= 1'b0;
            vif.slave_cb.wready  <= 1'b0;
            vif.slave_cb.bvalid  <= 1'b0;
            vif.slave_cb.bresp   <= 2'b00;
            
            vif.slave_cb.arready <= 1'b0;
            vif.slave_cb.rvalid  <= 1'b0;
            vif.slave_cb.rdata   <= 32'd0;
            vif.slave_cb.rresp   <= 2'b00;
            
            fork
                // Write Channel Handler
                forever begin
                    @(vif.slave_cb);
                    vif.slave_cb.awready <= vif.slave_cb.awvalid;
                    vif.slave_cb.wready  <= vif.slave_cb.wvalid;

                    if (vif.slave_cb.awvalid && vif.slave_cb.wvalid) begin
                        @(vif.slave_cb); 
                        vif.slave_cb.awready <= 1'b0;
                        vif.slave_cb.wready  <= 1'b0;

                        vif.slave_cb.bvalid <= 1'b1;
                        vif.slave_cb.bresp  <= 2'b00;
                        
                        // Robust clocked wait for bready
                        do begin
                            @(vif.slave_cb);
                        end while(vif.slave_cb.bready == 1'b0);
                        
                        vif.slave_cb.bvalid <= 1'b0;
                        `uvm_info("SLAVE_DRV", "AXI Write transaction completed", UVM_HIGH)
                    end
                end
                
                // Read Channel Handler
                forever begin
                    @(vif.slave_cb);
                    vif.slave_cb.arready <= vif.slave_cb.arvalid;
                    
                    if (vif.slave_cb.arvalid) begin
                        @(vif.slave_cb);
                        vif.slave_cb.arready <= 1'b0;
                        
                        vif.slave_cb.rvalid <= 1'b1;
                        vif.slave_cb.rdata  <= 32'hDEADBEEF; 
                        vif.slave_cb.rresp  <= 2'b00;
                        
                        // Robust clocked wait for rready
                        do begin
                            @(vif.slave_cb);
                        end while(vif.slave_cb.rready == 1'b0);

                        vif.slave_cb.rvalid <= 1'b0;
                        `uvm_info("SLAVE_DRV", "AXI Read transaction completed", UVM_HIGH)
                    end
                end
            join
        endtask
    endclass

    class axi4_slave_agent extends uvm_agent;
        `uvm_component_utils(axi4_slave_agent)
        axi4_slave_driver driver;
        
        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction
        
        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            driver = axi4_slave_driver::type_id::create("driver", this);
        endfunction
    endclass

    class uart_env extends uvm_env;
        `uvm_component_utils(uart_env)
        axi4_slave_agent axi_agent;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            axi_agent = axi4_slave_agent::type_id::create("axi_agent", this);
        endfunction
    endclass

    class uart_test extends uvm_test;
        `uvm_component_utils(uart_test)
        
        uart_env env;
        virtual uart_ctrl_if ctrl_vif;
        
        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction
        
        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            env = uart_env::type_id::create("env", this);
            if(!uvm_config_db#(virtual uart_ctrl_if)::get(this, "", "ctrl_vif", ctrl_vif))
                `uvm_fatal("NO_VIF",{"virtual interface must be set for: ",get_full_name(),".ctrl_vif"});
        endfunction
        
        task run_phase(uvm_phase phase);
            phase.raise_objection(this);
            
            `uvm_info("TEST", "Starting UART Streamer Test...", UVM_LOW)
            
            ctrl_vif.cb.stream_enable <= 1'b0;
            ctrl_vif.cb.rx_byte_valid <= 1'b0;
            ctrl_vif.cb.rx_byte <= 8'h00;
            ctrl_vif.cb.tx_start_trigger <= 1'b0;
            ctrl_vif.cb.tx_start_addr <= 32'h0001_2000;
            
            repeat(15) @(ctrl_vif.cb);
            
            // Pulse the enable to start collection (prevents the DUT from re-triggering back into COLLECT_BYTES after the run)
            ctrl_vif.cb.stream_enable <= 1'b1;
            @(ctrl_vif.cb);
            ctrl_vif.cb.stream_enable <= 1'b0;
            
            `uvm_info("TEST", "Stream enabled. Sending UART bytes...", UVM_LOW)
            
            fork
                begin
                    for(int i = 0; i < 16; i++) begin
                        @(ctrl_vif.cb);
                        ctrl_vif.cb.rx_byte <= i + 8'hAA; 
                        ctrl_vif.cb.rx_byte_valid <= 1'b1;
                        
                        do begin
                            @(ctrl_vif.cb);
                        end while(ctrl_vif.cb.hw_rx_clear == 1'b0);
                        
                        ctrl_vif.cb.rx_byte_valid <= 1'b0;
                        // Extended wait to emulate realistic UART latency. Without this, the testbench fires the
                        // next valid byte while the DUT is still performing the multi-cycle AXI write transaction.
                        repeat(20) @(ctrl_vif.cb); 
                    end
                end
                begin
                    // Robust clocked monitoring to avoid missing 1-cycle pulses
                    while(1) begin
                        @(ctrl_vif.cb);
                        if(ctrl_vif.cb.stream_done == 1'b1) break;
                    end
                    `uvm_info("TEST", "Stream Done received!", UVM_LOW)
                end
            join
            
            @(ctrl_vif.cb);
            ctrl_vif.cb.tx_start_trigger <= 1'b1;
            @(ctrl_vif.cb);
            ctrl_vif.cb.tx_start_trigger <= 1'b0;
            
            while(1) begin
                @(ctrl_vif.cb);
                if(ctrl_vif.cb.tx_dump_done == 1'b1) break;
            end
            
            `uvm_info("TEST", $sformatf("Read Dump Done! Read Data: %0h", ctrl_vif.cb.read_data), UVM_LOW)

            #1us;
            phase.drop_objection(this);
        endtask
    endclass
endpackage

`timescale 1ns/1ps

module tb_top;
    import uvm_pkg::*;
    import uart_uvm_pkg::*;

    logic clk;
    logic rst;
    
    initial begin
        clk = 0;
        forever #5 clk = ~clk; 
    end
    
    initial begin
        rst = 0;
        #100;
        rst = 1;
    end
    
    axi4_slave_if axi_if (clk, rst);
    uart_ctrl_if ctrl_if (clk);
    
    uart_stream_to_axi #(
        .WRITE_START_ADDR(32'h0001_2000),
        .TOTAL_BYTES(16) 
    ) dut (
        .clk_i(clk),
        .rst_n_i(rst),
        
        .rx_byte_i(ctrl_if.rx_byte),
        .rx_byte_valid_i(ctrl_if.rx_byte_valid),
        .hw_rx_clear_o(ctrl_if.hw_rx_clear),
        .stream_enable_i(ctrl_if.stream_enable),
        .stream_done_o(ctrl_if.stream_done),
        
        .tx_start_addr_i(ctrl_if.tx_start_addr),
        .tx_start_trigger_i(ctrl_if.tx_start_trigger),
        .tx_dump_done_o(ctrl_if.tx_dump_done),
        .read_data_o(ctrl_if.read_data),
        
        .M_AXI_AWADDR(axi_if.awaddr),
        .M_AXI_AWVALID(axi_if.awvalid),
        .M_AXI_AWREADY(axi_if.awready),
        .M_AXI_WDATA(axi_if.wdata),
        .M_AXI_WSTRB(axi_if.wstrb),
        .M_AXI_WVALID(axi_if.wvalid),
        .M_AXI_WREADY(axi_if.wready),
        .M_AXI_BRESP(axi_if.bresp),
        .M_AXI_BVALID(axi_if.bvalid),
        .M_AXI_BREADY(axi_if.bready),
        
        .M_AXI_ARADDR(axi_if.araddr),
        .M_AXI_ARVALID(axi_if.arvalid),
        .M_AXI_ARREADY(axi_if.arready),
        .M_AXI_RDATA(axi_if.rdata),
        .M_AXI_RRESP(axi_if.rresp),
        .M_AXI_RVALID(axi_if.rvalid),
        .M_AXI_RREADY(axi_if.rready)
    );
    
    initial begin
        uvm_config_db#(virtual axi4_slave_if)::set(null, "*", "vif", axi_if);
        uvm_config_db#(virtual uart_ctrl_if)::set(null, "*", "ctrl_vif", ctrl_if);
        run_test("uart_test");
    end
endmodule
