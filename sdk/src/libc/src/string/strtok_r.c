/**
 *	Koala Operating System
 *	Copyright (C) 2010 - 2011 Samy Pess�
 *	
 *	This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundatn 3 of the License, or
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
**/
 

#include <string.h>

char* strtok_r( char* s, const char* delim, char** ptrptr ) {
    char* tmp = NULL;

    if ( s == NULL ) {
        s = *ptrptr;
    }

    s += strspn( s, delim );

    if ( *s ) {
        tmp = s;
        s += strcspn( s, delim );

        if ( *s ) {
            *s++ = 0;
        }
    }

    *ptrptr = s;

    return tmp;
}
