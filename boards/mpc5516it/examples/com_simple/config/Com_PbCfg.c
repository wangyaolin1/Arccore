/*
* Configuration of module: Com (Com_PbCfg.c)
*
* Created by:              ArcCore
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       2.1.1
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#include "Com.h"
#include "Com_Internal.h"
#include <stdlib.h>
#if defined(USE_PDUR)
#include "PduR.h"
#endif


/*
 * Signal init values.
 */
const uint32 Com_SignalInitValue_CanDB_Signal_32_21_BE_Tester = 0;
const uint8 Com_SignalInitValue_CanDB_Signal_1_4_LE_Tester = 0;
const sint16 Com_SignalInitValue_CanDB_Signal_45_12_LE_Tester = 0;
const sint16 Com_SignalInitValue_CanDB_Signal_29_12_BE_Tester = 0;
const uint32 Com_SignalInitValue_CanDB_Signal_32_21_BE = 0;
const uint8 Com_SignalInitValue_CanDB_Signal_1_4_LE = 0;
const sint16 Com_SignalInitValue_CanDB_Signal_45_12_LE = 0;
const sint16 Com_SignalInitValue_CanDB_Signal_29_12_BE = 0;
	

/*
 * Group signal definitions
 */
const ComGroupSignal_type ComGroupSignal[] = {
	{
		.Com_Arc_EOL = 1
	}
};


/* SignalGroup GroupSignals lists. */


/* IPdu buffers and signal group buffers */
uint8 ComArcIPduBuffer_CanDB_Message_1[8];
uint8 ComArcIPduDeferredRxBuffer_CanDB_Message_1[8]; 
	   
uint8 ComArcIPduBuffer_CanDB_Message_2[8]; 
	   

/*
 * Signal definitions
 */
 
const ComSignal_type ComSignal[] = {
	{
		.ComHandleId = CanDB_Signal_32_21_BE_Tester,
		.ComIPduHandleId = 0,
		.Com_Arc_ShadowBuffer = NULL,
		.Com_Arc_ShadowBuffer_Mask = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = PENDING,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_32_21_BE_Tester,
		
		.ComBitPosition = 20,
		.ComBitSize = 21,
		
		.ComSignalEndianess = COM_BIG_ENDIAN,
		.ComSignalType = UINT32,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.ComHandleId = CanDB_Signal_1_4_LE_Tester,
		.ComIPduHandleId = 0,
		.Com_Arc_ShadowBuffer = NULL,
		.Com_Arc_ShadowBuffer_Mask = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = PENDING,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_1_4_LE_Tester,
		
		.ComBitPosition = 1,
		.ComBitSize = 4,
		
		.ComSignalEndianess = COM_LITTLE_ENDIAN,
		.ComSignalType = UINT8,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.ComHandleId = CanDB_Signal_45_12_LE_Tester,
		.ComIPduHandleId = 0,
		.Com_Arc_ShadowBuffer = NULL,
		.Com_Arc_ShadowBuffer_Mask = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = PENDING,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_45_12_LE_Tester,
		
		.ComBitPosition = 45,
		.ComBitSize = 12,
		
		.ComSignalEndianess = COM_LITTLE_ENDIAN,
		.ComSignalType = SINT16,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.ComHandleId = CanDB_Signal_29_12_BE_Tester,
		.ComIPduHandleId = 0,
		.Com_Arc_ShadowBuffer = NULL,
		.Com_Arc_ShadowBuffer_Mask = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = PENDING,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_29_12_BE_Tester,
		
		.ComBitPosition = 0,
		.ComBitSize = 12,
		
		.ComSignalEndianess = COM_BIG_ENDIAN,
		.ComSignalType = SINT16,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.ComHandleId = CanDB_Signal_32_21_BE,
		.ComIPduHandleId = 1,
		.Com_Arc_ShadowBuffer = NULL,
		.Com_Arc_ShadowBuffer_Mask = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = TRIGGERED,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_32_21_BE,
		
		.ComBitPosition = 20,
		.ComBitSize = 21,
		
		.ComSignalEndianess = COM_BIG_ENDIAN,
		.ComSignalType = UINT32,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.ComHandleId = CanDB_Signal_1_4_LE,
		.ComIPduHandleId = 1,
		.Com_Arc_ShadowBuffer = NULL,
		.Com_Arc_ShadowBuffer_Mask = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = TRIGGERED,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_1_4_LE,
		
		.ComBitPosition = 1,
		.ComBitSize = 4,
		
		.ComSignalEndianess = COM_LITTLE_ENDIAN,
		.ComSignalType = UINT8,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.ComHandleId = CanDB_Signal_45_12_LE,
		.ComIPduHandleId = 1,
		.Com_Arc_ShadowBuffer = NULL,
		.Com_Arc_ShadowBuffer_Mask = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = TRIGGERED,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_45_12_LE,
		
		.ComBitPosition = 45,
		.ComBitSize = 12,
		
		.ComSignalEndianess = COM_LITTLE_ENDIAN,
		.ComSignalType = SINT16,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.ComHandleId = CanDB_Signal_29_12_BE,
		.ComIPduHandleId = 1,
		.Com_Arc_ShadowBuffer = NULL,
		.Com_Arc_ShadowBuffer_Mask = NULL,
		.ComFirstTimeoutFactor = 0,
		.ComNotification = NULL,
		.ComTimeoutFactor = 0,
		.ComTimeoutNotification = NULL,
		.ComErrorNotification = NULL,
		.ComTransferProperty = TRIGGERED,
		
		.ComUpdateBitPosition = 0,
		.ComSignalArcUseUpdateBit = 0,
		
		
		.ComSignalInitValue = &Com_SignalInitValue_CanDB_Signal_29_12_BE,
		
		.ComBitPosition = 0,
		.ComBitSize = 12,
		
		.ComSignalEndianess = COM_BIG_ENDIAN,
		.ComSignalType = SINT16,
		.Com_Arc_IsSignalGroup = 0,
		.ComGroupSignal = NULL,
		
		
		.ComRxDataTimeoutAction = COM_TIMEOUT_DATA_ACTION_NONE,
		
		.Com_Arc_EOL = 0
	},
	{
		.Com_Arc_EOL = 1
	}
};


/*
 * I-PDU group definitions
 */
const ComIPduGroup_type ComIPduGroup[] = {
	{
		.ComIPduGroupHandleId = ComPduGroup,
		.Com_Arc_EOL = 0
	},
	
	{
		.ComIPduGroupHandleId = CanDbImportedPdus,
		.Com_Arc_EOL = 0
	},
	
	{
		.Com_Arc_EOL  = 1
	}
};

/* IPdu signal lists. */
const ComSignal_type * const ComIPduSignalRefs_CanDB_Message_1[] = {
	&ComSignal[ CanDB_Signal_32_21_BE_Tester ],
	&ComSignal[ CanDB_Signal_1_4_LE_Tester ],
	&ComSignal[ CanDB_Signal_45_12_LE_Tester ],
	&ComSignal[ CanDB_Signal_29_12_BE_Tester ],		
	NULL,
};
const ComSignal_type * const ComIPduSignalRefs_CanDB_Message_2[] = {
	&ComSignal[ CanDB_Signal_32_21_BE ],
	&ComSignal[ CanDB_Signal_1_4_LE ],
	&ComSignal[ CanDB_Signal_45_12_LE ],
	&ComSignal[ CanDB_Signal_29_12_BE ],		
	NULL,
};

/*
 * I-PDU definitions
 */
const ComIPdu_type ComIPdu[] = {	
    
	{ // CanDB_Message_1
		.ArcIPduOutgoingId = PDUR_REVERSE_PDU_ID_CanDB_Message_1,
		.ComIPduCallout = NULL,
		
		.ComIPduSignalProcessing =  DEFERRED,
		.ComIPduSize =  8,
		.ComIPduDirection = RECEIVE,
		.ComIPduGroupRef = CanDbImportedPdus,
		
		.ComIPduDeferredDataPtr = ComArcIPduDeferredRxBuffer_CanDB_Message_1,
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor = 0,
			.ComTxIPduUnusedAreasDefault = 0,
			.ComTxModeTrue = {
				.ComTxModeMode = NONE,
				.ComTxModeNumberOfRepetitions = 0,
				.ComTxModeRepetitionPeriodFactor = 0,
				.ComTxModeTimeOffsetFactor = 0,
				.ComTxModeTimePeriodFactor = 0,
			},
		},
		
		.ComIPduDataPtr = ComArcIPduBuffer_CanDB_Message_1,		
		.ComIPduSignalRef = ComIPduSignalRefs_CanDB_Message_1,
		.ComIPduDynSignalRef = 0,
		.Com_Arc_EOL = 0
	},   
	{ // CanDB_Message_2
		.ArcIPduOutgoingId = PDUR_PDU_ID_CanDB_Message_2,
		.ComIPduCallout = NULL,
		
		.ComIPduSignalProcessing =  DEFERRED,
		.ComIPduSize =  8,
		.ComIPduDirection = SEND,
		.ComIPduGroupRef = CanDbImportedPdus,
		
		.ComIPduDeferredDataPtr = 0,		
		.ComTxIPdu = {
			.ComTxIPduMinimumDelayFactor = 0,
			.ComTxIPduUnusedAreasDefault = 0,
			.ComTxModeTrue = {
				.ComTxModeMode = DIRECT,
				.ComTxModeNumberOfRepetitions = 0,
				.ComTxModeRepetitionPeriodFactor = 0,
				.ComTxModeTimeOffsetFactor = 0,
				.ComTxModeTimePeriodFactor = 0,
			},
		},
		
		.ComIPduDataPtr = ComArcIPduBuffer_CanDB_Message_2,		
		.ComIPduSignalRef = ComIPduSignalRefs_CanDB_Message_2,
		.ComIPduDynSignalRef = 0,
		.Com_Arc_EOL = 0
	},   
	{
		.Com_Arc_EOL = 1
	}
};

const Com_ConfigType ComConfiguration = {
	.ComConfigurationId = 1,
	.ComIPdu = ComIPdu,
	.ComIPduGroup = ComIPduGroup,
	.ComSignal = ComSignal,
	.ComGroupSignal = ComGroupSignal
};

Com_Arc_IPdu_type Com_Arc_IPdu[] = {
	{ // CanDB_Message_1
		.Com_Arc_TxIPduTimers = {
			.ComTxIPduNumberOfRepetitionsLeft = 0,
			.ComTxModeRepetitionPeriodTimer = 0,
			.ComTxIPduMinimumDelayTimer = 0,
			.ComTxModeTimePeriodTimer = 0
		},		
		.Com_Arc_IpduStarted = 0	
	},
	{ // CanDB_Message_2
		.Com_Arc_TxIPduTimers = {
			.ComTxIPduNumberOfRepetitionsLeft = 0,
			.ComTxModeRepetitionPeriodTimer = 0,
			.ComTxIPduMinimumDelayTimer = 0,
			.ComTxModeTimePeriodTimer = 0
		},		
		.Com_Arc_IpduStarted = 0	
	},
};

Com_Arc_Signal_type Com_Arc_Signal[] = {
	{ // CanDB_Signal_32_21_BE_Tester
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_1_4_LE_Tester
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_45_12_LE_Tester
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_29_12_BE_Tester
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_32_21_BE
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_1_4_LE
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_45_12_LE
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
	{ // CanDB_Signal_29_12_BE
		.Com_Arc_DeadlineCounter = 0,
		.ComSignalUpdated = 0,
	},
	
};


Com_Arc_Config_type Com_Arc_Config = {
	.ComIPdu = Com_Arc_IPdu,
	.ComSignal = Com_Arc_Signal,
	.ComGroupSignal = NULL
};

