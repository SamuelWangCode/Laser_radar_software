/********************************************************************************
** Form generated from reading UI file 'cloudClassifyDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOUDCLASSIFYDLG_H
#define UI_CLOUDCLASSIFYDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class UiCloudClassifyDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 242, 311, 41));
        hboxLayout = new QHBoxLayout(layoutWidget);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);

        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(41, 45, 311, 20));
        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 80, 311, 21));
		comboBox->addItem(QStringLiteral("未分类"));
		comboBox->addItem(QStringLiteral("地面"));
		comboBox->addItem(QStringLiteral("低级植被"));
		comboBox->addItem(QStringLiteral("中级植被"));
		comboBox->addItem(QStringLiteral("高级植被"));
		comboBox->addItem(QStringLiteral("水"));
		comboBox->setCurrentText(QStringLiteral("未分类"));

        retranslateUi(Dialog);
        QObject::connect(okButton, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        okButton->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("Dialog", "\350\257\267\351\200\211\346\213\251\351\200\211\345\256\232\347\202\271\344\272\221\347\232\204\345\210\206\347\261\273\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui{
    class CloudClassifyDialog: public UiCloudClassifyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOUDCLASSIFYDLG_H
