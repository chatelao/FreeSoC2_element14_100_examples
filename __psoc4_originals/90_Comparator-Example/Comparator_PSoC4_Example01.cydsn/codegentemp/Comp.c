/*******************************************************************************
* File Name: Comp.c
* Version 1.0
*
* Description:
*  This file provides the source code to the API for the Comparator component
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


uint32 Comp_initVar = 0u;


/*******************************************************************************
* Function Name: Comp_Init
********************************************************************************
*
* Summary:
*  Initialize to the schematic state
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Comp_Init(void)
{
    /* Enable comparator block */
    Comp_CTB_CTRL_REG = ((uint32)1u << Comp_OA_CTB_EN_SHIFT);
    
    Comp_OA_CTRL_REG  = ((uint32)1u << Comp_OA_COMP_EN_SHIFT) | 
        ((uint32)1u << Comp_OA_BYPASS_SHIFT);

    /* Set selected Hysteresis option */
    #if(0 != Comp_HYSTERESIS)
        Comp_OA_CTRL_REG |= ((uint32) 1u << Comp_OA_HYST_EN_SHIFT);
    #endif /* 0 != Comp_HYSTERESIS */
}


/*******************************************************************************
* Function Name: Comp_Enable
********************************************************************************
*
* Summary:
*  Enable the Comparator
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Comp_Enable(void)
{
    Comp_OA_CTRL_REG &= (~(uint32)(Comp_OA_PWR_MODE_HIGH));
    Comp_OA_CTRL_REG |= Comp_POWER | ((uint32) 1u << Comp_OA_PUMP_EN_SHIFT);
}


/*******************************************************************************
* Function Name: Comp_Start
********************************************************************************
*
* Summary:
*  The start function initializes the Analog Comparator with the default values.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  Comp_initVar: Is modified when this function is called for the
*   first time. Is used to ensure that initialization happens only once.
*
*******************************************************************************/
void Comp_Start(void)
{
    if(Comp_initVar == 0u)
    {
        Comp_initVar = 1u;
        Comp_Init();
    }
    Comp_Enable();
}


/*******************************************************************************
* Function Name: Comp_Stop
********************************************************************************
*
* Summary:
*  Powers down amplifier to lowest power state.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Comp_Stop(void)
{
    Comp_OA_CTRL_REG &= (~(uint32)(Comp_OA_PWR_MODE_HIGH | 
        ((uint32) 1u << Comp_OA_PUMP_EN_SHIFT)));
}


/*******************************************************************************
* Function Name: Comp_SetSpeed
********************************************************************************
*
* Summary:
*  This function sets the speed of the Analog Comparator. The faster the speed
*  the more power that is used.
*
* Parameters:
*  speed: (uint32) Sets operation mode of Comparator
*
* Return:
*  None
*
*******************************************************************************/
void Comp_SetSpeed(uint32 speed)
{
    Comp_OA_CTRL_REG &= (~(uint32)Comp_OA_PWR_MODE_MASK);
    Comp_OA_CTRL_REG |= (speed & Comp_OA_PWR_MODE_MASK);
}


/*******************************************************************************
* Function Name: Comp_ZeroCal
********************************************************************************
*
* Summary:
*  This function calibrates the offset of the Analog Comparator.
*  Before calling this API Vplus input of the component should be disconnected
*  from source and connected to Vminus terminal of the component.
*  Use analog multiplexer component for it.
*
* Parameters:
*  None
*
* Return:
*  (uint32)  value written in trim register when calibration complete.
*
*
* Side Effects:
*  Routine clears analog routing associated with the comparator positive input.
*  This may affect routing of signals from other components that are connected
*  to the positive input of the comparator.
*
*******************************************************************************/
uint32 Comp_ZeroCal(void)
{
    uint32 cmpOut;
    uint32 i;
    
    /* Clear trim registers before trimming */
    Comp_OA_OFFSET_TRIM_REG       = 0u;
    Comp_OA_SLOPE_OFFSET_TRIM_REG = 0u;
    
    /* Checking the comparator's output state */
    cmpOut = Comp_GetCompare();
    
    /* 
     Connect the outputs of trim IDACs to the positive
     output leg of the folded cascode 
     */
    if(cmpOut == 0u)
    {
        Comp_OA_OFFSET_TRIM_REG       = ((uint32) 1u << (uint32)Comp_COMP_TRIM_SIGN_SHIFT);
        Comp_OA_SLOPE_OFFSET_TRIM_REG = ((uint32) 1u << (uint32)Comp_COMP_TRIM_SIGN_SHIFT);
    }
    else
    {
        /* 
        Do nothing. Outputs of trim IDACs are connected 
        to the negative output leg of the folded cascode 
         */
    }
    
    /* 
     Searching the offset trim setting, 
     that flips the output of the comparator 
     */
    for(i = 0u; i < Comp_COMP_TRIM_MAX_VALUE; i++)
    {
        Comp_OA_OFFSET_TRIM_REG++;
        CyDelayUs(10u);
        if(cmpOut != Comp_GetCompare())
        {
            break;
        }
    }
    
    /* return offset trim value */
    return (Comp_OA_OFFSET_TRIM_REG);
}


/*******************************************************************************
* Function Name: Comp_LoadTrim
********************************************************************************
*
* Summary:
*  This function stores a value in the Analog Comparator trim register.
*
* Parameters:
*  uint32 trimVal - trim value.  This value is the same format as the value
*  returned by the _ZeroCal routine.
*
* Return:
*  None
*
*******************************************************************************/
void Comp_LoadTrim(uint32 trimVal)
{
    Comp_OA_OFFSET_TRIM_REG = trimVal;
}


/*******************************************************************************
* Function Name: Comp_GetCompare
********************************************************************************
*
* Summary:
*  This function returns the comparator output value.
*
* Parameters:
*   None
*
* Return:
*  (uint32)  0  if Pos_Input less than Neg_input
*            1  if Pos_Input greater than Neg_input.
*
*******************************************************************************/
uint32 Comp_GetCompare(void)
{
    return ((uint32)(Comp_OA_COMPSTAT_REG >> Comp_OA_COMPSHIFT) & 1u);
}

/* [] END OF FILE */
