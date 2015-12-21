/*******************************************************************************
* File Name: CapSense_1_TunerHelper.c
* Version 1.0
*
* Description:
*  This file provides the source code of Tuner helper APIs for the CapSense CSD 
*  component.
*
* Note:
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "CapSense_1_TunerHelper.h"

#if (CapSense_1_TUNER_API_GENERATE)
    #include "CapSense_1_TunerIntf.h"
	#include "CapSense_1_TunerIntf_EZBUF_MODE.h"
    
    void CapSense_1_ProcessAllWidgets(volatile CapSense_1_OUTBOX *outbox);
    
    volatile CapSense_1_MAILBOXES CapSense_1_mailboxesComm;

    extern uint8 CapSense_1_SensorOnMask[(((CapSense_1_TOTAL_SENSOR_COUNT - 1u) / 8u) + 1u)];
#endif  /* (CapSense_1_TUNER_API_GENERATE) */


/*******************************************************************************
* Function Name: CapSense_1_TunerStart
********************************************************************************
*
* Summary:
*  Initializes CapSense CSD component and EzI2C communication componenet to use
*  mailbox data structure for communication with Tuner GUI.
*  Start the scanning, after initialization complete.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Reentrant:
*  No
*
*******************************************************************************/
void CapSense_1_TunerStart(void)
{
    #if (CapSense_1_TUNER_API_GENERATE)
        
        /* Init mbx and quick check */
        CapSense_1_InitMailbox(&CapSense_1_mailboxesComm.csdMailbox);
        CapSense_1_mailboxesComm.numMailBoxes = CapSense_1_DEFAULT_MAILBOXES_NUMBER;
        
        /* Start EzI2C, clears buf pointers */
        CapSense_1_TunerIntf_Start(); 
        
        /* Start CapSense and baselines */
        CapSense_1_Start();
        
        /* Initialize baselines */ 
        CapSense_1_InitializeAllBaselines();
        CapSense_1_InitializeAllBaselines();
        
        /* Starts scan all enabled sensors */
        CapSense_1_ScanEnabledWidgets();
    
    #endif  /* (CapSense_1_TUNER_API_GENERATE) */
}


/*******************************************************************************
* Function Name: CapSense_1_TunerComm
********************************************************************************
*
* Summary:
*  This function is blocking. It waits till scaning loop is completed and apply
*  new parameters from Tuner GUI if available (manual tuning mode only). Updates
*  enabled baselines and state of widgets. Waits while Tuner GUI reports that 
*  content of mailbox could be modified. Then loads the report data into outbox 
*  and sets the busy flag. Starts new scanning loop.
*  
* Parameters:
*  None
*
* Return:
*  None
*
* Reentrant:
*  No
*
*******************************************************************************/
void CapSense_1_TunerComm(void)
{   
    #if (CapSense_1_TUNER_API_GENERATE)
            
        if (0u == CapSense_1_IsBusy())
        {	
            
            CapSense_1_TunerIntf_EzBufWriteByte((uint32)0u, 0);
            
            CapSense_1_ProcessAllWidgets(&CapSense_1_mailboxesComm.csdMailbox.outbox);
            CapSense_1_PostMessage(&CapSense_1_mailboxesComm.csdMailbox);
            
            do{
                CapSense_1_ClearCommand(CapSense_1_RESEND_REQ);
                CapSense_1_TxData(&CapSense_1_mailboxesComm.csdMailbox.outbox);
            }while(CapSense_1_RESEND_REQ & CapSense_1_ReadCommand());
            
        #if (CapSense_1_TUNING_METHOD == CapSense_1_MANUAL_TUNING)
				if(CapSense_1_HAVE_MSG & CapSense_1_ReadCommand())
				{
					CapSense_1_ClearCommand(CapSense_1_HAVE_MSG);
					CapSense_1_RxData(&CapSense_1_mailboxesComm.csdMailbox.inbox);
                	CapSense_1_ReadMessage(&CapSense_1_mailboxesComm.csdMailbox);
				}
        #endif  /* (CapSense_1_TUNING_METHOD == CapSense_1_MANUAL_TUNING) */
		
	    /* Update all baselines and process all widgets */
        CapSense_1_UpdateEnabledBaselines();
		
        /* Start scan all sensors */
        CapSense_1_ScanEnabledWidgets();
		
        }
        
    #endif /* (CapSense_1_TUNER_API_GENERATE) */
    
}


#if (CapSense_1_TUNER_API_GENERATE)
    /*******************************************************************************
    * Function Name: CapSense_1_ProcessAllWidgets
    ********************************************************************************
    *
    * Summary:
    *  Call required functions to update all widgets state:
    *   - CapSense_1_GetCentroidPos() - calls only if linear sliders 
    *     available.
    *   - CapSense_1_GetRadialCentroidPos() - calls only if radial slider 
    *     available.
    *   - CapSense_1_GetTouchCentroidPos() - calls only if touch pad slider 
    *     available.
    *   - CapSense_1_CheckIsAnyWidgetActive();
    *  The results of opeartions are copied to OUTBOX.
    *   
    * Parameters:
    *  None
    *
    * Return:
    *  None
    *
    * Global Variables:
    *  CapSense_1_OUTBOX outbox - structure which is used as ouput 
    *  buffer for report data to Tuner GUI.
    *  Update fields:
    *    - position[];
    *    - OnMask[];
    *
    * Reentrant:
    *  No
    *
    *******************************************************************************/
    void CapSense_1_ProcessAllWidgets(volatile CapSense_1_OUTBOX *outbox)
    {
        uint8 i = 0u;

        #if (CapSense_1_TOTAL_TOUCH_PADS_COUNT)
            uint16 pos[2];
        #endif  /* (CapSense_1_TOTAL_TOUCH_PADS_COUNT) */
        
        #if ( (CapSense_1_TOTAL_RADIAL_SLIDERS_COUNT) || (CapSense_1_TOTAL_TOUCH_PADS_COUNT) || \
              (CapSense_1_TOTAL_MATRIX_BUTTONS_COUNT) )
            uint8 widgetCnt = 0u;
        #endif  /* ((CapSense_1_TOTAL_RADIAL_SLIDERS_COUNT) || (CapSense_1_TOTAL_TOUCH_PADS_COUNT)) || 
                *   (CapSense_1_TOTAL_MATRIX_BUTTONS_COUNT)
                */
        
        /* Calculate widget with centroids */
        #if (CapSense_1_TOTAL_LINEAR_SLIDERS_COUNT)
            for(; i < CapSense_1_TOTAL_LINEAR_SLIDERS_COUNT; i++)
            {
                outbox->position[i] = (uint16)CapSense_1_GetCentroidPos(i);
            }
        #endif /* (CapSense_1_TOTAL_LINEAR_SLIDERS_COUNT) */
        
        #if (CapSense_1_TOTAL_RADIAL_SLIDERS_COUNT)
            widgetCnt = i;
            for(; i < widgetCnt + CapSense_1_TOTAL_RADIAL_SLIDERS_COUNT; i++)
            {
                outbox->position[i] = (uint16)CapSense_1_GetRadialCentroidPos(i);
            }
        #endif /* (CapSense_1_TOTAL_RADIAL_SLIDERS_COUNT) */
        
        #if (CapSense_1_TOTAL_TOUCH_PADS_COUNT)
            widgetCnt = i;
            for(; i < (widgetCnt + (CapSense_1_TOTAL_TOUCH_PADS_COUNT * 2)); i=i+2)
            {
                if(CapSense_1_GetTouchCentroidPos(i, pos) == 0u)
                {
                    outbox->position[i] = 0xFFFFu;
                    outbox->position[i+1] = 0xFFFFu;
                }
                else
                {
                    outbox->position[i] = (uint16) pos[0u];
                    outbox->position[i+1] =(uint16) pos[1u];
                }
            }
        #endif /* (CapSense_1_TOTAL_TOUCH_PADS_COUNT) */

        #if (CapSense_1_TOTAL_MATRIX_BUTTONS_COUNT)
            i += CapSense_1_TOTAL_BUTTONS_COUNT;
            widgetCnt = 0;
            for(; widgetCnt < (CapSense_1_TOTAL_MATRIX_BUTTONS_COUNT * 2); i += 2)
            {
                if(CapSense_1_GetMatrixButtonPos(i, ((uint8*) &outbox->mb_position[widgetCnt])) == 0)
                {
                    outbox->mb_position[widgetCnt] = 0xFFu;
                    outbox->mb_position[widgetCnt+1] = 0xFF;
                }
                widgetCnt += 2;
            }
        #endif /* (CapSense_1_TOTAL_MATRIX_BUTTONS_COUNT) */

        /* Update On/Off State */
        CapSense_1_CheckIsAnyWidgetActive();

        /* Copy OnMask */
        for(i=0; i < CapSense_1_TOTAL_SENSOR_MASK_COUNT; i++)
        {
            outbox->onMask[i]  = CapSense_1_SensorOnMask[i];
        }
    }


    /*******************************************************************************
    * Function Name: CapSense_1_ReadCommand
    ********************************************************************************
    *
    * Summary:
    *  Intended to getting commands from EzI2C buffer. 
    *  
    * Parameters:
    *  None
    *
    * Return:
    *  Returns command from tuner.
    *
    * Reentrant:
    *  No
    *
    *******************************************************************************/
    uint8 CapSense_1_ReadCommand(void)
    {
        return ((uint8)CapSense_1_TunerIntf_EzBufReadByte((uint32)0u));
    }


    /*******************************************************************************
    * Function Name: CapSense_1_ReadCommand
    ********************************************************************************
    *
    * Summary:
    *  Intended to writing command for tuner into EzI2C buffer. 
    *  
    * Parameters:
    *  Command that need to be executed by tuner.
    *
    * Return:
    *  None
    *
    * Reentrant:
    *  No
    *
    *******************************************************************************/
    void CapSense_1_WriteCommand(uint32 cmd)
    {
        uint32 tmp_cmd = cmd | CapSense_1_TunerIntf_EzBufReadByte((uint32)0u); 
        CapSense_1_TunerIntf_EzBufWriteByte((uint32)0u, tmp_cmd);
    }
    
    
    /*******************************************************************************
    * Function Name: CapSense_1_ClearCommand
    ********************************************************************************
    *
    * Summary:
    *  Intended to clearing command in EzI2C buffer after execution. 
    *  
    * Parameters:
    *  Flags that need to be cleared.
    *
    * Return:
    *  None
    *
    * Reentrant:
    *  No
    *
    *******************************************************************************/
    void CapSense_1_ClearCommand(uint32 cmd)
    {
        uint32 tmp_cmd = ~cmd & CapSense_1_TunerIntf_EzBufReadByte((uint32)0u); 
        CapSense_1_TunerIntf_EzBufWriteByte((uint32)0u, tmp_cmd);
    }


    /*******************************************************************************
    * Function Name: CapSense_1_TxData
    ********************************************************************************
    *
    * Summary:
    *  Transmission of data from target to the tuner. 
    *  
    * Parameters:
    *  Pointer to the outbox buffer.
    *
    * Return:
    *  None
    *
    * Reentrant:
    *  No
    *
    *******************************************************************************/
    void CapSense_1_TxData(volatile CapSense_1_OUTBOX *outbox)
    {
        uint32 cmdWaitTimer;
        uint16 outboxIndex = 0u;
        uint8  txBufferIndex = 1u;
        uint8 *outboxPtr = (uint8*)outbox;
        
        while((outboxIndex < outbox->size) && (!((CapSense_1_START_SCAN | CapSense_1_RESEND_REQ | CapSense_1_HAVE_MSG) & CapSense_1_ReadCommand())))
        {
            txBufferIndex = 1u;
            cmdWaitTimer = 0u;
            
            while((txBufferIndex < 32u) && (outboxIndex < CapSense_1_OUTBOX_SIZE))
            {
                CapSense_1_TunerIntf_EzBufWriteByte(txBufferIndex, outboxPtr[outboxIndex]);
                txBufferIndex++;
                outboxIndex++;
            }
            if(outboxIndex < 32u)
            {
                CapSense_1_WriteCommand(CapSense_1_START_FRAME);
            }
            if(outboxIndex == outbox->size)
            {
                CapSense_1_WriteCommand(CapSense_1_END_FRAME);
            }
            else
            {
                CapSense_1_WriteCommand(CapSense_1_NEXT_FRAME);
            }
            
            while(!((CapSense_1_START_SCAN | CapSense_1_READY | CapSense_1_RESEND_REQ | CapSense_1_HAVE_MSG) & CapSense_1_ReadCommand()))
            {
                cmdWaitTimer++;
            }
            CapSense_1_ClearCommand(CapSense_1_READY);
        }
    }
    
	#if (CapSense_1_TUNING_METHOD == CapSense_1_MANUAL_TUNING)
    
    
    /*******************************************************************************
    * Function Name: CapSense_1_RxData
    ********************************************************************************
    *
    * Summary:
    *  Transmision data from tuner to target. 
    *  
    * Parameters:
    *  Pointer to the inbox buffer.
    *
    * Return:
    *  None
    *
    * Reentrant:
    *  No
    *
    *******************************************************************************/
	    void CapSense_1_RxData(volatile CapSense_1_INBOX *inbox)
	    {
	        uint8 *inboxPtr = (uint8*)inbox;
	        uint8  txBufferIndex = 0u;
	        
	        for(txBufferIndex = 0u; txBufferIndex < CapSense_1_INBOX_SIZE; txBufferIndex++)
	        {
	            inboxPtr[txBufferIndex] = CapSense_1_TunerIntf_EzBufReadByte(txBufferIndex + 1u);
	        }
	    }
	#endif  /* (CapSense_1_TUNING_METHOD == CapSense_1_MANUAL_TUNING) */
	
#endif /* (CapSense_1_TUNER_API_GENERATE) */

/* [] END OF FILE */
