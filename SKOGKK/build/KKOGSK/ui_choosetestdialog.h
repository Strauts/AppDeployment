/********************************************************************************
** Form generated from reading UI file 'choosetestdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSETESTDIALOG_H
#define UI_CHOOSETESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_chooseTestDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *chooseTestDialog)
    {
        if (chooseTestDialog->objectName().isEmpty())
            chooseTestDialog->setObjectName(QString::fromUtf8("chooseTestDialog"));
        chooseTestDialog->resize(490, 687);
        chooseTestDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        pushButton = new QPushButton(chooseTestDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 90, 211, 451));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/kroppkunn_active.png);"));
        pushButton_2 = new QPushButton(chooseTestDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 90, 211, 451));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/sexkunn_active.png);"));
        pushButton_3 = new QPushButton(chooseTestDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 10, 91, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/avslutt_active.png);"));

        retranslateUi(chooseTestDialog);

        QMetaObject::connectSlotsByName(chooseTestDialog);
    } // setupUi

    void retranslateUi(QDialog *chooseTestDialog)
    {
        chooseTestDialog->setWindowTitle(QCoreApplication::translate("chooseTestDialog", "Dialog", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chooseTestDialog: public Ui_chooseTestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSETESTDIALOG_H
