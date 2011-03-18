/****************************************************************************
** Meta object code from reading C++ file 'hwform.h'
**
** Created: Fri Mar 18 16:09:42 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "hwform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hwform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HWForm[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      20,    7,    7,    7, 0x08,
      32,    7,    7,    7, 0x08,
      42,    7,    7,    7, 0x08,
      67,   61,    7,    7, 0x08,
      92,    7,    7,    7, 0x08,
     114,   61,    7,    7, 0x08,
     130,    7,    7,    7, 0x08,
     147,    7,    7,    7, 0x08,
     166,  163,    7,    7, 0x08,
     180,    7,    7,    7, 0x08,
     189,    7,    7,    7, 0x08,
     206,    7,    7,    7, 0x08,
     223,    7,    7,    7, 0x08,
     240,    7,    7,    7, 0x08,
     260,    7,    7,    7, 0x08,
     270,    7,    7,    7, 0x08,
     281,    7,    7,    7, 0x08,
     294,    7,    7,    7, 0x08,
     310,  308,    7,    7, 0x08,
     326,    7,    7,    7, 0x08,
     337,    7,    7,    7, 0x08,
     351,    7,    7,    7, 0x08,
     366,    7,    7,    7, 0x08,
     384,    7,    7,    7, 0x08,
     397,    7,    7,    7, 0x08,
     408,    7,    7,    7, 0x08,
     424,    7,    7,    7, 0x08,
     440,    7,    7,    7, 0x08,
     463,  453,    7,    7, 0x08,
     497,    7,    7,    7, 0x08,
     524,    7,    7,    7, 0x08,
     541,    7,    7,    7, 0x08,
     557,    7,    7,    7, 0x08,
     572,    7,    7,    7, 0x08,
     592,  587,    7,    7, 0x08,
     611,    7,    7,    7, 0x08,
     635,  625,    7,    7, 0x08,
     663,    7,    7,    7, 0x08,
     682,    7,    7,    7, 0x08,
     722,  708,    7,    7, 0x08,
     749,    7,    7,    7, 0x08,
     765,    7,    7,    7, 0x08,
     787,  781,    7,    7, 0x08,
     822,  814,    7,    7, 0x08,
     834,   61,    7,    7, 0x08,
     867,  858,    7,    7, 0x08,
     893,    7,    7,    7, 0x08,
     909,    7,    7,    7, 0x08,
     924,    7,    7,    7, 0x08,
     946,    7,    7,    7, 0x08,
     960,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HWForm[] = {
    "HWForm\0\0GoToSaves()\0GoToDemos()\0"
    "GoToNet()\0GoToSelectWeapon()\0index\0"
    "GoToSelectWeaponSet(int)\0GoToSelectNewWeapon()\0"
    "GoToScheme(int)\0GoToEditScheme()\0"
    "GoToNewScheme()\0id\0GoToPage(int)\0"
    "GoBack()\0AssociateFiles()\0btnExitPressed()\0"
    "btnExitClicked()\0IntermediateSetup()\0"
    "NewTeam()\0EditTeam()\0DeleteTeam()\0"
    "RandomNames()\0i\0RandomName(int)\0"
    "TeamSave()\0TeamDiscard()\0DeleteScheme()\0"
    "DeleteWeaponSet()\0SimpleGame()\0"
    "PlayDemo()\0StartTraining()\0StartCampaign()\0"
    "NetConnect()\0host,port\0"
    "NetConnectServer(QString,quint16)\0"
    "NetConnectOfficialServer()\0NetStartServer()\0"
    "NetDisconnect()\0NetConnected()\0"
    "NetGameEnter()\0team\0AddNetTeam(HWTeam)\0"
    "StartMPGame()\0gameState\0"
    "GameStateChanged(GameState)\0"
    "ForcedDisconnect()\0ShowErrorMessage(QString)\0"
    "isDemo,record\0GetRecord(bool,QByteArray)\0"
    "CreateNetGame()\0UpdateWeapons()\0value\0"
    "onFrontendFullscreen(bool)\0checked\0"
    "Music(bool)\0UpdateCampaignPage(int)\0"
    "isMaster\0NetGameChangeStatus(bool)\0"
    "NetGameMaster()\0NetGameSlave()\0"
    "AsyncNetServerStart()\0NetLeftRoom()\0"
    "selectFirstNetScheme()\0"
};

const QMetaObject HWForm::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_HWForm,
      qt_meta_data_HWForm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HWForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HWForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HWForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HWForm))
        return static_cast<void*>(const_cast< HWForm*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int HWForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: GoToSaves(); break;
        case 1: GoToDemos(); break;
        case 2: GoToNet(); break;
        case 3: GoToSelectWeapon(); break;
        case 4: GoToSelectWeaponSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: GoToSelectNewWeapon(); break;
        case 6: GoToScheme((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: GoToEditScheme(); break;
        case 8: GoToNewScheme(); break;
        case 9: GoToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: GoBack(); break;
        case 11: AssociateFiles(); break;
        case 12: btnExitPressed(); break;
        case 13: btnExitClicked(); break;
        case 14: IntermediateSetup(); break;
        case 15: NewTeam(); break;
        case 16: EditTeam(); break;
        case 17: DeleteTeam(); break;
        case 18: RandomNames(); break;
        case 19: RandomName((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 20: TeamSave(); break;
        case 21: TeamDiscard(); break;
        case 22: DeleteScheme(); break;
        case 23: DeleteWeaponSet(); break;
        case 24: SimpleGame(); break;
        case 25: PlayDemo(); break;
        case 26: StartTraining(); break;
        case 27: StartCampaign(); break;
        case 28: NetConnect(); break;
        case 29: NetConnectServer((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 30: NetConnectOfficialServer(); break;
        case 31: NetStartServer(); break;
        case 32: NetDisconnect(); break;
        case 33: NetConnected(); break;
        case 34: NetGameEnter(); break;
        case 35: AddNetTeam((*reinterpret_cast< const HWTeam(*)>(_a[1]))); break;
        case 36: StartMPGame(); break;
        case 37: GameStateChanged((*reinterpret_cast< GameState(*)>(_a[1]))); break;
        case 38: ForcedDisconnect(); break;
        case 39: ShowErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: GetRecord((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 41: CreateNetGame(); break;
        case 42: UpdateWeapons(); break;
        case 43: onFrontendFullscreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: Music((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: UpdateCampaignPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: NetGameChangeStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: NetGameMaster(); break;
        case 48: NetGameSlave(); break;
        case 49: AsyncNetServerStart(); break;
        case 50: NetLeftRoom(); break;
        case 51: selectFirstNetScheme(); break;
        default: ;
        }
        _id -= 52;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
