#include <kdialog.h>
#include <klocale.h>
/****************************************************************************
** Form implementation generated from reading ui file '/home/bastl/Kdevel/Keda/trunk/composer/resistor.ui'
**
** Created: So Jul 8 14:55:19 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "resistor.h"

#include <qvariant.h>
#include <qcheckbox.h>
#include <qlabel.h>
#include <qframe.h>
#include <knuminput.h>
#include <kcombobox.h>
#include <kurlrequester.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "knuminput.h"
#include "kcombobox.h"
#include "kurlrequester.h"
#include "klineedit.h"
#include "kpushbutton.h"

/*
 *  Constructs a Resistor as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
Resistor::Resistor( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "Resistor" );
    setMinimumSize( QSize( 510, 230 ) );
    ResistorLayout = new QGridLayout( this, 1, 1, 10, 5, "ResistorLayout"); 

    checkBox1 = new QCheckBox( this, "checkBox1" );

    ResistorLayout->addWidget( checkBox1, 5, 0 );

    checkBox1_2 = new QCheckBox( this, "checkBox1_2" );
    checkBox1_2->setMinimumSize( QSize( 17, 0 ) );
    checkBox1_2->setMaximumSize( QSize( 17, 32767 ) );

    ResistorLayout->addWidget( checkBox1_2, 6, 0 );

    textLabel1_2 = new QLabel( this, "textLabel1_2" );
    textLabel1_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)5, 0, 0, textLabel1_2->sizePolicy().hasHeightForWidth() ) );

    ResistorLayout->addMultiCellWidget( textLabel1_2, 2, 2, 0, 1 );
    spacer1 = new QSpacerItem( 310, 80, QSizePolicy::Minimum, QSizePolicy::Expanding );
    ResistorLayout->addMultiCell( spacer1, 8, 8, 1, 6 );

    line1 = new QFrame( this, "line1" );
    line1->setMaximumSize( QSize( 32767, 16 ) );
    line1->setFrameShape( QFrame::HLine );
    line1->setFrameShadow( QFrame::Sunken );
    line1->setFrameShape( QFrame::HLine );

    ResistorLayout->addMultiCellWidget( line1, 7, 7, 0, 7 );

    textLabel1_4_4_2 = new QLabel( this, "textLabel1_4_4_2" );
    textLabel1_4_4_2->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_4_2->setMaximumSize( QSize( 20, 32767 ) );

    ResistorLayout->addWidget( textLabel1_4_4_2, 5, 5 );

    kDoubleNumInput1_2_2_3 = new KDoubleNumInput( this, "kDoubleNumInput1_2_2_3" );
    kDoubleNumInput1_2_2_3->setPrecision( 3 );

    ResistorLayout->addWidget( kDoubleNumInput1_2_2_3, 6, 6 );

    textLabel1_4_3_3 = new QLabel( this, "textLabel1_4_3_3" );
    textLabel1_4_3_3->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_3_3->setMaximumSize( QSize( 20, 32767 ) );

    ResistorLayout->addWidget( textLabel1_4_3_3, 5, 4 );

    textLabel1_3 = new QLabel( this, "textLabel1_3" );
    textLabel1_3->setMinimumSize( QSize( 50, 0 ) );
    textLabel1_3->setMaximumSize( QSize( 50, 32767 ) );

    ResistorLayout->addWidget( textLabel1_3, 2, 7 );

    textLabel1_4_3 = new QLabel( this, "textLabel1_4_3" );
    textLabel1_4_3->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_3->setMaximumSize( QSize( 20, 32767 ) );

    ResistorLayout->addWidget( textLabel1_4_3, 3, 4 );

    kDoubleNumInput1_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2" );
    kDoubleNumInput1_2->setPrecision( 3 );

    ResistorLayout->addWidget( kDoubleNumInput1_2, 3, 3 );

    kDoubleNumInput1_2_3_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3_2" );
    kDoubleNumInput1_2_3_2->setPrecision( 3 );

    ResistorLayout->addMultiCellWidget( kDoubleNumInput1_2_3_2, 1, 1, 2, 6 );

    textLabel1_4_3_2_2 = new QLabel( this, "textLabel1_4_3_2_2" );
    textLabel1_4_3_2_2->setMinimumSize( QSize( 50, 0 ) );
    textLabel1_4_3_2_2->setMaximumSize( QSize( 50, 32767 ) );

    ResistorLayout->addWidget( textLabel1_4_3_2_2, 5, 7 );

    kDoubleNumInput1_2_2_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_2_2" );
    kDoubleNumInput1_2_2_2->setPrecision( 3 );

    ResistorLayout->addWidget( kDoubleNumInput1_2_2_2, 5, 6 );

    textLabel1_4_3_2_3 = new QLabel( this, "textLabel1_4_3_2_3" );
    textLabel1_4_3_2_3->setMinimumSize( QSize( 50, 0 ) );
    textLabel1_4_3_2_3->setMaximumSize( QSize( 50, 32767 ) );

    ResistorLayout->addWidget( textLabel1_4_3_2_3, 6, 7 );

    kComboBox1_2_2 = new KComboBox( FALSE, this, "kComboBox1_2_2" );
    kComboBox1_2_2->setMinimumSize( QSize( 50, 0 ) );
    kComboBox1_2_2->setMaximumSize( QSize( 50, 32767 ) );

    ResistorLayout->addWidget( kComboBox1_2_2, 1, 7 );

    textLabel1_4_2_2 = new QLabel( this, "textLabel1_4_2_2" );
    textLabel1_4_2_2->setMinimumSize( QSize( 30, 0 ) );
    textLabel1_4_2_2->setMaximumSize( QSize( 30, 32767 ) );

    ResistorLayout->addWidget( textLabel1_4_2_2, 5, 2 );

    textLabel1_4_3_2 = new QLabel( this, "textLabel1_4_3_2" );
    textLabel1_4_3_2->setMinimumSize( QSize( 50, 0 ) );
    textLabel1_4_3_2->setMaximumSize( QSize( 50, 32767 ) );

    ResistorLayout->addWidget( textLabel1_4_3_2, 3, 7 );

    kDoubleNumInput1_2_3 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3" );
    kDoubleNumInput1_2_3->setPrecision( 3 );

    ResistorLayout->addWidget( kDoubleNumInput1_2_3, 5, 3 );

    textLabel1_4_2_3 = new QLabel( this, "textLabel1_4_2_3" );
    textLabel1_4_2_3->setMinimumSize( QSize( 30, 0 ) );
    textLabel1_4_2_3->setMaximumSize( QSize( 30, 32767 ) );

    ResistorLayout->addWidget( textLabel1_4_2_3, 6, 2 );

    textLabel1_4_4_3 = new QLabel( this, "textLabel1_4_4_3" );
    textLabel1_4_4_3->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_4_3->setMaximumSize( QSize( 20, 32767 ) );

    ResistorLayout->addWidget( textLabel1_4_4_3, 6, 5 );

    kComboBox1 = new KComboBox( FALSE, this, "kComboBox1" );

    ResistorLayout->addMultiCellWidget( kComboBox1, 0, 0, 2, 7 );

    kURLRequester1 = new KURLRequester( this, "kURLRequester1" );

    ResistorLayout->addMultiCellWidget( kURLRequester1, 4, 4, 2, 7 );

    textLabel1_4_4 = new QLabel( this, "textLabel1_4_4" );
    textLabel1_4_4->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_4->setMaximumSize( QSize( 20, 32767 ) );

    ResistorLayout->addWidget( textLabel1_4_4, 3, 5 );

    textLabel1_4_3_4 = new QLabel( this, "textLabel1_4_3_4" );
    textLabel1_4_3_4->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_3_4->setMaximumSize( QSize( 20, 32767 ) );

    ResistorLayout->addWidget( textLabel1_4_3_4, 6, 4 );

    kDoubleNumInput1_2_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_2" );
    kDoubleNumInput1_2_2->setPrecision( 3 );

    ResistorLayout->addWidget( kDoubleNumInput1_2_2, 3, 6 );

    kDoubleNumInput1_2_4 = new KDoubleNumInput( this, "kDoubleNumInput1_2_4" );
    kDoubleNumInput1_2_4->setPrecision( 3 );

    ResistorLayout->addWidget( kDoubleNumInput1_2_4, 6, 3 );

    kDoubleNumInput1 = new KDoubleNumInput( this, "kDoubleNumInput1" );
    kDoubleNumInput1->setMaxValue( 0 );
    kDoubleNumInput1->setPrecision( 4 );

    ResistorLayout->addMultiCellWidget( kDoubleNumInput1, 2, 2, 2, 6 );

    textLabel1_4_2 = new QLabel( this, "textLabel1_4_2" );
    textLabel1_4_2->setMinimumSize( QSize( 30, 0 ) );
    textLabel1_4_2->setMaximumSize( QSize( 30, 32767 ) );

    ResistorLayout->addWidget( textLabel1_4_2, 3, 2 );

    textLabel1_4_6_2 = new QLabel( this, "textLabel1_4_6_2" );

    ResistorLayout->addMultiCellWidget( textLabel1_4_6_2, 4, 4, 0, 1 );

    textLabel1_4 = new QLabel( this, "textLabel1_4" );

    ResistorLayout->addMultiCellWidget( textLabel1_4, 3, 3, 0, 1 );

    textLabel1_4_5_2 = new QLabel( this, "textLabel1_4_5_2" );

    ResistorLayout->addMultiCellWidget( textLabel1_4_5_2, 1, 1, 0, 1 );

    textLabel1 = new QLabel( this, "textLabel1" );
    textLabel1->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)5, 0, 0, textLabel1->sizePolicy().hasHeightForWidth() ) );

    ResistorLayout->addMultiCellWidget( textLabel1, 0, 0, 0, 1 );

    textLabel1_4_5 = new QLabel( this, "textLabel1_4_5" );

    ResistorLayout->addWidget( textLabel1_4_5, 5, 1 );

    textLabel1_4_6 = new QLabel( this, "textLabel1_4_6" );

    ResistorLayout->addWidget( textLabel1_4_6, 6, 1 );
    languageChange();
    resize( QSize(555, 365).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );
}

/*
 *  Destroys the object and frees any allocated resources
 */
Resistor::~Resistor()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Resistor::languageChange()
{
    setCaption( tr2i18n( "Resistor" ) );
    checkBox1->setText( QString::null );
    checkBox1_2->setText( QString::null );
    textLabel1_2->setText( tr2i18n( "Temperature dependance :" ) );
    textLabel1_4_4_2->setText( tr2i18n( "to" ) );
    textLabel1_4_3_3->setText( tr2i18n( "°C" ) );
    textLabel1_3->setText( tr2i18n( "%/°C" ) );
    textLabel1_4_3->setText( tr2i18n( "°C" ) );
    textLabel1_4_3_2_2->setText( tr2i18n( "°C" ) );
    textLabel1_4_3_2_3->setText( tr2i18n( "°C" ) );
    kComboBox1_2_2->clear();
    kComboBox1_2_2->insertItem( tr2i18n( "W" ) );
    kComboBox1_2_2->insertItem( tr2i18n( "mW" ) );
    textLabel1_4_2_2->setText( tr2i18n( "from" ) );
    textLabel1_4_3_2->setText( tr2i18n( "°C" ) );
    textLabel1_4_2_3->setText( tr2i18n( "from" ) );
    textLabel1_4_4_3->setText( tr2i18n( "to" ) );
    kComboBox1->clear();
    kComboBox1->insertItem( tr2i18n( "Carbon" ) );
    kComboBox1->insertItem( tr2i18n( "Wire" ) );
    kComboBox1->insertItem( tr2i18n( "Metallic film" ) );
    kComboBox1->insertItem( tr2i18n( "Oxide film" ) );
    kComboBox1->insertItem( tr2i18n( "NTC" ) );
    kComboBox1->insertItem( tr2i18n( "PTC" ) );
    QToolTip::add( kURLRequester1, tr2i18n( "<p>A file that includs one double value in \"%\" per line.<br>100% is at 20°C and has to be in the file<br>Eache next line is a result of incresing the temperature at 1°C.<p>" ) );
    textLabel1_4_4->setText( tr2i18n( "to" ) );
    textLabel1_4_3_4->setText( tr2i18n( "°C" ) );
    textLabel1_4_2->setText( tr2i18n( "from" ) );
    textLabel1_4_6_2->setText( tr2i18n( "Non linear :" ) );
    textLabel1_4->setText( tr2i18n( "Linear range (max. 1%) :" ) );
    textLabel1_4_5_2->setText( tr2i18n( "Max. rating :" ) );
    textLabel1->setText( tr2i18n( "Material :" ) );
    textLabel1_4_5->setText( tr2i18n( "Working temperature :" ) );
    textLabel1_4_6->setText( tr2i18n( "Store temperature :" ) );
}

#include "resistor.moc"
