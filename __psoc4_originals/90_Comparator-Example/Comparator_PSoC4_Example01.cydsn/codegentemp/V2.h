/*******************************************************************************
* File Name: V2.h  
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

#if !defined(CY_PINS_V2_H) /* Pins V2_H */
#define CY_PINS_V2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "V2_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    V2_Write(uint8 value) ;
void    V2_SetDriveMode(uint8 mode) ;
uint8   V2_ReadDataReg(void) ;
uint8   V2_Read(void) ;
uint8   V2_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define V2_DRIVE_MODE_BITS        (3)
#define V2_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - V2_DRIVE_MODE_BITS))
#define V2_DRIVE_MODE_SHIFT       (0x00u)
#define V2_DRIVE_MODE_MASK        (0x07u << V2_DRIVE_MODE_SHIFT)

#define V2_DM_ALG_HIZ         (0x00u << V2_DRIVE_MODE_SHIFT)
#define V2_DM_DIG_HIZ         (0x01u << V2_DRIVE_MODE_SHIFT)
#define V2_DM_RES_UP          (0x02u << V2_DRIVE_MODE_SHIFT)
#define V2_DM_RES_DWN         (0x03u << V2_DRIVE_MODE_SHIFT)
#define V2_DM_OD_LO           (0x04u << V2_DRIVE_MODE_SHIFT)
#define V2_DM_OD_HI           (0x05u << V2_DRIVE_MODE_SHIFT)
#define V2_DM_STRONG          (0x06u << V2_DRIVE_MODE_SHIFT)
#define V2_DM_RES_UPDWN       (0x07u << V2_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define V2_MASK               V2__MASK
#define V2_SHIFT              V2__SHIFT
#define V2_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define V2_PS                     (* (reg32 *) V2__PS)
/* Port Configuration */
#define V2_PC                     (* (reg32 *) V2__PC)
/* Data Register */
#define V2_DR                     (* (reg32 *) V2__DR)
/* Input Buffer Disable Override */
#define V2_INP_DIS                (* (reg32 *) V2__PC2)


#if defined(V2__INTSTAT)  /* Interrupt Registers */

    #define V2_INTSTAT                (* (reg32 *) V2__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins V2_H */


/* [] END OF FILE */
