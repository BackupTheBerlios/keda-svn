#include <kdialog.h>
#include <klocale.h>
/****************************************************************************
** Form implementation generated from reading ui file '/home/bastl/Kdevel/keda/composer/diode.ui'
**
** Created: Mo Jun 11 20:33:11 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "diode.h"

#include <qvariant.h>
#include <knuminput.h>
#include <qlabel.h>
#include <kcombobox.h>
#include <qframe.h>
#include <qcheckbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "knuminput.h"
#include "kcombobox.h"

/*
 *  Constructs a Diode as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
Diode::Diode( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "Diode" );
    setMinimumSize( QSize( 510, 235 ) );
    DiodeLayout = new QGridLayout( this, 1, 1, 10, 5, "DiodeLayout"); 

    kDoubleNumInput1_2_3_2_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3_2_2" );
    kDoubleNumInput1_2_3_2_2->setPrecision( 3 );

    DiodeLayout->addMultiCellWidget( kDoubleNumInput1_2_3_2_2, 3, 3, 2, 6 );

    kDoubleNumInput1_2_3_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3_2" );
    kDoubleNumInput1_2_3_2->setPrecision( 3 );

    DiodeLayout->addMultiCellWidget( kDoubleNumInput1_2_3_2, 2, 2, 2, 6 );

    textLabel1_4_3_3_2 = new QLabel( this, "textLabel1_4_3_3_2" );
    textLabel1_4_3_3_2->setMinimumSize( QSize( 50, 0 ) );
    textLabel1_4_3_3_2->setMaximumSize( QSize( 50, 32767 ) );

    DiodeLayout->addWidget( textLabel1_4_3_3_2, 3, 7 );

    kComboBox1_2_2 = new KComboBox( FALSE, this, "kComboBox1_2_2" );
    kComboBox1_2_2->setMinimumSize( QSize( 50, 0 ) );
    kComboBox1_2_2->setMaximumSize( QSize( 50, 32767 ) );

    DiodeLayout->addWidget( kComboBox1_2_2, 2, 7 );

    kComboBox1_2 = new KComboBox( FALSE, this, "kComboBox1_2" );

    DiodeLayout->addMultiCellWidget( kComboBox1_2, 1, 1, 2, 7 );

    kComboBox1 = new KComboBox( FALSE, this, "kComboBox1" );

    DiodeLayout->addMultiCellWidget( kComboBox1, 0, 0, 2, 7 );

    textLabel1_2 = new QLabel( this, "textLabel1_2" );
    textLabel1_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)5, 0, 0, textLabel1_2->sizePolicy().hasHeightForWidth() ) );

    DiodeLayout->addMultiCellWidget( textLabel1_2, 1, 1, 0, 1 );

    textLabel1 = new QLabel( this, "textLabel1" );
    textLabel1->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)5, 0, 0, textLabel1->sizePolicy().hasHeightForWidth() ) );

    DiodeLayout->addMultiCellWidget( textLabel1, 0, 0, 0, 1 );

    textLabel1_4_5_2 = new QLabel( this, "textLabel1_4_5_2" );

    DiodeLayout->addMultiCellWidget( textLabel1_4_5_2, 2, 2, 0, 1 );
    spacer1 = new QSpacerItem( 310, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    DiodeLayout->addMultiCell( spacer1, 8, 8, 1, 6 );

    line1 = new QFrame( this, "line1" );
    line1->setMaximumSize( QSize( 32767, 16 ) );
    line1->setFrameShape( QFrame::HLine );
    line1->setFrameShadow( QFrame::Sunken );
    line1->setFrameShape( QFrame::HLine );

    DiodeLayout->addMultiCellWidget( line1, 7, 7, 0, 7 );

    textLabel1_4_6 = new QLabel( this, "textLabel1_4_6" );

    DiodeLayout->addWidget( textLabel1_4_6, 6, 1 );

    kDoubleNumInput1_2_2_3 = new KDoubleNumInput( this, "kDoubleNumInput1_2_2_3" );
    kDoubleNumInput1_2_2_3->setPrecision( 3 );

    DiodeLayout->addWidget( kDoubleNumInput1_2_2_3, 6, 6 );

    textLabel1_4_4_2 = new QLabel( this, "textLabel1_4_4_2" );
    textLabel1_4_4_2->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_4_2->setMaximumSize( QSize( 20, 32767 ) );

    DiodeLayout->addWidget( textLabel1_4_4_2, 5, 5 );

    textLabel1_4_4_3 = new QLabel( this, "textLabel1_4_4_3" );
    textLabel1_4_4_3->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_4_3->setMaximumSize( QSize( 20, 32767 ) );

    DiodeLayout->addWidget( textLabel1_4_4_3, 6, 5 );

    checkBox1_2 = new QCheckBox( this, "checkBox1_2" );
    checkBox1_2->setMaximumSize( QSize( 17, 17 ) );

    DiodeLayout->addWidget( checkBox1_2, 6, 0 );

    checkBox1 = new QCheckBox( this, "checkBox1" );
    checkBox1->setMaximumSize( QSize( 17, 17 ) );

    DiodeLayout->addWidget( checkBox1, 5, 0 );

    kDoubleNumInput1_2_3 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3" );
    kDoubleNumInput1_2_3->setPrecision( 3 );

    DiodeLayout->addWidget( kDoubleNumInput1_2_3, 5, 3 );

    textLabel1_4_3_3 = new QLabel( this, "textLabel1_4_3_3" );
    textLabel1_4_3_3->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_3_3->setMaximumSize( QSize( 20, 32767 ) );

    DiodeLayout->addWidget( textLabel1_4_3_3, 5, 4 );

    textLabel1_4_3_4 = new QLabel( this, "textLabel1_4_3_4" );
    textLabel1_4_3_4->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_3_4->setMaximumSize( QSize( 20, 32767 ) );

    DiodeLayout->addWidget( textLabel1_4_3_4, 6, 4 );

    kDoubleNumInput1_2_4 = new KDoubleNumInput( this, "kDoubleNumInput1_2_4" );
    kDoubleNumInput1_2_4->setPrecision( 3 );

    DiodeLayout->addWidget( kDoubleNumInput1_2_4, 6, 3 );

    textLabel1_4_3_2_3 = new QLabel( this, "textLabel1_4_3_2_3" );
    textLabel1_4_3_2_3->setMinimumSize( QSize( 50, 0 ) );
    textLabel1_4_3_2_3->setMaximumSize( QSize( 50, 32767 ) );

    DiodeLayout->addWidget( textLabel1_4_3_2_3, 6, 7 );

    textLabel1_4_2_3 = new QLabel( this, "textLabel1_4_2_3" );
    textLabel1_4_2_3->setMinimumSize( QSize( 30, 0 ) );
    textLabel1_4_2_3->setMaximumSize( QSize( 30, 32767 ) );

    DiodeLayout->addWidget( textLabel1_4_2_3, 6, 2 );

    textLabel1_4_3_2_2 = new QLabel( this, "textLabel1_4_3_2_2" );
    textLabel1_4_3_2_2->setMinimumSize( QSize( 50, 0 ) );
    textLabel1_4_3_2_2->setMaximumSize( QSize( 50, 32767 ) );

    DiodeLayout->addWidget( textLabel1_4_3_2_2, 5, 7 );

    textLabel1_4_5 = new QLabel( this, "textLabel1_4_5" );

    DiodeLayout->addWidget( textLabel1_4_5, 5, 1 );

    textLabel1_4_2_2 = new QLabel( this, "textLabel1_4_2_2" );

    DiodeLayout->addWidget( textLabel1_4_2_2, 5, 2 );

    kDoubleNumInput1_2_2_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_2_2" );
    kDoubleNumInput1_2_2_2->setPrecision( 3 );

    DiodeLayout->addWidget( kDoubleNumInput1_2_2_2, 5, 6 );

    textLabel1_4_5_2_2 = new QLabel( this, "textLabel1_4_5_2_2" );

    DiodeLayout->addMultiCellWidget( textLabel1_4_5_2_2, 3, 3, 0, 1 );

    kDoubleNumInput1_2_3_2_2_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3_2_2_2" );
    kDoubleNumInput1_2_3_2_2_2->setPrecision( 3 );

    DiodeLayout->addMultiCellWidget( kDoubleNumInput1_2_3_2_2_2, 4, 4, 2, 6 );

    textLabel1_4_3_3_2_2 = new QLabel( this, "textLabel1_4_3_3_2_2" );
    textLabel1_4_3_3_2_2->setMinimumSize( QSize( 50, 0 ) );
    textLabel1_4_3_3_2_2->setMaximumSize( QSize( 50, 32767 ) );

    DiodeLayout->addWidget( textLabel1_4_3_3_2_2, 4, 7 );

    textLabel1_4_5_2_2_2 = new QLabel( this, "textLabel1_4_5_2_2_2" );

    DiodeLayout->addMultiCellWidget( textLabel1_4_5_2_2_2, 4, 4, 0, 1 );
    languageChange();
    resize( QSize(510, 235).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );
}

/*
 *  Destroys the object and frees any allocated resources
 */
Diode::~Diode()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Diode::languageChange()
{
    setCaption( tr2i18n( "Diode" ) );
    textLabel1_4_3_3_2->setText( tr2i18n( "V" ) );
    kComboBox1_2_2->clear();
    kComboBox1_2_2->insertItem( tr2i18n( "A" ) );
    kComboBox1_2_2->insertItem( tr2i18n( "mA" ) );
    kComboBox1_2_2->insertItem( tr2i18n( "nA" ) );
    kComboBox1_2->clear();
    kComboBox1_2->insertItem( tr2i18n( "Normal" ) );
    kComboBox1_2->insertItem( tr2i18n( "Z-diode" ) );
    kComboBox1_2->insertItem( tr2i18n( "Photo diode" ) );
    kComboBox1_2->insertItem( tr2i18n( "LED" ) );
    kComboBox1->clear();
    kComboBox1->insertItem( tr2i18n( "Silicon" ) );
    kComboBox1->insertItem( tr2i18n( "Germanium" ) );
    kComboBox1->insertItem( tr2i18n( "Galliumarsenid" ) );
    kComboBox1->insertItem( tr2i18n( "Galliumphosphid" ) );
    kComboBox1->insertItem( tr2i18n( "YAG (Yttrium-Aluminium-Granat)" ) );
    kComboBox1->insertItem( tr2i18n( "InGaN" ) );
    textLabel1_2->setText( tr2i18n( "Species :" ) );
    textLabel1->setText( tr2i18n( "Material :" ) );
    textLabel1_4_5_2->setText( tr2i18n( "Max. current :" ) );
    textLabel1_4_6->setText( tr2i18n( "Store temperature :" ) );
    textLabel1_4_4_2->setText( tr2i18n( "to" ) );
    textLabel1_4_4_3->setText( tr2i18n( "to" ) );
    checkBox1_2->setText( QString::null );
    checkBox1->setText( QString::null );
    textLabel1_4_3_3->setText( tr2i18n( "°C" ) );
    textLabel1_4_3_4->setText( tr2i18n( "°C" ) );
    textLabel1_4_3_2_3->setText( tr2i18n( "°C" ) );
    textLabel1_4_2_3->setText( tr2i18n( "from" ) );
    textLabel1_4_3_2_2->setText( tr2i18n( "°C" ) );
    textLabel1_4_5->setText( tr2i18n( "Working temperature :" ) );
    textLabel1_4_2_2->setText( tr2i18n( "from" ) );
    textLabel1_4_5_2_2->setText( tr2i18n( "Max. reverse voltage :" ) );
    textLabel1_4_3_3_2_2->setText( tr2i18n( "V" ) );
    textLabel1_4_5_2_2_2->setText( tr2i18n( "Voltage drop :" ) );
}

#include "diode.moc"
