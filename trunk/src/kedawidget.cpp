#include <kdialog.h>
#include <klocale.h>
/****************************************************************************
** Form implementation generated from reading ui file '/home/bastl/Kdevel/Keda/trunk/src/kedawidget.ui'
**
** Created: So Jul 8 14:57:10 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "kedawidget.h"

#include <qvariant.h>
#include <qframe.h>
#include <qtoolbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a KedaWidget as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
KedaWidget::KedaWidget( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "KedaWidget" );
    KedaWidgetLayout = new QGridLayout( this, 1, 1, 1, 0, "KedaWidgetLayout"); 

    frame3 = new QFrame( this, "frame3" );
    frame3->setMinimumSize( QSize( 125, 0 ) );
    frame3->setMaximumSize( QSize( 125, 32767 ) );
    frame3->setFrameShape( QFrame::StyledPanel );
    frame3->setFrameShadow( QFrame::Raised );
    frame3Layout = new QVBoxLayout( frame3, 0, 0, "frame3Layout"); 

    board = new QToolButton( frame3, "board" );
    board->setMinimumSize( QSize( 0, 25 ) );
    board->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( board );

    part_group = new QToolButton( frame3, "part_group" );
    part_group->setMinimumSize( QSize( 0, 25 ) );
    part_group->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( part_group );

    logical = new QToolButton( frame3, "logical" );
    logical->setMinimumSize( QSize( 0, 25 ) );
    logical->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( logical );

    board_11_2 = new QToolButton( frame3, "board_11_2" );
    board_11_2->setMinimumSize( QSize( 0, 25 ) );
    board_11_2->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( board_11_2 );

    others = new QToolButton( frame3, "others" );
    others->setMinimumSize( QSize( 0, 25 ) );
    others->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( others );

    op = new QToolButton( frame3, "op" );
    op->setMinimumSize( QSize( 0, 25 ) );
    op->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( op );

    resistor = new QToolButton( frame3, "resistor" );
    resistor->setMinimumSize( QSize( 0, 25 ) );
    resistor->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( resistor );

    diod = new QToolButton( frame3, "diod" );
    diod->setMinimumSize( QSize( 0, 25 ) );
    diod->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( diod );

    led = new QToolButton( frame3, "led" );
    led->setMinimumSize( QSize( 0, 25 ) );
    led->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( led );

    diac = new QToolButton( frame3, "diac" );
    diac->setMinimumSize( QSize( 0, 25 ) );
    diac->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( diac );

    triac = new QToolButton( frame3, "triac" );
    triac->setMinimumSize( QSize( 0, 25 ) );
    triac->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( triac );

    transistor = new QToolButton( frame3, "transistor" );
    transistor->setMinimumSize( QSize( 0, 25 ) );
    transistor->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( transistor );

    tyristor = new QToolButton( frame3, "tyristor" );
    tyristor->setMinimumSize( QSize( 0, 25 ) );
    tyristor->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( tyristor );

    capacitor = new QToolButton( frame3, "capacitor" );
    capacitor->setMinimumSize( QSize( 0, 25 ) );
    capacitor->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( capacitor );

    coil = new QToolButton( frame3, "coil" );
    coil->setMinimumSize( QSize( 0, 25 ) );
    coil->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( coil );

    connectors = new QToolButton( frame3, "connectors" );
    connectors->setMinimumSize( QSize( 0, 25 ) );
    connectors->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( connectors );

    switches = new QToolButton( frame3, "switches" );
    switches->setMinimumSize( QSize( 0, 25 ) );
    switches->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( switches );

    trafos = new QToolButton( frame3, "trafos" );
    trafos->setMinimumSize( QSize( 0, 25 ) );
    trafos->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( trafos );

    heatsinks = new QToolButton( frame3, "heatsinks" );
    heatsinks->setMinimumSize( QSize( 0, 25 ) );
    heatsinks->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( heatsinks );

    cases = new QToolButton( frame3, "cases" );
    cases->setMinimumSize( QSize( 0, 25 ) );
    cases->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( cases );

    custom = new QToolButton( frame3, "custom" );
    custom->setMinimumSize( QSize( 0, 25 ) );
    custom->setMaximumSize( QSize( 32767, 25 ) );
    frame3Layout->addWidget( custom );
    spacer1 = new QSpacerItem( 120, 90, QSizePolicy::Minimum, QSizePolicy::Expanding );
    frame3Layout->addItem( spacer1 );

    KedaWidgetLayout->addWidget( frame3, 0, 0 );

    Layout = new QFrame( this, "Layout" );
    Layout->setPaletteBackgroundColor( QColor( 253, 247, 210 ) );
    Layout->setFrameShape( QFrame::StyledPanel );
    Layout->setFrameShadow( QFrame::Sunken );

    KedaWidgetLayout->addWidget( Layout, 0, 1 );
    languageChange();
    resize( QSize(677, 626).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( board, SIGNAL( clicked() ), this, SLOT( boards_clicked() ) );
    connect( part_group, SIGNAL( clicked() ), this, SLOT( part_group_clicked() ) );
    connect( logical, SIGNAL( clicked() ), this, SLOT( logicals_clicked() ) );
    connect( board_11_2, SIGNAL( clicked() ), this, SLOT( linears_clicked() ) );
    connect( op, SIGNAL( clicked() ), this, SLOT( ops_clicked() ) );
    connect( resistor, SIGNAL( clicked() ), this, SLOT( resistors_clicked() ) );
    connect( diod, SIGNAL( clicked() ), this, SLOT( diodes_clicked() ) );
    connect( led, SIGNAL( clicked() ), this, SLOT( leds_clicked() ) );
    connect( triac, SIGNAL( clicked() ), this, SLOT( triacs_clicked() ) );
    connect( transistor, SIGNAL( clicked() ), this, SLOT( transistors_clicked() ) );
    connect( tyristor, SIGNAL( clicked() ), this, SLOT( tyristors_clicked() ) );
    connect( capacitor, SIGNAL( clicked() ), this, SLOT( capacitor_clicked() ) );
    connect( coil, SIGNAL( clicked() ), this, SLOT( coil_clicked() ) );
    connect( connectors, SIGNAL( clicked() ), this, SLOT( conectors_clicked() ) );
    connect( switches, SIGNAL( clicked() ), this, SLOT( switches_clicked() ) );
    connect( trafos, SIGNAL( clicked() ), this, SLOT( trafos_clicked() ) );
    connect( heatsinks, SIGNAL( clicked() ), this, SLOT( heatsinks_clicked() ) );
    connect( cases, SIGNAL( clicked() ), this, SLOT( cases_clicked() ) );
    connect( custom, SIGNAL( clicked() ), this, SLOT( custom_clicked() ) );
    connect( diac, SIGNAL( clicked() ), this, SLOT( diacs_clicked() ) );
    connect( others, SIGNAL( clicked() ), this, SLOT( others_clicked() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
KedaWidget::~KedaWidget()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void KedaWidget::languageChange()
{
    setCaption( tr2i18n( "KedaWidget" ) );
    board->setText( tr2i18n( "Boards" ) );
    part_group->setText( tr2i18n( "Part groups" ) );
    logical->setText( tr2i18n( "Logical ICs" ) );
    board_11_2->setText( tr2i18n( "Linear ICs" ) );
    others->setText( tr2i18n( "Other ICs" ) );
    op->setText( tr2i18n( "OPs" ) );
    resistor->setText( tr2i18n( "Resistors" ) );
    diod->setText( tr2i18n( "Diodes" ) );
    led->setText( tr2i18n( "LEDs" ) );
    diac->setText( tr2i18n( "Diacs" ) );
    triac->setText( tr2i18n( "Triacs" ) );
    transistor->setText( tr2i18n( "Transistors" ) );
    tyristor->setText( tr2i18n( "Tyristors" ) );
    capacitor->setText( tr2i18n( "Capacitors" ) );
    coil->setText( tr2i18n( "Coils" ) );
    connectors->setText( tr2i18n( "Connectors" ) );
    switches->setText( tr2i18n( "Switches" ) );
    trafos->setText( tr2i18n( "Power supplys" ) );
    heatsinks->setText( tr2i18n( "Heat sinks" ) );
    heatsinks->setAccel( QKeySequence( QString::null ) );
    cases->setText( tr2i18n( "Cases" ) );
    cases->setAccel( QKeySequence( QString::null ) );
    custom->setText( tr2i18n( "Custom" ) );
    custom->setAccel( QKeySequence( QString::null ) );
}

void KedaWidget::boards_clicked()
{
    qWarning( "KedaWidget::boards_clicked(): Not implemented yet" );
}

void KedaWidget::logicals_clicked()
{
    qWarning( "KedaWidget::logicals_clicked(): Not implemented yet" );
}

void KedaWidget::linears_clicked()
{
    qWarning( "KedaWidget::linears_clicked(): Not implemented yet" );
}

void KedaWidget::ops_clicked()
{
    qWarning( "KedaWidget::ops_clicked(): Not implemented yet" );
}

void KedaWidget::resistors_clicked()
{
    qWarning( "KedaWidget::resistors_clicked(): Not implemented yet" );
}

void KedaWidget::diodes_clicked()
{
    qWarning( "KedaWidget::diodes_clicked(): Not implemented yet" );
}

void KedaWidget::leds_clicked()
{
    qWarning( "KedaWidget::leds_clicked(): Not implemented yet" );
}

void KedaWidget::diacs_clicked()
{
    qWarning( "KedaWidget::diacs_clicked(): Not implemented yet" );
}

void KedaWidget::triacs_clicked()
{
    qWarning( "KedaWidget::triacs_clicked(): Not implemented yet" );
}

void KedaWidget::transistors_clicked()
{
    qWarning( "KedaWidget::transistors_clicked(): Not implemented yet" );
}

void KedaWidget::tyristors_clicked()
{
    qWarning( "KedaWidget::tyristors_clicked(): Not implemented yet" );
}

void KedaWidget::conectors_clicked()
{
    qWarning( "KedaWidget::conectors_clicked(): Not implemented yet" );
}

void KedaWidget::switches_clicked()
{
    qWarning( "KedaWidget::switches_clicked(): Not implemented yet" );
}

void KedaWidget::trafos_clicked()
{
    qWarning( "KedaWidget::trafos_clicked(): Not implemented yet" );
}

void KedaWidget::heatsinks_clicked()
{
    qWarning( "KedaWidget::heatsinks_clicked(): Not implemented yet" );
}

void KedaWidget::cases_clicked()
{
    qWarning( "KedaWidget::cases_clicked(): Not implemented yet" );
}

void KedaWidget::custom_clicked()
{
    qWarning( "KedaWidget::custom_clicked(): Not implemented yet" );
}

void KedaWidget::part_group_clicked()
{
    qWarning( "KedaWidget::part_group_clicked(): Not implemented yet" );
}

void KedaWidget::capacitor_clicked()
{
    qWarning( "KedaWidget::capacitor_clicked(): Not implemented yet" );
}

void KedaWidget::coil_clicked()
{
    qWarning( "KedaWidget::coil_clicked(): Not implemented yet" );
}

void KedaWidget::others_clicked()
{
    qWarning( "KedaWidget::others_clicked(): Not implemented yet" );
}

#include "kedawidget.moc"
