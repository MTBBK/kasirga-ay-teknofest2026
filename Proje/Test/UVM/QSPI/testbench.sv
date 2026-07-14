interface axi4lite_if (input logic aclk, input logic aresetn);
    // Write Address (Master)
    logic [31:0] awaddr;
    logic        awvalid;
    logic        awready;
    // Write Data (Master)
    logic [31:0] wdata;
    logic [3:0]  wstrb;
    logic        wvalid;
    logic        wready;
    // Write Response (Slave)
    logic [1:0]  bresp;
    logic        bvalid;
    logic        bready;
    // Read Address (Master)
    logic [31:0] araddr;
    logic        arvalid;
    logic        arready;
    // Read Data (Slave)
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

package qspi_uvm_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

`ifndef AXI4LITE_ITEM_SV
`define AXI4LITE_ITEM_SV

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
    
    constraint align_addr {
        addr[1:0] == 2'b00;
    }
    
    function new(string name = "axi4lite_item");
        super.new(name);
        wstrb = 4'hf;
    endfunction
endclass

`endif

`ifndef AXI4LITE_DRIVER_SV
`define AXI4LITE_DRIVER_SV

class axi4lite_driver extends uvm_driver #(axi4lite_item);
    `uvm_component_utils(axi4lite_driver)
    
    virtual axi4lite_if vif;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if(!uvm_config_db#(virtual axi4lite_if)::get(this, "", "vif", vif))
            `uvm_fatal("NOVIF", {"virtual interface must be set for: ", get_full_name(), ".vif"});
    endfunction
    
    task run_phase(uvm_phase phase);
        reset_signals();
        forever begin
            seq_item_port.get_next_item(req);
            if(req.kind == axi4lite_item::WRITE)
                do_write(req);
            else
                do_read(req);
            seq_item_port.item_done();
        end
    endtask
    
    task reset_signals();
        vif.awvalid <= 0;
        vif.wvalid  <= 0;
        vif.bready  <= 0;
        vif.arvalid <= 0;
        vif.rready  <= 0;
        wait(vif.aresetn === 1'b1);
    endtask
    
    task do_write(axi4lite_item req);
        @ (vif.master_cb);
        vif.master_cb.awaddr  <= req.addr;
        vif.master_cb.awvalid <= 1'b1;
        vif.master_cb.wdata   <= req.data;
        vif.master_cb.wstrb   <= req.wstrb;
        vif.master_cb.wvalid  <= 1'b1;
        vif.master_cb.bready  <= 1'b1;
        
        fork
            begin // wait for awready
                wait(vif.master_cb.awready === 1'b1);
                @ (vif.master_cb);
                vif.master_cb.awvalid <= 1'b0;
            end
            begin // wait for wready
                wait(vif.master_cb.wready === 1'b1);
                @ (vif.master_cb);
                vif.master_cb.wvalid <= 1'b0;
            end
        join
        
        wait(vif.master_cb.bvalid === 1'b1);
        req.resp = vif.master_cb.bresp;
        @ (vif.master_cb);
        vif.master_cb.bready <= 1'b0;
    endtask
    
    task do_read(axi4lite_item req);
        @ (vif.master_cb);
        vif.master_cb.araddr  <= req.addr;
        vif.master_cb.arvalid <= 1'b1;
        vif.master_cb.rready  <= 1'b1;
        
        wait(vif.master_cb.arready === 1'b1);
        @ (vif.master_cb);
        vif.master_cb.arvalid <= 1'b0;
        
        wait(vif.master_cb.rvalid === 1'b1);
        req.data = vif.master_cb.rdata;
        req.resp = vif.master_cb.rresp;
        @ (vif.master_cb);
        vif.master_cb.rready <= 1'b0;
    endtask
endclass

`endif

`ifndef AXI4LITE_MONITOR_SV
`define AXI4LITE_MONITOR_SV

class axi4lite_monitor extends uvm_monitor;
    `uvm_component_utils(axi4lite_monitor)
    
    virtual axi4lite_if vif;
    uvm_analysis_port #(axi4lite_item) ap;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        ap = new("ap", this);
        if(!uvm_config_db#(virtual axi4lite_if)::get(this, "", "vif", vif))
            `uvm_fatal("NOVIF", {"virtual interface must be set for: ", get_full_name(), ".vif"});
    endfunction
    
    task run_phase(uvm_phase phase);
        wait(vif.aresetn === 1'b1);
        fork
            monitor_reads();
            monitor_writes();
        join
    endtask
    
    task monitor_writes();
        axi4lite_item item;
        bit aw_done, w_done, b_done;
        forever begin
            @ (vif.monitor_cb);
            
            // Just a basic sniffer, assumes address and data are somewhat aligned
            if (vif.monitor_cb.awvalid && vif.monitor_cb.awready && !aw_done) begin
                if(item == null) item = axi4lite_item::type_id::create("item");
                item.kind = axi4lite_item::WRITE;
                item.addr = vif.monitor_cb.awaddr;
                aw_done = 1;
            end
            
            if (vif.monitor_cb.wvalid && vif.monitor_cb.wready && !w_done) begin
                if(item == null) item = axi4lite_item::type_id::create("item");
                item.data = vif.monitor_cb.wdata;
                item.wstrb = vif.monitor_cb.wstrb;
                w_done = 1;
            end
            
            if (vif.monitor_cb.bvalid && vif.monitor_cb.bready && !b_done) begin
                if(item != null) begin
                    item.resp = vif.monitor_cb.bresp;
                    ap.write(item);
                end
                item = null;
                aw_done = 0;
                w_done = 0;
            end
        end
    endtask
    
    task monitor_reads();
        axi4lite_item item;
        bit ar_done, r_done;
        forever begin
            @ (vif.monitor_cb);
            
            if (vif.monitor_cb.arvalid && vif.monitor_cb.arready && !ar_done) begin
                item = axi4lite_item::type_id::create("item");
                item.kind = axi4lite_item::READ;
                item.addr = vif.monitor_cb.araddr;
                ar_done = 1;
            end
            
            if (vif.monitor_cb.rvalid && vif.monitor_cb.rready && ar_done) begin
                item.data = vif.monitor_cb.rdata;
                item.resp = vif.monitor_cb.rresp;
                ap.write(item);
                ar_done = 0;
            end
        end
    endtask
endclass

`endif

`ifndef AXI4LITE_AGENT_SV
`define AXI4LITE_AGENT_SV

typedef uvm_sequencer #(axi4lite_item) axi4lite_sequencer;

class axi4lite_agent extends uvm_agent;
    `uvm_component_utils(axi4lite_agent)
    
    axi4lite_sequencer sqr;
    axi4lite_driver    drv;
    axi4lite_monitor   mon;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        mon = axi4lite_monitor::type_id::create("mon", this);
        if(get_is_active() == UVM_ACTIVE) begin
            sqr = axi4lite_sequencer::type_id::create("sqr", this);
            drv = axi4lite_driver::type_id::create("drv", this);
        end
    endfunction
    
    function void connect_phase(uvm_phase phase);
        if(get_is_active() == UVM_ACTIVE) begin
            drv.seq_item_port.connect(sqr.seq_item_export);
        end
    endfunction
endclass

`endif

`ifndef QSPI_ENV_SV
`define QSPI_ENV_SV

class qspi_env extends uvm_env;
    `uvm_component_utils(qspi_env)
    
    axi4lite_agent axi_agent;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        axi_agent = axi4lite_agent::type_id::create("axi_agent", this);
    endfunction
endclass

`endif

`ifndef QSPI_TEST_SV
`define QSPI_TEST_SV

class qspi_base_seq extends uvm_sequence #(axi4lite_item);
    `uvm_object_utils(qspi_base_seq)
    
    function new(string name = "qspi_base_seq");
        super.new(name);
    endfunction
    
    task write_reg(bit [31:0] addr, bit [31:0] data);
        axi4lite_item req;
        req = axi4lite_item::type_id::create("req");
        start_item(req);
        req.kind = axi4lite_item::WRITE;
        req.addr = addr;
        req.data = data;
        finish_item(req);
    endtask
    
    task read_reg(bit [31:0] addr, output bit [31:0] data);
        axi4lite_item req;
        req = axi4lite_item::type_id::create("req");
        start_item(req);
        req.kind = axi4lite_item::READ;
        req.addr = addr;
        finish_item(req);
        data = req.data;
    endtask
    
    task wait_for_done();
        bit [31:0] rdata = 0;
        // Poll STA register (0x900C) until bit[0] (DONE) is 1
        while ((rdata & 32'h1) == 0) begin
            read_reg(32'h0000900C, rdata);
        end
    endtask
    
    task body();
        bit [31:0] rdata;
        bit [31:0] ccr_val;
        
        `uvm_info("SEQ", "Starting Single SPI Read Test...", UVM_LOW)
        // 1. Write ADR
        write_reg(32'h00009004, 32'd6);
        // 2. Write CCR to start read (prescaler=1, width=3, dummy=0, mode=1, instr=0x03)
        ccr_val = (1 << 25) | (3 << 16) | (0 << 11) | (1 << 8) | 8'h03;
        write_reg(32'h00009000, ccr_val);
        // 3. Wait for DONE
        wait_for_done();
        // 4. Read RX FIFO (DR)
        read_reg(32'h00009008, rdata);
        if (rdata === 32'hFADEEDAF)
            `uvm_info("SEQ", $sformatf("Single SPI Read SUCCESS! Expected: %h, Actual: %h", 32'hFADEEDAF, rdata), UVM_LOW)
        else
            `uvm_error("SEQ", $sformatf("Single SPI Read FAILED! Expected: %h, Actual: %h", 32'hFADEEDAF, rdata))
            
        `uvm_info("SEQ", "Starting Quad SPI Write (PP) Test...", UVM_LOW)
        // 1. Write data to TX FIFO (DR)
        write_reg(32'h00009008, 32'hABCDABCD);
        // 2. Write ADR
        write_reg(32'h00009004, 32'd7);
        // 3. Write CCR to start write (prescaler=1, width=3, dummy=0, mode=3, instr=0x02)
        ccr_val = (1 << 25) | (3 << 16) | (0 << 11) | (3 << 8) | 8'h02;
        write_reg(32'h00009000, ccr_val);
        // 4. Wait for DONE
        wait_for_done();
        `uvm_info("SEQ", "Quad SPI Write completed (Check waveforms for data out on IO pins)!", UVM_LOW)
        
    endtask
endclass

class qspi_test extends uvm_test;
    `uvm_component_utils(qspi_test)
    
    qspi_env env;
    
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
    
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = qspi_env::type_id::create("env", this);
    endfunction
    
    task run_phase(uvm_phase phase);
        qspi_base_seq seq;
        phase.raise_objection(this);
        seq = qspi_base_seq::type_id::create("seq");
        seq.start(env.axi_agent.sqr);
        phase.drop_objection(this);
    endtask
endclass

`endif

endpackage

`timescale 1ns/1ps

module tb_top;

    import uvm_pkg::*;
    import qspi_uvm_pkg::*;

    logic clk;
    logic rst_n;
    
    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz
    end
    
    // Reset generation
    initial begin
        rst_n = 0;
        #100;
        rst_n = 1;
    end
    
    // Interfaces
    axi4lite_if axi_if (clk, rst_n);
    
    // QSPI physical signals
    logic sclk;
    logic cs;
    wire qspi_io_0;
    wire qspi_io_1;
    wire qspi_io_2;
    wire qspi_io_3;
    
    // DUT
    qspi_top dut (
        .S_AXI_ACLK(clk),
        .S_AXI_ARESETN(rst_n),
        .sclk(sclk),
        .cs(cs),
        .qspi_io_0(qspi_io_0),
        .qspi_io_1(qspi_io_1),
        .qspi_io_2(qspi_io_2),
        .qspi_io_3(qspi_io_3),
        
        .S_AXI_AWADDR(axi_if.awaddr),
        .S_AXI_AWVALID(axi_if.awvalid),
        .S_AXI_AWREADY(axi_if.awready),
        .S_AXI_WDATA(axi_if.wdata),
        .S_AXI_WSTRB(axi_if.wstrb),
        .S_AXI_WVALID(axi_if.wvalid),
        .S_AXI_WREADY(axi_if.wready),
        .S_AXI_BRESP(axi_if.bresp),
        .S_AXI_BVALID(axi_if.bvalid),
        .S_AXI_BREADY(axi_if.bready),
        .S_AXI_ARADDR(axi_if.araddr),
        .S_AXI_ARVALID(axi_if.arvalid),
        .S_AXI_ARREADY(axi_if.arready),
        .S_AXI_RDATA(axi_if.rdata),
        .S_AXI_RVALID(axi_if.rvalid),
        .S_AXI_RRESP(axi_if.rresp),
        .S_AXI_RREADY(axi_if.rready)
    );
    
    
    // =================================================================
    // MOCK FLASH BFM (Adapted from qspi_tb.sv)
    // =================================================================
    logic [31:0] mock_flash_data = 32'hFADEEDAF; // Flash'tan okumayı beklediğimiz sahte veri
    integer bit_idx = 31;
    logic [3:0] flash_data_out;
    logic flash_oe;
    
    assign qspi_io_0 = flash_oe ? flash_data_out[0] : 1'bz;
    assign qspi_io_1 = flash_oe ? flash_data_out[1] : 1'bz;
    assign qspi_io_2 = flash_oe ? flash_data_out[2] : 1'bz;
    assign qspi_io_3 = flash_oe ? flash_data_out[3] : 1'bz;

    logic [7:0] start_data_cycle;
    logic [7:0] active_cycle;
    integer sclk_ctr = 0;
    
    // Using hierarchical paths to sync with QSPI core state
    wire [1:0]  data_mode         = dut.wrapper_inst.qspi_core_inst.data_mode;
    wire [4:0]  dummy_cycle_count = dut.wrapper_inst.qspi_core_inst.dummy_cycle_count;
    wire [5:0]  prescaler         = dut.wrapper_inst.qspi_core_inst.prescaler;
    wire [7:0]  instr             = dut.wrapper_inst.qspi_core_inst.instr;
    wire [2:0]  current_state     = dut.wrapper_inst.qspi_core_inst.current_state;
    
    wire [7:0] QOR = 8'h6B;
    wire [7:0] DOR = 8'h3B;

    assign start_data_cycle = (data_mode == 2'b01) ? (32 + dummy_cycle_count) :
                              (data_mode == 2'b10) ? (16 + dummy_cycle_count) :
                              (data_mode == 2'b11) ? (8 + dummy_cycle_count)  : 0;

    assign active_cycle = start_data_cycle + ((prescaler == 0) ? 1 : 0);
    
    always @(negedge sclk or posedge cs) begin
        if (cs) begin
            bit_idx     = 31; 
            flash_data_out = 4'b0000;
            flash_oe    = 1'b0;
            sclk_ctr    = 0;
        end
        else begin 
            sclk_ctr = sclk_ctr + 1;
            
            // If it is a read instruction and we are in data phase
            if (sclk_ctr >= active_cycle && (instr == 8'h03 || instr == QOR || instr == DOR || instr == 8'hEB)) begin
                flash_oe = 1'b1;
                if(data_mode==2'b01) begin
                    if(instr==QOR)begin 
                        flash_data_out[3] = mock_flash_data[bit_idx];
                        flash_data_out[2] = mock_flash_data[bit_idx-1];
                        flash_data_out[1] = mock_flash_data[bit_idx-2];
                        flash_data_out[0] = mock_flash_data[bit_idx-3];
                        if (bit_idx >= 3) bit_idx = bit_idx - 4;      
                        else bit_idx = 31;
                    end
                    else if(instr==DOR)begin 
                        flash_data_out[1] = mock_flash_data[bit_idx];
                        flash_data_out[0] = mock_flash_data[bit_idx-1];
                        if (bit_idx >= 1) bit_idx = bit_idx - 2;      
                        else bit_idx = 31;
                    end
                    else begin 
                        flash_data_out[1] = mock_flash_data[bit_idx];
                        if (bit_idx >= 1) bit_idx = bit_idx - 1;
                    end

                end
                else if(data_mode==2'b10) begin 
                    flash_data_out[1] = mock_flash_data[bit_idx];
                    flash_data_out[0] = mock_flash_data[bit_idx-1];
                    if (bit_idx >= 1) bit_idx = bit_idx - 2;      
                    else bit_idx = 31;
                end
                else if(data_mode==2'b11) begin 
                    flash_data_out[3] = mock_flash_data[bit_idx];
                    flash_data_out[2] = mock_flash_data[bit_idx-1];
                    flash_data_out[1] = mock_flash_data[bit_idx-2];
                    flash_data_out[0] = mock_flash_data[bit_idx-3];
                    if (bit_idx >= 3) bit_idx = bit_idx - 4;      
                    else bit_idx = 31;    
                end
            end
        end
    end
    

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb_top);
        uvm_config_db#(virtual axi4lite_if)::set(null, "*", "vif", axi_if);
        run_test("qspi_test");
    end

endmodule

