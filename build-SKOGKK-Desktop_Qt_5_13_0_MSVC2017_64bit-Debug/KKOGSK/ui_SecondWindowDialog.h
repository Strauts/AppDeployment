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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecondWindowDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *SecondWindowDialog)
    {
        if (SecondWindowDialog->objectName().isEmpty())
            SecondWindowDialog->setObjectName(QString::fromUtf8("SecondWindowDialog"));
        SecondWindowDialog->resize(490, 687);
        SecondWindowDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        label = new QLabel(SecondWindowDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 471, 581));
        pushButton = new QPushButton(SecondWindowDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(248, 640, 231, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/ja-videre_active.png);"));
        pushButton_2 = new QPushButton(SecondWindowDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(9, 640, 231, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/nei-tilbake_active.png);"));
        pushButton_3 = new QPushButton(SecondWindowDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 600, 451, 31));
        QFont font;
        font.setPointSize(12);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);\n"
"border:none;"));

        retranslateUi(SecondWindowDialog);

        QMetaObject::connectSlotsByName(SecondWindowDialog);
    } // setupUi

    void retranslateUi(QDialog *SecondWindowDialog)
    {
        SecondWindowDialog->setWindowTitle(QCoreApplication::translate("SecondWindowDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SecondWindowDialog", "TextLabel", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("SecondWindowDialog", "Tror du dette er riktig svar? ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindowDialog: public Ui_SecondWindowDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOWDIALOG_H
