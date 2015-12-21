/*******************************************************************************
* File Name: CapSense_1_TunerHelper.h
* Version 1.0
*
* Description:
*  This file provides constants and structure declarations for the tunner hepl
*  APIs for CapSense CSD component.
*
* Note:
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CAPSENSE_CSD_TUNERHELPER_CapSense_1_H)
#define CY_CAPSENSE_CSD_TUNERHELPER_CapSense_1_H

#include "CapSense_1.h"
#include "CapSense_1_CSHL.h"
#if (CapSense_1_TUNER_API_GENERATE)
    #include "CapSense_1_MBX.h"
#endif /* (CapSense_1_TUNER_API_GENERATE) */


/***************************************
*     Constants for mailboxes
***************************************/

#define CapSense_1_DEFAULT_MAILBOXES_NUMBER   (1u)
#define CapSense_1_CMD_WAIT_TIMEOUT           (0xFFFFFFFFu)


/***************************************
*        Function Prototypes
***************************************/

void CapSense_1_TunerStart(void);
void CapSense_1_TunerComm(void);

#if (CapSense_1_TUNER_API_GENERATE)
    uint8 CapSense_1_ReadCommand(void);
    void CapSense_1_WriteCommand(uint32 cmd);
    void CapSense_1_ClearCommand(uint32 cmd);
    void CapSense_1_TxData(volatile CapSense_1_OUTBOX *inbox);
	
	#if (CapSense_1_TUNING_METHOD == CapSense_1_MANUAL_TUNING)
    	void CapSense_1_RxData(volatile CapSense_1_INBOX *inbox);
	#endif  /* (CapSense_1_TUNING_METHOD == CapSense_1_MANUAL_TUNING) */	

#endif /* (CapSense_1_TUNER_API_GENERATE) */

#endif  /* (CY_CAPSENSE_CSD_TUNERHELPER_CapSense_1_H)*/


/* [] END OF FILE */
