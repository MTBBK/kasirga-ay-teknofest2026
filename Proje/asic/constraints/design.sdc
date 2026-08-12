# asic/constraints/design.sdc
# cv32e40p_top - TEKNOFEST Cip Tasarim Yarismasi zamanlama kisitlari

# --- 1. Birincil Saat (Zorunlu) ---
# Eger disaridan 50MHz aliyorsan period 20.0, 100MHz aliyorsan 10.0 olmalidir.
create_clock -name clk_main -period 10.0 [get_ports clk_i_100mHz]

# --- 2. Uretilmis (Bolunmus) Saatler (Zorunlu) ---
# FPGA PLL'i yerine yazacagin RTL saat bolucu register'larina gore yolu guncellemelisin.
# Ornek: 50 MHz girisi 25 MHz'e bolen bir counter register'i (VGA icin)
create_generated_clock -name clk_50mhz -source [get_ports clk_i_100mHz] -divide_by 2 [get_pins clk_div/counter_reg[0]/Q]
create_generated_clock -name clk_25mhz -source [get_ports clk_i_100mHz] -divide_by 4 [get_pins clk_div/counter_reg[1]/Q]]

# --- 3. Saat Belirsizlikleri ve Gecisler (Onerilen) ---
set_clock_uncertainty -setup 0.05 [get_clocks clk_main]
set_clock_uncertainty -hold  0.05 [get_clocks clk_main]
set_clock_transition 0.15 [get_clocks clk_main]

# --- 4. Giris/Cikis Gecikmeleri (Zorunlu) ---
set_input_delay 3.0 -clock [get_clocks clk_main] [all_inputs]
set_output_delay 3.0 -clock [get_clocks clk_main] [all_outputs]

# Onerilen Kisitlar: Giris Gecisi ve Cikis Yuku
set_input_transition 0.5 [all_inputs]
set_load 0.05 [all_outputs]

# --- 5. Zamanlama Istisnalari (False Paths) ---
# Asenkron reset pinini zamanlama analizinden cikaralim ki Setup/Hold hatalari vermesin
set_false_path -from [get_ports rst_i]
