// EDA Playground Testbench
`timescale 1ns/1ps
import uvm_pkg::*;
`include "uvm_macros.svh"

// 1. Interface
interface axi4lite_if (input logic aclk, input logic aresetn);
    // Write Address
    logic [31:0] awaddr;
    logic        awvalid;
    logic        awready;
    // Write Data
    logic [31:0] wdata;
    logic [3:0]  wstrb;
    logic        wvalid;
    logic        wready;
    // Write Response
    logic [1:0]  bresp;
    logic        bvalid;
    logic        bready;
    // Read Address
    logic [31:0] araddr;
    logic        arvalid;
    logic        arready;
    // Read Data
    logic [31:0] rdata;
    logic [1:0]  rresp;
    logic        rvalid;
    logic        rready;

    clocking master_cb @(posedge aclk);
        default input #1ns output #1ns;
        output awaddr, awvalid, wdata, wstrb, wvalid, bready, araddr, arvalid, rready;
        input  awready, wready, bresp, bvalid, arready, rdata, rresp, rvalid;
    endclocking
    
    clocking monitor_cb @(posedge aclk);
        default input #1ns output #1ns;
        input awaddr, awvalid, awready, wdata, wstrb, wvalid, wready, bresp, bvalid, bready, araddr, arvalid, arready, rdata, rresp, rvalid, rready;
    endclocking
endinterface

package uart_uvm_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"
    
    class axi4lite_item extends uvm_sequence_item;
        typedef enum {READ, WRITE} kind_e;
        rand kind_e kind;
        rand bit [31:0] addr;
        rand bit [31:0] data;
        rand bit [3:0]  wstrb;
        bit [1:0] resp;
        
        `uvm_object_utils_begin(axi4lite_item)
            `uvm_field_enum(kind_e, kind, UVM_ALL_ON)
            `uvm_field_int(addr, UVM_ALL_ON)
            `uvm_field_int(data, UVM_ALL_ON)
            `uvm_field_int(wstrb, UVM_ALL_ON)
            `uvm_field_int(resp, UVM_ALL_ON)
        `uvm_object_utils_end
        
        constraint align_addr { addr[1:0] == 2'b00; }
        
        function new(string name = "axi4lite_item");
            super.new(name);
            wstrb = 4'hf;
        endfunction
    endclass

    class axi4lite_driver extends uvm_driver #(axi4lite_item);
        `uvm_component_utils(axi4lite_driver)
        virtual axi4lite_if vif;
        function new(string name, uvm_component parent); super.new(name, parent); endfunction
        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            if(!uvm_config_db#(virtual axi4lite_if)::get(this, "", "vif", vif))
                `uvm_fatal("NOVIF", {"virtual interface must be set for: ", get_full_name(), ".vif"});
        endfunction
        task run_phase(uvm_phase phase);
            reset_signals();
            forever begin
                seq_item_port.get_next_item(req);
                if(req.kind == axi4lite_item::WRITE) do_write(req);
                else do_read(req);
                seq_item_port.item_done();
            end
        endtask
        task reset_signals();
            vif.awvalid <= 0; vif.wvalid  <= 0; vif.bready  <= 0;
            vif.arvalid <= 0; vif.rready  <= 0; wait(vif.aresetn === 1'b1);
        endtask
        task do_write(axi4lite_item req);
            @ (vif.master_cb);
            vif.master_cb.awaddr  <= req.addr; vif.master_cb.awvalid <= 1'b1;
            vif.master_cb.wdata   <= req.data; vif.master_cb.wstrb   <= req.wstrb;
            vif.master_cb.wvalid  <= 1'b1;     vif.master_cb.bready  <= 1'b1;
            fork
                begin wait(vif.master_cb.awready === 1'b1); @ (vif.master_cb); vif.master_cb.awvalid <= 1'b0; end
                begin wait(vif.master_cb.wready === 1'b1); @ (vif.master_cb); vif.master_cb.wvalid <= 1'b0; end
            join
            wait(vif.master_cb.bvalid === 1'b1);
            req.resp = vif.master_cb.bresp;
            @ (vif.master_cb);
            vif.master_cb.bready <= 1'b0;
        endtask
        task do_read(axi4lite_item req);
            @ (vif.master_cb);
            vif.master_cb.araddr  <= req.addr; vif.master_cb.arvalid <= 1'b1; vif.master_cb.rready  <= 1'b1;
            wait(vif.master_cb.arready === 1'b1); @ (vif.master_cb); vif.master_cb.arvalid <= 1'b0;
            wait(vif.master_cb.rvalid === 1'b1);
            req.data = vif.master_cb.rdata; req.resp = vif.master_cb.rresp;
            @ (vif.master_cb); vif.master_cb.rready <= 1'b0;
        endtask
    endclass

    class axi4lite_monitor extends uvm_monitor;
        `uvm_component_utils(axi4lite_monitor)
        virtual axi4lite_if vif;
        uvm_analysis_port #(axi4lite_item) ap;
        function new(string name, uvm_component parent); super.new(name, parent); endfunction
        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            ap = new("ap", this);
            if(!uvm_config_db#(virtual axi4lite_if)::get(this, "", "vif", vif))
                `uvm_fatal("NOVIF", {"virtual interface must be set for: ", get_full_name(), ".vif"});
        endfunction
        task run_phase(uvm_phase phase);
            wait(vif.aresetn === 1'b1);
            fork monitor_reads(); monitor_writes(); join
        endtask
        task monitor_writes();
            axi4lite_item item;
            bit aw_done, w_done, b_done;
            forever begin
                @ (vif.monitor_cb);
                if (vif.monitor_cb.awvalid && vif.monitor_cb.awready && !aw_done) begin
                    if(item == null) item = axi4lite_item::type_id::create("item");
                    item.kind = axi4lite_item::WRITE; item.addr = vif.monitor_cb.awaddr; aw_done = 1;
                end
                if (vif.monitor_cb.wvalid && vif.monitor_cb.wready && !w_done) begin
                    if(item == null) item = axi4lite_item::type_id::create("item");
                    item.data = vif.monitor_cb.wdata; item.wstrb = vif.monitor_cb.wstrb; w_done = 1;
                end
                if (vif.monitor_cb.bvalid && vif.monitor_cb.bready && !b_done) begin
                    if(item != null) begin item.resp = vif.monitor_cb.bresp; ap.write(item); end
                    item = null; aw_done = 0; w_done = 0;
                end
            end
        endtask
        task monitor_reads();
            axi4lite_item item; bit ar_done, r_done;
            forever begin
                @ (vif.monitor_cb);
                if (vif.monitor_cb.arvalid && vif.monitor_cb.arready && !ar_done) begin
                    item = axi4lite_item::type_id::create("item");
                    item.kind = axi4lite_item::READ; item.addr = vif.monitor_cb.araddr; ar_done = 1;
                end
                if (vif.monitor_cb.rvalid && vif.monitor_cb.rready && ar_done) begin
                    item.data = vif.monitor_cb.rdata; item.resp = vif.monitor_cb.rresp;
                    ap.write(item); ar_done = 0;
                end
            end
        endtask
    endclass

    typedef uvm_sequencer #(axi4lite_item) axi4lite_sequencer;

    class axi4lite_agent extends uvm_agent;
        `uvm_component_utils(axi4lite_agent)
        axi4lite_sequencer sqr;
        axi4lite_driver    drv;
        axi4lite_monitor   mon;
        function new(string name, uvm_component parent); super.new(name, parent); endfunction
        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            mon = axi4lite_monitor::type_id::create("mon", this);
            if(get_is_active() == UVM_ACTIVE) begin
                sqr = axi4lite_sequencer::type_id::create("sqr", this);
                drv = axi4lite_driver::type_id::create("drv", this);
            end
        endfunction
        function void connect_phase(uvm_phase phase);
            if(get_is_active() == UVM_ACTIVE) drv.seq_item_port.connect(sqr.seq_item_export);
        endfunction
    endclass

    class uart_env extends uvm_env;
        `uvm_component_utils(uart_env)
        axi4lite_agent axi_agent;
        function new(string name, uvm_component parent); super.new(name, parent); endfunction
        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            axi_agent = axi4lite_agent::type_id::create("axi_agent", this);
        endfunction
    endclass

    class uart_base_seq extends uvm_sequence #(axi4lite_item);
        `uvm_object_utils(uart_base_seq)
        function new(string name = "uart_base_seq"); super.new(name); endfunction
        task write_reg(bit [31:0] addr, bit [31:0] data);
            axi4lite_item req = axi4lite_item::type_id::create("req");
            start_item(req); req.kind = axi4lite_item::WRITE; req.addr = addr; req.data = data; finish_item(req);
        endtask
        task read_reg(bit [31:0] addr, output bit [31:0] data);
            axi4lite_item req = axi4lite_item::type_id::create("req");
            start_item(req); req.kind = axi4lite_item::READ; req.addr = addr; finish_item(req);
            data = req.data;
        endtask
        task body();
            bit [31:0] rdata;
            write_reg(32'h00005000, 32'd868);
            read_reg(32'h00005000, rdata);
            `uvm_info("SEQ", $sformatf("Read CPB: %0h", rdata), UVM_LOW)
            write_reg(32'h0000500C, 32'h0000005A);
            write_reg(32'h00005010, 32'h00000001);
            #200us;
            read_reg(32'h00005010, rdata);
            `uvm_info("SEQ", $sformatf("Read CFG: %0h", rdata), UVM_LOW)
            read_reg(32'h00005008, rdata);
            `uvm_info("SEQ", $sformatf("Read RDR (Loopback): %0h", rdata), UVM_LOW)
        endtask
    endclass

    class uart_test extends uvm_test;
        `uvm_component_utils(uart_test)
        uart_env env;
        function new(string name, uvm_component parent); super.new(name, parent); endfunction
        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            env = uart_env::type_id::create("env", this);
        endfunction
        task run_phase(uvm_phase phase);
            uart_base_seq seq;
            phase.raise_objection(this);
            seq = uart_base_seq::type_id::create("seq");
            seq.start(env.axi_agent.sqr);
            phase.drop_objection(this);
        endtask
    endclass
endpackage


module tb_top;
    import uvm_pkg::*;
    import uart_uvm_pkg::*;

    logic clk; logic rst_n;
    initial begin clk = 0; forever #5 clk = ~clk; end
    initial begin rst_n = 0; #100; rst_n = 1; end
    
    axi4lite_if axi_if (clk, rst_n);
    logic uart_rx; logic uart_tx;
    
    uart_top #(.baud_rate(115200), .clock_frequency(100)) dut (
        .uart_rx_i(uart_rx), .uart_tx_o(uart_tx),
        .S_AXI_ACLK(clk), .S_AXI_ARESETN(rst_n),
        .S_AXI_AWADDR(axi_if.awaddr), .S_AXI_AWVALID(axi_if.awvalid), .S_AXI_AWREADY(axi_if.awready),
        .S_AXI_WDATA(axi_if.wdata), .S_AXI_WSTRB(axi_if.wstrb), .S_AXI_WVALID(axi_if.wvalid), .S_AXI_WREADY(axi_if.wready),
        .S_AXI_BRESP(axi_if.bresp), .S_AXI_BVALID(axi_if.bvalid), .S_AXI_BREADY(axi_if.bready),
        .S_AXI_ARADDR(axi_if.araddr), .S_AXI_ARVALID(axi_if.arvalid), .S_AXI_ARREADY(axi_if.arready),
        .S_AXI_RDATA(axi_if.rdata), .S_AXI_RVALID(axi_if.rvalid), .S_AXI_RRESP(axi_if.rresp), .S_AXI_RREADY(axi_if.rready)
    );
    
    assign uart_rx = uart_tx;
    
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb_top);
        uvm_config_db#(virtual axi4lite_if)::set(null, "*", "vif", axi_if);
        run_test("uart_test");
    end
endmodule
