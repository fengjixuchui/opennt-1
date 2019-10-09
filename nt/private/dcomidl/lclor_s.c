/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 21:15:34 2019
 */
/* Compiler settings for lclor.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation bounds_check stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "lclor.h"

#define TYPE_FORMAT_STRING_SIZE   275                               
#define PROC_FORMAT_STRING_SIZE   473                               

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

/* Standard interface: ILocalObjectExporter, ver. 2.0,
   GUID={0xe60c73e6,0x88f9,0x11cf,{0x9a,0xf1,0x00,0x20,0xaf,0x6e,0x72,0xf4}} */


extern const MIDL_SERVER_INFO ILocalObjectExporter_ServerInfo;

extern RPC_DISPATCH_TABLE ILocalObjectExporter_DispatchTable;

static const RPC_SERVER_INTERFACE ILocalObjectExporter___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xe60c73e6,0x88f9,0x11cf,{0x9a,0xf1,0x00,0x20,0xaf,0x6e,0x72,0xf4}},{2,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &ILocalObjectExporter_DispatchTable,
    0,
    0,
    0,
    &ILocalObjectExporter_ServerInfo,
    0
    };
RPC_IF_HANDLE _ILocalObjectExporter_ServerIfHandle = (RPC_IF_HANDLE)& ILocalObjectExporter___RpcServerInterface;

extern const MIDL_STUB_DESC ILocalObjectExporter_StubDesc;

extern const NDR_RUNDOWN RundownRoutines[];

static const MIDL_STUB_DESC ILocalObjectExporter_StubDesc = 
    {
    (void __RPC_FAR *)& ILocalObjectExporter___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
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

static RPC_DISPATCH_FUNCTION ILocalObjectExporter_table[] =
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
RPC_DISPATCH_TABLE ILocalObjectExporter_DispatchTable = 
    {
    7,
    ILocalObjectExporter_table
    };

static const SERVER_ROUTINE ILocalObjectExporter_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)_Connect,
    (SERVER_ROUTINE)_AllocateReservedIds,
    (SERVER_ROUTINE)_BulkUpdateOIDs,
    (SERVER_ROUTINE)_ClientResolveOXID,
    (SERVER_ROUTINE)_ServerAllocateOXIDAndOIDs,
    (SERVER_ROUTINE)_ServerAllocateOIDs,
    (SERVER_ROUTINE)_ServerFreeOXIDAndOIDs
    };

static const unsigned short ILocalObjectExporter_FormatStringOffsetTable[] = 
    {
    0,
    124,
    158,
    240,
    298,
    374,
    426
    };

static const MIDL_SERVER_INFO ILocalObjectExporter_ServerInfo = 
    {
    &ILocalObjectExporter_StubDesc,
    ILocalObjectExporter_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    ILocalObjectExporter_FormatStringOffsetTable,
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

	/* Procedure Connect */

			0x0,		/* 0 */
			0x60,		/* 96 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x4c ),	/* x86, MIPS, PPC Stack size/offset = 76 */
#else
			NdrFcShort( 0x98 ),	/* Alpha Stack size/offset = 152 */
#endif
/*  6 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	NdrFcShort( 0x88 ),	/* 136 */
/* 14 */	0x5,		/* 5 */
			0x12,		/* 18 */

	/* Parameter hServer */

/* 16 */	NdrFcShort( 0x110 ),	/* 272 */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pProcess */

/* 22 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwTimeoutInSeconds */

/* 28 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 32 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Parameter ppdsaOrBindings */

/* 34 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 36 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 38 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pLocalMid */

/* 40 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 42 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 44 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cIdsToReserve */

/* 46 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 48 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 50 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pidReservedBase */

/* 52 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 54 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 56 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfConnectFlags */

/* 58 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 60 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 62 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter pLegacySecurity */

/* 64 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 66 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 68 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAuthnLevel */

/* 70 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 72 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pImpLevel */

/* 76 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 78 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 80 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcServerSvc */

/* 82 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 84 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 86 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter aServerSvc */

/* 88 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 90 */	NdrFcShort( 0x34 ),	/* x86, MIPS, PPC Stack size/offset = 52 */
#else
			NdrFcShort( 0x68 ),	/* Alpha Stack size/offset = 104 */
#endif
/* 92 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcClientSvc */

/* 94 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 96 */	NdrFcShort( 0x38 ),	/* x86, MIPS, PPC Stack size/offset = 56 */
#else
			NdrFcShort( 0x70 ),	/* Alpha Stack size/offset = 112 */
#endif
/* 98 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter aClientSvc */

/* 100 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 102 */	NdrFcShort( 0x3c ),	/* x86, MIPS, PPC Stack size/offset = 60 */
#else
			NdrFcShort( 0x78 ),	/* Alpha Stack size/offset = 120 */
#endif
/* 104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProcessID */

/* 106 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 108 */	NdrFcShort( 0x40 ),	/* x86, MIPS, PPC Stack size/offset = 64 */
#else
			NdrFcShort( 0x80 ),	/* Alpha Stack size/offset = 128 */
#endif
/* 110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pScmProcessID */

/* 112 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 114 */	NdrFcShort( 0x44 ),	/* x86, MIPS, PPC Stack size/offset = 68 */
#else
			NdrFcShort( 0x88 ),	/* Alpha Stack size/offset = 136 */
#endif
/* 116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pSignature */

/* 118 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 120 */	NdrFcShort( 0x48 ),	/* x86, MIPS, PPC Stack size/offset = 72 */
#else
			NdrFcShort( 0x90 ),	/* Alpha Stack size/offset = 144 */
#endif
/* 122 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure AllocateReservedIds */


	/* Return value */

/* 124 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 126 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 128 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 130 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 132 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 136 */	NdrFcShort( 0x18 ),	/* 24 */
/* 138 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter hServer */

/* 140 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 142 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cIdsToReserve */

/* 146 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 148 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 150 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pidReservedBase */

/* 152 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 154 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 156 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure BulkUpdateOIDs */


	/* Return value */

/* 158 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 160 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 162 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 164 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 166 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 168 */	NdrFcShort( 0x38 ),	/* 56 */
/* 170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 172 */	0x7,		/* 7 */
			0xb,		/* 11 */

	/* Parameter hServer */

/* 174 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 178 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter phProcess */

/* 180 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 182 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cOidsToBeAdded */

/* 186 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 188 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 190 */	NdrFcShort( 0x64 ),	/* Type Offset=100 */

	/* Parameter aOidsToBeAdded */

/* 192 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 194 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 196 */	NdrFcShort( 0x72 ),	/* Type Offset=114 */

	/* Parameter aStatusOfAdds */

/* 198 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 200 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cOidsToBeRemoved */

/* 204 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 206 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 208 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Parameter aOidsToBeRemoved */

/* 210 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 212 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cServerOidsToFree */

/* 216 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 218 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 220 */	NdrFcShort( 0x92 ),	/* Type Offset=146 */

	/* Parameter aServerOids */

/* 222 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 224 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cOxidsToFree */

/* 228 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 230 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 232 */	NdrFcShort( 0xaa ),	/* Type Offset=170 */

	/* Parameter aOxidsToFree */

/* 234 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 236 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 238 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ClientResolveOXID */


	/* Return value */

/* 240 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 242 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 244 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 246 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 248 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 250 */	NdrFcShort( 0x30 ),	/* 48 */
/* 252 */	NdrFcShort( 0x18 ),	/* 24 */
/* 254 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter hServer */

/* 256 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 258 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 260 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter phProcess */

/* 262 */	NdrFcShort( 0x148 ),	/* 328 */
#ifndef _ALPHA_
/* 264 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 266 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter poxidServer */

/* 268 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 270 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 272 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */

	/* Parameter pssaServerObjectResolverBindings */

/* 274 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 276 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fApartment */

/* 280 */	NdrFcShort( 0xffff8113 ),	/* -32493 */
#ifndef _ALPHA_
/* 282 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 284 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Parameter poxidInfo */

/* 286 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 288 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 290 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pLocalMidOfRemote */

/* 292 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 294 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 296 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ServerAllocateOXIDAndOIDs */


	/* Return value */

/* 298 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 300 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 302 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 304 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 306 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 308 */	NdrFcShort( 0x28 ),	/* 40 */
/* 310 */	NdrFcShort( 0x20 ),	/* 32 */
/* 312 */	0x7,		/* 7 */
			0xa,		/* 10 */

	/* Parameter hServer */

/* 314 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 316 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 318 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter phProcess */

/* 320 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 322 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 324 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter poxidServer */

/* 326 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 328 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fApartment */

/* 332 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 334 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cOids */

/* 338 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 340 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 342 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Parameter aOid */

/* 344 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 346 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcOidsAllocated */

/* 350 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 352 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 354 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Parameter poxidInfo */

/* 356 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 358 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 360 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */

	/* Parameter pdsaStringBindings */

/* 362 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 364 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 366 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */

	/* Parameter pdsaSecurityBindings */

/* 368 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 370 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 372 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ServerAllocateOIDs */


	/* Return value */

/* 374 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 376 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 378 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 380 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 382 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 384 */	NdrFcShort( 0x30 ),	/* 48 */
/* 386 */	NdrFcShort( 0x10 ),	/* 16 */
/* 388 */	0x5,		/* 5 */
			0x6,		/* 6 */

	/* Parameter hServer */

/* 390 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 392 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 394 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter phProcess */

/* 396 */	NdrFcShort( 0x148 ),	/* 328 */
#ifndef _ALPHA_
/* 398 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 400 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter poxidServer */

/* 402 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 404 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cOids */

/* 408 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 410 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 412 */	NdrFcShort( 0xfe ),	/* Type Offset=254 */

	/* Parameter aOid */

/* 414 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 416 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcOidsAllocated */

/* 420 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 422 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 424 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure ServerFreeOXIDAndOIDs */


	/* Return value */

/* 426 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 428 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 430 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 432 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 434 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 436 */	NdrFcShort( 0x30 ),	/* 48 */
/* 438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 440 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter hServer */

/* 442 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 444 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 446 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter phProcess */

/* 448 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 450 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 452 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter oxidServer */

/* 454 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 456 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cOids */

/* 460 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 462 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 464 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter aOids */

/* 466 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 468 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 470 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  2 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4) */
/*  4 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/*  6 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  8 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 10 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 12 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 14 */	NdrFcShort( 0x2 ),	/* Offset= 2 (16) */
/* 16 */	
			0x12, 0x0,	/* FC_UP */
/* 18 */	NdrFcShort( 0xc ),	/* Offset= 12 (30) */
/* 20 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 22 */	NdrFcShort( 0x2 ),	/* 2 */
/* 24 */	0x7,		/* 7 */
			0x0,		/*  */
/* 26 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 28 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 30 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
/* 34 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (20) */
/* 36 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 38 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 40 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 42 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 44 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 46 */	NdrFcShort( 0x2 ),	/* Offset= 2 (48) */
/* 48 */	
			0x12, 0xa,	/* FC_UP [dont_free] [simple_pointer] */
/* 50 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 52 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 54 */	NdrFcShort( 0x2 ),	/* Offset= 2 (56) */
/* 56 */	
			0x12, 0x2,	/* FC_UP [dont_free] */
/* 58 */	NdrFcShort( 0x2 ),	/* Offset= 2 (60) */
/* 60 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 62 */	NdrFcShort( 0x2 ),	/* 2 */
/* 64 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 66 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 68 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 70 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 72 */	NdrFcShort( 0x2 ),	/* Offset= 2 (74) */
/* 74 */	
			0x12, 0x2,	/* FC_UP [dont_free] */
/* 76 */	NdrFcShort( 0x2 ),	/* Offset= 2 (78) */
/* 78 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 80 */	NdrFcShort( 0x2 ),	/* 2 */
/* 82 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 84 */	NdrFcShort( 0x34 ),	/* x86, MIPS, PPC Stack size/offset = 52 */
#else
			NdrFcShort( 0x68 ),	/* Alpha Stack size/offset = 104 */
#endif
/* 86 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 88 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 90 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 92 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 94 */	NdrFcShort( 0x18 ),	/* 24 */
/* 96 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 98 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 100 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 102 */	NdrFcShort( 0x18 ),	/* 24 */
/* 104 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 106 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 108 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 110 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (92) */
/* 112 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 114 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 116 */	NdrFcShort( 0x4 ),	/* 4 */
/* 118 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 120 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 122 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 124 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 126 */	NdrFcShort( 0x10 ),	/* 16 */
/* 128 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 130 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 132 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 134 */	NdrFcShort( 0x10 ),	/* 16 */
/* 136 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 138 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 140 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 142 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (124) */
/* 144 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 146 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 150 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 154 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 156 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 158 */	NdrFcShort( 0x18 ),	/* 24 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* Offset= 0 (162) */
/* 164 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 166 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 168 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 170 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 178 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 182 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 184 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (156) */
/* 186 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 188 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 190 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 194 */	NdrFcShort( 0x14 ),	/* Offset= 20 (214) */
/* 196 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 200 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 202 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 204 */	NdrFcShort( 0x10 ),	/* 16 */
/* 206 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 208 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 210 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (196) */
			0x5b,		/* FC_END */
/* 214 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 216 */	NdrFcShort( 0x20 ),	/* 32 */
/* 218 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 220 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 222 */	NdrFcShort( 0x1c ),	/* 28 */
/* 224 */	NdrFcShort( 0x1c ),	/* 28 */
/* 226 */	0x12, 0x0,	/* FC_UP */
/* 228 */	NdrFcShort( 0xffffff3a ),	/* Offset= -198 (30) */
/* 230 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 232 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 234 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffdf ),	/* Offset= -33 (202) */
			0x8,		/* FC_LONG */
/* 238 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 240 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 244 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 246 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 248 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 250 */	
			0x11, 0x0,	/* FC_RP */
/* 252 */	NdrFcShort( 0xffffffda ),	/* Offset= -38 (214) */
/* 254 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 258 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 260 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 262 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 264 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 268 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 270 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 272 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */

			0x0
        }
    };
