/****************************************************************************
** Meta object code from reading C++ file 'selectWeapon.h'
**
** Created: Fri Mar 18 16:09:45 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "selectWeapon.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectWeapon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SelWeaponItem[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_SelWeaponItem[] = {
    "SelWeaponItem\0"
};

const QMetaObject SelWeaponItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SelWeaponItem,
      qt_meta_data_SelWeaponItem, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelWeaponItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelWeaponItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelWeaponItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelWeaponItem))
        return static_cast<void*>(const_cast< SelWeaponItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int SelWeaponItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_SelWeaponWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      34,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   16,   16,   16, 0x0a,
      69,   64,   16,   16, 0x0a,
      94,   89,   16,   16, 0x0a,
     118,   16,   16,   16, 0x0a,
     138,   16,   16,   16, 0x0a,
     155,   16,   16,   16, 0x0a,
     162,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SelWeaponWidget[] = {
    "SelWeaponWidget\0\0weaponsChanged()\0"
    "weaponsDeleted()\0setDefault()\0ammo\0"
    "setWeapons(QString)\0name\0"
    "setWeaponsName(QString)\0deleteWeaponsName()\0"
    "newWeaponsName()\0save()\0copy()\0"
};

const QMetaObject SelWeaponWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SelWeaponWidget,
      qt_meta_data_SelWeaponWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelWeaponWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelWeaponWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelWeaponWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelWeaponWidget))
        return static_cast<void*>(const_cast< SelWeaponWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int SelWeaponWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: weaponsChanged(); break;
        case 1: weaponsDeleted(); break;
        case 2: setDefault(); break;
        case 3: setWeapons((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: setWeaponsName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: deleteWeaponsName(); break;
        case 6: newWeaponsName(); break;
        case 7: save(); break;
        case 8: copy(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SelWeaponWidget::weaponsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SelWeaponWidget::weaponsDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
