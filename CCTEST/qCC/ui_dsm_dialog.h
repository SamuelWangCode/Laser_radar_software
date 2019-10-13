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
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_DSM_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *SelectFileButton;
    QLabel *label_PointCloudFile;
    QTextBrowser *textBrowser_InputPath;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_reset;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_generateDSM;

    void setupUi(QDialog *DSM_Dialog)
    {
        if (DSM_Dialog->objectName().isEmpty())
            DSM_Dialog->setObjectName(QString::fromUtf8("DSM_Dialog"));
        DSM_Dialog->resize(427, 462);
        buttonBox = new QDialogButtonBox(DSM_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 410, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        SelectFileButton = new QPushButton(DSM_Dialog);
        SelectFileButton->setObjectName(QString::fromUtf8("SelectFileButton"));
        SelectFileButton->setGeometry(QRect(310, 20, 93, 28));
        label_PointCloudFile = new QLabel(DSM_Dialog);
        label_PointCloudFile->setObjectName(QString::fromUtf8("label_PointCloudFile"));
        label_PointCloudFile->setGeometry(QRect(0, 30, 72, 15));
        textBrowser_InputPath = new QTextBrowser(DSM_Dialog);
        textBrowser_InputPath->setObjectName(QString::fromUtf8("textBrowser_InputPath"));
        textBrowser_InputPath->setGeometry(QRect(70, 20, 221, 31));
        label = new QLabel(DSM_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 70, 72, 15));
        label_2 = new QLabel(DSM_Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 100, 72, 15));
        pushButton_reset = new QPushButton(DSM_Dialog);
        pushButton_reset->setObjectName(QString::fromUtf8("pushButton_reset"));
        pushButton_reset->setGeometry(QRect(0, 130, 61, 28));
        label_3 = new QLabel(DSM_Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 180, 72, 15));
        label_4 = new QLabel(DSM_Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 210, 72, 15));
        label_5 = new QLabel(DSM_Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 250, 72, 15));
        lineEdit = new QLineEdit(DSM_Dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 60, 113, 21));
        lineEdit_2 = new QLineEdit(DSM_Dialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 100, 113, 21));
        lineEdit_3 = new QLineEdit(DSM_Dialog);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(260, 100, 113, 21));
        lineEdit_4 = new QLineEdit(DSM_Dialog);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 140, 113, 21));
        lineEdit_5 = new QLineEdit(DSM_Dialog);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(260, 140, 113, 21));
        lineEdit_6 = new QLineEdit(DSM_Dialog);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(100, 180, 113, 21));
        lineEdit_7 = new QLineEdit(DSM_Dialog);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(100, 210, 113, 21));
        lineEdit_8 = new QLineEdit(DSM_Dialog);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(260, 210, 113, 21));
        pushButton_generateDSM = new QPushButton(DSM_Dialog);
        pushButton_generateDSM->setObjectName(QString::fromUtf8("pushButton_generateDSM"));
        pushButton_generateDSM->setGeometry(QRect(280, 340, 93, 28));

        retranslateUi(DSM_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DSM_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DSM_Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DSM_Dialog);
    } // setupUi

    void retranslateUi(QDialog *DSM_Dialog)
    {
        DSM_Dialog->setWindowTitle(QCoreApplication::translate("DSM_Dialog", "Dialog", nullptr));
        SelectFileButton->setText(QCoreApplication::translate("DSM_Dialog", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label_PointCloudFile->setText(QCoreApplication::translate("DSM_Dialog", "\347\202\271\344\272\221\346\226\207\344\273\266", nullptr));
        label->setText(QCoreApplication::translate("DSM_Dialog", "\345\215\212\345\276\204", nullptr));
        label_2->setText(QCoreApplication::translate("DSM_Dialog", "\350\276\271\347\225\214", nullptr));
        pushButton_reset->setText(QCoreApplication::translate("DSM_Dialog", "reset", nullptr));
        label_3->setText(QCoreApplication::translate("DSM_Dialog", "\345\210\206\350\276\250\347\216\207", nullptr));
        label_4->setText(QCoreApplication::translate("DSM_Dialog", "\345\260\272\345\257\270", nullptr));
        label_5->setText(QCoreApplication::translate("DSM_Dialog", "\350\276\223\345\207\272\347\261\273\345\236\213", nullptr));
        pushButton_generateDSM->setText(QCoreApplication::translate("DSM_Dialog", "\347\224\237\346\210\220DSM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DSM_Dialog: public Ui_DSM_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DSM_DIALOG_H
