#include "mcc_generated_files/mcc.h"
#include "leds.h"

void LEDS_WriteReg(uint8_t address, uint8_t reg, uint8_t value) {
    uint8_t p_data[2];
    I2C1_MESSAGE_STATUS status;

    p_data[0] = reg;
    p_data[1] = value;
    while (I2C1_MasterQueueIsFull() == true);
    I2C1_MasterWrite(p_data, 2, address, &status);
    while (status != I2C1_MESSAGE_COMPLETE);
}

void LEDS_Initialize(void) {
    I2C1_MESSAGE_STATUS status;

    // Reset both 9685s
    uint8_t reset[1] = {PCA9685_RESET};
    while (I2C1_MasterQueueIsFull() == true);
    I2C1_MasterWrite(reset, 1, I2C_ADDRESS_RESET, &status);
    while (status != I2C1_MESSAGE_COMPLETE);

    __delay_ms(1);

    // MODE2: Output logic state inverted, All pin's outputs are configured in open drain mode
    LEDS_WriteReg(I2C_ADDRESS_9685_01, REG_MODE2, 0x10);
    // LEDS_WriteReg(I2C_ADDRESS_9685_02, REG_MODE2, 0x10);

    // MODE1: Does not respond to LED all-call I2C address. Do not SLEEP
    LEDS_WriteReg(I2C_ADDRESS_9685_01, REG_MODE1, 0x00);
    // LEDS_WriteReg(I2C_ADDRESS_9685_02, REG_MODE1, 0x00);

    __delay_ms(1);

    //    uint8_t init9685_3[1] = {0x00};
    //    while (I2C1_MasterQueueIsFull() == true);
    //    I2C1_MasterRead(init9685_3, 1, I2C_ADDRESS_9685_01, &status);
    //    while (status != I2C1_MESSAGE_COMPLETE);

    // MODE1: Set SLEEP mode, to change PRE_SCALE register
    LEDS_WriteReg(I2C_ADDRESS_9685_01, REG_MODE1, 0x10);
    // LEDS_WriteReg(I2C_ADDRESS_9685_02, REG_MODE1, 0x10);

    // PRE_SCALE: Set 200Hz refresh
    LEDS_WriteReg(I2C_ADDRESS_9685_01, REG_PRE_SCALE, 0x1e);
    // LEDS_WriteReg(I2C_ADDRESS_9685_02, REG_PRE_SCALE, 0x1e);

    // MODE1: Exit SLEEP mode
    LEDS_WriteReg(I2C_ADDRESS_9685_01, REG_MODE1, 0x00);
    // LEDS_WriteReg(I2C_ADDRESS_9685_02, REG_MODE1, 0x00);

    __delay_ms(1);

    // MODE1: Restart
    LEDS_WriteReg(I2C_ADDRESS_9685_01, REG_MODE1, 0x80);
    // LEDS_WriteReg(I2C_ADDRESS_9685_02, REG_MODE1, 0x80);

    __delay_ms(1);
}
