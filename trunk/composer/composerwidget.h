/****************************************************************************
** Form interface generated from reading ui file '/home/bastl/Kdevel/keda/composer/composerwidget.ui'
**
** Created: Sa Jun 9 09:32:04 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef COMPOSERWIDGET_H
#define COMPOSERWIDGET_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QTabWidget;
class QLabel;
class KLineEdit;
class QComboBox;
class QFrame;
class KURLRequester;
class QTextEdit;

class ComposerWidget : public QWidget
{
    Q_OBJECT

public:
    ComposerWidget( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~ComposerWidget();

    QTabWidget* Tabwidget;
    QWidget* characteristics;
    QLabel* textLabel1_5;
    KLineEdit* kLineEdit1_2;
    QComboBox* comboBox1;
    QFrame* line8;
    QWidget* eda;
    QTabWidget* eda_tab;
    QWidget* positions;
    QWidget* names;
    QFrame* eda_view;
    QLabel* textLabel3;
    KURLRequester* image_eda;
    QWidget* pcb;
    QFrame* eda_view_2;
    QTabWidget* eda_tab_2;
    QWidget* positions_2;
    QWidget* names_2;
    QTextEdit* textEdit1;
    QLabel* textLabel3_2;
    KURLRequester* image_pin;
    QWidget* dimension;
    QLabel* textLabel3_3;
    KURLRequester* image_dim;
    QTabWidget* tabWidget6;
    QWidget* tab;
    QFrame* eda_view_2_2;
    QWidget* tab_2;
    QFrame* eda_view_2_2_2;
    QWidget* TabPage;
    QFrame* eda_view_2_2_3;

public slots:
    virtual void character_chosen(int);

protected:
    QGridLayout* ComposerWidgetLayout;
    QGridLayout* characteristicsLayout;
    QSpacerItem* spacer2;
    QGridLayout* edaLayout;
    QHBoxLayout* layout1;
    QGridLayout* pcbLayout;
    QGridLayout* positionsLayout;
    QGridLayout* namesLayout;
    QHBoxLayout* layout7;
    QGridLayout* dimensionLayout;
    QHBoxLayout* layout1_2;
    QGridLayout* tabLayout;
    QGridLayout* tabLayout_2;
    QGridLayout* TabPageLayout;

protected slots:
    virtual void languageChange();

};

#endif // COMPOSERWIDGET_H
