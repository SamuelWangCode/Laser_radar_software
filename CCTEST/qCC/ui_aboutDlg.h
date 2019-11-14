/********************************************************************************
** Form generated from reading UI file 'aboutDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLG_H
#define UI_ABOUTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelText;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *pushButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->setWindowModality(Qt::ApplicationModal);
        AboutDialog->resize(600, 320);
        AboutDialog->setStyleSheet(QString::fromUtf8("background-color:white;"));
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/CC/images/imLogoV2Qt.png")));

        horizontalLayout->addWidget(label);

        labelText = new QLabel(AboutDialog);
        labelText->setObjectName(QString::fromUtf8("labelText"));
        labelText->setOpenExternalLinks(true);

        horizontalLayout->addWidget(labelText);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        pushButton = new QPushButton(AboutDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFlat(true);

        hboxLayout->addWidget(pushButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(AboutDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), AboutDialog, SLOT(deleteLater()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About CloudCompare", nullptr));
        label->setText(QString());
        labelText->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p align=\"center\"><img src=\":/CC/Icons/images/icon/myIcon_64.png\"/><br/><span style=\" font-size:14pt; font-weight:600;\">CloudCompare </span><span style=\" font-size:14pt; font-weight:600; font-style:italic;\"></span><br/>Version: %1</p><p align=\"center\"><a href=\"http://www.cloudcompare.org/donate\"><img src=\":/CC/images/donate.png\" width=\"200\"/></a></p><p align=\"center\"><a href=\"http://www.cloudcompare.org\"><span style=\" text-decoration: underline; color:#0000ff;\">www.cloudcompare.org<br/></span></a>License: GNU GPL (General Public Licence)</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("AboutDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLG_H
