#include <stdint.h>

// --- All Required Definitions ---
#define REG_WRITE(addr, val) (*((volatile uint32_t *)(addr)) = (val))
#define REG_READ(addr)       (*((volatile uint32_t *)(addr)))

#define QSPI_CCR_ADDR 	0x00009000
#define QSPI_ADR_ADDR 	0x00009004
#define QSPI_DR_ADDR 	0x00009008
#define QSPI_STA_ADDR 	0x00009028

#define WREN            0x06
#define READ            0x13
#define CLK_PERIOD      20

#define INS_MEM_START_FLASH  		0x001000
#define DATA_MEM_START_FLASH 		0x003000 //was 011000

#define INS_MEM_START_RAM  			0x00001000
#define DATA_MEM_START_RAM 			0x00003000


/**
 * @brief Reusable function to copy memory, with the loop's core logic inlined for maximum optimization.
 * This preserves the exact WREN -> READ sequence but eliminates function call overhead.
 */
static void copy_memory_block(uint32_t flash_address, uint32_t ram_address) {
    uint32_t ccr_val; // A temporary variable to build the register value

    // --- Get the word count first (This logic is also optimized) ---
    // 1. Perform WREN transaction
    ccr_val = REG_READ(QSPI_CCR_ADDR);
    ccr_val = (ccr_val & ~0xFF) | WREN; // Set instruction
    REG_WRITE(QSPI_CCR_ADDR, ccr_val);
    REG_WRITE(QSPI_CCR_ADDR, REG_READ(QSPI_CCR_ADDR) | (1 << 31)); // Trigger
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);

    // 2. Perform READ transaction
    ccr_val = REG_READ(QSPI_CCR_ADDR);
    // Combine mode, wr, data_width, and instruction into one operation
    ccr_val = (ccr_val & ~0x001F07FF) | READ | (0x01 << 8) | ((4-1) << 16);
    REG_WRITE(QSPI_CCR_ADDR, ccr_val);
    REG_WRITE(QSPI_ADR_ADDR, flash_address);
    REG_WRITE(QSPI_CCR_ADDR, REG_READ(QSPI_CCR_ADDR) | (1 << 31)); // Trigger
    while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);
    
    // 3. Get the count
    uint32_t word_count = REG_READ(QSPI_DR0_ADDR);
    flash_address += 4;

    // --- The Main Copy Loop ---
    for (uint32_t i = 0; i < word_count; i++) {
        // --- Inlined config_WREN() ---
        // This combines config_instruction and clr_status into fewer operations
        ccr_val = REG_READ(QSPI_CCR_ADDR);
        ccr_val = (ccr_val & ~0xFF) | WREN; // Set WREN instruction
        REG_WRITE(QSPI_CCR_ADDR, ccr_val);
        REG_WRITE(QSPI_CCR_ADDR, REG_READ(QSPI_CCR_ADDR) | (1 << 31)); // Trigger transaction
        while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);

        // --- Inlined config_READ(flash_address, 4) ---
        // This combines all setup calls (instr, mode, etc.) into one write
        ccr_val = REG_READ(QSPI_CCR_ADDR); // Read fresh register state
        // Mask and set all parameters for the READ command at once
        ccr_val = (ccr_val & ~0x001F07FF) | READ | (0x01 << 8) | ((4-1) << 16);
        REG_WRITE(QSPI_CCR_ADDR, ccr_val); // Write all parameters
        REG_WRITE(QSPI_ADR_ADDR, flash_address); // Set address
        REG_WRITE(QSPI_CCR_ADDR, REG_READ(QSPI_CCR_ADDR) | (1 << 31)); // Trigger transaction
        while ((REG_READ(QSPI_STA_ADDR) & (1 << 1)) != 0);

        // --- Inlined config_read_data(0) and REG_WRITE ---
        REG_WRITE(ram_address, REG_READ(QSPI_DR0_ADDR));
        
        // --- Advance Pointers ---
        flash_address += 4;
        ram_address += 4;
    }
}

static inline void jump_to_user_code() {
	((void (*)(void))INS_MEM_START_RAM)();
}

int main() {

    	REG_WRITE(QSPI_CCR_ADDR, ((120 / CLK_PERIOD) & 0x3F) << 25);

	copy_memory_block(INS_MEM_START_FLASH, INS_MEM_START_RAM);
	copy_memory_block(DATA_MEM_START_FLASH, DATA_MEM_START_RAM);
	
	REG_WRITE(INS_MEM_START_RAM + 0x1FFC, 0x1);
	
	jump_to_user_code();

	while(1);
}
