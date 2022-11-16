#ifndef __S2_LUTRON_HOMEWORKS_KEYPAD_EMULATION_H__
#define __S2_LUTRON_HOMEWORKS_KEYPAD_EMULATION_H__


#include "S2_LutronHWI_Lib.h"

/*
* STRUCTURE S2_Lutron_Homeworks_Keypad_Emulation__LUTRONBUTTON
*/
#define LUTRONBUTTON__S2_Lutron_Homeworks_Keypad_Emulation_BTNNAME_STRING_MAX_LEN 50
START_STRUCTURE_DEFINITION( S2_Lutron_Homeworks_Keypad_Emulation, LUTRONBUTTON )
{
   CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Emulation, LUTRONBUTTON__BTNNAME, LUTRONBUTTON__S2_Lutron_Homeworks_Keypad_Emulation_BTNNAME_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Emulation, LUTRONBUTTON__BTNNAME );
   unsigned short LUTRONBUTTON__ADDRESS;
   unsigned short LUTRONBUTTON__DEFINED;
   unsigned short LUTRONBUTTON__LEDSTATE;
   unsigned short LUTRONBUTTON__TYPE;
};


/*
* Constructor and Destructor
*/
int S2_Lutron_Homeworks_Keypad_Emulation_LUTRONBUTTON_Constructor ( START_STRUCTURE_DEFINITION( S2_Lutron_Homeworks_Keypad_Emulation, LUTRONBUTTON ) * me, int nVerbose );
int S2_Lutron_Homeworks_Keypad_Emulation_LUTRONBUTTON_Destructor ( START_STRUCTURE_DEFINITION( S2_Lutron_Homeworks_Keypad_Emulation, LUTRONBUTTON ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/

#define __S2_Lutron_Homeworks_Keypad_Emulation_BUTTON_DIG_INPUT 0
#define __S2_Lutron_Homeworks_Keypad_Emulation_BUTTON_ARRAY_LENGTH 24

/*
* ANALOG_INPUT
*/


#define __S2_Lutron_Homeworks_Keypad_Emulation_TOKEYPADS$_BUFFER_INPUT 0
#define __S2_Lutron_Homeworks_Keypad_Emulation_TOKEYPADS$_BUFFER_MAX_LEN 1024
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Emulation, __TOKEYPADS$, __S2_Lutron_Homeworks_Keypad_Emulation_TOKEYPADS$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/

#define __S2_Lutron_Homeworks_Keypad_Emulation_BUTTONFB_DIG_OUTPUT 0
#define __S2_Lutron_Homeworks_Keypad_Emulation_BUTTONFB_ARRAY_LENGTH 24

/*
* ANALOG_OUTPUT
*/

#define __S2_Lutron_Homeworks_Keypad_Emulation_FROMMODULES$_STRING_OUTPUT 0


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_Lutron_Homeworks_Keypad_Emulation_ALLOWBUTTONHELD_INTEGER_PARAMETER 11
#define __S2_Lutron_Homeworks_Keypad_Emulation_ALLOWBUTTONDOUBLETAP_INTEGER_PARAMETER 12
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
#define __S2_Lutron_Homeworks_Keypad_Emulation_KEYPADADDRESS_STRING_PARAMETER 10
#define __S2_Lutron_Homeworks_Keypad_Emulation_KEYPADADDRESS_PARAM_MAX_LEN 14
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Emulation, __KEYPADADDRESS, __S2_Lutron_Homeworks_Keypad_Emulation_KEYPADADDRESS_PARAM_MAX_LEN );


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
#define __S2_Lutron_Homeworks_Keypad_Emulation_SADDRESS$_STRING_MAX_LEN 14
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Emulation, __SADDRESS$, __S2_Lutron_Homeworks_Keypad_Emulation_SADDRESS$_STRING_MAX_LEN );
#define __S2_Lutron_Homeworks_Keypad_Emulation_SKLS$_STRING_MAX_LEN 21
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Emulation, __SKLS$, __S2_Lutron_Homeworks_Keypad_Emulation_SKLS$_STRING_MAX_LEN );

/*
* STRUCTURE
*/
#define __S2_Lutron_Homeworks_Keypad_Emulation_BUTTONS_STRUCT_MAX_LEN 24
CREATE_STRUCTURE_ARRAY( S2_Lutron_Homeworks_Keypad_Emulation, __BUTTONS, LUTRONBUTTON, __S2_Lutron_Homeworks_Keypad_Emulation_BUTTONS_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_Lutron_Homeworks_Keypad_Emulation )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __BUTTON );
   DECLARE_IO_ARRAY( __BUTTONFB );
   unsigned short __IDT;
   unsigned short __FENABLED;
   unsigned short __FFLASH;
   unsigned short __FFLASH1_ON;
   unsigned short __FFLASH1_OFF;
   unsigned short __FFLASH2_ON;
   unsigned short __FFLASH2_OFF;
   unsigned short __FFLASHING;
   unsigned short __IHELD;
   unsigned short __SEMAPHORE;
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Emulation, __SADDRESS$ );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Emulation, __SKLS$ );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Emulation, __TOKEYPADS$ );
   DECLARE_STRUCT_ARRAY( S2_Lutron_Homeworks_Keypad_Emulation, __BUTTONS );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Keypad_Emulation, __KEYPADADDRESS );
};

START_NVRAM_VAR_STRUCT( S2_Lutron_Homeworks_Keypad_Emulation )
{
};

DEFINE_WAITEVENT( S2_Lutron_Homeworks_Keypad_Emulation, __SPLS_TMPVAR__WAITLABEL_0__ );
DEFINE_WAITEVENT( S2_Lutron_Homeworks_Keypad_Emulation, FLASH1_OFF );
DEFINE_WAITEVENT( S2_Lutron_Homeworks_Keypad_Emulation, FLASH1_ON );
DEFINE_WAITEVENT( S2_Lutron_Homeworks_Keypad_Emulation, FLASH2_OFF );
DEFINE_WAITEVENT( S2_Lutron_Homeworks_Keypad_Emulation, FLASH2_ON );
DEFINE_WAITEVENT( S2_Lutron_Homeworks_Keypad_Emulation, WAIT_HELD );
DEFINE_WAITEVENT( S2_Lutron_Homeworks_Keypad_Emulation, WAIT_DT );


#endif //__S2_LUTRON_HOMEWORKS_KEYPAD_EMULATION_H__

