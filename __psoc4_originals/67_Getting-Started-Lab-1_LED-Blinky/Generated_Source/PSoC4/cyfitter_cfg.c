/*******************************************************************************
* FILENAME: cyfitter_cfg.c
* PSoC Creator 2.2 Service Pack 1
*
* Description:
* This file is automatically generated by PSoC Creator with device 
* initialization code.  Except for the user defined sections in
* CyClockStartupError(), this file should not be modified.
*
********************************************************************************
* Copyright 2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include <string.h>
#include <cytypes.h>
#include <cydevice_trm.h>
#include <cyfitter.h>
#include <CyLib.h>
#include <cyfitter_cfg.h>

/* Clock startup error codes                                                   */
#define CYCLOCKSTART_NO_ERROR    0u
#define CYCLOCKSTART_XTAL_ERROR  1u
#define CYCLOCKSTART_32KHZ_ERROR 2u
#define CYCLOCKSTART_PLL_ERROR   3u

#ifdef CY_NEED_CYCLOCKSTARTUPERROR
/*******************************************************************************
* Function Name: CyClockStartupError
********************************************************************************
* Summary:
*  If an error is encountered during clock configuration (crystal startup error,
*  PLL lock error, etc.), the system will end up here.  Unless reimplemented by
*  the customer, this function will stop in an infinite loop.
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
#if defined(__GNUC__) || defined(__ARMCC_VERSION)
__attribute__ ((unused))
#endif
static void CyClockStartupError(uint8 errorCode);
#if defined(__GNUC__) || defined(__ARMCC_VERSION)
__attribute__ ((unused))
#endif
static void CyClockStartupError(uint8 errorCode)
{
    /* To remove the compiler warning if errorCode not used.                */
    errorCode = errorCode;

    /* `#START CyClockStartupError` */

    /* If we have a clock startup error (bad MHz crystal, PLL lock, etc.),  */
    /* we will end up here to allow the customer to implement something to  */
    /* deal with the clock condition.                                       */

    /* `#END` */

    /* If nothing else, stop here since the clocks have not started         */
    /* correctly.                                                           */
    while(1) {}
}
#endif


#if defined(__GNUC__) || defined(__ARMCC_VERSION)
	#define CYPACKED __attribute__ ((packed))
	#define CYALIGNED __attribute__ ((aligned))
	
	#if defined(__ARMCC_VERSION)
		#define CY_CFG_MEMORY_BARRIER() __memory_changed()
	#else
		#define CY_CFG_MEMORY_BARRIER() __sync_synchronize()
	#endif
	

	__attribute__ ((unused))
	static void CYMEMZERO(void *s, size_t n);
	__attribute__ ((unused))
	static void CYMEMZERO(void *s, size_t n)
	{
		(void)memset(s, 0, n);
	}
	__attribute__ ((unused))
	static void CYCONFIGCPY(void *dest, const void *src, size_t n);
	__attribute__ ((unused))
	static void CYCONFIGCPY(void *dest, const void *src, size_t n)
	{
		(void)memcpy(dest, src, n);
	}
	__attribute__ ((unused))
	static void CYCONFIGCPYCODE(void *dest, const void *src, size_t n);
	__attribute__ ((unused))
	static void CYCONFIGCPYCODE(void *dest, const void *src, size_t n)
	{
		(void)memcpy(dest, src, n);
	}
#else
	#error Unsupported toolchain
#endif


/*******************************************************************************
* Function Name: SetIMOBGTrims
********************************************************************************
*
* Summary:
*   Performs the configuration of the bandgap trim for the IMO based on the given
*   expected frequency of the IMO. 
*
* Parameters:
*   imoFreq: Frequency for operation of the IMO.
*
* Return:
*   void
*
*******************************************************************************/
static void SetIMOBGTrims(uint8 imoFreq);
__attribute__ ((section(".psocinit")))
static void SetIMOBGTrims(uint8 imoFreq)
{
	typedef struct {
		uint8 freq;
		uint8 absolute;
		uint8 tmpco;
	} CYPACKED imo_trim_entry_t;

	typedef struct {
		imo_trim_entry_t entries[4];
	} CYPACKED imo_trim_table_t;

	static const imo_trim_table_t *imo_trim_table = (const imo_trim_table_t *)CYREG_SFLASH_IMO_MAXF0;
	static const uint32 IMO_TRIM_FREQ_TABLE_ENTRIES = sizeof(imo_trim_table->entries)/sizeof(imo_trim_table->entries[0]);

	int32 imoTrimIndex;
	uint8 setAbs;
	uint8 setTmpCo;

	/* Traverse the SFLASH IMO frequency-dependent bandgap trim table to
	 * locate the appropriate value to trim the IMO bandgap based on freq. */
	setAbs = CY_GET_REG8((const void *)CYREG_SFLASH_IMO_ABS4);
	setTmpCo = CY_GET_REG8((const void *)CYREG_SFLASH_IMO_TMPCO4);
	for (imoTrimIndex = ((int32)IMO_TRIM_FREQ_TABLE_ENTRIES)-1;
	     (imoTrimIndex >= 0) && (imoFreq <= imo_trim_table->entries[imoTrimIndex].freq);
	     imoTrimIndex--)
	{
		setAbs = imo_trim_table->entries[imoTrimIndex].absolute;
		setTmpCo = imo_trim_table->entries[imoTrimIndex].tmpco;
	}

	CY_SET_REG32((void *)CYREG_PWR_BG_TRIM4, setAbs);
	CY_SET_REG32((void *)CYREG_PWR_BG_TRIM5, setTmpCo);
}



/*******************************************************************************
* Function Name: ClockSetup
********************************************************************************
*
* Summary:
*   Performs the initialization of all of the clocks in the device based on the
*   settings in the Clock tab of the DWR.  This includes enabling the requested
*   clocks and setting the necessary dividers to produce the desired frequency. 
*
* Parameters:
*   void
*
* Return:
*   void
*
*******************************************************************************/
static void ClockSetup(void);
__attribute__ ((section(".psocinit")))
static void ClockSetup(void)
{
	/* Enable HALF_EN before trimming for the flash accelerator. */
	CY_SET_REG32((void CYXDATA *)(CYREG_CLK_SELECT), (CY_GET_REG32((void *)CYREG_CLK_SELECT) | 0x00040000u));

	/* Trim IMO BG based on desired frequency. */
	SetIMOBGTrims(24u);

	/* Going less than or equal to 24MHz, so update the clock speed then adjust trim value. */
	CY_SET_REG32((void CYXDATA *)(CYREG_CLK_IMO_TRIM2), (25u));
	CyDelayCycles(5u);
	CY_SET_REG32((void CYXDATA *)(CYREG_CLK_IMO_TRIM1), (CY_GET_REG8((void *)CYREG_SFLASH_IMO_TRIM21)));
	CyDelayUs(5u);

	/* Disable HALF_EN since it is not required at this IMO frequency. */
	CY_SET_REG32((void CYXDATA *)(CYREG_CLK_SELECT), (CY_GET_REG32((void *)CYREG_CLK_SELECT) & 0xFFFBFFFFu));

	/* CYDEV_CLK_IMO_CONFIG Starting address: CYDEV_CLK_IMO_CONFIG */
	CY_SET_XTND_REG32((void CYFAR *)(CYREG_CLK_IMO_CONFIG), 0x80000000u);

	/* CYDEV_CLK_ILO_CONFIG Starting address: CYDEV_CLK_ILO_CONFIG */
	CY_SET_XTND_REG32((void CYFAR *)(CYREG_CLK_ILO_CONFIG), 0x80000000u);

}


/* Analog API Functions */


/*******************************************************************************
* Function Name: AnalogSetDefault
********************************************************************************
*
* Summary:
*  Sets up the analog portions of the chip to default values based on chip
*  configuration options from the project.
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
static void AnalogSetDefault(void);
static void AnalogSetDefault(void)
{
}

#define CY_AMUX_UNUSED CYREG_SAR_MUX_SWITCH_STATUS


/*******************************************************************************
* Function Name: cyfitter_cfg
********************************************************************************
* Summary:
*  This function is called by the start-up code for the selected device. It
*  performs all of the necessary device configuration based on the design
*  settings.  This includes settings from the Design Wide Resources (DWR) such
*  as Clocks and Pins as well as any component configuration that is necessary.
*
* Parameters:  
*   void
*
* Return:
*   void
*
*******************************************************************************/
__attribute__ ((section(".psocinit")))
void cyfitter_cfg(void)
{
	/* Disable interrupts by default. Let user enable if/when they want. */
	CyGlobalIntDisable;

	{

		typedef struct {
			void CYFAR *address;
			uint16 size;
		} CYPACKED cfg_memset_t;

		static const cfg_memset_t CYCODE cfg_memset_list [] = {
			/* address, size */
			{(void CYFAR *)(CYDEV_UDB_P0_U0_BASE), 1024u},
			{(void CYFAR *)(CYDEV_UDB_DSI0_BASE), 1024u},
		};

		uint8 CYDATA i;

		/* Zero out critical memory blocks before beginning configuration */
		for (i = 0u; i < (sizeof(cfg_memset_list)/sizeof(cfg_memset_list[0])); i++)
		{
			const cfg_memset_t CYCODE * CYDATA ms = &cfg_memset_list[i];
			CYMEMZERO(ms->address, (uint32)(ms->size));
		}

		/* HSIOM Starting address: CYDEV_HSIOM_BASE */
		CY_SET_XTND_REG32((void CYFAR *)(CYREG_HSIOM_PORT_SEL3), 0x0000EE00u);

		/* IOPINS0_1 Starting address: CYDEV_PRT1_DR */
		CY_SET_XTND_REG32((void CYFAR *)(CYREG_PRT1_PC), 0x00180000u);

		/* IOPINS0_3 Starting address: CYDEV_PRT3_DR */
		CY_SET_XTND_REG32((void CYFAR *)(CYREG_PRT3_PC), 0x00000D80u);

		/* UDB_PA_1 Starting address: CYDEV_UDB_PA1_BASE */
		CY_SET_XTND_REG32((void CYFAR *)(CYDEV_UDB_PA1_BASE), 0x00990000u);

		/* UDB_PA_3 Starting address: CYDEV_UDB_PA3_BASE */
		CY_SET_XTND_REG32((void CYFAR *)(CYDEV_UDB_PA3_BASE), 0x00990000u);

		/* Enable digital routing */
		CY_SET_XTND_REG8((void *)CYREG_UDB_UDBIF_BANK_CTL, CY_GET_XTND_REG8((void *)CYREG_UDB_UDBIF_BANK_CTL) | 0x02u);

		/* Enable UDB array */
		CY_SET_XTND_REG8((void *)CYREG_UDB_UDBIF_BANK_CTL, CY_GET_XTND_REG8((void *)CYREG_UDB_UDBIF_BANK_CTL) | 0x06u);
	}

	/* Setup clocks based on selections from Clock DWR */
	ClockSetup();

	/* Perform basic analog initialization to defaults */
	AnalogSetDefault();

}
