/***************************************************************************
 *   Copyright (C) 2007 by sebastian   *
 *   sebastian.bw@freenet.de   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


#ifndef _COMPOSERPREF_H_
#define _COMPOSERPREF_H_

#include <kdialogbase.h>
#include <qframe.h>

class ComposerPrefPageOne;
class ComposerPrefPageTwo;

class ComposerPreferences : public KDialogBase
{
    Q_OBJECT
public:
    ComposerPreferences();

private:
    ComposerPrefPageOne *m_pageOne;
    ComposerPrefPageTwo *m_pageTwo;
};

class ComposerPrefPageOne : public QFrame
{
    Q_OBJECT
public:
    ComposerPrefPageOne(QWidget *parent = 0);
};

class ComposerPrefPageTwo : public QFrame
{
    Q_OBJECT
public:
    ComposerPrefPageTwo(QWidget *parent = 0);
};

#endif // _COMPOSERPREF_H_
