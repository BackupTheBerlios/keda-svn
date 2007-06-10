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


#ifndef _KEDAVIEW_H_
#define _KEDAVIEW_H_

#include <qwidget.h>

#include <kparts/part.h>
#include <kedaiface.h>
#include "kedawidget.h"
#include <kprocess.h>

#include "offerwidget.h"
#include "menudatabase.h"

class QPainter;
class KURL;

/**
 * @short This is the main view of Keda.
 * All EDA editing is done here. Simulation is maybe executed in a separate shedular, because of synchronisation.
 * @author sebastian <sebastian.bw@freenet.de>
 * @version 0.1
 */
class KedaView : public KedaWidget, public KedaIface
	{
	Q_OBJECT
	public:
	KedaView(QWidget *parent);
	
	virtual ~KedaView();
	
	#define BOARDS	1
	
	KProcess *co;
	QString currentURL();
	QWidget *lastwidget;
	MenuDatabase *databasemenu;
	OfferWidget *linears, *logicals, *others, *boards, *groups, *ops, *resistors, *diodes,*leds,*diacs, *triacs, *transistors, *tyristors, *capacitors, *coils, *conectors, *switches, *trafos, *heatsinks, *cases, *custom;
	bool LINEARS_EMPTY, LOGICALS_EMPTY, BOARDS_EMPTY;
	
	public slots:
	void openURL(QString url);
	void openURL(const KURL& url);
	void print(QPainter *, int height, int width);
	QWidget* showclicked( QWidget*, QWidget* );
	void start_composer();
	void linears_clicked();
	void logicals_clicked();
	void boards_clicked();
	void custom_clicked();
	void cases_clicked();
	void heatsinks_clicked();
	void trafos_clicked();
	void switches_clicked();
	void conectors_clicked();
	void tyristors_clicked();
	void transistors_clicked();
	void triacs_clicked();
	void diacs_clicked();
	void leds_clicked();
	void diodes_clicked();
	void resistors_clicked();
	void headline_clicked();
	void ops_clicked();
	void coil_clicked();
	void capacitor_clicked();
	void part_group_clicked();
	void others_clicked();
	
	
	signals:
	void signalChangeStatusbar(const QString& text);
	void signalChangeCaption(const QString& text);
	
	private slots:
	void slotOnURL(const QString& url);
	void slotSetTitle(const QString& title);
	
	private:
	KParts::ReadOnlyPart *m_html;
	};

#endif // _KEDAVIEW_H_
