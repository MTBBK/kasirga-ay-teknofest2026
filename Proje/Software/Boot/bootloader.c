#include <stdint.h>
#include "qspi.h"



#define INS_MEM_START_FLASH          0x00301000
#define DATA_MEM_START_FLASH         0x00303000 

#define INS_MEM_START_RAM            0x00001000
#define DATA_MEM_START_RAM           0x00003000


/**
 * @brief Pointer ve Buffer kullanmayan, veriyi doğrudan CPU'ya alan okuma fonksiyonu
 */
static uint32_t read_qspi_word(uint32_t address) {
    config_addr(address);
    
    // config_qspi artık tetiklemeyi de kendi içinde yapıyor.
    // Veri genişliği (data_width) = 4 byte. 
    config_qspi(READ, 0x01, 0x00, 0x00, 4, 0,0x00); 
    
    // İşlemin bitmesini bekle
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
    
    // Veriyi doğrudan register'a döndür (Stack'i hiç kullanmaz!)
    return REG_READ(QSPI_DR_ADDR);
}


static void copy_memory_block(uint32_t flash_address, uint32_t ram_address) {
    // 1. Bloktaki kelime sayısını doğrudan değişkene alıyoruz
    uint32_t word_count = read_qspi_word(flash_address);

    if (word_count == 0 || word_count == 0xFFFFFFFF) {
        return; 
    }

    flash_address += 4;
    uint32_t *ram_ptr = (uint32_t *)ram_address;

    // 2. Kalan verileri RAM'e aktar
    for (uint32_t i = 0; i < word_count; i++) {
        ram_ptr[i] = read_qspi_word(flash_address);
        flash_address += 4;

    }
}

static inline void jump_to_user_code() {
((void (*)(void))INS_MEM_START_RAM)();
}

int main() {
    
    
    // 1. Buyruk belleğini doldur
    copy_memory_block(INS_MEM_START_FLASH, INS_MEM_START_RAM);

    
    // 2. Veri belleğini doldur
    copy_memory_block(DATA_MEM_START_FLASH, DATA_MEM_START_RAM);

    
    // 3. Test Flag
    REG_WRITE(INS_MEM_START_RAM + 0x1FFC, 0x1);

    // 4. Kullanıcı koduna zıpla
    jump_to_user_code();
    while(1);
}



