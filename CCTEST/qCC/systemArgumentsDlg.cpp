/****************************************************************************
** Meta object code from reading C++ file 'systemArgumentsDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "systemArgumentsDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QMessageBox>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemArgumentsDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemArgumentsDlg_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemArgumentsDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemArgumentsDlg_t qt_meta_stringdata_SystemArgumentsDlg = {
    {
QT_MOC_LITERAL(0, 0, 18) // "SystemArgumentsDlg"

    },
    "SystemArgumentsDlg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemArgumentsDlg[] = {

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

void SystemArgumentsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemArgumentsDlg::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_SystemArgumentsDlg.data,
    qt_meta_data_SystemArgumentsDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemArgumentsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemArgumentsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemArgumentsDlg.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SystemArgumentsDialog"))
        return static_cast< Ui::SystemArgumentsDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int SystemArgumentsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

SystemArgumentsDlg::SystemArgumentsDlg(QWidget* parent)
	: QDialog(parent)
	, Ui::SystemArgumentsDialog()
{
	setupUi(this);
	connect(UiSystemArgumentsDialog::okButton, &QPushButton::clicked, this, &SystemArgumentsDlg::accept);
}

void SystemArgumentsDlg::accept() {
	extern double dAngle;
	extern double dR1;
	extern double dR2;
	dR1 = doubleSpinBox->value();
	dR2 = doubleSpinBox_2->value();
	dAngle = doubleSpinBox_3->value();
	QMessageBox::information(this, QStringLiteral("提示"), QStringLiteral("保存成功"), QStringLiteral("确定"));
	close();
}