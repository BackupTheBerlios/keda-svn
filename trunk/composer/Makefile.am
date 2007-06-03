## Makefile.am for composer

# this is the program that gets installed.  it's name is used for all
# of the other Makefile.am variables
bin_PROGRAMS = composer composer_client

# set the include path for X, qt and KDE
INCLUDES         = $(all_includes)

# the library search path. 
composer_LDFLAGS = $(KDE_RPATH) $(all_libraries)

# the libraries to link against.
composer_LDADD   = $(LIB_KFILE) $(LIB_KDEPRINT)

# which sources should be compiled for composer
composer_SOURCES = main.cpp composer.cpp composerview.cpp pref.cpp \
	composeriface.skel composerwidget.ui resistor.ui diode.ui transistor.ui

# these are the headers for your project
noinst_HEADERS = composer.h composerview.h pref.h

# client stuff
composer_client_LDFLAGS = $(KDE_RPATH) $(all_libraries)
composer_client_LDADD   = $(LIB_KDECORE)
composer_client_SOURCES = composer_client.cpp

# let automoc handle all of the meta source files (moc)
METASOURCES = AUTO

messages: rc.cpp
	$(EXTRACTRC) `find . -name \*.ui -o -name \*.rc` > rc.cpp
	$(XGETTEXT) *.cpp -o $(podir)/composer.pot

KDE_ICON = AUTO

# this is where the kdelnk file will go 
kdelnkdir   = $(kde_appsdir)/Utilities
kdelnk_DATA = composer.desktop

# this is where the XML-GUI resource file goes
rcdir = $(kde_datadir)/composer
rc_DATA = composerui.rc
