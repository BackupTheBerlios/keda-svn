#include <kdialog.h>
#include <klocale.h>
/****************************************************************************
** Form implementation generated from reading ui file '/home/bastl/Kdevel/keda/composer/composerwidget.ui'
**
** Created: So Mai 20 14:12:43 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "composerwidget.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <qlabel.h>
#include <klineedit.h>
#include <qcombobox.h>
#include <qframe.h>
#include <kurlrequester.h>
#include <qtextedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "klineedit.h"
#include "kurlrequester.h"
#include "kpushbutton.h"

/*
 *  Constructs a ComposerWidget as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
ComposerWidget::ComposerWidget( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "ComposerWidget" );
    ComposerWidgetLayout = new QGridLayout( this, 1, 1, 0, 0, "ComposerWidgetLayout"); 

    Tabwidget = new QTabWidget( this, "Tabwidget" );
    Tabwidget->setMinimumSize( QSize( 400, 200 ) );

    characteristics = new QWidget( Tabwidget, "characteristics" );
    characteristicsLayout = new QGridLayout( characteristics, 1, 1, 10, 5, "characteristicsLayout"); 

    textLabel1_5 = new QLabel( characteristics, "textLabel1_5" );
    textLabel1_5->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)5, 0, 0, textLabel1_5->sizePolicy().hasHeightForWidth() ) );

    characteristicsLayout->addWidget( textLabel1_5, 0, 0 );

    kLineEdit1_2 = new KLineEdit( characteristics, "kLineEdit1_2" );

    characteristicsLayout->addWidget( kLineEdit1_2, 0, 1 );

    comboBox1 = new QComboBox( FALSE, characteristics, "comboBox1" );
    comboBox1->setMinimumSize( QSize( 200, 0 ) );
    comboBox1->setSizeLimit( 20 );

    characteristicsLayout->addWidget( comboBox1, 0, 2 );
    spacer2 = new QSpacerItem( 340, 210, QSizePolicy::Minimum, QSizePolicy::Expanding );
    characteristicsLayout->addMultiCell( spacer2, 2, 2, 0, 2 );

    line8 = new QFrame( characteristics, "line8" );
    line8->setMinimumSize( QSize( 0, 16 ) );
    line8->setMaximumSize( QSize( 32767, 16 ) );
    line8->setFrameShape( QFrame::HLine );
    line8->setFrameShadow( QFrame::Sunken );
    line8->setFrameShape( QFrame::HLine );

    characteristicsLayout->addMultiCellWidget( line8, 1, 1, 0, 2 );
    Tabwidget->insertTab( characteristics, QString::fromLatin1("") );

    eda = new QWidget( Tabwidget, "eda" );
    edaLayout = new QGridLayout( eda, 1, 1, 5, 5, "edaLayout"); 

    eda_tab = new QTabWidget( eda, "eda_tab" );
    eda_tab->setMinimumSize( QSize( 155, 0 ) );
    eda_tab->setMaximumSize( QSize( 155, 32767 ) );

    positions = new QWidget( eda_tab, "positions" );
    eda_tab->insertTab( positions, QString::fromLatin1("") );

    names = new QWidget( eda_tab, "names" );
    eda_tab->insertTab( names, QString::fromLatin1("") );

    edaLayout->addWidget( eda_tab, 1, 1 );

    eda_view = new QFrame( eda, "eda_view" );
    eda_view->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)7, 0, 0, eda_view->sizePolicy().hasHeightForWidth() ) );
    eda_view->setPaletteBackgroundColor( QColor( 253, 247, 210 ) );
    eda_view->setFrameShape( QFrame::StyledPanel );
    eda_view->setFrameShadow( QFrame::Sunken );

    edaLayout->addWidget( eda_view, 1, 0 );

    layout1 = new QHBoxLayout( 0, 0, 5, "layout1"); 

    textLabel3 = new QLabel( eda, "textLabel3" );
    layout1->addWidget( textLabel3 );

    image_eda = new KURLRequester( eda, "image_eda" );
    image_eda->setMinimumSize( QSize( 0, 26 ) );
    image_eda->setMaximumSize( QSize( 32767, 26 ) );
    layout1->addWidget( image_eda );

    edaLayout->addMultiCellLayout( layout1, 0, 0, 0, 1 );
    Tabwidget->insertTab( eda, QString::fromLatin1("") );

    pcb = new QWidget( Tabwidget, "pcb" );
    pcbLayout = new QGridLayout( pcb, 1, 1, 5, 5, "pcbLayout"); 

    eda_view_2 = new QFrame( pcb, "eda_view_2" );
    eda_view_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)7, 0, 0, eda_view_2->sizePolicy().hasHeightForWidth() ) );
    eda_view_2->setPaletteBackgroundColor( QColor( 90, 90, 90 ) );
    eda_view_2->setFrameShape( QFrame::StyledPanel );
    eda_view_2->setFrameShadow( QFrame::Sunken );

    pcbLayout->addWidget( eda_view_2, 1, 0 );

    eda_tab_2 = new QTabWidget( pcb, "eda_tab_2" );
    eda_tab_2->setMinimumSize( QSize( 155, 0 ) );
    eda_tab_2->setMaximumSize( QSize( 155, 32767 ) );

    positions_2 = new QWidget( eda_tab_2, "positions_2" );
    positionsLayout = new QGridLayout( positions_2, 1, 1, 10, 5, "positionsLayout"); 
    eda_tab_2->insertTab( positions_2, QString::fromLatin1("") );

    names_2 = new QWidget( eda_tab_2, "names_2" );
    namesLayout = new QGridLayout( names_2, 1, 1, 2, 2, "namesLayout"); 

    textEdit1 = new QTextEdit( names_2, "textEdit1" );

    namesLayout->addWidget( textEdit1, 0, 0 );
    eda_tab_2->insertTab( names_2, QString::fromLatin1("") );

    pcbLayout->addWidget( eda_tab_2, 1, 1 );

    layout7 = new QHBoxLayout( 0, 0, 5, "layout7"); 

    textLabel3_2 = new QLabel( pcb, "textLabel3_2" );
    layout7->addWidget( textLabel3_2 );

    image_pin = new KURLRequester( pcb, "image_pin" );
    image_pin->setMinimumSize( QSize( 0, 26 ) );
    image_pin->setMaximumSize( QSize( 32767, 26 ) );
    layout7->addWidget( image_pin );

    pcbLayout->addMultiCellLayout( layout7, 0, 0, 0, 1 );
    Tabwidget->insertTab( pcb, QString::fromLatin1("") );

    dimension = new QWidget( Tabwidget, "dimension" );
    dimensionLayout = new QGridLayout( dimension, 1, 1, 5, 5, "dimensionLayout"); 

    layout1_2 = new QHBoxLayout( 0, 0, 5, "layout1_2"); 

    textLabel3_3 = new QLabel( dimension, "textLabel3_3" );
    layout1_2->addWidget( textLabel3_3 );

    image_dim = new KURLRequester( dimension, "image_dim" );
    image_dim->setMinimumSize( QSize( 0, 26 ) );
    image_dim->setMaximumSize( QSize( 32767, 26 ) );
    layout1_2->addWidget( image_dim );

    dimensionLayout->addLayout( layout1_2, 0, 0 );

    tabWidget6 = new QTabWidget( dimension, "tabWidget6" );

    tab = new QWidget( tabWidget6, "tab" );
    tabLayout = new QGridLayout( tab, 1, 1, 2, 0, "tabLayout"); 

    eda_view_2_2 = new QFrame( tab, "eda_view_2_2" );
    eda_view_2_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)7, 0, 0, eda_view_2_2->sizePolicy().hasHeightForWidth() ) );
    eda_view_2_2->setPaletteBackgroundColor( QColor( 0, 181, 130 ) );
    eda_view_2_2->setFrameShape( QFrame::StyledPanel );
    eda_view_2_2->setFrameShadow( QFrame::Sunken );

    tabLayout->addWidget( eda_view_2_2, 0, 0 );
    tabWidget6->insertTab( tab, QString::fromLatin1("") );

    tab_2 = new QWidget( tabWidget6, "tab_2" );
    tabLayout_2 = new QGridLayout( tab_2, 1, 1, 2, 0, "tabLayout_2"); 

    eda_view_2_2_2 = new QFrame( tab_2, "eda_view_2_2_2" );
    eda_view_2_2_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)7, 0, 0, eda_view_2_2_2->sizePolicy().hasHeightForWidth() ) );
    eda_view_2_2_2->setPaletteBackgroundColor( QColor( 0, 181, 130 ) );
    eda_view_2_2_2->setFrameShape( QFrame::StyledPanel );
    eda_view_2_2_2->setFrameShadow( QFrame::Sunken );

    tabLayout_2->addWidget( eda_view_2_2_2, 0, 0 );
    tabWidget6->insertTab( tab_2, QString::fromLatin1("") );

    TabPage = new QWidget( tabWidget6, "TabPage" );
    TabPageLayout = new QGridLayout( TabPage, 1, 1, 2, 0, "TabPageLayout"); 

    eda_view_2_2_3 = new QFrame( TabPage, "eda_view_2_2_3" );
    eda_view_2_2_3->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)7, 0, 0, eda_view_2_2_3->sizePolicy().hasHeightForWidth() ) );
    eda_view_2_2_3->setPaletteBackgroundColor( QColor( 0, 181, 130 ) );
    eda_view_2_2_3->setFrameShape( QFrame::StyledPanel );
    eda_view_2_2_3->setFrameShadow( QFrame::Sunken );

    TabPageLayout->addWidget( eda_view_2_2_3, 0, 0 );
    tabWidget6->insertTab( TabPage, QString::fromLatin1("") );

    dimensionLayout->addWidget( tabWidget6, 1, 0 );
    Tabwidget->insertTab( dimension, QString::fromLatin1("") );

    ComposerWidgetLayout->addWidget( Tabwidget, 0, 0 );
    languageChange();
    resize( QSize(445, 346).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( comboBox1, SIGNAL( activated(int) ), this, SLOT( character_chosen(int) ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
ComposerWidget::~ComposerWidget()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ComposerWidget::languageChange()
{
    setCaption( tr2i18n( "ComposerWidget" ) );
    textLabel1_5->setText( tr2i18n( "Part name :" ) );
    QToolTip::add( kLineEdit1_2, tr2i18n( "<p>Shown in Keda's popup selection.</p>" ) );
    comboBox1->clear();
    comboBox1->insertItem( tr2i18n( "Resistor" ) );
    comboBox1->insertItem( tr2i18n( "Diode" ) );
    comboBox1->insertItem( tr2i18n( "Transistor" ) );
    comboBox1->insertItem( tr2i18n( "Logical IC" ) );
    comboBox1->insertItem( tr2i18n( "Linear IC" ) );
    comboBox1->insertItem( tr2i18n( "Other IC" ) );
    comboBox1->insertItem( tr2i18n( "Operation amplifier" ) );
    comboBox1->insertItem( tr2i18n( "Special designed IC" ) );
    comboBox1->insertItem( tr2i18n( "Capacitor" ) );
    comboBox1->insertItem( tr2i18n( "Coil" ) );
    comboBox1->insertItem( tr2i18n( "Power supply" ) );
    comboBox1->insertItem( tr2i18n( "Heat sink" ) );
    comboBox1->insertItem( tr2i18n( "Case" ) );
    comboBox1->insertItem( tr2i18n( "Board" ) );
    Tabwidget->changeTab( characteristics, tr2i18n( "Cha&racteristics" ) );
    eda_tab->changeTab( positions, tr2i18n( "Positions" ) );
    eda_tab->changeTab( names, tr2i18n( "&Names" ) );
    textLabel3->setText( tr2i18n( "Image :" ) );
    Tabwidget->changeTab( eda, tr2i18n( "EDA" ) );
    eda_tab_2->changeTab( positions_2, tr2i18n( "Pi&ns" ) );
    eda_tab_2->changeTab( names_2, tr2i18n( "File content" ) );
    textLabel3_2->setText( tr2i18n( "New pin :" ) );
    Tabwidget->changeTab( pcb, tr2i18n( "PCB" ) );
    textLabel3_3->setText( tr2i18n( "Image :" ) );
    tabWidget6->changeTab( tab, tr2i18n( " &Top view (board printed)" ) );
    tabWidget6->changeTab( tab_2, tr2i18n( "Front &view" ) );
    tabWidget6->changeTab( TabPage, tr2i18n( "Side vie&w" ) );
    Tabwidget->changeTab( dimension, tr2i18n( "Dime&nsions" ) );
}

void ComposerWidget::character_chosen(int)
{
    qWarning( "ComposerWidget::character_chosen(int): Not implemented yet" );
}

#include "composerwidget.moc"
