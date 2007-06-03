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


#ifndef _COMPOSERVIEW_H_
#define _COMPOSERVIEW_H_

#include <qwidget.h>
#include <kparts/part.h>
#include <composeriface.h>

#include "composerwidget.h"
#include "transistor.h"

class QPainter;
class KURL;

/**
 * @short Main view
 * @author sebastian <sebastian.bw@freenet.de>
 * @version 0.1
 */
class ComposerView : public ComposerWidget, public ComposerIface
	{
	Q_OBJECT
	public:
	ComposerView(QWidget *parent);
	virtual ~ComposerView();
	
	QString currentURL();
	QWidget *w, *r, *d;
	Transistor *t;
	
	public slots:
	void openURL(QString url);
	void openURL(const KURL& url);
	void print(QPainter *, int height, int width);
	QWidget* w_show( QWidget*, QWidget* );
	void t_type_changed(int);	//parentWidget()->parentWidget()->parentWidget()->parentWidget()
	
	signals:
	void signalChangeStatusbar(const QString& text);
	void signalChangeCaption(const QString& text);
	
	private slots:
	void slotOnURL(const QString& url);
	void slotSetTitle(const QString& title);
	void character_chosen(int);
	void resizeEvent( QResizeEvent* );
	
	private:
	KParts::ReadOnlyPart *m_html;
	};

#endif // _COMPOSERVIEW_H_
