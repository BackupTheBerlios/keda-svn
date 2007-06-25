/****************************************************************************
** Form interface generated from reading ui file '/home/bastl/Kdevel/Keda/trunk/src/amview.ui'
**
** Created: Sa Jun 16 17:32:31 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef AMVIEW_H
#define AMVIEW_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QTabWidget;
class QTable;
class KPushButton;

class AMView : public QWidget
{
    Q_OBJECT

public:
    AMView( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~AMView();

    QTabWidget* tabWidget2;
    QWidget* tab;
    QTable* table1;
    QWidget* TabPage;
    QTable* table1_3;
    QWidget* TabPage_2;
    QTable* table1_3_2;
    QWidget* tab_2;
    QTable* table1_2;
    QWidget* TabPage_3;
    QTable* table1_2_3;
    KPushButton* kPushButton9_2;
    KPushButton* kPushButton9;

protected:
    QGridLayout* AMViewLayout;
    QGridLayout* tabLayout;
    QGridLayout* TabPageLayout;
    QGridLayout* TabPageLayout_2;
    QGridLayout* tabLayout_2;
    QGridLayout* TabPageLayout_3;

protected slots:
    virtual void languageChange();

};

#endif // AMVIEW_H
