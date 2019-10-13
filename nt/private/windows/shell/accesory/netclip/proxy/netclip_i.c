/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 04:21:15 2019
 */
/* Compiler settings for netclip.idl:
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

const IID IID_IClipboard = {0x7502CA01,0x4ACA,0x11cf,{0xB6,0x3C,0x00,0x80,0xC7,0x92,0xB7,0x82}};


const IID IID_IClipboardNotify = {0x7502CA02,0x4ACA,0x11cf,{0xB6,0x3C,0x00,0x80,0xC7,0x92,0xB7,0x82}};


#ifdef __cplusplus
}
#endif

