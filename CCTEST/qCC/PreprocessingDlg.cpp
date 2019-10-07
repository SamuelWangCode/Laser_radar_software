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
#include <QMessageBox>
#include <QProgressDialog>


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
	groupButton->addButton(radioButton_3, 2);
	groupButton->addButton(radioButton_4, 3);

	connect(UiPreprocessingDialog::pushButton_2, &QPushButton::clicked, this, &PreprocessingDlg::close);
	connect(UiPreprocessingDialog::pushButton, &QPushButton::clicked, this, &PreprocessingDlg::chooseFile);
	connect(UiPreprocessingDialog::okButton, &QPushButton::clicked, this, &PreprocessingDlg::exert);
	connect(UiPreprocessingDialog::radioButton, &QPushButton::clicked, this, &PreprocessingDlg::selectionHasChanged);
	connect(UiPreprocessingDialog::radioButton_2, &QPushButton::clicked, this, &PreprocessingDlg::selectionHasChanged);
	connect(UiPreprocessingDialog::radioButton_3, &QPushButton::clicked, this, &PreprocessingDlg::selectionHasChanged);
	connect(UiPreprocessingDialog::radioButton_4, &QPushButton::clicked, this, &PreprocessingDlg::selectionHasChanged);
}

void PreprocessingDlg::chooseFile() {
	address.clear();
	address = QFileDialog::getOpenFileNames(this, QStringLiteral("请选择要打开的数据文件"), "C:\\Users\\user\\Documents", "(*.dat)");
	if (address.size() > 0) {
		int pos = address[0].lastIndexOf("/");
		QString newAddress = address[0];
		newAddress = newAddress.remove(pos, address[0].length() - pos);
		textEdit->setText(newAddress);
		fileNumber->setText(QString::number(address.size()));
	}
}

void PreprocessingDlg::exert() {
	if (address.size() == 0) {
		QMessageBox::warning(this, QStringLiteral("警告"), QStringLiteral("请至少选择一个文件"), QStringLiteral("确定"));
		return;
	}
	progress = new QProgressDialog(this);
	progress->setWindowModality(Qt::WindowModal);
	progress->show();
	iSize = 0;
	qDebug() << "开始执行" << endl;
	LidarPointCLoudA * cloud;
	int chooseCH = 0;
	qDebug() << CH1->isChecked();
	if ((CH1->isChecked()) && (!(CH2->isChecked())) && (!(CH3->isChecked())) && (!(CH4->isChecked()))) {
		chooseCH = 1;
	}
	else if (!(CH1->isChecked()) && (CH2->isChecked()) && !(CH3->isChecked()) && !(CH4->isChecked())) {
		chooseCH = 2;
	}
	else if (!(CH1->isChecked()) && !(CH2->isChecked()) && (CH3->isChecked()) && !(CH4->isChecked())) {
		chooseCH = 3;
	}
	else if (!(CH1->isChecked()) && !(CH2->isChecked()) && !(CH3->isChecked()) && (CH4->isChecked())) {
		chooseCH = 4;
	}
	else if ((CH1->isChecked()) && (CH2->isChecked()) && !(CH3->isChecked()) && !(CH4->isChecked())) {
		chooseCH = 12;
	}
	else if ((CH1->isChecked()) && !(CH2->isChecked()) && (CH3->isChecked()) && !(CH4->isChecked())) {
		chooseCH = 13;
	}
	else if ((CH1->isChecked()) && !(CH2->isChecked()) && !(CH3->isChecked()) && (CH4->isChecked())) {
		chooseCH = 14;
	}
	else if (!(CH1->isChecked()) && (CH2->isChecked()) && (CH3->isChecked()) && !(CH4->isChecked())) {
		chooseCH = 23;
	}
	else if (!(CH1->isChecked()) && (CH2->isChecked()) && !(CH3->isChecked()) && (CH4->isChecked())) {
		chooseCH = 24;
	}
	else if (!(CH1->isChecked()) && !(CH2->isChecked()) && (CH3->isChecked()) && (CH4->isChecked())) {
		chooseCH = 34;
	}
	else if ((CH1->isChecked()) && (CH2->isChecked()) && (CH3->isChecked()) && !(CH4->isChecked())) {
		chooseCH = 123;
	}
	else if ((CH1->isChecked()) && (CH2->isChecked()) && !(CH3->isChecked()) && (CH4->isChecked())) {
		chooseCH = 124;
	}
	else if ((CH1->isChecked()) && !(CH2->isChecked()) && (CH3->isChecked()) && (CH4->isChecked())) {
		chooseCH = 134;
	}
	else if (!(CH1->isChecked()) && (CH2->isChecked()) && (CH3->isChecked()) && (CH4->isChecked())) {
		chooseCH = 234;
	}
	else if ((CH1->isChecked()) && (CH2->isChecked()) && (CH3->isChecked()) && (CH4->isChecked())) {
		chooseCH = 1234;
	}
	else {
		chooseCH = 0;
	}
	if (chooseCH == 0) {
		QMessageBox::warning(this, QStringLiteral("警告"), QStringLiteral("请至少选择一个通道"), QStringLiteral("是"));
	}
	else {
		if (radioButton->isChecked()) {
			qDebug() << PreprocessingDlg::spinBox->value();
			cloud = KNNProcess(address, PreprocessingDlg::spinBox->value(), iSize, chooseCH);
		}
		else if (radioButton_2->isChecked()) {
			cloud = HistogramFiltProcess(address, PreprocessingDlg::spinBox->value(), iSize, chooseCH);
			progress->close();
		}
		else if (radioButton_3->isChecked()) {
			cloud = mDBSCAN_filterprocessing(address, PreprocessingDlg::spinBox->value(), iSize, chooseCH);
			progress->close();
		}
		else if (radioButton_4->isChecked()) {
			cloud = Unfilterprocessing(address, iSize, chooseCH);
			progress->close();
		}
	}
	progress->close();
	if (0 == QMessageBox::question(this, QStringLiteral("执行完毕"), QStringLiteral("数据已读取完毕，是否保存预处理结果？"), QStringLiteral("保存"), QStringLiteral("取消")))
	{
		//0对应“是”
		QString fileName;
		fileName = QFileDialog::getSaveFileName(this,
			QStringLiteral("保存文件"), "projectFileName.dat", QStringLiteral("数据文件 (*.dat) (*.txt)"));
		finalAddress = fileName;
		if (!fileName.isNull())
		{
			WritePreProcessingFile(fileName, cloud, iSize);
			//delete cloud;
			//QMessageBox::information(this, QStringLiteral("保存成功"), QStringLiteral("保存成功！"), QStringLiteral("确定"));
			if (0 == QMessageBox::question(this, QStringLiteral("保存成功"), QStringLiteral("数据已保存成功，是否进行本体坐标点云计算？"), QStringLiteral("是"), QStringLiteral("否"))) {
				//TODO::函数接口

			}
			else {
				delete cloud;
			}
		}
		else {
			QMessageBox::warning(this, QStringLiteral("保存失败"), QStringLiteral("保存失败"), QStringLiteral("确定"));
			delete cloud;
		}
	}
	else {
		delete cloud;
	}
}

void PreprocessingDlg::selectionHasChanged() {
	
	
	qDebug() << "Selection Has Changed ";
	switch (groupButton->checkedId())
	{
	case 0:
	{
		label->setText(QStringLiteral("区间大小:"));
		horizontalLayoutWidget_2->setVisible(true);
		break;
	}
	case 1:
	{
		label->setText(QStringLiteral("噪声功率:"));
		horizontalLayoutWidget_2->setVisible(true);
		break;
	}
	case 2:
	{
		label->setText(QStringLiteral("最小样本数:"));
		horizontalLayoutWidget_2->setVisible(true);
		break;
	}
	case 3:
	{
		horizontalLayoutWidget_2->setVisible(false);
		break;
	}
	default:
		break;
	}
}
