/****************************************************************************
** Meta object code from reading C++ file 'publicWorkspace.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../publicWorkspace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'publicWorkspace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_publicWorkspace_t {
    QByteArrayData data[12];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_publicWorkspace_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_publicWorkspace_t qt_meta_stringdata_publicWorkspace = {
    {
QT_MOC_LITERAL(0, 0, 15), // "publicWorkspace"
QT_MOC_LITERAL(1, 16, 10), // "sendToDash"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "crossClicked"
QT_MOC_LITERAL(4, 41, 13), // "onToDashClick"
QT_MOC_LITERAL(5, 55, 13), // "receiveDelete"
QT_MOC_LITERAL(6, 69, 3), // "num"
QT_MOC_LITERAL(7, 73, 19), // "receiveDisplayImage"
QT_MOC_LITERAL(8, 93, 10), // "closeEvent"
QT_MOC_LITERAL(9, 104, 12), // "QCloseEvent*"
QT_MOC_LITERAL(10, 117, 5), // "event"
QT_MOC_LITERAL(11, 123, 11) // "handleClose"

    },
    "publicWorkspace\0sendToDash\0\0crossClicked\0"
    "onToDashClick\0receiveDelete\0num\0"
    "receiveDisplayImage\0closeEvent\0"
    "QCloseEvent*\0event\0handleClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_publicWorkspace[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   51,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
      11,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void publicWorkspace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<publicWorkspace *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendToDash(); break;
        case 1: _t->crossClicked(); break;
        case 2: _t->onToDashClick(); break;
        case 3: _t->receiveDelete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->receiveDisplayImage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 6: _t->handleClose(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (publicWorkspace::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&publicWorkspace::sendToDash)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (publicWorkspace::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&publicWorkspace::crossClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject publicWorkspace::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_publicWorkspace.data,
    qt_meta_data_publicWorkspace,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *publicWorkspace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *publicWorkspace::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_publicWorkspace.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int publicWorkspace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void publicWorkspace::sendToDash()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void publicWorkspace::crossClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
