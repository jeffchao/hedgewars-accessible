/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created: Fri Mar 18 16:09:41 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "game.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HWGame[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,    8,    7,    7, 0x05,
      32,    8,    7,    7, 0x05,
      50,    8,    7,    7, 0x05,
      85,   75,    7,    7, 0x05,
     123,  113,    7,    7, 0x05,
     161,  147,    7,    7, 0x05,
     189,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     211,    8,    7,    7, 0x0a,
     231,    8,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HWGame[] = {
    "HWGame\0\0msg\0SendNet(QByteArray)\0"
    "SendChat(QString)\0SendTeamMessage(QString)\0"
    "gameState\0GameStateChanged(GameState)\0"
    "type,info\0GameStats(char,QString)\0"
    "isDemo,record\0HaveRecord(bool,QByteArray)\0"
    "ErrorMessage(QString)\0FromNet(QByteArray)\0"
    "FromNetChat(QString)\0"
};

const QMetaObject HWGame::staticMetaObject = {
    { &TCPBase::staticMetaObject, qt_meta_stringdata_HWGame,
      qt_meta_data_HWGame, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HWGame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HWGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HWGame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HWGame))
        return static_cast<void*>(const_cast< HWGame*>(this));
    return TCPBase::qt_metacast(_clname);
}

int HWGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TCPBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SendNet((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: SendChat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: SendTeamMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: GameStateChanged((*reinterpret_cast< GameState(*)>(_a[1]))); break;
        case 4: GameStats((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: HaveRecord((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: ErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: FromNet((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: FromNetChat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void HWGame::SendNet(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HWGame::SendChat(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HWGame::SendTeamMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HWGame::GameStateChanged(GameState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HWGame::GameStats(char _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HWGame::HaveRecord(bool _t1, const QByteArray & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HWGame::ErrorMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
