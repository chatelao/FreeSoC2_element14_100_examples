/*******************************************************************************
* File Name: Comp.c
* Version 1.0
*
* Description:
*  This file contains the function prototypes and constants used in
*  the Analog Comparator User Module.
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

#if !defined(CY_COMPARATOR_Comp_H)
#define CY_COMPARATOR_Comp_H

#include "cytypes.h"
#include "CyLib.h"
#include "cyfitter.h"


/***************************************
* Internal Type defines
***************************************/

/* Structure to save state before go to sleep */
typedef struct
{
    uint8  enableState;
} Comp_BACKUP_STRUCT;


/***************************************
*       Type defines
***************************************/

/* component init state */
extern uint32 Comp_initVar;


/**************************************
*        Function Prototypes
**************************************/
void    Comp_Init(void);
void    Comp_Enable(void);
void    Comp_Start(void);
void    Comp_Stop(void);
void    Comp_SetSpeed(uint32 speed);
uint32  Comp_ZeroCal(void);
void    Comp_LoadTrim(uint32 trimVal);
void    Comp_Sleep(void);
void    Comp_Wakeup(void);
void    Comp_SaveConfig(void);
void    Comp_RestoreConfig(void);
uint32  Comp_GetCompare(void);


/**************************************
*           API Constants
**************************************/

/* Power constants for SetSpeed() function */
#define Comp_SLOWSPEED                     (0x01u)
#define Comp_MEDSPEED                      (0x02u)
#define Comp_HIGHSPEED                     (0x03u)

#define Comp_HYSTERESIS                    (0u)
#define Comp_POWER                         (3u)


/**************************************
*             Registers
**************************************/
#define Comp_CTB_CTRL_REG                  (*(reg32 *)Comp_cy_psoc4_abuf__CTBM_CTB_CTRL)
#define Comp_OA_CTRL_REG                   (*(reg32 *)Comp_cy_psoc4_abuf__OA_RES_CTRL)
#define Comp_OA_COMPSTAT_REG               (*(reg32 *)Comp_cy_psoc4_abuf__COMP_STAT)
#define Comp_OA_OFFSET_TRIM_REG            (*(reg32 *)Comp_cy_psoc4_abuf__OA_OFFSET_TRIM)
#define Comp_OA_SLOPE_OFFSET_TRIM_REG      (*(reg32 *)Comp_cy_psoc4_abuf__OA_SLOPE_OFFSET_TRIM)
#define Comp_OA_COMPSHIFT                  (Comp_cy_psoc4_abuf__COMP_STAT_SHIFT)


/*trim defines*/
#define Comp_COMP_TRIM_SIGN_SHIFT          (5u)
#define Comp_COMP_TRIM_MAX_VALUE           (32u)


/***************************************
*        Registers Constants
***************************************/

/* Bit Field  CTB_CTRL */
#define Comp_OA_CTB_EN_SHIFT               (31u)


/* Bit Field  OA_CTRL */
#define Comp_OA_PWR_MODE_HIGH              (3u)
#define Comp_OA_PWR_MODE_MASK              (3u)
#define Comp_OA_COMP_EN_SHIFT              (4u)
#define Comp_OA_BYPASS_SHIFT               (6u)
#define Comp_OA_HYST_EN_SHIFT              (5u)
#define Comp_OA_PUMP_EN_SHIFT              (11u)

#endif /*  CY_COMPARATOR_Comp_H */


/* [] END OF FILE */
