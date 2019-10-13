/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 05:05:19 2019
 */
/* Compiler settings for ..\irot.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "irot.h"

#define TYPE_FORMAT_STRING_SIZE   137                               
#define PROC_FORMAT_STRING_SIZE   383                               

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;

extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;

/* Standard interface: IROT, ver. 0.2,
   GUID={0xB9E79E60,0x3D52,0x11CE,{0xAA,0xA1,0x00,0x00,0x69,0x01,0x29,0x3F}} */


extern const MIDL_SERVER_INFO IROT_ServerInfo;

extern RPC_DISPATCH_TABLE IROT_DispatchTable;

static const RPC_SERVER_INTERFACE IROT___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xB9E79E60,0x3D52,0x11CE,{0xAA,0xA1,0x00,0x00,0x69,0x01,0x29,0x3F}},{0,2}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &IROT_DispatchTable,
    0,
    0,
    0,
    &IROT_ServerInfo,
    0
    };
RPC_IF_HANDLE IROT_ServerIfHandle = (RPC_IF_HANDLE)& IROT___RpcServerInterface;

extern const MIDL_STUB_DESC IROT_StubDesc;

extern const NDR_RUNDOWN RundownRoutines[];

static const MIDL_STUB_DESC IROT_StubDesc = 
    {
    (void __RPC_FAR *)& IROT___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x300002c, /* MIDL Version 3.0.44 */
    0,
    0,
    0,  /* Reserved1 */
    0,  /* Reserved2 */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static RPC_DISPATCH_FUNCTION IROT_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
RPC_DISPATCH_TABLE IROT_DispatchTable = 
    {
    7,
    IROT_table
    };

static const SERVER_ROUTINE IROT_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)IrotRegister,
    (SERVER_ROUTINE)IrotRevoke,
    (SERVER_ROUTINE)IrotIsRunning,
    (SERVER_ROUTINE)IrotGetObject,
    (SERVER_ROUTINE)IrotNoteChangeTime,
    (SERVER_ROUTINE)IrotGetTimeOfLastChange,
    (SERVER_ROUTINE)IrotEnumRunning
    };

static const unsigned short IROT_FormatStringOffsetTable[] = 
    {
    0,
    82,
    134,
    180,
    244,
    284,
    336
    };

static const MIDL_SERVER_INFO IROT_ServerInfo = 
    {
    &IROT_StubDesc,
    IROT_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    IROT_FormatStringOffsetTable,
    0,
    0,
    0,
    0
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    PHPROCESS_rundown
    };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure IrotRegister */

			0x0,		/* 0 */
			0x60,		/* 96 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/*  6 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 10 */	NdrFcShort( 0x30 ),	/* 48 */
/* 12 */	NdrFcShort( 0x20 ),	/* 32 */
/* 14 */	0x6,		/* 6 */
			0xb,		/* 11 */

	/* Parameter hRpc */

/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter phProcess */

/* 22 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pwszWinstaDesktop */

/* 28 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 32 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter pmkeqbuf */

/* 34 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 36 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 38 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter pifdObject */

/* 40 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 42 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 44 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter pifdObjectName */

/* 46 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 48 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 50 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter pfiletime */

/* 52 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 54 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 56 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwProcessId */

/* 58 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 60 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 62 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pwszServerExe */

/* 64 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 66 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 68 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter psrkRegister */

/* 70 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 72 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 74 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter prpcstat */

/* 76 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 78 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 80 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IrotRevoke */


	/* Return value */

/* 82 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 84 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 88 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 90 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 92 */	NdrFcShort( 0x18 ),	/* 24 */
/* 94 */	NdrFcShort( 0x10 ),	/* 16 */
/* 96 */	0x5,		/* 5 */
			0x6,		/* 6 */

	/* Parameter hRpc */

/* 98 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 100 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 102 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter psrkRegister */

/* 104 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 106 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fServerRevoke */

/* 110 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 112 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 114 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter pifdObject */

/* 116 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 118 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 120 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter pifdName */

/* 122 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 124 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 126 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter prpcstat */

/* 128 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 130 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IrotIsRunning */


	/* Return value */

/* 134 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 136 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 138 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 140 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 142 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 144 */	NdrFcShort( 0x18 ),	/* 24 */
/* 146 */	NdrFcShort( 0x10 ),	/* 16 */
/* 148 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter hRpc */

/* 150 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 154 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter phProcess */

/* 156 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 160 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pwszWinstaDesktop */

/* 162 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 166 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter pmkeqbuf */

/* 168 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 172 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter prpcstat */

/* 174 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IrotGetObject */


	/* Return value */

/* 180 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 182 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 184 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 186 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 188 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 190 */	NdrFcShort( 0x20 ),	/* 32 */
/* 192 */	NdrFcShort( 0x20 ),	/* 32 */
/* 194 */	0x7,		/* 7 */
			0x8,		/* 8 */

	/* Parameter hRpc */

/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 198 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 200 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter phProcess */

/* 202 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 204 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 206 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pwszWinstaDesktop */

/* 208 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 210 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwProcessId */

/* 214 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 216 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 218 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter pmkeqbuf */

/* 220 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 222 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 224 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter psrkRegister */

/* 226 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 228 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 230 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter pifdObject */

/* 232 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 234 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 236 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter prpcstat */

/* 238 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 240 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IrotNoteChangeTime */


	/* Return value */

/* 244 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 246 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 248 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 250 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 252 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 254 */	NdrFcShort( 0x20 ),	/* 32 */
/* 256 */	NdrFcShort( 0x10 ),	/* 16 */
/* 258 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter hRpc */

/* 260 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 262 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 264 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter psrkRegister */

/* 266 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 268 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 270 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter pfiletime */

/* 272 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 274 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 276 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter prpcstat */

/* 278 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 280 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IrotGetTimeOfLastChange */


	/* Return value */

/* 284 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 286 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 288 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 290 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 292 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 294 */	NdrFcShort( 0x18 ),	/* 24 */
/* 296 */	NdrFcShort( 0x20 ),	/* 32 */
/* 298 */	0x6,		/* 6 */
			0x6,		/* 6 */

	/* Parameter hRpc */

/* 300 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 302 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 304 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter phProcess */

/* 306 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 308 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 310 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pwszWinstaDesktop */

/* 312 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 314 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 316 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter pmkeqbuf */

/* 318 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 320 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 322 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */

	/* Parameter pfiletime */

/* 324 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 326 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 328 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter prpcstat */

/* 330 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 332 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IrotEnumRunning */


	/* Return value */

/* 336 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 338 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 340 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 342 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 344 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 346 */	NdrFcShort( 0x18 ),	/* 24 */
/* 348 */	NdrFcShort( 0x10 ),	/* 16 */
/* 350 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter hRpc */

/* 352 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 354 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 356 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter phProcess */

/* 358 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 360 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 362 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pwszWinstaDesktop */

/* 364 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 366 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 368 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter ppMkIFList */

/* 370 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 372 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 374 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter prpcstat */

/* 376 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 378 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/*  2 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  4 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  6 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  8 */	
			0x11, 0x0,	/* FC_RP */
/* 10 */	NdrFcShort( 0xc ),	/* Offset= 12 (22) */
/* 12 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 14 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16 */	0x8,		/* 8 */
			0x0,		/*  */
/* 18 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 20 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x4 ),	/* 4 */
/* 26 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (12) */
/* 28 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 30 */	
			0x11, 0x0,	/* FC_RP */
/* 32 */	NdrFcShort( 0x10 ),	/* Offset= 16 (48) */
/* 34 */	
			0x1f,		/* FC_SMVARRAY */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0x400 ),	/* 1024 */
/* 38 */	NdrFcShort( 0x400 ),	/* 1024 */
/* 40 */	NdrFcShort( 0x1 ),	/* 1 */
/* 42 */	0x8,		/* 8 */
			0x0,		/*  */
/* 44 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 46 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 48 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x404 ),	/* 1028 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x0 ),	/* Offset= 0 (54) */
/* 56 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 58 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe7 ),	/* Offset= -25 (34) */
			0x5b,		/* FC_END */
/* 62 */	
			0x11, 0x0,	/* FC_RP */
/* 64 */	NdrFcShort( 0x2 ),	/* Offset= 2 (66) */
/* 66 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 72 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 74 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 76 */	NdrFcShort( 0xfffffff6 ),	/* Offset= -10 (66) */
/* 78 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 80 */	0x10,		/* FC_ERROR_STATUS_T */
			0x5c,		/* FC_PAD */
/* 82 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 84 */	NdrFcShort( 0x2 ),	/* Offset= 2 (86) */
/* 86 */	
			0x12, 0x0,	/* FC_UP */
/* 88 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (48) */
/* 90 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 92 */	NdrFcShort( 0x2 ),	/* Offset= 2 (94) */
/* 94 */	
			0x12, 0x0,	/* FC_UP */
/* 96 */	NdrFcShort( 0xc ),	/* Offset= 12 (108) */
/* 98 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 100 */	NdrFcShort( 0x4 ),	/* 4 */
/* 102 */	0x8,		/* 8 */
			0x0,		/*  */
/* 104 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 106 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 108 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 110 */	NdrFcShort( 0x4 ),	/* 4 */
/* 112 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (98) */
/* 114 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 116 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 118 */	NdrFcShort( 0x4 ),	/* 4 */
/* 120 */	NdrFcShort( 0x4 ),	/* 4 */
/* 122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 126 */	NdrFcShort( 0x4 ),	/* 4 */
/* 128 */	0x12, 0x0,	/* FC_UP */
/* 130 */	NdrFcShort( 0xffffffae ),	/* Offset= -82 (48) */
/* 132 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 134 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };
