/****************************************************************************
** Meta object code from reading C++ file 'csjtcpsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "csjtcpsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'csjtcpsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CSJTcpSocket_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CSJTcpSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CSJTcpSocket_t qt_meta_stringdata_CSJTcpSocket = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CSJTcpSocket"
QT_MOC_LITERAL(1, 13, 10), // "backToMain"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 22), // "on_buttonClose_clicked"
QT_MOC_LITERAL(4, 48, 21) // "on_buttonSend_clicked"

    },
    "CSJTcpSocket\0backToMain\0\0"
    "on_buttonClose_clicked\0on_buttonSend_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CSJTcpSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CSJTcpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CSJTcpSocket *_t = static_cast<CSJTcpSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backToMain(); break;
        case 1: _t->on_buttonClose_clicked(); break;
        case 2: _t->on_buttonSend_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CSJTcpSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSJTcpSocket::backToMain)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CSJTcpSocket::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CSJTcpSocket.data,
      qt_meta_data_CSJTcpSocket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CSJTcpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSJTcpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CSJTcpSocket.stringdata0))
        return static_cast<void*>(const_cast< CSJTcpSocket*>(this));
    return QWidget::qt_metacast(_clname);
}

int CSJTcpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CSJTcpSocket::backToMain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
