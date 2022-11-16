#ifndef __S2_LUTRONHWI_LIB_H__
#define __S2_LUTRONHWI_LIB_H__


#include "S2_LutronHWI_Lib.h"



/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/



/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_LutronHWI_Lib )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_LutronHWI_Lib )
{
};


struct StringHdr_s* S2_LutronHWI_Lib__INTTYPETOSTRING ( struct StringHdr_s*  __FN_DSTRET_STR__  , unsigned short __TYPE ) ;
struct StringHdr_s* S2_LutronHWI_Lib__STRINGPADTRAILING ( struct StringHdr_s*  __FN_DSTRET_STR__  , struct StringHdr_s* __VALUE$ , unsigned short __TRAILINGDIGITS , struct StringHdr_s* __PADSTRING$ ) ;
struct StringHdr_s* S2_LutronHWI_Lib__MAKECOMMSPEC ( struct StringHdr_s*  __FN_DSTRET_STR__  , unsigned short __PORT , unsigned short __CSPEC ) ;
struct StringHdr_s* S2_LutronHWI_Lib__LUTRONCOMSPEC ( struct StringHdr_s*  __FN_DSTRET_STR__  , unsigned short __PORT , unsigned short __BAUD , unsigned short __HANDSHAKE ) ;
struct StringHdr_s* S2_LutronHWI_Lib__COMPORTTOSTRING ( struct StringHdr_s*  __FN_DSTRET_STR__  , unsigned short __PORT ) ;
struct StringHdr_s* S2_LutronHWI_Lib__BAUDRATETOSTRING ( struct StringHdr_s*  __FN_DSTRET_STR__  , unsigned short __BAUD ) ;
struct StringHdr_s* S2_LutronHWI_Lib__HANDSHAKETOSTRING ( struct StringHdr_s*  __FN_DSTRET_STR__  , unsigned short __HANDSHAKE ) ;
struct StringHdr_s* S2_LutronHWI_Lib__DEBUG_DYNAMICERROR ( struct StringHdr_s*  __FN_DSTRET_STR__  , unsigned short __LIERROR , struct StringHdr_s* __LSMSG ) ;
struct StringHdr_s* S2_LutronHWI_Lib__MODULELOGMESSAGE ( struct StringHdr_s*  __FN_DSTRET_STR__  , struct StringHdr_s* __MESSAGE$ ) ;
unsigned short S2_LutronHWI_Lib__DECODEDIMMERLEVEL ( struct StringHdr_s* __LSLEVEL$ ) ;
unsigned long S2_LutronHWI_Lib__LUTRONTIMETOCENTISECONDS ( struct StringHdr_s* __TIME$ ) ;

#endif //__S2_LUTRON_HOMEWORKS_KEYPAD_MONITOR_H__

