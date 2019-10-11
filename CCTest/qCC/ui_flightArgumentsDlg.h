/********************************************************************************
** Form generated from reading UI file 'FlightArgumentsDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHTARGUMENTSDLG_H
#define UI_FLIGHTARGUMENTSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class UiFlightArgumentsDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_7;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBox_6;
    QLabel *label_13;
    QLabel *label_14;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 301);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 260, 351, 33));
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
        label->setGeometry(QRect(30, 20, 72, 15));
        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 40, 321, 88));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));

        gridLayout->addWidget(doubleSpinBox_2, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));

        gridLayout->addWidget(doubleSpinBox, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));

        gridLayout->addWidget(doubleSpinBox_3, 2, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 2, 2, 1, 1);

        gridLayoutWidget_2 = new QWidget(Dialog);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 160, 321, 88));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 1, 2, 1, 1);

        doubleSpinBox_4 = new QDoubleSpinBox(gridLayoutWidget_2);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));

        gridLayout_2->addWidget(doubleSpinBox_4, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        doubleSpinBox_5 = new QDoubleSpinBox(gridLayoutWidget_2);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));

        gridLayout_2->addWidget(doubleSpinBox_5, 0, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 0, 2, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        doubleSpinBox_6 = new QDoubleSpinBox(gridLayoutWidget_2);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));

        gridLayout_2->addWidget(doubleSpinBox_6, 2, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 2, 2, 1, 1);

        label_14 = new QLabel(Dialog);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 140, 72, 15));

        retranslateUi(Dialog);
        QObject::connect(okButton, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\351\243\236\350\241\214\345\256\211\347\275\256\346\243\200\346\240\241\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        okButton->setText(QApplication::translate("Dialog", "OK", nullptr));
        cancelButton->setText(QApplication::translate("Dialog", "Cancel", nullptr));
        label->setText(QApplication::translate("Dialog", "\345\201\217\345\277\203\345\210\206\351\207\217:", nullptr));
        label_5->setText(QApplication::translate("Dialog", "\347\261\263", nullptr));
        label_3->setText(QApplication::translate("Dialog", "\316\224x", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\347\261\263", nullptr));
        label_4->setText(QApplication::translate("Dialog", "\316\224y", nullptr));
        label_6->setText(QApplication::translate("Dialog", "\316\224z", nullptr));
        label_7->setText(QApplication::translate("Dialog", "\347\261\263", nullptr));
        label_8->setText(QApplication::translate("Dialog", "\345\272\246", nullptr));
        label_9->setText(QApplication::translate("Dialog", "\316\224\317\211", nullptr));
        label_10->setText(QApplication::translate("Dialog", "\345\272\246", nullptr));
        label_11->setText(QApplication::translate("Dialog", "\316\224\317\206", nullptr));
        label_12->setText(QApplication::translate("Dialog", "\316\224\316\272", nullptr));
        label_13->setText(QApplication::translate("Dialog", "\345\272\246", nullptr));
        label_14->setText(QApplication::translate("Dialog", "\345\256\211\347\275\256\350\247\222\345\272\246:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlightArgumentsDialog: public UiFlightArgumentsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHTARGUMENTSDLG_H
