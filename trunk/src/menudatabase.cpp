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
#include "menudatabase.h" 
#include <qpopupmenu.h>
#include <qpoint.h>

#include "keda.h"

MenuDatabase::MenuDatabase( QWidget *parent ) : QPopupMenu( parent )
	{
	insertItem( "Create a part", parent, SLOT( start_composer() ) );
	insertItem( "Edit Database",  this, SLOT( openDatabaseComposer() ) );
	insertItem( "Adjust Database",  this, SLOT( openDatabaseComposer() ) );
	insertItem( "Replace local Database",  this, SLOT( openDatabaseComposer() ) );
	insertItem( "Search a part",  this, SLOT( openDatabaseComposer() ) );
	}


MenuDatabase::~MenuDatabase()
	{
	}

void MenuDatabase::popup( QWidget *rel )
	{
	QPopupMenu::popup( rel->mapToGlobal( rel->pos()+QPoint( 0, rel->height() ) ) );
	}




