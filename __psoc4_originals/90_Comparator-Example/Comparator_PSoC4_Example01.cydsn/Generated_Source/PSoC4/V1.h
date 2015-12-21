/*******************************************************************************
* File Name: V1.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_V1_H) /* Pins V1_H */
#define CY_PINS_V1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "V1_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    V1_Write(uint8 value) ;
void    V1_SetDriveMode(uint8 mode) ;
uint8   V1_ReadDataReg(void) ;
uint8   V1_Read(void) ;
uint8   V1_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define V1_DRIVE_MODE_BITS        (3)
#define V1_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - V1_DRIVE_MODE_BITS))
#define V1_DRIVE_MODE_SHIFT       (0x00u)
#define V1_DRIVE_MODE_MASK        (0x07u << V1_DRIVE_MODE_SHIFT)

#define V1_DM_ALG_HIZ         (0x00u << V1_DRIVE_MODE_SHIFT)
#define V1_DM_DIG_HIZ         (0x01u << V1_DRIVE_MODE_SHIFT)
#define V1_DM_RES_UP          (0x02u << V1_DRIVE_MODE_SHIFT)
#define V1_DM_RES_DWN         (0x03u << V1_DRIVE_MODE_SHIFT)
#define V1_DM_OD_LO           (0x04u << V1_DRIVE_MODE_SHIFT)
#define V1_DM_OD_HI           (0x05u << V1_DRIVE_MODE_SHIFT)
#define V1_DM_STRONG          (0x06u << V1_DRIVE_MODE_SHIFT)
#define V1_DM_RES_UPDWN       (0x07u << V1_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define V1_MASK               V1__MASK
#define V1_SHIFT              V1__SHIFT
#define V1_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define V1_PS                     (* (reg32 *) V1__PS)
/* Port Configuration */
#define V1_PC                     (* (reg32 *) V1__PC)
/* Data Register */
#define V1_DR                     (* (reg32 *) V1__DR)
/* Input Buffer Disable Override */
#define V1_INP_DIS                (* (reg32 *) V1__PC2)


#if defined(V1__INTSTAT)  /* Interrupt Registers */

    #define V1_INTSTAT                (* (reg32 *) V1__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins V1_H */


/* [] END OF FILE */
