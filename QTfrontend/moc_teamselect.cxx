/****************************************************************************
** Meta object code from reading C++ file 'teamselect.h'
**
** Created: Fri Mar 18 16:09:42 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "teamselect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teamselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TeamSelWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      46,   41,   14,   14, 0x05,
      67,   41,   14,   14, 0x05,
      90,   14,   14,   14, 0x05,
     114,   14,   14,   14, 0x05,
     139,   41,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     163,   41,   14,   14, 0x0a,
     179,   41,   14,   14, 0x0a,
     208,   14,   14,   14, 0x0a,
     228,   14,   14,   14, 0x0a,
     252,   41,   14,   14, 0x0a,
     277,   14,   14,   14, 0x08,
     306,   41,   14,   14, 0x08,
     327,   41,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TeamSelWidget[] = {
    "TeamSelWidget\0\0setEnabledGameStart(bool)\0"
    "team\0teamWillPlay(HWTeam)\0"
    "teamNotPlaying(HWTeam)\0hhogsNumChanged(HWTeam)\0"
    "teamColorChanged(HWTeam)\0"
    "acceptRequested(HWTeam)\0addTeam(HWTeam)\0"
    "netTeamStatusChanged(HWTeam)\0"
    "changeHHNum(HWTeam)\0changeTeamColor(HWTeam)\0"
    "changeTeamStatus(HWTeam)\0"
    "pre_changeTeamStatus(HWTeam)\0"
    "hhNumChanged(HWTeam)\0proxyTeamColorChanged(HWTeam)\0"
};

const QMetaObject TeamSelWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_TeamSelWidget,
      qt_meta_data_TeamSelWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TeamSelWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TeamSelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TeamSelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TeamSelWidget))
        return static_cast<void*>(const_cast< TeamSelWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int TeamSelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setEnabledGameStart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: teamWillPlay((*reinterpret_cast< HWTeam(*)>(_a[1]))); break;
        case 2: teamNotPlaying((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 3: hhogsNumChanged((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 4: teamColorChanged((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 5: acceptRequested((*reinterpret_cast< HWTeam(*)>(_a[1]))); break;
        case 6: addTeam((*reinterpret_cast< HWTeam(*)>(_a[1]))); break;
        case 7: netTeamStatusChanged((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 8: changeHHNum((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 9: changeTeamColor((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 10: changeTeamStatus((*reinterpret_cast< HWTeam(*)>(_a[1]))); break;
        case 11: pre_changeTeamStatus((*reinterpret_cast< HWTeam(*)>(_a[1]))); break;
        case 12: hhNumChanged((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 13: proxyTeamColorChanged((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void TeamSelWidget::setEnabledGameStart(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TeamSelWidget::teamWillPlay(HWTeam _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TeamSelWidget::teamNotPlaying(const HWTeam & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TeamSelWidget::hhogsNumChanged(const HWTeam & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TeamSelWidget::teamColorChanged(const HWTeam & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TeamSelWidget::acceptRequested(HWTeam _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
