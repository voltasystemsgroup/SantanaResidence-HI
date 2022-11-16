#ifndef __S2_GE_INTERLOGIX_NETWORX_ZONE_NAME_V4_1_H__
#define __S2_GE_INTERLOGIX_NETWORX_ZONE_NAME_V4_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/
#define __S2_GE_Interlogix_Networx_Zone_Name_v4_1_ZONE_NUMBER_DECIMAL_ANALOG_INPUT 0


#define __S2_GE_Interlogix_Networx_Zone_Name_v4_1_FROM_PROCESSOR$_BUFFER_INPUT 1
#define __S2_GE_Interlogix_Networx_Zone_Name_v4_1_FROM_PROCESSOR$_BUFFER_MAX_LEN 250
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Zone_Name_v4_1, __FROM_PROCESSOR$, __S2_GE_Interlogix_Networx_Zone_Name_v4_1_FROM_PROCESSOR$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_GE_Interlogix_Networx_Zone_Name_v4_1_ZONE_NAME$_STRING_OUTPUT 0


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
#define __S2_GE_Interlogix_Networx_Zone_Name_v4_1_STEMP_STRING_MAX_LEN 25
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Zone_Name_v4_1, __STEMP, __S2_GE_Interlogix_Networx_Zone_Name_v4_1_STEMP_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Zone_Name_v4_1_SNAMENEW_STRING_MAX_LEN 16
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Zone_Name_v4_1, __SNAMENEW, __S2_GE_Interlogix_Networx_Zone_Name_v4_1_SNAMENEW_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_Zone_Name_v4_1_SNAME_STRING_MAX_LEN 16
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_Zone_Name_v4_1, __SNAME, __S2_GE_Interlogix_Networx_Zone_Name_v4_1_SNAME_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_GE_Interlogix_Networx_Zone_Name_v4_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __IZONE;
   unsigned short __IFLAG1;
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Zone_Name_v4_1, __STEMP );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Zone_Name_v4_1, __SNAMENEW );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Zone_Name_v4_1, __SNAME );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_Zone_Name_v4_1, __FROM_PROCESSOR$ );
};

START_NVRAM_VAR_STRUCT( S2_GE_Interlogix_Networx_Zone_Name_v4_1 )
{
};



#endif //__S2_GE_INTERLOGIX_NETWORX_ZONE_NAME_V4_1_H__

