/****************************************************************************
**
** DCOP Skeleton generated by dcopidl2cpp from composeriface.kidl
**
** WARNING! All changes made in this file will be lost!
**
*****************************************************************************/

#include "/home/bastl/Kdevel/keda/composer/composeriface.h"

#include <kdatastream.h>


static const char* const ComposerIface_ftable[2][3] = {
    { "void", "openURL(QString)", "openURL(QString url)" },
    { 0, 0, 0 }
};
static const int ComposerIface_ftable_hiddens[1] = {
    0,
};

bool ComposerIface::process(const QCString &fun, const QByteArray &data, QCString& replyType, QByteArray &replyData)
{
    if ( fun == ComposerIface_ftable[0][1] ) { // void openURL(QString)
	QString arg0;
	QDataStream arg( data, IO_ReadOnly );
	if (arg.atEnd()) return false;
	arg >> arg0;
	replyType = ComposerIface_ftable[0][0]; 
	openURL(arg0 );
    } else {
	return DCOPObject::process( fun, data, replyType, replyData );
    }
    return true;
}

QCStringList ComposerIface::interfaces()
{
    QCStringList ifaces = DCOPObject::interfaces();
    ifaces += "ComposerIface";
    return ifaces;
}

QCStringList ComposerIface::functions()
{
    QCStringList funcs = DCOPObject::functions();
    for ( int i = 0; ComposerIface_ftable[i][2]; i++ ) {
	if (ComposerIface_ftable_hiddens[i])
	    continue;
	QCString func = ComposerIface_ftable[i][0];
	func += ' ';
	func += ComposerIface_ftable[i][2];
	funcs << func;
    }
    return funcs;
}


