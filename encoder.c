#include "mcc_generated_files/mcc.h"
#include "encoder.h"
#include "leds.h"

/*
 * Quadrature encoder transition table
Transition  Valid?  Move
00  0000	No      0
01  0001	CCW    -1
02  0010	CW      1
03  0011	No      0
04  0100	CW      1
05  0101	No      0
06  0110	No      0
07  0111	CCW    -1
08  1000	CCW    -1
09  1001	No      0
10  1010	No      0
11  1011	CW      1
12  1100	No      0
13  1101	CW      1
14  1110	CCW    -1
15  1111	No      0
 */

volatile int8_t buttonState = 0;
volatile int8_t encoderSteps = 0;
volatile uint8_t encoderPeriod = 0;

void TMR0_EncoderInterruptHandler(void) {
    IO_RB4_Toggle();
    //    IO_RB5_SetHigh();

    // ---------- Read button state
    static int8_t buttonStates[] = {0, 0, 0, 1, -1, 0, 0, 0};
    static uint8_t oldButtonState = 0;

    // Remember previous state
    oldButtonState <<= 1;
    // Add actual state
    oldButtonState |= ENC_00_P_GetValue();
    // Indexed state (de-bounce with at least two consecutive identical states)
    buttonState = buttonStates[(oldButtonState & 0x07)];

    // ---------- Read encoder state
    static int8_t encoderStates[] = {0, -1, 1, 0, 1, 0, 0, -1, -1, 0, 0, 1, 0, 1, -1, 0};
    static uint8_t oldEncoderState = 0;

    // Remember previous state
    oldEncoderState <<= 2;
    // Add actual state
    oldEncoderState |= (ENC_00_B_GetValue());
    oldEncoderState |= (ENC_00_A_GetValue() << 1);
    // Indexed state (de-bounce with at least two consecutive identical states)
    encoderSteps += encoderStates[(oldEncoderState & 0x0f)];
    if (encoderPeriod < UINT8_MAX) {
        encoderPeriod++;
    }

    for (int i = 0; i < (encoderSteps < 0 ? (-encoderSteps) : encoderSteps); i++) {
        IO_RB5_SetHigh();
        Nop();
        Nop();
        Nop();
        IO_RB5_SetLow();
        Nop();
        Nop();
        Nop();
    }
    //    IO_RB5_SetLow();
}

void DecodePushEncoder(void) {
    static int rgb = 0;
    static uint8_t ledsRegs[3] = {0x09, 0x0d, 0x11};
    static uint8_t ledsOffH[3];

    if (buttonState != 0) {
        rgb++;
        if (rgb > 2) {
            rgb = 0;
        }
        buttonState = 0;
    }

    if (encoderSteps != 0) {
        if (encoderSteps >= 4) {
            encoderSteps -= 4;
            //            if (encoderPeriod < SPEEDY_INTERVAL) {
            //            } else {
            //            }

            ledsOffH[rgb] = ledsOffH[rgb] + 1;
            if (ledsOffH[rgb] > 0x0f) {
                ledsOffH[rgb] = 0x00;
            }
            LEDS_WriteReg(I2C_ADDRESS_9685_01, ledsRegs[rgb], ledsOffH[rgb]);

            encoderPeriod = 0;
        }
        if (encoderSteps <= -4) {
            encoderSteps += 4;
            //            if (encoderPeriod < SPEEDY_INTERVAL) {
            //            } else {
            //            }

            if (ledsOffH[rgb] == 0x00) {
                ledsOffH[rgb] = 0x0f;
            } else {
                ledsOffH[rgb] = ledsOffH[rgb] - 1;
            }
            LEDS_WriteReg(I2C_ADDRESS_9685_01, ledsRegs[rgb], ledsOffH[rgb]);

            encoderPeriod = 0;
        }
    }
}