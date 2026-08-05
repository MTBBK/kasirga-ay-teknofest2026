`timescale 1ns / 1ps

module vga_text_render_logic (
input clk_i,
input rst_i,
input [9:0] h_count_i, // Horizontal pixel coordinate
input [9:0] v_count_i, // Vertical pixel coordinate
input [7:0] char_data_from_buffer_i,
input [7:0] font_data_from_rom_i,
output [11:0] text_buffer_addr_o,
output [10:0] font_rom_addr_o, // 7bit ASCII + 4bit Row
output [11:0] rgb_o // 4-bit R, 4-bit G, 4-bit B
);
reg [2:0] bit_sel_reg1, bit_sel_reg2;
//v_count_i/16 gives line number h_count_i[9:3]
//h_count_i/8 gives column number v_count_i[9:4]
//line number is multiplied with 80 because each line has 80 columns line_number*80 = line_number*64+line_number*16 *64=> <<6 *16=> <<4
assign text_buffer_addr_o=(h_count_i[9:3])+((v_count_i[9:4])<<6)+((v_count_i[9:4])<<4);

//low 7 bits of char_data_from_buffer_i is enough for 128 chars
//every character that will be used is in the first 128 chars of ASCII
//each character is 16 lines
// v_count_i[3:0] is which line in the character we are in
assign font_rom_addr_o={char_data_from_buffer_i[6:0],v_count_i[3:0]};


//h_count_i[2:0] is the current column inside the character
//7-h_count_i[2:0] left to right
assign rgb_o=(font_data_from_rom_i[7-bit_sel_reg2])? 12'hFFF: 12'h000;



always @(posedge clk_i) begin
    if (rst_i) begin
        // ... mevcut h_sync, v_sync resetlerinizin altı ...
        bit_sel_reg1 <= 3'd0;
        bit_sel_reg2 <= 3'd0;
    end else begin
        // ... mevcut h_sync, v_sync atamalarınızın altı ...
        bit_sel_reg1 <= h_count_i[2:0];
        bit_sel_reg2 <= bit_sel_reg1; // ROM'dan gelen veri ile eşzamanlı olan 3 bitlik sayaç
    end
end

// Implements 8x16 character cell.
// Foreground color: White (12'hFFF), Background: Black (12'h000)
endmodule