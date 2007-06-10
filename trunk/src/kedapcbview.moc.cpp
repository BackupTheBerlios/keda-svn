/****************************************************************************
** KedaPCBView meta object code from reading C++ file 'kedapcbview.h'
**
** Created: Sat Jun 9 11:00:42 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.5   edited Sep 2 14:41 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "kedapcbview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *KedaPCBView::className() const
{
    return "KedaPCBView";
}

QMetaObject *KedaPCBView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_KedaPCBView( "KedaPCBView", &KedaPCBView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString KedaPCBView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KedaPCBView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString KedaPCBView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KedaPCBView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* KedaPCBView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"KedaPCBView", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_KedaPCBView.setMetaObject( metaObj );
    return metaObj;
}

void* KedaPCBView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "KedaPCBView" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool KedaPCBView::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool KedaPCBView::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool KedaPCBView::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool KedaPCBView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
