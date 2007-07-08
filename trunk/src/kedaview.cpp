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


#include "kedaview.h"
#include "kedawidget.h"

#include <qpainter.h>
#include <qlayout.h>
#include <qlabel.h>
#include <qtoolbutton.h>
#include <qpoint.h>
#include <qpopupmenu.h>

#include <kurl.h>

#include <ktrader.h>
#include <klibloader.h>
#include <kmessagebox.h>
#include <krun.h>
#include <klocale.h>

#include "offerwidget.h"


KedaView::KedaView(QWidget *parent): DCOPObject("KedaIface"), KedaWidget(parent)
	{
	// we want to look for all components that satisfy our needs.  the
	// trader will actually search through *all* registered KDE
	// applications and components -- not just KParts.  So we have to
	// specify two things: a service type and a constraint
	//
	// the service type is like a mime type.  we say that we want all
	// applications and components that can handle HTML -- 'text/html'
	//
	// however, by itself, this will return such things as Netscape..
	// not what we wanted.  so we constrain it by saying that the
	// string 'KParts/ReadOnlyPart' must be found in the ServiceTypes
	// field.  with this, only components of the type we want will be
	// returned.
	KTrader::OfferList offers = KTrader::self()->query("text/html", "'KParts/ReadOnlyPart' in ServiceTypes");
	
	KLibFactory *factory = 0;
	// in theory, we only care about the first one.. but let's try all
	// offers just in case the first can't be loaded for some reason
	KTrader::OfferList::Iterator it(offers.begin());
	for( ; it != offers.end(); ++it)
	{
		KService::Ptr ptr = (*it);
	
		// we now know that our offer can handle HTML and is a part.
		// since it is a part, it must also have a library... let's try to
		// load that now
		factory = KLibLoader::self()->factory( ptr->library() );
		if (factory)
		{
			m_html = NULL;      /* static_cast<KParts::ReadOnlyPart *>(factory->create( this->Layout, ptr->name(), "KParts::ReadOnlyPart") );*/
			break;
		}
	}
	
	// if our factory is invalid, then we never found our component
	// and we might as well just exit now
	if (!factory)
	{
		KMessageBox::error(this, i18n("Could not find a suitable HTML component"));
		return;
	}
	sim = new SimulationView( 0 ); sim->hide();
	boards = new OfferWidget( "Boards", this ); boards->move( 126, 0 );
	connect( boards->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	groups = new OfferWidget( "Part groups", this ); groups->move( 126, 0 );
	connect( groups->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	logicals = new OfferWidget( "Logical ICs", this ); logicals->move( 126, 0 );
	connect( logicals->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	linears = new OfferWidget( "Linear ICs", this ); linears->move( 126, 0 );
	connect( linears->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	others = new OfferWidget( "Other ICs", this ); others->move( 126, 0 );
	connect( others->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	ops = new OfferWidget( "OPs", this ); ops->move( 126, 0 );
	connect( ops->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	resistors = new OfferWidget( "Resistors", this ); resistors->move( 126, 0 );
	connect( resistors->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	diodes = new OfferWidget( "Diodes", this ); diodes->move( 126, 0 );
	connect( diodes->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	leds = new OfferWidget( "LEDs", this ); leds->move( 126, 0 );
	connect( leds->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	diacs = new OfferWidget( "Diacs", this ); diacs->move( 126, 0 );
	connect( diacs->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	triacs = new OfferWidget( "Triacs", this ); triacs->move( 126, 0 );
	connect( triacs->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	transistors = new OfferWidget( "Transistors", this ); transistors->move( 126, 0 );
	connect( transistors->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	tyristors = new OfferWidget( "Tyristors", this ); tyristors->move( 126, 0 );
	connect( tyristors->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	capacitors = new OfferWidget( "Capacitors", this ); capacitors->move( 126, 0 );
	connect( capacitors->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	coils = new OfferWidget( "Coils", this ); coils->move( 126, 0 );
	connect( coils->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	conectors = new OfferWidget( "Conectors", this ); conectors->move( 126, 0 );
	connect( conectors->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	switches = new OfferWidget( "Switches", this ); switches->move( 126, 0 );
	connect( switches->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	trafos = new OfferWidget( "Power supply", this ); trafos->move( 126, 0 );
	connect( trafos->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	heatsinks = new OfferWidget( "Heat sinks", this ); heatsinks->move( 126, 0 );
	connect( heatsinks->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	cases = new OfferWidget( "Cases", this ); cases->move( 126, 0 );
	connect( cases->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	custom = new OfferWidget( "Custom", this ); custom->move( 126, 0 );
	connect( custom->headline, SIGNAL( clicked() ), this, SLOT( headline_clicked() ) );
	
	databasemenu= new MenuDatabase( this );
	lastwidget = boards;
	
	co = new KProcess( this );
	*co << "composer";
	
// 	connect(m_html, SIGNAL(setWindowCaption(const QString&)),
// 			this,   SLOT(slotSetTitle(const QString&)));
// 	connect(m_html, SIGNAL(setStatusBarText(const QString&)),
// 			this,   SLOT(slotOnURL(const QString&)));
	
	}

KedaView::~KedaView()
	{
	}

void KedaView::print(QPainter *p, int height, int width)
	{
	// do the actual printing, here
	// p->drawText(etc..)
	}

/**
 * Maybe this will be used in future
 * @return 
 */
QString KedaView::currentURL()
	{
	return m_html->url().url();
	}

/**
 * Maybe this will be used in future
 * @param url 
 */
void KedaView::openURL(QString url)
	{
// 	openURL(KURL(url));
	}

/**
 * Maybe this will be used in future
 * @param url 
 */
void KedaView::openURL(const KURL& url)
	{
// 	m_html->openURL(url);
	}

void KedaView::slotOnURL(const QString& url)
	{
// 	emit signalChangeStatusbar(url);
	}

void KedaView::slotSetTitle(const QString& title)
	{
// 	emit signalChangeCaption(title);
	}

/**
 * This is the popup handler for the left buttons.
 * @param n 
 * @param lastwidget 
 * @return 
 */
QWidget* KedaView::showclicked( QWidget *n, QWidget *lastwidget )
	{
	if( lastwidget->isVisible() )
		{
		if( lastwidget == n )
			{
			lastwidget->hide();
			return n;
			}
		
		lastwidget->hide();
		n->show();
		}
	else
		n->show();
	
	return n;
	}

/**
 * Here all is handled if this left button is clicked. (The button can be clicked to hide the Popup Widget)
 */
void KedaView::boards_clicked()
	{
	lastwidget = showclicked( boards,  lastwidget);
	}

/**
 * Here all is handled if this left button is clicked. (The button can be clicked to hide the Popup Widget)
 */
void KedaView::part_group_clicked()
	{
	lastwidget = showclicked( groups,  lastwidget);
	}

/**
 * Here all is handled if this left button is clicked. (The button can be clicked to hide the Popup Widget)
 */
void KedaView::logicals_clicked()
	{
	lastwidget = showclicked( logicals,  lastwidget);
	}

/**
 * Here all is handled if this left button is clicked. (The button can be clicked to hide the Popup Widget)
 */
void KedaView::linears_clicked()
	{
	lastwidget = showclicked( linears,  lastwidget);
	}

/**
 * Here all is handled if this left button is clicked. (The button can be clicked to hide the Popup Widget)
 */
void KedaView::others_clicked()
	{
	lastwidget = showclicked( others,  lastwidget);
	}

void KedaView::ops_clicked()
	{
	lastwidget = showclicked( ops,  lastwidget);
	}

void KedaView::resistors_clicked()
	{
	lastwidget = showclicked( resistors,  lastwidget);
	}

void KedaView::diodes_clicked()
	{
	lastwidget = showclicked( diodes,  lastwidget);
	}

void KedaView::leds_clicked()
	{
	lastwidget = showclicked( leds,  lastwidget);
	}

void KedaView::diacs_clicked()
	{
	lastwidget = showclicked( diacs,  lastwidget);
	}

void KedaView::triacs_clicked()
	{
	lastwidget = showclicked( triacs,  lastwidget);
	}

void KedaView::transistors_clicked()
	{
	lastwidget = showclicked( transistors,  lastwidget);
	}

void KedaView::tyristors_clicked()
	{
	lastwidget = showclicked( tyristors,  lastwidget);
	}

void KedaView::capacitor_clicked()
	{
	lastwidget = showclicked( capacitors,  lastwidget);
	}

void KedaView::coil_clicked()
	{
	lastwidget = showclicked( coils,  lastwidget);
	}

void KedaView::conectors_clicked()
	{
	lastwidget = showclicked( conectors,  lastwidget);
	}

void KedaView::switches_clicked()
	{
	lastwidget = showclicked( switches,  lastwidget);
	}

void KedaView::trafos_clicked()
	{
	lastwidget = showclicked( trafos,  lastwidget);
	}

void KedaView::heatsinks_clicked()
	{
	lastwidget = showclicked( heatsinks,  lastwidget);
	}

void KedaView::cases_clicked()
	{
	lastwidget = showclicked( cases,  lastwidget);
	}

/**
 * Call of the self defined database. It don't have to be adjusted with others online databases.
 */
void KedaView::custom_clicked()
	{
	lastwidget = showclicked( custom,  lastwidget);
	}


void KedaView::headline_clicked()
	{
	if( lastwidget == boards )
		{
		databasemenu->popup( boards->headline );
		return;
		}
	if( lastwidget == groups )
		{
		databasemenu->popup( groups->headline );
		return;
		}
	if( lastwidget == logicals )
		{
		databasemenu->popup( logicals->headline );
		return;
		}
	if( lastwidget == linears )
		{
		databasemenu->popup( linears->headline );
		return;
		}
	if( lastwidget == others )
		{
		databasemenu->popup( others->headline );
		return;
		}
		
	if( lastwidget == ops )
		{
		databasemenu->popup( ops->headline );
		return;
		}
	if( lastwidget == resistors )
		{
		databasemenu->popup( resistors->headline );
		return;
		}
	if( lastwidget == diodes )
		{
		databasemenu->popup( diodes->headline );
		return;
		}
	if( lastwidget == leds )
		{
		databasemenu->popup( leds->headline );
		return;
		}
	if( lastwidget == diacs )
		{
		databasemenu->popup( diacs->headline );
		return;
		}
	if( lastwidget == triacs )
		{
		databasemenu->popup( triacs->headline );
		return;
		}
	if( lastwidget == transistors )
		{
		databasemenu->popup( transistors->headline );
		return;
		}
	if( lastwidget == tyristors )
		{
		databasemenu->popup( tyristors->headline );
		return;
		}
	if( lastwidget == capacitors )
		{
		databasemenu->popup( capacitors->headline );
		return;
		}
	if( lastwidget == coils )
		{
		databasemenu->popup( coils->headline );
		return;
		}
	if( lastwidget == conectors )
		{
		databasemenu->popup( conectors->headline );
		return;
		}
	if( lastwidget == switches )
		{
		databasemenu->popup( switches->headline );
		return;
		}
	if( lastwidget == trafos )
		{
		databasemenu->popup( trafos->headline );
		return;
		}
	if( lastwidget == heatsinks )
		{
		databasemenu->popup( heatsinks->headline );
		return;
		}
	if( lastwidget == cases )
		{
		databasemenu->popup( cases->headline );
		return;
		}
	if( lastwidget == custom )
		{
		databasemenu->popup( custom->headline );
		return;
		}
	}

void KedaView::start_composer()
	{
	if( ! co->isRunning() )
		{
		co->start();
		}
	}
	
void KedaView::start_simulation()
	{
	sim->show();
	}



#include "kedaview.moc"
