/****************************************************************************
** Meta object code from reading C++ file 'dashboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../dashboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dashboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dashboard_t {
    QByteArrayData data[20];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dashboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dashboard_t qt_meta_stringdata_dashboard = {
    {
QT_MOC_LITERAL(0, 0, 9), // "dashboard"
QT_MOC_LITERAL(1, 10, 12), // "crossClicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "persNoteAddClick"
QT_MOC_LITERAL(4, 41, 15), // "sclNoteAddClick"
QT_MOC_LITERAL(5, 57, 18), // "submitPersNoteInfo"
QT_MOC_LITERAL(6, 76, 17), // "submitSclNoteInfo"
QT_MOC_LITERAL(7, 94, 10), // "submitFile"
QT_MOC_LITERAL(8, 105, 13), // "receiveDelete"
QT_MOC_LITERAL(9, 119, 3), // "num"
QT_MOC_LITERAL(10, 123, 19), // "receiveDisplayImage"
QT_MOC_LITERAL(11, 143, 17), // "receivePersDelete"
QT_MOC_LITERAL(12, 161, 10), // "closeEvent"
QT_MOC_LITERAL(13, 172, 12), // "QCloseEvent*"
QT_MOC_LITERAL(14, 185, 5), // "event"
QT_MOC_LITERAL(15, 191, 11), // "handleClose"
QT_MOC_LITERAL(16, 203, 10), // "uploadFile"
QT_MOC_LITERAL(17, 214, 4), // "toWS"
QT_MOC_LITERAL(18, 219, 10), // "backToDash"
QT_MOC_LITERAL(19, 230, 5) // "toRem"

    },
    "dashboard\0crossClicked\0\0persNoteAddClick\0"
    "sclNoteAddClick\0submitPersNoteInfo\0"
    "submitSclNoteInfo\0submitFile\0receiveDelete\0"
    "num\0receiveDisplayImage\0receivePersDelete\0"
    "closeEvent\0QCloseEvent*\0event\0handleClose\0"
    "uploadFile\0toWS\0backToDash\0toRem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dashboard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    1,   95,    2, 0x0a /* Public */,
      10,    1,   98,    2, 0x0a /* Public */,
      11,    1,  101,    2, 0x0a /* Public */,
      12,    1,  104,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    1,  108,    2, 0x0a /* Public */,
      17,    0,  111,    2, 0x0a /* Public */,
      18,    0,  112,    2, 0x0a /* Public */,
      19,    0,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dashboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dashboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->crossClicked(); break;
        case 1: _t->persNoteAddClick(); break;
        case 2: _t->sclNoteAddClick(); break;
        case 3: _t->submitPersNoteInfo(); break;
        case 4: _t->submitSclNoteInfo(); break;
        case 5: _t->submitFile(); break;
        case 6: _t->receiveDelete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->receiveDisplayImage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->receivePersDelete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 10: _t->handleClose(); break;
        case 11: _t->uploadFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->toWS(); break;
        case 13: _t->backToDash(); break;
        case 14: _t->toRem(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (dashboard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&dashboard::crossClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dashboard::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_dashboard.data,
    qt_meta_data_dashboard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dashboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dashboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dashboard.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int dashboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void dashboard::crossClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
