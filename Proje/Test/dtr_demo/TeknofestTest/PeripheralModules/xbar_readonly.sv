module xbar_readonly(

    // MASTER(core) INTERFACE
    // READ ADDRESS CHANNEL
    input  wire        arvalid_master,
    output wire        arready_master,
    input  wire [31:0] araddr_master,

	// READ DATA CHANNEL
    output wire        rvalid_master,
    input  wire        rready_master,
    output wire [31:0] rdata_master,

	// SLAVE0 (Boot ROM)
	// READ ADDRESS CHANNEL
    output wire        arvalid_slv0,
    input  wire        arready_slv0,
    output wire [31:0] araddr_slv0,
	
	// READ DATA CHANNEL
    input  wire        rvalid_slv0,
    output wire        rready_slv0,
    input  wire [31:0] rdata_slv0,

    // SLAVE1 (INSTRUCTION_MEMORY or else)
    // READ ADDRESS CHANNEL
    output wire        arvalid_slv1,
    input  wire        arready_slv1,
    output wire [31:0] araddr_slv1,
	
	// READ DATA CHANNEL
    input  wire        rvalid_slv1,
    output wire        rready_slv1,
    input  wire [31:0] rdata_slv1
);

    reg [1:0] select_ar;
    
    wire greater_than_boot;
    
    assign greater_than_boot = |araddr_master[31:12];

    always @(*) begin
        select_ar = 2'b0;

        if (arvalid_master) begin
            if (!greater_than_boot) begin
                select_ar = 2'b01;
            end
            else begin
                select_ar = 2'b10;
            end
        end
    end

    assign araddr_slv0  = araddr_master;
    assign arvalid_slv0 = select_ar[0] & arvalid_master;
    assign rready_slv0  = rready_master;

    assign araddr_slv1  = araddr_master;
    assign arvalid_slv1 = select_ar[1] & arvalid_master;
    assign rready_slv1  = rready_master;

    assign arready_master = (select_ar[0] & arready_slv0) |
                            (select_ar[1] & arready_slv1);

    assign rvalid_master  = rvalid_slv0 | rvalid_slv1;

    assign rdata_master   = (rvalid_slv0 ? rdata_slv0 : 32'b0) |
                            (rvalid_slv1 ? rdata_slv1 : 32'b0);

endmodule
