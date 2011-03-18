/****************************************************************************
** Meta object code from reading C++ file 'drawmapscene.h'
**
** Created: Fri Mar 18 16:09:47 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "drawmapscene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawmapscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DrawMapScene[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   13,   13,   13, 0x0a,
      35,   13,   13,   13, 0x0a,
      46,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DrawMapScene[] = {
    "DrawMapScene\0\0pathChanged()\0undo()\0"
    "clearMap()\0simplifyLast()\0"
};

const QMetaObject DrawMapScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_DrawMapScene,
      qt_meta_data_DrawMapScene, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DrawMapScene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DrawMapScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DrawMapScene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DrawMapScene))
        return static_cast<void*>(const_cast< DrawMapScene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int DrawMapScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: pathChanged(); break;
        case 1: undo(); break;
        case 2: clearMap(); break;
        case 3: simplifyLast(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DrawMapScene::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
