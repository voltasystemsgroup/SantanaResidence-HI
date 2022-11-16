#ifndef __S2_DAIKIN_F_C_TEMP_CONVERSION_V2_H__
#define __S2_DAIKIN_F_C_TEMP_CONVERSION_V2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/
#define __S2_Daikin_F_C_Temp_Conversion_v2_SETPOINTF_IN_ANALOG_INPUT 0
#define __S2_Daikin_F_C_Temp_Conversion_v2_SETPOINTC_IN_ANALOG_INPUT 1
#define __S2_Daikin_F_C_Temp_Conversion_v2_ROOMTEMPC_IN_ANALOG_INPUT 2




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Daikin_F_C_Temp_Conversion_v2_SETPOINTF_OUT_ANALOG_OUTPUT 0
#define __S2_Daikin_F_C_Temp_Conversion_v2_SETPOINTC_OUT_ANALOG_OUTPUT 1
#define __S2_Daikin_F_C_Temp_Conversion_v2_ROOMTEMPF_OUT_ANALOG_OUTPUT 2



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

START_GLOBAL_VAR_STRUCT( S2_Daikin_F_C_Temp_Conversion_v2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

};

START_NVRAM_VAR_STRUCT( S2_Daikin_F_C_Temp_Conversion_v2 )
{
};



#endif //__S2_DAIKIN_F_C_TEMP_CONVERSION_V2_H__

