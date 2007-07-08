/****************************************************************************
** Form interface generated from reading ui file '/home/bastl/Kdevel/Keda/trunk/src/kedawidget.ui'
**
** Created: So Jul 8 14:55:56 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef KEDAWIDGET_H
#define KEDAWIDGET_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QFrame;
class QToolButton;

class KedaWidget : public QWidget
{
    Q_OBJECT

public:
    KedaWidget( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~KedaWidget();

    QFrame* frame3;
    QToolButton* board;
    QToolButton* part_group;
    QToolButton* logical;
    QToolButton* board_11_2;
    QToolButton* others;
    QToolButton* op;
    QToolButton* resistor;
    QToolButton* diod;
    QToolButton* led;
    QToolButton* diac;
    QToolButton* triac;
    QToolButton* transistor;
    QToolButton* tyristor;
    QToolButton* capacitor;
    QToolButton* coil;
    QToolButton* connectors;
    QToolButton* switches;
    QToolButton* trafos;
    QToolButton* heatsinks;
    QToolButton* cases;
    QToolButton* custom;
    QFrame* Layout;

public slots:
    virtual void boards_clicked();
    virtual void logicals_clicked();
    virtual void linears_clicked();
    virtual void ops_clicked();
    virtual void resistors_clicked();
    virtual void diodes_clicked();
    virtual void leds_clicked();
    virtual void diacs_clicked();
    virtual void triacs_clicked();
    virtual void transistors_clicked();
    virtual void tyristors_clicked();
    virtual void conectors_clicked();
    virtual void switches_clicked();
    virtual void trafos_clicked();
    virtual void heatsinks_clicked();
    virtual void cases_clicked();
    virtual void custom_clicked();
    virtual void part_group_clicked();
    virtual void capacitor_clicked();
    virtual void coil_clicked();
    virtual void others_clicked();

protected:
    QGridLayout* KedaWidgetLayout;
    QVBoxLayout* frame3Layout;
    QSpacerItem* spacer1;

protected slots:
    virtual void languageChange();

};

#endif // KEDAWIDGET_H
