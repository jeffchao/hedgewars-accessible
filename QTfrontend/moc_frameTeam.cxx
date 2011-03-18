/****************************************************************************
** Meta object code from reading C++ file 'frameTeam.h'
**
** Created: Fri Mar 18 16:09:42 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "frameTeam.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frameTeam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FrameTeams[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   37,   11,   11, 0x0a,
      77,   72,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FrameTeams[] = {
    "FrameTeams\0\0teamColorChanged(HWTeam)\0"
    "team,willPlay\0addTeam(HWTeam,bool)\0"
    "team\0removeTeam(HWTeam)\0"
};

const QMetaObject FrameTeams::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_FrameTeams,
      qt_meta_data_FrameTeams, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FrameTeams::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FrameTeams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FrameTeams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrameTeams))
        return static_cast<void*>(const_cast< FrameTeams*>(this));
    return QFrame::qt_metacast(_clname);
}

int FrameTeams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: teamColorChanged((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 1: addTeam((*reinterpret_cast< HWTeam(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: removeTeam((*reinterpret_cast< HWTeam(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FrameTeams::teamColorChanged(const HWTeam & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
