## Makefile.am for keda

# this is the program that gets installed.  it's name is used for all
# of the other Makefile.am variables
bin_PROGRAMS = keda keda_client

# set the include path for X, qt and KDE
INCLUDES         = $(all_includes)

# the library search path. 
keda_LDFLAGS = $(KDE_RPATH) $(all_libraries)

# the libraries to link against.
keda_LDADD   = $(LIB_KFILE) $(LIB_KDEPRINT)

# which sources should be compiled for keda
keda_SOURCES = main.cpp keda.cpp kedaview.cpp pref.cpp kedaiface.skel \
	menudatabase.cpp offerwidget.cpp kedawidget.ui

# these are the headers for your project
noinst_HEADERS = keda.h kedaview.h pref.h menudatabase.h

# client stuff
keda_client_LDFLAGS = $(KDE_RPATH) $(all_libraries)
keda_client_LDADD   = $(LIB_KDECORE)
keda_client_SOURCES = keda_client.cpp

# let automoc handle all of the meta source files (moc)
METASOURCES = AUTO

messages: rc.cpp
	$(EXTRACTRC) `find . -name \*.ui -o -name \*.rc` > rc.cpp
	$(XGETTEXT) *.cpp -o $(podir)/keda.pot

KDE_ICON = AUTO

# this is where the kdelnk file will go 
kdelnkdir   = $(kde_appsdir)/Utilities
kdelnk_DATA = keda.desktop

# this is where the XML-GUI resource file goes
rcdir = $(kde_datadir)/keda
rc_DATA = kedaui.rc
