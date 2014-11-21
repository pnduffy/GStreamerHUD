/*
    Copyright (C) 2010 Marco Ballesio <gibrovacco@gmail.com>
    Copyright (C) 2011 Collabora Ltd.
      @author George Kiagiadakis <george.kiagiadakis@collabora.co.uk>

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTGSTREAMER_H
#define QTGSTREAMER_H

#if defined(QTGSTREAMERHUD_EXPORTS)
# define QTGSTREAMERHUD_EXPORT __declspec(dllexport)
#else
# define QTGSTREAMERHUD_EXPORT __declspec(dllimport)
#endif

#include "CCurrentState.h"

QTGSTREAMERHUD_EXPORT int InitHUDApp(int argc, char *argv[]);
QTGSTREAMERHUD_EXPORT void InitQGst();
QTGSTREAMERHUD_EXPORT void ExitHUDApp();
QTGSTREAMERHUD_EXPORT void SetCurrentState(CCurrentState &theState);

#endif