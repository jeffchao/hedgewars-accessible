/****************************************************************************
** Meta object code from reading C++ file 'gamecfgwidget.h'
**
** Created: Fri Mar 18 16:09:42 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gamecfgwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamecfgwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GameCFGWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   15,   14,   14, 0x05,
      61,   14,   14,   14, 0x05,
      78,   14,   14,   14, 0x05,
      95,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     109,   15,   14,   14, 0x0a,
     139,   14,   14,   14, 0x0a,
     155,   14,   14,   14, 0x0a,
     180,  174,   14,   14, 0x08,
     197,   14,   14,   14, 0x08,
     217,   14,   14,   14, 0x08,
     244,   14,   14,   14, 0x08,
     265,   14,   14,   14, 0x08,
     287,   14,   14,   14, 0x08,
     306,   14,   14,   14, 0x08,
     325,   14,   14,   14, 0x08,
     341,   14,   14,   14, 0x08,
     359,  357,   14,   14, 0x08,
     389,  387,   14,   14, 0x08,
     416,  411,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GameCFGWidget[] = {
    "GameCFGWidget\0\0param,value\0"
    "paramChanged(QString,QStringList)\0"
    "goToSchemes(int)\0goToWeapons(int)\0"
    "goToDrawMap()\0setParam(QString,QStringList)\0"
    "fullNetConfig()\0resendSchemeData()\0"
    "index\0ammoChanged(int)\0mapChanged(QString)\0"
    "templateFilterChanged(int)\0"
    "seedChanged(QString)\0themeChanged(QString)\0"
    "schemeChanged(int)\0scriptChanged(int)\0"
    "jumpToSchemes()\0jumpToWeapons()\0m\0"
    "mapgenChanged(MapGenerator)\0s\0"
    "maze_sizeChanged(int)\0data\0"
    "onDrawnMapChanged(QByteArray)\0"
};

const QMetaObject GameCFGWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_GameCFGWidget,
      qt_meta_data_GameCFGWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GameCFGWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GameCFGWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GameCFGWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GameCFGWidget))
        return static_cast<void*>(const_cast< GameCFGWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int GameCFGWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: paramChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: goToSchemes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: goToWeapons((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: goToDrawMap(); break;
        case 4: setParam((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 5: fullNetConfig(); break;
        case 6: resendSchemeData(); break;
        case 7: ammoChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: mapChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: templateFilterChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: seedChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: themeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: schemeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: scriptChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: jumpToSchemes(); break;
        case 15: jumpToWeapons(); break;
        case 16: mapgenChanged((*reinterpret_cast< MapGenerator(*)>(_a[1]))); break;
        case 17: maze_sizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: onDrawnMapChanged((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void GameCFGWidget::paramChanged(const QString & _t1, const QStringList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameCFGWidget::goToSchemes(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GameCFGWidget::goToWeapons(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GameCFGWidget::goToDrawMap()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
