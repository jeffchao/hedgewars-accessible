/****************************************************************************
** Meta object code from reading C++ file 'newnetclient.h'
**
** Created: Fri Mar 18 16:09:44 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "newnetclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newnetclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HWNewNet[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      31,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      26,    9,    9,    9, 0x05,
      38,    9,    9,    9, 0x05,
      53,    9,    9,    9, 0x05,
      67,    9,    9,    9, 0x05,
      94,   78,    9,    9, 0x05,
     123,  118,    9,    9, 0x05,
     144,   78,    9,    9, 0x05,
     173,  118,    9,    9, 0x05,
     203,  199,    9,    9, 0x05,
     223,    9,    9,    9, 0x05,
     241,    9,    9,    9, 0x05,
     258,    9,    9,    9, 0x05,
     300,  288,    9,    9, 0x05,
     334,    9,    9,    9, 0x05,
     348,    9,    9,    9, 0x05,
     367,    9,    9,    9, 0x05,
     388,    9,    9,    9, 0x05,
     413,    9,    9,    9, 0x05,
     440,  438,    9,    9, 0x05,
     473,    9,    9,    9, 0x05,
     500,    9,    9,    9, 0x05,
     526,    9,    9,    9, 0x05,
     557,    9,    9,    9, 0x05,
     580,    9,    9,    9, 0x05,
     603,    9,    9,    9, 0x05,
     629,    9,    9,    9, 0x05,
     655,    9,    9,    9, 0x05,
     691,  678,    9,    9, 0x05,
     728,  720,    9,    9, 0x05,
     751,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     772,    9,    9,    9, 0x0a,
     790,  786,    9,    9, 0x0a,
     813,  786,    9,    9, 0x0a,
     838,  786,    9,    9, 0x0a,
     863,  199,    9,    9, 0x0a,
     888,  883,    9,    9, 0x0a,
     904,  883,    9,    9, 0x0a,
     923,  883,    9,    9, 0x0a,
     953,  883,    9,    9, 0x0a,
     980,  288,    9,    9, 0x0a,
    1016,    9,    9,    9, 0x0a,
    1045,    9,    9,    9, 0x0a,
    1080, 1074,    9,    9, 0x0a,
    1106,    9,    9,    9, 0x0a,
    1127, 1122,    9,    9, 0x0a,
    1145, 1122,    9,    9, 0x0a,
    1165,    9,    9,    9, 0x0a,
    1189, 1180,    9,    9, 0x0a,
    1208,    9,    9,    9, 0x0a,
    1227,    9,    9,    9, 0x0a,
    1247,    9,    9,    9, 0x0a,
    1267,    9,    9,    9, 0x0a,
    1289,    9,    9,    9, 0x0a,
    1301,    9,    9,    9, 0x0a,
    1323,    9,    9,    9, 0x0a,
    1348,    9,    9,    9, 0x0a,
    1359,    9,    9,    9, 0x0a,
    1380,    9,    9,    9, 0x08,
    1393,    9,    9,    9, 0x08,
    1405,    9,    9,    9, 0x08,
    1432, 1420,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HWNewNet[] = {
    "HWNewNet\0\0AskForRunGame()\0Connected()\0"
    "Disconnected()\0EnteredGame()\0LeftRoom()\0"
    "nick,notifyNick\0nickAdded(QString,bool)\0"
    "nick\0nickRemoved(QString)\0"
    "nickAddedLobby(QString,bool)\0"
    "nickRemovedLobby(QString)\0buf\0"
    "FromNet(QByteArray)\0adminAccess(bool)\0"
    "roomMaster(bool)\0netSchemeConfig(QStringList&)\0"
    "param,value\0paramChanged(QString,QStringList)\0"
    "configAsked()\0AddNetTeam(HWTeam)\0"
    "hhnumChanged(HWTeam)\0teamColorChanged(HWTeam)\0"
    "chatStringLobby(QString)\0,\0"
    "chatStringLobby(QString,QString)\0"
    "chatStringFromNet(QString)\0"
    "chatStringFromMe(QString)\0"
    "chatStringFromMeLobby(QString)\0"
    "roomsList(QStringList)\0serverMessage(QString)\0"
    "serverMessageNew(QString)\0"
    "serverMessageOld(QString)\0"
    "latestProtocolVar(int)\0nick,isReady\0"
    "setReadyStatus(QString,bool)\0isReady\0"
    "setMyReadyStatus(bool)\0showMessage(QString)\0"
    "ToggleReady()\0str\0chatLineToNet(QString)\0"
    "chatLineToLobby(QString)\0"
    "SendTeamMessage(QString)\0SendNet(QByteArray)\0"
    "team\0AddTeam(HWTeam)\0RemoveTeam(HWTeam)\0"
    "onHedgehogsNumChanged(HWTeam)\0"
    "onTeamColorChanged(HWTeam)\0"
    "onParamChanged(QString,QStringList)\0"
    "setServerMessageNew(QString)\0"
    "setServerMessageOld(QString)\0proto\0"
    "setLatestProtocolVar(int)\0askServerVars()\0"
    "room\0JoinRoom(QString)\0CreateRoom(QString)\0"
    "askRoomsList()\0correcly\0gameFinished(bool)\0"
    "banPlayer(QString)\0kickPlayer(QString)\0"
    "infoPlayer(QString)\0followPlayer(QString)\0"
    "startGame()\0toggleRestrictJoins()\0"
    "toggleRestrictTeamAdds()\0partRoom()\0"
    "clearAccountsCache()\0ClientRead()\0"
    "OnConnect()\0OnDisconnect()\0socketError\0"
    "displayError(QAbstractSocket::SocketError)\0"
};

const QMetaObject HWNewNet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HWNewNet,
      qt_meta_data_HWNewNet, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HWNewNet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HWNewNet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HWNewNet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HWNewNet))
        return static_cast<void*>(const_cast< HWNewNet*>(this));
    return QObject::qt_metacast(_clname);
}

int HWNewNet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: AskForRunGame(); break;
        case 1: Connected(); break;
        case 2: Disconnected(); break;
        case 3: EnteredGame(); break;
        case 4: LeftRoom(); break;
        case 5: nickAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: nickRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: nickAddedLobby((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: nickRemovedLobby((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: FromNet((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 10: adminAccess((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: roomMaster((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: netSchemeConfig((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 13: paramChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 14: configAsked(); break;
        case 15: AddNetTeam((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 16: hhnumChanged((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 17: teamColorChanged((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 18: chatStringLobby((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: chatStringLobby((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: chatStringFromNet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: chatStringFromMe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: chatStringFromMeLobby((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: roomsList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 24: serverMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: serverMessageNew((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: serverMessageOld((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: latestProtocolVar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: setReadyStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: setMyReadyStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: ToggleReady(); break;
        case 32: chatLineToNet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: chatLineToLobby((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: SendTeamMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: SendNet((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 36: AddTeam((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 37: RemoveTeam((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 38: onHedgehogsNumChanged((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 39: onTeamColorChanged((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 40: onParamChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 41: setServerMessageNew((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: setServerMessageOld((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 43: setLatestProtocolVar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: askServerVars(); break;
        case 45: JoinRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 46: CreateRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 47: askRoomsList(); break;
        case 48: gameFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: banPlayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 50: kickPlayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 51: infoPlayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 52: followPlayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 53: startGame(); break;
        case 54: toggleRestrictJoins(); break;
        case 55: toggleRestrictTeamAdds(); break;
        case 56: partRoom(); break;
        case 57: clearAccountsCache(); break;
        case 58: ClientRead(); break;
        case 59: OnConnect(); break;
        case 60: OnDisconnect(); break;
        case 61: displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 62;
    }
    return _id;
}

// SIGNAL 0
void HWNewNet::AskForRunGame()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void HWNewNet::Connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void HWNewNet::Disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void HWNewNet::EnteredGame()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void HWNewNet::LeftRoom()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void HWNewNet::nickAdded(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HWNewNet::nickRemoved(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void HWNewNet::nickAddedLobby(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void HWNewNet::nickRemovedLobby(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void HWNewNet::FromNet(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void HWNewNet::adminAccess(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void HWNewNet::roomMaster(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void HWNewNet::netSchemeConfig(QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void HWNewNet::paramChanged(const QString & _t1, const QStringList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void HWNewNet::configAsked()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}

// SIGNAL 15
void HWNewNet::AddNetTeam(const HWTeam & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void HWNewNet::hhnumChanged(const HWTeam & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void HWNewNet::teamColorChanged(const HWTeam & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void HWNewNet::chatStringLobby(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void HWNewNet::chatStringLobby(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void HWNewNet::chatStringFromNet(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void HWNewNet::chatStringFromMe(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void HWNewNet::chatStringFromMeLobby(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void HWNewNet::roomsList(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void HWNewNet::serverMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void HWNewNet::serverMessageNew(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void HWNewNet::serverMessageOld(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void HWNewNet::latestProtocolVar(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void HWNewNet::setReadyStatus(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void HWNewNet::setMyReadyStatus(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void HWNewNet::showMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}
QT_END_MOC_NAMESPACE
