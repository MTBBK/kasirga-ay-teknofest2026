// Add your memory initialization code here. 
// Example: 
//  initial $readmemh("helloworld.mem", dut.i_bootrom.rom);
// 
// You MUST KEEP "helloworld.mem" file constant, since it will be automatically
// added to the Vivado project, you should only change boot ROM memory array path.
// Also you can add processes needed for your system to boot

// Boot ROM initialization
// The memory_axi_readonly module already loads helloworld.mem via its MEMFILE
// parameter, but we also explicitly load it here for clarity.
initial $readmemh("helloworld.mem", dut.ROM.memory);
