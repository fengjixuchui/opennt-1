/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 02:55:31 2019
 */
/* Compiler settings for catstg.idl:
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

const IID IID_ISummaryCatalogStorage = {0xa3cf4d70,0x702d,0x11ce,{0x8b,0x2c,0x00,0xaa,0x00,0x3c,0x9b,0x74}};


const IID IID_ISummaryCatalogStorageView = {0x8d2bea60,0xbb95,0x11ce,{0xa3,0x28,0x00,0xaa,0x00,0x4b,0xa9,0x35}};


#ifdef __cplusplus
}
#endif

