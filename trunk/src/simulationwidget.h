/****************************************************************************
** Form interface generated from reading ui file '/home/bastl/Kdevel/Keda/trunk/src/simulationwidget.ui'
**
** Created: So Jul 8 14:55:56 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SIMULATIONWIDGET_H
#define SIMULATIONWIDGET_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QScrollBar;
class QComboBox;
class QLabel;
class KIntSpinBox;
class QPushButton;
class QFrame;
class QToolButton;
class KDoubleNumInput;

class Simulationwidget : public QWidget
{
    Q_OBJECT

public:
    Simulationwidget( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~Simulationwidget();

    QScrollBar* scrollBar1;
    QComboBox* comboBox11;
    QLabel* textLabel1_5_2;
    QScrollBar* scrollBar1_2;
    KIntSpinBox* samples;
    QComboBox* comboBox11_2;
    KIntSpinBox* samples_per_second;
    QPushButton* ne;
    QPushButton* sa;
    QPushButton* lo;
    QPushButton* cl;
    QFrame* line3;
    QToolButton* pb;
    QToolButton* pl;
    QToolButton* sto;
    QToolButton* pau;
    QToolButton* pf;
    QLabel* textLabel1_5;
    QComboBox* comboBox11_2_2_2;
    QFrame* line3_2;
    QScrollBar* scrollBar1_4;
    KDoubleNumInput* kDoubleNumInput15_3;
    KDoubleNumInput* kDoubleNumInput15_3_2;
    QComboBox* deg_from;
    QComboBox* comboBox11_2_2_2_3;
    KDoubleNumInput* kDoubleNumInput15_3_3;
    QLabel* textLabel1_5_2_2_2_2;
    QLabel* textLabel1_5_2_2_2_3;
    QLabel* textLabel1_5_2_2_2;
    QFrame* magnetism_frame;
    QLabel* textLabel1_5_2_2;
    QPushButton* magneticspop;
    QFrame* sensor_frame;
    QLabel* textLabel1_5_2_2_3_2;
    QPushButton* compositionpop;
    QFrame* acceleration_frame;
    QLabel* textLabel1_5_2_2_4;
    QPushButton* a_pop;
    QFrame* vibration_frame;
    QLabel* textLabel1_5_2_2_5;
    QPushButton* vibr_pop;
    QFrame* pressure_frame;
    QPushButton* press_pop;
    QLabel* textLabel1_5_2_2_6;
    QFrame* light_frame;
    QPushButton* lightpop;
    QLabel* em;
    QFrame* humidity_frame;
    QLabel* textLabel1_5_2_2_3;
    QPushButton* humiditypop;

public slots:
    virtual void pressure_popup_clicked();
    virtual void save_clicked();
    virtual void vibration_popup_clicked();
    virtual void new_clicked();
    virtual void magnetism_popup_clicked();
    virtual void load_clicked();
    virtual void light_popup_clicked();
    virtual void humidity_popup_clicked();
    virtual void acceleration_popup_clicked();
    virtual void next_page_clicked();
    virtual void sensor_popup_clicked();
    virtual void page_back_clicked();
    virtual void play_clicked();
    virtual void stop_clicked();
    virtual void pause_clicked();

protected:
    QGridLayout* SimulationwidgetLayout;
    QSpacerItem* spacer2;
    QHBoxLayout* layout3;
    QHBoxLayout* layout4;
    QGridLayout* magnetism_frameLayout;
    QGridLayout* sensor_frameLayout;
    QGridLayout* acceleration_frameLayout;
    QGridLayout* vibration_frameLayout;
    QGridLayout* pressure_frameLayout;
    QGridLayout* light_frameLayout;
    QGridLayout* humidity_frameLayout;

protected slots:
    virtual void languageChange();

private:
    QPixmap image0;
    QPixmap image1;
    QPixmap image2;
    QPixmap image3;
    QPixmap image4;
    QPixmap image5;

};

#endif // SIMULATIONWIDGET_H
