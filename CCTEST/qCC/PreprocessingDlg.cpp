/****************************************************************************
** Meta object code from reading C++ file 'PreprocessingDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "PreprocessingDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QFileDialog>
#include "ccDataProcessing.h"

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PreprocessingDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PreprocessingDlg_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreprocessingDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreprocessingDlg_t qt_meta_stringdata_PreprocessingDlg = {
    {
QT_MOC_LITERAL(0, 0, 16) // "PreprocessingDlg"

    },
    "PreprocessingDlg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreprocessingDlg[] = {

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

void PreprocessingDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PreprocessingDlg::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_PreprocessingDlg.data,
    qt_meta_data_PreprocessingDlg,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PreprocessingDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreprocessingDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreprocessingDlg.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::PreprocessingDialog"))
        return static_cast< Ui::PreprocessingDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int PreprocessingDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

PreprocessingDlg::PreprocessingDlg(QWidget* parent) 
	:QDialog(parent)
	,Ui::PreprocessingDialog()
{
	setupUi(this);
	groupButton = new QButtonGroup(this);
	groupButton->addButton(radioButton, 0);
	groupButton->addButton(radioButton_2, 1);

	connect(UiPreprocessingDialog::pushButton, &QPushButton::clicked, this, &PreprocessingDlg::chooseFile);
	connect(UiPreprocessingDialog::okButton, &QPushButton::clicked, this, &PreprocessingDlg::exert);
	connect(UiPreprocessingDialog::radioButton, &QPushButton::clicked, this, &PreprocessingDlg::selectionHasChanged);
	connect(UiPreprocessingDialog::radioButton_2, &QPushButton::clicked, this, &PreprocessingDlg::selectionHasChanged);
}

void PreprocessingDlg::chooseFile() {
	address = QFileDialog::getOpenFileName(this, QStringLiteral("请选择要打开的数据文件"), "C:\\Users\\user\\Documents", "(*.dat)");
	textEdit->setText(address);
}

void PreprocessingDlg::exert() {
	qDebug() << "开始执行" << endl;
	LidarPointCLoudA * cloud = new LidarPointCLoudA();
	if (radioButton->isChecked()) {
		qDebug() << PreprocessingDlg::spinBox->value();
		cloud = HistogramExFiltProcess(address, PreprocessingDlg::spinBox->value());
		
		qDebug() << "cloud:" << cloud;
	}
	else if (radioButton_2->isChecked()) {
		cloud = HistogramFiltProcess(address, PreprocessingDlg::spinBox->value());

	}
}

void PreprocessingDlg::selectionHasChanged() {
	switch (groupButton->checkedId())
	{
	case 0:
	{
		label->setText(QStringLiteral("区间大小:"));
		break;
	}
	case 1:
	{
		label->setText(QStringLiteral("噪声功率:"));
		break;
	}
	default:
		break;
	}
}