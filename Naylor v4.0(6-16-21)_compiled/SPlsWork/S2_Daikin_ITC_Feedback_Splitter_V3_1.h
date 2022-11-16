#ifndef __S2_DAIKIN_ITC_FEEDBACK_SPLITTER_V3_1_H__
#define __S2_DAIKIN_ITC_FEEDBACK_SPLITTER_V3_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_Daikin_ITC_Feedback_Splitter_V3_1_TO_UNITS$_STRING_INPUT 0
#define __S2_Daikin_ITC_Feedback_Splitter_V3_1_TO_UNITS$_STRING_MAX_LEN 35
CREATE_STRING_STRUCT( S2_Daikin_ITC_Feedback_Splitter_V3_1, __TO_UNITS$, __S2_Daikin_ITC_Feedback_Splitter_V3_1_TO_UNITS$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_Daikin_ITC_Feedback_Splitter_V3_1_UNITS$_STRING_OUTPUT 0
#define __S2_Daikin_ITC_Feedback_Splitter_V3_1_UNITS$_ARRAY_LENGTH 128

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

START_GLOBAL_VAR_STRUCT( S2_Daikin_ITC_Feedback_Splitter_V3_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __UNITS$ );
   DECLARE_STRING_STRUCT( S2_Daikin_ITC_Feedback_Splitter_V3_1, __TO_UNITS$ );
};

START_NVRAM_VAR_STRUCT( S2_Daikin_ITC_Feedback_Splitter_V3_1 )
{
};



#endif //__S2_DAIKIN_ITC_FEEDBACK_SPLITTER_V3_1_H__

