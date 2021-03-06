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
#ifndef KEDAPCBVIEW_H
#define KEDAPCBVIEW_H

#include <qwidget.h>

#include "kedawidget.h"
#include <kprocess.h>

/**
 * @short This is the main view of PCB mode.
 *The whole PCB editing is done here. Evaluation of Auto Manager as well.
 * @author sebastian <sebastian.bw@freenet.de>
 * @version 0.1
 */
class KedaPCBView : public QWidget
	{
	Q_OBJECT
	public:
	KedaPCBView( QWidget *parent );
	
	virtual ~KedaPCBView();
		
	};
	
#endif
