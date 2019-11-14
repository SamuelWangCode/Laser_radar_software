/****************************************************************************
** Meta object code from reading C++ file 'flightArgumentsDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "flightArgumentsDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QMessageBox>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flightArgumentsDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightArgumentsDlg_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightArgumentsDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightArgumentsDlg_t qt_meta_stringdata_FlightArgumentsDlg = {
    {
QT_MOC_LITERAL(0, 0, 18) // "FlightArgumentsDlg"

    },
    "FlightArgumentsDlg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightArgumentsDlg[] = {

 // content:
       8,       // revision
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

void FlightArgumentsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FlightArgumentsDlg::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_FlightArgumentsDlg.data,
    qt_meta_data_FlightArgumentsDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightArgumentsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightArgumentsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightArgumentsDlg.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::FlightArgumentsDialog"))
        return static_cast< Ui::FlightArgumentsDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int FlightArgumentsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

FlightArgumentsDlg::FlightArgumentsDlg(QWidget* parent)
	: QDialog(parent)
	, Ui::FlightArgumentsDialog()
{
	setupUi(this);
	connect(UiFlightArgumentsDialog::okButton, &QPushButton::clicked, this, &FlightArgumentsDlg::accept);
}

void FlightArgumentsDlg::accept() {
	extern double dDeltaX;
	extern double dDeltaY;
	extern double dDeltaZ;
	extern double dDeltaOmega;
	extern double dDeltaPhi;
	extern double dDeltaKappa;
	dDeltaX = doubleSpinBox->value();
	dDeltaY = doubleSpinBox_2->value();
	dDeltaZ = doubleSpinBox_3->value();
	dDeltaPhi = doubleSpinBox_4->value();
	dDeltaOmega = doubleSpinBox_5->value();
	dDeltaKappa = doubleSpinBox_6->value();
	QMessageBox::information(this, QStringLiteral("提示"), QStringLiteral("保存成功"), QStringLiteral("确定"));
	close();
}