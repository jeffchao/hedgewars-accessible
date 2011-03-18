/****************************************************************************
** Meta object code from reading C++ file 'statsPage.h'
**
** Created: Fri Mar 18 16:09:46 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "statsPage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statsPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FitGraphicsView[] = {

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

static const char qt_meta_stringdata_FitGraphicsView[] = {
    "FitGraphicsView\0"
};

const QMetaObject FitGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_FitGraphicsView,
      qt_meta_data_FitGraphicsView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FitGraphicsView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FitGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FitGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FitGraphicsView))
        return static_cast<void*>(const_cast< FitGraphicsView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int FitGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_PageGameStats[] = {

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
      25,   15,   14,   14, 0x0a,
      49,   14,   14,   14, 0x0a,
      57,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PageGameStats[] = {
    "PageGameStats\0\0type,info\0"
    "GameStats(char,QString)\0clear()\0"
    "renderStats()\0"
};

const QMetaObject PageGameStats::staticMetaObject = {
    { &AbstractPage::staticMetaObject, qt_meta_stringdata_PageGameStats,
      qt_meta_data_PageGameStats, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PageGameStats::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PageGameStats::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PageGameStats::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PageGameStats))
        return static_cast<void*>(const_cast< PageGameStats*>(this));
    return AbstractPage::qt_metacast(_clname);
}

int PageGameStats::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: GameStats((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: clear(); break;
        case 2: renderStats(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
