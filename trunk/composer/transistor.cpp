#include <kdialog.h>
#include <klocale.h>
/****************************************************************************
** Form implementation generated from reading ui file '/home/bastl/Kdevel/keda/composer/transistor.ui'
**
** Created: Mi Jun 6 22:40:41 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "transistor.h"

#include <qvariant.h>
#include <qcheckbox.h>
#include <qlabel.h>
#include <knuminput.h>
#include <kcombobox.h>
#include <kurlrequester.h>
#include <qframe.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "knuminput.h"
#include "kcombobox.h"
#include "kurlrequester.h"
#include "klineedit.h"
#include "kpushbutton.h"

/*
 *  Constructs a Transistor as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
Transistor::Transistor( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "Transistor" );
    setMinimumSize( QSize( 520, 510 ) );
    TransistorLayout = new QGridLayout( this, 1, 1, 11, 6, "TransistorLayout"); 

    checkBox1_2 = new QCheckBox( this, "checkBox1_2" );
    checkBox1_2->setMaximumSize( QSize( 17, 17 ) );

    TransistorLayout->addWidget( checkBox1_2, 14, 0 );

    textLabel1_4_6 = new QLabel( this, "textLabel1_4_6" );

    TransistorLayout->addWidget( textLabel1_4_6, 14, 1 );

    ug = new KDoubleNumInput( this, "ug" );
    ug->setEnabled( FALSE );
    ug->setMaxValue( 1e+07 );

    TransistorLayout->addMultiCellWidget( ug, 7, 7, 2, 6 );

    kDoubleNumInput1_2_3_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3_2" );

    TransistorLayout->addMultiCellWidget( kDoubleNumInput1_2_3_2, 2, 2, 2, 6 );

    kComboBox1_2_2 = new KComboBox( FALSE, this, "kComboBox1_2_2" );
    kComboBox1_2_2->setMinimumSize( QSize( 55, 0 ) );
    kComboBox1_2_2->setMaximumSize( QSize( 55, 32767 ) );

    TransistorLayout->addWidget( kComboBox1_2_2, 2, 7 );

    textLabel1_4_3_3_2_2 = new QLabel( this, "textLabel1_4_3_3_2_2" );
    textLabel1_4_3_3_2_2->setMinimumSize( QSize( 50, 0 ) );
    textLabel1_4_3_3_2_2->setMaximumSize( QSize( 50, 32767 ) );

    TransistorLayout->addWidget( textLabel1_4_3_3_2_2, 5, 7 );

    textLabel1_4_4_2 = new QLabel( this, "textLabel1_4_4_2" );
    textLabel1_4_4_2->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_4_2->setMaximumSize( QSize( 20, 32767 ) );

    TransistorLayout->addWidget( textLabel1_4_4_2, 13, 5 );

    kDoubleNumInput1_2_2_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_2_2" );
    kDoubleNumInput1_2_2_2->setPrecision( 3 );

    TransistorLayout->addWidget( kDoubleNumInput1_2_2_2, 13, 6 );

    textLabel1_4_2_3 = new QLabel( this, "textLabel1_4_2_3" );
    textLabel1_4_2_3->setMinimumSize( QSize( 30, 0 ) );
    textLabel1_4_2_3->setMaximumSize( QSize( 30, 32767 ) );

    TransistorLayout->addWidget( textLabel1_4_2_3, 14, 2 );

    kComboBox1_2_2_3 = new KComboBox( FALSE, this, "kComboBox1_2_2_3" );
    kComboBox1_2_2_3->setMinimumSize( QSize( 55, 0 ) );
    kComboBox1_2_2_3->setMaximumSize( QSize( 55, 32767 ) );

    TransistorLayout->addWidget( kComboBox1_2_2_3, 4, 7 );

    textLabel1_4_3_3 = new QLabel( this, "textLabel1_4_3_3" );
    textLabel1_4_3_3->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_3_3->setMaximumSize( QSize( 20, 32767 ) );

    TransistorLayout->addWidget( textLabel1_4_3_3, 13, 4 );

    kDoubleNumInput1_2_4 = new KDoubleNumInput( this, "kDoubleNumInput1_2_4" );
    kDoubleNumInput1_2_4->setPrecision( 3 );

    TransistorLayout->addWidget( kDoubleNumInput1_2_4, 14, 3 );

    ug_unit = new QLabel( this, "ug_unit" );
    ug_unit->setEnabled( FALSE );
    ug_unit->setMinimumSize( QSize( 55, 0 ) );
    ug_unit->setMaximumSize( QSize( 55, 32767 ) );

    TransistorLayout->addWidget( ug_unit, 7, 7 );

    textLabel1_4_3_3_2 = new QLabel( this, "textLabel1_4_3_3_2" );
    textLabel1_4_3_3_2->setMinimumSize( QSize( 55, 0 ) );
    textLabel1_4_3_3_2->setMaximumSize( QSize( 55, 32767 ) );

    TransistorLayout->addWidget( textLabel1_4_3_3_2, 3, 7 );

    kDoubleNumInput1_2_3_2_2_3_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3_2_2_3_2" );

    TransistorLayout->addMultiCellWidget( kDoubleNumInput1_2_3_2_2_3_2, 10, 10, 2, 6 );

    textLabel1_4_3_2_3 = new QLabel( this, "textLabel1_4_3_2_3" );
    textLabel1_4_3_2_3->setMinimumSize( QSize( 55, 0 ) );
    textLabel1_4_3_2_3->setMaximumSize( QSize( 55, 32767 ) );

    TransistorLayout->addWidget( textLabel1_4_3_2_3, 14, 7 );

    kDoubleNumInput1_2_2_3 = new KDoubleNumInput( this, "kDoubleNumInput1_2_2_3" );
    kDoubleNumInput1_2_2_3->setPrecision( 3 );

    TransistorLayout->addWidget( kDoubleNumInput1_2_2_3, 14, 6 );

    ibmax = new KDoubleNumInput( this, "ibmax" );

    TransistorLayout->addMultiCellWidget( ibmax, 6, 6, 2, 6 );

    textLabel1_4_4_3 = new QLabel( this, "textLabel1_4_4_3" );
    textLabel1_4_4_3->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_4_3->setMaximumSize( QSize( 20, 32767 ) );

    TransistorLayout->addWidget( textLabel1_4_4_3, 14, 5 );

    textLabel1_4_2_2 = new QLabel( this, "textLabel1_4_2_2" );
    textLabel1_4_2_2->setMinimumSize( QSize( 30, 0 ) );
    textLabel1_4_2_2->setMaximumSize( QSize( 30, 32767 ) );

    TransistorLayout->addWidget( textLabel1_4_2_2, 13, 2 );

    kDoubleNumInput1_2_3_2_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3_2_2" );

    TransistorLayout->addMultiCellWidget( kDoubleNumInput1_2_3_2_2, 3, 3, 2, 6 );

    rds = new KDoubleNumInput( this, "rds" );
    rds->setEnabled( FALSE );
    rds->setMaxValue( 1e+07 );

    TransistorLayout->addMultiCellWidget( rds, 8, 8, 2, 6 );

    kDoubleNumInput1_2_3 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3" );
    kDoubleNumInput1_2_3->setPrecision( 3 );

    TransistorLayout->addWidget( kDoubleNumInput1_2_3, 13, 3 );

    kDoubleNumInput1_2_3_2_2_3_3 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3_2_2_3_3" );

    TransistorLayout->addMultiCellWidget( kDoubleNumInput1_2_3_2_2_3_3, 11, 11, 2, 6 );

    kDoubleNumInput1_2_3_2_2_3 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3_2_2_3" );

    TransistorLayout->addMultiCellWidget( kDoubleNumInput1_2_3_2_2_3, 9, 9, 2, 6 );

    kDoubleNumInput1_2_3_2_2_2_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3_2_2_2_2" );

    TransistorLayout->addMultiCellWidget( kDoubleNumInput1_2_3_2_2_2_2, 5, 5, 2, 6 );

    textLabel1_4_3_4 = new QLabel( this, "textLabel1_4_3_4" );
    textLabel1_4_3_4->setMinimumSize( QSize( 20, 0 ) );
    textLabel1_4_3_4->setMaximumSize( QSize( 20, 32767 ) );

    TransistorLayout->addWidget( textLabel1_4_3_4, 14, 4 );

    kDoubleNumInput1_2_3_2_2_2 = new KDoubleNumInput( this, "kDoubleNumInput1_2_3_2_2_2" );

    TransistorLayout->addMultiCellWidget( kDoubleNumInput1_2_3_2_2_2, 4, 4, 2, 6 );

    textLabel1_4_5_2_2 = new QLabel( this, "textLabel1_4_5_2_2" );
    textLabel1_4_5_2_2->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( textLabel1_4_5_2_2, 3, 3, 0, 1 );

    textLabel1_4_5_2_2_2 = new QLabel( this, "textLabel1_4_5_2_2_2" );
    textLabel1_4_5_2_2_2->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( textLabel1_4_5_2_2_2, 4, 4, 0, 1 );

    checkBox1 = new QCheckBox( this, "checkBox1" );
    checkBox1->setMaximumSize( QSize( 17, 17 ) );

    TransistorLayout->addWidget( checkBox1, 13, 0 );

    textLabel1_4_5 = new QLabel( this, "textLabel1_4_5" );

    TransistorLayout->addWidget( textLabel1_4_5, 13, 1 );
    spacer1 = new QSpacerItem( 310, 16, QSizePolicy::Minimum, QSizePolicy::Expanding );
    TransistorLayout->addMultiCell( spacer1, 16, 16, 1, 6 );

    ug_text = new QLabel( this, "ug_text" );
    ug_text->setEnabled( FALSE );
    ug_text->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( ug_text, 7, 7, 0, 1 );

    rds_text = new QLabel( this, "rds_text" );
    rds_text->setEnabled( FALSE );
    rds_text->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( rds_text, 8, 8, 0, 1 );

    textLabel1_4_5_2_2_3 = new QLabel( this, "textLabel1_4_5_2_2_3" );
    textLabel1_4_5_2_2_3->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( textLabel1_4_5_2_2_3, 9, 9, 0, 1 );

    textLabel1_4_5_2_2_3_2 = new QLabel( this, "textLabel1_4_5_2_2_3_2" );
    textLabel1_4_5_2_2_3_2->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( textLabel1_4_5_2_2_3_2, 10, 10, 0, 1 );

    textLabel1_4_5_2_2_3_3 = new QLabel( this, "textLabel1_4_5_2_2_3_3" );
    textLabel1_4_5_2_2_3_3->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( textLabel1_4_5_2_2_3_3, 11, 11, 0, 1 );

    textLabel1_4_6_2 = new QLabel( this, "textLabel1_4_6_2" );
    textLabel1_4_6_2->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( textLabel1_4_6_2, 12, 12, 0, 1 );

    textLabel1_4_5_2 = new QLabel( this, "textLabel1_4_5_2" );
    textLabel1_4_5_2->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( textLabel1_4_5_2, 2, 2, 0, 1 );

    textLabel1_2 = new QLabel( this, "textLabel1_2" );
    textLabel1_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)5, 0, 0, textLabel1_2->sizePolicy().hasHeightForWidth() ) );
    textLabel1_2->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( textLabel1_2, 1, 1, 0, 1 );

    textLabel1 = new QLabel( this, "textLabel1" );
    textLabel1->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)5, 0, 0, textLabel1->sizePolicy().hasHeightForWidth() ) );
    textLabel1->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( textLabel1, 0, 0, 0, 1 );

    ib_text = new QLabel( this, "ib_text" );
    ib_text->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( ib_text, 6, 6, 0, 1 );

    textLabel1_4_5_2_2_2_2 = new QLabel( this, "textLabel1_4_5_2_2_2_2" );
    textLabel1_4_5_2_2_2_2->setMinimumSize( QSize( 170, 0 ) );

    TransistorLayout->addMultiCellWidget( textLabel1_4_5_2_2_2_2, 5, 5, 0, 1 );

    freq_unit = new KComboBox( FALSE, this, "freq_unit" );
    freq_unit->setMinimumSize( QSize( 55, 0 ) );
    freq_unit->setMaximumSize( QSize( 55, 32767 ) );

    TransistorLayout->addWidget( freq_unit, 11, 7 );

    textLabel1_4_3_2_2 = new QLabel( this, "textLabel1_4_3_2_2" );
    textLabel1_4_3_2_2->setMinimumSize( QSize( 55, 0 ) );
    textLabel1_4_3_2_2->setMaximumSize( QSize( 55, 32767 ) );

    TransistorLayout->addWidget( textLabel1_4_3_2_2, 13, 7 );

    ib_unit = new KComboBox( FALSE, this, "ib_unit" );
    ib_unit->setMinimumSize( QSize( 55, 0 ) );
    ib_unit->setMaximumSize( QSize( 55, 32767 ) );

    TransistorLayout->addWidget( ib_unit, 6, 7 );

    toff_unit = new KComboBox( FALSE, this, "toff_unit" );
    toff_unit->setMinimumSize( QSize( 55, 0 ) );
    toff_unit->setMaximumSize( QSize( 55, 32767 ) );

    TransistorLayout->addWidget( toff_unit, 10, 7 );

    kURLRequester1 = new KURLRequester( this, "kURLRequester1" );

    TransistorLayout->addMultiCellWidget( kURLRequester1, 12, 12, 2, 7 );

    type = new KComboBox( FALSE, this, "type" );

    TransistorLayout->addMultiCellWidget( type, 1, 1, 2, 7 );

    material = new KComboBox( FALSE, this, "material" );

    TransistorLayout->addMultiCellWidget( material, 0, 0, 2, 7 );

    line1 = new QFrame( this, "line1" );
    line1->setMaximumSize( QSize( 32767, 16 ) );
    line1->setFrameShape( QFrame::HLine );
    line1->setFrameShadow( QFrame::Sunken );
    line1->setFrameShape( QFrame::HLine );

    TransistorLayout->addMultiCellWidget( line1, 15, 15, 0, 7 );

    ton_unit = new KComboBox( FALSE, this, "ton_unit" );
    ton_unit->setMinimumSize( QSize( 55, 0 ) );
    ton_unit->setMaximumSize( QSize( 55, 32767 ) );

    TransistorLayout->addWidget( ton_unit, 9, 7 );

    rds_unit = new KComboBox( FALSE, this, "rds_unit" );
    rds_unit->setEnabled( FALSE );
    rds_unit->setMinimumSize( QSize( 55, 0 ) );
    rds_unit->setMaximumSize( QSize( 55, 32767 ) );

    TransistorLayout->addWidget( rds_unit, 8, 7 );
    languageChange();
    resize( QSize(520, 510).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( type, SIGNAL( activated(int) ), parentWidget()->parentWidget()->parentWidget()->parentWidget(), SLOT( t_type_changed(int) ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
Transistor::~Transistor()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Transistor::languageChange()
{
    setCaption( tr2i18n( "Transistor" ) );
    checkBox1_2->setText( QString::null );
    textLabel1_4_6->setText( tr2i18n( "Store temperature :" ) );
    kComboBox1_2_2->clear();
    kComboBox1_2_2->insertItem( tr2i18n( "A" ) );
    kComboBox1_2_2->insertItem( tr2i18n( "mA" ) );
    textLabel1_4_3_3_2_2->setText( tr2i18n( "V" ) );
    textLabel1_4_4_2->setText( tr2i18n( "to" ) );
    textLabel1_4_2_3->setText( tr2i18n( "from" ) );
    kComboBox1_2_2_3->clear();
    kComboBox1_2_2_3->insertItem( tr2i18n( "W" ) );
    kComboBox1_2_2_3->insertItem( tr2i18n( "mW" ) );
    textLabel1_4_3_3->setText( tr2i18n( "°C" ) );
    ug_unit->setText( tr2i18n( "V" ) );
    textLabel1_4_3_3_2->setText( tr2i18n( "V" ) );
    textLabel1_4_3_2_3->setText( tr2i18n( "°C" ) );
    textLabel1_4_4_3->setText( tr2i18n( "to" ) );
    textLabel1_4_2_2->setText( tr2i18n( "from" ) );
    textLabel1_4_3_4->setText( tr2i18n( "°C" ) );
    QToolTip::add( kDoubleNumInput1_2_3_2_2_2, tr2i18n( "<p>The voltage drop of silicon is arround 0.7V, So with a max. current of 10A <b>P</b><font size=\"-1\" face=\"Voreinstellung\">tot</font> is then 7W. <p>" ) );
    textLabel1_4_5_2_2->setText( tr2i18n( "Max. voltage :" ) );
    textLabel1_4_5_2_2_2->setText( tr2i18n( "Max. power (<b>P</b><font size=\"-1\" face=\"Voreinstellung\">tot</font>) :" ) );
    checkBox1->setText( QString::null );
    textLabel1_4_5->setText( tr2i18n( "Working temperature :" ) );
    ug_text->setText( tr2i18n( "<b>U</b><font size=\"-1\" face=\"Voreinstellung\">Gon</font> :" ) );
    rds_text->setText( tr2i18n( "<b>R</b><font size=\"-1\" face=\"Voreinstellung\">DSon</font> :" ) );
    textLabel1_4_5_2_2_3->setText( tr2i18n( "<b>t</b><font size=\"-1\" face=\"Voreinstellung\">on</font> :" ) );
    textLabel1_4_5_2_2_3_2->setText( tr2i18n( "<b>t</b><font size=\"-1\" face=\"Voreinstellung\">off</font> :" ) );
    textLabel1_4_5_2_2_3_3->setText( tr2i18n( "Max. frequency :" ) );
    textLabel1_4_6_2->setText( tr2i18n( "Amplifier factors :" ) );
    textLabel1_4_5_2->setText( tr2i18n( "Max. current :" ) );
    textLabel1_2->setText( tr2i18n( "Type :" ) );
    textLabel1->setText( tr2i18n( "Material :" ) );
    ib_text->setText( tr2i18n( "<b>I</b><font size=\"-1\" face=\"Voreinstellung\">Bmax</font> :" ) );
    textLabel1_4_5_2_2_2_2->setText( tr2i18n( "Voltage drop  :" ) );
    freq_unit->clear();
    freq_unit->insertItem( tr2i18n( "MHz" ) );
    freq_unit->insertItem( tr2i18n( "GHz" ) );
    textLabel1_4_3_2_2->setText( tr2i18n( "°C" ) );
    ib_unit->clear();
    ib_unit->insertItem( tr2i18n( "A" ) );
    ib_unit->insertItem( tr2i18n( "mA" ) );
    toff_unit->clear();
    toff_unit->insertItem( tr2i18n( "µs " ) );
    toff_unit->insertItem( tr2i18n( "ns " ) );
    toff_unit->insertItem( tr2i18n( "ps " ) );
    toff_unit->setCurrentItem( 1 );
    QToolTip::add( kURLRequester1, tr2i18n( "<p>A file that includs values of <b>I</b><font size=\"-1\" face=\"Voreinstellung\">CE</font> : <b>I</b><font size=\"-1\" face=\"Voreinstellung\">B</font> (<b>R</b><font size=\"-1\" face=\"Voreinstellung\">DS</font>) as double values, starting at <b>I</b><font size=\"-1\" face=\"Voreinstellung\">B</font> (<b>V</b><font size=\"-1\" face=\"Voreinstellung\">G</font>) = 0.<p>\n"
"<p>\n"
"The first value is a byte of this:\n"
"<table>\n"
"<tr><td>000~~~01 </td><td>Values are of unit nA (nV)</td></tr>\n"
"<tr><td>000~~~10 </td><td>Values are of unit mA (mV)</td></tr>\n"
"<tr><td>000~~~01 </td><td>Values are of unit A (V)</td></tr>\n"
"<tr><td>000001~~ </td><td>Values are of steps in 1 of unit</td></tr>\n"
"<tr><td>000010~~ </td><td>Values are of steps in 5 of unit</td></tr>\n"
"<tr><td>000011~~ </td><td>Values are of steps in 10 of unit</td></tr>\n"
"<tr><td>000100~~ </td><td>Values are of steps in 50 of unit</td></tr>\n"
"<tr><td>000101~~ </td><td>Values are of steps in 100 of unit</td></tr>\n"
"<tr><td>000110~~ </td><td>Values are of steps in 500 of unit</td></tr>\n"
"</table>\n"
"</p>" ) );
    type->clear();
    type->insertItem( tr2i18n( "PNP" ) );
    type->insertItem( tr2i18n( "NPN" ) );
    type->insertItem( tr2i18n( "FET-N" ) );
    type->insertItem( tr2i18n( "FET-P" ) );
    type->insertItem( tr2i18n( "MOS-FET-N" ) );
    type->insertItem( tr2i18n( "MOS-FET-P" ) );
    type->insertItem( tr2i18n( "VMOS" ) );
    material->clear();
    material->insertItem( tr2i18n( "Silicon" ) );
    material->insertItem( tr2i18n( "Germanium" ) );
    material->insertItem( tr2i18n( "Galliumarsenid" ) );
    ton_unit->clear();
    ton_unit->insertItem( tr2i18n( "µs " ) );
    ton_unit->insertItem( tr2i18n( "ns " ) );
    ton_unit->insertItem( tr2i18n( "ps " ) );
    ton_unit->setCurrentItem( 1 );
    rds_unit->clear();
    rds_unit->insertItem( tr2i18n( "Ω " ) );
    rds_unit->insertItem( tr2i18n( "mΩ" ) );
    rds_unit->setCurrentItem( 1 );
}

void Transistor::t_type_changed(int)
{
    qWarning( "Transistor::t_type_changed(int): Not implemented yet" );
}

#include "transistor.moc"
