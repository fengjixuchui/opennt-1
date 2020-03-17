/****************************** Module Header ******************************\
* Module Name: KBDLV.H
*
* keyboard layout header for Latvia
*
* Copyright (c) 1985-95, Microsoft Corporation
*
* Various defines for use by keyboard input code.
*
* History:
*
* created by KBDTOOL Sun Mar 15 00:58:18 2020
*
\***************************************************************************/

/*
 * kbd type should be controlled by cl command-line argument
#define KBD_TYPE 4

/*
* Include the basis of all keyboard table values
*/
#include "kbd.h"

/***************************************************************************\
* The table below defines the virtual keys for various keyboard types where
* the keyboard differ from the US keyboard.
*
* _EQ() : all keyboard types have the same virtual key for this scancode
* _NE() : different virtual keys for this scancode, depending on kbd type
*
*     +------+ +----------+----------+----------+----------+----------+----------+
*     | Scan | |    kbd   |    kbd   |    kbd   |    kbd   |    kbd   |    kbd   |
*     | code | |   type 1 |   type 2 |   type 3 |   type 4 |   type 5 |   type 6 |
\****+-------+_+----------+----------+----------+----------+----------+----------+*/

#undef  T0D
#define T0D _EQ(                                        'F'                      )
#undef  T11
#define T11 _EQ(                                        'G'                      )
#undef  T12
#define T12 _EQ(                                        'J'                      )
#undef  T14
#define T14 _EQ(                                        'M'                      )
#undef  T15
#define T15 _EQ(                                        'V'                      )
#undef  T16
#define T16 _EQ(                                        'N'                      )
#undef  T17
#define T17 _EQ(                                        'Z'                      )
#undef  T18
#define T18 _EQ(                                        'W'                      )
#undef  T19
#define T19 _EQ(                                        'X'                      )
#undef  T1A
#define T1A _EQ(                                        'Y'                      )
#undef  T1B
#define T1B _EQ(                                        'H'                      )
#undef  T1E
#define T1E _EQ(                                      OEM_1                      )
#undef  T1F
#define T1F _EQ(                                        'U'                      )
#undef  T20
#define T20 _EQ(                                        'S'                      )
#undef  T21
#define T21 _EQ(                                        'I'                      )
#undef  T22
#define T22 _EQ(                                        'L'                      )
#undef  T23
#define T23 _EQ(                                        'D'                      )
#undef  T24
#define T24 _EQ(                                        'A'                      )
#undef  T25
#define T25 _EQ(                                        'T'                      )
#undef  T26
#define T26 _EQ(                                        'E'                      )
#undef  T27
#define T27 _EQ(                                        'C'                      )
#undef  T2C
#define T2C _EQ(                                      OEM_4                      )
#undef  T2D
#define T2D _EQ(                                        'B'                      )
#undef  T2E
#define T2E _EQ(                                      OEM_6                      )
#undef  T2F
#define T2F _EQ(                                        'K'                      )
#undef  T30
#define T30 _EQ(                                        'P'                      )
#undef  T31
#define T31 _EQ(                                        'O'                      )
#undef  T32
#define T32 _EQ(                                      OEM_8                      )

