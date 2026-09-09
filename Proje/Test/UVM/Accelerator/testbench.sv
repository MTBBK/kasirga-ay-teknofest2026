`ifndef AXI4_SLAVE_IF_SV
`define AXI4_SLAVE_IF_SV

interface axi4_slave_if (input logic aclk, input logic aresetn);
    // Read Address Channel
    logic [31:0] araddr;
    logic [7:0]  arlen;
    logic        arvalid;
    logic        arready;

    // Read Data Channel
    logic [31:0] rdata;
    logic        rlast;
    logic        rvalid;
    logic        rready;

    clocking slave_cb @(posedge aclk);
        default input #1ns output #1ns;
        input  araddr, arlen, arvalid, rready;
        output arready, rdata, rlast, rvalid;
    endclocking
    
    clocking monitor_cb @(posedge aclk);
        default input #1ns output #1ns;
        input araddr, arlen, arvalid, arready, rdata, rlast, rvalid, rready;
    endclocking
endinterface

`endif


`ifndef ACCEL_CTRL_IF_SV
`define ACCEL_CTRL_IF_SV

interface accel_ctrl_if(input logic clk);
    logic start_loader;
    logic loader_done;
    
    clocking cb @(posedge clk);
        output start_loader;
        input  loader_done;
    endclocking
endinterface

`endif


package accel_uvm_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

`ifndef AXI4_SLAVE_ITEM_SV
`define AXI4_SLAVE_ITEM_SV

class axi4_slave_item extends uvm_sequence_item;
    rand bit [31:0] addr;
    rand bit [7:0]  len;
    
    // We only care about observing what the master requested
    
    `uvm_object_utils_begin(axi4_slave_item)
        `uvm_field_int(addr, UVM_ALL_ON)
        `uvm_field_int(len,  UVM_ALL_ON)
    `uvm_object_utils_end
    
    function new(string name = "axi4_slave_item");
        super.new(name);
    endfunction
endclass

`endif


`ifndef AXI4_SLAVE_DRIVER_SV
`define AXI4_SLAVE_DRIVER_SV

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
        bit [31:0] current_addr;
        int burst_len;
        int data_counter;
        
        data_counter = 32'h1000; // Starting dummy data

        // Initialize signals
        vif.slave_cb.arready <= 1'b0;
        vif.slave_cb.rvalid  <= 1'b0;
        vif.slave_cb.rlast   <= 1'b0;
        vif.slave_cb.rdata   <= 32'd0;
        
        forever begin
            // 1. Wait for ARVALID
            @(vif.slave_cb);
            if (vif.slave_cb.arvalid) begin
                // Accept the address
                vif.slave_cb.arready <= 1'b1;
                current_addr = vif.slave_cb.araddr;
                burst_len = vif.slave_cb.arlen + 1; // ARLEN is exact length - 1
                
                @(vif.slave_cb);
                vif.slave_cb.arready <= 1'b0; // Deassert after 1 cycle
                
                `uvm_info("SLAVE_DRV", $sformatf("Received AR Request: ADDR=%0h, LEN=%0d", current_addr, burst_len), UVM_LOW)
                
                // 2. Drive R Channel Burst
                for (int i = 0; i < burst_len; i++) begin
                    vif.slave_cb.rvalid <= 1'b1;
                    vif.slave_cb.rdata  <= data_counter;
                    vif.slave_cb.rlast  <= (i == burst_len - 1) ? 1'b1 : 1'b0;
                    
                    data_counter += 1;
                    
                    // Wait for RREADY from master
                    do begin
                        @(vif.slave_cb);
                    end while (vif.slave_cb.rready == 1'b0);
                end
                
                // Clear R signals
                vif.slave_cb.rvalid <= 1'b0;
                vif.slave_cb.rlast  <= 1'b0;
                vif.slave_cb.rdata  <= 32'd0;
                
                `uvm_info("SLAVE_DRV", "Burst Read Completed.", UVM_HIGH)
            end
        end
    endtask
endclass

`endif


`ifndef AXI4_SLAVE_MONITOR_SV
`define AXI4_SLAVE_MONITOR_SV

class axi4_slave_monitor extends uvm_monitor;
    `uvm_component_utils(axi4_slave_monitor)
    
    virtual axi4_slave_if vif;
    uvm_analysis_port #(axi4_slave_item) ap;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if(!uvm_config_db#(virtual axi4_slave_if)::get(this, "", "vif", vif))
            `uvm_fatal("NO_VIF",{"virtual interface must be set for: ",get_full_name(),".vif"});
    endfunction
    
    task run_phase(uvm_phase phase);
        axi4_slave_item item;
        forever begin
            @(vif.monitor_cb);
            if (vif.monitor_cb.arvalid && vif.monitor_cb.arready) begin
                item = axi4_slave_item::type_id::create("item");
                item.addr = vif.monitor_cb.araddr;
                item.len  = vif.monitor_cb.arlen;
                ap.write(item);
                `uvm_info("SLAVE_MON", $sformatf("Observed AR Request: ADDR=%0h, LEN=%0d", item.addr, item.len), UVM_HIGH)
            end
        end
    endtask
endclass

`endif


`ifndef AXI4_SLAVE_AGENT_SV
`define AXI4_SLAVE_AGENT_SV

class axi4_slave_agent extends uvm_agent;
    `uvm_component_utils(axi4_slave_agent)
    
    axi4_slave_driver  driver;
    axi4_slave_monitor monitor;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        driver = axi4_slave_driver::type_id::create("driver", this);
        monitor = axi4_slave_monitor::type_id::create("monitor", this);
    endfunction
    
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
    endfunction
endclass

`endif


`ifndef ACCEL_ENV_SV
`define ACCEL_ENV_SV

class accel_env extends uvm_env;
    `uvm_component_utils(accel_env)

    axi4_slave_agent axi_agent;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        axi_agent = axi4_slave_agent::type_id::create("axi_agent", this);
    endfunction

endclass

`endif


`ifndef ACCEL_TEST_SV
`define ACCEL_TEST_SV

class accel_test extends uvm_test;
    `uvm_component_utils(accel_test)
    
    accel_env env;
    virtual accel_ctrl_if ctrl_vif;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = accel_env::type_id::create("env", this);
        if(!uvm_config_db#(virtual accel_ctrl_if)::get(this, "", "ctrl_vif", ctrl_vif))
            `uvm_fatal("NO_VIF",{"virtual interface must be set for: ",get_full_name(),".ctrl_vif"});
    endfunction
    
    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting AI Accelerator DMA Loader Test...", UVM_LOW)
        
        // Wait a few clocks (ensure reset is deasserted, which takes 100ns / 10 clocks)
        repeat(20) @(ctrl_vif.cb);
        
        // Trigger the loader
        `uvm_info("TEST", "Asserting start_loader...", UVM_LOW)
        ctrl_vif.cb.start_loader <= 1'b1;
        
        // Wait 1 clock and deassert (loader expects a pulse or stable high? The FSM triggers on start_loader)
        @(ctrl_vif.cb);
        ctrl_vif.cb.start_loader <= 1'b0;
        
        // Wait for loader_done to assert
        `uvm_info("TEST", "Waiting for loader_done...", UVM_LOW)
        
        // We add a timeout mechanism
        fork
            begin
                while(ctrl_vif.cb.loader_done == 1'b0) begin
                    @(ctrl_vif.cb);
                end
                `uvm_info("TEST", "SUCCESS: loader_done asserted!", UVM_LOW)
            end
            begin
                #100us;
                `uvm_error("TEST", "TIMEOUT: loader_done did not assert within 100us!")
            end
        join_any
        disable fork; // stop the timeout if we succeeded
        
        `uvm_info("TEST", "AI Accelerator DMA Loader Test Completed.", UVM_LOW)
        
        phase.drop_objection(this);
    endtask
endclass

`endif


endpackage

`timescale 1ns/1ps


module tb_top;

    import uvm_pkg::*;
    import accel_uvm_pkg::*;

    logic clk;
    logic rst;
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz
    end
    
    // Reset generation
    initial begin
        rst = 1;
        #100;
        rst = 0;
    end
    
    // Interfaces
    axi4_slave_if axi_if (clk, ~rst); // aresetn is active low, rst is active high
    accel_ctrl_if ctrl_if (clk);
    
    // DUT
    axi4_dma_loader #(
        .PADDED_W(46),
        .PADDED_H(58),
        .REAL_W(40),
        .REAL_H(49),
        .PAD_LEFT(3),
        .PAD_TOP(4),
        .PAD_VAL(8'h80),
        .BASE_ADDR(32'h0001_2000)
    ) dut (
        .clk(clk),
        .rst(rst),
        
        // AXI Master
        .M_AXI_ARADDR(axi_if.araddr),
        .M_AXI_ARLEN(axi_if.arlen),
        .M_AXI_ARVALID(axi_if.arvalid),
        .M_AXI_ARREADY(axi_if.arready),
        .M_AXI_RDATA(axi_if.rdata),
        .M_AXI_RLAST(axi_if.rlast),
        .M_AXI_RVALID(axi_if.rvalid),
        .M_AXI_RREADY(axi_if.rready),
        
        // Local Buffer (Ignored/Monitored externally)
        .loader_we(),
        .loader_addr(),
        .loader_din(),
        
        // Control
        .start_loader(ctrl_if.start_loader),
        .loader_done(ctrl_if.loader_done)
    );
    
    initial begin
        uvm_config_db#(virtual axi4_slave_if)::set(null, "*", "vif", axi_if);
        uvm_config_db#(virtual accel_ctrl_if)::set(null, "*", "ctrl_vif", ctrl_if);
        run_test("accel_test");
    end

endmodule


