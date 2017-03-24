#ifndef LEDS_H
#define	LEDS_H

#define RED                 0
#define GREEN               1
#define BLUE                2
#define COLORS              3

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
    led - RGB led to change
 * @Param
    red - Red pwm value
 * @Param
    green - Green pwm value
 * @Param
    blue - Blue pwm value
 * @Returns
    none
 * @Description
    Set a led RGB PWM values
 * @Example
    LEDS_RGB(3, 0x0aaa, 0x0555, 0x0000);
 */
void LEDS_RGB(uint8_t led, uint16_t red, uint16_t green, uint16_t blue);

/**
 * @Param
    led - RGB led to change
 * @Param
    color - RED, GREEN, or BLUE
 * @Param
    pwm - color pwm value
 * @Returns
    none
 * @Description
    Set a led PWM color value
 * @Example
    LEDS_Red(3, BLUE, 0x0aaa);
 */
void LEDS_Color(uint8_t led, uint8_t color, uint16_t pwm);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Send a full gray scale buffer to TLC5947
 * @Example
    LEDS_Tx_Buffer();
 */
void LEDS_Tx_Buffer(void);

#endif	/* LEDS_H */