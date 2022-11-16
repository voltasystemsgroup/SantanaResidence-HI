#ifndef __S2_CARRIER_INFINITY_ZONE_DRIVE_H__
#define __S2_CARRIER_INFINITY_ZONE_DRIVE_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Carrier_Infinity_Zone_Drive_HEAT_SP_UP_DIG_INPUT 0
#define __S2_Carrier_Infinity_Zone_Drive_HEAT_SP_DOWN_DIG_INPUT 1
#define __S2_Carrier_Infinity_Zone_Drive_COOL_SP_UP_DIG_INPUT 2
#define __S2_Carrier_Infinity_Zone_Drive_COOL_SP_DOWN_DIG_INPUT 3
#define __S2_Carrier_Infinity_Zone_Drive_FAN_AUTO_DIG_INPUT 4
#define __S2_Carrier_Infinity_Zone_Drive_FAN_LOW_DIG_INPUT 5
#define __S2_Carrier_Infinity_Zone_Drive_FAN_MEDIUM_DIG_INPUT 6
#define __S2_Carrier_Infinity_Zone_Drive_FAN_HIGH_DIG_INPUT 7
#define __S2_Carrier_Infinity_Zone_Drive_OVERRIDE_TIME_UP_DIG_INPUT 8
#define __S2_Carrier_Infinity_Zone_Drive_OVERRIDE_TIME_DOWN_DIG_INPUT 9
#define __S2_Carrier_Infinity_Zone_Drive_HOLD_ON_DIG_INPUT 10
#define __S2_Carrier_Infinity_Zone_Drive_HOLD_OFF_DIG_INPUT 11
#define __S2_Carrier_Infinity_Zone_Drive_HOLD_TOGGLE_DIG_INPUT 12
#define __S2_Carrier_Infinity_Zone_Drive_SEND_HEAT_SP_DIG_INPUT 13
#define __S2_Carrier_Infinity_Zone_Drive_SEND_COOL_SP_DIG_INPUT 14
#define __S2_Carrier_Infinity_Zone_Drive_SEND_OVERRIDE_DIG_INPUT 15
#define __S2_Carrier_Infinity_Zone_Drive_SEND_HEAT_SP_AGAIN_DIG_INPUT 16
#define __S2_Carrier_Infinity_Zone_Drive_SEND_COOL_SP_AGAIN_DIG_INPUT 17
#define __S2_Carrier_Infinity_Zone_Drive_SEND_OVERRIDE_AGAIN_DIG_INPUT 18
#define __S2_Carrier_Infinity_Zone_Drive_SEND_FAN_AGAIN_DIG_INPUT 19
#define __S2_Carrier_Infinity_Zone_Drive_SEND_HOLD_AGAIN_DIG_INPUT 20


/*
* ANALOG_INPUT
*/
#define __S2_Carrier_Infinity_Zone_Drive_SYSTEM_NUMBER_ANALOG_INPUT 0
#define __S2_Carrier_Infinity_Zone_Drive_ZONE_NUMBER_ANALOG_INPUT 1
#define __S2_Carrier_Infinity_Zone_Drive_HEAT_SP_MAX_ANALOG_INPUT 2
#define __S2_Carrier_Infinity_Zone_Drive_HEAT_SP_MIN_ANALOG_INPUT 3
#define __S2_Carrier_Infinity_Zone_Drive_COOL_SP_MAX_ANALOG_INPUT 4
#define __S2_Carrier_Infinity_Zone_Drive_COOL_SP_MIN_ANALOG_INPUT 5
#define __S2_Carrier_Infinity_Zone_Drive_HEAT_SP_IN_ANALOG_INPUT 6
#define __S2_Carrier_Infinity_Zone_Drive_COOL_SP_IN_ANALOG_INPUT 7


#define __S2_Carrier_Infinity_Zone_Drive_FROM_DEVICE$_BUFFER_INPUT 8
#define __S2_Carrier_Infinity_Zone_Drive_FROM_DEVICE$_BUFFER_MAX_LEN 250
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Zone_Drive, __FROM_DEVICE$, __S2_Carrier_Infinity_Zone_Drive_FROM_DEVICE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Carrier_Infinity_Zone_Drive_RESEND_HEAT_SP_DIG_OUTPUT 0
#define __S2_Carrier_Infinity_Zone_Drive_RESEND_COOL_SP_DIG_OUTPUT 1
#define __S2_Carrier_Infinity_Zone_Drive_RESEND_FAN_DIG_OUTPUT 2
#define __S2_Carrier_Infinity_Zone_Drive_RESEND_OVERRIDE_DIG_OUTPUT 3
#define __S2_Carrier_Infinity_Zone_Drive_RESEND_HOLD_DIG_OUTPUT 4
#define __S2_Carrier_Infinity_Zone_Drive_HEAT_SP_CELSIUS_DIG_OUTPUT 5
#define __S2_Carrier_Infinity_Zone_Drive_COOL_SP_CELSIUS_DIG_OUTPUT 6
#define __S2_Carrier_Infinity_Zone_Drive_ROOM_NEGATIVE_DIG_OUTPUT 7
#define __S2_Carrier_Infinity_Zone_Drive_ROOM_CELSIUS_DIG_OUTPUT 8


/*
* ANALOG_OUTPUT
*/
#define __S2_Carrier_Infinity_Zone_Drive_FAN_IN_ANALOG_OUTPUT 0
#define __S2_Carrier_Infinity_Zone_Drive_HOLD_IN_ANALOG_OUTPUT 1
#define __S2_Carrier_Infinity_Zone_Drive_OVERRIDE_STATE_IN_ANALOG_OUTPUT 2
#define __S2_Carrier_Infinity_Zone_Drive_HEAT_SP_ANALOG_OUTPUT 3
#define __S2_Carrier_Infinity_Zone_Drive_COOL_SP_ANALOG_OUTPUT 4
#define __S2_Carrier_Infinity_Zone_Drive_ROOM_TEMPERATURE_ANALOG_OUTPUT 5
#define __S2_Carrier_Infinity_Zone_Drive_ROOM_HUMIDITY_ANALOG_OUTPUT 6

#define __S2_Carrier_Infinity_Zone_Drive_OVERRIDE_TIME$_STRING_OUTPUT 7
#define __S2_Carrier_Infinity_Zone_Drive_TO_PROCESSOR$_STRING_OUTPUT 8


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
#define __S2_Carrier_Infinity_Zone_Drive_STEMP_STRING_MAX_LEN 250
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Zone_Drive, __STEMP, __S2_Carrier_Infinity_Zone_Drive_STEMP_STRING_MAX_LEN );
#define __S2_Carrier_Infinity_Zone_Drive_SSYSTEMZONE_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Zone_Drive, __SSYSTEMZONE, __S2_Carrier_Infinity_Zone_Drive_SSYSTEMZONE_STRING_MAX_LEN );
#define __S2_Carrier_Infinity_Zone_Drive_STEMP1_STRING_MAX_LEN 10
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Zone_Drive, __STEMP1, __S2_Carrier_Infinity_Zone_Drive_STEMP1_STRING_MAX_LEN );
#define __S2_Carrier_Infinity_Zone_Drive_SSYSTEM_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Zone_Drive, __SSYSTEM, __S2_Carrier_Infinity_Zone_Drive_SSYSTEM_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Carrier_Infinity_Zone_Drive )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __ICURRENTHEATSP;
   unsigned short __ICURRENTCOOLSP;
   unsigned short __ICURRENTFAN;
   unsigned short __ICURRENTOVERRIDE;
   unsigned short __ICURRENTHOLD;
   unsigned short __ICURRENTOVERRIDESTATE;
   unsigned short __IREQUESTEDHEATSP;
   unsigned short __IREQUESTEDCOOLSP;
   unsigned short __IREQUESTEDFAN;
   unsigned short __IREQUESTEDOVERRIDE;
   unsigned short __IREQUESTEDHOLD;
   unsigned short __IFLAG1;
   unsigned short __IPOINTER1;
   unsigned short __IPOINTER2;
   unsigned short __IHEATMAX;
   unsigned short __IHEATMIN;
   unsigned short __ICOOLMAX;
   unsigned short __ICOOLMIN;
   unsigned short __IHEATCELSIUS;
   unsigned short __ICOOLCELSIUS;
   unsigned short __ITEMP;
   unsigned short __IHEATSPCOUNTER;
   unsigned short __ICOOLSPCOUNTER;
   unsigned short __IFANCOUNTER;
   unsigned short __IOVERRIDETIMERCOUNTER;
   unsigned short __IHOLDCOUNTER;
   unsigned short __ISPTIMESENT;
   unsigned short __IROOMTEMPERATURE;
   unsigned short __IROOMHUMIDITY;
   unsigned short __IROOMNEGATIVE;
   unsigned short __IROOMCELSIUS;
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Zone_Drive, __STEMP );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Zone_Drive, __SSYSTEMZONE );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Zone_Drive, __STEMP1 );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Zone_Drive, __SSYSTEM );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Zone_Drive, __FROM_DEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_Carrier_Infinity_Zone_Drive )
{
};



#endif //__S2_CARRIER_INFINITY_ZONE_DRIVE_H__

