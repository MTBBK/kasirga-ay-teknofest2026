`ifndef AXI4_LITE_IF_SV
`define AXI4_LITE_IF_SV
interface axi4_lite_if (input logic aclk, input logic aresetn);
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

    // Master Clocking Block
    clocking master_cb @(posedge aclk);
        default input #1ns output #1ns;
        output awaddr, awvalid, wdata, wstrb, wvalid, bready;
        input  awready, wready, bresp, bvalid;
        
        output araddr, arvalid, rready;
        input  arready, rdata, rresp, rvalid;
    endclocking
endinterface
`endif

// --------------------------------------------------------
// UVM Package
// --------------------------------------------------------
package vga_uvm_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    class axi4_lite_item extends uvm_sequence_item;
        rand bit [31:0] addr;
        rand bit [31:0] data;
        rand bit        is_write; 
        
        `uvm_object_utils_begin(axi4_lite_item)
            `uvm_field_int(addr, UVM_ALL_ON)
            `uvm_field_int(data, UVM_ALL_ON)
            `uvm_field_int(is_write, UVM_ALL_ON)
        `uvm_object_utils_end
        
        function new(string name = "axi4_lite_item");
            super.new(name);
        endfunction
    endclass

    // AXI4-Lite Master Driver
    class axi4_master_driver extends uvm_driver #(axi4_lite_item);
        `uvm_component_utils(axi4_master_driver)
        
        virtual axi4_lite_if vif;
        
        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction
        
        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            if(!uvm_config_db#(virtual axi4_lite_if)::get(this, "", "vif", vif))
                `uvm_fatal("NO_VIF",{"virtual interface must be set for: ",get_full_name(),".vif"});
        endfunction
        
        task run_phase(uvm_phase phase);
            vif.master_cb.awaddr <= 0;
            vif.master_cb.awvalid <= 0;
            vif.master_cb.wdata <= 0;
            vif.master_cb.wstrb <= 0;
            vif.master_cb.wvalid <= 0;
            vif.master_cb.bready <= 0;
            
            vif.master_cb.araddr <= 0;
            vif.master_cb.arvalid <= 0;
            vif.master_cb.rready <= 0;
            
            forever begin
                seq_item_port.get_next_item(req);
                if (req.is_write)
                    do_write(req.addr, req.data);
                else
                    do_read(req.addr, req.data);
                seq_item_port.item_done();
            end
        endtask
        
        task do_write(input bit [31:0] addr, input bit [31:0] data);
            @(vif.master_cb);
            vif.master_cb.awaddr <= addr;
            vif.master_cb.awvalid <= 1'b1;
            vif.master_cb.wdata <= data;
            vif.master_cb.wstrb <= 4'hF;
            vif.master_cb.wvalid <= 1'b1;
            
            // Wait for both AWREADY and WREADY
            fork
                begin
                    do begin @(vif.master_cb); end while(vif.master_cb.awready == 1'b0);
                    vif.master_cb.awvalid <= 1'b0;
                end
                begin
                    do begin @(vif.master_cb); end while(vif.master_cb.wready == 1'b0);
                    vif.master_cb.wvalid <= 1'b0;
                end
            join
            
            // Wait for B response
            vif.master_cb.bready <= 1'b1;
            do begin @(vif.master_cb); end while(vif.master_cb.bvalid == 1'b0);
            @(vif.master_cb);
            vif.master_cb.bready <= 1'b0;
            `uvm_info("DRV", $sformatf("Wrote Data %0h to Addr %0h", data, addr), UVM_LOW)
        endtask
        
        task do_read(input bit [31:0] addr, output bit [31:0] data);
            @(vif.master_cb);
            vif.master_cb.araddr <= addr;
            vif.master_cb.arvalid <= 1'b1;
            
            do begin @(vif.master_cb); end while(vif.master_cb.arready == 1'b0);
            vif.master_cb.arvalid <= 1'b0;
            
            vif.master_cb.rready <= 1'b1;
            do begin @(vif.master_cb); end while(vif.master_cb.rvalid == 1'b0);
            data = vif.master_cb.rdata;
            req.data = data; // Pass back to sequence
            @(vif.master_cb);
            vif.master_cb.rready <= 1'b0;
            `uvm_info("DRV", $sformatf("Read Data %0h from Addr %0h", data, addr), UVM_LOW)
        endtask
    endclass

    class axi4_master_agent extends uvm_agent;
        `uvm_component_utils(axi4_master_agent)
        
        axi4_master_driver driver;
        uvm_sequencer #(axi4_lite_item) sequencer;
        
        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction
        
        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            driver = axi4_master_driver::type_id::create("driver", this);
            sequencer = uvm_sequencer#(axi4_lite_item)::type_id::create("sequencer", this);
        endfunction
        
        function void connect_phase(uvm_phase phase);
            super.connect_phase(phase);
            driver.seq_item_port.connect(sequencer.seq_item_export);
        endfunction
    endclass

    class vga_env extends uvm_env;
        `uvm_component_utils(vga_env)
        axi4_master_agent agent;

        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            agent = axi4_master_agent::type_id::create("agent", this);
        endfunction
    endclass

    // Test Sequence
    class vga_test_seq extends uvm_sequence #(axi4_lite_item);
        `uvm_object_utils(vga_test_seq)
        
        function new(string name = "vga_test_seq");
            super.new(name);
        endfunction
        
        task body();
            axi4_lite_item req;
            
            `uvm_info("SEQ", "Starting VGA Register Write/Read tests...", UVM_LOW)
            
            // 1. Write to Address Register (VGA_TBA)
            req = axi4_lite_item::type_id::create("req");
            start_item(req);
            req.addr = 32'h00012004;
            req.data = 32'h0000001F;
            req.is_write = 1;
            finish_item(req);
            
            // 2. Write to Data Register (VGA_TBD)
            req = axi4_lite_item::type_id::create("req");
            start_item(req);
            req.addr = 32'h00012000;
            req.data = 32'h00000041; // 'A'
            req.is_write = 1;
            finish_item(req);
            
            // 3. Read back Address Register
            req = axi4_lite_item::type_id::create("req");
            start_item(req);
            req.addr = 32'h00012004;
            req.is_write = 0;
            finish_item(req);
            
            if(req.data == 32'h0000001F)
                `uvm_info("SEQ", "SUCCESS: VGA_TBA Readback matched!", UVM_LOW)
            else
                `uvm_error("SEQ", $sformatf("MISMATCH: VGA_TBA Readback failed. Expected 1F, Got %0h", req.data))
                
            // 4. Read back Data Register
            req = axi4_lite_item::type_id::create("req");
            start_item(req);
            req.addr = 32'h00012000;
            req.is_write = 0;
            finish_item(req);
            
            if(req.data == 32'h00000041)
                `uvm_info("SEQ", "SUCCESS: VGA_TBD Readback matched!", UVM_LOW)
            else
                `uvm_error("SEQ", $sformatf("MISMATCH: VGA_TBD Readback failed. Expected 41, Got %0h", req.data))
                
        endtask
    endclass

    class vga_test extends uvm_test;
        `uvm_component_utils(vga_test)
        
        vga_env env;
        
        function new(string name, uvm_component parent);
            super.new(name, parent);
        endfunction
        
        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            env = vga_env::type_id::create("env", this);
        endfunction
        
        task run_phase(uvm_phase phase);
            vga_test_seq seq;
            phase.raise_objection(this);
            
            // Wait for reset to deassert
            #200ns;
            
            seq = vga_test_seq::type_id::create("seq");
            seq.start(env.agent.sequencer);
            
            #1us;
            phase.drop_objection(this);
        endtask
    endclass
endpackage


// --------------------------------------------------------
// Mock VGA Controller (So the wrapper compiles successfully)
// --------------------------------------------------------
module vga_controller(
    input  logic        clk_pixel_i,
    input  logic        clk_system,
    input  logic        rst_i,
    output logic        vga_h_sync_o,
    output logic        vga_v_sync_o,
    output logic [11:0] vga_rgb_o,
    
    input  logic [11:0] text_buffer_addr_for_cpu_o, // Changed to input
    input  logic [7:0]  text_buffer_data_for_cpu_i,
    input  logic        text_buffer_wr_en_i
);
    // Dummy outputs to prevent floating signals during simulation
    assign vga_h_sync_o = 1'b1;
    assign vga_v_sync_o = 1'b1;
    assign vga_rgb_o = 12'd0;
endmodule

// --------------------------------------------------------
// Top Level Testbench
// --------------------------------------------------------
`timescale 1ns/1ps

module tb_top;
    import uvm_pkg::*;
    import vga_uvm_pkg::*;

    logic clk_sys;
    logic clk_pix;
    logic rst_n;
    
    // System Clock generation (100 MHz)
    initial begin
        clk_sys = 0;
        forever #5 clk_sys = ~clk_sys; 
    end
    
    // Pixel Clock generation (25 MHz)
    initial begin
        clk_pix = 0;
        forever #20 clk_pix = ~clk_pix; 
    end
    
    // Reset generation (Active Low for AXI)
    initial begin
        rst_n = 0;
        #100;
        rst_n = 1;
    end
    
    axi4_lite_if axi_if (clk_sys, rst_n);
    
    // VGA Outputs (Monitored in waveform)
    logic vga_h_sync;
    logic vga_v_sync;
    logic [11:0] vga_rgb;
    
    // DUT Instantiation
    vga_axi_wrapper dut (
        .clk_25(clk_pix),
        .S_AXI_ACLK(clk_sys),
        .S_AXI_ARESETN(rst_n),
        
        .vga_h_sync_o(vga_h_sync),
        .vga_v_sync_o(vga_v_sync),
        .vga_rgb_o(vga_rgb),
        
        // Write Address Channel
        .S_AXI_AWADDR(axi_if.awaddr),
        .S_AXI_AWVALID(axi_if.awvalid),
        .S_AXI_AWREADY(axi_if.awready),
        
        // Write Data Channel
        .S_AXI_WDATA(axi_if.wdata),
        .S_AXI_WSTRB(axi_if.wstrb),
        .S_AXI_WVALID(axi_if.wvalid),
        .S_AXI_WREADY(axi_if.wready),
        
        // Write Response Channel
        .S_AXI_BRESP(axi_if.bresp),
        .S_AXI_BVALID(axi_if.bvalid),
        .S_AXI_BREADY(axi_if.bready),
        
        // Read Address Channel
        .S_AXI_ARADDR(axi_if.araddr),
        .S_AXI_ARVALID(axi_if.arvalid),
        .S_AXI_ARREADY(axi_if.arready),
        
        // Read Data Channel
        .S_AXI_RDATA(axi_if.rdata),
        .S_AXI_RVALID(axi_if.rvalid),
        .S_AXI_RRESP(axi_if.rresp),
        .S_AXI_RREADY(axi_if.rready)
    );
    
    initial begin
        uvm_config_db#(virtual axi4_lite_if)::set(null, "*", "vif", axi_if);
        run_test("vga_test");
    end
endmodule
