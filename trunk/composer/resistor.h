/****************************************************************************
** Form interface generated from reading ui file '/home/bastl/Kdevel/keda/composer/resistor.ui'
**
** Created: Sa Jun 9 09:32:19 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef RESISTOR_H
#define RESISTOR_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QCheckBox;
class QLabel;
class QFrame;
class KDoubleNumInput;
class KComboBox;
class KURLRequester;

class Resistor : public QWidget
{
    Q_OBJECT

public:
    Resistor( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~Resistor();

    QCheckBox* checkBox1;
    QCheckBox* checkBox1_2;
    QLabel* textLabel1_2;
    QFrame* line1;
    QLabel* textLabel1_4_4_2;
    KDoubleNumInput* kDoubleNumInput1_2_2_3;
    QLabel* textLabel1_4_3_3;
    QLabel* textLabel1_3;
    QLabel* textLabel1_4_3;
    KDoubleNumInput* kDoubleNumInput1_2;
    KDoubleNumInput* kDoubleNumInput1_2_3_2;
    QLabel* textLabel1_4_3_2_2;
    KDoubleNumInput* kDoubleNumInput1_2_2_2;
    QLabel* textLabel1_4_3_2_3;
    KComboBox* kComboBox1_2_2;
    QLabel* textLabel1_4_2_2;
    QLabel* textLabel1_4_3_2;
    KDoubleNumInput* kDoubleNumInput1_2_3;
    QLabel* textLabel1_4_2_3;
    QLabel* textLabel1_4_4_3;
    KComboBox* kComboBox1;
    KURLRequester* kURLRequester1;
    QLabel* textLabel1_4_4;
    QLabel* textLabel1_4_3_4;
    KDoubleNumInput* kDoubleNumInput1_2_2;
    KDoubleNumInput* kDoubleNumInput1_2_4;
    KDoubleNumInput* kDoubleNumInput1;
    QLabel* textLabel1_4_2;
    QLabel* textLabel1_4_6_2;
    QLabel* textLabel1_4;
    QLabel* textLabel1_4_5_2;
    QLabel* textLabel1;
    QLabel* textLabel1_4_5;
    QLabel* textLabel1_4_6;

protected:
    QGridLayout* ResistorLayout;
    QSpacerItem* spacer1;

protected slots:
    virtual void languageChange();

};

#endif // RESISTOR_H
