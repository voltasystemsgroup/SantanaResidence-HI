#ifndef __S2_ADAGIO_NOW_PLAYING_COMBINER__IPOD__V1_2_H__
#define __S2_ADAGIO_NOW_PLAYING_COMBINER__IPOD__V1_2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_DOCKED_DIG_INPUT 0
#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_OFFLINE_DIG_INPUT 1
#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_REFRESH_DIG_INPUT 2


/*
* ANALOG_INPUT
*/

#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_LINE1$_STRING_INPUT 0
#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_LINE1$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Adagio_Now_Playing_Combiner__iPod__v1_2, __LINE1$, __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_LINE1$_STRING_MAX_LEN );
#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_LINE2$_STRING_INPUT 1
#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_LINE2$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Adagio_Now_Playing_Combiner__iPod__v1_2, __LINE2$, __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_LINE2$_STRING_MAX_LEN );
#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_TRANSPORT$_STRING_INPUT 2
#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_TRANSPORT$_STRING_MAX_LEN 1
CREATE_STRING_STRUCT( S2_Adagio_Now_Playing_Combiner__iPod__v1_2, __TRANSPORT$, __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_TRANSPORT$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_NOWPLAYING$_STRING_OUTPUT 0
#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_NOWPLAYINGLINE1$_STRING_OUTPUT 1
#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_NOWPLAYINGLINE2$_STRING_OUTPUT 2
#define __S2_Adagio_Now_Playing_Combiner__iPod__v1_2_NOWPLAYINGTRANSPORT$_STRING_OUTPUT 3


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

START_GLOBAL_VAR_STRUCT( S2_Adagio_Now_Playing_Combiner__iPod__v1_2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Adagio_Now_Playing_Combiner__iPod__v1_2, __LINE1$ );
   DECLARE_STRING_STRUCT( S2_Adagio_Now_Playing_Combiner__iPod__v1_2, __LINE2$ );
   DECLARE_STRING_STRUCT( S2_Adagio_Now_Playing_Combiner__iPod__v1_2, __TRANSPORT$ );
};

START_NVRAM_VAR_STRUCT( S2_Adagio_Now_Playing_Combiner__iPod__v1_2 )
{
};



#endif //__S2_ADAGIO_NOW_PLAYING_COMBINER__IPOD__V1_2_H__

