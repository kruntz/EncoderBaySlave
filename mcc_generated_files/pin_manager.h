/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15
        Device            :  PIC18F46K40
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set ENC_00_P aliases
#define ENC_00_P_TRIS               TRISAbits.TRISA0
#define ENC_00_P_LAT                LATAbits.LATA0
#define ENC_00_P_PORT               PORTAbits.RA0
#define ENC_00_P_WPU                WPUAbits.WPUA0
#define ENC_00_P_OD                ODCONAbits.ODCA0
#define ENC_00_P_ANS                ANSELAbits.ANSELA0
#define ENC_00_P_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define ENC_00_P_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define ENC_00_P_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define ENC_00_P_GetValue()           PORTAbits.RA0
#define ENC_00_P_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define ENC_00_P_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define ENC_00_P_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define ENC_00_P_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define ENC_00_P_SetPushPull()    do { ODCONAbits.ODCA0 = 1; } while(0)
#define ENC_00_P_SetOpenDrain()   do { ODCONAbits.ODCA0 = 0; } while(0)
#define ENC_00_P_SetAnalogMode()  do { ANSELAbits.ANSELA0 = 1; } while(0)
#define ENC_00_P_SetDigitalMode() do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set ENC_01_P aliases
#define ENC_01_P_TRIS               TRISAbits.TRISA1
#define ENC_01_P_LAT                LATAbits.LATA1
#define ENC_01_P_PORT               PORTAbits.RA1
#define ENC_01_P_WPU                WPUAbits.WPUA1
#define ENC_01_P_OD                ODCONAbits.ODCA1
#define ENC_01_P_ANS                ANSELAbits.ANSELA1
#define ENC_01_P_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define ENC_01_P_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define ENC_01_P_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define ENC_01_P_GetValue()           PORTAbits.RA1
#define ENC_01_P_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define ENC_01_P_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define ENC_01_P_SetPullup()      do { WPUAbits.WPUA1 = 1; } while(0)
#define ENC_01_P_ResetPullup()    do { WPUAbits.WPUA1 = 0; } while(0)
#define ENC_01_P_SetPushPull()    do { ODCONAbits.ODCA1 = 1; } while(0)
#define ENC_01_P_SetOpenDrain()   do { ODCONAbits.ODCA1 = 0; } while(0)
#define ENC_01_P_SetAnalogMode()  do { ANSELAbits.ANSELA1 = 1; } while(0)
#define ENC_01_P_SetDigitalMode() do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set ENC_02_P aliases
#define ENC_02_P_TRIS               TRISAbits.TRISA2
#define ENC_02_P_LAT                LATAbits.LATA2
#define ENC_02_P_PORT               PORTAbits.RA2
#define ENC_02_P_WPU                WPUAbits.WPUA2
#define ENC_02_P_OD                ODCONAbits.ODCA2
#define ENC_02_P_ANS                ANSELAbits.ANSELA2
#define ENC_02_P_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define ENC_02_P_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define ENC_02_P_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define ENC_02_P_GetValue()           PORTAbits.RA2
#define ENC_02_P_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define ENC_02_P_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define ENC_02_P_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define ENC_02_P_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define ENC_02_P_SetPushPull()    do { ODCONAbits.ODCA2 = 1; } while(0)
#define ENC_02_P_SetOpenDrain()   do { ODCONAbits.ODCA2 = 0; } while(0)
#define ENC_02_P_SetAnalogMode()  do { ANSELAbits.ANSELA2 = 1; } while(0)
#define ENC_02_P_SetDigitalMode() do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set ENC_03_P aliases
#define ENC_03_P_TRIS               TRISAbits.TRISA3
#define ENC_03_P_LAT                LATAbits.LATA3
#define ENC_03_P_PORT               PORTAbits.RA3
#define ENC_03_P_WPU                WPUAbits.WPUA3
#define ENC_03_P_OD                ODCONAbits.ODCA3
#define ENC_03_P_ANS                ANSELAbits.ANSELA3
#define ENC_03_P_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define ENC_03_P_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define ENC_03_P_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define ENC_03_P_GetValue()           PORTAbits.RA3
#define ENC_03_P_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define ENC_03_P_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define ENC_03_P_SetPullup()      do { WPUAbits.WPUA3 = 1; } while(0)
#define ENC_03_P_ResetPullup()    do { WPUAbits.WPUA3 = 0; } while(0)
#define ENC_03_P_SetPushPull()    do { ODCONAbits.ODCA3 = 1; } while(0)
#define ENC_03_P_SetOpenDrain()   do { ODCONAbits.ODCA3 = 0; } while(0)
#define ENC_03_P_SetAnalogMode()  do { ANSELAbits.ANSELA3 = 1; } while(0)
#define ENC_03_P_SetDigitalMode() do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set ENC_04_P aliases
#define ENC_04_P_TRIS               TRISAbits.TRISA4
#define ENC_04_P_LAT                LATAbits.LATA4
#define ENC_04_P_PORT               PORTAbits.RA4
#define ENC_04_P_WPU                WPUAbits.WPUA4
#define ENC_04_P_OD                ODCONAbits.ODCA4
#define ENC_04_P_ANS                ANSELAbits.ANSELA4
#define ENC_04_P_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define ENC_04_P_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define ENC_04_P_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define ENC_04_P_GetValue()           PORTAbits.RA4
#define ENC_04_P_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define ENC_04_P_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define ENC_04_P_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define ENC_04_P_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define ENC_04_P_SetPushPull()    do { ODCONAbits.ODCA4 = 1; } while(0)
#define ENC_04_P_SetOpenDrain()   do { ODCONAbits.ODCA4 = 0; } while(0)
#define ENC_04_P_SetAnalogMode()  do { ANSELAbits.ANSELA4 = 1; } while(0)
#define ENC_04_P_SetDigitalMode() do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set ENC_05_P aliases
#define ENC_05_P_TRIS               TRISAbits.TRISA5
#define ENC_05_P_LAT                LATAbits.LATA5
#define ENC_05_P_PORT               PORTAbits.RA5
#define ENC_05_P_WPU                WPUAbits.WPUA5
#define ENC_05_P_OD                ODCONAbits.ODCA5
#define ENC_05_P_ANS                ANSELAbits.ANSELA5
#define ENC_05_P_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define ENC_05_P_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define ENC_05_P_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define ENC_05_P_GetValue()           PORTAbits.RA5
#define ENC_05_P_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define ENC_05_P_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define ENC_05_P_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define ENC_05_P_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define ENC_05_P_SetPushPull()    do { ODCONAbits.ODCA5 = 1; } while(0)
#define ENC_05_P_SetOpenDrain()   do { ODCONAbits.ODCA5 = 0; } while(0)
#define ENC_05_P_SetAnalogMode()  do { ANSELAbits.ANSELA5 = 1; } while(0)
#define ENC_05_P_SetDigitalMode() do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set ENC_06_P aliases
#define ENC_06_P_TRIS               TRISAbits.TRISA6
#define ENC_06_P_LAT                LATAbits.LATA6
#define ENC_06_P_PORT               PORTAbits.RA6
#define ENC_06_P_WPU                WPUAbits.WPUA6
#define ENC_06_P_OD                ODCONAbits.ODCA6
#define ENC_06_P_ANS                ANSELAbits.ANSELA6
#define ENC_06_P_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define ENC_06_P_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define ENC_06_P_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define ENC_06_P_GetValue()           PORTAbits.RA6
#define ENC_06_P_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define ENC_06_P_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define ENC_06_P_SetPullup()      do { WPUAbits.WPUA6 = 1; } while(0)
#define ENC_06_P_ResetPullup()    do { WPUAbits.WPUA6 = 0; } while(0)
#define ENC_06_P_SetPushPull()    do { ODCONAbits.ODCA6 = 1; } while(0)
#define ENC_06_P_SetOpenDrain()   do { ODCONAbits.ODCA6 = 0; } while(0)
#define ENC_06_P_SetAnalogMode()  do { ANSELAbits.ANSELA6 = 1; } while(0)
#define ENC_06_P_SetDigitalMode() do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set ENC_07_P aliases
#define ENC_07_P_TRIS               TRISAbits.TRISA7
#define ENC_07_P_LAT                LATAbits.LATA7
#define ENC_07_P_PORT               PORTAbits.RA7
#define ENC_07_P_WPU                WPUAbits.WPUA7
#define ENC_07_P_OD                ODCONAbits.ODCA7
#define ENC_07_P_ANS                ANSELAbits.ANSELA7
#define ENC_07_P_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define ENC_07_P_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define ENC_07_P_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define ENC_07_P_GetValue()           PORTAbits.RA7
#define ENC_07_P_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define ENC_07_P_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define ENC_07_P_SetPullup()      do { WPUAbits.WPUA7 = 1; } while(0)
#define ENC_07_P_ResetPullup()    do { WPUAbits.WPUA7 = 0; } while(0)
#define ENC_07_P_SetPushPull()    do { ODCONAbits.ODCA7 = 1; } while(0)
#define ENC_07_P_SetOpenDrain()   do { ODCONAbits.ODCA7 = 0; } while(0)
#define ENC_07_P_SetAnalogMode()  do { ANSELAbits.ANSELA7 = 1; } while(0)
#define ENC_07_P_SetDigitalMode() do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RB0 procedures
#define RB0_SetHigh()    do { LATBbits.LATB0 = 1; } while(0)
#define RB0_SetLow()   do { LATBbits.LATB0 = 0; } while(0)
#define RB0_Toggle()   do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_GetValue()         PORTBbits.RB0
#define RB0_SetDigitalInput()   do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_SetDigitalOutput()  do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_SetPullup()     do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_ResetPullup()   do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_SetAnalogMode() do { ANSELBbits.ANSELB0 = 1; } while(0)
#define RB0_SetDigitalMode()do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()    do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()   do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()   do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()         PORTBbits.RB1
#define RB1_SetDigitalInput()   do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()  do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()     do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()   do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode() do { ANSELBbits.ANSELB1 = 1; } while(0)
#define RB1_SetDigitalMode()do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set TLC_5947_SCLK aliases
#define TLC_5947_SCLK_TRIS               TRISBbits.TRISB2
#define TLC_5947_SCLK_LAT                LATBbits.LATB2
#define TLC_5947_SCLK_PORT               PORTBbits.RB2
#define TLC_5947_SCLK_WPU                WPUBbits.WPUB2
#define TLC_5947_SCLK_OD                ODCONBbits.ODCB2
#define TLC_5947_SCLK_ANS                ANSELBbits.ANSELB2
#define TLC_5947_SCLK_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define TLC_5947_SCLK_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define TLC_5947_SCLK_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define TLC_5947_SCLK_GetValue()           PORTBbits.RB2
#define TLC_5947_SCLK_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define TLC_5947_SCLK_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define TLC_5947_SCLK_SetPullup()      do { WPUBbits.WPUB2 = 1; } while(0)
#define TLC_5947_SCLK_ResetPullup()    do { WPUBbits.WPUB2 = 0; } while(0)
#define TLC_5947_SCLK_SetPushPull()    do { ODCONBbits.ODCB2 = 1; } while(0)
#define TLC_5947_SCLK_SetOpenDrain()   do { ODCONBbits.ODCB2 = 0; } while(0)
#define TLC_5947_SCLK_SetAnalogMode()  do { ANSELBbits.ANSELB2 = 1; } while(0)
#define TLC_5947_SCLK_SetDigitalMode() do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set TLC_5947_SIN aliases
#define TLC_5947_SIN_TRIS               TRISBbits.TRISB3
#define TLC_5947_SIN_LAT                LATBbits.LATB3
#define TLC_5947_SIN_PORT               PORTBbits.RB3
#define TLC_5947_SIN_WPU                WPUBbits.WPUB3
#define TLC_5947_SIN_OD                ODCONBbits.ODCB3
#define TLC_5947_SIN_ANS                ANSELBbits.ANSELB3
#define TLC_5947_SIN_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define TLC_5947_SIN_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define TLC_5947_SIN_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define TLC_5947_SIN_GetValue()           PORTBbits.RB3
#define TLC_5947_SIN_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define TLC_5947_SIN_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define TLC_5947_SIN_SetPullup()      do { WPUBbits.WPUB3 = 1; } while(0)
#define TLC_5947_SIN_ResetPullup()    do { WPUBbits.WPUB3 = 0; } while(0)
#define TLC_5947_SIN_SetPushPull()    do { ODCONBbits.ODCB3 = 1; } while(0)
#define TLC_5947_SIN_SetOpenDrain()   do { ODCONBbits.ODCB3 = 0; } while(0)
#define TLC_5947_SIN_SetAnalogMode()  do { ANSELBbits.ANSELB3 = 1; } while(0)
#define TLC_5947_SIN_SetDigitalMode() do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set IO_RB4 aliases
#define IO_RB4_TRIS               TRISBbits.TRISB4
#define IO_RB4_LAT                LATBbits.LATB4
#define IO_RB4_PORT               PORTBbits.RB4
#define IO_RB4_WPU                WPUBbits.WPUB4
#define IO_RB4_OD                ODCONBbits.ODCB4
#define IO_RB4_ANS                ANSELBbits.ANSELB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetPushPull()    do { ODCONBbits.ODCB4 = 1; } while(0)
#define IO_RB4_SetOpenDrain()   do { ODCONBbits.ODCB4 = 0; } while(0)
#define IO_RB4_SetAnalogMode()  do { ANSELBbits.ANSELB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode() do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set IO_RB5 aliases
#define IO_RB5_TRIS               TRISBbits.TRISB5
#define IO_RB5_LAT                LATBbits.LATB5
#define IO_RB5_PORT               PORTBbits.RB5
#define IO_RB5_WPU                WPUBbits.WPUB5
#define IO_RB5_OD                ODCONBbits.ODCB5
#define IO_RB5_ANS                ANSELBbits.ANSELB5
#define IO_RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define IO_RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define IO_RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define IO_RB5_GetValue()           PORTBbits.RB5
#define IO_RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define IO_RB5_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define IO_RB5_SetPushPull()    do { ODCONBbits.ODCB5 = 1; } while(0)
#define IO_RB5_SetOpenDrain()   do { ODCONBbits.ODCB5 = 0; } while(0)
#define IO_RB5_SetAnalogMode()  do { ANSELBbits.ANSELB5 = 1; } while(0)
#define IO_RB5_SetDigitalMode() do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set ENC_00_A aliases
#define ENC_00_A_TRIS               TRISCbits.TRISC0
#define ENC_00_A_LAT                LATCbits.LATC0
#define ENC_00_A_PORT               PORTCbits.RC0
#define ENC_00_A_WPU                WPUCbits.WPUC0
#define ENC_00_A_OD                ODCONCbits.ODCC0
#define ENC_00_A_ANS                ANSELCbits.ANSELC0
#define ENC_00_A_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define ENC_00_A_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define ENC_00_A_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define ENC_00_A_GetValue()           PORTCbits.RC0
#define ENC_00_A_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define ENC_00_A_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define ENC_00_A_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define ENC_00_A_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define ENC_00_A_SetPushPull()    do { ODCONCbits.ODCC0 = 1; } while(0)
#define ENC_00_A_SetOpenDrain()   do { ODCONCbits.ODCC0 = 0; } while(0)
#define ENC_00_A_SetAnalogMode()  do { ANSELCbits.ANSELC0 = 1; } while(0)
#define ENC_00_A_SetDigitalMode() do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set ENC_00_B aliases
#define ENC_00_B_TRIS               TRISCbits.TRISC1
#define ENC_00_B_LAT                LATCbits.LATC1
#define ENC_00_B_PORT               PORTCbits.RC1
#define ENC_00_B_WPU                WPUCbits.WPUC1
#define ENC_00_B_OD                ODCONCbits.ODCC1
#define ENC_00_B_ANS                ANSELCbits.ANSELC1
#define ENC_00_B_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define ENC_00_B_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define ENC_00_B_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define ENC_00_B_GetValue()           PORTCbits.RC1
#define ENC_00_B_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define ENC_00_B_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define ENC_00_B_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define ENC_00_B_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define ENC_00_B_SetPushPull()    do { ODCONCbits.ODCC1 = 1; } while(0)
#define ENC_00_B_SetOpenDrain()   do { ODCONCbits.ODCC1 = 0; } while(0)
#define ENC_00_B_SetAnalogMode()  do { ANSELCbits.ANSELC1 = 1; } while(0)
#define ENC_00_B_SetDigitalMode() do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set ENC_01_A aliases
#define ENC_01_A_TRIS               TRISCbits.TRISC2
#define ENC_01_A_LAT                LATCbits.LATC2
#define ENC_01_A_PORT               PORTCbits.RC2
#define ENC_01_A_WPU                WPUCbits.WPUC2
#define ENC_01_A_OD                ODCONCbits.ODCC2
#define ENC_01_A_ANS                ANSELCbits.ANSELC2
#define ENC_01_A_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define ENC_01_A_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define ENC_01_A_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define ENC_01_A_GetValue()           PORTCbits.RC2
#define ENC_01_A_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define ENC_01_A_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define ENC_01_A_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define ENC_01_A_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define ENC_01_A_SetPushPull()    do { ODCONCbits.ODCC2 = 1; } while(0)
#define ENC_01_A_SetOpenDrain()   do { ODCONCbits.ODCC2 = 0; } while(0)
#define ENC_01_A_SetAnalogMode()  do { ANSELCbits.ANSELC2 = 1; } while(0)
#define ENC_01_A_SetDigitalMode() do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set ENC_01_B aliases
#define ENC_01_B_TRIS               TRISCbits.TRISC3
#define ENC_01_B_LAT                LATCbits.LATC3
#define ENC_01_B_PORT               PORTCbits.RC3
#define ENC_01_B_WPU                WPUCbits.WPUC3
#define ENC_01_B_OD                ODCONCbits.ODCC3
#define ENC_01_B_ANS                ANSELCbits.ANSELC3
#define ENC_01_B_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define ENC_01_B_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define ENC_01_B_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define ENC_01_B_GetValue()           PORTCbits.RC3
#define ENC_01_B_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define ENC_01_B_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define ENC_01_B_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define ENC_01_B_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define ENC_01_B_SetPushPull()    do { ODCONCbits.ODCC3 = 1; } while(0)
#define ENC_01_B_SetOpenDrain()   do { ODCONCbits.ODCC3 = 0; } while(0)
#define ENC_01_B_SetAnalogMode()  do { ANSELCbits.ANSELC3 = 1; } while(0)
#define ENC_01_B_SetDigitalMode() do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set ENC_02_A aliases
#define ENC_02_A_TRIS               TRISCbits.TRISC4
#define ENC_02_A_LAT                LATCbits.LATC4
#define ENC_02_A_PORT               PORTCbits.RC4
#define ENC_02_A_WPU                WPUCbits.WPUC4
#define ENC_02_A_OD                ODCONCbits.ODCC4
#define ENC_02_A_ANS                ANSELCbits.ANSELC4
#define ENC_02_A_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define ENC_02_A_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define ENC_02_A_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define ENC_02_A_GetValue()           PORTCbits.RC4
#define ENC_02_A_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define ENC_02_A_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define ENC_02_A_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define ENC_02_A_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define ENC_02_A_SetPushPull()    do { ODCONCbits.ODCC4 = 1; } while(0)
#define ENC_02_A_SetOpenDrain()   do { ODCONCbits.ODCC4 = 0; } while(0)
#define ENC_02_A_SetAnalogMode()  do { ANSELCbits.ANSELC4 = 1; } while(0)
#define ENC_02_A_SetDigitalMode() do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set ENC_02_B aliases
#define ENC_02_B_TRIS               TRISCbits.TRISC5
#define ENC_02_B_LAT                LATCbits.LATC5
#define ENC_02_B_PORT               PORTCbits.RC5
#define ENC_02_B_WPU                WPUCbits.WPUC5
#define ENC_02_B_OD                ODCONCbits.ODCC5
#define ENC_02_B_ANS                ANSELCbits.ANSELC5
#define ENC_02_B_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define ENC_02_B_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define ENC_02_B_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define ENC_02_B_GetValue()           PORTCbits.RC5
#define ENC_02_B_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define ENC_02_B_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define ENC_02_B_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define ENC_02_B_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define ENC_02_B_SetPushPull()    do { ODCONCbits.ODCC5 = 1; } while(0)
#define ENC_02_B_SetOpenDrain()   do { ODCONCbits.ODCC5 = 0; } while(0)
#define ENC_02_B_SetAnalogMode()  do { ANSELCbits.ANSELC5 = 1; } while(0)
#define ENC_02_B_SetDigitalMode() do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set ENC_03_A aliases
#define ENC_03_A_TRIS               TRISCbits.TRISC6
#define ENC_03_A_LAT                LATCbits.LATC6
#define ENC_03_A_PORT               PORTCbits.RC6
#define ENC_03_A_WPU                WPUCbits.WPUC6
#define ENC_03_A_OD                ODCONCbits.ODCC6
#define ENC_03_A_ANS                ANSELCbits.ANSELC6
#define ENC_03_A_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define ENC_03_A_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define ENC_03_A_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define ENC_03_A_GetValue()           PORTCbits.RC6
#define ENC_03_A_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define ENC_03_A_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define ENC_03_A_SetPullup()      do { WPUCbits.WPUC6 = 1; } while(0)
#define ENC_03_A_ResetPullup()    do { WPUCbits.WPUC6 = 0; } while(0)
#define ENC_03_A_SetPushPull()    do { ODCONCbits.ODCC6 = 1; } while(0)
#define ENC_03_A_SetOpenDrain()   do { ODCONCbits.ODCC6 = 0; } while(0)
#define ENC_03_A_SetAnalogMode()  do { ANSELCbits.ANSELC6 = 1; } while(0)
#define ENC_03_A_SetDigitalMode() do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set ENC_03_B aliases
#define ENC_03_B_TRIS               TRISCbits.TRISC7
#define ENC_03_B_LAT                LATCbits.LATC7
#define ENC_03_B_PORT               PORTCbits.RC7
#define ENC_03_B_WPU                WPUCbits.WPUC7
#define ENC_03_B_OD                ODCONCbits.ODCC7
#define ENC_03_B_ANS                ANSELCbits.ANSELC7
#define ENC_03_B_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define ENC_03_B_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define ENC_03_B_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define ENC_03_B_GetValue()           PORTCbits.RC7
#define ENC_03_B_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define ENC_03_B_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define ENC_03_B_SetPullup()      do { WPUCbits.WPUC7 = 1; } while(0)
#define ENC_03_B_ResetPullup()    do { WPUCbits.WPUC7 = 0; } while(0)
#define ENC_03_B_SetPushPull()    do { ODCONCbits.ODCC7 = 1; } while(0)
#define ENC_03_B_SetOpenDrain()   do { ODCONCbits.ODCC7 = 0; } while(0)
#define ENC_03_B_SetAnalogMode()  do { ANSELCbits.ANSELC7 = 1; } while(0)
#define ENC_03_B_SetDigitalMode() do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set ENC_04_A aliases
#define ENC_04_A_TRIS               TRISDbits.TRISD0
#define ENC_04_A_LAT                LATDbits.LATD0
#define ENC_04_A_PORT               PORTDbits.RD0
#define ENC_04_A_WPU                WPUDbits.WPUD0
#define ENC_04_A_OD                ODCONDbits.ODCD0
#define ENC_04_A_ANS                ANSELDbits.ANSELD0
#define ENC_04_A_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define ENC_04_A_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define ENC_04_A_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define ENC_04_A_GetValue()           PORTDbits.RD0
#define ENC_04_A_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define ENC_04_A_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define ENC_04_A_SetPullup()      do { WPUDbits.WPUD0 = 1; } while(0)
#define ENC_04_A_ResetPullup()    do { WPUDbits.WPUD0 = 0; } while(0)
#define ENC_04_A_SetPushPull()    do { ODCONDbits.ODCD0 = 1; } while(0)
#define ENC_04_A_SetOpenDrain()   do { ODCONDbits.ODCD0 = 0; } while(0)
#define ENC_04_A_SetAnalogMode()  do { ANSELDbits.ANSELD0 = 1; } while(0)
#define ENC_04_A_SetDigitalMode() do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set ENC_04_B aliases
#define ENC_04_B_TRIS               TRISDbits.TRISD1
#define ENC_04_B_LAT                LATDbits.LATD1
#define ENC_04_B_PORT               PORTDbits.RD1
#define ENC_04_B_WPU                WPUDbits.WPUD1
#define ENC_04_B_OD                ODCONDbits.ODCD1
#define ENC_04_B_ANS                ANSELDbits.ANSELD1
#define ENC_04_B_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define ENC_04_B_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define ENC_04_B_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define ENC_04_B_GetValue()           PORTDbits.RD1
#define ENC_04_B_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define ENC_04_B_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define ENC_04_B_SetPullup()      do { WPUDbits.WPUD1 = 1; } while(0)
#define ENC_04_B_ResetPullup()    do { WPUDbits.WPUD1 = 0; } while(0)
#define ENC_04_B_SetPushPull()    do { ODCONDbits.ODCD1 = 1; } while(0)
#define ENC_04_B_SetOpenDrain()   do { ODCONDbits.ODCD1 = 0; } while(0)
#define ENC_04_B_SetAnalogMode()  do { ANSELDbits.ANSELD1 = 1; } while(0)
#define ENC_04_B_SetDigitalMode() do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set ENC_05_A aliases
#define ENC_05_A_TRIS               TRISDbits.TRISD2
#define ENC_05_A_LAT                LATDbits.LATD2
#define ENC_05_A_PORT               PORTDbits.RD2
#define ENC_05_A_WPU                WPUDbits.WPUD2
#define ENC_05_A_OD                ODCONDbits.ODCD2
#define ENC_05_A_ANS                ANSELDbits.ANSELD2
#define ENC_05_A_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define ENC_05_A_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define ENC_05_A_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define ENC_05_A_GetValue()           PORTDbits.RD2
#define ENC_05_A_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define ENC_05_A_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define ENC_05_A_SetPullup()      do { WPUDbits.WPUD2 = 1; } while(0)
#define ENC_05_A_ResetPullup()    do { WPUDbits.WPUD2 = 0; } while(0)
#define ENC_05_A_SetPushPull()    do { ODCONDbits.ODCD2 = 1; } while(0)
#define ENC_05_A_SetOpenDrain()   do { ODCONDbits.ODCD2 = 0; } while(0)
#define ENC_05_A_SetAnalogMode()  do { ANSELDbits.ANSELD2 = 1; } while(0)
#define ENC_05_A_SetDigitalMode() do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set ENC_05_B aliases
#define ENC_05_B_TRIS               TRISDbits.TRISD3
#define ENC_05_B_LAT                LATDbits.LATD3
#define ENC_05_B_PORT               PORTDbits.RD3
#define ENC_05_B_WPU                WPUDbits.WPUD3
#define ENC_05_B_OD                ODCONDbits.ODCD3
#define ENC_05_B_ANS                ANSELDbits.ANSELD3
#define ENC_05_B_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define ENC_05_B_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define ENC_05_B_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define ENC_05_B_GetValue()           PORTDbits.RD3
#define ENC_05_B_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define ENC_05_B_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define ENC_05_B_SetPullup()      do { WPUDbits.WPUD3 = 1; } while(0)
#define ENC_05_B_ResetPullup()    do { WPUDbits.WPUD3 = 0; } while(0)
#define ENC_05_B_SetPushPull()    do { ODCONDbits.ODCD3 = 1; } while(0)
#define ENC_05_B_SetOpenDrain()   do { ODCONDbits.ODCD3 = 0; } while(0)
#define ENC_05_B_SetAnalogMode()  do { ANSELDbits.ANSELD3 = 1; } while(0)
#define ENC_05_B_SetDigitalMode() do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set ENC_06_A aliases
#define ENC_06_A_TRIS               TRISDbits.TRISD4
#define ENC_06_A_LAT                LATDbits.LATD4
#define ENC_06_A_PORT               PORTDbits.RD4
#define ENC_06_A_WPU                WPUDbits.WPUD4
#define ENC_06_A_OD                ODCONDbits.ODCD4
#define ENC_06_A_ANS                ANSELDbits.ANSELD4
#define ENC_06_A_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define ENC_06_A_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define ENC_06_A_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define ENC_06_A_GetValue()           PORTDbits.RD4
#define ENC_06_A_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define ENC_06_A_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define ENC_06_A_SetPullup()      do { WPUDbits.WPUD4 = 1; } while(0)
#define ENC_06_A_ResetPullup()    do { WPUDbits.WPUD4 = 0; } while(0)
#define ENC_06_A_SetPushPull()    do { ODCONDbits.ODCD4 = 1; } while(0)
#define ENC_06_A_SetOpenDrain()   do { ODCONDbits.ODCD4 = 0; } while(0)
#define ENC_06_A_SetAnalogMode()  do { ANSELDbits.ANSELD4 = 1; } while(0)
#define ENC_06_A_SetDigitalMode() do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set ENC_06_B aliases
#define ENC_06_B_TRIS               TRISDbits.TRISD5
#define ENC_06_B_LAT                LATDbits.LATD5
#define ENC_06_B_PORT               PORTDbits.RD5
#define ENC_06_B_WPU                WPUDbits.WPUD5
#define ENC_06_B_OD                ODCONDbits.ODCD5
#define ENC_06_B_ANS                ANSELDbits.ANSELD5
#define ENC_06_B_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define ENC_06_B_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define ENC_06_B_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define ENC_06_B_GetValue()           PORTDbits.RD5
#define ENC_06_B_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define ENC_06_B_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define ENC_06_B_SetPullup()      do { WPUDbits.WPUD5 = 1; } while(0)
#define ENC_06_B_ResetPullup()    do { WPUDbits.WPUD5 = 0; } while(0)
#define ENC_06_B_SetPushPull()    do { ODCONDbits.ODCD5 = 1; } while(0)
#define ENC_06_B_SetOpenDrain()   do { ODCONDbits.ODCD5 = 0; } while(0)
#define ENC_06_B_SetAnalogMode()  do { ANSELDbits.ANSELD5 = 1; } while(0)
#define ENC_06_B_SetDigitalMode() do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set ENC_07_A aliases
#define ENC_07_A_TRIS               TRISDbits.TRISD6
#define ENC_07_A_LAT                LATDbits.LATD6
#define ENC_07_A_PORT               PORTDbits.RD6
#define ENC_07_A_WPU                WPUDbits.WPUD6
#define ENC_07_A_OD                ODCONDbits.ODCD6
#define ENC_07_A_ANS                ANSELDbits.ANSELD6
#define ENC_07_A_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define ENC_07_A_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define ENC_07_A_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define ENC_07_A_GetValue()           PORTDbits.RD6
#define ENC_07_A_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define ENC_07_A_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define ENC_07_A_SetPullup()      do { WPUDbits.WPUD6 = 1; } while(0)
#define ENC_07_A_ResetPullup()    do { WPUDbits.WPUD6 = 0; } while(0)
#define ENC_07_A_SetPushPull()    do { ODCONDbits.ODCD6 = 1; } while(0)
#define ENC_07_A_SetOpenDrain()   do { ODCONDbits.ODCD6 = 0; } while(0)
#define ENC_07_A_SetAnalogMode()  do { ANSELDbits.ANSELD6 = 1; } while(0)
#define ENC_07_A_SetDigitalMode() do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set ENC_07_B aliases
#define ENC_07_B_TRIS               TRISDbits.TRISD7
#define ENC_07_B_LAT                LATDbits.LATD7
#define ENC_07_B_PORT               PORTDbits.RD7
#define ENC_07_B_WPU                WPUDbits.WPUD7
#define ENC_07_B_OD                ODCONDbits.ODCD7
#define ENC_07_B_ANS                ANSELDbits.ANSELD7
#define ENC_07_B_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define ENC_07_B_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define ENC_07_B_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define ENC_07_B_GetValue()           PORTDbits.RD7
#define ENC_07_B_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define ENC_07_B_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define ENC_07_B_SetPullup()      do { WPUDbits.WPUD7 = 1; } while(0)
#define ENC_07_B_ResetPullup()    do { WPUDbits.WPUD7 = 0; } while(0)
#define ENC_07_B_SetPushPull()    do { ODCONDbits.ODCD7 = 1; } while(0)
#define ENC_07_B_SetOpenDrain()   do { ODCONDbits.ODCD7 = 0; } while(0)
#define ENC_07_B_SetAnalogMode()  do { ANSELDbits.ANSELD7 = 1; } while(0)
#define ENC_07_B_SetDigitalMode() do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set TLC_5947_XLAT aliases
#define TLC_5947_XLAT_TRIS               TRISEbits.TRISE0
#define TLC_5947_XLAT_LAT                LATEbits.LATE0
#define TLC_5947_XLAT_PORT               PORTEbits.RE0
#define TLC_5947_XLAT_WPU                WPUEbits.WPUE0
#define TLC_5947_XLAT_OD                ODCONEbits.ODCE0
#define TLC_5947_XLAT_ANS                ANSELEbits.ANSELE0
#define TLC_5947_XLAT_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define TLC_5947_XLAT_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define TLC_5947_XLAT_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define TLC_5947_XLAT_GetValue()           PORTEbits.RE0
#define TLC_5947_XLAT_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define TLC_5947_XLAT_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define TLC_5947_XLAT_SetPullup()      do { WPUEbits.WPUE0 = 1; } while(0)
#define TLC_5947_XLAT_ResetPullup()    do { WPUEbits.WPUE0 = 0; } while(0)
#define TLC_5947_XLAT_SetPushPull()    do { ODCONEbits.ODCE0 = 1; } while(0)
#define TLC_5947_XLAT_SetOpenDrain()   do { ODCONEbits.ODCE0 = 0; } while(0)
#define TLC_5947_XLAT_SetAnalogMode()  do { ANSELEbits.ANSELE0 = 1; } while(0)
#define TLC_5947_XLAT_SetDigitalMode() do { ANSELEbits.ANSELE0 = 0; } while(0)

// get/set TLC_5947_BLANK aliases
#define TLC_5947_BLANK_TRIS               TRISEbits.TRISE1
#define TLC_5947_BLANK_LAT                LATEbits.LATE1
#define TLC_5947_BLANK_PORT               PORTEbits.RE1
#define TLC_5947_BLANK_WPU                WPUEbits.WPUE1
#define TLC_5947_BLANK_OD                ODCONEbits.ODCE1
#define TLC_5947_BLANK_ANS                ANSELEbits.ANSELE1
#define TLC_5947_BLANK_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define TLC_5947_BLANK_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define TLC_5947_BLANK_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define TLC_5947_BLANK_GetValue()           PORTEbits.RE1
#define TLC_5947_BLANK_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define TLC_5947_BLANK_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define TLC_5947_BLANK_SetPullup()      do { WPUEbits.WPUE1 = 1; } while(0)
#define TLC_5947_BLANK_ResetPullup()    do { WPUEbits.WPUE1 = 0; } while(0)
#define TLC_5947_BLANK_SetPushPull()    do { ODCONEbits.ODCE1 = 1; } while(0)
#define TLC_5947_BLANK_SetOpenDrain()   do { ODCONEbits.ODCE1 = 0; } while(0)
#define TLC_5947_BLANK_SetAnalogMode()  do { ANSELEbits.ANSELE1 = 1; } while(0)
#define TLC_5947_BLANK_SetDigitalMode() do { ANSELEbits.ANSELE1 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/