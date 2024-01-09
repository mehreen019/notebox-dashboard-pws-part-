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
    QByteArrayData data[16];
    char stringdata0[173];
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
QT_MOC_LITERAL(3, 24, 12), // "noteAddClick"
QT_MOC_LITERAL(4, 37, 17), // "submitSclNoteInfo"
QT_MOC_LITERAL(5, 55, 10), // "submitFile"
QT_MOC_LITERAL(6, 66, 13), // "receiveDelete"
QT_MOC_LITERAL(7, 80, 3), // "num"
QT_MOC_LITERAL(8, 84, 19), // "receiveDisplayImage"
QT_MOC_LITERAL(9, 104, 10), // "closeEvent"
QT_MOC_LITERAL(10, 115, 12), // "QCloseEvent*"
QT_MOC_LITERAL(11, 128, 5), // "event"
QT_MOC_LITERAL(12, 134, 11), // "handleClose"
QT_MOC_LITERAL(13, 146, 10), // "uploadFile"
QT_MOC_LITERAL(14, 157, 4), // "toWS"
QT_MOC_LITERAL(15, 162, 10) // "backToDash"

    },
    "dashboard\0crossClicked\0\0noteAddClick\0"
    "submitSclNoteInfo\0submitFile\0receiveDelete\0"
    "num\0receiveDisplayImage\0closeEvent\0"
    "QCloseEvent*\0event\0handleClose\0"
    "uploadFile\0toWS\0backToDash"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dashboard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    1,   73,    2, 0x0a /* Public */,
       8,    1,   76,    2, 0x0a /* Public */,
       9,    1,   79,    2, 0x0a /* Public */,
      12,    0,   82,    2, 0x0a /* Public */,
      13,    1,   83,    2, 0x0a /* Public */,
      14,    0,   86,    2, 0x0a /* Public */,
      15,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
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
        case 1: _t->noteAddClick(); break;
        case 2: _t->submitSclNoteInfo(); break;
        case 3: _t->submitFile(); break;
        case 4: _t->receiveDelete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->receiveDisplayImage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 7: _t->handleClose(); break;
        case 8: _t->uploadFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toWS(); break;
        case 10: _t->backToDash(); break;
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
