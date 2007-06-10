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


#include "composerview.h"

#include <qpainter.h>
#include <qlayout.h>
#include <qsize.h>
#include <qlabel.h>

#include <kurl.h>

#include <ktrader.h>
#include <klibloader.h>
#include <kmessagebox.h>
#include <krun.h>
#include <klocale.h>
#include <kdirselectdialog.h> 
#include <knuminput.h>
#include <kcombobox.h>

#include "resistor.h"
#include "diode.h"

ComposerView::ComposerView(QWidget *parent) : DCOPObject("ComposerIface"), ComposerWidget(parent)
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
			m_html = NULL;
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
	
	connect(m_html, SIGNAL(setWindowCaption(const QString&)),
			this,   SLOT(slotSetTitle(const QString&)));
	connect(m_html, SIGNAL(setStatusBarText(const QString&)),
			this,   SLOT(slotOnURL(const QString&)));
	
	
	r = new Resistor( characteristics );
	w = r;
	setMinimumSize( w->minimumSize()+QSize( 2, 80 ) );
	d = new Diode( characteristics ); d->hide();
	t =  new Transistor( characteristics ); t->hide();
	
	}

ComposerView::~ComposerView()
	{
	}

void ComposerView::resizeEvent( QResizeEvent *e )
	{
	w->setGeometry( 1, 55, e->size().width()-2, e->size().height()-80 );
	}

void ComposerView::print(QPainter *p, int height, int width)
{
    // do the actual printing, here
    // p->drawText(etc..)
}

QString ComposerView::currentURL()
{
    return m_html->url().url();
}

void ComposerView::openURL(QString url)
{
    openURL(KURL(url));
}

void ComposerView::openURL(const KURL& url)
{
    m_html->openURL(url);
}

void ComposerView::slotOnURL(const QString& url)
{
    emit signalChangeStatusbar(url);
}

void ComposerView::slotSetTitle(const QString& title)
{
    emit signalChangeCaption(title);
}

QWidget* ComposerView::w_show( QWidget *n, QWidget *lastwidget )
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

void ComposerView::character_chosen( int group)
	{
	switch( group )
		{
		case 0:
			w->hide();
			w = r;
			w->show();
			break;
		case 1:
			w->hide();
			w = d;
			w->show();
			break;
		case 2:
			w->hide();
			w = t;
			w->show();
			break;
		
		default:
			w->hide();
			break;
		}
	
	resizeEvent( &QResizeEvent( size(), size() ) );
	setMinimumSize( w->minimumSize()+QSize( 2, 80 ) );
	}

void ComposerView::t_type_changed( int n )
	{
	if( n < 2 )
		{
		t->ib_text->setEnabled( TRUE ); t->ibmax->setEnabled( TRUE ); t->ib_unit->setEnabled( TRUE );
		t->ug_text->setEnabled( FALSE ); t->ug->setEnabled( FALSE ); t->ug_unit->setEnabled( FALSE );
		t->rds_text->setEnabled( FALSE ); t->rds->setEnabled( FALSE ); t->rds_unit->setEnabled( FALSE );
		}
	else
		{
		t->ug_text->setEnabled( TRUE ); t->ug->setEnabled( TRUE ); t->ug_unit->setEnabled( TRUE );
		t->rds_text->setEnabled( TRUE ); t->rds->setEnabled( TRUE ); t->rds_unit->setEnabled( TRUE );
		t->ib_text->setEnabled( FALSE ); t->ibmax->setEnabled( FALSE ); t->ib_unit->setEnabled( FALSE );
		}
	}


#include "composerview.moc"
