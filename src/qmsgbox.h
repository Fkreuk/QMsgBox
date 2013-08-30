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

#ifndef QMSGBOX_H
#define QMSGBOX_H

#include <QtGlobal>

#if QT_VERSION >= 0x050000
#include <QtWidgets/QMessageBox>
#else
#include <QtGui/QMessageBox>
#endif

#if defined(SRC_LIBRARY)
#  define SRCSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SRCSHARED_EXPORT Q_DECL_IMPORT
#endif

class SRCSHARED_EXPORT QMsgBox : public QMessageBox
{
    Q_OBJECT

    public:
        static StandardButton warning(QWidget* parent, const QString& title, const QString& text,
                                      StandardButtons buttons = Ok,
                                      StandardButton defaultButton = NoButton);

        static StandardButton critical(QWidget* parent, const QString& title, const QString& text,
                                       StandardButtons buttons = Ok,
                                       StandardButton defaultButton = NoButton);

        static StandardButton information(QWidget* parent, const QString& title,
                                          const QString& text, StandardButtons buttons = Ok,
                                          StandardButton defaultButton = NoButton);

        static StandardButton question(QWidget* parent, const QString& title, const QString& text,
                                       StandardButtons buttons = Ok,
                                       StandardButton defaultButton = NoButton);
};

#endif // QMSGBOX_H
