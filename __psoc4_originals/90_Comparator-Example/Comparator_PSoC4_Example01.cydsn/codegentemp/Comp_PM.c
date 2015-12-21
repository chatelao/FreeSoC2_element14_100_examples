/*******************************************************************************
* File Name: Comp.c
* Version 1.0
*
* Description:
*  This file provides the power management source code APIs for the
*  Comparator.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "Comp.h"


static Comp_BACKUP_STRUCT Comp_backup;


/*******************************************************************************
* Function Name: Comp_SaveConfig
********************************************************************************
*
* Summary:
*  Save the current user configuration
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Comp_SaveConfig(void)
{

}


/*******************************************************************************
* Function Name: Comp_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
********************************************************************************/
void Comp_RestoreConfig(void)
{

}


/*******************************************************************************
* Function Name: Comp_Sleep
********************************************************************************
*
* Summary:
*  Stop and Save the user configuration
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  Comp_backup.enableState:  Is modified depending on the enable
*   state of the block before entering sleep mode.
*
*******************************************************************************/
void Comp_Sleep(void)
{
    if(0u != (Comp_OA_CTRL_REG & Comp_OA_PWR_MODE_HIGH))
    {
        Comp_backup.enableState = 1u;
    }
    else /* The TMP05 block is disabled */
    {
        Comp_backup.enableState = 0u;
    }

    Comp_Stop();
    Comp_SaveConfig();
}


/*******************************************************************************
* Function Name: Comp_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  Comp_backup.enableState:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void Comp_Wakeup(void)
{
    Comp_RestoreConfig();

    if(Comp_backup.enableState == 1u)
    {
        /* Enable Comp's operation */
        Comp_Enable();
    } /* Do nothing if Comp was disabled before */
}


/* [] END OF FILE */

