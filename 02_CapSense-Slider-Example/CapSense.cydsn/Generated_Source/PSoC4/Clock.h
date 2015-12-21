/*******************************************************************************
* File Name: Clock.h
* Version 2.0
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_Clock_H)
#define CY_CLOCK_Clock_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
*        Function Prototypes
***************************************/

void Clock_Start(void);
void Clock_Stop(void);

void Clock_SetFractionalDividerRegister(uint16 clkDivider, uint8 clkFractional);

uint16 Clock_GetDividerRegister(void);
uint8  Clock_GetFractionalDividerRegister(void);

#define Clock_Enable()                         Clock_Start()
#define Clock_Disable()                        Clock_Stop()
#define Clock_SetDividerRegister(clkDivider, reset)  \
                        Clock_SetFractionalDividerRegister((clkDivider), 0)
#define Clock_SetDivider(clkDivider)           Clock_SetDividerRegister((clkDivider), 1)
#define Clock_SetDividerValue(clkDivider)      Clock_SetDividerRegister((clkDivider) - 1, 1)


/***************************************
*             Registers
***************************************/

#define Clock_DIV_REG    (*(reg32 *)Clock__REGISTER)
#define Clock_ENABLE_REG Clock_DIV_REG

#endif /* !defined(CY_CLOCK_Clock_H) */

/* [] END OF FILE */
