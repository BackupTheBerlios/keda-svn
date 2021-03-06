/***************************************************************************
 *   Copyright (C) 2007 by sebastian   *
 *   sebastian.bw@freenet.de   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


#include "keda.h"
#include "pref.h"

#include <qdragobject.h>
#include <kprinter.h>
#include <qpainter.h>
#include <qpaintdevicemetrics.h>

#include <kglobal.h>
#include <klocale.h>
#include <kiconloader.h>
#include <kdeversion.h>
#include <kstatusbar.h>
#include <kaccel.h>
#include <kio/netaccess.h>
#include <kfiledialog.h>
#include <kconfig.h>
#include <kurl.h>
#include <kurldrag.h>
#include <kurlrequesterdlg.h>

#include <kstdaccel.h>
#include <kaction.h>
#include <kstdaction.h>
#include "automanager.h"

Keda::Keda() : KMainWindow( 0, "Keda" ), m_printer(0)
	{
	setAcceptDrops(true);
	eda = new KedaView( this );
	pcb = new KedaPCBView( this ); pcb->hide();
	am = new AutoManager( parentWidget() ); am->hide();
	
	setCentralWidget( eda );
	
	setupActions();
	statusBar()->show();
	
	// Apply the create the main window and ask the mainwindow to
			// automatically save settings if changed: window size, toolbar
	// position, icon size, etc.  Also to add actions for the statusbar
			// toolbar, and keybindings if necessary.
	
	setupGUI();
	
	// allow the view to change the statusbar and caption
	connect( eda, SIGNAL(signalChangeStatusbar(const QString&)),
			this,   SLOT(changeStatusbar(const QString&)));
	connect( eda, SIGNAL(signalChangeCaption(const QString&)),
			this,   SLOT(changeCaption(const QString&)));
	
	}

Keda::~Keda()
{
}

void Keda::load(const KURL& url)
	{
	QString target;
	// the below code is what you should normally do.  in this
	// example case, we want the url to our own.  you probably
	// want to use this code instead for your app
	
	#if 0
	// download the contents
	if (KIO::NetAccess::download(url, target))
	{
		// set our caption
		setCaption(url);
	
		// load in the file (target is always local)
		loadFile(target);
	
		// and remove the temp file
		KIO::NetAccess::removeTempFile(target);
	}
	#endif
	
	setCaption(url.prettyURL());
// 	m_view->openURL(url);
	}

/**
 * Keda's menue
 */
void Keda::setupActions()
	{
	KStdAction::openNew(this, SLOT(projectNew()), actionCollection(), "new_action");
	KStdAction::open(this, SLOT(projectOpen()), actionCollection(), "open_action");
	KStdAction::openRecent(this, SLOT(projectOpen()), actionCollection(), "openresent_action");
	KStdAction::save(this, SLOT(projectSave()), actionCollection(), "save_action");
	KStdAction::saveAs(this, SLOT(projectSaveAs()), actionCollection(), "saveas_action");
	KStdAction::quit(kapp, SLOT(quit()), actionCollection(), "quit_action");
	
	KDEUI_EXPORT KStdAction::create( KStdAction::Preferences, "Show Grid", this, SLOT(optionsPreferences()), actionCollection() );
     KStdAction::preferences(this, SLOT(optionsPreferences()), actionCollection());
	
	KAction *eda_action = new KAction(i18n("EDA and simulation"), 0, this, SLOT( setEDAMode() ), actionCollection(), "EDA_action");
	KAction *pcb_action = new KAction(i18n("PCB and autorouting"), 0, this, SLOT( setPCBMode() ), actionCollection(), "PCB_action");
	KAction *printing_action = new KAction(i18n("Output"), 0, this, SLOT(optionsPreferences()), actionCollection(), "Print_action");
	KAction *cnc_action = new KAction(i18n("CNC shape and drilling"), 0, this, SLOT(optionsPreferences()), actionCollection(), "CNC_action");
	KAction *proto_action = new KAction(i18n("CNC prototyping"), 0, this, SLOT(optionsPreferences()), actionCollection(), "prototype_action");
	
	KAction *partco_action = new KAction(i18n("Part composer"), 0,  centralWidget(), SLOT( start_composer() ), actionCollection(), "part_action");
	KAction *am_action = new KAction(i18n("Auto Manager"), 0,  this, SLOT( startAutoManager() ), actionCollection(), "am_action");
	sim = new KAction(i18n("Simulation"), 0, centralWidget(), SLOT(start_simulation()), actionCollection(), "simulation_action");
	osci = new KAction(i18n("New oscilloscope"), 0, this, SLOT(optionsPreferences()), actionCollection(), "osci_action");
	meter = new KAction(i18n("New meter"), 0, this, SLOT(optionsPreferences()), actionCollection(), "meter_action");
	
	
	}

	
void Keda::saveProperties(KConfig *config)
	{
	// the 'config' object points to the session managed
	// config file.  anything you write here will be available
	// later when this app is restored
	
	//     if (!m_view->currentURL().isEmpty()) {
	// #if KDE_IS_VERSION(3,1,3)
	//         config->writePathEntry("lastURL", m_view->currentURL());
	// #else
	//         config->writeEntry("lastURL", m_view->currentURL());
	// #endif
	// 	}
	}

void Keda::readProperties(KConfig *config)
	{
	// the 'config' object points to the session managed
	// config file.  this function is automatically called whenever
	// the app is being restored.  read in here whatever you wrote
	// in 'saveProperties'
	
	QString url = config->readPathEntry("lastURL");
	
	// 	if (!url.isEmpty())
	// 		m_view->openURL(KURL(url));
	}

void Keda::dragEnterEvent(QDragEnterEvent *event)
{
    // accept uri drops only
    event->accept(KURLDrag::canDecode(event));
}

void Keda::dropEvent(QDropEvent *event)
{
    // this is a very simplistic implementation of a drop event.  we
    // will only accept a dropped URL.  the Qt dnd code can do *much*
    // much more, so please read the docs there
    KURL::List urls;

    // see if we can decode a URI.. if not, just ignore it
    if (KURLDrag::decode(event, urls) && !urls.isEmpty())
    {
        // okay, we have a URI.. process it
        const KURL &url = urls.first();

        // load in the file
        load(url);
    }
}

void Keda::projectNew()
{
    // this slot is called whenever the File->New menu is selected,
    // the New shortcut is pressed (usually CTRL+N) or the New toolbar
    // button is clicked

    // create a new window
    (new Keda)->show();
}

void Keda::projectOpen()
	{
	// this slot is called whenever the File->Open menu is selected,
	// the Open shortcut is pressed (usually CTRL+O) or the Open toolbar
	// button is clicked
	/*
	// this brings up the generic open dialog
	KURL url = KURLRequesterDlg::getURL(QString::null, this, i18n("Open Location") );
	*/
	// standard filedialog
	KURL url = KFileDialog::getOpenURL(QString::null, QString::null, this, i18n("Open Location"));
// 	if (!url.isEmpty())
// 		m_view->openURL(url);
	}

void Keda::projectSave()
	{
	// this slot is called whenever the File->Save menu is selected,
	// the Save shortcut is pressed (usually CTRL+S) or the Save toolbar
	// button is clicked
	
	// save the current file
	}

void Keda::projectSaveAs()
	{
	// this slot is called whenever the File->Save As menu is selected,
	KURL file_url = KFileDialog::getSaveURL();
	if (!file_url.isEmpty() && file_url.isValid())
		{
			// save your info, here
		}
	}

void Keda::projectPrint()
{
    // this slot is called whenever the File->Print menu is selected,
    // the Print shortcut is pressed (usually CTRL+P) or the Print toolbar
    // button is clicked
    if (!m_printer) m_printer = new KPrinter;
    if (m_printer->setup(this))
    {
        // setup the printer.  with Qt, you always "print" to a
        // QPainter.. whether the output medium is a pixmap, a screen,
        // or paper
        QPainter p;
        p.begin(m_printer);

        // we let our view do the actual printing
        QPaintDeviceMetrics metrics(m_printer);
//         m_view->print(&p, metrics.height(), metrics.width());

        // and send the result to the printer
        p.end();
    }
}

void Keda::optionsPreferences()
{
    // popup some sort of preference dialog, here
    KedaPreferences dlg;
    if( dlg.exec() )
    {
        // redo your settings
    }
}

void Keda::changeStatusbar(const QString& text)
	{
	// display the text on the statusbar
	statusBar()->message(text);
	}

void Keda::changeCaption(const QString& text)
	{
	// display the text on the caption
	setCaption(text);
	}

void Keda::setPCBMode()
	{
	eda->hide();
	pcb->show();
	setCentralWidget( pcb );
	sim->setEnabled( FALSE );
	osci->setEnabled( FALSE );
	meter->setEnabled( FALSE );
	}

void Keda::setEDAMode()
	{
	pcb->hide();
	eda->show();
	setCentralWidget( eda );
	sim->setEnabled( TRUE );
	osci->setEnabled( TRUE );
	meter->setEnabled( TRUE );
	}

void Keda::startAutoManager()
	{
	am->show();
	}


#include "keda.moc"



