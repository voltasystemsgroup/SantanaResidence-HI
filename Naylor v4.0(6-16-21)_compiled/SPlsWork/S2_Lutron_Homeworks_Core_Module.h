#ifndef __S2_LUTRON_HOMEWORKS_CORE_MODULE_H__
#define __S2_LUTRON_HOMEWORKS_CORE_MODULE_H__


#include "S2_LutronHWI_Lib.h"

/*
* STRUCTURE S2_Lutron_Homeworks_Core_Module__STINTERFACE
*/
#define STINTERFACE__S2_Lutron_Homeworks_Core_Module_ADDRESS$_STRING_MAX_LEN 14
#define STINTERFACE__S2_Lutron_Homeworks_Core_Module_INSTANCE$_STRING_MAX_LEN 60
START_STRUCTURE_DEFINITION( S2_Lutron_Homeworks_Core_Module, STINTERFACE )
{
   CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, STINTERFACE__ADDRESS$, STINTERFACE__S2_Lutron_Homeworks_Core_Module_ADDRESS$_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, STINTERFACE__ADDRESS$ );
   CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, STINTERFACE__INSTANCE$, STINTERFACE__S2_Lutron_Homeworks_Core_Module_INSTANCE$_STRING_MAX_LEN );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, STINTERFACE__INSTANCE$ );
   unsigned short STINTERFACE__TYPE;
};


/*
* Constructor and Destructor
*/
int S2_Lutron_Homeworks_Core_Module_STINTERFACE_Constructor ( START_STRUCTURE_DEFINITION( S2_Lutron_Homeworks_Core_Module, STINTERFACE ) * me, int nVerbose );
int S2_Lutron_Homeworks_Core_Module_STINTERFACE_Destructor ( START_STRUCTURE_DEFINITION( S2_Lutron_Homeworks_Core_Module, STINTERFACE ) * me, int nVerbose );

/*
* DIGITAL_INPUT
*/
#define __S2_Lutron_Homeworks_Core_Module_ENABLE_DIG_INPUT 0


/*
* ANALOG_INPUT
*/

#define __S2_Lutron_Homeworks_Core_Module_USERCOMMAND$_STRING_INPUT 1
#define __S2_Lutron_Homeworks_Core_Module_USERCOMMAND$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __USERCOMMAND$, __S2_Lutron_Homeworks_Core_Module_USERCOMMAND$_STRING_MAX_LEN );

#define __S2_Lutron_Homeworks_Core_Module_FROMMODULES$_BUFFER_INPUT 0
#define __S2_Lutron_Homeworks_Core_Module_FROMMODULES$_BUFFER_MAX_LEN 2048
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __FROMMODULES$, __S2_Lutron_Homeworks_Core_Module_FROMMODULES$_BUFFER_MAX_LEN );
#define __S2_Lutron_Homeworks_Core_Module_RS232_RX$_BUFFER_INPUT 2
#define __S2_Lutron_Homeworks_Core_Module_RS232_RX$_BUFFER_MAX_LEN 8192
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __RS232_RX$, __S2_Lutron_Homeworks_Core_Module_RS232_RX$_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_Lutron_Homeworks_Core_Module_TODIMMERS$_STRING_OUTPUT 0
#define __S2_Lutron_Homeworks_Core_Module_TOGRAFIKEYE$_STRING_OUTPUT 1
#define __S2_Lutron_Homeworks_Core_Module_TOKEYPADS$_STRING_OUTPUT 2
#define __S2_Lutron_Homeworks_Core_Module_TOLOADCONTROL$_STRING_OUTPUT 3
#define __S2_Lutron_Homeworks_Core_Module_TOUTILITIES$_STRING_OUTPUT 4
#define __S2_Lutron_Homeworks_Core_Module_PACKETTRANSMISSION$_STRING_OUTPUT 5
#define __S2_Lutron_Homeworks_Core_Module_RS232_TX$_STRING_OUTPUT 6


/*
* Direct Socket Variables
*/

#define __S2_Lutron_Homeworks_Core_Module_TCPCLIENT_SOCKET 7
#define __S2_Lutron_Homeworks_Core_Module_TCPCLIENT_STRING_MAX_LEN 1024
START_SOCKET_DEFINITION( S2_Lutron_Homeworks_Core_Module, __TCPCLIENT )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_Lutron_Homeworks_Core_Module, SocketRxBuf, __S2_Lutron_Homeworks_Core_Module_TCPCLIENT_STRING_MAX_LEN );
};



/*
* INTEGER_PARAMETER
*/
#define __S2_Lutron_Homeworks_Core_Module_COMMUNICATION_METHOD_INTEGER_PARAMETER 10
#define __S2_Lutron_Homeworks_Core_Module_TELNET_PORT_INTEGER_PARAMETER 12
#define __S2_Lutron_Homeworks_Core_Module_BAUDRATE_INTEGER_PARAMETER 15
#define __S2_Lutron_Homeworks_Core_Module_HANDSHAKE_INTEGER_PARAMETER 16
#define __S2_Lutron_Homeworks_Core_Module_COMPORT_INTEGER_PARAMETER 17
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
#define __S2_Lutron_Homeworks_Core_Module_IPADDRESS_OR_HOSTNAME_STRING_PARAMETER 11
#define __S2_Lutron_Homeworks_Core_Module_USERNAME_STRING_PARAMETER 13
#define __S2_Lutron_Homeworks_Core_Module_PASSWORD_STRING_PARAMETER 14
#define __S2_Lutron_Homeworks_Core_Module_IPADDRESS_OR_HOSTNAME_PARAM_MAX_LEN 50
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __IPADDRESS_OR_HOSTNAME, __S2_Lutron_Homeworks_Core_Module_IPADDRESS_OR_HOSTNAME_PARAM_MAX_LEN );
#define __S2_Lutron_Homeworks_Core_Module_USERNAME_PARAM_MAX_LEN 32
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __USERNAME, __S2_Lutron_Homeworks_Core_Module_USERNAME_PARAM_MAX_LEN );
#define __S2_Lutron_Homeworks_Core_Module_PASSWORD_PARAM_MAX_LEN 32
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __PASSWORD, __S2_Lutron_Homeworks_Core_Module_PASSWORD_PARAM_MAX_LEN );


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
#define __S2_Lutron_Homeworks_Core_Module_SLASTCMD$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __SLASTCMD$, __S2_Lutron_Homeworks_Core_Module_SLASTCMD$_STRING_MAX_LEN );
#define __S2_Lutron_Homeworks_Core_Module_LOG_ARRAY_NUM_ELEMS 100
#define __S2_Lutron_Homeworks_Core_Module_LOG_ARRAY_NUM_CHARS 255
CREATE_STRING_ARRAY( S2_Lutron_Homeworks_Core_Module, __LOG, __S2_Lutron_Homeworks_Core_Module_LOG_ARRAY_NUM_ELEMS, __S2_Lutron_Homeworks_Core_Module_LOG_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/
#define __S2_Lutron_Homeworks_Core_Module_INTERFACES_STRUCT_MAX_LEN 1
CREATE_STRUCTURE_DYNAMIC_ARRAY( S2_Lutron_Homeworks_Core_Module, __INTERFACES, STINTERFACE, __S2_Lutron_Homeworks_Core_Module_INTERFACES_STRUCT_MAX_LEN );

START_GLOBAL_VAR_STRUCT( S2_Lutron_Homeworks_Core_Module )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __DEBUG;
   unsigned short __FAILURECOUNT;
   unsigned short __FENABLE;
   unsigned short __FINITIALIZED;
   unsigned short __ITCPSTATUS;
   unsigned short __LOGCURRENT;
   unsigned short __REGISTEREDINTERFACES;
   unsigned short __LOGGEDIN;
   unsigned short __CONNECTFAILURE;
   unsigned short __COMM_BAUD;
   unsigned short __COMM_HANDSHAKE;
   unsigned short __COMM_PORT;
   unsigned short __COMM_METHOD;
   unsigned short __MAXREGISTEREDINTERFACES;
   unsigned short __MON_KB;
   unsigned short __MON_KL;
   unsigned short __MON_DL;
   unsigned short __MON_GS;
   unsigned short __SEMIP;
   unsigned short __SEMMOD;
   unsigned short __SEMRS232;
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __SLASTCMD$ );
   DECLARE_STRING_ARRAY( S2_Lutron_Homeworks_Core_Module, __LOG );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __USERCOMMAND$ );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __FROMMODULES$ );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __RS232_RX$ );
   DECLARE_SOCKET( S2_Lutron_Homeworks_Core_Module, __TCPCLIENT );
   DECLARE_STRUCT_DYNAMIC_ARRAY( S2_Lutron_Homeworks_Core_Module, __INTERFACES );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __IPADDRESS_OR_HOSTNAME );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __USERNAME );
   DECLARE_STRING_STRUCT( S2_Lutron_Homeworks_Core_Module, __PASSWORD );
};

START_NVRAM_VAR_STRUCT( S2_Lutron_Homeworks_Core_Module )
{
};

DEFINE_WAITEVENT( S2_Lutron_Homeworks_Core_Module, WAIT_TCPCONNECTED );
DEFINE_WAITEVENT( S2_Lutron_Homeworks_Core_Module, WAIT_TCPRECONNECT );
DEFINE_WAITEVENT( S2_Lutron_Homeworks_Core_Module, WAIT_LOGIN );


#endif //__S2_LUTRON_HOMEWORKS_CORE_MODULE_H__

