#ifndef __S2_CARRIER_INFINITY_PROCESSOR_V2_H__
#define __S2_CARRIER_INFINITY_PROCESSOR_V2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Carrier_Infinity_Processor_v2_POLL_NEXT_DIG_INPUT 0
#define __S2_Carrier_Infinity_Processor_v2_RESEND_IN_DIG_INPUT 1
#define __S2_Carrier_Infinity_Processor_v2_MODE_OFF_DIG_INPUT 2
#define __S2_Carrier_Infinity_Processor_v2_MODE_HEAT_DIG_INPUT 3
#define __S2_Carrier_Infinity_Processor_v2_MODE_COOL_DIG_INPUT 4
#define __S2_Carrier_Infinity_Processor_v2_MODE_AUTO_DIG_INPUT 5
#define __S2_Carrier_Infinity_Processor_v2_MODE_EHEAT_DIG_INPUT 6
#define __S2_Carrier_Infinity_Processor_v2_GET_DEALER_INFO_DIG_INPUT 7
#define __S2_Carrier_Infinity_Processor_v2_SEND_MODE_AGAIN_DIG_INPUT 8


/*
* ANALOG_INPUT
*/
#define __S2_Carrier_Infinity_Processor_v2_NUMBER_OF_ZONES_ANALOG_INPUT 0
#define __S2_Carrier_Infinity_Processor_v2_SYSTEM_NUMBER_ANALOG_INPUT 1


#define __S2_Carrier_Infinity_Processor_v2_FROM_MODULES$_BUFFER_INPUT 2
#define __S2_Carrier_Infinity_Processor_v2_FROM_MODULES$_BUFFER_MAX_LEN 150
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __FROM_MODULES$, __S2_Carrier_Infinity_Processor_v2_FROM_MODULES$_BUFFER_MAX_LEN );
#define __S2_Carrier_Infinity_Processor_v2_FROM_DEVICE$_BUFFER_INPUT 3
#define __S2_Carrier_Infinity_Processor_v2_FROM_DEVICE$_BUFFER_MAX_LEN 250
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __FROM_DEVICE$, __S2_Carrier_Infinity_Processor_v2_FROM_DEVICE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Carrier_Infinity_Processor_v2_TIMED_OUT_DIG_OUTPUT 0
#define __S2_Carrier_Infinity_Processor_v2_RESEND_MODE_DIG_OUTPUT 1
#define __S2_Carrier_Infinity_Processor_v2_OUTSIDE_NEGATIVE_DIG_OUTPUT 2
#define __S2_Carrier_Infinity_Processor_v2_OUTSIDE_CELSIUS_DIG_OUTPUT 3


/*
* ANALOG_OUTPUT
*/
#define __S2_Carrier_Infinity_Processor_v2_MODE_IN_ANALOG_OUTPUT 0
#define __S2_Carrier_Infinity_Processor_v2_OUTSIDE_TEMPERATURE_ANALOG_OUTPUT 1

#define __S2_Carrier_Infinity_Processor_v2_DEALER_NAME$_STRING_OUTPUT 2
#define __S2_Carrier_Infinity_Processor_v2_DEALER_PHONE$_STRING_OUTPUT 3
#define __S2_Carrier_Infinity_Processor_v2_TO_DEVICE$_STRING_OUTPUT 4

#define __S2_Carrier_Infinity_Processor_v2_ZONE_DATA$_STRING_OUTPUT 5
#define __S2_Carrier_Infinity_Processor_v2_ZONE_DATA$_ARRAY_LENGTH 8

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
#define __S2_Carrier_Infinity_Processor_v2_STEMP_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __STEMP, __S2_Carrier_Infinity_Processor_v2_STEMP_STRING_MAX_LEN );
#define __S2_Carrier_Infinity_Processor_v2_SSYSTEM_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __SSYSTEM, __S2_Carrier_Infinity_Processor_v2_SSYSTEM_STRING_MAX_LEN );
#define __S2_Carrier_Infinity_Processor_v2_SSYSTEM2_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __SSYSTEM2, __S2_Carrier_Infinity_Processor_v2_SSYSTEM2_STRING_MAX_LEN );
#define __S2_Carrier_Infinity_Processor_v2_SDEALER_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __SDEALER, __S2_Carrier_Infinity_Processor_v2_SDEALER_STRING_MAX_LEN );
#define __S2_Carrier_Infinity_Processor_v2_SDEALERPHONE_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __SDEALERPHONE, __S2_Carrier_Infinity_Processor_v2_SDEALERPHONE_STRING_MAX_LEN );
#define __S2_Carrier_Infinity_Processor_v2_SPOLLQUEUE_ARRAY_NUM_ELEMS 66
#define __S2_Carrier_Infinity_Processor_v2_SPOLLQUEUE_ARRAY_NUM_CHARS 25
CREATE_STRING_ARRAY( S2_Carrier_Infinity_Processor_v2, __SPOLLQUEUE, __S2_Carrier_Infinity_Processor_v2_SPOLLQUEUE_ARRAY_NUM_ELEMS, __S2_Carrier_Infinity_Processor_v2_SPOLLQUEUE_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Carrier_Infinity_Processor_v2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __ZONE_DATA$ );
   unsigned short __INEXTPOLL;
   unsigned short __IFLAG1;
   unsigned short __IFLAG2;
   unsigned short __IZPOINTER;
   unsigned short __A;
   unsigned short __B;
   unsigned short __ITEMPZONE;
   unsigned short __ITEMP;
   unsigned short __ISYSTEMNUMBER;
   unsigned short __ICOLONPOINTER;
   unsigned short __IENDPOINTER;
   unsigned short __ICURRENTMODE;
   unsigned short __IMAXPOLL;
   unsigned short __IMAXZONE;
   unsigned short __IPOINTER1;
   unsigned short __IPOINTER2;
   unsigned short __IMODECOUNTER;
   unsigned short __IREQUESTEDMODE;
   unsigned short __IMODECOUNT;
   unsigned short __IOUTSIDETEMPERATURE;
   unsigned short __ITEMPOUTSIDE;
   unsigned short __IOUTSIDENEGATIVE;
   unsigned short __IOUTSIDECELSIUS;
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __STEMP );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __SSYSTEM );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __SSYSTEM2 );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __SDEALER );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __SDEALERPHONE );
   DECLARE_STRING_ARRAY( S2_Carrier_Infinity_Processor_v2, __SPOLLQUEUE );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __FROM_MODULES$ );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Processor_v2, __FROM_DEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_Carrier_Infinity_Processor_v2 )
{
};

DEFINE_WAITEVENT( S2_Carrier_Infinity_Processor_v2, WTIMEOUT );


#endif //__S2_CARRIER_INFINITY_PROCESSOR_V2_H__

