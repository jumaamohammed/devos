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
 

#ifndef _FCNTL_H_
#define _FCNTL_H_

#include <sys/cdefs.h>
#include <sys/types.h>

#define O_RDONLY   0x01
#define O_WRONLY   0x02
#define O_RDWR     0x03
#define O_CREAT    0x04
#define O_TRUNC    0x08
#define O_APPEND   0x10
#define O_EXCL     0x20
#define O_NONBLOCK 0x40

#define F_DUPFD 0
#define F_GETFD 1
#define F_SETFD 2
#define F_GETFL 3
#define F_SETFL 4

#define FD_CLOEXEC 1

int open( const char* filename, int flags, ... ) __nonnull((1));
int creat( const char* pathname, mode_t mode ) __nonnull((1));
int fcntl( int fd, int cmd, ... );

#endif /* _FCNTL_H_ */
