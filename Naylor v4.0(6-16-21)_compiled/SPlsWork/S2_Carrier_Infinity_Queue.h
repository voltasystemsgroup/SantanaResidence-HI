#ifndef __S2_CARRIER_INFINITY_QUEUE_H__
#define __S2_CARRIER_INFINITY_QUEUE_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Carrier_Infinity_Queue_SEND_NEXT_DIG_INPUT 0


/*
* ANALOG_INPUT
*/


#define __S2_Carrier_Infinity_Queue_FROM_MODULES$_BUFFER_INPUT 0
#define __S2_Carrier_Infinity_Queue_FROM_MODULES$_BUFFER_MAX_LEN 800
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Queue, __FROM_MODULES$, __S2_Carrier_Infinity_Queue_FROM_MODULES$_BUFFER_MAX_LEN );
#define __S2_Carrier_Infinity_Queue_FROM_DEVICE$_BUFFER_INPUT 1
#define __S2_Carrier_Infinity_Queue_FROM_DEVICE$_BUFFER_MAX_LEN 200
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Queue, __FROM_DEVICE$, __S2_Carrier_Infinity_Queue_FROM_DEVICE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_Carrier_Infinity_Queue_TIMED_OUT_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/

#define __S2_Carrier_Infinity_Queue_TO_DEVICE$_STRING_OUTPUT 0

#define __S2_Carrier_Infinity_Queue_TO_SYSTEM$_STRING_OUTPUT 1
#define __S2_Carrier_Infinity_Queue_TO_SYSTEM$_ARRAY_LENGTH 2

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
#define __S2_Carrier_Infinity_Queue_STEMPCOMMAND_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Queue, __STEMPCOMMAND, __S2_Carrier_Infinity_Queue_STEMPCOMMAND_STRING_MAX_LEN );
#define __S2_Carrier_Infinity_Queue_STEMPRESPONSE_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Carrier_Infinity_Queue, __STEMPRESPONSE, __S2_Carrier_Infinity_Queue_STEMPRESPONSE_STRING_MAX_LEN );
#define __S2_Carrier_Infinity_Queue_SQUEUE_ARRAY_NUM_ELEMS 30
#define __S2_Carrier_Infinity_Queue_SQUEUE_ARRAY_NUM_CHARS 50
CREATE_STRING_ARRAY( S2_Carrier_Infinity_Queue, __SQUEUE, __S2_Carrier_Infinity_Queue_SQUEUE_ARRAY_NUM_ELEMS, __S2_Carrier_Infinity_Queue_SQUEUE_ARRAY_NUM_CHARS );
#define __S2_Carrier_Infinity_Queue_SPOLLQUEUE_ARRAY_NUM_ELEMS 140
#define __S2_Carrier_Infinity_Queue_SPOLLQUEUE_ARRAY_NUM_CHARS 50
CREATE_STRING_ARRAY( S2_Carrier_Infinity_Queue, __SPOLLQUEUE, __S2_Carrier_Infinity_Queue_SPOLLQUEUE_ARRAY_NUM_ELEMS, __S2_Carrier_Infinity_Queue_SPOLLQUEUE_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Carrier_Infinity_Queue )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __TO_SYSTEM$ );
   unsigned short __INEXTSEND;
   unsigned short __INEXTSTORE;
   unsigned short __INEXTPOLLSEND;
   unsigned short __INEXTPOLLSTORE;
   unsigned short __IFLAG1;
   unsigned short __IFLAG2;
   unsigned short __ISENDOK;
   unsigned short __ITEMP;
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Queue, __STEMPCOMMAND );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Queue, __STEMPRESPONSE );
   DECLARE_STRING_ARRAY( S2_Carrier_Infinity_Queue, __SQUEUE );
   DECLARE_STRING_ARRAY( S2_Carrier_Infinity_Queue, __SPOLLQUEUE );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Queue, __FROM_MODULES$ );
   DECLARE_STRING_STRUCT( S2_Carrier_Infinity_Queue, __FROM_DEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_Carrier_Infinity_Queue )
{
};

DEFINE_WAITEVENT( S2_Carrier_Infinity_Queue, WTIMEOUT );


#endif //__S2_CARRIER_INFINITY_QUEUE_H__

