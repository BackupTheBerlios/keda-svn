/****************************************************************************
** Form interface generated from reading ui file '/home/bastl/Kdevel/composer/src/transistor.ui'
**
** Created: Sa Mai 19 22:15:50 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef TRANSISTOR_H
#define TRANSISTOR_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QCheckBox;
class QLabel;
class KDoubleNumInput;
class KComboBox;
class KURLRequester;
class QFrame;

class Transistor : public QWidget
{
    Q_OBJECT

public:
    Transistor( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~Transistor();

    QCheckBox* checkBox1_2;
    QLabel* textLabel1_4_6;
    KDoubleNumInput* ug;
    KDoubleNumInput* kDoubleNumInput1_2_3_2;
    KComboBox* kComboBox1_2_2;
    QLabel* textLabel1_4_3_3_2_2;
    QLabel* textLabel1_4_4_2;
    KDoubleNumInput* kDoubleNumInput1_2_2_2;
    QLabel* textLabel1_4_2_3;
    KComboBox* kComboBox1_2_2_3;
    QLabel* textLabel1_4_3_3;
    KDoubleNumInput* kDoubleNumInput1_2_4;
    QLabel* ug_unit;
    QLabel* textLabel1_4_3_3_2;
    KDoubleNumInput* kDoubleNumInput1_2_3_2_2_3_2;
    QLabel* textLabel1_4_3_2_3;
    KDoubleNumInput* kDoubleNumInput1_2_2_3;
    KDoubleNumInput* ibmax;
    QLabel* textLabel1_4_4_3;
    QLabel* textLabel1_4_2_2;
    KDoubleNumInput* kDoubleNumInput1_2_3_2_2;
    KDoubleNumInput* rds;
    KDoubleNumInput* kDoubleNumInput1_2_3;
    KDoubleNumInput* kDoubleNumInput1_2_3_2_2_3_3;
    KDoubleNumInput* kDoubleNumInput1_2_3_2_2_3;
    KDoubleNumInput* kDoubleNumInput1_2_3_2_2_2_2;
    QLabel* textLabel1_4_3_4;
    KDoubleNumInput* kDoubleNumInput1_2_3_2_2_2;
    QLabel* textLabel1_4_5_2_2;
    QLabel* textLabel1_4_5_2_2_2;
    QCheckBox* checkBox1;
    QLabel* textLabel1_4_5;
    QLabel* ug_text;
    QLabel* rds_text;
    QLabel* textLabel1_4_5_2_2_3;
    QLabel* textLabel1_4_5_2_2_3_2;
    QLabel* textLabel1_4_5_2_2_3_3;
    QLabel* textLabel1_4_6_2;
    QLabel* textLabel1_4_5_2;
    QLabel* textLabel1_2;
    QLabel* textLabel1;
    QLabel* ib_text;
    QLabel* textLabel1_4_5_2_2_2_2;
    KComboBox* freq_unit;
    QLabel* textLabel1_4_3_2_2;
    KComboBox* ib_unit;
    KComboBox* toff_unit;
    KURLRequester* kURLRequester1;
    KComboBox* type;
    KComboBox* material;
    QFrame* line1;
    KComboBox* ton_unit;
    KComboBox* rds_unit;

public slots:
    virtual void t_type_changed(int);

protected:
    QGridLayout* TransistorLayout;
    QSpacerItem* spacer1;

protected slots:
    virtual void languageChange();

};

#endif // TRANSISTOR_H
