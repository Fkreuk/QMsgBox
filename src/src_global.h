/*
 * QMsgBox - Fix QMessageBox icon not being displayed in some Qt styles
 * Copyright (C) 2009  Gustavo Ribeiro Croscato
 *
 * QMsgBox is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QMsgBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Contact info: croscato (at) gmail (dot) com
*/

#ifndef SRC_GLOBAL_H
#define SRC_GLOBAL_H

#include <QtGlobal>

#if defined(SRC_LIBRARY)
#  define SRCSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SRCSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SRC_GLOBAL_H
