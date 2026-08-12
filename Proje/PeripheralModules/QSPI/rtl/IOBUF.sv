module IOBUF (

    output O,

    inout  IO,

    input  I,

    input  T

);

    assign IO = T ? 1'bz : I;

    assign O = IO;

endmodule
