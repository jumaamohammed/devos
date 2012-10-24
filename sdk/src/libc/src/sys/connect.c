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
 

#include <errno.h>
#include <sys/socket.h>

#include <os.h>

int connect( int fd, const struct sockaddr* address, socklen_t addrlen ) {
    int error;

    error = syscall3( SYS_connect, fd, ( int )address, addrlen );

    if ( error < 0 ) {
        errno = -error;
        return -1;
    }

    return 0;
}
