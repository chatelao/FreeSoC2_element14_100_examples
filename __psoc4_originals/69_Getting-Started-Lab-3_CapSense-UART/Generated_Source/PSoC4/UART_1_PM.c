/*******************************************************************************
* File Name: UART_1_PM.c
* Version 1.0
*
* Description:
*  This file provides the source code to the Power Management support for
*  the SCB Component.
*
* Note:
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "UART_1.h"

#if(UART_1_SCB_MODE_I2C_INC)
    #include "UART_1_I2C_PVT.h"
#endif /* (UART_1_SCB_MODE_I2C_INC) */

#if(UART_1_SCB_MODE_SPI_INC || UART_1_SCB_MODE_UART_INC)
    #include "UART_1_SPI_UART_PVT.h"
#endif /* (UART_1_SCB_MODE_SPI_INC || UART_1_SCB_MODE_UART_INC) */


/***************************************
*   Backup Structure declaration
***************************************/

UART_1_BACKUP_STRUCT UART_1_backup =
{
    0u, /* enableState */
};


/*******************************************************************************
* Function Name: UART_1_Sleep
********************************************************************************
*
* Summary:
*  Calls SaveConfig function fucntion for selected mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void UART_1_Sleep(void)
{
    UART_1_backup.enableState = (uint8) UART_1_GET_CTRL_ENABLED;

    #if(UART_1_SCB_MODE_UNCONFIG_CONST_CFG)

        if(UART_1_SCB_MODE_I2C_RUNTM_CFG)
        {
            UART_1_I2CSaveConfig();
        }
        else if(UART_1_SCB_MODE_SPI_RUNTM_CFG)
        {
            UART_1_SpiSaveConfig();
        }
        else if(UART_1_SCB_MODE_UART_RUNTM_CFG)
        {
            UART_1_UartSaveConfig();
        }
        else
        {
            /* Unknown mode: do nothing */
        }

    #elif(UART_1_SCB_MODE_I2C_CONST_CFG)
        UART_1_I2CSaveConfig();

    #elif(UART_1_SCB_MODE_SPI_CONST_CFG)
        UART_1_SpiSaveConfig();

    #elif(UART_1_SCB_MODE_UART_CONST_CFG)
        UART_1_UartSaveConfig();

    #else
        /* Do nothing */

    #endif /* (UART_1_SCB_MODE_UNCONFIG_CONST_CFG) */

    if(0u != UART_1_backup.enableState)
    {
        UART_1_Stop();
    }
}


/*******************************************************************************
* Function Name: UART_1_Wakeup
********************************************************************************
*
* Summary:
*  Calls RestoreConfig function fucntion for selected mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void UART_1_Wakeup(void)
{
    #if(UART_1_SCB_MODE_UNCONFIG_CONST_CFG)

        if(UART_1_SCB_MODE_I2C_RUNTM_CFG)
        {
            UART_1_I2CRestoreConfig();
        }
        else if(UART_1_SCB_MODE_SPI_RUNTM_CFG)
        {
            UART_1_SpiRestoreConfig();
        }
        else if(UART_1_SCB_MODE_UART_RUNTM_CFG)
        {
            UART_1_UartRestoreConfig();
        }
        else
        {
            /* Unknown mode: do nothing */
        }

    #elif(UART_1_SCB_MODE_I2C_CONST_CFG)
        UART_1_I2CRestoreConfig();

    #elif(UART_1_SCB_MODE_SPI_CONST_CFG)
        UART_1_SpiRestoreConfig();

    #elif(UART_1_SCB_MODE_UART_CONST_CFG)
        UART_1_UartRestoreConfig();

    #else
        /* Do nothing */

    #endif /* (UART_1_SCB_MODE_UNCONFIG_CONST_CFG) */

    if(0u != UART_1_backup.enableState)
    {
        UART_1_Enable();
    }
}


/* [] END OF FILE */
