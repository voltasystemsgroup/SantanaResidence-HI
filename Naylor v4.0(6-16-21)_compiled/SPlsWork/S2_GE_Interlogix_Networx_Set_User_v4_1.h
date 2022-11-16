#ifndef __S2_GE_INTERLOGIX_NETWORX_SET_USER_V4_1_H__
#define __S2_GE_INTERLOGIX_NETWORX_SET_USER_V4_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_MASTER_CLEAR_DIG_INPUT 0
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_MASTER_BACKSPACE_DIG_INPUT 1
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_USER_CLEAR_DIG_INPUT 2
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_USER_BACKSPACE_DIG_INPUT 3
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_NUM_CLEAR_DIG_INPUT 4
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_NUM_BACKSPACE_DIG_INPUT 5

#define __S2_GE_Interlogix_Networx_Set_User_v4_1_KEY_DIG_INPUT 6
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_KEY_ARRAY_LENGTH 30

/*
* ANALOG_INPUT
*/
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_PIN_DIGITS_ANALOG_INPUT 0
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_AUTHORITY_BYTE_6_ANALOG_INPUT 1
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_AUTHORITY_BYTE_7_ANALOG_INPUT 2


#define __S2_GE_Interlogix_Networx_Set_User_v4_1_COMMAND$_BUFFER_INPUT 3
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_COMMAND$_BUFFER_MAX_LEN 10
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __COMMAND$, __S2_GE_Interlogix_Networx_Set_User_v4_1_COMMAND$_BUFFER_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_FROM_PROCESSOR$_BUFFER_INPUT 4
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_FROM_PROCESSOR$_BUFFER_MAX_LEN 200
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __FROM_PROCESSOR$, __S2_GE_Interlogix_Networx_Set_User_v4_1_FROM_PROCESSOR$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_TIMED_OUT_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_AUTHORITY_BYTE_6_IN_ANALOG_OUTPUT 0
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_AUTHORITY_BYTE_7_IN_ANALOG_OUTPUT 1

#define __S2_GE_Interlogix_Networx_Set_User_v4_1_MASTER_PASSWORD_REPLACED$_STRING_OUTPUT 2
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_USER_NUMBER$_STRING_OUTPUT 3
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_USER_PASSWORD$_STRING_OUTPUT 4
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_TO_PROCESSOR_MODULE$_STRING_OUTPUT 5


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
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_SMASTERPIN_STRING_MAX_LEN 6
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __SMASTERPIN, __S2_GE_Interlogix_Networx_Set_User_v4_1_SMASTERPIN_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_SMASTERREPLACED_STRING_MAX_LEN 6
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __SMASTERREPLACED, __S2_GE_Interlogix_Networx_Set_User_v4_1_SMASTERREPLACED_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_SUSERPIN_STRING_MAX_LEN 6
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __SUSERPIN, __S2_GE_Interlogix_Networx_Set_User_v4_1_SUSERPIN_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_SUSERNUM_STRING_MAX_LEN 3
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __SUSERNUM, __S2_GE_Interlogix_Networx_Set_User_v4_1_SUSERNUM_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_STEMPMASTER_STRING_MAX_LEN 6
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __STEMPMASTER, __S2_GE_Interlogix_Networx_Set_User_v4_1_STEMPMASTER_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_STEMP_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __STEMP, __S2_GE_Interlogix_Networx_Set_User_v4_1_STEMP_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_SMASTERPASS_STRING_MAX_LEN 3
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __SMASTERPASS, __S2_GE_Interlogix_Networx_Set_User_v4_1_SMASTERPASS_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_SUSERPASS_STRING_MAX_LEN 3
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __SUSERPASS, __S2_GE_Interlogix_Networx_Set_User_v4_1_SUSERPASS_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_STEMP2_STRING_MAX_LEN 30
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __STEMP2, __S2_GE_Interlogix_Networx_Set_User_v4_1_STEMP2_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Set_User_v4_1_STEMPUSER_STRING_MAX_LEN 6
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __STEMPUSER, __S2_GE_Interlogix_Networx_Set_User_v4_1_STEMPUSER_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __KEY );
   unsigned short __ICOUNT;
   unsigned short __IKEY;
   unsigned short __A;
   unsigned short __ITEMP;
   unsigned short __IFLAG2;
   unsigned short __IMASTERTEMPPASSCHR;
   unsigned short __IMASTERTEMPPASSCHR1;
   unsigned short __IMASTERTEMP1;
   unsigned short __IMASTERTEMP2;
   unsigned short __IMASTERTEMPPASSCHR2;
   unsigned short __IMASTERTEMPPASSCHR3;
   unsigned short __IUSERTEMPPASSCHR;
   unsigned short __IUSERTEMPPASSCHR1;
   unsigned short __IUSERTEMP1;
   unsigned short __IUSERTEMP2;
   unsigned short __IUSERTEMPPASSCHR2;
   unsigned short __IUSERTEMPPASSCHR3;
   unsigned short __IUSERNUM;
   unsigned short __IBYTE6;
   unsigned short __IBYTE7;
   unsigned short __ITEMPPASSCODEBYTE1IN;
   unsigned short __ITEMPPASSCODEBYTE2IN;
   unsigned short __ITEMPPASSCODEBYTE3IN;
   unsigned short __ITEMPBYTE6IN;
   unsigned short __ITEMPBYTE7IN;
   unsigned short __ITEMPDIGIT1;
   unsigned short __ITEMPDIGIT2;
   unsigned short __ITEMPDIGIT3;
   unsigned short __ITEMPDIGIT4;
   unsigned short __ITEMPDIGIT5;
   unsigned short __ITEMPDIGIT6;
   unsigned short __IPINDIGITS;
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __SMASTERPIN );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __SMASTERREPLACED );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __SUSERPIN );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __SUSERNUM );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __STEMPMASTER );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __STEMP );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __SMASTERPASS );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __SUSERPASS );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __STEMP2 );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __STEMPUSER );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __COMMAND$ );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1, __FROM_PROCESSOR$ );
};

START_NVRAM_VAR_STRUCT( S2_GE_Interlogix_Networx_Set_User_v4_1 )
{
};

DEFINE_WAITEVENT( S2_GE_Interlogix_Networx_Set_User_v4_1, WTIMEOUT );


#endif //__S2_GE_INTERLOGIX_NETWORX_SET_USER_V4_1_H__

