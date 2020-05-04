/********************************************************************************
** Form generated from reading UI file 'secondwindowdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOWDIALOG_H
#define UI_SECONDWINDOWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecondWindowDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;

    void setupUi(QDialog *SecondWindowDialog)
    {
        if (SecondWindowDialog->objectName().isEmpty())
            SecondWindowDialog->setObjectName(QString::fromUtf8("SecondWindowDialog"));
        SecondWindowDialog->resize(490, 687);
        SecondWindowDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        label = new QLabel(SecondWindowDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 79, 471, 511));
        pushButton = new QPushButton(SecondWindowDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(248, 640, 231, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/ja-videre_active.png);"));
        pushButton_2 = new QPushButton(SecondWindowDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(9, 640, 231, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/nei-tilbake_active.png);"));
        label_2 = new QLabel(SecondWindowDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 451, 21));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_3 = new QLabel(SecondWindowDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 40, 471, 21));
        label_3->setFont(font);
        lineEdit = new QLineEdit(SecondWindowDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 600, 451, 31));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(SecondWindowDialog);

        QMetaObject::connectSlotsByName(SecondWindowDialog);
    } // setupUi

    void retranslateUi(QDialog *SecondWindowDialog)
    {
        SecondWindowDialog->setWindowTitle(QCoreApplication::translate("SecondWindowDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SecondWindowDialog", "TextLabel", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecondWindowDialog: public Ui_SecondWindowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOWDIALOG_H
