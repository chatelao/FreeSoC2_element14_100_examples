/******************************************************************************
* Project Name		: CapSense
* File Name			: main.c
* Version 			: 1.0
* Device Used		: CY8C4245AXI-483
* Software Used		: PSoC Creator 2.2 SP1
* Compiler    		: ARMGCC 4.4.1, ARM RVDS Generic , ARM MDK Generic
* Related Hardware	: CY8CKIT-042 PSoC 4 Pioneer Kit 
*
********************************************************************************
* Copyright (2013), Cypress Semiconductor Corporation. All Rights Reserved.
********************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress)
* and is protected by and subject to worldwide patent protection (United
* States and foreign), United States copyright laws and international treaty
* provisions. Cypress hereby grants to licensee a personal, non-exclusive,
* non-transferable license to copy, use, modify, create derivative works of,
* and compile the Cypress Source Code and derivative works for the sole
* purpose of creating custom software in support of licensee product to be
* used only in conjunction with a Cypress integrated circuit as specified in
* the applicable agreement. Any reproduction, modification, translation,
* compilation, or representation of this software except as specified above 
* is prohibited without the express written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH 
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the 
* materials described herein. Cypress does not assume any liability arising out 
* of the application or use of any product or circuit described herein. Cypress 
* does not authorize its products for use as critical components in life-support 
* systems where a malfunction or failure may reasonably be expected to result in 
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of 
* such use and in doing so indemnifies Cypress against all charges. 
*
* Use of this Software may be limited by and subject to the applicable Cypress
* software license agreement. 
*******************************************************************************/

/******************************************************************************
*                           THEORY OF OPERATION
* This project demonstrates the capsense application using on board 5 segment 
* capsense slider. The multicolor LED on the CY8CKIT-042 changes color from red
* to green as you move the finger along the slider.
*
* Hardware connection on the Kit
* Slider	 - P1[1:5]
* LED_Green	 - P0[2]
* LED_Red 	 - P1[6]
******************************************************************************/ 
#include <device.h>

/* Define constant for capsense slider */
#define NO_FINGER 0xFFFFu
	
void main()	
{	
	uint16 sliderPosition = NO_FINGER;
    uint16 lastPosition = NO_FINGER;

	/* Enable Global Interrupts */
	CyGlobalIntEnable;

	/* Start all the components */
	Clock_Start();
	PWM_Start();
    CapSense_Start();
	
	/* Initialize CapSense baselines by scanning enabled sensors */
    CapSense_InitializeAllBaselines();
	
	for(;;)
	{
		/* Update all baselines */
		CapSense_UpdateEnabledBaselines();
		
		/* Start scanning all enabled sensors */
	    CapSense_ScanEnabledWidgets();
		
		/* Wait for scanning to complete */
		while(CapSense_IsBusy());
        
		/* Find Slider Position */
		sliderPosition = CapSense_GetCentroidPos(CapSense_LINEARSLIDER0__LS);
		
		/*If finger is detected on the slider*/
		if(sliderPosition != NO_FINGER)
		{
			/* If finger position on the slider is changed then update the LED color */
        	if(sliderPosition != lastPosition)
        	{
				/* Update the PWM pulse width with the new slider position */
            	PWM_WriteCompare1(sliderPosition);
				lastPosition = sliderPosition; 
        	}
		}
	}
}

/* [] END OF FILE */
