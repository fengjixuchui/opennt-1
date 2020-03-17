/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 3.00.44 */
/* at Sat Mar 14 22:50:16 2020
 */
/* Compiler settings for storext.idl:
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

const IID IID_IOverlappedCompletion = {0x521a28f0,0xe40b,0x11ce,{0xb2,0xc9,0x00,0xaa,0x00,0x68,0x09,0x37}};


const IID IID_IOverlappedStream = {0x49384070,0xe40a,0x11ce,{0xb2,0xc9,0x00,0xaa,0x00,0x68,0x09,0x37}};


#ifdef __cplusplus
}
#endif

