#include <kdialog.h>
#include <klocale.h>
/****************************************************************************
** Form implementation generated from reading ui file '/home/bastl/Kdevel/keda/src/offerwidget.ui'
**
** Created: Di Apr 24 15:19:54 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "offerwidget.h"

#include <qvariant.h>
#include <klistbox.h>
#include <qtoolbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qstring.h>
#include <qwhatsthis.h>
#include "klistbox.h"

/*
 *  Constructs a OfferWidget as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
OfferWidget::OfferWidget( const QString &t, QWidget* parent ) : QWidget( parent )
	{
	setName( "OfferWidget" );
	setMinimumSize( QSize( 200, 0 ) );
	setMaximumSize( QSize( 200, 32767 ) );
	OfferWidgetLayout = new QGridLayout( this, 1, 1, 1, 0, "OfferWidgetLayout"); 
	
	kListBox2 = new KListBox( this, "kListBox2" );
	kListBox2->setPaletteBackgroundColor( QColor( 234, 233, 232 ) );
	
	OfferWidgetLayout->addWidget( kListBox2, 1, 0 );
	
	headline = new QToolButton( this, "headline" );
	headline->setMinimumSize( QSize( 0, 25 ) );
	headline->setMaximumSize( QSize( 32767, 25 ) );
	
	OfferWidgetLayout->addWidget( headline, 0, 0 );
	languageChange();
	resize( QSize(200, 93).expandedTo(minimumSizeHint()) );
	clearWState( WState_Polished );
	hide();
	headline->setText( t );
	}

OfferWidget::OfferWidget( QWidget* parent ) : QWidget( parent )
	{
	setName( "OfferWidget" );
	setMinimumSize( QSize( 200, 0 ) );
	setMaximumSize( QSize( 200, 32767 ) );
	OfferWidgetLayout = new QGridLayout( this, 1, 1, 1, 0, "OfferWidgetLayout"); 
	
	kListBox2 = new KListBox( this, "kListBox2" );
	kListBox2->setPaletteBackgroundColor( QColor( 234, 233, 232 ) );
	
	OfferWidgetLayout->addWidget( kListBox2, 1, 0 );
	
	headline = new QToolButton( this, "headline" );
	headline->setMinimumSize( QSize( 0, 25 ) );
	headline->setMaximumSize( QSize( 32767, 25 ) );
	
	OfferWidgetLayout->addWidget( headline, 0, 0 );
	languageChange();
	resize( QSize(200, 93).expandedTo(minimumSizeHint()) );
	clearWState( WState_Polished );
	hide();
	}
/*
 *  Destroys the object and frees any allocated resources
 */
OfferWidget::~OfferWidget()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void OfferWidget::languageChange()
{
    setCaption( tr2i18n( "OfferWidget" ) );
    headline->setText( tr2i18n( "..." ) );
}

void OfferWidget::headline_clicked()
{
    qWarning( "OfferWidget::headline_clicked(): Not implemented yet" );
}

#include "offerwidget.moc"
