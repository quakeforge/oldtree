/*
input.h
Copyright (C) 1996-1997 Id Software, Inc.
Copyright (C) 1999,2000  contributors of the QuakeForge project
Please see the file "AUTHORS" for a list of contributors

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#ifndef __CONTEXT_X11_H__
#define __CONTEXT_X11_H__

#include <qtypes.h>
#include <X11/Xlib.h>

void GetEvent();

extern Display	*x_disp;
extern Window	x_win;
extern qboolean	doShm;
extern int	x_shmeventtype;
extern qboolean	oktodraw;

extern qboolean x11_add_event(int event, void (*event_handler)(XEvent *));
extern qboolean x11_del_event(int event, void (*event_handler)(XEvent *));
extern void x11_process_event(void);
extern void x11_process_events(void);

#endif	// __CONTEXT_X11_H__