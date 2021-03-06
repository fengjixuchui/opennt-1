/***
*mbscmp.c - Compare MBCS strings
*
*	Copyright (c) 1985-1994, Microsoft Corporation.  All rights reserved.
*
*Purpose:
*	Compare MBCS strings
*
*Revision History:
*	11-19-92  KRS	Ported from 16-bit sources.
*	10-05-93  GJF	Replaced _CRTAPI1 with __cdecl.
*       04-12-94  CFW	Make function generic.
*       05-05-94  CFW	Work around NT/Chico bug: CompareString ignores
*                       control characters.
*	05-09-94  CFW	Optimize for SBCS, no re-scan if CompareString fixed.
*	05-12-94  CFW	Back to hard-coded, CompareString sort is backwards.
*       05-19-94  CFW	Enable non-Win32.
*
*******************************************************************************/

#ifdef _MBCS

#include <mtdll.h>
#include <cruntime.h>
#include <mbdata.h>
#include <mbctype.h>
#include <string.h>
#include <mbstring.h>

/***
* _mbscmp - Compare MBCS strings
*
*Purpose:
*	Compares two strings for lexical order.   Strings
*	are compared on a character basis, not a byte basis.
*
*Entry:
*	char *s1, *s2 = strings to compare
*
*Exit:
*       returns <0 if s1 < s2
*	returns  0 if s1 == s2
*       returns >0 if s1 > s2
*
*Exceptions:
*
*******************************************************************************/

int __cdecl _mbscmp(
    const unsigned char *s1,
    const unsigned char *s2
    )
{
        unsigned short c1, c2;

        if (0 == __mbcodepage)
            return strcmp(s1, s2);

        _mlock(_MB_CP_LOCK);

        for (;;) {

            c1 = *s1++;
            if (_ISLEADBYTE(c1))
                c1 = ( (*s1 == '\0') ? 0 : ((c1<<8) | *s1++) );

            c2 = *s2++;
            if (_ISLEADBYTE(c2))
                c2 = ( (*s2 == '\0') ? 0 : ((c2<<8) | *s2++) );

            if (c1 != c2)
            {
                _munlock(_MB_CP_LOCK);
                return (c1 > c2) ? 1 : -1;
            }

            if (c1 == 0)
            {
                _munlock(_MB_CP_LOCK);
                return 0;
            }

	}

}

#endif	/* _MBCS */
