/* This file has been autogenerated by Ivory
 * Compiler version  0.1.0.2
 */
#include "settableled_monitor.h"

void callback_hardwareinit(const int64_t* n_var0)
{
    uint32_t n_r0 = ivory_hw_io_read_u32((uint32_t) 1073887280U);
    
    /* reg modify rcc_ahb1enr: setBit rcc_ahb1en_gpiob */
    ivory_hw_io_write_u32((uint32_t) 1073887280U, (uint32_t) (n_r0 | (uint32_t) ((uint32_t) 1U << (uint32_t) 1U)));
    
    uint32_t n_r1 = ivory_hw_io_read_u32((uint32_t) 1073873924U);
    
    /* reg modify gpioB->otype: setField gpio_otype_14 */
    ivory_hw_io_write_u32((uint32_t) 1073873924U, (uint32_t) ((uint32_t) (n_r1 & (uint32_t) ~(uint32_t) ((uint32_t) 1U << (uint32_t) 14U)) | (uint32_t) (0 << (uint32_t) 14U)));
    
    uint32_t n_r2 = ivory_hw_io_read_u32((uint32_t) 1073873928U);
    
    /* reg modify gpioB->ospeed: setField gpio_ospeed_14 */
    ;
    
    uint32_t n_cse12 = (uint32_t) ~(uint32_t) ((uint32_t) 3U << (uint32_t) 28U);
    uint32_t n_cse14 = (uint32_t) (0 << (uint32_t) 28U);
    
    ivory_hw_io_write_u32((uint32_t) 1073873928U, (uint32_t) ((uint32_t) (n_r2 & n_cse12) | n_cse14));
    
    uint32_t n_r3 = ivory_hw_io_read_u32((uint32_t) 1073873932U);
    
    /* reg modify gpioB->pupd: setField gpio_pupd_14 */
    ivory_hw_io_write_u32((uint32_t) 1073873932U, (uint32_t) (n_cse14 | (uint32_t) (n_cse12 & n_r3)));
    
    uint32_t n_r4 = ivory_hw_io_read_u32((uint32_t) 1073873920U);
    
    /* reg modify gpioB->mode: setField gpio_mode_14 */
    ivory_hw_io_write_u32((uint32_t) 1073873920U, (uint32_t) ((uint32_t) (n_cse12 & n_r4) | (uint32_t) ((uint32_t) (uint8_t) ((uint8_t) 3U << 0) << (uint32_t) 28U)));
}

void callback_newoutput(const bool* n_var0)
{
    bool n_deref0 = *n_var0;
    
    if (n_deref0) {
        uint32_t n_r1 = ivory_hw_io_read_u32((uint32_t) 1073873944U);
        
        /* reg modify gpioB->bsrr: setBit gpio_br_14 */
        ;
        ivory_hw_io_write_u32((uint32_t) 1073873944U, (uint32_t) (n_r1 | (uint32_t) ((uint32_t) 1U << (uint32_t) 30U)));
        
        uint32_t n_r2 = ivory_hw_io_read_u32((uint32_t) 1073873920U);
        
        /* reg modify gpioB->mode: setField gpio_mode_14 */
        ;
        ivory_hw_io_write_u32((uint32_t) 1073873920U, (uint32_t) ((uint32_t) (n_r2 & (uint32_t) ~(uint32_t) ((uint32_t) 3U << (uint32_t) 28U)) | (uint32_t) ((uint32_t) (uint8_t) ((uint8_t) 1U << 0) << (uint32_t) 28U)));
    } else {
        uint32_t n_r3 = ivory_hw_io_read_u32((uint32_t) 1073873920U);
        
        /* reg modify gpioB->mode: setField gpio_mode_14 */
        ;
        ivory_hw_io_write_u32((uint32_t) 1073873920U, (uint32_t) ((uint32_t) ((uint32_t) ~(uint32_t) ((uint32_t) 3U << (uint32_t) 28U) & n_r3) | (uint32_t) ((uint32_t) (uint8_t) ((uint8_t) 3U << 0) << (uint32_t) 28U)));
    }
}