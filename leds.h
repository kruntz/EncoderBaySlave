#ifndef LEDS_H
#define	LEDS_H

// I2C bus addresses
#define I2C_ADDRESS_9685_01 0x40
#define I2C_ADDRESS_9685_02 0x41
#define I2C_ADDRESS_RESET   0x00  // Writing 0x06 to this address will reset the 9685s
#define PCA9685_RESET       0x06

// 9685 control registers
#define REG_MODE1           0x00
#define REG_MODE2           0x01
#define REG_SUBADR1         0x02
#define REG_SUBADR2         0x03
#define REG_SUBADR3         0x04
#define REG_ALLCALLADR      0x05
#define REG_ALL_LED_ON_L    0xfa
#define REG_ALL_LED_ON_H    0xfb
#define REG_ALL_LED_OFF_L   0xfc
#define REG_ALL_LED_OFF_H   0xfd
#define REG_PRE_SCALE       0xfe
#define REG_TEST_MODE       0xff

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Initialize PCA9685 Led driver
 * @Example
    LEDS_Initialize();
 */
void LEDS_Initialize(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Turn off all leds
 * @Example
    LEDS_Shutdown();
 */
void LEDS_Shutdown(void);

/**
 * @Param
    address - I2C peripheral to be accessed
 * @Param
    reg - Register address
 * @Param
    value - Register content required
 * @Returns
    none
 * @Description
    Write a byte value into a device register
 * @Example
    LEDS_WriteReg();
 */
void LEDS_WriteReg(uint8_t address, uint8_t reg, uint8_t value);

#endif	/* LEDS_H */