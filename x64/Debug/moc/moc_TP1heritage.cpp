/****************************************************************************
** Meta object code from reading C++ file 'TP1heritage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../TP1heritage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TP1heritage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TP1heritage_t {
    QByteArrayData data[7];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TP1heritage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TP1heritage_t qt_meta_stringdata_TP1heritage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TP1heritage"
QT_MOC_LITERAL(1, 12, 26), // "onSendMessageButtonClicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20), // "onButtonResetClicked"
QT_MOC_LITERAL(4, 61, 10), // "scoreboard"
QT_MOC_LITERAL(5, 72, 21), // "onButtonHidedeClicked"
QT_MOC_LITERAL(6, 94, 26) // "onButtonHidedehistoClicked"

    },
    "TP1heritage\0onSendMessageButtonClicked\0"
    "\0onButtonResetClicked\0scoreboard\0"
    "onButtonHidedeClicked\0onButtonHidedehistoClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TP1heritage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TP1heritage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TP1heritage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->onSendMessageButtonClicked();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->onButtonResetClicked(); break;
        case 2: _t->scoreboard(); break;
        case 3: _t->onButtonHidedeClicked(); break;
        case 4: _t->onButtonHidedehistoClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TP1heritage::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TP1heritage.data,
    qt_meta_data_TP1heritage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TP1heritage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TP1heritage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TP1heritage.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TP1heritage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
