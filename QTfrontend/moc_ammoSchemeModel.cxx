/****************************************************************************
** Meta object code from reading C++ file 'ammoSchemeModel.h'
**
** Created: Fri Mar 18 16:09:46 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ammoSchemeModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ammoSchemeModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AmmoSchemeModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      74,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AmmoSchemeModel[] = {
    "AmmoSchemeModel\0\0topLeft,bottomRight\0"
    "dataChanged(QModelIndex,QModelIndex)\0"
    "Save()\0"
};

const QMetaObject AmmoSchemeModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_AmmoSchemeModel,
      qt_meta_data_AmmoSchemeModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AmmoSchemeModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AmmoSchemeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AmmoSchemeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AmmoSchemeModel))
        return static_cast<void*>(const_cast< AmmoSchemeModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int AmmoSchemeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: Save(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AmmoSchemeModel::dataChanged(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_NetAmmoSchemeModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   20,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NetAmmoSchemeModel[] = {
    "NetAmmoSchemeModel\0\0cfg\0"
    "setNetSchemeConfig(QStringList&)\0"
};

const QMetaObject NetAmmoSchemeModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_NetAmmoSchemeModel,
      qt_meta_data_NetAmmoSchemeModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NetAmmoSchemeModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NetAmmoSchemeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NetAmmoSchemeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NetAmmoSchemeModel))
        return static_cast<void*>(const_cast< NetAmmoSchemeModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int NetAmmoSchemeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setNetSchemeConfig((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
