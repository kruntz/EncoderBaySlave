/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15
        Device            :  PIC18F46K40
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40
 */

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
 */

#include "mcc_generated_files/mcc.h"

int8_t buttonState = 0;
int8_t encoderSteps = 0;
uint8_t encoderPeriod = 0;

void TMR0_EncoderInterruptHandler(void) {
    IO_RB4_Toggle();
//    IO_RB5_SetHigh();
    
    // ---------- Read button state
    static int8_t buttonStates[] = {0,0,0,1,-1,0,0,0};
    static uint8_t oldButtonState = 0;
    
    // Remember previous state
    oldButtonState <<= 1;
    // Add actual state
    oldButtonState |= ENC_00_P_GetValue();
    // Indexed state (de-bounce with at least two consecutive identical states)
    buttonState = buttonStates[(oldButtonState & 0x07)];
    
    // ---------- Read encoder state
    static int8_t encoderStates[] = {0,-1,1,0,1,0,0,-1,-1,0,0,1,0,1,-1,0};
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
    
    int i;
    for (i = 0; i < (encoderSteps<0 ? (-encoderSteps) : encoderSteps); i++) {
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

/*
                         Main application
 */
void main(void) {
    // Initialize the device
    SYSTEM_Initialize();

    TMR0_SetInterruptHandler(TMR0_EncoderInterruptHandler);
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighEnable();

    // Enable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowEnable();

    // Disable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighDisable();

    // Disable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowDisable();

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    uint8_t testByte[2] = {0xaa, 0x55};
    I2C1_MESSAGE_STATUS status;
    while (1) {
//        if (I2C1_MasterQueueIsEmpty() && buttonState != 0) {
//            I2C1_MasterWrite(testByte, 2, 0x10 + buttonState, &status);
//            buttonState = 0;
//        }
        if (I2C1_MasterQueueIsEmpty() && encoderSteps != 0) {
            if (encoderSteps >= 4) {
                encoderSteps -= 4;
                if (encoderPeriod < 150u) {
                    I2C1_MasterWrite(testByte, 2, 0x09, &status);
                } else {
                    I2C1_MasterWrite(testByte, 2, 0x08, &status);
                }
                encoderPeriod = 0;
            }
            if (encoderSteps <= -4) {
                encoderSteps += 4;
                if (encoderPeriod < 150u) {
                    I2C1_MasterWrite(testByte, 2, 0x01, &status);
                } else {
                    I2C1_MasterWrite(testByte, 2, 0x00, &status);
                }
                encoderPeriod = 0;
            }
        }
    }
}
/**
 End of File
 */