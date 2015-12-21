/*******************************************************************************
* File Name: V1.c  
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
#include "V1.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        V1_PC =   (V1_PC & \
                                (uint32)(~(uint32)(V1_DRIVE_MODE_IND_MASK << (V1_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (V1_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: V1_Write
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
void V1_Write(uint8 value) 
{
    uint8 drVal = (uint8)(V1_DR & (uint8)(~V1_MASK));
    drVal = (drVal | ((uint8)(value << V1_SHIFT) & V1_MASK));
    V1_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: V1_SetDriveMode
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
void V1_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(V1__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: V1_Read
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
*  Macro V1_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 V1_Read(void) 
{
    return (uint8)((V1_PS & V1_MASK) >> V1_SHIFT);
}


/*******************************************************************************
* Function Name: V1_ReadDataReg
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
uint8 V1_ReadDataReg(void) 
{
    return (uint8)((V1_DR & V1_MASK) >> V1_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(V1_INTSTAT) 

    /*******************************************************************************
    * Function Name: V1_ClearInterrupt
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
    uint8 V1_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(V1_INTSTAT & V1_MASK);
		V1_INTSTAT = maskedStatus;
        return maskedStatus >> V1_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
