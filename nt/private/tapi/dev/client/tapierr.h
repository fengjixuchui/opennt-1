 tapierr.mc - messages file for tapi

  NOTE:  Whenever new error constants are added to TAPI
         new messages must be added here

  CONVERSIONS:

        TAPIERR : Negative numbers
            Map to : strip off high WORD
            Example: 0xFFFFFFFF (-1) becomes 0x0000FFFF
        LINEERR : Start at 0x80000000
            Map to : strip off 0x80000000 and add 0xE000
            Example: 0x80000004 becomes 0x0000E004
        PHONEERR: Start at 0x90000000
            Map to : strip off 0x90000000 and add 0xF000
            Example: 0x9000000A becomes 0x0000F00A
//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: LINEERR_SUCCESS
//
// MessageText:
//
//  The operation completed successfully.
//
#define LINEERR_SUCCESS                  57344L

//
// MessageId: LINEERR_ALLOCATED
//
// MessageText:
//
//  The line device is already in use
//
#define LINEERR_ALLOCATED                57345L

//
// MessageId: LINEERR_BADDEVICEID
//
// MessageText:
//
//  Invalid line device ID
//
#define LINEERR_BADDEVICEID              57346L

//
// MessageId: LINEERR_BEARERMODEUNAVAIL
//
// MessageText:
//
//  The requested bearer mode is unavailable
//
#define LINEERR_BEARERMODEUNAVAIL        57347L

//
// MessageId: LINEERR_CALLUNAVAIL
//
// MessageText:
//
//  No call appearance available
//
#define LINEERR_CALLUNAVAIL              57349L

//
// MessageId: LINEERR_COMPLETIONOVERRUN
//
// MessageText:
//
//  Too many call completions outstanding
//
#define LINEERR_COMPLETIONOVERRUN        57350L

//
// MessageId: LINEERR_CONFERENCEFULL
//
// MessageText:
//
//  The conference is full
//
#define LINEERR_CONFERENCEFULL           57351L

//
// MessageId: LINEERR_DIALBILLING
//
// MessageText:
//
//  The '$' dial modifier is not supported
//
#define LINEERR_DIALBILLING              57352L

//
// MessageId: LINEERR_DIALDIALTONE
//
// MessageText:
//
//  The 'W' dial modifier is not supported
//
#define LINEERR_DIALDIALTONE             57353L

//
// MessageId: LINEERR_DIALPROMPT
//
// MessageText:
//
//  The '?' dial modifier is not supported
//
#define LINEERR_DIALPROMPT               57354L

//
// MessageId: LINEERR_DIALQUIET
//
// MessageText:
//
//  The '@' dial modifier is not supported
//
#define LINEERR_DIALQUIET                57355L

//
// MessageId: LINEERR_INCOMPATIBLEAPIVERSION
//
// MessageText:
//
//  Incompatible API version
//
#define LINEERR_INCOMPATIBLEAPIVERSION   57356L

//
// MessageId: LINEERR_INCOMPATIBLEEXTVERSION
//
// MessageText:
//
//  Incompatible extension version
//
#define LINEERR_INCOMPATIBLEEXTVERSION   57357L

//
// MessageId: LINEERR_INIFILECORRUPT
//
// MessageText:
//
//  The TAPI configuration information is unusable
//
#define LINEERR_INIFILECORRUPT           57358L

//
// MessageId: LINEERR_INUSE
//
// MessageText:
//
//  The line device is already in use
//
#define LINEERR_INUSE                    57359L

//
// MessageId: LINEERR_INVALADDRESS
//
// MessageText:
//
//  The phone number is invalid or not properly formatted
//
#define LINEERR_INVALADDRESS             57360L

//
// MessageId: LINEERR_INVALADDRESSID
//
// MessageText:
//
//  Invalid address ID
//
#define LINEERR_INVALADDRESSID           57361L

//
// MessageId: LINEERR_INVALADDRESSMODE
//
// MessageText:
//
//  Invalid address mode
//
#define LINEERR_INVALADDRESSMODE         57362L

//
// MessageId: LINEERR_INVALADDRESSSTATE
//
// MessageText:
//
//  Operation not permitted in current address state
//
#define LINEERR_INVALADDRESSSTATE        57363L

//
// MessageId: LINEERR_INVALAPPHANDLE
//
// MessageText:
//
//  Invalid TAPI line application handle
//
#define LINEERR_INVALAPPHANDLE           57364L

//
// MessageId: LINEERR_INVALAPPNAME
//
// MessageText:
//
//  Invalid application name
//
#define LINEERR_INVALAPPNAME             57365L

//
// MessageId: LINEERR_INVALBEARERMODE
//
// MessageText:
//
//  Invalid bearer mode
//
#define LINEERR_INVALBEARERMODE          57366L

//
// MessageId: LINEERR_INVALCALLCOMPLMODE
//
// MessageText:
//
//  Invalid call completion mode
//
#define LINEERR_INVALCALLCOMPLMODE       57367L

//
// MessageId: LINEERR_INVALCALLHANDLE
//
// MessageText:
//
//  Invalid call handle
//
#define LINEERR_INVALCALLHANDLE          57368L

//
// MessageId: LINEERR_INVALCALLPARAMS
//
// MessageText:
//
//  Invalid LINECALLPARAMS structure
//
#define LINEERR_INVALCALLPARAMS          57369L

//
// MessageId: LINEERR_INVALCALLPRIVILEGE
//
// MessageText:
//
//  Invalid call privilege
//
#define LINEERR_INVALCALLPRIVILEGE       57370L

//
// MessageId: LINEERR_INVALCALLSELECT
//
// MessageText:
//
//  Invalid call select parameter
//
#define LINEERR_INVALCALLSELECT          57371L

//
// MessageId: LINEERR_INVALCALLSTATE
//
// MessageText:
//
//  Operation not permitted in current call state
//
#define LINEERR_INVALCALLSTATE           57372L

//
// MessageId: LINEERR_INVALCALLSTATELIST
//
// MessageText:
//
//  Invalid call state list
//
#define LINEERR_INVALCALLSTATELIST       57373L

//
// MessageId: LINEERR_INVALCARD
//
// MessageText:
//
//  Invalid calling card ID
//
#define LINEERR_INVALCARD                57374L

//
// MessageId: LINEERR_INVALCOMPLETIONID
//
// MessageText:
//
//  Invalid call completion ID
//
#define LINEERR_INVALCOMPLETIONID        57375L

//
// MessageId: LINEERR_INVALCONFCALLHANDLE
//
// MessageText:
//
//  Invalid conference call handle
//
#define LINEERR_INVALCONFCALLHANDLE      57376L

//
// MessageId: LINEERR_INVALCONSULTCALLHANDLE
//
// MessageText:
//
//  Invalid consultation call handle
//
#define LINEERR_INVALCONSULTCALLHANDLE   57377L

//
// MessageId: LINEERR_INVALCOUNTRYCODE
//
// MessageText:
//
//  Invalid country code
//
#define LINEERR_INVALCOUNTRYCODE         57378L

//
// MessageId: LINEERR_INVALDEVICECLASS
//
// MessageText:
//
//  Invalid device class identifier
//
#define LINEERR_INVALDEVICECLASS         57379L

//
// MessageId: LINEERR_INVALDEVICEHANDLE
//
// MessageText:
//
//  Invalid device handle
//
#define LINEERR_INVALDEVICEHANDLE        57380L

//
// MessageId: LINEERR_INVALDIALPARAMS
//
// MessageText:
//
//  Invalid dialing parameters
//
#define LINEERR_INVALDIALPARAMS          57381L

//
// MessageId: LINEERR_INVALDIGITLIST
//
// MessageText:
//
//  Invalid digit list
//
#define LINEERR_INVALDIGITLIST           57382L

//
// MessageId: LINEERR_INVALDIGITMODE
//
// MessageText:
//
//  Invalid digit mode
//
#define LINEERR_INVALDIGITMODE           57383L

//
// MessageId: LINEERR_INVALDIGITS
//
// MessageText:
//
//  Invalid digits
//
#define LINEERR_INVALDIGITS              57384L

//
// MessageId: LINEERR_INVALEXTVERSION
//
// MessageText:
//
//  Invalid extension version
//
#define LINEERR_INVALEXTVERSION          57385L

//
// MessageId: LINEERR_INVALGROUPID
//
// MessageText:
//
//  Invalid group pickup ID
//
#define LINEERR_INVALGROUPID             57386L

//
// MessageId: LINEERR_INVALLINEHANDLE
//
// MessageText:
//
//  Invalid line handle
//
#define LINEERR_INVALLINEHANDLE          57387L

//
// MessageId: LINEERR_INVALLINESTATE
//
// MessageText:
//
//  Operation not permitted in current line state
//
#define LINEERR_INVALLINESTATE           57388L

//
// MessageId: LINEERR_INVALLOCATION
//
// MessageText:
//
//  Invalid location ID
//
#define LINEERR_INVALLOCATION            57389L

//
// MessageId: LINEERR_INVALMEDIALIST
//
// MessageText:
//
//  Invalid media list
//
#define LINEERR_INVALMEDIALIST           57390L

//
// MessageId: LINEERR_INVALMEDIAMODE
//
// MessageText:
//
//  Invalid media mode
//
#define LINEERR_INVALMEDIAMODE           57391L

//
// MessageId: LINEERR_INVALMESSAGEID
//
// MessageText:
//
//  Invalid message ID
//
#define LINEERR_INVALMESSAGEID           57392L

//
// MessageId: LINEERR_INVALPARAM
//
// MessageText:
//
//  Invalid parameter
//
#define LINEERR_INVALPARAM               57394L

//
// MessageId: LINEERR_INVALPARKID
//
// MessageText:
//
//  Invalid park ID
//
#define LINEERR_INVALPARKID              57395L

//
// MessageId: LINEERR_INVALPARKMODE
//
// MessageText:
//
//  Invalid park mode
//
#define LINEERR_INVALPARKMODE            57396L

//
// MessageId: LINEERR_INVALPOINTER
//
// MessageText:
//
//  Invalid pointer
//
#define LINEERR_INVALPOINTER             57397L

//
// MessageId: LINEERR_INVALPRIVSELECT
//
// MessageText:
//
//  Invalid call privilege selection
//
#define LINEERR_INVALPRIVSELECT          57398L

//
// MessageId: LINEERR_INVALRATE
//
// MessageText:
//
//  Invalid rate
//
#define LINEERR_INVALRATE                57399L

//
// MessageId: LINEERR_INVALREQUESTMODE
//
// MessageText:
//
//  Invalid request mode
//
#define LINEERR_INVALREQUESTMODE         57400L

//
// MessageId: LINEERR_INVALTERMINALID
//
// MessageText:
//
//  Invalid terminal ID
//
#define LINEERR_INVALTERMINALID          57401L

//
// MessageId: LINEERR_INVALTERMINALMODE
//
// MessageText:
//
//  Invalid terminal mode
//
#define LINEERR_INVALTERMINALMODE        57402L

//
// MessageId: LINEERR_INVALTIMEOUT
//
// MessageText:
//
//  Invalid timeout value
//
#define LINEERR_INVALTIMEOUT             57403L

//
// MessageId: LINEERR_INVALTONE
//
// MessageText:
//
//  Invalid tone
//
#define LINEERR_INVALTONE                57404L

//
// MessageId: LINEERR_INVALTONELIST
//
// MessageText:
//
//  Invalid tone list
//
#define LINEERR_INVALTONELIST            57405L

//
// MessageId: LINEERR_INVALTONEMODE
//
// MessageText:
//
//  Invalid tone mode
//
#define LINEERR_INVALTONEMODE            57406L

//
// MessageId: LINEERR_INVALTRANSFERMODE
//
// MessageText:
//
//  Invalid transfer mode
//
#define LINEERR_INVALTRANSFERMODE        57407L

//
// MessageId: LINEERR_LINEMAPPERFAILED
//
// MessageText:
//
//  No device matches the specified requirements
//
#define LINEERR_LINEMAPPERFAILED         57408L

//
// MessageId: LINEERR_NOCONFERENCE
//
// MessageText:
//
//  The call is not part of a conference
//
#define LINEERR_NOCONFERENCE             57409L

//
// MessageId: LINEERR_NODEVICE
//
// MessageText:
//
//  The device was removed, or the device class is not recognized
//
#define LINEERR_NODEVICE                 57410L

//
// MessageId: LINEERR_NODRIVER
//
// MessageText:
//
//  The service provider was removed
//
#define LINEERR_NODRIVER                 57411L

//
// MessageId: LINEERR_NOMEM
//
// MessageText:
//
//  Insufficient memory available to complete the operation
//
#define LINEERR_NOMEM                    57412L

//
// MessageId: LINEERR_NOREQUEST
//
// MessageText:
//
//  No Assisted Telephony requests are pending
//
#define LINEERR_NOREQUEST                57413L

//
// MessageId: LINEERR_NOTOWNER
//
// MessageText:
//
//  The application is does not have OWNER privilege on the call
//
#define LINEERR_NOTOWNER                 57414L

//
// MessageId: LINEERR_NOTREGISTERED
//
// MessageText:
//
//  The application is not registered to handle requests
//
#define LINEERR_NOTREGISTERED            57415L

//
// MessageId: LINEERR_OPERATIONFAILED
//
// MessageText:
//
//  The operation failed for unspecified reasons
//
#define LINEERR_OPERATIONFAILED          57416L

//
// MessageId: LINEERR_OPERATIONUNAVAIL
//
// MessageText:
//
//  The operation is not supported by the underlying service provider
//
#define LINEERR_OPERATIONUNAVAIL         57417L

//
// MessageId: LINEERR_RATEUNAVAIL
//
// MessageText:
//
//  The requested data rate is not available
//
#define LINEERR_RATEUNAVAIL              57418L

//
// MessageId: LINEERR_RESOURCEUNAVAIL
//
// MessageText:
//
//  A resource needed to fulfill the request is not available
//
#define LINEERR_RESOURCEUNAVAIL          57419L

//
// MessageId: LINEERR_REQUESTOVERRUN
//
// MessageText:
//
//  The request queue is already full
//
#define LINEERR_REQUESTOVERRUN           57420L

//
// MessageId: LINEERR_STRUCTURETOOSMALL
//
// MessageText:
//
//  The application failed to allocate sufficient memory for the minimum structure size
//
#define LINEERR_STRUCTURETOOSMALL        57421L

//
// MessageId: LINEERR_TARGETNOTFOUND
//
// MessageText:
//
//  The call handoff failed because the specified target was not found
//
#define LINEERR_TARGETNOTFOUND           57422L

//
// MessageId: LINEERR_TARGETSELF
//
// MessageText:
//
//  No higher priority target exists for the call handoff
//
#define LINEERR_TARGETSELF               57423L

//
// MessageId: LINEERR_UNINITIALIZED
//
// MessageText:
//
//  The telephony service has not been initialized
//
#define LINEERR_UNINITIALIZED            57424L

//
// MessageId: LINEERR_USERUSERINFOTOOBIG
//
// MessageText:
//
//  The amount of user-user info exceeds the maximum permitted
//
#define LINEERR_USERUSERINFOTOOBIG       57425L

//
// MessageId: LINEERR_REINIT
//
// MessageText:
//
//  The operation cannot be completed until all TAPI applications call lineShutdown
//
#define LINEERR_REINIT                   57426L

//
// MessageId: LINEERR_ADDRESSBLOCKED
//
// MessageText:
//
//  You are not permitted to call this number
//
#define LINEERR_ADDRESSBLOCKED           57427L

//
// MessageId: LINEERR_BILLINGREJECTED
//
// MessageText:
//
//  The calling card number or other billing information was rejected
//
#define LINEERR_BILLINGREJECTED          57428L

//
// MessageId: LINEERR_INVALFEATURE
//
// MessageText:
//
//  Invalid device-specific feature
//
#define LINEERR_INVALFEATURE             57429L

//
// MessageId: LINEERR_NOMULTIPLEINSTANCE
//
// MessageText:
//
//  You cannot have two instances of the same service provider
//
#define LINEERR_NOMULTIPLEINSTANCE       57430L

//
// MessageId: LINEERR_INVALAGENTID
//
// MessageText:
//
//  Invalid agent ID
//
#define LINEERR_INVALAGENTID             57431L

//
// MessageId: LINEERR_INVALAGENTGROUP
//
// MessageText:
//
//  Invalid agent group
//
#define LINEERR_INVALAGENTGROUP          57432L

//
// MessageId: LINEERR_INVALPASSWORD
//
// MessageText:
//
//  Invalid agent password
//
#define LINEERR_INVALPASSWORD            57433L

//
// MessageId: LINEERR_INVALAGENTSTATE
//
// MessageText:
//
//  Invalid agent state
//
#define LINEERR_INVALAGENTSTATE          57434L

//
// MessageId: LINEERR_INVALAGENTACTIVITY
//
// MessageText:
//
//  Invalid agent activity
//
#define LINEERR_INVALAGENTACTIVITY       57435L

//
// MessageId: LINEERR_DIALVOICEDETECT
//
// MessageText:
//
//  The ':' dial modifier is not supported
//
#define LINEERR_DIALVOICEDETECT          57436L

//
// MessageId: PHONEERR_SUCCESS
//
// MessageText:
//
//  The operation completed successfully
//
#define PHONEERR_SUCCESS                 61440L

//
// MessageId: PHONEERR_ALLOCATED
//
// MessageText:
//
//  The phone device is already in use
//
#define PHONEERR_ALLOCATED               61441L

//
// MessageId: PHONEERR_BADDEVICEID
//
// MessageText:
//
//  Invalid phone device ID
//
#define PHONEERR_BADDEVICEID             61442L

//
// MessageId: PHONEERR_INCOMPATIBLEAPIVERSION
//
// MessageText:
//
//  Incompatible API version
//
#define PHONEERR_INCOMPATIBLEAPIVERSION  61443L

//
// MessageId: PHONEERR_INCOMPATIBLEEXTVERSION
//
// MessageText:
//
//  Incompatible extension version
//
#define PHONEERR_INCOMPATIBLEEXTVERSION  61444L

//
// MessageId: PHONEERR_INIFILECORRUPT
//
// MessageText:
//
//  The TAPI configuration information is unusable
//
#define PHONEERR_INIFILECORRUPT          61445L

//
// MessageId: PHONEERR_INUSE
//
// MessageText:
//
//  The phone device is already in use
//
#define PHONEERR_INUSE                   61446L

//
// MessageId: PHONEERR_INVALAPPHANDLE
//
// MessageText:
//
//  Invalid TAPI phone application handle
//
#define PHONEERR_INVALAPPHANDLE          61447L

//
// MessageId: PHONEERR_INVALAPPNAME
//
// MessageText:
//
//  Invalid application name
//
#define PHONEERR_INVALAPPNAME            61448L

//
// MessageId: PHONEERR_INVALBUTTONLAMPID
//
// MessageText:
//
//  Invalid button or lamp ID
//
#define PHONEERR_INVALBUTTONLAMPID       61449L

//
// MessageId: PHONEERR_INVALBUTTONMODE
//
// MessageText:
//
//  Invalid button mode
//
#define PHONEERR_INVALBUTTONMODE         61450L

//
// MessageId: PHONEERR_INVALBUTTONSTATE
//
// MessageText:
//
//  Invalid button state
//
#define PHONEERR_INVALBUTTONSTATE        61451L

//
// MessageId: PHONEERR_INVALDATAID
//
// MessageText:
//
//  Invalid data segment ID
//
#define PHONEERR_INVALDATAID             61452L

//
// MessageId: PHONEERR_INVALDEVICECLASS
//
// MessageText:
//
//  Invalid device class identifier
//
#define PHONEERR_INVALDEVICECLASS        61453L

//
// MessageId: PHONEERR_INVALEXTVERSION
//
// MessageText:
//
//  Invalid extension version
//
#define PHONEERR_INVALEXTVERSION         61454L

//
// MessageId: PHONEERR_INVALHOOKSWITCHDEV
//
// MessageText:
//
//  Invalid hookswitch device ID
//
#define PHONEERR_INVALHOOKSWITCHDEV      61455L

//
// MessageId: PHONEERR_INVALHOOKSWITCHMODE
//
// MessageText:
//
//  Invalid hookswitch mode
//
#define PHONEERR_INVALHOOKSWITCHMODE     61456L

//
// MessageId: PHONEERR_INVALLAMPMODE
//
// MessageText:
//
//  Invalid lamp mode
//
#define PHONEERR_INVALLAMPMODE           61457L

//
// MessageId: PHONEERR_INVALPARAM
//
// MessageText:
//
//  Invalid parameter
//
#define PHONEERR_INVALPARAM              61458L

//
// MessageId: PHONEERR_INVALPHONEHANDLE
//
// MessageText:
//
//  Invalid phone handle
//
#define PHONEERR_INVALPHONEHANDLE        61459L

//
// MessageId: PHONEERR_INVALPHONESTATE
//
// MessageText:
//
//  Operation not permitted in current phone state
//
#define PHONEERR_INVALPHONESTATE         61460L

//
// MessageId: PHONEERR_INVALPOINTER
//
// MessageText:
//
//  Invalid pointer
//
#define PHONEERR_INVALPOINTER            61461L

//
// MessageId: PHONEERR_INVALPRIVILEGE
//
// MessageText:
//
//  Invalid privilege
//
#define PHONEERR_INVALPRIVILEGE          61462L

//
// MessageId: PHONEERR_INVALRINGMODE
//
// MessageText:
//
//  Invalid ring mode
//
#define PHONEERR_INVALRINGMODE           61463L

//
// MessageId: PHONEERR_NODEVICE
//
// MessageText:
//
//  The device was removed, or the device class is not recognized
//
#define PHONEERR_NODEVICE                61464L

//
// MessageId: PHONEERR_NODRIVER
//
// MessageText:
//
//  The service provider was removed
//
#define PHONEERR_NODRIVER                61465L

//
// MessageId: PHONEERR_NOMEM
//
// MessageText:
//
//  Insufficient memory available to complete the operation
//
#define PHONEERR_NOMEM                   61466L

//
// MessageId: PHONEERR_NOTOWNER
//
// MessageText:
//
//  The application is does not have OWNER privilege on the phone
//
#define PHONEERR_NOTOWNER                61467L

//
// MessageId: PHONEERR_OPERATIONFAILED
//
// MessageText:
//
//  The operation failed for unspecified reasons
//
#define PHONEERR_OPERATIONFAILED         61468L

//
// MessageId: PHONEERR_OPERATIONUNAVAIL
//
// MessageText:
//
//  The operation is not supported by the underlying service provider
//
#define PHONEERR_OPERATIONUNAVAIL        61469L

//
// MessageId: PHONEERR_RESOURCEUNAVAIL
//
// MessageText:
//
//  A resource needed to fulfill the request is not available
//
#define PHONEERR_RESOURCEUNAVAIL         61471L

//
// MessageId: PHONEERR_REQUESTOVERRUN
//
// MessageText:
//
//  The request queue is already full
//
#define PHONEERR_REQUESTOVERRUN          61472L

//
// MessageId: PHONEERR_STRUCTURETOOSMALL
//
// MessageText:
//
//  The application failed to allocate sufficient memory for the minimum structure size
//
#define PHONEERR_STRUCTURETOOSMALL       61473L

//
// MessageId: PHONEERR_UNINITIALIZED
//
// MessageText:
//
//  The telephony service has not been initialized
//
#define PHONEERR_UNINITIALIZED           61474L

//
// MessageId: PHONEERR_REINIT
//
// MessageText:
//
//  The operation cannot be completed until all TAPI applications call phoneShutdown
//
#define PHONEERR_REINIT                  61475L

//
// MessageId: TAPIERR_CONNECTED
//
// MessageText:
//
//  The request was accepted
//
#define TAPIERR_CONNECTED                0L

//
// MessageId: TAPIERR_DROPPED
//
// MessageText:
//
//  The call was disconnected
//
#define TAPIERR_DROPPED                  65535L

//
// MessageId: TAPIERR_NOREQUESTRECIPIENT
//
// MessageText:
//
//  No program is available to handle the request
//
#define TAPIERR_NOREQUESTRECIPIENT       65534L

//
// MessageId: TAPIERR_REQUESTQUEUEFULL
//
// MessageText:
//
//  The queue of call requests is full
//
#define TAPIERR_REQUESTQUEUEFULL         65533L

//
// MessageId: TAPIERR_INVALDESTADDRESS
//
// MessageText:
//
//  The phone number is invalid or improperly formatted
//
#define TAPIERR_INVALDESTADDRESS         65532L

//
// MessageId: TAPIERR_INVALWINDOWHANDLE
//
// MessageText:
//
//  Invalid window handle
//
#define TAPIERR_INVALWINDOWHANDLE        65531L

//
// MessageId: TAPIERR_INVALDEVICECLASS
//
// MessageText:
//
//  Invalid device class
//
#define TAPIERR_INVALDEVICECLASS         65530L

//
// MessageId: TAPIERR_INVALDEVICEID
//
// MessageText:
//
//  Invalid device ID
//
#define TAPIERR_INVALDEVICEID            65529L

//
// MessageId: TAPIERR_DEVICECLASSUNAVAIL
//
// MessageText:
//
//  The device class is unavailable
//
#define TAPIERR_DEVICECLASSUNAVAIL       65528L

//
// MessageId: TAPIERR_DEVICEIDUNAVAIL
//
// MessageText:
//
//  The specified device is unavailable
//
#define TAPIERR_DEVICEIDUNAVAIL          65527L

//
// MessageId: TAPIERR_DEVICEINUSE
//
// MessageText:
//
//  The device is already in use
//
#define TAPIERR_DEVICEINUSE              65526L

//
// MessageId: TAPIERR_DESTBUSY
//
// MessageText:
//
//  The called number is busy
//
#define TAPIERR_DESTBUSY                 65525L

//
// MessageId: TAPIERR_DESTNOANSWER
//
// MessageText:
//
//  The called party does not answer
//
#define TAPIERR_DESTNOANSWER             65524L

//
// MessageId: TAPIERR_DESTUNAVAIL
//
// MessageText:
//
//  The called number could not be reached
//
#define TAPIERR_DESTUNAVAIL              65523L

//
// MessageId: TAPIERR_UNKNOWNWINHANDLE
//
// MessageText:
//
//  Unknown window handle
//
#define TAPIERR_UNKNOWNWINHANDLE         65522L

//
// MessageId: TAPIERR_UNKNOWNREQUESTID
//
// MessageText:
//
//  Unknown request ID
//
#define TAPIERR_UNKNOWNREQUESTID         65521L

//
// MessageId: TAPIERR_REQUESTFAILED
//
// MessageText:
//
//  The request failed for unspecified reasons
//
#define TAPIERR_REQUESTFAILED            65520L

//
// MessageId: TAPIERR_REQUESTCANCELLED
//
// MessageText:
//
//  The request was cancelled
//
#define TAPIERR_REQUESTCANCELLED         65519L

//
// MessageId: TAPIERR_INVALPOINTER
//
// MessageText:
//
//  Invalid pointer
//
#define TAPIERR_INVALPOINTER             65518L

