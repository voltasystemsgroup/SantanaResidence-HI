#ifndef __S2_GE_INTERLOGIX_NETWORX_PROCESSOR_V4_1_MOD_H__
#define __S2_GE_INTERLOGIX_NETWORX_PROCESSOR_V4_1_MOD_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_POLL_DIG_INPUT 0
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_SEND_DIG_INPUT 1
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_RESEND_DIG_INPUT 2
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_DATALOST_DIG_INPUT 3


/*
* ANALOG_INPUT
*/
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_NUMBER_OF_ZONES_ANALOG_INPUT 0

#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_FROM_MODULES$_STRING_INPUT 1
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_FROM_MODULES$_STRING_MAX_LEN 25
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __FROM_MODULES$, __S2_GE_Interlogix_Networx_Processor_v4_1_mod_FROM_MODULES$_STRING_MAX_LEN );

#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_FROM_DEVICE$_BUFFER_INPUT 2
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_FROM_DEVICE$_BUFFER_MAX_LEN 150
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __FROM_DEVICE$, __S2_GE_Interlogix_Networx_Processor_v4_1_mod_FROM_DEVICE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_TIME_OUT_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/

#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_TO_MODULES$_STRING_OUTPUT 0
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_TO_DEVICE$_STRING_OUTPUT 1

#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_ZONE_STATUS_ANALOG_OUTPUT 2
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_ZONE_STATUS_ARRAY_LENGTH 192

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
CREATE_INTARRAY1D( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __IZONES, 192 );;


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
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_TEMP1$_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __TEMP1$, __S2_GE_Interlogix_Networx_Processor_v4_1_mod_TEMP1$_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_TEMP$_STRING_MAX_LEN 52
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __TEMP$, __S2_GE_Interlogix_Networx_Processor_v4_1_mod_TEMP$_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_STEMP_STRING_MAX_LEN 32
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __STEMP, __S2_GE_Interlogix_Networx_Processor_v4_1_mod_STEMP_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_PACKET$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __PACKET$, __S2_GE_Interlogix_Networx_Processor_v4_1_mod_PACKET$_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_UNENC$_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __UNENC$, __S2_GE_Interlogix_Networx_Processor_v4_1_mod_UNENC$_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_SQUEUE_ARRAY_NUM_ELEMS 30
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_SQUEUE_ARRAY_NUM_CHARS 100
CREATE_STRING_ARRAY( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __SQUEUE, __S2_GE_Interlogix_Networx_Processor_v4_1_mod_SQUEUE_ARRAY_NUM_ELEMS, __S2_GE_Interlogix_Networx_Processor_v4_1_mod_SQUEUE_ARRAY_NUM_CHARS );
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_SPOLL_ARRAY_NUM_ELEMS 21
#define __S2_GE_Interlogix_Networx_Processor_v4_1_mod_SPOLL_ARRAY_NUM_CHARS 50
CREATE_STRING_ARRAY( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __SPOLL, __S2_GE_Interlogix_Networx_Processor_v4_1_mod_SPOLL_ARRAY_NUM_ELEMS, __S2_GE_Interlogix_Networx_Processor_v4_1_mod_SPOLL_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __ZONE_STATUS );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __FROM_MODULES$ );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __FROM_DEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod )
{
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __TEMP1$ );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __TEMP$ );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __STEMP );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __PACKET$ );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __UNENC$ );
   DECLARE_STRING_ARRAY( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __SQUEUE );
   DECLARE_STRING_ARRAY( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __SPOLL );
   unsigned short __I;
   unsigned short __SUM1;
   unsigned short __SUM2;
   unsigned short __CHAR;
   unsigned short __IOFFSET;
   unsigned short __ITEMP;
   unsigned short __A;
   unsigned short __ISENT;
   unsigned short __INEXTSTORE;
   unsigned short __INEXTSEND;
   unsigned short __INEXTPOLL;
   unsigned short __IMAXPOLL;
   unsigned short __IFLAG1;
   unsigned short __ISENDCOUNT;
   unsigned short __B;
   unsigned short __IPARTPOLLMAX;
   unsigned short __IFLAG2;
   DECLARE_INTARRAY( S2_GE_Interlogix_Networx_Processor_v4_1_mod, __IZONES );
};

DEFINE_WAITEVENT( S2_GE_Interlogix_Networx_Processor_v4_1_mod, WTIMEOUT );


#endif //__S2_GE_INTERLOGIX_NETWORX_PROCESSOR_V4_1_MOD_H__

