/****************************************************************************
** SimulationView meta object code from reading C++ file 'simulationview.h'
**
** Created: Sun Jul 8 15:03:08 2007
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.5   edited Sep 2 14:41 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "simulationview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SimulationView::className() const
{
    return "SimulationView";
}

QMetaObject *SimulationView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SimulationView( "SimulationView", &SimulationView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SimulationView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SimulationView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SimulationView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SimulationView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SimulationView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Simulationwidget::staticMetaObject();
    static const QUMethod slot_0 = {"acceleration_popup_clicked", 0, 0 };
    static const QUMethod slot_1 = {"humidity_popup_clicked", 0, 0 };
    static const QUMethod slot_2 = {"light_popup_clicked", 0, 0 };
    static const QUMethod slot_3 = {"load_clicked", 0, 0 };
    static const QUMethod slot_4 = {"magnetism_popup_clicked", 0, 0 };
    static const QUMethod slot_5 = {"new_clicked", 0, 0 };
    static const QUMethod slot_6 = {"vibration_popup_clicked", 0, 0 };
    static const QUMethod slot_7 = {"save_clicked", 0, 0 };
    static const QUMethod slot_8 = {"pressure_popup_clicked", 0, 0 };
    static const QUMethod slot_9 = {"next_page_clicked", 0, 0 };
    static const QUMethod slot_10 = {"page_back_clicked", 0, 0 };
    static const QUMethod slot_11 = {"sensor_popup_clicked", 0, 0 };
    static const QUMethod slot_12 = {"pause_clicked", 0, 0 };
    static const QUMethod slot_13 = {"stop_clicked", 0, 0 };
    static const QUMethod slot_14 = {"play_clicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "acceleration_popup_clicked()", &slot_0, QMetaData::Public },
	{ "humidity_popup_clicked()", &slot_1, QMetaData::Public },
	{ "light_popup_clicked()", &slot_2, QMetaData::Public },
	{ "load_clicked()", &slot_3, QMetaData::Public },
	{ "magnetism_popup_clicked()", &slot_4, QMetaData::Public },
	{ "new_clicked()", &slot_5, QMetaData::Public },
	{ "vibration_popup_clicked()", &slot_6, QMetaData::Public },
	{ "save_clicked()", &slot_7, QMetaData::Public },
	{ "pressure_popup_clicked()", &slot_8, QMetaData::Public },
	{ "next_page_clicked()", &slot_9, QMetaData::Public },
	{ "page_back_clicked()", &slot_10, QMetaData::Public },
	{ "sensor_popup_clicked()", &slot_11, QMetaData::Public },
	{ "pause_clicked()", &slot_12, QMetaData::Public },
	{ "stop_clicked()", &slot_13, QMetaData::Public },
	{ "play_clicked()", &slot_14, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SimulationView", parentObject,
	slot_tbl, 15,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SimulationView.setMetaObject( metaObj );
    return metaObj;
}

void* SimulationView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SimulationView" ) )
	return this;
    return Simulationwidget::qt_cast( clname );
}

bool SimulationView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: acceleration_popup_clicked(); break;
    case 1: humidity_popup_clicked(); break;
    case 2: light_popup_clicked(); break;
    case 3: load_clicked(); break;
    case 4: magnetism_popup_clicked(); break;
    case 5: new_clicked(); break;
    case 6: vibration_popup_clicked(); break;
    case 7: save_clicked(); break;
    case 8: pressure_popup_clicked(); break;
    case 9: next_page_clicked(); break;
    case 10: page_back_clicked(); break;
    case 11: sensor_popup_clicked(); break;
    case 12: pause_clicked(); break;
    case 13: stop_clicked(); break;
    case 14: play_clicked(); break;
    default:
	return Simulationwidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SimulationView::qt_emit( int _id, QUObject* _o )
{
    return Simulationwidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SimulationView::qt_property( int id, int f, QVariant* v)
{
    return Simulationwidget::qt_property( id, f, v);
}

bool SimulationView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
