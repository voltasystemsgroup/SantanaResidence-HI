#ifndef __S2_GE_INTERLOGIX_NETWORX_VIEW_EVENTS_V4_1_H__
#define __S2_GE_INTERLOGIX_NETWORX_VIEW_EVENTS_V4_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_GE_Interlogix_Networx_View_Events_v4_1_SHOW_EVENTS_DIG_INPUT 0
#define __S2_GE_Interlogix_Networx_View_Events_v4_1_PREVIOUS_PAGE_DIG_INPUT 1
#define __S2_GE_Interlogix_Networx_View_Events_v4_1_NEXT_PAGE_DIG_INPUT 2


/*
* ANALOG_INPUT
*/
#define __S2_GE_Interlogix_Networx_View_Events_v4_1_EVENTS_PER_PAGE_ANALOG_INPUT 0
#define __S2_GE_Interlogix_Networx_View_Events_v4_1_CURRENT_EVENT_POINTER_ANALOG_INPUT 1


#define __S2_GE_Interlogix_Networx_View_Events_v4_1_FROM_PROCESSOR_MODULE$_BUFFER_INPUT 2
#define __S2_GE_Interlogix_Networx_View_Events_v4_1_FROM_PROCESSOR_MODULE$_BUFFER_MAX_LEN 200
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_View_Events_v4_1, __FROM_PROCESSOR_MODULE$, __S2_GE_Interlogix_Networx_View_Events_v4_1_FROM_PROCESSOR_MODULE$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_GE_Interlogix_Networx_View_Events_v4_1_TO_PROCESSOR_MODULE$_STRING_OUTPUT 0

#define __S2_GE_Interlogix_Networx_View_Events_v4_1_EVENT_TEXT$_STRING_OUTPUT 1
#define __S2_GE_Interlogix_Networx_View_Events_v4_1_EVENT_TEXT$_ARRAY_LENGTH 10

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

CREATE_INTARRAY2D( S2_GE_Interlogix_Networx_View_Events_v4_1, __IBYTEUSAGE, 127, 2 );;

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
#define __S2_GE_Interlogix_Networx_View_Events_v4_1_STEMP_STRING_MAX_LEN 200
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_View_Events_v4_1, __STEMP, __S2_GE_Interlogix_Networx_View_Events_v4_1_STEMP_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_View_Events_v4_1_STEMPTEXT_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_GE_Interlogix_Networx_View_Events_v4_1, __STEMPTEXT, __S2_GE_Interlogix_Networx_View_Events_v4_1_STEMPTEXT_STRING_MAX_LEN );
#define __S2_GE_Interlogix_Networx_View_Events_v4_1_SEVENTNAMES_ARRAY_NUM_ELEMS 127
#define __S2_GE_Interlogix_Networx_View_Events_v4_1_SEVENTNAMES_ARRAY_NUM_CHARS 30
CREATE_STRING_ARRAY( S2_GE_Interlogix_Networx_View_Events_v4_1, __SEVENTNAMES, __S2_GE_Interlogix_Networx_View_Events_v4_1_SEVENTNAMES_ARRAY_NUM_ELEMS, __S2_GE_Interlogix_Networx_View_Events_v4_1_SEVENTNAMES_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_GE_Interlogix_Networx_View_Events_v4_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __EVENT_TEXT$ );
   unsigned short __IEVENTSPERPAGE;
   unsigned short __ITEMPEVENTNUM;
   unsigned short __A;
   unsigned short __ICURRENTLASTEVENT;
   unsigned short __ITEMP;
   unsigned short __IFLAG1;
   unsigned short __ICURRENTEVENTPOINTER;
   unsigned short __ITEMPPOINTER;
   unsigned short __ISTARTPOINTER;
   unsigned short __ITEMPEVENTTYPE;
   unsigned short __ITEMPNUMBER;
   unsigned short __ITEMPPARTITION;
   unsigned short __ITEMPMONTH;
   unsigned short __ITEMPDAY;
   unsigned short __ITEMPHOUR;
   unsigned short __ITEMPMINUTE;
   unsigned short __INEXTDISPLAY;
   unsigned short __ITEMPEVENTTYPE1;
   unsigned short __ITEMPREPORT;
   unsigned short __INEXTENABLE;
   unsigned short __IPREVIOUSENABLE;
   unsigned short __ITEMPEND;
   unsigned short __ITEMPSTART;
   DECLARE_INTARRAY( S2_GE_Interlogix_Networx_View_Events_v4_1, __IBYTEUSAGE );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_View_Events_v4_1, __STEMP );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_View_Events_v4_1, __STEMPTEXT );
   DECLARE_STRING_ARRAY( S2_GE_Interlogix_Networx_View_Events_v4_1, __SEVENTNAMES );
   DECLARE_STRING_STRUCT( S2_GE_Interlogix_Networx_View_Events_v4_1, __FROM_PROCESSOR_MODULE$ );
};

START_NVRAM_VAR_STRUCT( S2_GE_Interlogix_Networx_View_Events_v4_1 )
{
};

DEFINE_WAITEVENT( S2_GE_Interlogix_Networx_View_Events_v4_1, WTIMEOUT );


#endif //__S2_GE_INTERLOGIX_NETWORX_VIEW_EVENTS_V4_1_H__

