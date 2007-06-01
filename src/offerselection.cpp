#include <kdialog.h>
#include <klocale.h>
/****************************************************************************
** Form implementation generated from reading ui file '/home/bastl/Kdevel/ledax/src/offerselection.ui'
**
** Created: Di Apr 17 21:01:23 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "offerselection.h"

#include <qvariant.h>
#include <qframe.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a OfferSelection as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
OfferSelection::OfferSelection( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "OfferSelection" );
    OfferSelectionLayout = new QGridLayout( this, 1, 1, 0, 0, "OfferSelectionLayout"); 

    contens = new QFrame( this, "contens" );
    contens->setMinimumSize( QSize( 200, 0 ) );
    contens->setMaximumSize( QSize( 200, 32767 ) );
    contens->setFrameShape( QFrame::StyledPanel );
    contens->setFrameShadow( QFrame::Raised );

    OfferSelectionLayout->addWidget( contens, 0, 0 );
    languageChange();
    resize( QSize(202, 456).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );
}

/*
 *  Destroys the object and frees any allocated resources
 */
OfferSelection::~OfferSelection()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void OfferSelection::languageChange()
{
    setCaption( tr2i18n( "Offer" ) );
}

#include "offerselection.moc"
