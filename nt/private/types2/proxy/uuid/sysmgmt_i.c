/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 21:15:27 2019
 */
/* Compiler settings for sysmgmt.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IAlertReport = {0x4E81DFE8,0x4CA0,0x101A,{0x82,0x06,0x08,0x00,0x2B,0x2F,0xC0,0x9B}};


const IID IID_IAlertTarget = {0x589b61C0,0x54E6,0x11CE,{0x94,0xDD,0x00,0xAA,0x00,0x51,0xE4,0x0F}};


#ifdef __cplusplus
}
#endif

