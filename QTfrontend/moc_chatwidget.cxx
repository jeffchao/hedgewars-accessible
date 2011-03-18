/****************************************************************************
** Meta object code from reading C++ file 'chatwidget.h'
**
** Created: Fri Mar 18 16:09:44 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "chatwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HWChatWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   14,   13,   13, 0x05,
      36,   14,   13,   13, 0x05,
      50,   14,   13,   13, 0x05,
      63,   14,   13,   13, 0x05,
      77,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      93,   14,   13,   13, 0x0a,
     124,  115,   13,   13, 0x0a,
     154,   14,   13,   13, 0x0a,
     195,  179,   13,   13, 0x0a,
     224,  219,   13,   13, 0x0a,
     245,   13,   13,   13, 0x0a,
     266,  253,   13,   13, 0x0a,
     295,   13,   13,   13, 0x0a,
     313,   13,   13,   13, 0x08,
     329,   13,   13,   13, 0x08,
     337,   13,   13,   13, 0x08,
     346,   13,   13,   13, 0x08,
     355,   13,   13,   13, 0x08,
     366,   13,   13,   13, 0x08,
     377,   13,   13,   13, 0x08,
     393,  388,   13,   13, 0x08,
     439,  433,   13,   13, 0x08,
     466,  461,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HWChatWidget[] = {
    "HWChatWidget\0\0str\0chatLine(QString)\0"
    "kick(QString)\0ban(QString)\0info(QString)\0"
    "follow(QString)\0onChatString(QString)\0"
    "nick,str\0onChatString(QString,QString)\0"
    "onServerMessage(QString)\0nick,notifyNick\0"
    "nickAdded(QString,bool)\0nick\0"
    "nickRemoved(QString)\0clear()\0nick,isReady\0"
    "setReadyStatus(QString,bool)\0"
    "adminAccess(bool)\0returnPressed()\0"
    "onBan()\0onKick()\0onInfo()\0onFollow()\0"
    "onIgnore()\0onFriend()\0item\0"
    "chatNickDoubleClicked(QListWidgetItem*)\0"
    "index\0chatNickSelected(int)\0link\0"
    "linkClicked(QUrl)\0"
};

const QMetaObject HWChatWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HWChatWidget,
      qt_meta_data_HWChatWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HWChatWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HWChatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HWChatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HWChatWidget))
        return static_cast<void*>(const_cast< HWChatWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int HWChatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: chatLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: kick((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: ban((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: info((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: follow((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: onChatString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: onChatString((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: onServerMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: nickAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: nickRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: clear(); break;
        case 11: setReadyStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: adminAccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: returnPressed(); break;
        case 14: onBan(); break;
        case 15: onKick(); break;
        case 16: onInfo(); break;
        case 17: onFollow(); break;
        case 18: onIgnore(); break;
        case 19: onFriend(); break;
        case 20: chatNickDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 21: chatNickSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void HWChatWidget::chatLine(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HWChatWidget::kick(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HWChatWidget::ban(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HWChatWidget::info(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HWChatWidget::follow(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
