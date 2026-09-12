# ==============================================================================
# Vivado Bitstream ve Yazılım (MCS) Kesin Birleştirme Scripti
# ==============================================================================
set PROJE_DIR "/mnt/disk2/Gtihub_Projects/kasirga/kasirga-ay-teknofest2026/Proje"

set BIT_FILE "${PROJE_DIR}/Bitstreams/top.bit"
set SW_MCS   "${PROJE_DIR}/Software/MainProgram/mem_Q512.mcs"
set OUT_MCS  "${PROJE_DIR}/Bitstreams/basys3_final.mcs"
set FLASH_SIZE_MB 4

puts "1. Asama: Bitstream tek basina MCS formatina cevriliyor..."
# Sadece donanımı içeren bir MCS üretiyoruz
write_cfgmem -format mcs \
             -size $FLASH_SIZE_MB \
             -interface SPIx1 \
             -loadbit "up 0x00000000 $BIT_FILE" \
             -force bitstream_only.mcs

puts "2. Asama: Bitstream ve Yazilim metin seviyesinde birlestiriliyor..."
# Çıkış dosyasını yazma modunda aç
set f_out [open $OUT_MCS w]

# Donanım MCS dosyasını oku ve EOF (End of File) satırı hariç yaz
set f_bit [open "bitstream_only.mcs" r]
while {[gets $f_bit line] >= 0} {
    # Intel HEX formatının bitiş satırını (:00000001FF) filtrele
    if {[string trim $line] ne ":00000001FF"} {
        puts $f_out $line
    }
}
close $f_bit

# Yazılım MCS dosyasını (kendi EOF satırıyla birlikte) sonuna ekle
set f_sw [open $SW_MCS r]
while {[gets $f_sw line] >= 0} {
    puts $f_out $line
}
close $f_sw
close $f_out

# Temizlik (İsteğe bağlı)
file delete -force bitstream_only.mcs

puts "Islem Basarili! Cakismaz ve donanima hazir birlesik dosya: $OUT_MCS"
