/***************************************************************************\
* Module Name: KBDCA.C
*
* keyboard layout for Canadian Multilingual
*
* Copyright (c) 1985-95, Microsoft Corporation
*
* History:
* KBDTOOL v1.03 - Created  Tue Oct 08 22:12:03 2019
\***************************************************************************/

#include <windows.h>
#include "vkoem.h"
#include "kbd.h"
#include "kbdCA.h"

/***************************************************************************\
* ausVK[] - Virtual Scan Code to Virtual Key conversion table for Canadian Multilingual
\***************************************************************************/

static USHORT ausVK[] = {
    T00, T01, T02, T03, T04, T05, T06, T07,
    T08, T09, T0A, T0B, T0C, T0D, T0E, T0F,
    T10, T11, T12, T13, T14, T15, T16, T17,
    T18, T19, T1A, T1B, T1C, T1D, T1E, T1F,
    T20, T21, T22, T23, T24, T25, T26, T27,
    T28, T29, T2A, T2B, T2C, T2D, T2E, T2F,
    T30, T31, T32, T33, T34, T35,

    /*
     * Right-hand Shift key must have KBDEXT bit set.
     */
    T36 | KBDEXT,

    T37 | KBDMULTIVK,               // numpad_* + Shift/Alt -> SnapShot

    T38, T39, T3A, T3B, T3C, T3D, T3E,
    T3F, T40, T41, T42, T43, T44,

    /*
     * NumLock Key:
     *     KBDEXT     - VK_NUMLOCK is an Extended key
     *     KBDMULTIVK - VK_NUMLOCK or VK_PAUSE (without or with CTRL)
     */
    T45 | KBDEXT | KBDMULTIVK,

    T46 | KBDMULTIVK,

    /*
     * Number Pad keys:
     *     KBDNUMPAD  - digits 0-9 and decimal point.
     *     KBDSPECIAL - require special processing by Windows
     */
    T47 | KBDNUMPAD | KBDSPECIAL,   // Numpad 7 (Home)
    T48 | KBDNUMPAD | KBDSPECIAL,   // Numpad 8 (Up),
    T49 | KBDNUMPAD | KBDSPECIAL,   // Numpad 9 (PgUp),
    T4A,
    T4B | KBDNUMPAD | KBDSPECIAL,   // Numpad 4 (Left),
    T4C | KBDNUMPAD | KBDSPECIAL,   // Numpad 5 (Clear),
    T4D | KBDNUMPAD | KBDSPECIAL,   // Numpad 6 (Right),
    T4E,
    T4F | KBDNUMPAD | KBDSPECIAL,   // Numpad 1 (End),
    T50 | KBDNUMPAD | KBDSPECIAL,   // Numpad 2 (Down),
    T51 | KBDNUMPAD | KBDSPECIAL,   // Numpad 3 (PgDn),
    T52 | KBDNUMPAD | KBDSPECIAL,   // Numpad 0 (Ins),
    T53 | KBDNUMPAD | KBDSPECIAL,   // Numpad . (Del),

    T54, T55, T56, T57, T58, T59, T5A, T5B,
    T5C, T5D, T5E, T5F, T60, T61, T62, T63,
    T64, T65, T66, T67, T68, T69, T6A, T6B,
    T6C, T6D, T6E, T6F, T70, T71, T72, T73,
    T74, T75, T76, T77, T78, T79, T7A, T7B,
    T7C, T7D, T7E

};

static VSC_VK aE0VscToVk[] = {
        { 0x1C, X1C | KBDEXT              },  // Numpad Entern
        { 0x1D, X1D | KBDEXT              },  // RControln
        { 0x35, X35 | KBDEXT              },  // Numpad Dividen
        { 0x37, X37 | KBDEXT              },  // Snapshotn
        { 0x38, X38 | KBDEXT              },  // RMenun
        { 0x46, X46 | KBDEXT              },  // Break (Ctrl + Pause)
        { 0x47, X47 | KBDEXT              },  // Home
        { 0x48, X48 | KBDEXT              },  // Up
        { 0x49, X49 | KBDEXT              },  // Prior
        { 0x4B, X4B | KBDEXT              },  // Left
        { 0x4D, X4D | KBDEXT              },  // Right
        { 0x4F, X4F | KBDEXT              },  // End
        { 0x50, X50 | KBDEXT              },  // Down
        { 0x51, X51 | KBDEXT              },  // Next
        { 0x52, X52 | KBDEXT              },  // Insert
        { 0x53, X53 | KBDEXT              },  // Delete
        { 0x5B, X5B | KBDEXT              },  // Left Win
        { 0x5C, X5C | KBDEXT              },  // Right Win
        { 0x5D, X5D | KBDEXT              },  // Application
        { 0,      0                       }
};

static VSC_VK aE1VscToVk[] = {
        { 0x1D, Y1D                       },  // Pause
        { 0   ,   0                       }
};

/***************************************************************************\
* aVkToBits[]  - map Virtual Keys to Modifier Bits
*
* See kbd.h for a full description.
*
* Canadian Multilingual Keyboard has only three shifter keys:
*     SHIFT (L & R) affects alphabnumeric keys,
*     CTRL  (L & R) is used to generate control characters
*     ALT   (L & R) used for generating characters by number with numpad
\***************************************************************************/
static VK_TO_BIT aVkToBits[] = {
    { VK_SHIFT,   KBDSHIFT },
    { VK_CONTROL, KBDCTRL  },
    { VK_MENU,    KBDALT   },
    { 0,          0        }
};

/***************************************************************************\
* aModification[]  - map character modifier bits to modification number
*
* See kbd.h for a full description.
*
\***************************************************************************/

static MODIFIERS CharModifiers = {
    &aVkToBits[0],
    6,
    {
    //  Modification# //  Keys Pressed
    //  ============= // =============
        0,            // 
        1,            // Shift
        3,            //   Ctrl
        4,            // S+Ctrl
        SHFT_INVALID, //       Alt
        SHFT_INVALID, // Shift+Alt
        2             //   Ctl+Alt
                      // S+Ctl+Alt
     }
};

/***************************************************************************\
*
* aVkToWch2[]  - Virtual Key to WCHAR translation for 2 shift states
* aVkToWch3[]  - Virtual Key to WCHAR translation for 3 shift states
* aVkToWch4[]  - Virtual Key to WCHAR translation for 4 shift states
* aVkToWch5[]  - Virtual Key to WCHAR translation for 5 shift states
*
* Table attributes: Unordered Scan, null-terminated
*
* Search this table for an entry with a matching Virtual Key to find the
* corresponding unshifted and shifted WCHAR characters.
*
* Special values for VirtualKey (column 1)
*     0xff          - dead chars for the previous entry
*     0             - terminate the list
*
* Special values for Attributes (column 2)
*     CAPLOK bit    - CAPS-LOCK affect this key like SHIFT
*
* Special values for wch[*] (column 3 & 4)
*     WCH_NONE      - No character
*     WCH_DEAD      - Dead Key (diaresis) or invalid (US keyboard has none)
*
\***************************************************************************/

static VK_TO_WCHARS2 aVkToWch2[] = {
//                      |         |  Shift  |
//                      |=========|=========|
  {'Q'          ,CAPLOK ,'q'      ,'Q'      },
  {'W'          ,CAPLOK ,'w'      ,'W'      },
  {'E'          ,CAPLOK ,'e'      ,'E'      },
  {'R'          ,CAPLOK ,'r'      ,'R'      },
  {'T'          ,CAPLOK ,'t'      ,'T'      },
  {'Y'          ,CAPLOK ,'y'      ,'Y'      },
  {'U'          ,CAPLOK ,'u'      ,'U'      },
  {'I'          ,CAPLOK ,'i'      ,'I'      },
  {'A'          ,CAPLOK ,'a'      ,'A'      },
  {'S'          ,CAPLOK ,'s'      ,'S'      },
  {'D'          ,CAPLOK ,'d'      ,'D'      },
  {'F'          ,CAPLOK ,'f'      ,'F'      },
  {'G'          ,CAPLOK ,'g'      ,'G'      },
  {'H'          ,CAPLOK ,'h'      ,'H'      },
  {'J'          ,CAPLOK ,'j'      ,'J'      },
  {'K'          ,CAPLOK ,'k'      ,'K'      },
  {'L'          ,CAPLOK ,'l'      ,'L'      },
  {'Z'          ,CAPLOK ,'z'      ,'Z'      },
  {'X'          ,CAPLOK ,'x'      ,'X'      },
  {'C'          ,CAPLOK ,'c'      ,'C'      },
  {'V'          ,CAPLOK ,'v'      ,'V'      },
  {'B'          ,CAPLOK ,'b'      ,'B'      },
  {'N'          ,CAPLOK ,'n'      ,'N'      },
  {VK_DECIMAL   ,0      ,'.'      ,'.'      },
  {VK_TAB       ,0      ,'\t'     ,'\t'     },
  {VK_ADD       ,0      ,'+'      ,'+'      },
  {VK_DIVIDE    ,0      ,'/'      ,'/'      },
  {VK_MULTIPLY  ,0      ,'*'      ,'*'      },
  {VK_SUBTRACT  ,0      ,'-'      ,'-'      },
  {0            ,0      ,0        ,0        }
};

static VK_TO_WCHARS3 aVkToWch3[] = {
//                      |         |  Shift  |  Ctl+Alt|
//                      |=========|=========|=========|
  {'1'          ,0      ,'1'      ,'!'      ,0x00b1   },
  {'2'          ,0      ,'2'      ,'\"'     ,'@'      },
  {'3'          ,0      ,'3'      ,'/'      ,0x00a3   },
  {'4'          ,0      ,'4'      ,'$'      ,0x00a2   },
  {'5'          ,0      ,'5'      ,'%'      ,0x00a4   },
  {'7'          ,0      ,'7'      ,'&'      ,0x00a6   },
  {'8'          ,0      ,'8'      ,'*'      ,0x00b2   },
  {'9'          ,0      ,'9'      ,'('      ,0x00b3   },
  {'0'          ,0      ,'0'      ,')'      ,0x00bc   },
  {VK_OEM_PLUS  ,0      ,'='      ,'+'      ,0x00be   },
  {'O'          ,CAPLOK ,'o'      ,'O'      ,0x00a7   },
  {'P'          ,CAPLOK ,'p'      ,'P'      ,0x00b6   },
  {VK_OEM_1     ,0      ,';'      ,':'      ,'~'      },
  {VK_OEM_3     ,0      ,WCH_DEAD ,WCH_DEAD ,'{'      },
  {0xff         ,0      ,'`'      ,'`'      ,WCH_NONE },
  {VK_OEM_7     ,0      ,'#'      ,'|'      ,'\\'     },
  {'M'          ,CAPLOK ,'m'      ,'M'      ,0x00b5   },
  {VK_OEM_COMMA ,0      ,','      ,'\''     ,0x00af   },
  {VK_OEM_PERIOD,0      ,'.'      ,'.'      ,0x00ad   },
  {VK_OEM_2     ,0      ,0x00e9   ,0x00c9   ,WCH_DEAD },
  {0xff         ,0      ,WCH_NONE ,WCH_NONE ,0x00b4   },
  {0            ,0      ,0        ,0        ,0        }
};

static VK_TO_WCHARS4 aVkToWch4[] = {
//                      |         |  Shift  |  Ctl+Alt|  Ctrl   |
//                      |=========|=========|=========|=========|
  {VK_OEM_MINUS ,0      ,'-'      ,'_'      ,0x00bd   ,0x001f   },
  {VK_OEM_4     ,0      ,WCH_DEAD ,WCH_DEAD ,'['      ,0x001b   },
  {0xff         ,0      ,'^'      ,'^'      ,WCH_NONE ,WCH_NONE },
  {VK_OEM_6     ,0      ,WCH_DEAD ,WCH_DEAD ,']'      ,0x001d   },
  {0xff         ,0      ,0x00b8   ,0x00a8   ,WCH_NONE ,WCH_NONE },
  {VK_OEM_5     ,0      ,'<'      ,'>'      ,'}'      ,0x001c   },
  {VK_OEM_102   ,0      ,0x00ab   ,0x00bb   ,0x00b0   ,0x001c   },
  {VK_BACK      ,0      ,'\b'     ,'\b'     ,WCH_NONE ,0x007f   },
  {VK_CANCEL    ,0      ,0x0003   ,0x0003   ,WCH_NONE ,0x0003   },
  {VK_ESCAPE    ,0      ,0x001b   ,0x001b   ,WCH_NONE ,0x001b   },
  {VK_RETURN    ,0      ,'\r'     ,'\r'     ,WCH_NONE ,'\n'     },
  {VK_SPACE     ,0      ,' '      ,' '      ,WCH_NONE ,' '      },
  {0            ,0      ,0        ,0        ,0        ,0        }
};

static VK_TO_WCHARS5 aVkToWch5[] = {
//                      |         |  Shift  |  Ctl+Alt|  Ctrl   |S+Ctrl   |
//                      |=========|=========|=========|=========|=========|
  {'6'          ,0      ,'6'      ,'?'      ,0x00ac   ,WCH_NONE ,0x001e   },
  {0            ,0      ,0        ,0        ,0        ,0        ,0        }
};

// Put this last so that VkKeyScan interprets number characters
// as coming from the main section of the kbd (aVkToWch2 and
// aVkToWch5) before considering the numpad (aVkToWch1).

static VK_TO_WCHARS1 aVkToWch1[] = {
    { VK_NUMPAD0   , 0      ,  '0'   },
    { VK_NUMPAD1   , 0      ,  '1'   },
    { VK_NUMPAD2   , 0      ,  '2'   },
    { VK_NUMPAD3   , 0      ,  '3'   },
    { VK_NUMPAD4   , 0      ,  '4'   },
    { VK_NUMPAD5   , 0      ,  '5'   },
    { VK_NUMPAD6   , 0      ,  '6'   },
    { VK_NUMPAD7   , 0      ,  '7'   },
    { VK_NUMPAD8   , 0      ,  '8'   },
    { VK_NUMPAD9   , 0      ,  '9'   },
    { 0            , 0      ,  '\0'  }
};

static VK_TO_WCHAR_TABLE aVkToWcharTable[] = {
    {  (PVK_TO_WCHARS1)aVkToWch3, 3, sizeof(aVkToWch3[0]) },
    {  (PVK_TO_WCHARS1)aVkToWch4, 4, sizeof(aVkToWch4[0]) },
    {  (PVK_TO_WCHARS1)aVkToWch5, 5, sizeof(aVkToWch5[0]) },
    {  (PVK_TO_WCHARS1)aVkToWch2, 2, sizeof(aVkToWch2[0]) },
    {  (PVK_TO_WCHARS1)aVkToWch1, 1, sizeof(aVkToWch1[0]) },
    {                       NULL, 0, 0                    },
};

/***************************************************************************\
* aKeyNames[], aKeyNamesExt[]  - Virtual Scancode to Key Name tables
*
* Table attributes: Ordered Scan (by scancode), null-terminated
*
* Only the names of Extended, NumPad, Dead and Non-Printable keys are here.
* (Keys producing printable characters are named by that character)
\***************************************************************************/

static VSC_LPWSTR aKeyNames[] = {
    0x01,    L"ECHAP",
    0x0e,    L"RET.ARR",
    0x0f,    L"TAB",
    0x1c,    L"ENTREE",
    0x1d,    L"CTRL",
    0x2a,    L"MAJ",
    0x36,    L"MAJ DROITE",
    0x37,    L"* (PAVE NUM.)",
    0x38,    L"ALT",
    0x39,    L"ESPACE",
    0x3a,    L"VERR.MAJ",
    0x3b,    L"F1",
    0x3c,    L"F2",
    0x3d,    L"F3",
    0x3e,    L"F4",
    0x3f,    L"F5",
    0x40,    L"F6",
    0x41,    L"F7",
    0x42,    L"F8",
    0x43,    L"F9",
    0x44,    L"F10",
    0x45,    L"Pause",
    0x46,    L"DEFIL",
    0x47,    L"7 (PAVE NUM.)",
    0x48,    L"8 (PAVE NUM.)",
    0x49,    L"9 (PAVE NUM.)",
    0x4a,    L"- (PAVE NUM.)",
    0x4b,    L"4 (PAVE NUM.)",
    0x4c,    L"5 (PAVE NUM.)",
    0x4d,    L"6 (PAVE NUM.)",
    0x4e,    L"+ (PAVE NUM.)",
    0x4f,    L"1 (PAVE NUM.)",
    0x50,    L"2 (PAVE NUM.)",
    0x51,    L"3 (PAVE NUM.)",
    0x52,    L"0 (PAVE NUM.)",
    0x53,    L". (PAVE NUM.)",
    0x57,    L"F11",
    0x58,    L"F12",
    0   ,    NULL
};

static VSC_LPWSTR aKeyNamesExt[] = {
    0x1c,    L"ENTREE (PAVE NUM.)",
    0x1d,    L"CTRL DROITE",
    0x35,    L"/ (PAVE NUM.)",
    0x37,    L"Impr.Ecran",
    0x38,    L"ALT DROITE",
    0x45,    L"Ver.Num",
    0x46,    L"ATTN",
    0x47,    L"ORIGINE",
    0x48,    L"HAUT",
    0x49,    L"PG.PREC",
    0x4b,    L"GAUCHE",
    0x4d,    L"DROITE",
    0x4f,    L"FIN",
    0x50,    L"BAS",
    0x51,    L"PG.SUIV",
    0x52,    L"INS",
    0x53,    L"SUPPR",
    0x54,    L"<00>",
    0x56,    L"AIDE",
    0x5b,    L"WINDOWS GAUCHE",
    0x5c,    L"WINDOWS DROITE",
    0x5d,    L"APPLICATION",
    0   ,    NULL
};

static LPWSTR aKeyNamesDead[] = {
    L"\x00b4"	L"ACCENT AIGU",
    L"`"	L"ACCENT GRAVE",
    L"^"	L"ACCENT CIRCONFLEXE",
    L"\x00a8"	L"TREMA",
    L"\x00b8"	L"CEDILLE",
    NULL
};

static DEADKEY aDeadKey[] = {
    DEADTRANS( L'a'   , 0x00b4 , 0x00e1 ),
    DEADTRANS( L'e'   , 0x00b4 , 0x00e9 ),
    DEADTRANS( L'i'   , 0x00b4 , 0x00ed ),
    DEADTRANS( L'o'   , 0x00b4 , 0x00f3 ),
    DEADTRANS( L'u'   , 0x00b4 , 0x00fa ),
    DEADTRANS( L'y'   , 0x00b4 , 0x00fd ),
    DEADTRANS( L'A'   , 0x00b4 , 0x00c1 ),
    DEADTRANS( L'E'   , 0x00b4 , 0x00c9 ),
    DEADTRANS( L'I'   , 0x00b4 , 0x00cd ),
    DEADTRANS( L'O'   , 0x00b4 , 0x00d3 ),
    DEADTRANS( L'U'   , 0x00b4 , 0x00da ),
    DEADTRANS( L'Y'   , 0x00b4 , 0x00dd ),
    DEADTRANS( L' '   , 0x00b4 , 0x00b4 ),

    DEADTRANS( L'a'   , L'`'   , 0x00e0 ),
    DEADTRANS( L'e'   , L'`'   , 0x00e8 ),
    DEADTRANS( L'i'   , L'`'   , 0x00ec ),
    DEADTRANS( L'o'   , L'`'   , 0x00f2 ),
    DEADTRANS( L'u'   , L'`'   , 0x00f9 ),
    DEADTRANS( L'A'   , L'`'   , 0x00c0 ),
    DEADTRANS( L'E'   , L'`'   , 0x00c8 ),
    DEADTRANS( L'I'   , L'`'   , 0x00cc ),
    DEADTRANS( L'O'   , L'`'   , 0x00d2 ),
    DEADTRANS( L'U'   , L'`'   , 0x00d9 ),
    DEADTRANS( L' '   , L'`'   , L'`'   ),

    DEADTRANS( L'a'   , L'^'   , 0x00e2 ),
    DEADTRANS( L'e'   , L'^'   , 0x00ea ),
    DEADTRANS( L'i'   , L'^'   , 0x00ee ),
    DEADTRANS( L'o'   , L'^'   , 0x00f4 ),
    DEADTRANS( L'u'   , L'^'   , 0x00fb ),
    DEADTRANS( L'A'   , L'^'   , 0x00c2 ),
    DEADTRANS( L'E'   , L'^'   , 0x00ca ),
    DEADTRANS( L'I'   , L'^'   , 0x00ce ),
    DEADTRANS( L'O'   , L'^'   , 0x00d4 ),
    DEADTRANS( L'U'   , L'^'   , 0x00db ),
    DEADTRANS( L' '   , L'^'   , L'^'   ),

    DEADTRANS( L'c'   , 0x00b8 , 0x00e7 ),
    DEADTRANS( L'C'   , 0x00b8 , 0x00c7 ),
    DEADTRANS( L' '   , 0x00b8 , 0x00b8 ),

    DEADTRANS( L'a'   , 0x00a8 , 0x00e4 ),
    DEADTRANS( L'e'   , 0x00a8 , 0x00eb ),
    DEADTRANS( L'i'   , 0x00a8 , 0x00ef ),
    DEADTRANS( L'o'   , 0x00a8 , 0x00f6 ),
    DEADTRANS( L'u'   , 0x00a8 , 0x00fc ),
    DEADTRANS( L'y'   , 0x00a8 , 0x00ff ),
    DEADTRANS( L'A'   , 0x00a8 , 0x00c4 ),
    DEADTRANS( L'E'   , 0x00a8 , 0x00cb ),
    DEADTRANS( L'I'   , 0x00a8 , 0x00cf ),
    DEADTRANS( L'O'   , 0x00a8 , 0x00d6 ),
    DEADTRANS( L'U'   , 0x00a8 , 0x00dc ),
    DEADTRANS( L' '   , 0x00a8 , 0x00a8 ),

    0, 0
};

static KBDTABLES KbdTables = {
    /*
     * Modifier keys
     */
    &CharModifiers,

    /*
     * Characters tables
     */
    aVkToWcharTable,

    /*
     * Diacritics
     */
    aDeadKey,

    /*
     * Names of Keys
     */
    aKeyNames,
    aKeyNamesExt,
    aKeyNamesDead,

    /*
     * Scan codes to Virtual Keys
     */
    ausVK,
    sizeof(ausVK) / sizeof(ausVK[0]),
    aE0VscToVk,
    aE1VscToVk,

    /*
     * Locale-specific special processing
     */
    KLLF_ALTGR
};

PKBDTABLES KbdLayerDescriptor(VOID)
{
    return &KbdTables;
}
