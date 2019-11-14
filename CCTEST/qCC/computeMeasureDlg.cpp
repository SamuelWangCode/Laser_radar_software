/****************************************************************************
** Meta object code from reading C++ file 'computeMeasureDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "computeMeasureDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QFileDialog>
#include <QMessageBox>
#include "ccDataProcessing.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'computeMeasureDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComputeMeasureDlg_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComputeMeasureDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComputeMeasureDlg_t qt_meta_stringdata_ComputeMeasureDlg = {
    {
QT_MOC_LITERAL(0, 0, 17) // "ComputeMeasureDlg"

    },
    "ComputeMeasureDlg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComputeMeasureDlg[] = {

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

void ComputeMeasureDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ComputeMeasureDlg::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_ComputeMeasureDlg.data,
    qt_meta_data_ComputeMeasureDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComputeMeasureDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComputeMeasureDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComputeMeasureDlg.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ComputeMeasureDialog"))
        return static_cast< Ui::ComputeMeasureDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int ComputeMeasureDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

ComputeMeasureDlg::ComputeMeasureDlg(QWidget* parent)
	:QDialog(parent)
	, Ui::ComputeMeasureDialog()
{
	setupUi(this);
	connect(UiComputeMeasureDialog::cancelButton, &QPushButton::clicked, this, &ComputeMeasureDlg::close);
	connect(UiComputeMeasureDialog::pushButton, &QPushButton::clicked, this, &ComputeMeasureDlg::chooseFile2);
	connect(UiComputeMeasureDialog::pushButton_2, &QPushButton::clicked, this, &ComputeMeasureDlg::chooseFile1);
	connect(UiComputeMeasureDialog::pushButton_3, &QPushButton::clicked, this, &ComputeMeasureDlg::chooseFile3);
	connect(UiComputeMeasureDialog::okButton, &QPushButton::clicked, this, &ComputeMeasureDlg::exert);
}
void ComputeMeasureDlg::chooseFile1() {
	QString address = QFileDialog::getOpenFileName(this, QStringLiteral("请选择要打开的POS文件"), "C:\\Users\\user\\Documents", "(*.txt)");
	textEdit->setText(address);
}
void ComputeMeasureDlg::chooseFile2() {
	QString address = QFileDialog::getOpenFileName(this, QStringLiteral("请选择要打开的点云文件"), "C:\\Users\\user\\Documents", "(*.dat)");
	textEdit_2->setText(address);
}
void ComputeMeasureDlg::chooseFile3() {
	QString address = QFileDialog::getSaveFileName(this, QStringLiteral("请选择保存的路径"), "projectFileName.dat", QStringLiteral("数据文件 (*.dat)"));
	textEdit_3->setText(address);
}
void ComputeMeasureDlg::exert() {
	int result = CalClXYZprocess(textEdit->toPlainText(), textEdit_2->toPlainText(), textEdit_3->toPlainText());
	qDebug() << result;
	QMessageBox::information(this, QStringLiteral("生成完毕"), QStringLiteral("生成完毕"), QStringLiteral("确定"));
}