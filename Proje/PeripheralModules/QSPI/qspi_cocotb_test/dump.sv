module iverilog_dump();
    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, qspi_top);
    end
endmodule
