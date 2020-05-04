/********************************************************************************
** Form generated from reading UI file 'onepicquestiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEPICQUESTIONDIALOG_H
#define UI_ONEPICQUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_onePicQuestionDialog
{
public:
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QDialog *onePicQuestionDialog)
    {
        if (onePicQuestionDialog->objectName().isEmpty())
            onePicQuestionDialog->setObjectName(QString::fromUtf8("onePicQuestionDialog"));
        onePicQuestionDialog->resize(490, 687);
        onePicQuestionDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        label_2 = new QLabel(onePicQuestionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(16, 10, 451, 31));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        lineEdit = new QLineEdit(onePicQuestionDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(21, 590, 451, 31));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(onePicQuestionDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 79, 471, 501));
        pushButton_2 = new QPushButton(onePicQuestionDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 631, 211, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-tilbake_active.png);"));
        pushButton = new QPushButton(onePicQuestionDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(259, 630, 211, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-videre_active.png);"));
        label_3 = new QLabel(onePicQuestionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 40, 441, 31));
        label_3->setFont(font);

        retranslateUi(onePicQuestionDialog);

        QMetaObject::connectSlotsByName(onePicQuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *onePicQuestionDialog)
    {
        onePicQuestionDialog->setWindowTitle(QCoreApplication::translate("onePicQuestionDialog", "Dialog", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("onePicQuestionDialog", "TextLabel", nullptr));
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class onePicQuestionDialog: public Ui_onePicQuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEPICQUESTIONDIALOG_H
