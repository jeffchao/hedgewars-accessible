/****************************************************************************
** Meta object code from reading C++ file 'drawmapwidget.h'
**
** Created: Fri Mar 18 16:09:46 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "drawmapwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawmapwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DrawMapWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      22,   14,   14,   14, 0x0a,
      39,   30,   14,   14, 0x0a,
      53,   30,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DrawMapWidget[] = {
    "DrawMapWidget\0\0undo()\0clear()\0fileName\0"
    "save(QString)\0load(QString)\0"
};

const QMetaObject DrawMapWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DrawMapWidget,
      qt_meta_data_DrawMapWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DrawMapWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DrawMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DrawMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DrawMapWidget))
        return static_cast<void*>(const_cast< DrawMapWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int DrawMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: undo(); break;
        case 1: clear(); break;
        case 2: save((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
