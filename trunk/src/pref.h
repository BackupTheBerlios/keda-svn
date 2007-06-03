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


#ifndef _KEDAPREF_H_
#define _KEDAPREF_H_

#include <kdialogbase.h>
#include <qframe.h>

class KedaPrefPageOne;
class KedaPrefPageTwo;

class KedaPreferences : public KDialogBase
{
    Q_OBJECT
public:
    KedaPreferences();

private:
    KedaPrefPageOne *m_pageOne;
    KedaPrefPageTwo *m_pageTwo;
};

class KedaPrefPageOne : public QFrame
{
    Q_OBJECT
public:
    KedaPrefPageOne(QWidget *parent = 0);
};

class KedaPrefPageTwo : public QFrame
{
    Q_OBJECT
public:
    KedaPrefPageTwo(QWidget *parent = 0);
};

#endif // _KEDAPREF_H_
