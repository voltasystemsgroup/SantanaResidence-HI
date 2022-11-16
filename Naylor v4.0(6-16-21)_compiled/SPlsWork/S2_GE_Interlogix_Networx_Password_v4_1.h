#ifndef __S2_GE_INTERLOGIX_NETWORX_PASSWORD_V4_1_H__
#define __S2_GE_INTERLOGIX_NETWORX_PASSWORD_V4_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_GE_Interlogix_Networx_Password_v4_1_CLEAR_DIG_INPUT 0
#define __S2_GE_Interlogix_Networx_Password_v4_1_BACKSPACE_DIG_INPUT 1

#define __S2_GE_Interlogix_Networx_Password_v4_1_KEY_DIG_INPUT 2
#define __S2_GE_Interlogix_Networx_Password_v4_1_KEY_ARRAY_LENGTH 10

/*
* ANALOG_INPUT
*/
#define __S2_GE_Interlogix_Networx_Password_v4_1_PARTITION_NUMBER_ANALOG_INPUT 0


#define __S2_GE_Interlogix_Networx_Password_v4_1_COMMAND$_BUFFER_INPUT 1
#define __S2_GE_Interlogix_Networx_Password_v4_1_COMMAND$_BUFFER_MAX_LEN 10
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __COMMAND$, __S2_GE_Interlogix_Networx_Password_v4_1_COMMAND$_BUFFER_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Password_v4_1_FROM_PROCESSOR$_BUFFER_INPUT 2
#define __S2_GE_Interlogix_Networx_Password_v4_1_FROM_PROCESSOR$_BUFFER_MAX_LEN 250
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __FROM_PROCESSOR$, __S2_GE_Interlogix_Networx_Password_v4_1_FROM_PROCESSOR$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_GE_Interlogix_Networx_Password_v4_1_PASSWORD_REPLACED$_STRING_OUTPUT 0
#define __S2_GE_Interlogix_Networx_Password_v4_1_TO_PROCESSOR_MODULE$_STRING_OUTPUT 1

#define __S2_GE_Interlogix_Networx_Password_v4_1_PARTITION_CONDITION_FLAG_ANALOG_OUTPUT 2
#define __S2_GE_Interlogix_Networx_Password_v4_1_PARTITION_CONDITION_FLAG_ARRAY_LENGTH 7

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
CREATE_INTARRAY1D( S2_GE_Interlogix_Networx_Password_v4_1, __ICONDITIONFLAG, 7 );;


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
#define __S2_GE_Interlogix_Networx_Password_v4_1_SPIN_STRING_MAX_LEN 6
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __SPIN, __S2_GE_Interlogix_Networx_Password_v4_1_SPIN_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Password_v4_1_SREPLACED_STRING_MAX_LEN 6
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __SREPLACED, __S2_GE_Interlogix_Networx_Password_v4_1_SREPLACED_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Password_v4_1_STEMP_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __STEMP, __S2_GE_Interlogix_Networx_Password_v4_1_STEMP_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Password_v4_1_SPASS_STRING_MAX_LEN 3
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __SPASS, __S2_GE_Interlogix_Networx_Password_v4_1_SPASS_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Password_v4_1_SINTEMP_STRING_MAX_LEN 40
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __SINTEMP, __S2_GE_Interlogix_Networx_Password_v4_1_SINTEMP_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __KEY );
   DECLARE_IO_ARRAY( __PARTITION_CONDITION_FLAG );
   unsigned short __ICOUNT;
   unsigned short __IKEY;
   unsigned short __A;
   unsigned short __ITEMP;
   unsigned short __ITEMPPASSCHR;
   unsigned short __ITEMPPASSCHR1;
   unsigned short __ITEMP1;
   unsigned short __ITEMP2;
   unsigned short __ITEMPPASSCHR2;
   unsigned short __ITEMPPASSCHR3;
   unsigned short __IPART;
   unsigned short __IFLAG1;
   unsigned short __B;
   DECLARE_INTARRAY( S2_GE_Interlogix_Networx_Password_v4_1, __ICONDITIONFLAG );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __SPIN );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __SREPLACED );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __STEMP );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __SPASS );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __SINTEMP );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __COMMAND$ );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1, __FROM_PROCESSOR$ );
};

START_NVRAM_VAR_STRUCT( S2_GE_Interlogix_Networx_Password_v4_1 )
{
};



#endif //__S2_GE_INTERLOGIX_NETWORX_PASSWORD_V4_1_H__

