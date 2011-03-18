/****************************************************************************
** Meta object code from reading C++ file 'netudpserver.h'
**
** Created: Fri Mar 18 16:09:44 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "netudpserver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netudpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HWNetUdpServer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      29,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HWNetUdpServer[] = {
    "HWNetUdpServer\0\0unregister()\0"
    "onClientRead()\0"
};

const QMetaObject HWNetUdpServer::staticMetaObject = {
    { &HWNetRegisterServer::staticMetaObject, qt_meta_stringdata_HWNetUdpServer,
      qt_meta_data_HWNetUdpServer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HWNetUdpServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HWNetUdpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HWNetUdpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HWNetUdpServer))
        return static_cast<void*>(const_cast< HWNetUdpServer*>(this));
    return HWNetRegisterServer::qt_metacast(_clname);
}

int HWNetUdpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HWNetRegisterServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: unregister(); break;
        case 1: onClientRead(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
