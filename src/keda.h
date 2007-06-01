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


#ifndef _KEDA_H_
#define _KEDA_H_

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <kapplication.h>
#include <kmainwindow.h>

#include "kedaview.h"

class KPrinter;
class KURL;

/**
 * @short Main window class
 * @author sebastian <sebastian.bw@freenet.de>
 * @version 0.1
 */
class Keda : public KMainWindow
	{
	Q_OBJECT
	public:
	Keda();
	~Keda();
	
	KedaView *m_view;
	
	
	
	public slots:
	void load(const KURL& url);
	
	
	private slots:
	void fileNew();
	void fileOpen();
	void fileSave();
	void fileSaveAs();
	void filePrint();
	void optionsPreferences();
	
	void changeStatusbar(const QString& text);
	void changeCaption(const QString& text);
	
	protected:
	virtual void dragEnterEvent(QDragEnterEvent *event);
	virtual void dropEvent(QDropEvent *event);
	
	void saveProperties(KConfig *);
	void readProperties(KConfig *);
	
	private:
	void setupAccel();
	void setupActions();
	
	KPrinter   *m_printer;
	};

#endif // _KEDA_H_

