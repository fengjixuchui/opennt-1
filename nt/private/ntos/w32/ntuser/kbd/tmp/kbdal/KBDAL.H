/****************************** Module Header ******************************\
* Module Name: KBDAL.H
*
* keyboard layout header for Albania
*
* Copyright (c) 1985-95, Microsoft Corporation
*
* Various defines for use by keyboard input code.
*
* History:
*
* created by KBDTOOL Sun Mar 15 00:58:08 2020
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

#undef  T15
#define T15 _EQ(                                        'Z'                      )
#undef  T2C
#define T2C _EQ(                                        'Y'                      )

