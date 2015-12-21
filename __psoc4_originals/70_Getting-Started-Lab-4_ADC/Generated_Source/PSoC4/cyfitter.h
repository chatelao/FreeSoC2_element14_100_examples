#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice_trm.h>

/* ADC_SAR_Seq_1_cy_psoc4_sar */
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_CTRL CYREG_SAR_CTRL
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_INTR CYREG_SAR_INTR
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_INTR_CAUSE CYREG_SAR_INTR_CAUSE
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_INTR_MASK CYREG_SAR_INTR_MASK
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_INTR_MASKED CYREG_SAR_INTR_MASKED
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_INTR_SET CYREG_SAR_INTR_SET
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_NUMBER 0u
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_RANGE_COND CYREG_SAR_RANGE_COND
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_RANGE_INTR_MASK CYREG_SAR_RANGE_INTR_MASK
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_RANGE_INTR_MASKED CYREG_SAR_RANGE_INTR_MASKED
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_RANGE_INTR_SET CYREG_SAR_RANGE_INTR_SET
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_RANGE_THRES CYREG_SAR_RANGE_THRES
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_SAMPLE_CTRL CYREG_SAR_SAMPLE_CTRL
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_SAMPLE_TIME01 CYREG_SAR_SAMPLE_TIME01
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_SAMPLE_TIME23 CYREG_SAR_SAMPLE_TIME23
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_SATURATE_INTR_MASK CYREG_SAR_SATURATE_INTR_MASK
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_SATURATE_INTR_MASKED CYREG_SAR_SATURATE_INTR_MASKED
#define ADC_SAR_Seq_1_cy_psoc4_sar__SAR_SATURATE_INTR_SET CYREG_SAR_SATURATE_INTR_SET

/* ADC_SAR_Seq_1_intClock */
#define ADC_SAR_Seq_1_intClock__DIVIDER_MASK 0x0000FFFFu
#define ADC_SAR_Seq_1_intClock__ENABLE CYREG_CLK_DIVIDER_B00
#define ADC_SAR_Seq_1_intClock__ENABLE_MASK 0x80000000u
#define ADC_SAR_Seq_1_intClock__MASK 0x80000000u
#define ADC_SAR_Seq_1_intClock__REGISTER CYREG_CLK_DIVIDER_B00

/* PWM_B_cy_m0s8_tcpwm_1 */
#define PWM_B_cy_m0s8_tcpwm_1__CC CYREG_TCPWM_CNT0_CC
#define PWM_B_cy_m0s8_tcpwm_1__CC_BUFF CYREG_TCPWM_CNT0_CC_BUFF
#define PWM_B_cy_m0s8_tcpwm_1__COUNTER CYREG_TCPWM_CNT0_COUNTER
#define PWM_B_cy_m0s8_tcpwm_1__CTRL CYREG_TCPWM_CNT0_CTRL
#define PWM_B_cy_m0s8_tcpwm_1__INTR CYREG_TCPWM_CNT0_INTR
#define PWM_B_cy_m0s8_tcpwm_1__INTR_MASK CYREG_TCPWM_CNT0_INTR_MASK
#define PWM_B_cy_m0s8_tcpwm_1__INTR_MASKED CYREG_TCPWM_CNT0_INTR_MASKED
#define PWM_B_cy_m0s8_tcpwm_1__INTR_SET CYREG_TCPWM_CNT0_INTR_SET
#define PWM_B_cy_m0s8_tcpwm_1__PERIOD CYREG_TCPWM_CNT0_PERIOD
#define PWM_B_cy_m0s8_tcpwm_1__PERIOD_BUFF CYREG_TCPWM_CNT0_PERIOD_BUFF
#define PWM_B_cy_m0s8_tcpwm_1__STATUS CYREG_TCPWM_CNT0_STATUS
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_CMD CYREG_TCPWM_CMD
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK 0x01u
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT 0
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK 0x100u
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT 8
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK 0x1000000u
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT 24
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK 0x10000u
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT 16
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_CTRL CYREG_TCPWM_CTRL
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK 0x01u
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT 0
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE CYREG_TCPWM_INTR_CAUSE
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK 0x01u
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT 0
#define PWM_B_cy_m0s8_tcpwm_1__TCPWM_NUMBER 0u
#define PWM_B_cy_m0s8_tcpwm_1__TR_CTRL0 CYREG_TCPWM_CNT0_TR_CTRL0
#define PWM_B_cy_m0s8_tcpwm_1__TR_CTRL1 CYREG_TCPWM_CNT0_TR_CTRL1
#define PWM_B_cy_m0s8_tcpwm_1__TR_CTRL2 CYREG_TCPWM_CNT0_TR_CTRL2

/* PWM_G_cy_m0s8_tcpwm_1 */
#define PWM_G_cy_m0s8_tcpwm_1__CC CYREG_TCPWM_CNT1_CC
#define PWM_G_cy_m0s8_tcpwm_1__CC_BUFF CYREG_TCPWM_CNT1_CC_BUFF
#define PWM_G_cy_m0s8_tcpwm_1__COUNTER CYREG_TCPWM_CNT1_COUNTER
#define PWM_G_cy_m0s8_tcpwm_1__CTRL CYREG_TCPWM_CNT1_CTRL
#define PWM_G_cy_m0s8_tcpwm_1__INTR CYREG_TCPWM_CNT1_INTR
#define PWM_G_cy_m0s8_tcpwm_1__INTR_MASK CYREG_TCPWM_CNT1_INTR_MASK
#define PWM_G_cy_m0s8_tcpwm_1__INTR_MASKED CYREG_TCPWM_CNT1_INTR_MASKED
#define PWM_G_cy_m0s8_tcpwm_1__INTR_SET CYREG_TCPWM_CNT1_INTR_SET
#define PWM_G_cy_m0s8_tcpwm_1__PERIOD CYREG_TCPWM_CNT1_PERIOD
#define PWM_G_cy_m0s8_tcpwm_1__PERIOD_BUFF CYREG_TCPWM_CNT1_PERIOD_BUFF
#define PWM_G_cy_m0s8_tcpwm_1__STATUS CYREG_TCPWM_CNT1_STATUS
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_CMD CYREG_TCPWM_CMD
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK 0x02u
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT 1
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK 0x200u
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT 9
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK 0x2000000u
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT 25
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK 0x20000u
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT 17
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_CTRL CYREG_TCPWM_CTRL
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK 0x02u
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT 1
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE CYREG_TCPWM_INTR_CAUSE
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK 0x02u
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT 1
#define PWM_G_cy_m0s8_tcpwm_1__TCPWM_NUMBER 1u
#define PWM_G_cy_m0s8_tcpwm_1__TR_CTRL0 CYREG_TCPWM_CNT1_TR_CTRL0
#define PWM_G_cy_m0s8_tcpwm_1__TR_CTRL1 CYREG_TCPWM_CNT1_TR_CTRL1
#define PWM_G_cy_m0s8_tcpwm_1__TR_CTRL2 CYREG_TCPWM_CNT1_TR_CTRL2

/* PWM_R_cy_m0s8_tcpwm_1 */
#define PWM_R_cy_m0s8_tcpwm_1__CC CYREG_TCPWM_CNT2_CC
#define PWM_R_cy_m0s8_tcpwm_1__CC_BUFF CYREG_TCPWM_CNT2_CC_BUFF
#define PWM_R_cy_m0s8_tcpwm_1__COUNTER CYREG_TCPWM_CNT2_COUNTER
#define PWM_R_cy_m0s8_tcpwm_1__CTRL CYREG_TCPWM_CNT2_CTRL
#define PWM_R_cy_m0s8_tcpwm_1__INTR CYREG_TCPWM_CNT2_INTR
#define PWM_R_cy_m0s8_tcpwm_1__INTR_MASK CYREG_TCPWM_CNT2_INTR_MASK
#define PWM_R_cy_m0s8_tcpwm_1__INTR_MASKED CYREG_TCPWM_CNT2_INTR_MASKED
#define PWM_R_cy_m0s8_tcpwm_1__INTR_SET CYREG_TCPWM_CNT2_INTR_SET
#define PWM_R_cy_m0s8_tcpwm_1__PERIOD CYREG_TCPWM_CNT2_PERIOD
#define PWM_R_cy_m0s8_tcpwm_1__PERIOD_BUFF CYREG_TCPWM_CNT2_PERIOD_BUFF
#define PWM_R_cy_m0s8_tcpwm_1__STATUS CYREG_TCPWM_CNT2_STATUS
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMD CYREG_TCPWM_CMD
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK 0x04u
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT 2
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK 0x400u
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT 10
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK 0x4000000u
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT 26
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK 0x40000u
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT 18
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_CTRL CYREG_TCPWM_CTRL
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK 0x04u
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT 2
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE CYREG_TCPWM_INTR_CAUSE
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK 0x04u
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT 2
#define PWM_R_cy_m0s8_tcpwm_1__TCPWM_NUMBER 2u
#define PWM_R_cy_m0s8_tcpwm_1__TR_CTRL0 CYREG_TCPWM_CNT2_TR_CTRL0
#define PWM_R_cy_m0s8_tcpwm_1__TR_CTRL1 CYREG_TCPWM_CNT2_TR_CTRL1
#define PWM_R_cy_m0s8_tcpwm_1__TR_CTRL2 CYREG_TCPWM_CNT2_TR_CTRL2

/* ADC_SAR_Seq_1_Bypass */
#define ADC_SAR_Seq_1_Bypass__0__DM__MASK 0xE00000u
#define ADC_SAR_Seq_1_Bypass__0__DM__SHIFT 21
#define ADC_SAR_Seq_1_Bypass__0__DR CYREG_PRT1_DR
#define ADC_SAR_Seq_1_Bypass__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define ADC_SAR_Seq_1_Bypass__0__HSIOM_MASK 0xF0000000u
#define ADC_SAR_Seq_1_Bypass__0__HSIOM_SHIFT 28u
#define ADC_SAR_Seq_1_Bypass__0__INTCFG CYREG_PRT1_INTCFG
#define ADC_SAR_Seq_1_Bypass__0__INTSTAT CYREG_PRT1_INTSTAT
#define ADC_SAR_Seq_1_Bypass__0__MASK 0x80u
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define ADC_SAR_Seq_1_Bypass__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define ADC_SAR_Seq_1_Bypass__0__PC CYREG_PRT1_PC
#define ADC_SAR_Seq_1_Bypass__0__PC2 CYREG_PRT1_PC2
#define ADC_SAR_Seq_1_Bypass__0__PORT 1u
#define ADC_SAR_Seq_1_Bypass__0__PS CYREG_PRT1_PS
#define ADC_SAR_Seq_1_Bypass__0__SHIFT 7
#define ADC_SAR_Seq_1_Bypass__DR CYREG_PRT1_DR
#define ADC_SAR_Seq_1_Bypass__INTCFG CYREG_PRT1_INTCFG
#define ADC_SAR_Seq_1_Bypass__INTSTAT CYREG_PRT1_INTSTAT
#define ADC_SAR_Seq_1_Bypass__MASK 0x80u
#define ADC_SAR_Seq_1_Bypass__PA__CFG0 CYREG_UDB_PA1_CFG0
#define ADC_SAR_Seq_1_Bypass__PA__CFG1 CYREG_UDB_PA1_CFG1
#define ADC_SAR_Seq_1_Bypass__PA__CFG10 CYREG_UDB_PA1_CFG10
#define ADC_SAR_Seq_1_Bypass__PA__CFG11 CYREG_UDB_PA1_CFG11
#define ADC_SAR_Seq_1_Bypass__PA__CFG12 CYREG_UDB_PA1_CFG12
#define ADC_SAR_Seq_1_Bypass__PA__CFG13 CYREG_UDB_PA1_CFG13
#define ADC_SAR_Seq_1_Bypass__PA__CFG14 CYREG_UDB_PA1_CFG14
#define ADC_SAR_Seq_1_Bypass__PA__CFG2 CYREG_UDB_PA1_CFG2
#define ADC_SAR_Seq_1_Bypass__PA__CFG3 CYREG_UDB_PA1_CFG3
#define ADC_SAR_Seq_1_Bypass__PA__CFG4 CYREG_UDB_PA1_CFG4
#define ADC_SAR_Seq_1_Bypass__PA__CFG5 CYREG_UDB_PA1_CFG5
#define ADC_SAR_Seq_1_Bypass__PA__CFG6 CYREG_UDB_PA1_CFG6
#define ADC_SAR_Seq_1_Bypass__PA__CFG7 CYREG_UDB_PA1_CFG7
#define ADC_SAR_Seq_1_Bypass__PA__CFG8 CYREG_UDB_PA1_CFG8
#define ADC_SAR_Seq_1_Bypass__PA__CFG9 CYREG_UDB_PA1_CFG9
#define ADC_SAR_Seq_1_Bypass__PC CYREG_PRT1_PC
#define ADC_SAR_Seq_1_Bypass__PC2 CYREG_PRT1_PC2
#define ADC_SAR_Seq_1_Bypass__PORT 1u
#define ADC_SAR_Seq_1_Bypass__PS CYREG_PRT1_PS
#define ADC_SAR_Seq_1_Bypass__SHIFT 7

/* ADC_SAR_Seq_1_IRQ */
#define ADC_SAR_Seq_1_IRQ__INTC_CLR_EN_REG CYREG_CM0_ICER
#define ADC_SAR_Seq_1_IRQ__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define ADC_SAR_Seq_1_IRQ__INTC_MASK 0x4000u
#define ADC_SAR_Seq_1_IRQ__INTC_NUMBER 14u
#define ADC_SAR_Seq_1_IRQ__INTC_PRIOR_MASK 0xC00000u
#define ADC_SAR_Seq_1_IRQ__INTC_PRIOR_NUM 3u
#define ADC_SAR_Seq_1_IRQ__INTC_PRIOR_REG CYREG_CM0_IPR3
#define ADC_SAR_Seq_1_IRQ__INTC_SET_EN_REG CYREG_CM0_ISER
#define ADC_SAR_Seq_1_IRQ__INTC_SET_PD_REG CYREG_CM0_ISPR

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
#define Pin_GreenLED__0__OUT_SEL_VAL 1u
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

/* Pin_BlueLED */
#define Pin_BlueLED__0__DM__MASK 0xE00u
#define Pin_BlueLED__0__DM__SHIFT 9
#define Pin_BlueLED__0__DR CYREG_PRT0_DR
#define Pin_BlueLED__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Pin_BlueLED__0__HSIOM_MASK 0x0000F000u
#define Pin_BlueLED__0__HSIOM_SHIFT 12u
#define Pin_BlueLED__0__INTCFG CYREG_PRT0_INTCFG
#define Pin_BlueLED__0__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_BlueLED__0__MASK 0x08u
#define Pin_BlueLED__0__OUT_SEL CYREG_UDB_PA0_CFG10
#define Pin_BlueLED__0__OUT_SEL_SHIFT 6u
#define Pin_BlueLED__0__OUT_SEL_VAL 3u
#define Pin_BlueLED__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_BlueLED__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_BlueLED__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_BlueLED__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_BlueLED__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_BlueLED__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_BlueLED__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_BlueLED__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_BlueLED__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_BlueLED__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_BlueLED__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_BlueLED__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_BlueLED__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_BlueLED__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_BlueLED__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_BlueLED__0__PC CYREG_PRT0_PC
#define Pin_BlueLED__0__PC2 CYREG_PRT0_PC2
#define Pin_BlueLED__0__PORT 0u
#define Pin_BlueLED__0__PS CYREG_PRT0_PS
#define Pin_BlueLED__0__SHIFT 3
#define Pin_BlueLED__DR CYREG_PRT0_DR
#define Pin_BlueLED__INTCFG CYREG_PRT0_INTCFG
#define Pin_BlueLED__INTSTAT CYREG_PRT0_INTSTAT
#define Pin_BlueLED__MASK 0x08u
#define Pin_BlueLED__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_BlueLED__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_BlueLED__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_BlueLED__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_BlueLED__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_BlueLED__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_BlueLED__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_BlueLED__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_BlueLED__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_BlueLED__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_BlueLED__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_BlueLED__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_BlueLED__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_BlueLED__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_BlueLED__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_BlueLED__PC CYREG_PRT0_PC
#define Pin_BlueLED__PC2 CYREG_PRT0_PC2
#define Pin_BlueLED__PORT 0u
#define Pin_BlueLED__PS CYREG_PRT0_PS
#define Pin_BlueLED__SHIFT 3

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
#define Pin_RedLED__0__OUT_SEL_VAL 0u
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

/* Clock_PWM */
#define Clock_PWM__DIVIDER_MASK 0x0000FFFFu
#define Clock_PWM__ENABLE CYREG_CLK_DIVIDER_A00
#define Clock_PWM__ENABLE_MASK 0x80000000u
#define Clock_PWM__MASK 0x80000000u
#define Clock_PWM__REGISTER CYREG_CLK_DIVIDER_A00

/* Pin_1 */
#define Pin_1__0__DM__MASK 0x07u
#define Pin_1__0__DM__SHIFT 0
#define Pin_1__0__DR CYREG_PRT2_DR
#define Pin_1__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define Pin_1__0__HSIOM_MASK 0x0000000Fu
#define Pin_1__0__HSIOM_SHIFT 0u
#define Pin_1__0__INTCFG CYREG_PRT2_INTCFG
#define Pin_1__0__INTSTAT CYREG_PRT2_INTSTAT
#define Pin_1__0__MASK 0x01u
#define Pin_1__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Pin_1__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Pin_1__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Pin_1__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Pin_1__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Pin_1__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Pin_1__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Pin_1__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Pin_1__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Pin_1__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Pin_1__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Pin_1__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Pin_1__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Pin_1__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Pin_1__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Pin_1__0__PC CYREG_PRT2_PC
#define Pin_1__0__PC2 CYREG_PRT2_PC2
#define Pin_1__0__PORT 2u
#define Pin_1__0__PS CYREG_PRT2_PS
#define Pin_1__0__SHIFT 0
#define Pin_1__DR CYREG_PRT2_DR
#define Pin_1__INTCFG CYREG_PRT2_INTCFG
#define Pin_1__INTSTAT CYREG_PRT2_INTSTAT
#define Pin_1__MASK 0x01u
#define Pin_1__PA__CFG0 CYREG_UDB_PA2_CFG0
#define Pin_1__PA__CFG1 CYREG_UDB_PA2_CFG1
#define Pin_1__PA__CFG10 CYREG_UDB_PA2_CFG10
#define Pin_1__PA__CFG11 CYREG_UDB_PA2_CFG11
#define Pin_1__PA__CFG12 CYREG_UDB_PA2_CFG12
#define Pin_1__PA__CFG13 CYREG_UDB_PA2_CFG13
#define Pin_1__PA__CFG14 CYREG_UDB_PA2_CFG14
#define Pin_1__PA__CFG2 CYREG_UDB_PA2_CFG2
#define Pin_1__PA__CFG3 CYREG_UDB_PA2_CFG3
#define Pin_1__PA__CFG4 CYREG_UDB_PA2_CFG4
#define Pin_1__PA__CFG5 CYREG_UDB_PA2_CFG5
#define Pin_1__PA__CFG6 CYREG_UDB_PA2_CFG6
#define Pin_1__PA__CFG7 CYREG_UDB_PA2_CFG7
#define Pin_1__PA__CFG8 CYREG_UDB_PA2_CFG8
#define Pin_1__PA__CFG9 CYREG_UDB_PA2_CFG9
#define Pin_1__PC CYREG_PRT2_PC
#define Pin_1__PC2 CYREG_PRT2_PC2
#define Pin_1__PORT 2u
#define Pin_1__PS CYREG_PRT2_PS
#define Pin_1__SHIFT 0

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
