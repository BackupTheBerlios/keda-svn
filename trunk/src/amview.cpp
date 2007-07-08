#include <kdialog.h>
#include <klocale.h>
/****************************************************************************
** Form implementation generated from reading ui file '/home/bastl/Kdevel/Keda/trunk/src/amview.ui'
**
** Created: So Jul 8 14:56:56 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "amview.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <qtable.h>
#include <kpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "kpushbutton.h"

/*
 *  Constructs a AMView as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
AMView::AMView( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "AMView" );
    AMViewLayout = new QGridLayout( this, 1, 1, 11, 6, "AMViewLayout"); 

    tabWidget2 = new QTabWidget( this, "tabWidget2" );

    tab = new QWidget( tabWidget2, "tab" );
    tabLayout = new QGridLayout( tab, 1, 1, 11, 6, "tabLayout"); 

    table1 = new QTable( tab, "table1" );
    table1->setNumCols( table1->numCols() + 1 );
    table1->horizontalHeader()->setLabel( table1->numCols() - 1, tr2i18n( "Designation" ) );
    table1->setNumCols( table1->numCols() + 1 );
    table1->horizontalHeader()->setLabel( table1->numCols() - 1, tr2i18n( "Dimension" ) );
    table1->setNumCols( table1->numCols() + 1 );
    table1->horizontalHeader()->setLabel( table1->numCols() - 1, tr2i18n( "Design" ) );
    table1->setNumRows( 1 );
    table1->setNumCols( 3 );
    table1->setShowGrid( TRUE );
    table1->setSelectionMode( QTable::NoSelection );

    tabLayout->addWidget( table1, 0, 0 );
    tabWidget2->insertTab( tab, QString::fromLatin1("") );

    TabPage = new QWidget( tabWidget2, "TabPage" );
    TabPageLayout = new QGridLayout( TabPage, 1, 1, 11, 6, "TabPageLayout"); 

    table1_3 = new QTable( TabPage, "table1_3" );
    table1_3->setNumCols( table1_3->numCols() + 1 );
    table1_3->horizontalHeader()->setLabel( table1_3->numCols() - 1, tr2i18n( "Designation" ) );
    table1_3->setNumCols( table1_3->numCols() + 1 );
    table1_3->horizontalHeader()->setLabel( table1_3->numCols() - 1, tr2i18n( "Position" ) );
    table1_3->setNumCols( table1_3->numCols() + 1 );
    table1_3->horizontalHeader()->setLabel( table1_3->numCols() - 1, tr2i18n( "Dimension" ) );
    table1_3->setNumCols( table1_3->numCols() + 1 );
    table1_3->horizontalHeader()->setLabel( table1_3->numCols() - 1, tr2i18n( "Shape" ) );
    table1_3->setNumCols( table1_3->numCols() + 1 );
    table1_3->horizontalHeader()->setLabel( table1_3->numCols() - 1, tr2i18n( "Rotate" ) );
    table1_3->setNumRows( table1_3->numRows() + 1 );
    table1_3->verticalHeader()->setLabel( table1_3->numRows() - 1, tr2i18n( "1" ) );
    table1_3->setNumRows( 1 );
    table1_3->setNumCols( 5 );
    table1_3->setShowGrid( TRUE );
    table1_3->setSelectionMode( QTable::NoSelection );

    TabPageLayout->addWidget( table1_3, 0, 0 );
    tabWidget2->insertTab( TabPage, QString::fromLatin1("") );

    TabPage_2 = new QWidget( tabWidget2, "TabPage_2" );
    TabPageLayout_2 = new QGridLayout( TabPage_2, 1, 1, 11, 6, "TabPageLayout_2"); 

    table1_3_2 = new QTable( TabPage_2, "table1_3_2" );
    table1_3_2->setNumCols( table1_3_2->numCols() + 1 );
    table1_3_2->horizontalHeader()->setLabel( table1_3_2->numCols() - 1, tr2i18n( "Designation" ) );
    table1_3_2->setNumCols( table1_3_2->numCols() + 1 );
    table1_3_2->horizontalHeader()->setLabel( table1_3_2->numCols() - 1, tr2i18n( "Position" ) );
    table1_3_2->setNumCols( table1_3_2->numCols() + 1 );
    table1_3_2->horizontalHeader()->setLabel( table1_3_2->numCols() - 1, tr2i18n( "Dimension" ) );
    table1_3_2->setNumCols( table1_3_2->numCols() + 1 );
    table1_3_2->horizontalHeader()->setLabel( table1_3_2->numCols() - 1, tr2i18n( "Shape" ) );
    table1_3_2->setNumCols( table1_3_2->numCols() + 1 );
    table1_3_2->horizontalHeader()->setLabel( table1_3_2->numCols() - 1, tr2i18n( "Rotate" ) );
    table1_3_2->setNumRows( table1_3_2->numRows() + 1 );
    table1_3_2->verticalHeader()->setLabel( table1_3_2->numRows() - 1, tr2i18n( "1" ) );
    table1_3_2->setNumRows( 1 );
    table1_3_2->setNumCols( 5 );
    table1_3_2->setShowGrid( TRUE );
    table1_3_2->setSelectionMode( QTable::NoSelection );

    TabPageLayout_2->addWidget( table1_3_2, 0, 0 );
    tabWidget2->insertTab( TabPage_2, QString::fromLatin1("") );

    tab_2 = new QWidget( tabWidget2, "tab_2" );
    tabLayout_2 = new QGridLayout( tab_2, 1, 1, 11, 6, "tabLayout_2"); 

    table1_2 = new QTable( tab_2, "table1_2" );
    table1_2->setNumCols( table1_2->numCols() + 1 );
    table1_2->horizontalHeader()->setLabel( table1_2->numCols() - 1, tr2i18n( "Designation" ) );
    table1_2->setNumCols( table1_2->numCols() + 1 );
    table1_2->horizontalHeader()->setLabel( table1_2->numCols() - 1, tr2i18n( "Position" ) );
    table1_2->setNumCols( table1_2->numCols() + 1 );
    table1_2->horizontalHeader()->setLabel( table1_2->numCols() - 1, tr2i18n( "Spaceing" ) );
    table1_2->setNumCols( table1_2->numCols() + 1 );
    table1_2->horizontalHeader()->setLabel( table1_2->numCols() - 1, tr2i18n( "Rotate" ) );
    table1_2->setNumRows( table1_2->numRows() + 1 );
    table1_2->verticalHeader()->setLabel( table1_2->numRows() - 1, tr2i18n( "1" ) );
    table1_2->setNumRows( 1 );
    table1_2->setNumCols( 4 );
    table1_2->setShowGrid( TRUE );
    table1_2->setSelectionMode( QTable::NoSelection );

    tabLayout_2->addWidget( table1_2, 0, 0 );
    tabWidget2->insertTab( tab_2, QString::fromLatin1("") );

    TabPage_3 = new QWidget( tabWidget2, "TabPage_3" );
    TabPageLayout_3 = new QGridLayout( TabPage_3, 1, 1, 11, 6, "TabPageLayout_3"); 

    table1_2_3 = new QTable( TabPage_3, "table1_2_3" );
    table1_2_3->setNumCols( table1_2_3->numCols() + 1 );
    table1_2_3->horizontalHeader()->setLabel( table1_2_3->numCols() - 1, tr2i18n( "Designation" ) );
    table1_2_3->setNumCols( table1_2_3->numCols() + 1 );
    table1_2_3->horizontalHeader()->setLabel( table1_2_3->numCols() - 1, tr2i18n( "Lead1" ) );
    table1_2_3->setNumCols( table1_2_3->numCols() + 1 );
    table1_2_3->horizontalHeader()->setLabel( table1_2_3->numCols() - 1, tr2i18n( "Lead2" ) );
    table1_2_3->setNumCols( table1_2_3->numCols() + 1 );
    table1_2_3->horizontalHeader()->setLabel( table1_2_3->numCols() - 1, tr2i18n( "Group" ) );
    table1_2_3->setNumCols( table1_2_3->numCols() + 1 );
    table1_2_3->horizontalHeader()->setLabel( table1_2_3->numCols() - 1, tr2i18n( "Max. current" ) );
    table1_2_3->setNumCols( table1_2_3->numCols() + 1 );
    table1_2_3->horizontalHeader()->setLabel( table1_2_3->numCols() - 1, tr2i18n( "Max. length" ) );
    table1_2_3->setNumCols( table1_2_3->numCols() + 1 );
    table1_2_3->horizontalHeader()->setLabel( table1_2_3->numCols() - 1, tr2i18n( "Spacing" ) );
    table1_2_3->setNumCols( table1_2_3->numCols() + 1 );
    table1_2_3->horizontalHeader()->setLabel( table1_2_3->numCols() - 1, tr2i18n( "Design" ) );
    table1_2_3->setNumRows( 1 );
    table1_2_3->setNumCols( 8 );
    table1_2_3->setShowGrid( TRUE );
    table1_2_3->setSelectionMode( QTable::Single );

    TabPageLayout_3->addWidget( table1_2_3, 0, 0 );
    tabWidget2->insertTab( TabPage_3, QString::fromLatin1("") );

    AMViewLayout->addMultiCellWidget( tabWidget2, 0, 0, 0, 1 );

    kPushButton9_2 = new KPushButton( this, "kPushButton9_2" );

    AMViewLayout->addWidget( kPushButton9_2, 1, 0 );

    kPushButton9 = new KPushButton( this, "kPushButton9" );

    AMViewLayout->addWidget( kPushButton9, 1, 1 );
    languageChange();
    resize( QSize(632, 436).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );
}

/*
 *  Destroys the object and frees any allocated resources
 */
AMView::~AMView()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void AMView::languageChange()
{
    setCaption( tr2i18n( "Auto Manager" ) );
    table1->horizontalHeader()->setLabel( 0, tr2i18n( "Designation" ) );
    table1->horizontalHeader()->setLabel( 1, tr2i18n( "Dimension" ) );
    table1->horizontalHeader()->setLabel( 2, tr2i18n( "Design" ) );
    tabWidget2->changeTab( tab, tr2i18n( "B&oard" ) );
    table1_3->horizontalHeader()->setLabel( 0, tr2i18n( "Designation" ) );
    table1_3->horizontalHeader()->setLabel( 1, tr2i18n( "Position" ) );
    table1_3->horizontalHeader()->setLabel( 2, tr2i18n( "Dimension" ) );
    table1_3->horizontalHeader()->setLabel( 3, tr2i18n( "Shape" ) );
    table1_3->horizontalHeader()->setLabel( 4, tr2i18n( "Rotate" ) );
    table1_3->verticalHeader()->setLabel( 0, tr2i18n( "1" ) );
    tabWidget2->changeTab( TabPage, tr2i18n( "&Recesses" ) );
    table1_3_2->horizontalHeader()->setLabel( 0, tr2i18n( "Designation" ) );
    table1_3_2->horizontalHeader()->setLabel( 1, tr2i18n( "Position" ) );
    table1_3_2->horizontalHeader()->setLabel( 2, tr2i18n( "Dimension" ) );
    table1_3_2->horizontalHeader()->setLabel( 3, tr2i18n( "Shape" ) );
    table1_3_2->horizontalHeader()->setLabel( 4, tr2i18n( "Rotate" ) );
    table1_3_2->verticalHeader()->setLabel( 0, tr2i18n( "1" ) );
    tabWidget2->changeTab( TabPage_2, tr2i18n( "Res&tricted areas" ) );
    table1_2->horizontalHeader()->setLabel( 0, tr2i18n( "Designation" ) );
    table1_2->horizontalHeader()->setLabel( 1, tr2i18n( "Position" ) );
    table1_2->horizontalHeader()->setLabel( 2, tr2i18n( "Spaceing" ) );
    table1_2->horizontalHeader()->setLabel( 3, tr2i18n( "Rotate" ) );
    table1_2->verticalHeader()->setLabel( 0, tr2i18n( "1" ) );
    QToolTip::add( table1_2, tr2i18n( "dfsdfsdf" ) );
    tabWidget2->changeTab( tab_2, tr2i18n( "De&vices" ) );
    table1_2_3->horizontalHeader()->setLabel( 0, tr2i18n( "Designation" ) );
    table1_2_3->horizontalHeader()->setLabel( 1, tr2i18n( "Lead1" ) );
    table1_2_3->horizontalHeader()->setLabel( 2, tr2i18n( "Lead2" ) );
    table1_2_3->horizontalHeader()->setLabel( 3, tr2i18n( "Group" ) );
    table1_2_3->horizontalHeader()->setLabel( 4, tr2i18n( "Max. current" ) );
    table1_2_3->horizontalHeader()->setLabel( 5, tr2i18n( "Max. length" ) );
    table1_2_3->horizontalHeader()->setLabel( 6, tr2i18n( "Spacing" ) );
    table1_2_3->horizontalHeader()->setLabel( 7, tr2i18n( "Design" ) );
    tabWidget2->changeTab( TabPage_3, tr2i18n( "&Wires" ) );
    kPushButton9_2->setText( tr2i18n( "&Make" ) );
    kPushButton9->setText( tr2i18n( "&Cancle" ) );
}

#include "amview.moc"
