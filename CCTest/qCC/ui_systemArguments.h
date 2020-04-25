/********************************************************************************
** Form generated from reading UI file 'SystemArgumentsDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMARGUMENTS_H
#define UI_SYSTEMARGUMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class UiSystemArgumentsDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *label;
    QLabel *label_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_7;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 250, 351, 33));
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
        label->setGeometry(QRect(70, 50, 71, 21));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 150, 71, 21));
        formLayoutWidget = new QWidget(Dialog);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(150, 130, 160, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        doubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleSpinBox);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        doubleSpinBox_2 = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_2);

        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(310, 130, 81, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        doubleSpinBox_3 = new QDoubleSpinBox(Dialog);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(180, 50, 121, 21));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(310, 50, 72, 15));

        retranslateUi(Dialog);
        QObject::connect(okButton, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\347\263\273\347\273\237\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        okButton->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("Dialog", "\347\240\201\347\233\230\345\201\217\350\247\222:", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\346\265\213\350\267\235\345\217\202\346\225\260:", nullptr));
        label_3->setText(QApplication::translate("Dialog", "r1:", nullptr));
        label_4->setText(QApplication::translate("Dialog", "r2:", nullptr));
        label_5->setText(QApplication::translate("Dialog", "\347\261\263", nullptr));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("Dialog", "\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemArgumentsDialog: public UiSystemArgumentsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMARGUMENTS_H
