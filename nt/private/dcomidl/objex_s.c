/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sat Mar 14 22:51:52 2020
 */
/* Compiler settings for objex.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation bounds_check stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "objex.h"

#define TYPE_FORMAT_STRING_SIZE   101                               
#define PROC_FORMAT_STRING_SIZE   189                               

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

/* Standard interface: IObjectExporter, ver. 0.0,
   GUID={0x99fcfec4,0x5260,0x101b,{0xbb,0xcb,0x00,0xaa,0x00,0x21,0x34,0x7a}} */


extern const MIDL_SERVER_INFO IObjectExporter_ServerInfo;

extern RPC_DISPATCH_TABLE IObjectExporter_DispatchTable;

static const RPC_SERVER_INTERFACE IObjectExporter___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x99fcfec4,0x5260,0x101b,{0xbb,0xcb,0x00,0xaa,0x00,0x21,0x34,0x7a}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &IObjectExporter_DispatchTable,
    0,
    0,
    0,
    &IObjectExporter_ServerInfo,
    0
    };
RPC_IF_HANDLE _IObjectExporter_ServerIfHandle = (RPC_IF_HANDLE)& IObjectExporter___RpcServerInterface;

extern const MIDL_STUB_DESC IObjectExporter_StubDesc;


static const MIDL_STUB_DESC IObjectExporter_StubDesc = 
    {
    (void __RPC_FAR *)& IObjectExporter___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
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

static RPC_DISPATCH_FUNCTION IObjectExporter_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
RPC_DISPATCH_TABLE IObjectExporter_DispatchTable = 
    {
    4,
    IObjectExporter_table
    };

static const SERVER_ROUTINE IObjectExporter_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)_ResolveOxid,
    (SERVER_ROUTINE)_SimplePing,
    (SERVER_ROUTINE)_ComplexPing,
    (SERVER_ROUTINE)_ServerAlive
    };

static const unsigned short IObjectExporter_FormatStringOffsetTable[] = 
    {
    0,
    62,
    94,
    162
    };

static const MIDL_SERVER_INFO IObjectExporter_ServerInfo = 
    {
    &IObjectExporter_StubDesc,
    IObjectExporter_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    IObjectExporter_FormatStringOffsetTable,
    0,
    0,
    0,
    0
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

	/* Procedure ResolveOxid */

			0x0,		/* 0 */
			0x68,		/* 104 */
/*  2 */	NdrFcLong( 0x1 ),	/* 1 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 12 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 14 */	NdrFcShort( 0x16 ),	/* 22 */
/* 16 */	NdrFcShort( 0x30 ),	/* 48 */
/* 18 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter hRpc */

/* 20 */	NdrFcShort( 0x148 ),	/* 328 */
#ifndef _ALPHA_
/* 22 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 24 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pOxid */

/* 26 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 28 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 30 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter cRequestedProtseqs */

/* 32 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 34 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 36 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter arRequestedProtseqs */

/* 38 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 40 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 42 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Parameter ppdsaOxidBindings */

/* 44 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 48 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter pipidRemUnknown */

/* 50 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 54 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAuthnHint */

/* 56 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 58 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 60 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure SimplePing */


	/* Return value */

/* 62 */	0x0,		/* 0 */
			0x68,		/* 104 */
/* 64 */	NdrFcLong( 0x1 ),	/* 1 */
/* 68 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 70 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 72 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 76 */	NdrFcShort( 0x10 ),	/* 16 */
/* 78 */	NdrFcShort( 0x8 ),	/* 8 */
/* 80 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter hRpc */

/* 82 */	NdrFcShort( 0x148 ),	/* 328 */
#ifndef _ALPHA_
/* 84 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 86 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pSetId */

/* 88 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 90 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 92 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ComplexPing */


	/* Return value */

/* 94 */	0x0,		/* 0 */
			0x68,		/* 104 */
/* 96 */	NdrFcLong( 0x1 ),	/* 1 */
/* 100 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 102 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 104 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 106 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 108 */	NdrFcShort( 0x22 ),	/* 34 */
/* 110 */	NdrFcShort( 0x1e ),	/* 30 */
/* 112 */	0x6,		/* 6 */
			0x8,		/* 8 */

	/* Parameter hRpc */

/* 114 */	NdrFcShort( 0x158 ),	/* 344 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 118 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pSetId */

/* 120 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 124 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter SequenceNum */

/* 126 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 128 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 130 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter cAddToSet */

/* 132 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 136 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter cDelFromSet */

/* 138 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 142 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter AddToSet */

/* 144 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 148 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter DelFromSet */

/* 150 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 154 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pPingBackoffFactor */

/* 156 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 160 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ServerAlive */


	/* Return value */

/* 162 */	0x0,		/* 0 */
			0x68,		/* 104 */
/* 164 */	NdrFcLong( 0x1 ),	/* 1 */
/* 168 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 172 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 174 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 180 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Parameter hRpc */

/* 182 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 184 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 186 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  2 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  6 */	NdrFcShort( 0x2 ),	/* 2 */
/*  8 */	0x27,		/* 39 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 10 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 12 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 14 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 16 */	NdrFcShort( 0x2 ),	/* Offset= 2 (18) */
/* 18 */	
			0x12, 0x0,	/* FC_UP */
/* 20 */	NdrFcShort( 0xc ),	/* Offset= 12 (32) */
/* 22 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 24 */	NdrFcShort( 0x2 ),	/* 2 */
/* 26 */	0x7,		/* 7 */
			0x0,		/*  */
/* 28 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 30 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 32 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 34 */	NdrFcShort( 0x4 ),	/* 4 */
/* 36 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (22) */
/* 38 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 40 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 42 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 44 */	NdrFcShort( 0x8 ),	/* Offset= 8 (52) */
/* 46 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 52 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 54 */	NdrFcShort( 0x10 ),	/* 16 */
/* 56 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 58 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 60 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (46) */
			0x5b,		/* FC_END */
/* 64 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 66 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 68 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0x2 ),	/* Offset= 2 (72) */
/* 72 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 74 */	NdrFcShort( 0x8 ),	/* 8 */
/* 76 */	0x27,		/* 39 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 78 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 80 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 82 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 84 */	NdrFcShort( 0x2 ),	/* Offset= 2 (86) */
/* 86 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x27,		/* 39 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 94 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 96 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 98 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */

			0x0
        }
    };
