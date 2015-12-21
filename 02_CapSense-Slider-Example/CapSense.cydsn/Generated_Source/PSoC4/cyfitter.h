#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice_trm.h>

/* CapSense_IDAC1_cy_psoc4_idac */
#define CapSense_IDAC1_cy_psoc4_idac__CSD_IDAC CYREG_CSD_IDAC
#define CapSense_IDAC1_cy_psoc4_idac__CSD_IDAC_SHIFT 0
#define CapSense_IDAC1_cy_psoc4_idac__CSD_TRIM1 CYREG_CSD_TRIM1
#define CapSense_IDAC1_cy_psoc4_idac__CSD_TRIM1_SHIFT 0
#define CapSense_IDAC1_cy_psoc4_idac__CSD_TRIM2 CYREG_CSD_TRIM2
#define CapSense_IDAC1_cy_psoc4_idac__CSD_TRIM2_SHIFT 0
#define CapSense_IDAC1_cy_psoc4_idac__IDAC_NUMBER 1u
#define CapSense_IDAC1_cy_psoc4_idac__POLARITY CYREG_CSD_CONFIG
#define CapSense_IDAC1_cy_psoc4_idac__POLARITY_SHIFT 16

/* PWM_cy_m0s8_tcpwm_1 */
#define PWM_cy_m0s8_tcpwm_1__CC CYREG_TCPWM_CNT0_CC
#define PWM_cy_m0s8_tcpwm_1__CC_BUFF CYREG_TCPWM_CNT0_CC_BUFF
#define PWM_cy_m0s8_tcpwm_1__COUNTER CYREG_TCPWM_CNT0_COUNTER
#define PWM_cy_m0s8_tcpwm_1__CTRL CYREG_TCPWM_CNT0_CTRL
#define PWM_cy_m0s8_tcpwm_1__INTR CYREG_TCPWM_CNT0_INTR
#define PWM_cy_m0s8_tcpwm_1__INTR_MASK CYREG_TCPWM_CNT0_INTR_MASK
#define PWM_cy_m0s8_tcpwm_1__INTR_MASKED CYREG_TCPWM_CNT0_INTR_MASKED
#define PWM_cy_m0s8_tcpwm_1__INTR_SET CYREG_TCPWM_CNT0_INTR_SET
#define PWM_cy_m0s8_tcpwm_1__PERIOD CYREG_TCPWM_CNT0_PERIOD
#define PWM_cy_m0s8_tcpwm_1__PERIOD_BUFF CYREG_TCPWM_CNT0_PERIOD_BUFF
#define PWM_cy_m0s8_tcpwm_1__STATUS CYREG_TCPWM_CNT0_STATUS
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMD CYREG_TCPWM_CMD
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK 0x01u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT 0
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK 0x100u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT 8
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK 0x1000000u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT 24
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK 0x10000u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT 16
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CTRL CYREG_TCPWM_CTRL
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK 0x01u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT 0
#define PWM_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE CYREG_TCPWM_INTR_CAUSE
#define PWM_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK 0x01u
#define PWM_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT 0
#define PWM_cy_m0s8_tcpwm_1__TCPWM_NUMBER 0u
#define PWM_cy_m0s8_tcpwm_1__TR_CTRL0 CYREG_TCPWM_CNT0_TR_CTRL0
#define PWM_cy_m0s8_tcpwm_1__TR_CTRL1 CYREG_TCPWM_CNT0_TR_CTRL1
#define PWM_cy_m0s8_tcpwm_1__TR_CTRL2 CYREG_TCPWM_CNT0_TR_CTRL2

/* CapSense_CSD_Clk1 */
#define CapSense_CSD_Clk1__DIVIDER_MASK 0x0000FFFFu
#define CapSense_CSD_Clk1__ENABLE CYREG_CLK_DIVIDER_B00
#define CapSense_CSD_Clk1__ENABLE_MASK 0x80000000u
#define CapSense_CSD_Clk1__MASK 0x80000000u
#define CapSense_CSD_Clk1__REGISTER CYREG_CLK_DIVIDER_B00

/* CapSense_CSD_Clk2 */
#define CapSense_CSD_Clk2__DIVIDER_MASK 0x0000FFFFu
#define CapSense_CSD_Clk2__ENABLE CYREG_CLK_DIVIDER_A00
#define CapSense_CSD_Clk2__ENABLE_MASK 0x80000000u
#define CapSense_CSD_Clk2__MASK 0x80000000u
#define CapSense_CSD_Clk2__REGISTER CYREG_CLK_DIVIDER_A00

/* CapSense_CSD_FFB */
#define CapSense_CSD_FFB__CSD_CONFIG CYREG_CSD_CONFIG
#define CapSense_CSD_FFB__CSD_COUNTER CYREG_CSD_COUNTER
#define CapSense_CSD_FFB__CSD_ID CYREG_CSD_ID
#define CapSense_CSD_FFB__CSD_INTR CYREG_CSD_INTR
#define CapSense_CSD_FFB__CSD_INTR_SET CYREG_CSD_INTR_SET
#define CapSense_CSD_FFB__CSD_NUMBER 0u
#define CapSense_CSD_FFB__CSD_STATUS CYREG_CSD_STATUS

/* CapSense_Cmod */
#define CapSense_Cmod__0__DM__MASK 0x1C0u
#define CapSense_Cmod__0__DM__SHIFT 6
#define CapSense_Cmod__0__DR CYREG_PRT4_DR
#define CapSense_Cmod__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define CapSense_Cmod__0__HSIOM_MASK 0x00000F00u
#define CapSense_Cmod__0__HSIOM_SHIFT 8u
#define CapSense_Cmod__0__INTCFG CYREG_PRT4_INTCFG
#define CapSense_Cmod__0__INTSTAT CYREG_PRT4_INTSTAT
#define CapSense_Cmod__0__MASK 0x04u
#define CapSense_Cmod__0__PC CYREG_PRT4_PC
#define CapSense_Cmod__0__PC2 CYREG_PRT4_PC2
#define CapSense_Cmod__0__PORT 4u
#define CapSense_Cmod__0__PS CYREG_PRT4_PS
#define CapSense_Cmod__0__SHIFT 2
#define CapSense_Cmod__Cmod__DM__MASK 0x1C0u
#define CapSense_Cmod__Cmod__DM__SHIFT 6
#define CapSense_Cmod__Cmod__DR CYREG_PRT4_DR
#define CapSense_Cmod__Cmod__INTCFG CYREG_PRT4_INTCFG
#define CapSense_Cmod__Cmod__INTSTAT CYREG_PRT4_INTSTAT
#define CapSense_Cmod__Cmod__MASK 0x04u
#define CapSense_Cmod__Cmod__PC CYREG_PRT4_PC
#define CapSense_Cmod__Cmod__PC2 CYREG_PRT4_PC2
#define CapSense_Cmod__Cmod__PORT 4u
#define CapSense_Cmod__Cmod__PS CYREG_PRT4_PS
#define CapSense_Cmod__Cmod__SHIFT 2
#define CapSense_Cmod__DR CYREG_PRT4_DR
#define CapSense_Cmod__INTCFG CYREG_PRT4_INTCFG
#define CapSense_Cmod__INTSTAT CYREG_PRT4_INTSTAT
#define CapSense_Cmod__MASK 0x04u
#define CapSense_Cmod__PC CYREG_PRT4_PC
#define CapSense_Cmod__PC2 CYREG_PRT4_PC2
#define CapSense_Cmod__PORT 4u
#define CapSense_Cmod__PS CYREG_PRT4_PS
#define CapSense_Cmod__SHIFT 2

/* CapSense_ISR */
#define CapSense_ISR__INTC_CLR_EN_REG CYREG_CM0_ICER
#define CapSense_ISR__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define CapSense_ISR__INTC_MASK 0x8000u
#define CapSense_ISR__INTC_NUMBER 15u
#define CapSense_ISR__INTC_PRIOR_MASK 0xC0000000u
#define CapSense_ISR__INTC_PRIOR_NUM 3u
#define CapSense_ISR__INTC_PRIOR_REG CYREG_CM0_IPR3
#define CapSense_ISR__INTC_SET_EN_REG CYREG_CM0_ISER
#define CapSense_ISR__INTC_SET_PD_REG CYREG_CM0_ISPR

/* CapSense_Sns */
#define CapSense_Sns__0__DM__MASK 0x38u
#define CapSense_Sns__0__DM__SHIFT 3
#define CapSense_Sns__0__DR CYREG_PRT1_DR
#define CapSense_Sns__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define CapSense_Sns__0__HSIOM_MASK 0x000000F0u
#define CapSense_Sns__0__HSIOM_SHIFT 4u
#define CapSense_Sns__0__INTCFG CYREG_PRT1_INTCFG
#define CapSense_Sns__0__INTSTAT CYREG_PRT1_INTSTAT
#define CapSense_Sns__0__MASK 0x02u
#define CapSense_Sns__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define CapSense_Sns__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define CapSense_Sns__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define CapSense_Sns__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define CapSense_Sns__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define CapSense_Sns__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define CapSense_Sns__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define CapSense_Sns__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define CapSense_Sns__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define CapSense_Sns__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define CapSense_Sns__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define CapSense_Sns__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define CapSense_Sns__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define CapSense_Sns__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define CapSense_Sns__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define CapSense_Sns__0__PC CYREG_PRT1_PC
#define CapSense_Sns__0__PC2 CYREG_PRT1_PC2
#define CapSense_Sns__0__PORT 1u
#define CapSense_Sns__0__PS CYREG_PRT1_PS
#define CapSense_Sns__0__SHIFT 1
#define CapSense_Sns__1__DM__MASK 0x1C0u
#define CapSense_Sns__1__DM__SHIFT 6
#define CapSense_Sns__1__DR CYREG_PRT1_DR
#define CapSense_Sns__1__HSIOM CYREG_HSIOM_PORT_SEL1
#define CapSense_Sns__1__HSIOM_MASK 0x00000F00u
#define CapSense_Sns__1__HSIOM_SHIFT 8u
#define CapSense_Sns__1__INTCFG CYREG_PRT1_INTCFG
#define CapSense_Sns__1__INTSTAT CYREG_PRT1_INTSTAT
#define CapSense_Sns__1__MASK 0x04u
#define CapSense_Sns__1__PA__CFG0 CYREG_UDB_PA1_CFG0
#define CapSense_Sns__1__PA__CFG1 CYREG_UDB_PA1_CFG1
#define CapSense_Sns__1__PA__CFG10 CYREG_UDB_PA1_CFG10
#define CapSense_Sns__1__PA__CFG11 CYREG_UDB_PA1_CFG11
#define CapSense_Sns__1__PA__CFG12 CYREG_UDB_PA1_CFG12
#define CapSense_Sns__1__PA__CFG13 CYREG_UDB_PA1_CFG13
#define CapSense_Sns__1__PA__CFG14 CYREG_UDB_PA1_CFG14
#define CapSense_Sns__1__PA__CFG2 CYREG_UDB_PA1_CFG2
#define CapSense_Sns__1__PA__CFG3 CYREG_UDB_PA1_CFG3
#define CapSense_Sns__1__PA__CFG4 CYREG_UDB_PA1_CFG4
#define CapSense_Sns__1__PA__CFG5 CYREG_UDB_PA1_CFG5
#define CapSense_Sns__1__PA__CFG6 CYREG_UDB_PA1_CFG6
#define CapSense_Sns__1__PA__CFG7 CYREG_UDB_PA1_CFG7
#define CapSense_Sns__1__PA__CFG8 CYREG_UDB_PA1_CFG8
#define CapSense_Sns__1__PA__CFG9 CYREG_UDB_PA1_CFG9
#define CapSense_Sns__1__PC CYREG_PRT1_PC
#define CapSense_Sns__1__PC2 CYREG_PRT1_PC2
#define CapSense_Sns__1__PORT 1u
#define CapSense_Sns__1__PS CYREG_PRT1_PS
#define CapSense_Sns__1__SHIFT 2
#define CapSense_Sns__2__DM__MASK 0xE00u
#define CapSense_Sns__2__DM__SHIFT 9
#define CapSense_Sns__2__DR CYREG_PRT1_DR
#define CapSense_Sns__2__HSIOM CYREG_HSIOM_PORT_SEL1
#define CapSense_Sns__2__HSIOM_MASK 0x0000F000u
#define CapSense_Sns__2__HSIOM_SHIFT 12u
#define CapSense_Sns__2__INTCFG CYREG_PRT1_INTCFG
#define CapSense_Sns__2__INTSTAT CYREG_PRT1_INTSTAT
#define CapSense_Sns__2__MASK 0x08u
#define CapSense_Sns__2__PA__CFG0 CYREG_UDB_PA1_CFG0
#define CapSense_Sns__2__PA__CFG1 CYREG_UDB_PA1_CFG1
#define CapSense_Sns__2__PA__CFG10 CYREG_UDB_PA1_CFG10
#define CapSense_Sns__2__PA__CFG11 CYREG_UDB_PA1_CFG11
#define CapSense_Sns__2__PA__CFG12 CYREG_UDB_PA1_CFG12
#define CapSense_Sns__2__PA__CFG13 CYREG_UDB_PA1_CFG13
#define CapSense_Sns__2__PA__CFG14 CYREG_UDB_PA1_CFG14
#define CapSense_Sns__2__PA__CFG2 CYREG_UDB_PA1_CFG2
#define CapSense_Sns__2__PA__CFG3 CYREG_UDB_PA1_CFG3
#define CapSense_Sns__2__PA__CFG4 CYREG_UDB_PA1_CFG4
#define CapSense_Sns__2__PA__CFG5 CYREG_UDB_PA1_CFG5
#define CapSense_Sns__2__PA__CFG6 CYREG_UDB_PA1_CFG6
#define CapSense_Sns__2__PA__CFG7 CYREG_UDB_PA1_CFG7
#define CapSense_Sns__2__PA__CFG8 CYREG_UDB_PA1_CFG8
#define CapSense_Sns__2__PA__CFG9 CYREG_UDB_PA1_CFG9
#define CapSense_Sns__2__PC CYREG_PRT1_PC
#define CapSense_Sns__2__PC2 CYREG_PRT1_PC2
#define CapSense_Sns__2__PORT 1u
#define CapSense_Sns__2__PS CYREG_PRT1_PS
#define CapSense_Sns__2__SHIFT 3
#define CapSense_Sns__3__DM__MASK 0x7000u
#define CapSense_Sns__3__DM__SHIFT 12
#define CapSense_Sns__3__DR CYREG_PRT1_DR
#define CapSense_Sns__3__HSIOM CYREG_HSIOM_PORT_SEL1
#define CapSense_Sns__3__HSIOM_MASK 0x000F0000u
#define CapSense_Sns__3__HSIOM_SHIFT 16u
#define CapSense_Sns__3__INTCFG CYREG_PRT1_INTCFG
#define CapSense_Sns__3__INTSTAT CYREG_PRT1_INTSTAT
#define CapSense_Sns__3__MASK 0x10u
#define CapSense_Sns__3__PA__CFG0 CYREG_UDB_PA1_CFG0
#define CapSense_Sns__3__PA__CFG1 CYREG_UDB_PA1_CFG1
#define CapSense_Sns__3__PA__CFG10 CYREG_UDB_PA1_CFG10
#define CapSense_Sns__3__PA__CFG11 CYREG_UDB_PA1_CFG11
#define CapSense_Sns__3__PA__CFG12 CYREG_UDB_PA1_CFG12
#define CapSense_Sns__3__PA__CFG13 CYREG_UDB_PA1_CFG13
#define CapSense_Sns__3__PA__CFG14 CYREG_UDB_PA1_CFG14
#define CapSense_Sns__3__PA__CFG2 CYREG_UDB_PA1_CFG2
#define CapSense_Sns__3__PA__CFG3 CYREG_UDB_PA1_CFG3
#define CapSense_Sns__3__PA__CFG4 CYREG_UDB_PA1_CFG4
#define CapSense_Sns__3__PA__CFG5 CYREG_UDB_PA1_CFG5
#define CapSense_Sns__3__PA__CFG6 CYREG_UDB_PA1_CFG6
#define CapSense_Sns__3__PA__CFG7 CYREG_UDB_PA1_CFG7
#define CapSense_Sns__3__PA__CFG8 CYREG_UDB_PA1_CFG8
#define CapSense_Sns__3__PA__CFG9 CYREG_UDB_PA1_CFG9
#define CapSense_Sns__3__PC CYREG_PRT1_PC
#define CapSense_Sns__3__PC2 CYREG_PRT1_PC2
#define CapSense_Sns__3__PORT 1u
#define CapSense_Sns__3__PS CYREG_PRT1_PS
#define CapSense_Sns__3__SHIFT 4
#define CapSense_Sns__4__DM__MASK 0x38000u
#define CapSense_Sns__4__DM__SHIFT 15
#define CapSense_Sns__4__DR CYREG_PRT1_DR
#define CapSense_Sns__4__HSIOM CYREG_HSIOM_PORT_SEL1
#define CapSense_Sns__4__HSIOM_MASK 0x00F00000u
#define CapSense_Sns__4__HSIOM_SHIFT 20u
#define CapSense_Sns__4__INTCFG CYREG_PRT1_INTCFG
#define CapSense_Sns__4__INTSTAT CYREG_PRT1_INTSTAT
#define CapSense_Sns__4__MASK 0x20u
#define CapSense_Sns__4__PA__CFG0 CYREG_UDB_PA1_CFG0
#define CapSense_Sns__4__PA__CFG1 CYREG_UDB_PA1_CFG1
#define CapSense_Sns__4__PA__CFG10 CYREG_UDB_PA1_CFG10
#define CapSense_Sns__4__PA__CFG11 CYREG_UDB_PA1_CFG11
#define CapSense_Sns__4__PA__CFG12 CYREG_UDB_PA1_CFG12
#define CapSense_Sns__4__PA__CFG13 CYREG_UDB_PA1_CFG13
#define CapSense_Sns__4__PA__CFG14 CYREG_UDB_PA1_CFG14
#define CapSense_Sns__4__PA__CFG2 CYREG_UDB_PA1_CFG2
#define CapSense_Sns__4__PA__CFG3 CYREG_UDB_PA1_CFG3
#define CapSense_Sns__4__PA__CFG4 CYREG_UDB_PA1_CFG4
#define CapSense_Sns__4__PA__CFG5 CYREG_UDB_PA1_CFG5
#define CapSense_Sns__4__PA__CFG6 CYREG_UDB_PA1_CFG6
#define CapSense_Sns__4__PA__CFG7 CYREG_UDB_PA1_CFG7
#define CapSense_Sns__4__PA__CFG8 CYREG_UDB_PA1_CFG8
#define CapSense_Sns__4__PA__CFG9 CYREG_UDB_PA1_CFG9
#define CapSense_Sns__4__PC CYREG_PRT1_PC
#define CapSense_Sns__4__PC2 CYREG_PRT1_PC2
#define CapSense_Sns__4__PORT 1u
#define CapSense_Sns__4__PS CYREG_PRT1_PS
#define CapSense_Sns__4__SHIFT 5
#define CapSense_Sns__DR CYREG_PRT1_DR
#define CapSense_Sns__INTCFG CYREG_PRT1_INTCFG
#define CapSense_Sns__INTSTAT CYREG_PRT1_INTSTAT
#define CapSense_Sns__LinearSlider0_e0__LS__DM__MASK 0x38u
#define CapSense_Sns__LinearSlider0_e0__LS__DM__SHIFT 3
#define CapSense_Sns__LinearSlider0_e0__LS__DR CYREG_PRT1_DR
#define CapSense_Sns__LinearSlider0_e0__LS__INTCFG CYREG_PRT1_INTCFG
#define CapSense_Sns__LinearSlider0_e0__LS__INTSTAT CYREG_PRT1_INTSTAT
#define CapSense_Sns__LinearSlider0_e0__LS__MASK 0x02u
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG0 CYREG_UDB_PA1_CFG0
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG1 CYREG_UDB_PA1_CFG1
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG10 CYREG_UDB_PA1_CFG10
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG11 CYREG_UDB_PA1_CFG11
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG12 CYREG_UDB_PA1_CFG12
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG13 CYREG_UDB_PA1_CFG13
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG14 CYREG_UDB_PA1_CFG14
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG2 CYREG_UDB_PA1_CFG2
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG3 CYREG_UDB_PA1_CFG3
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG4 CYREG_UDB_PA1_CFG4
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG5 CYREG_UDB_PA1_CFG5
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG6 CYREG_UDB_PA1_CFG6
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG7 CYREG_UDB_PA1_CFG7
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG8 CYREG_UDB_PA1_CFG8
#define CapSense_Sns__LinearSlider0_e0__LS__PA__CFG9 CYREG_UDB_PA1_CFG9
#define CapSense_Sns__LinearSlider0_e0__LS__PC CYREG_PRT1_PC
#define CapSense_Sns__LinearSlider0_e0__LS__PC2 CYREG_PRT1_PC2
#define CapSense_Sns__LinearSlider0_e0__LS__PORT 1u
#define CapSense_Sns__LinearSlider0_e0__LS__PS CYREG_PRT1_PS
#define CapSense_Sns__LinearSlider0_e0__LS__SHIFT 1
#define CapSense_Sns__LinearSlider0_e1__LS__DM__MASK 0x1C0u
#define CapSense_Sns__LinearSlider0_e1__LS__DM__SHIFT 6
#define CapSense_Sns__LinearSlider0_e1__LS__DR CYREG_PRT1_DR
#define CapSense_Sns__LinearSlider0_e1__LS__INTCFG CYREG_PRT1_INTCFG
#define CapSense_Sns__LinearSlider0_e1__LS__INTSTAT CYREG_PRT1_INTSTAT
#define CapSense_Sns__LinearSlider0_e1__LS__MASK 0x04u
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG0 CYREG_UDB_PA1_CFG0
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG1 CYREG_UDB_PA1_CFG1
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG10 CYREG_UDB_PA1_CFG10
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG11 CYREG_UDB_PA1_CFG11
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG12 CYREG_UDB_PA1_CFG12
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG13 CYREG_UDB_PA1_CFG13
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG14 CYREG_UDB_PA1_CFG14
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG2 CYREG_UDB_PA1_CFG2
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG3 CYREG_UDB_PA1_CFG3
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG4 CYREG_UDB_PA1_CFG4
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG5 CYREG_UDB_PA1_CFG5
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG6 CYREG_UDB_PA1_CFG6
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG7 CYREG_UDB_PA1_CFG7
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG8 CYREG_UDB_PA1_CFG8
#define CapSense_Sns__LinearSlider0_e1__LS__PA__CFG9 CYREG_UDB_PA1_CFG9
#define CapSense_Sns__LinearSlider0_e1__LS__PC CYREG_PRT1_PC
#define CapSense_Sns__LinearSlider0_e1__LS__PC2 CYREG_PRT1_PC2
#define CapSense_Sns__LinearSlider0_e1__LS__PORT 1u
#define CapSense_Sns__LinearSlider0_e1__LS__PS CYREG_PRT1_PS
#define CapSense_Sns__LinearSlider0_e1__LS__SHIFT 2
#define CapSense_Sns__LinearSlider0_e2__LS__DM__MASK 0xE00u
#define CapSense_Sns__LinearSlider0_e2__LS__DM__SHIFT 9
#define CapSense_Sns__LinearSlider0_e2__LS__DR CYREG_PRT1_DR
#define CapSense_Sns__LinearSlider0_e2__LS__INTCFG CYREG_PRT1_INTCFG
#define CapSense_Sns__LinearSlider0_e2__LS__INTSTAT CYREG_PRT1_INTSTAT
#define CapSense_Sns__LinearSlider0_e2__LS__MASK 0x08u
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG0 CYREG_UDB_PA1_CFG0
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG1 CYREG_UDB_PA1_CFG1
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG10 CYREG_UDB_PA1_CFG10
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG11 CYREG_UDB_PA1_CFG11
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG12 CYREG_UDB_PA1_CFG12
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG13 CYREG_UDB_PA1_CFG13
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG14 CYREG_UDB_PA1_CFG14
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG2 CYREG_UDB_PA1_CFG2
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG3 CYREG_UDB_PA1_CFG3
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG4 CYREG_UDB_PA1_CFG4
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG5 CYREG_UDB_PA1_CFG5
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG6 CYREG_UDB_PA1_CFG6
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG7 CYREG_UDB_PA1_CFG7
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG8 CYREG_UDB_PA1_CFG8
#define CapSense_Sns__LinearSlider0_e2__LS__PA__CFG9 CYREG_UDB_PA1_CFG9
#define CapSense_Sns__LinearSlider0_e2__LS__PC CYREG_PRT1_PC
#define CapSense_Sns__LinearSlider0_e2__LS__PC2 CYREG_PRT1_PC2
#define CapSense_Sns__LinearSlider0_e2__LS__PORT 1u
#define CapSense_Sns__LinearSlider0_e2__LS__PS CYREG_PRT1_PS
#define CapSense_Sns__LinearSlider0_e2__LS__SHIFT 3
#define CapSense_Sns__LinearSlider0_e3__LS__DM__MASK 0x7000u
#define CapSense_Sns__LinearSlider0_e3__LS__DM__SHIFT 12
#define CapSense_Sns__LinearSlider0_e3__LS__DR CYREG_PRT1_DR
#define CapSense_Sns__LinearSlider0_e3__LS__INTCFG CYREG_PRT1_INTCFG
#define CapSense_Sns__LinearSlider0_e3__LS__INTSTAT CYREG_PRT1_INTSTAT
#define CapSense_Sns__LinearSlider0_e3__LS__MASK 0x10u
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG0 CYREG_UDB_PA1_CFG0
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG1 CYREG_UDB_PA1_CFG1
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG10 CYREG_UDB_PA1_CFG10
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG11 CYREG_UDB_PA1_CFG11
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG12 CYREG_UDB_PA1_CFG12
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG13 CYREG_UDB_PA1_CFG13
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG14 CYREG_UDB_PA1_CFG14
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG2 CYREG_UDB_PA1_CFG2
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG3 CYREG_UDB_PA1_CFG3
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG4 CYREG_UDB_PA1_CFG4
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG5 CYREG_UDB_PA1_CFG5
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG6 CYREG_UDB_PA1_CFG6
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG7 CYREG_UDB_PA1_CFG7
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG8 CYREG_UDB_PA1_CFG8
#define CapSense_Sns__LinearSlider0_e3__LS__PA__CFG9 CYREG_UDB_PA1_CFG9
#define CapSense_Sns__LinearSlider0_e3__LS__PC CYREG_PRT1_PC
#define CapSense_Sns__LinearSlider0_e3__LS__PC2 CYREG_PRT1_PC2
#define CapSense_Sns__LinearSlider0_e3__LS__PORT 1u
#define CapSense_Sns__LinearSlider0_e3__LS__PS CYREG_PRT1_PS
#define CapSense_Sns__LinearSlider0_e3__LS__SHIFT 4
#define CapSense_Sns__LinearSlider0_e4__LS__DM__MASK 0x38000u
#define CapSense_Sns__LinearSlider0_e4__LS__DM__SHIFT 15
#define CapSense_Sns__LinearSlider0_e4__LS__DR CYREG_PRT1_DR
#define CapSense_Sns__LinearSlider0_e4__LS__INTCFG CYREG_PRT1_INTCFG
#define CapSense_Sns__LinearSlider0_e4__LS__INTSTAT CYREG_PRT1_INTSTAT
#define CapSense_Sns__LinearSlider0_e4__LS__MASK 0x20u
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG0 CYREG_UDB_PA1_CFG0
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG1 CYREG_UDB_PA1_CFG1
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG10 CYREG_UDB_PA1_CFG10
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG11 CYREG_UDB_PA1_CFG11
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG12 CYREG_UDB_PA1_CFG12
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG13 CYREG_UDB_PA1_CFG13
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG14 CYREG_UDB_PA1_CFG14
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG2 CYREG_UDB_PA1_CFG2
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG3 CYREG_UDB_PA1_CFG3
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG4 CYREG_UDB_PA1_CFG4
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG5 CYREG_UDB_PA1_CFG5
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG6 CYREG_UDB_PA1_CFG6
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG7 CYREG_UDB_PA1_CFG7
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG8 CYREG_UDB_PA1_CFG8
#define CapSense_Sns__LinearSlider0_e4__LS__PA__CFG9 CYREG_UDB_PA1_CFG9
#define CapSense_Sns__LinearSlider0_e4__LS__PC CYREG_PRT1_PC
#define CapSense_Sns__LinearSlider0_e4__LS__PC2 CYREG_PRT1_PC2
#define CapSense_Sns__LinearSlider0_e4__LS__PORT 1u
#define CapSense_Sns__LinearSlider0_e4__LS__PS CYREG_PRT1_PS
#define CapSense_Sns__LinearSlider0_e4__LS__SHIFT 5
#define CapSense_Sns__PA__CFG0 CYREG_UDB_PA1_CFG0
#define CapSense_Sns__PA__CFG1 CYREG_UDB_PA1_CFG1
#define CapSense_Sns__PA__CFG10 CYREG_UDB_PA1_CFG10
#define CapSense_Sns__PA__CFG11 CYREG_UDB_PA1_CFG11
#define CapSense_Sns__PA__CFG12 CYREG_UDB_PA1_CFG12
#define CapSense_Sns__PA__CFG13 CYREG_UDB_PA1_CFG13
#define CapSense_Sns__PA__CFG14 CYREG_UDB_PA1_CFG14
#define CapSense_Sns__PA__CFG2 CYREG_UDB_PA1_CFG2
#define CapSense_Sns__PA__CFG3 CYREG_UDB_PA1_CFG3
#define CapSense_Sns__PA__CFG4 CYREG_UDB_PA1_CFG4
#define CapSense_Sns__PA__CFG5 CYREG_UDB_PA1_CFG5
#define CapSense_Sns__PA__CFG6 CYREG_UDB_PA1_CFG6
#define CapSense_Sns__PA__CFG7 CYREG_UDB_PA1_CFG7
#define CapSense_Sns__PA__CFG8 CYREG_UDB_PA1_CFG8
#define CapSense_Sns__PA__CFG9 CYREG_UDB_PA1_CFG9
#define CapSense_Sns__PC CYREG_PRT1_PC
#define CapSense_Sns__PC2 CYREG_PRT1_PC2
#define CapSense_Sns__PORT 1u
#define CapSense_Sns__PS CYREG_PRT1_PS

/* Pin_GreenLED */
#define Pin_GreenLED__0__DM__MASK 0x1C0u
#define Pin_GreenLED__0__DM__SHIFT 6
#define Pin_GreenLED__0__DR CYREG_PRT0_DR
#define Pin_GreenLED__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Pin_GreenLED__0__HSIOM_MASK 0x00000F00u
#define Pin_GreenLED__0__HSIOM_SHIFT 8u
#define Pin_GreenLED__0__INTCFG CYREG_PRT0_INTCFG
#define Pin_GreenLED__0__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_GreenLED__0__MASK 0x04u
#define Pin_GreenLED__0__OUT_SEL CYREG_UDB_PA0_CFG10
#define Pin_GreenLED__0__OUT_SEL_SHIFT 4u
#define Pin_GreenLED__0__OUT_SEL_VAL 0u
#define Pin_GreenLED__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_GreenLED__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_GreenLED__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_GreenLED__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_GreenLED__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_GreenLED__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_GreenLED__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_GreenLED__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_GreenLED__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_GreenLED__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_GreenLED__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_GreenLED__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_GreenLED__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_GreenLED__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_GreenLED__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_GreenLED__0__PC CYREG_PRT0_PC
#define Pin_GreenLED__0__PC2 CYREG_PRT0_PC2
#define Pin_GreenLED__0__PORT 0u
#define Pin_GreenLED__0__PS CYREG_PRT0_PS
#define Pin_GreenLED__0__SHIFT 2
#define Pin_GreenLED__DR CYREG_PRT0_DR
#define Pin_GreenLED__INTCFG CYREG_PRT0_INTCFG
#define Pin_GreenLED__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_GreenLED__MASK 0x04u
#define Pin_GreenLED__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_GreenLED__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_GreenLED__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_GreenLED__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_GreenLED__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_GreenLED__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_GreenLED__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_GreenLED__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_GreenLED__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_GreenLED__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_GreenLED__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_GreenLED__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_GreenLED__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_GreenLED__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_GreenLED__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_GreenLED__PC CYREG_PRT0_PC
#define Pin_GreenLED__PC2 CYREG_PRT0_PC2
#define Pin_GreenLED__PORT 0u
#define Pin_GreenLED__PS CYREG_PRT0_PS
#define Pin_GreenLED__SHIFT 2

/* Pin_RedLED */
#define Pin_RedLED__0__DM__MASK 0x1C0000u
#define Pin_RedLED__0__DM__SHIFT 18
#define Pin_RedLED__0__DR CYREG_PRT1_DR
#define Pin_RedLED__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Pin_RedLED__0__HSIOM_MASK 0x0F000000u
#define Pin_RedLED__0__HSIOM_SHIFT 24u
#define Pin_RedLED__0__INTCFG CYREG_PRT1_INTCFG
#define Pin_RedLED__0__INTSTAT CYREG_PRT1_INTSTAT
#define Pin_RedLED__0__MASK 0x40u
#define Pin_RedLED__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define Pin_RedLED__0__OUT_SEL_SHIFT 12u
#define Pin_RedLED__0__OUT_SEL_VAL 2u
#define Pin_RedLED__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Pin_RedLED__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Pin_RedLED__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Pin_RedLED__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Pin_RedLED__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Pin_RedLED__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Pin_RedLED__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Pin_RedLED__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Pin_RedLED__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Pin_RedLED__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Pin_RedLED__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Pin_RedLED__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Pin_RedLED__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Pin_RedLED__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Pin_RedLED__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Pin_RedLED__0__PC CYREG_PRT1_PC
#define Pin_RedLED__0__PC2 CYREG_PRT1_PC2
#define Pin_RedLED__0__PORT 1u
#define Pin_RedLED__0__PS CYREG_PRT1_PS
#define Pin_RedLED__0__SHIFT 6
#define Pin_RedLED__DR CYREG_PRT1_DR
#define Pin_RedLED__INTCFG CYREG_PRT1_INTCFG
#define Pin_RedLED__INTSTAT CYREG_PRT1_INTSTAT
#define Pin_RedLED__MASK 0x40u
#define Pin_RedLED__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Pin_RedLED__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Pin_RedLED__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Pin_RedLED__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Pin_RedLED__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Pin_RedLED__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Pin_RedLED__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Pin_RedLED__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Pin_RedLED__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Pin_RedLED__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Pin_RedLED__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Pin_RedLED__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Pin_RedLED__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Pin_RedLED__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Pin_RedLED__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Pin_RedLED__PC CYREG_PRT1_PC
#define Pin_RedLED__PC2 CYREG_PRT1_PC2
#define Pin_RedLED__PORT 1u
#define Pin_RedLED__PS CYREG_PRT1_PS
#define Pin_RedLED__SHIFT 6

/* Clock */
#define Clock__DIVIDER_MASK 0x0000FFFFu
#define Clock__ENABLE CYREG_CLK_DIVIDER_C00
#define Clock__ENABLE_MASK 0x80000000u
#define Clock__MASK 0x80000000u
#define Clock__REGISTER CYREG_CLK_DIVIDER_C00

/* Miscellaneous */
/* -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release */
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_MEMBER_4A 2u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_DIE_PSOC4A 2u
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_DIE_PSOC4A
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 3u
#define CYDEV_CHIP_DIE_PSOC5LP 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 4u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REV_PSOC4A_PRODUCTION
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_HEAP_SIZE 0x0100
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
