.section .text.init
.global _start

_start:
    # Stack Pointer'ı (sp) ayarla. 
    # Data RAM'inin en son adresine işaret etmelidir.
    li sp, 0x00005000 

    # Asıl main fonksiyonuna atla
    call main

    # Main biterse sonsuz döngüye gir (Güvenlik ağı)
end:
    j end
