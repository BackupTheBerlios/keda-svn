/****************************************************************************
** Form interface generated from reading ui file '/home/bastl/Kdevel/composer/src/diode.ui'
**
** Created: Sa Mai 19 22:16:04 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef DIODE_H
#define DIODE_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class KDoubleNumInput;
class QLabel;
class KComboBox;
class QFrame;
class QCheckBox;

class Diode : public QWidget
{
    Q_OBJECT

public:
    Diode( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~Diode();

    KDoubleNumInput* kDoubleNumInput1_2_3_2_2;
    KDoubleNumInput* kDoubleNumInput1_2_3_2;
    QLabel* textLabel1_4_3_3_2;
    KComboBox* kComboBox1_2_2;
    KComboBox* kComboBox1_2;
    KComboBox* kComboBox1;
    QLabel* textLabel1_2;
    QLabel* textLabel1;
    QLabel* textLabel1_4_5_2;
    QFrame* line1;
    QLabel* textLabel1_4_6;
    KDoubleNumInput* kDoubleNumInput1_2_2_3;
    QLabel* textLabel1_4_4_2;
    QLabel* textLabel1_4_4_3;
    QCheckBox* checkBox1_2;
    QCheckBox* checkBox1;
    KDoubleNumInput* kDoubleNumInput1_2_3;
    QLabel* textLabel1_4_3_3;
    QLabel* textLabel1_4_3_4;
    KDoubleNumInput* kDoubleNumInput1_2_4;
    QLabel* textLabel1_4_3_2_3;
    QLabel* textLabel1_4_2_3;
    QLabel* textLabel1_4_3_2_2;
    QLabel* textLabel1_4_5;
    QLabel* textLabel1_4_2_2;
    KDoubleNumInput* kDoubleNumInput1_2_2_2;
    QLabel* textLabel1_4_5_2_2;
    KDoubleNumInput* kDoubleNumInput1_2_3_2_2_2;
    QLabel* textLabel1_4_3_3_2_2;
    QLabel* textLabel1_4_5_2_2_2;

protected:
    QGridLayout* DiodeLayout;
    QSpacerItem* spacer1;

protected slots:
    virtual void languageChange();

};

#endif // DIODE_H
