
/****************************************************************************
** Meta object code from reading C++ file 'dsm_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "dsm_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include "ui_dsm_dialog.h"
#include "include/pdal/ToDEMandDSM.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QProgressDialog>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dsm_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DSM_Dialog_t {
	QByteArrayData data[6];
	char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DSM_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DSM_Dialog_t qt_meta_stringdata_DSM_Dialog = {
	{
QT_MOC_LITERAL(0, 0, 10), // "DSM_Dialog"
QT_MOC_LITERAL(1, 11, 27), // "on_SelectFileButton_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 33), // "on_pushButton_generateDSM_cli..."
QT_MOC_LITERAL(4, 74, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 96, 27) // "on_pushButton_reset_clicked"

	},
	"DSM_Dialog\0on_SelectFileButton_clicked\0"
	"\0on_pushButton_generateDSM_clicked\0"
	"on_pushButton_clicked\0on_pushButton_reset_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DSM_Dialog[] = {

	// content:
		  8,       // revision
		  0,       // classname
		  0,    0, // classinfo
		  4,   14, // methods
		  0,    0, // properties
		  0,    0, // enums/sets
		  0,    0, // constructors
		  0,       // flags
		  0,       // signalCount

	// slots: name, argc, parameters, tag, flags
		  1,    0,   34,    2, 0x08 /* Private */,
		  3,    0,   35,    2, 0x08 /* Private */,
		  4,    0,   36,    2, 0x08 /* Private */,
		  5,    0,   37,    2, 0x08 /* Private */,

		  // slots: parameters
			 QMetaType::Void,
			 QMetaType::Void,
			 QMetaType::Void,
			 QMetaType::Void,

				0        // eod
};

void DSM_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
	if (_c == QMetaObject::InvokeMetaMethod) {
		auto *_t = static_cast<DSM_Dialog *>(_o);
		Q_UNUSED(_t)
			switch (_id) {
			case 0: _t->on_SelectFileButton_clicked(); break;
			case 1: _t->on_pushButton_generateDSM_clicked(); break;
			case 2: _t->on_pushButton_clicked(); break;
			case 3: _t->on_pushButton_reset_clicked(); break;
			default:;
			}
	}
	Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DSM_Dialog::staticMetaObject = { {
	&QDialog::staticMetaObject,
	qt_meta_stringdata_DSM_Dialog.data,
	qt_meta_data_DSM_Dialog,
	qt_static_metacall,
	nullptr,
	nullptr
} };


const QMetaObject *DSM_Dialog::metaObject() const
{
	return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DSM_Dialog::qt_metacast(const char *_clname)
{
	if (!_clname) return nullptr;
	if (!strcmp(_clname, qt_meta_stringdata_DSM_Dialog.stringdata0))
		return static_cast<void*>(this);
	return QDialog::qt_metacast(_clname);
}

int DSM_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
	_id = QDialog::qt_metacall(_c, _id, _a);
	if (_id < 0)
		return _id;
	if (_c == QMetaObject::InvokeMetaMethod) {
		if (_id < 4)
			qt_static_metacall(this, _c, _id, _a);
		_id -= 4;
	}
	else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
		if (_id < 4)
			*reinterpret_cast<int*>(_a[0]) = -1;
		_id -= 4;
	}
	return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE


DSM_Dialog::DSM_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DSM_Dialog)
{
    ui->setupUi(this);
}

DSM_Dialog::~DSM_Dialog()
{
    delete ui;
}

void DSM_Dialog::on_SelectFileButton_clicked()
{
    fileName = QFileDialog::getOpenFileName(this,
                                                        tr("文件对话框！"),
                                                        "D:",
                                                        tr("点云文件(*las)"));
	if (fileName == nullptr) {
		return;
	}
	ui->textBrowser_InputPath->append(fileName);
	maxX = ToDEMandDSM::boundaryMaxX(fileName.toStdString());
	minX = ToDEMandDSM::boundaryMinX(fileName.toStdString());
	maxY = ToDEMandDSM::boundaryMaxY(fileName.toStdString());
	minY = ToDEMandDSM::boundaryMinY(fileName.toStdString());
	//QByteArray ba = maxX.f
	//ui->textBrowser_InputPath->append(QString(QString::fromLocal8Bit(maxX.c_str())));
	//ui->boundaryMaxX->insertPlainText(QString::QString(maxX));
	//std::string str = "123465.1235";
	ui->boundaryMaxX->append(QString::fromStdString(maxX));
	ui->boundaryMinX->append(QString::fromStdString(minX));
	ui->boundaryMaxY->append(QString::fromStdString(maxY));
	ui->boundaryMinY->append(QString::fromStdString(minY));
	
        //qDebug<<"filename : "<<fileName;

}

void DSM_Dialog::on_pushButton_generateDSM_clicked()
{
	double radius = ui->lineEdit_radius->text().toInt();
	double bound_minx = ui->lineEdit_minx->text().toDouble();
	double bound_maxx = ui->lineEdit_maxx->text().toDouble();
	double bound_miny = ui->lineEdit_miny->text().toDouble();
	double bound_maxy = ui->lineEdit_maxy->text().toDouble();
	double resolution = ui->lineEdit_resolution->text().toDouble();
	QString OutputType = ui->comboBox_OutputType->currentText();
	ToDEMandDSM::todsm(fileName.toStdString(),resolution,radius,bound_minx,bound_maxx,bound_miny,bound_maxy);
	//qDebug() << "radius : " << radius << "\nresolution : " << resolution;
}
void DSM_Dialog::on_pushButton_clicked()
{
	this->close();
}

void DSM_Dialog::on_pushButton_reset_clicked()
{
	ui->lineEdit_minx->setText(QString::fromStdString(minX));
	ui->lineEdit_maxx->setText(QString::fromStdString(maxX));
	ui->lineEdit_miny->setText(QString::fromStdString(minY));
	ui->lineEdit_maxy->setText(QString::fromStdString(maxY));

}