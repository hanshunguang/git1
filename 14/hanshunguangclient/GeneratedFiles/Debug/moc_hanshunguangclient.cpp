/****************************************************************************
** Meta object code from reading C++ file 'hanshunguangclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hanshunguangclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hanshunguangclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_hanshunguangclient_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hanshunguangclient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hanshunguangclient_t qt_meta_stringdata_hanshunguangclient = {
    {
QT_MOC_LITERAL(0, 0, 18), // "hanshunguangclient"
QT_MOC_LITERAL(1, 19, 11), // "signal_test"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "signal_myzhongzhuan"
QT_MOC_LITERAL(4, 52, 20) // "signal_myzhongzhuan1"

    },
    "hanshunguangclient\0signal_test\0\0"
    "signal_myzhongzhuan\0signal_myzhongzhuan1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hanshunguangclient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       3,    1,   32,    2, 0x06 /* Public */,
       4,    2,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    2,

       0        // eod
};

void hanshunguangclient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        hanshunguangclient *_t = static_cast<hanshunguangclient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_test((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->signal_myzhongzhuan((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->signal_myzhongzhuan1((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (hanshunguangclient::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&hanshunguangclient::signal_test)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (hanshunguangclient::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&hanshunguangclient::signal_myzhongzhuan)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (hanshunguangclient::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&hanshunguangclient::signal_myzhongzhuan1)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject hanshunguangclient::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_hanshunguangclient.data,
      qt_meta_data_hanshunguangclient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *hanshunguangclient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hanshunguangclient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_hanshunguangclient.stringdata0))
        return static_cast<void*>(const_cast< hanshunguangclient*>(this));
    return QWidget::qt_metacast(_clname);
}

int hanshunguangclient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void hanshunguangclient::signal_test(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void hanshunguangclient::signal_myzhongzhuan(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void hanshunguangclient::signal_myzhongzhuan1(QString _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE