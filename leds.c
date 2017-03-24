#include "mcc_generated_files/mcc.h"
#include "leds.h"

#define TLC_5947_CHANNELS   COLORS * 8
#define TLC_5947_PWM_BITS   12

static uint16_t pwmTable[3 * 8]; // RGB PWM values for 8 leds

void LEDS_RGB(uint8_t led, uint16_t red, uint16_t green, uint16_t blue) {
    // 12 bits left aligned in a 16 bit word to save time during SPI bit banging
    pwmTable[led * COLORS + RED] = red << 4;
    pwmTable[led * COLORS + GREEN] = green << 4;
    pwmTable[led * COLORS + BLUE] = blue << 4;
}

void LEDS_Color(uint8_t led, uint8_t color, uint16_t pwm) {
    // 12 bits left aligned in a 16 bit word to save time during SPI bit banging
    pwmTable[led * COLORS + color] = pwm << 4;
}

void LEDS_Initialize(void) {
    for (uint8_t i = 0; i < TLC_5947_CHANNELS; i++) {
        pwmTable[i] = 0x0000u;
    }
    TLC_5947_BLANK_SetLow(); // Enable output
}

void LEDS_Shutdown(void) {
    TLC_5947_BLANK_SetHigh(); // Disable output
}

void LEDS_Tx_Buffer(void) {
    uint16_t pwm; // 12 bit channel PWM value
    uint8_t chBit; // bit pointer for SPI, MSB first (11 -> 0)
    uint8_t channel; // channel pointer for SPI, last channel first (23 -> 0)

    IO_RB5_SetHigh(); // Debug signaling

    channel = TLC_5947_CHANNELS - 1; // Last channel first
    do {
        pwm = pwmTable[channel];
        chBit = TLC_5947_PWM_BITS;
        do {
            // Slightly asymmetric (2 or 3 instructions) but averages one instruction less per bit,
            // marks bits on a 'scope trace and leaves SIN low at the end ov the word.
            TLC_5947_SIN_SetLow(); // SPI bit banging
            if (pwm & 0x8000u) {
                TLC_5947_SIN_SetHigh(); // SPI bit banging
            } 

            TLC_5947_SCLK_SetHigh(); // SPI bit banging
            pwm <<= 1;
            TLC_5947_SCLK_SetLow(); // SPI bit banging
        } while (--chBit > 0);
    } while (--channel >= 0);

    TLC_5947_BLANK_SetHigh(); // Disable output
    TLC_5947_XLAT_SetHigh(); // Latch new pwm values
    TLC_5947_XLAT_SetLow();
    TLC_5947_BLANK_SetLow(); // Enable output

    IO_RB5_SetLow(); // Debug signaling
}