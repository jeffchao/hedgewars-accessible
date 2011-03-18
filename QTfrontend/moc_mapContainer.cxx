/****************************************************************************
** Meta object code from reading C++ file 'mapContainer.h'
**
** Created: Fri Mar 18 16:09:43 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mapContainer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapContainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HWMapContainer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   16,   15,   15, 0x05,
      46,   42,   15,   15, 0x05,
      72,   66,   15,   15, 0x05,
     101,   94,   15,   15, 0x05,
     126,  124,   15,   15, 0x05,
     156,  154,   15,   15, 0x05,
     177,   15,   15,   15, 0x05,
     201,  196,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     229,   15,   15,   15, 0x0a,
     254,   16,   15,   15, 0x0a,
     271,   42,   15,   15, 0x0a,
     287,   66,   15,   15, 0x0a,
     305,   15,   15,   15, 0x0a,
     328,  124,   15,   15, 0x0a,
     357,  352,   15,   15, 0x0a,
     377,  374,   15,   15, 0x0a,
     430,  405,   15,   15, 0x0a,
     497,  488,   15,   15, 0x08,
     522,  514,   15,   15, 0x08,
     544,  538,   15,   15, 0x08,
     560,   15,   15,   15, 0x08,
     576,   15,   15,   15, 0x08,
     593,   15,   15,   15, 0x08,
     608,   15,   15,   15, 0x08,
     626,   15,   15,   15, 0x08,
     656,  645,   15,   15, 0x08,
     681,  675,   15,   15, 0x08,
     707,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HWMapContainer[] = {
    "HWMapContainer\0\0seed\0seedChanged(QString)\0"
    "map\0mapChanged(QString)\0theme\0"
    "themeChanged(QString)\0filter\0"
    "newTemplateFilter(int)\0m\0"
    "mapgenChanged(MapGenerator)\0s\0"
    "mazeSizeChanged(int)\0drawMapRequested()\0"
    "data\0drawnMapChanged(QByteArray)\0"
    "askForGeneratedPreview()\0setSeed(QString)\0"
    "setMap(QString)\0setTheme(QString)\0"
    "setTemplateFilter(int)\0setMapgen(MapGenerator)\0"
    "size\0setMazeSize(int)\0ar\0"
    "setDrawnMapData(QByteArray)\0"
    "map,m,mazesize,seed,tmpl\0"
    "setAllMapParameters(QString,MapGenerator,int,QString,int)\0"
    "newImage\0setImage(QImage)\0hhLimit\0"
    "setHHLimit(int)\0index\0mapChanged(int)\0"
    "setRandomSeed()\0setRandomTheme()\0"
    "setRandomMap()\0setRandomStatic()\0"
    "setRandomMission()\0currentRow\0"
    "themeSelected(int)\0image\0"
    "addInfoToPreview(QPixmap)\0seedEdited()\0"
};

const QMetaObject HWMapContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HWMapContainer,
      qt_meta_data_HWMapContainer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HWMapContainer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HWMapContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HWMapContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HWMapContainer))
        return static_cast<void*>(const_cast< HWMapContainer*>(this));
    return QWidget::qt_metacast(_clname);
}

int HWMapContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: seedChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: mapChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: themeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: newTemplateFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: mapgenChanged((*reinterpret_cast< MapGenerator(*)>(_a[1]))); break;
        case 5: mazeSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: drawMapRequested(); break;
        case 7: drawnMapChanged((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: askForGeneratedPreview(); break;
        case 9: setSeed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: setMap((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: setTheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: setTemplateFilter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: setMapgen((*reinterpret_cast< MapGenerator(*)>(_a[1]))); break;
        case 14: setMazeSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: setDrawnMapData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 16: setAllMapParameters((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MapGenerator(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 17: setImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 18: setHHLimit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: mapChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: setRandomSeed(); break;
        case 21: setRandomTheme(); break;
        case 22: setRandomMap(); break;
        case 23: setRandomStatic(); break;
        case 24: setRandomMission(); break;
        case 25: themeSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: addInfoToPreview((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 27: seedEdited(); break;
        default: ;
        }
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void HWMapContainer::seedChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HWMapContainer::mapChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HWMapContainer::themeChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HWMapContainer::newTemplateFilter(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HWMapContainer::mapgenChanged(MapGenerator _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HWMapContainer::mazeSizeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HWMapContainer::drawMapRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void HWMapContainer::drawnMapChanged(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
