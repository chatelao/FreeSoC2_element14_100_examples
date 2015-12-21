/*******************************************************************************
* File: main.c
*
* Version : 1.0
*
* Description: 
*  This is a source code for example project of PSoC4 Comparator in 
*  Non-Inverting mode.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation. All rights reserved.
* This software is owned by Cypress Semiconductor Corporation and is protected
* by and subject to worldwide patent and copyright laws and treaties.
* Therefore, you may use this software only as provided in the license agreement
* accompanying the software package from which you obtained this software.
* CYPRESS AND ITS SUPPLIERS MAKE NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
* WITH REGARD TO THIS SOFTWARE, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT,
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*******************************************************************************/

#include <device.h>


#define NEG_IS_GREATER       (0u)


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  Main function performs following functions:
*   1. Initializes the LCD and clears the display
*   2. Start the Comparator
*   3. Sets speed of comparator to "High"
*   4. Sequentially prints current result on the LCD
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void main()
{

//    LCD_Start();
    Comp_Start();
	UART_Start();
    
    /* Sets Comparator Speed as High. Actually it is alredy done by 
    * component _Start() function, which set the Speed/Power value selected in 
    * the customizer. This API is to demonstrate that the same can be done with
    * a function call.
    */
    Comp_SetSpeed(Comp_HIGHSPEED);
    UART_UartPutString("Comparator Test\r\n");
    for(;;)
    {
        /* Clear previous output */
//        LCD_ClearDisplay();
        
        /* Reset LCD Position */
//        LCD_Position(0u, 0u);
//        LCD_PrintString("Comparator Example");
        
        /* Move cursor to the start of the second row of LCD */
//        LCD_Position(1u, 0u);
        
        /* Check if voltage level on negative input of comparator
        * is greater then voltage level on positive input and
        * display suitable result message.
        */
        if(NEG_IS_GREATER == Comp_GetCompare())
        {
//            LCD_PrintString("Result : V1 < V2");
			  UART_UartPutString("Result : V1 < V2\r\n");
        }
        else
        {
//            LCD_PrintString("Result : V1 > V2");
			  UART_UartPutString("Result : V1 > V2\r\n");
        }
        
        /* Some delay required to make LCD output visible */
        CyDelay(400u);
    }
}

/* [] END OF FILE */
