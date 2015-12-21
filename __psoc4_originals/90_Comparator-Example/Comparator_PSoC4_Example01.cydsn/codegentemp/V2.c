/*******************************************************************************
* File Name: V2.c  
* Version 1.90
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "V2.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        V2_PC =   (V2_PC & \
                                (uint32)(~(uint32)(V2_DRIVE_MODE_IND_MASK << (V2_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (V2_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: V2_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void V2_Write(uint8 value) 
{
    uint8 drVal = (uint8)(V2_DR & (uint8)(~V2_MASK));
    drVal = (drVal | ((uint8)(value << V2_SHIFT) & V2_MASK));
    V2_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: V2_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to this drive mode.
*
* Return: 
*  None
*
*******************************************************************************/
void V2_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(V2__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: V2_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro V2_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 V2_Read(void) 
{
    return (uint8)((V2_PS & V2_MASK) >> V2_SHIFT);
}


/*******************************************************************************
* Function Name: V2_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 V2_ReadDataReg(void) 
{
    return (uint8)((V2_DR & V2_MASK) >> V2_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(V2_INTSTAT) 

    /*******************************************************************************
    * Function Name: V2_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 V2_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(V2_INTSTAT & V2_MASK);
		V2_INTSTAT = maskedStatus;
        return maskedStatus >> V2_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
