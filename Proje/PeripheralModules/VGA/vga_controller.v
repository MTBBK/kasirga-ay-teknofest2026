`timescale 1ns / 1ps

module vga_controller (
input clk_pixel_i,//25mhz
input clk_system,//50mhz
input rst_i,
// VGA Outputs
output vga_h_sync_o,
output vga_v_sync_o,
output [11:0] vga_rgb_o,
// Text Buffer Interface
input [11:0] text_buffer_addr_for_cpu_o, // from Shell FSM
input [7:0] text_buffer_data_for_cpu_i,
input text_buffer_wr_en_i
);
reg h_sync_reg1, h_sync_reg2;
reg v_sync_reg1, v_sync_reg2;
reg video_on_reg1, video_on_reg2;

wire h_sync_in;
wire v_sync_in;
wire video_on_in;

wire  [9:0] h_count;
wire  [9:0] v_count;
wire  [7:0] char_data_from_buffer;
wire  [7:0] font_data_from_rom;
wire [11:0] text_buffer_addr;
wire [10:0] font_rom_addr;
wire [11:0] rgb;
vga_text_render_logic render_logic(clk_pixel_i,rst_i,h_count,v_count,char_data_from_buffer,font_data_from_rom,text_buffer_addr,font_rom_addr,rgb);

font_rom font(clk_pixel_i,font_rom_addr,font_data_from_rom);
text_buffer textbuffer(clk_system,text_buffer_addr_for_cpu_o,text_buffer_data_for_cpu_i,text_buffer_wr_en_i,clk_pixel_i,text_buffer_addr,char_data_from_buffer);

wire video_on;
vga_timing_generator timing_generator(clk_pixel_i,rst_i,h_count,v_count,h_sync_in,v_sync_in,video_on_in);

always @(posedge clk_pixel_i) begin
        if (rst_i) begin
            h_sync_reg1 <= 1'b1; h_sync_reg2 <= 1'b1;
            v_sync_reg1 <= 1'b1; v_sync_reg2 <= 1'b1;
            video_on_reg1 <= 1'b0; video_on_reg2 <= 1'b0;
        end else begin
            h_sync_reg1 <= h_sync_in;   h_sync_reg2 <= h_sync_reg1;
            v_sync_reg1 <= v_sync_in;   v_sync_reg2 <= v_sync_reg1;
            video_on_reg1 <= video_on_in; video_on_reg2 <= video_on_reg1;
        end
end
    assign vga_h_sync_o = h_sync_reg2;
    assign vga_v_sync_o = v_sync_reg2;
    assign vga_rgb_o = video_on_reg2 ? rgb : 12'h0;
// This module instantiates: vga_timing_generator, vga_text_render_logic,
// a BRAM for the text buffer, and a BRAM/ROM for the font.
endmodule
