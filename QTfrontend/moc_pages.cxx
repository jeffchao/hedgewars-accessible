/****************************************************************************
** Meta object code from reading C++ file 'pages.h'
**
** Created: Fri Mar 18 16:09:43 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pages.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pages.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractPage[] = {

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

static const char qt_meta_stringdata_AbstractPage[] = {
    "AbstractPage\0"
};

const QMetaObject AbstractPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AbstractPage,
      qt_meta_data_AbstractPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractPage))
        return static_cast<void*>(const_cast< AbstractPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int AbstractPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PageMain[] = {

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

static const char qt_meta_stringdata_PageMain[] = {
    "PageMain\0"
};

const QMetaObject PageMain::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageMain,
      qt_meta_data_PageMain, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageMain::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageMain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageMain))
        return static_cast<void*>(const_cast< PageMain*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PageEditTeam[] = {

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
      24,   14,   13,   13, 0x0a,
      50,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageEditTeam[] = {
    "PageEditTeam\0\0gravename\0"
    "CBFort_activated(QString)\0testSound()\0"
};

const QMetaObject PageEditTeam::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageEditTeam,
      qt_meta_data_PageEditTeam, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageEditTeam::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageEditTeam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageEditTeam::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageEditTeam))
        return static_cast<void*>(const_cast< PageEditTeam*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageEditTeam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: CBFort_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: testSound(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_PageMultiplayer[] = {

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
      17,   16,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PageMultiplayer[] = {
    "PageMultiplayer\0\0SetupClicked()\0"
};

const QMetaObject PageMultiplayer::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageMultiplayer,
      qt_meta_data_PageMultiplayer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageMultiplayer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageMultiplayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageMultiplayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageMultiplayer))
        return static_cast<void*>(const_cast< PageMultiplayer*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageMultiplayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SetupClicked(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PageMultiplayer::SetupClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_PageOptions[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x08,
      40,   12,   12,   12, 0x08,
      56,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageOptions[] = {
    "PageOptions\0\0index\0forceFullscreen(int)\0"
    "setFullscreen()\0trimNetNick()\0"
};

const QMetaObject PageOptions::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageOptions,
      qt_meta_data_PageOptions, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageOptions))
        return static_cast<void*>(const_cast< PageOptions*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: forceFullscreen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: setFullscreen(); break;
        case 2: trimNetNick(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_PageNet[] = {

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
      19,    9,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,    8,    8,    8, 0x08,
      65,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PageNet[] = {
    "PageNet\0\0host,port\0connectClicked(QString,quint16)\0"
    "slotConnect()\0updateServersList()\0"
};

const QMetaObject PageNet::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageNet,
      qt_meta_data_PageNet, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageNet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageNet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageNet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageNet))
        return static_cast<void*>(const_cast< PageNet*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageNet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: connectClicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 1: slotConnect(); break;
        case 2: updateServersList(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PageNet::connectClicked(const QString & _t1, quint16 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_PageNetServer[] = {

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
      15,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageNetServer[] = {
    "PageNetServer\0\0setDefaultPort()\0"
};

const QMetaObject PageNetServer::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageNetServer,
      qt_meta_data_PageNetServer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageNetServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageNetServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageNetServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageNetServer))
        return static_cast<void*>(const_cast< PageNetServer*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageNetServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setDefaultPort(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_PageNetGame[] = {

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
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   28,   12,   12, 0x0a,
      66,   57,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PageNetGame[] = {
    "PageNetGame\0\0SetupClicked()\0isReady\0"
    "setReadyStatus(bool)\0isMaster\0"
    "setMasterMode(bool)\0"
};

const QMetaObject PageNetGame::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageNetGame,
      qt_meta_data_PageNetGame, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageNetGame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageNetGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageNetGame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageNetGame))
        return static_cast<void*>(const_cast< PageNetGame*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageNetGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: SetupClicked(); break;
        case 1: setReadyStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: setMasterMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PageNetGame::SetupClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_PageInfo[] = {

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

static const char qt_meta_stringdata_PageInfo[] = {
    "PageInfo\0"
};

const QMetaObject PageInfo::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageInfo,
      qt_meta_data_PageInfo, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageInfo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageInfo))
        return static_cast<void*>(const_cast< PageInfo*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PageSinglePlayer[] = {

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

static const char qt_meta_stringdata_PageSinglePlayer[] = {
    "PageSinglePlayer\0"
};

const QMetaObject PageSinglePlayer::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageSinglePlayer,
      qt_meta_data_PageSinglePlayer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageSinglePlayer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageSinglePlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageSinglePlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageSinglePlayer))
        return static_cast<void*>(const_cast< PageSinglePlayer*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageSinglePlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PageTraining[] = {

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

static const char qt_meta_stringdata_PageTraining[] = {
    "PageTraining\0"
};

const QMetaObject PageTraining::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageTraining,
      qt_meta_data_PageTraining, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageTraining::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageTraining::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageTraining::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageTraining))
        return static_cast<void*>(const_cast< PageTraining*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageTraining::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PageCampaign[] = {

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

static const char qt_meta_stringdata_PageCampaign[] = {
    "PageCampaign\0"
};

const QMetaObject PageCampaign::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageCampaign,
      qt_meta_data_PageCampaign, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageCampaign::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageCampaign::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageCampaign::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageCampaign))
        return static_cast<void*>(const_cast< PageCampaign*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageCampaign::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PageSelectWeapon[] = {

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

static const char qt_meta_stringdata_PageSelectWeapon[] = {
    "PageSelectWeapon\0"
};

const QMetaObject PageSelectWeapon::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageSelectWeapon,
      qt_meta_data_PageSelectWeapon, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageSelectWeapon::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageSelectWeapon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageSelectWeapon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageSelectWeapon))
        return static_cast<void*>(const_cast< PageSelectWeapon*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageSelectWeapon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PageInGame[] = {

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

static const char qt_meta_stringdata_PageInGame[] = {
    "PageInGame\0"
};

const QMetaObject PageInGame::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageInGame,
      qt_meta_data_PageInGame, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageInGame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageInGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageInGame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageInGame))
        return static_cast<void*>(const_cast< PageInGame*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageInGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PageRoomsList[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      41,   14,   14,   14, 0x05,
      65,   14,   14,   14, 0x05,
      82,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     116,  111,   14,   14, 0x0a,
     142,   14,   14,   14, 0x0a,
     157,   14,   14,   14, 0x08,
     173,   14,   14,   14, 0x08,
     187,   14,   14,   14, 0x08,
     204,   14,   14,   14, 0x08,
     219,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageRoomsList[] = {
    "PageRoomsList\0\0askForCreateRoom(QString)\0"
    "askForJoinRoom(QString)\0askForRoomList()\0"
    "askJoinConfirmation(QString)\0list\0"
    "setRoomsList(QStringList)\0setAdmin(bool)\0"
    "onCreateClick()\0onJoinClick()\0"
    "onRefreshClick()\0onClearClick()\0"
    "onJoinConfirmation(QString)\0"
};

const QMetaObject PageRoomsList::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageRoomsList,
      qt_meta_data_PageRoomsList, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageRoomsList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageRoomsList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageRoomsList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageRoomsList))
        return static_cast<void*>(const_cast< PageRoomsList*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageRoomsList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: askForCreateRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: askForJoinRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: askForRoomList(); break;
        case 3: askJoinConfirmation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: setRoomsList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: setAdmin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: onCreateClick(); break;
        case 7: onJoinClick(); break;
        case 8: onRefreshClick(); break;
        case 9: onClearClick(); break;
        case 10: onJoinConfirmation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void PageRoomsList::askForCreateRoom(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PageRoomsList::askForJoinRoom(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PageRoomsList::askForRoomList()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void PageRoomsList::askJoinConfirmation(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_PageConnecting[] = {

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

static const char qt_meta_stringdata_PageConnecting[] = {
    "PageConnecting\0"
};

const QMetaObject PageConnecting::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageConnecting,
      qt_meta_data_PageConnecting, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageConnecting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageConnecting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageConnecting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageConnecting))
        return static_cast<void*>(const_cast< PageConnecting*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageConnecting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PageScheme[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      21,   11,   11,   11, 0x0a,
      31,   11,   11,   11, 0x0a,
      43,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageScheme[] = {
    "PageScheme\0\0newRow()\0copyRow()\0"
    "deleteRow()\0schemeSelected(int)\0"
};

const QMetaObject PageScheme::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageScheme,
      qt_meta_data_PageScheme, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageScheme::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageScheme::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageScheme::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageScheme))
        return static_cast<void*>(const_cast< PageScheme*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageScheme::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newRow(); break;
        case 1: copyRow(); break;
        case 2: deleteRow(); break;
        case 3: schemeSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_PageAdmin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   11,   10,   10, 0x05,
      44,   11,   10,   10, 0x05,
      79,   73,   10,   10, 0x05,
      96,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,   10,   10,   10, 0x08,
     124,   11,   10,   10, 0x0a,
     150,   11,   10,   10, 0x0a,
     176,   73,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PageAdmin[] = {
    "PageAdmin\0\0str\0setServerMessageNew(QString)\0"
    "setServerMessageOld(QString)\0proto\0"
    "setProtocol(int)\0askServerVars()\0"
    "smChanged()\0serverMessageNew(QString)\0"
    "serverMessageOld(QString)\0protocol(int)\0"
};

const QMetaObject PageAdmin::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageAdmin,
      qt_meta_data_PageAdmin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageAdmin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageAdmin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageAdmin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageAdmin))
        return static_cast<void*>(const_cast< PageAdmin*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageAdmin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setServerMessageNew((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: setServerMessageOld((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: setProtocol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: askServerVars(); break;
        case 4: smChanged(); break;
        case 5: serverMessageNew((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: serverMessageOld((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: protocol((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PageAdmin::setServerMessageNew(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PageAdmin::setServerMessageOld(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PageAdmin::setProtocol(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PageAdmin::askServerVars()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_PageNetType[] = {

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

static const char qt_meta_stringdata_PageNetType[] = {
    "PageNetType\0"
};

const QMetaObject PageNetType::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageNetType,
      qt_meta_data_PageNetType, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageNetType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageNetType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageNetType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageNetType))
        return static_cast<void*>(const_cast< PageNetType*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageNetType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PageDrawMap[] = {

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
      13,   12,   12,   12, 0x08,
      20,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PageDrawMap[] = {
    "PageDrawMap\0\0load()\0save()\0"
};

const QMetaObject PageDrawMap::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageDrawMap,
      qt_meta_data_PageDrawMap, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageDrawMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageDrawMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageDrawMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageDrawMap))
        return static_cast<void*>(const_cast< PageDrawMap*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageDrawMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: load(); break;
        case 1: save(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
