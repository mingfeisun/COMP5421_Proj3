/****************************************************************************
** Meta object code from reading C++ file 'svminfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../svm/svminfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svminfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_svmInfo_t {
    QByteArrayData data[6];
    char stringdata[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_svmInfo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_svmInfo_t qt_meta_stringdata_svmInfo = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 12),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 12),
QT_MOC_LITERAL(4, 35, 12),
QT_MOC_LITERAL(5, 48, 11)
    },
    "svmInfo\0pointChanged\0\0comboChanged\0"
    "checkChanged\0updateLabel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_svmInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   39,    2, 0x08,
       4,    0,   42,    2, 0x08,
       5,    0,   43,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void svmInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        svmInfo *_t = static_cast<svmInfo *>(_o);
        switch (_id) {
        case 0: _t->pointChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->comboChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->checkChanged(); break;
        case 3: _t->updateLabel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (svmInfo::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&svmInfo::pointChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject svmInfo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_svmInfo.data,
      qt_meta_data_svmInfo,  qt_static_metacall, 0, 0}
};


const QMetaObject *svmInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *svmInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_svmInfo.stringdata))
        return static_cast<void*>(const_cast< svmInfo*>(this));
    return QWidget::qt_metacast(_clname);
}

int svmInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void svmInfo::pointChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
