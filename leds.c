#include "mcc_generated_files/mcc.h"
#include "leds.h"

void LEDS_Initialize(void) {
    I2C1_MESSAGE_STATUS status;

    // Reset both 9685s
    uint8_t reset[1] = {PCA9685_RESET};
    I2C1_MasterWrite(reset, 1, I2C_ADDRESS_RESET, &status);

    // MODE2: Output logic state inverted, All pin's outputs are configured in open drain mode
    // MODE1: Does not respond to LED all-call I2C address. Do not SLEEP
    uint8_t init[4] = {REG_MODE2, 0x10, REG_MODE1, 0x00, };
    I2C1_MasterWrite(init, 4, I2C_ADDRESS_9685_01, &status);
    while(I2C1_MasterQueueIsFull() == true);
    I2C1_MasterWrite(init, 4, I2C_ADDRESS_9685_02, &status);

    // TODO: set prescale to frequency different from default (200Hz). SLEEP bit of MODE1 register has to be set to logic 1.
    
    IO_RB5_SetHigh();
    __delay_us(500); // Wait for the oscillator to be up and running once SLEEP bit has been set to logic 0
    IO_RB5_SetLow();
}
