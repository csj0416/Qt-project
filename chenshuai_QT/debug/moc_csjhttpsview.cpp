/****************************************************************************
** Meta object code from reading C++ file 'csjhttpsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../csjhttpsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'csjhttpsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CSJHttpsView_t {
    QByteArrayData data[9];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CSJHttpsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CSJHttpsView_t qt_meta_stringdata_CSJHttpsView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CSJHttpsView"
QT_MOC_LITERAL(1, 13, 10), // "backToMain"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 47, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 71, 15), // "textFinish_slot"
QT_MOC_LITERAL(6, 87, 12), // "finishedSlot"
QT_MOC_LITERAL(7, 100, 14), // "QNetworkReply*"
QT_MOC_LITERAL(8, 115, 5) // "reply"

    },
    "CSJHttpsView\0backToMain\0\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0textFinish_slot\0"
    "finishedSlot\0QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CSJHttpsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void CSJHttpsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CSJHttpsView *_t = static_cast<CSJHttpsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backToMain(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->textFinish_slot(); break;
        case 4: _t->finishedSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CSJHttpsView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CSJHttpsView::backToMain)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CSJHttpsView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CSJHttpsView.data,
      qt_meta_data_CSJHttpsView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CSJHttpsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSJHttpsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CSJHttpsView.stringdata0))
        return static_cast<void*>(const_cast< CSJHttpsView*>(this));
    return QWidget::qt_metacast(_clname);
}

int CSJHttpsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CSJHttpsView::backToMain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
