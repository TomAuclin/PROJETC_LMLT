/****************************************************************************
** Meta object code from reading C++ file 'bibliowindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bibliowindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bibliowindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BiblioWindow_t {
    QByteArrayData data[9];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BiblioWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BiblioWindow_t qt_meta_stringdata_BiblioWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BiblioWindow"
QT_MOC_LITERAL(1, 13, 30), // "on_ChargerBiblioButton_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 30), // "on_AffichageBiblio_itemClicked"
QT_MOC_LITERAL(4, 76, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 93, 4), // "item"
QT_MOC_LITERAL(6, 98, 27), // "on_TraitementButton_clicked"
QT_MOC_LITERAL(7, 126, 24), // "on_DetailsButton_clicked"
QT_MOC_LITERAL(8, 151, 32) // "on_pushButtonRechercherp_clicked"

    },
    "BiblioWindow\0on_ChargerBiblioButton_clicked\0"
    "\0on_AffichageBiblio_itemClicked\0"
    "QListWidgetItem*\0item\0on_TraitementButton_clicked\0"
    "on_DetailsButton_clicked\0"
    "on_pushButtonRechercherp_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BiblioWindow[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BiblioWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BiblioWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_ChargerBiblioButton_clicked(); break;
        case 1: _t->on_AffichageBiblio_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_TraitementButton_clicked(); break;
        case 3: _t->on_DetailsButton_clicked(); break;
        case 4: _t->on_pushButtonRechercherp_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BiblioWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_BiblioWindow.data,
    qt_meta_data_BiblioWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BiblioWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BiblioWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BiblioWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BiblioWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
