/****************************************************************************
** Meta object code from reading C++ file 'tcpBase.h'
**
** Created: Fri Mar 18 16:09:43 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tcpBase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TCPBase[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      22,    8,    8,    8, 0x08,
      38,    8,    8,    8, 0x08,
      57,    8,    8,    8, 0x08,
      76,   70,    8,    8, 0x08,
     118,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TCPBase[] = {
    "TCPBase\0\0isReadyNow()\0NewConnection()\0"
    "ClientDisconnect()\0ClientRead()\0error\0"
    "StartProcessError(QProcess::ProcessError)\0"
    "tcpServerReady()\0"
};

const QMetaObject TCPBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TCPBase,
      qt_meta_data_TCPBase, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TCPBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TCPBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TCPBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TCPBase))
        return static_cast<void*>(const_cast< TCPBase*>(this));
    return QObject::qt_metacast(_clname);
}

int TCPBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: isReadyNow(); break;
        case 1: NewConnection(); break;
        case 2: ClientDisconnect(); break;
        case 3: ClientRead(); break;
        case 4: StartProcessError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 5: tcpServerReady(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TCPBase::isReadyNow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
