/********************************************************************************
** Form generated from reading UI file 'PreprocessingDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREPROCESSINGDLG_H
#define UI_PREPROCESSINGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class UiPreprocessingDialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBox;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *okButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *fileNumber;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(659, 573);
        horizontalLayoutWidget = new QWidget(Dialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 40, 561, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        textEdit = new QTextEdit(horizontalLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout->addWidget(textEdit);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalLayoutWidget_2 = new QWidget(Dialog);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(360, 220, 251, 221));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        spinBox = new QSpinBox(horizontalLayoutWidget_2);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout_2->addWidget(spinBox);

        horizontalLayoutWidget_3 = new QWidget(Dialog);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(190, 470, 281, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(horizontalLayoutWidget_3);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout_3->addWidget(okButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalLayoutWidget_4 = new QWidget(Dialog);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(200, 120, 261, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        fileNumber = new QLabel(horizontalLayoutWidget_4);
        fileNumber->setObjectName(QStringLiteral("fileNumber"));

        horizontalLayout_4->addWidget(fileNumber);

        label_3 = new QLabel(horizontalLayoutWidget_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalLayoutWidget_6 = new QWidget(Dialog);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(60, 220, 271, 221));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_6);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_7->addWidget(label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton = new QRadioButton(horizontalLayoutWidget_6);
        radioButton->setObjectName(QStringLiteral("radioButton"));
		radioButton->setChecked(true);

        verticalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget_6);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(horizontalLayoutWidget_6);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(horizontalLayoutWidget_6);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        verticalLayout_2->addWidget(radioButton_4);


        horizontalLayout_7->addLayout(verticalLayout_2);


        retranslateUi(Dialog);
        QObject::connect(okButton, SIGNAL(clicked()), Dialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\346\277\200\345\205\211\345\216\237\345\247\213\346\225\260\346\215\256\350\257\273\345\217\226", nullptr));
        label_2->setText(QApplication::translate("Dialog", "\346\226\207\344\273\266\350\267\257\345\276\204:", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        label->setText(QApplication::translate("Dialog", "\345\214\272\351\227\264\345\244\247\345\260\217:", nullptr));
        okButton->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", nullptr));
        label_5->setText(QApplication::translate("Dialog", "\346\202\250\344\270\200\345\205\261\351\200\211\346\213\251\344\272\206", nullptr));
        fileNumber->setText(QApplication::translate("Dialog", "0", nullptr));
        label_3->setText(QApplication::translate("Dialog", "\344\270\252\346\225\260\346\215\256\346\226\207\344\273\266", nullptr));
        label_4->setText(QApplication::translate("Dialog", "\351\231\215\345\231\252\347\256\227\346\263\225:", nullptr));
        radioButton->setText(QApplication::translate("Dialog", "K\350\277\221\351\202\273\347\256\227\346\263\225", nullptr));
        radioButton_2->setText(QApplication::translate("Dialog", "\347\247\273\345\212\250\347\252\227\345\217\243\347\273\237\350\256\241\347\233\264\346\226\271\345\233\276\347\256\227\346\263\225", nullptr));
        radioButton_3->setText(QApplication::translate("Dialog", "\345\237\272\344\272\216\345\257\206\345\272\246\350\201\232\347\261\273\347\256\227\346\263\225", nullptr));
        radioButton_4->setText(QApplication::translate("Dialog", "\344\270\215\350\277\233\350\241\214\345\216\273\345\231\252", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreprocessingDialog: public UiPreprocessingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREPROCESSINGDLG_H
