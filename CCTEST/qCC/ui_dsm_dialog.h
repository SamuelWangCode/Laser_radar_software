/********************************************************************************
** Form generated from reading UI file 'dsm_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DSM_DIALOG_H
#define UI_DSM_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DSM_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *SelectFileButton;
    QLabel *label_PointCloudFile;
    QTextBrowser *textBrowser_InputPath;
    QLabel *label_radius;
    QLabel *label_resolution;
    QLabel *label_oType;
    QLineEdit *lineEdit_radius;
    QLineEdit *lineEdit_resolution;
    QPushButton *pushButton_generateDSM;
    QComboBox *comboBox_OutputType;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_minx;
    QLineEdit *lineEdit_maxx;
    QLineEdit *lineEdit_miny;
    QLineEdit *lineEdit_maxy;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QTextBrowser *boundaryMaxX;
    QTextBrowser *boundaryMinX;
    QTextBrowser *boundaryMinY;
    QTextBrowser *boundaryMaxY;
    QLabel *label_4;
    QLabel *label_bound;
    QPushButton *pushButton_reset;

    void setupUi(QDialog *DSM_Dialog)
    {
        if (DSM_Dialog->objectName().isEmpty())
            DSM_Dialog->setObjectName(QString::fromUtf8("DSM_Dialog"));
        DSM_Dialog->resize(650, 561);
        buttonBox = new QDialogButtonBox(DSM_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 500, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        SelectFileButton = new QPushButton(DSM_Dialog);
        SelectFileButton->setObjectName(QString::fromUtf8("SelectFileButton"));
        SelectFileButton->setGeometry(QRect(540, 20, 93, 28));
        label_PointCloudFile = new QLabel(DSM_Dialog);
        label_PointCloudFile->setObjectName(QString::fromUtf8("label_PointCloudFile"));
        label_PointCloudFile->setGeometry(QRect(20, 30, 72, 15));
        textBrowser_InputPath = new QTextBrowser(DSM_Dialog);
        textBrowser_InputPath->setObjectName(QString::fromUtf8("textBrowser_InputPath"));
        textBrowser_InputPath->setGeometry(QRect(100, 20, 381, 31));
        label_radius = new QLabel(DSM_Dialog);
        label_radius->setObjectName(QString::fromUtf8("label_radius"));
        label_radius->setGeometry(QRect(30, 150, 72, 15));
        label_resolution = new QLabel(DSM_Dialog);
        label_resolution->setObjectName(QString::fromUtf8("label_resolution"));
        label_resolution->setGeometry(QRect(20, 200, 72, 15));
        label_oType = new QLabel(DSM_Dialog);
        label_oType->setObjectName(QString::fromUtf8("label_oType"));
        label_oType->setGeometry(QRect(10, 360, 72, 15));
        lineEdit_radius = new QLineEdit(DSM_Dialog);
        lineEdit_radius->setObjectName(QString::fromUtf8("lineEdit_radius"));
        lineEdit_radius->setGeometry(QRect(100, 150, 113, 21));
        lineEdit_resolution = new QLineEdit(DSM_Dialog);
        lineEdit_resolution->setObjectName(QString::fromUtf8("lineEdit_resolution"));
        lineEdit_resolution->setGeometry(QRect(100, 200, 113, 21));
        pushButton_generateDSM = new QPushButton(DSM_Dialog);
        pushButton_generateDSM->setObjectName(QString::fromUtf8("pushButton_generateDSM"));
        pushButton_generateDSM->setGeometry(QRect(370, 460, 93, 28));
        comboBox_OutputType = new QComboBox(DSM_Dialog);
        comboBox_OutputType->addItem(QString());
        comboBox_OutputType->addItem(QString());
        comboBox_OutputType->setObjectName(QString::fromUtf8("comboBox_OutputType"));
        comboBox_OutputType->setGeometry(QRect(100, 360, 87, 22));
        gridLayoutWidget = new QWidget(DSM_Dialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 240, 381, 91));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_minx = new QLineEdit(gridLayoutWidget);
        lineEdit_minx->setObjectName(QString::fromUtf8("lineEdit_minx"));

        gridLayout->addWidget(lineEdit_minx, 0, 1, 1, 1);

        lineEdit_maxx = new QLineEdit(gridLayoutWidget);
        lineEdit_maxx->setObjectName(QString::fromUtf8("lineEdit_maxx"));

        gridLayout->addWidget(lineEdit_maxx, 0, 2, 1, 1);

        lineEdit_miny = new QLineEdit(gridLayoutWidget);
        lineEdit_miny->setObjectName(QString::fromUtf8("lineEdit_miny"));

        gridLayout->addWidget(lineEdit_miny, 1, 1, 1, 1);

        lineEdit_maxy = new QLineEdit(gridLayoutWidget);
        lineEdit_maxy->setObjectName(QString::fromUtf8("lineEdit_maxy"));

        gridLayout->addWidget(lineEdit_maxy, 1, 2, 1, 1);

        gridLayoutWidget_2 = new QWidget(DSM_Dialog);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(100, 70, 381, 61));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        boundaryMaxX = new QTextBrowser(gridLayoutWidget_2);
        boundaryMaxX->setObjectName(QString::fromUtf8("boundaryMaxX"));

        gridLayout_2->addWidget(boundaryMaxX, 0, 1, 1, 1);

        boundaryMinX = new QTextBrowser(gridLayoutWidget_2);
        boundaryMinX->setObjectName(QString::fromUtf8("boundaryMinX"));

        gridLayout_2->addWidget(boundaryMinX, 0, 0, 1, 1);

        boundaryMinY = new QTextBrowser(gridLayoutWidget_2);
        boundaryMinY->setObjectName(QString::fromUtf8("boundaryMinY"));

        gridLayout_2->addWidget(boundaryMinY, 1, 0, 1, 1);

        boundaryMaxY = new QTextBrowser(gridLayoutWidget_2);
        boundaryMaxY->setObjectName(QString::fromUtf8("boundaryMaxY"));

        gridLayout_2->addWidget(boundaryMaxY, 1, 1, 1, 1);

        label_4 = new QLabel(DSM_Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 80, 30, 29));
        label_bound = new QLabel(DSM_Dialog);
        label_bound->setObjectName(QString::fromUtf8("label_bound"));
        label_bound->setGeometry(QRect(20, 250, 93, 21));
        label_bound->setLayoutDirection(Qt::LeftToRight);
        pushButton_reset = new QPushButton(DSM_Dialog);
        pushButton_reset->setObjectName(QString::fromUtf8("pushButton_reset"));
        pushButton_reset->setGeometry(QRect(10, 290, 61, 31));

        retranslateUi(DSM_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DSM_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DSM_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DSM_Dialog);
    } // setupUi

    void retranslateUi(QDialog *DSM_Dialog)
    {
        DSM_Dialog->setWindowTitle(QCoreApplication::translate("DSM_Dialog", "\347\224\237\346\210\220DSM\346\226\207\344\273\266", nullptr));
        SelectFileButton->setText(QCoreApplication::translate("DSM_Dialog", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label_PointCloudFile->setText(QCoreApplication::translate("DSM_Dialog", "\347\202\271\344\272\221\346\226\207\344\273\266", nullptr));
        label_radius->setText(QCoreApplication::translate("DSM_Dialog", "\345\215\212\345\276\204", nullptr));
        label_resolution->setText(QCoreApplication::translate("DSM_Dialog", "\345\210\206\350\276\250\347\216\207", nullptr));
        label_oType->setText(QCoreApplication::translate("DSM_Dialog", "\350\276\223\345\207\272\347\261\273\345\236\213", nullptr));
        pushButton_generateDSM->setText(QCoreApplication::translate("DSM_Dialog", "\347\224\237\346\210\220DSM", nullptr));
        comboBox_OutputType->setItemText(0, QCoreApplication::translate("DSM_Dialog", "type1", nullptr));
        comboBox_OutputType->setItemText(1, QCoreApplication::translate("DSM_Dialog", "type2", nullptr));

        label_4->setText(QCoreApplication::translate("DSM_Dialog", "\345\260\272\345\257\270", nullptr));
        label_bound->setText(QCoreApplication::translate("DSM_Dialog", "\350\276\271\347\225\214", nullptr));
        pushButton_reset->setText(QCoreApplication::translate("DSM_Dialog", "reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DSM_Dialog: public Ui_DSM_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DSM_DIALOG_H
