#ifndef __S2_DAIKIN_ITC_IO_V3_1_H__
#define __S2_DAIKIN_ITC_IO_V3_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Daikin_ITC_IO_V3_1_CONNECT_F$_DIG_INPUT 0
#define __S2_Daikin_ITC_IO_V3_1_TRIGGER$_DIG_INPUT 1


/*
* ANALOG_INPUT
*/


#define __S2_Daikin_ITC_IO_V3_1_FROMUNITS$_BUFFER_INPUT 0
#define __S2_Daikin_ITC_IO_V3_1_FROMUNITS$_BUFFER_MAX_LEN 200
CREATE_STRING_STRUCT( S2_Daikin_ITC_IO_V3_1, __FROMUNITS$, __S2_Daikin_ITC_IO_V3_1_FROMUNITS$_BUFFER_MAX_LEN );
#define __S2_Daikin_ITC_IO_V3_1_RX$_BUFFER_INPUT 1
#define __S2_Daikin_ITC_IO_V3_1_RX$_BUFFER_MAX_LEN 5000
CREATE_STRING_STRUCT( S2_Daikin_ITC_IO_V3_1, __RX$, __S2_Daikin_ITC_IO_V3_1_RX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Daikin_ITC_IO_V3_1_CONNECT$_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/

#define __S2_Daikin_ITC_IO_V3_1_TOUNITS$_STRING_OUTPUT 0
#define __S2_Daikin_ITC_IO_V3_1_TX$_STRING_OUTPUT 1


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
#define __S2_Daikin_ITC_IO_V3_1_COMMAND_STRING_MAX_LEN 20
CREATE_STRING_STRUCT( S2_Daikin_ITC_IO_V3_1, __COMMAND, __S2_Daikin_ITC_IO_V3_1_COMMAND_STRING_MAX_LEN );
#define __S2_Daikin_ITC_IO_V3_1_TEMPSTRING_STRING_MAX_LEN 4500
CREATE_STRING_STRUCT( S2_Daikin_ITC_IO_V3_1, __TEMPSTRING, __S2_Daikin_ITC_IO_V3_1_TEMPSTRING_STRING_MAX_LEN );
#define __S2_Daikin_ITC_IO_V3_1_COMMANDTYPE_STRING_MAX_LEN 4
CREATE_STRING_STRUCT( S2_Daikin_ITC_IO_V3_1, __COMMANDTYPE, __S2_Daikin_ITC_IO_V3_1_COMMANDTYPE_STRING_MAX_LEN );
#define __S2_Daikin_ITC_IO_V3_1_COMMANDARRAY_ARRAY_NUM_ELEMS 127
#define __S2_Daikin_ITC_IO_V3_1_COMMANDARRAY_ARRAY_NUM_CHARS 24
CREATE_STRING_ARRAY( S2_Daikin_ITC_IO_V3_1, __COMMANDARRAY, __S2_Daikin_ITC_IO_V3_1_COMMANDARRAY_ARRAY_NUM_ELEMS, __S2_Daikin_ITC_IO_V3_1_COMMANDARRAY_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Daikin_ITC_IO_V3_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Daikin_ITC_IO_V3_1, __FROMUNITS$ );
   DECLARE_STRING_STRUCT( S2_Daikin_ITC_IO_V3_1, __RX$ );
};

START_NVRAM_VAR_STRUCT( S2_Daikin_ITC_IO_V3_1 )
{
   DECLARE_STRING_STRUCT( S2_Daikin_ITC_IO_V3_1, __COMMAND );
   DECLARE_STRING_STRUCT( S2_Daikin_ITC_IO_V3_1, __TEMPSTRING );
   DECLARE_STRING_STRUCT( S2_Daikin_ITC_IO_V3_1, __COMMANDTYPE );
   DECLARE_STRING_ARRAY( S2_Daikin_ITC_IO_V3_1, __COMMANDARRAY );
   unsigned short __FROMUNITSOK;
   unsigned short __TRIGGEROK;
   unsigned short __I;
   unsigned short __COMMANDSPRESENT;
   unsigned short __POLL;
   unsigned short __CONNECTIONTRIES;
   unsigned short __WAITING;
   unsigned short __RXOK;
   unsigned short __MARKER1;
   unsigned short __MARKER2;
   unsigned short __LENGTH;
   unsigned short __L;
};

DEFINE_WAITEVENT( S2_Daikin_ITC_IO_V3_1, WAITTRIGGEROK );
DEFINE_WAITEVENT( S2_Daikin_ITC_IO_V3_1, __SPLS_TMPVAR__WAITLABEL_0__ );


#endif //__S2_DAIKIN_ITC_IO_V3_1_H__
