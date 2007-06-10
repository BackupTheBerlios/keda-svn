/****************************************************************************
** Form interface generated from reading ui file 'offerselection.ui'
**
** Created: Di Apr 17 21:00:13 2007
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.5   edited Aug 31 12:13 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef OFFERSELECTION_H
#define OFFERSELECTION_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QFrame;

class OfferSelection : public QWidget
	{
	Q_OBJECT
	
	public:
	OfferSelection( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
	~OfferSelection();
	
	QFrame* contens;
	
	protected:
	QGridLayout* OfferSelectionLayout;
	
	protected slots:
	virtual void languageChange();
	
	};

#endif // OFFERSELECTION_H
