/****************************************************************************
** Meta object code from reading C++ file 'weaponItem.h'
**
** Created: Fri Mar 18 16:09:45 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "weaponItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weaponItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WeaponItem[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_WeaponItem[] = {
    "WeaponItem\0\0hedgehogsNumChanged()\0"
};

const QMetaObject WeaponItem::staticMetaObject = {
    { &ItemNum::staticMetaObject, qt_meta_stringdata_WeaponItem,
      qt_meta_data_WeaponItem, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WeaponItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WeaponItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WeaponItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WeaponItem))
        return static_cast<void*>(const_cast< WeaponItem*>(this));
    return ItemNum::qt_metacast(_clname);
}

int WeaponItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ItemNum::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: hedgehogsNumChanged(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void WeaponItem::hedgehogsNumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
