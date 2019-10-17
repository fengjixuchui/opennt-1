/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 18:16:20 2019
 */
/* Compiler settings for iconn.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
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

const IID IID_IDocfileAsyncConnectionPoint = {0x4a8df970,0x8d9a,0x11cf,{0x88,0x27,0x00,0xaa,0x00,0xb5,0x69,0xf5}};


const IID IID_IFillInfo = {0xde2eacd0,0x9c9d,0x11cf,{0x88,0x2a,0x00,0xaa,0x00,0xb5,0x69,0xf5}};


#ifdef __cplusplus
}
#endif

