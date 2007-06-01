/****************************************************************************
** Form interface generated from reading ui file '/home/bastl/Kdevel/keda/src/offerwidget.ui'
**
** Created: Di Apr 24 15:19:28 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef OFFERWIDGET_H
#define OFFERWIDGET_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class KListBox;
class QListBoxItem;
class QToolButton;

class OfferWidget : public QWidget
{
    Q_OBJECT

public:
    OfferWidget( const QString &t, QWidget *parent = 0);    
    OfferWidget( QWidget* parent = 0 );
    ~OfferWidget();

    KListBox* kListBox2;
    QToolButton* headline;

public slots:
    virtual void headline_clicked();

protected:
    QGridLayout* OfferWidgetLayout;

protected slots:
    virtual void languageChange();

};

#endif // OFFERWIDGET_H
