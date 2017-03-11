#ifndef ENCODER_H
#define	ENCODER_H

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Read 8 rotary encoders with push switch
 * @Example
    TMR0_SetInterruptHandler(TMR0_EncoderInterruptHandler);
 */
void TMR0_EncoderInterruptHandler(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Decode 8 rotary encoders with push switch
 */
void DecodePushEncoder(void);

#endif	/* ENCODER_H */