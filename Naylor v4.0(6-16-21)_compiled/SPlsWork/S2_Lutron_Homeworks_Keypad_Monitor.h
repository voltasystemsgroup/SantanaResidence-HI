#ifndef __S2_LUTRON_HOMEWORKS_KEYPAD_MONITOR_H__
#define __S2_LUTRON_HOMEWORKS_KEYPAD_MONITOR_H__


#include "S2_LutronHWI_Lib.h"


/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/

#define __S2_Lutron_Homeworks_Keypad_Monitor_BUTTONFB_DIG_INPUT 0
#define __S2_Lutron_Homeworks_Keypad_Monitor_BUTTONFB_ARRAY_LENGTH 24

/*
* ANALOG_INPUT
*/


#define __S2_Lutron_Homeworks_Keypad_Monitor_TOKEYPADS$_BUFFER_INPUT 0
#define __S2_Lutron_Homeworks_Keypad_Monitor_TOKEYPADS$_BUFFER_MAX_LEN 1024
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor, __TOKEYPADS$, __S2_Lutron_Homeworks_Keypad_Monitor_TOKEYPADS$_BUFFER_MAX_LEN );

#define __S2_Lutron_Homeworks_Keypad_Monitor_BUTTONFBANA_ANALOG_INPUT 1
#define __S2_Lutron_Homeworks_Keypad_Monitor_BUTTONFBANA_ARRAY_LENGTH 24

/*
* DIGITAL_OUTPUT
*/

#define __S2_Lutron_Homeworks_Keypad_Monitor_BUTTONPRESS_DIG_OUTPUT 0
#define __S2_Lutron_Homeworks_Keypad_Monitor_BUTTONPRESS_ARRAY_LENGTH 24
#define __S2_Lutron_Homeworks_Keypad_Monitor_BUTTONDOUBLETAP_DIG_OUTPUT 24
#define __S2_Lutron_Homeworks_Keypad_Monitor_BUTTONDOUBLETAP_ARRAY_LENGTH 24
#define __S2_Lutron_Homeworks_Keypad_Monitor_BUTTONHELD_DIG_OUTPUT 48
#define __S2_Lutron_Homeworks_Keypad_Monitor_BUTTONHELD_ARRAY_LENGTH 24

/*
* ANALOG_OUTPUT
*/

#define __S2_Lutron_Homeworks_Keypad_Monitor_FROMMODULES$_STRING_OUTPUT 0


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_Lutron_Homeworks_Keypad_Monitor_ALLOWBUTTONHELD_INTEGER_PARAMETER 11
#define __S2_Lutron_Homeworks_Keypad_Monitor_ALLOWBUTTONDOUBLETAP_INTEGER_PARAMETER 12
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
#define __S2_Lutron_Homeworks_Keypad_Monitor_KEYPADADDRESS_STRING_PARAMETER 10
#define __S2_Lutron_Homeworks_Keypad_Monitor_KEYPADADDRESS_PARAM_MAX_LEN 14
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor, __KEYPADADDRESS, __S2_Lutron_Homeworks_Keypad_Monitor_KEYPADADDRESS_PARAM_MAX_LEN );


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
#define __S2_Lutron_Homeworks_Keypad_Monitor_SADDRESS$_STRING_MAX_LEN 15
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor, __SADDRESS$, __S2_Lutron_Homeworks_Keypad_Monitor_SADDRESS$_STRING_MAX_LEN );
#define __S2_Lutron_Homeworks_Keypad_Monitor_SKBP$_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor, __SKBP$, __S2_Lutron_Homeworks_Keypad_Monitor_SKBP$_STRING_MAX_LEN );
#define __S2_Lutron_Homeworks_Keypad_Monitor_SKBR$_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor, __SKBR$, __S2_Lutron_Homeworks_Keypad_Monitor_SKBR$_STRING_MAX_LEN );
#define __S2_Lutron_Homeworks_Keypad_Monitor_STERMINATOR$_STRING_MAX_LEN 2
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor, __STERMINATOR$, __S2_Lutron_Homeworks_Keypad_Monitor_STERMINATOR$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __BUTTONFB );
   DECLARE_IO_ARRAY( __BUTTONPRESS );
   DECLARE_IO_ARRAY( __BUTTONDOUBLETAP );
   DECLARE_IO_ARRAY( __BUTTONHELD );
   DECLARE_IO_ARRAY( __BUTTONFBANA );
   unsigned short __FENABLED;
   unsigned short __SEMAPHORE;
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor, __SADDRESS$ );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor, __SKBP$ );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor, __SKBR$ );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor, __STERMINATOR$ );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor, __TOKEYPADS$ );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor, __KEYPADADDRESS );
};

START_NVRAM_VAR_STRUCT( S2_Lutron_Homeworks_Keypad_Monitor )
{
};



#endif //__S2_LUTRON_HOMEWORKS_KEYPAD_MONITOR_H__

