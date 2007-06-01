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


#include "composer.h"
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
#include <kactionclasses.h>

Composer::Composer() : KMainWindow( 0, "Composer" ), m_view(new ComposerView(this)), m_printer(0)
	{
	// accept dnd
	setAcceptDrops(true);
	
	// tell the KMainWindow that this is indeed the main widget
	setCentralWidget(m_view);
	
	// then, setup our actions
	setupActions();
	
	// and a status bar
	statusBar()->show();
	
	// Apply the create the main window and ask the mainwindow to
			// automatically save settings if changed: window size, toolbar
	// position, icon size, etc.  Also to add actions for the statusbar
			// toolbar, and keybindings if necessary.
	setupGUI();
	
	// allow the view to change the statusbar and caption
	connect(m_view, SIGNAL(signalChangeStatusbar(const QString&)),
			this,   SLOT(changeStatusbar(const QString&)));
	connect(m_view, SIGNAL(signalChangeCaption(const QString&)),
			this,   SLOT(changeCaption(const QString&)));
	
	}

Composer::~Composer()
	{
	}

void Composer::load(const KURL& url)
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
	m_view->openURL(url);
	}

void Composer::setupActions()
	{
	KStdAction::openNew(this, SLOT(part_new()), actionCollection(), "new_action");
	KStdAction::open(this, SLOT(part_open()), actionCollection(), "open_action");
	KStdAction::save(this, SLOT(part_save()), actionCollection(), "save_action");
	KAction *del = new KAction(i18n("Delete"), "editdelete", "Alt+Delete", this, SLOT(part_delete()), actionCollection(), "del_action");
	KStdAction::quit(kapp, SLOT(quit()), actionCollection(), "quit_action");
// 	recent = KStdAction::openRecent(this, SLOT(file_openRecent(const KURL&)), actionCollection(), "last_opened" );
// 	KAction(i18n("&New"), "filenew", KStdAccel::shortcut(KStdAccel::New),  this, SLOT(fileNew()), actionCollection(), "new");
	
// 	KStdAction::print(this, SLOT(filePrint()), actionCollection());

	KStdAction::preferences(this, SLOT(optionsPreferences()), actionCollection());
	
	}

void Composer::saveProperties(KConfig *config)
	{
	// the 'config' object points to the session managed
	// config file.  anything you write here will be available
	// later when this app is restored
	
// 	recent->saveEntries( config );
	
	if (!m_view->currentURL().isEmpty()) {
	#if KDE_IS_VERSION(3,1,3)
		config->writePathEntry("lastURL", m_view->currentURL());
	#else
		config->writeEntry("lastURL", m_view->currentURL());
	#endif
	}
	}

void Composer::readProperties(KConfig *config)
	{
	// the 'config' object points to the session managed
	// config file.  this function is automatically called whenever
	// the app is being restored.  read in here whatever you wrote
	// in 'saveProperties'

// 	recent->loadEntries( config ); 
	
	QString url = config->readPathEntry("lastURL");
	
	if (!url.isEmpty())
		m_view->openURL(KURL(url));
	}

void Composer::dragEnterEvent(QDragEnterEvent *event)
	{
	// accept uri drops only
	event->accept(KURLDrag::canDecode(event));
	}

void Composer::dropEvent(QDropEvent *event)
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

void Composer::part_new()
	{
	// this slot is called whenever the File->New menu is selected,
	// the New shortcut is pressed (usually CTRL+N) or the New toolbar
	// button is clicked
	
	// create a new window
	(new Composer)->show();
	}

void Composer::part_open()
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
	if (!url.isEmpty())
		m_view->openURL(url);
	}

void Composer::part_save()
	{
	
	}

void Composer::part_delete()
	{
	
	}

void Composer::filePrint()
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
		m_view->print(&p, metrics.height(), metrics.width());
	
		// and send the result to the printer
		p.end();
	}
	}

void Composer::optionsPreferences()
	{
	// popup some sort of preference dialog, here
	ComposerPreferences dlg;
	if (dlg.exec())
	{
		// redo your settings
	}
	}

void Composer::changeStatusbar(const QString& text)
	{
	// display the text on the statusbar
	statusBar()->message(text);
	}

void Composer::changeCaption(const QString& text)
	{
	// display the text on the caption
	setCaption(text);
	}
#include "composer.moc"
