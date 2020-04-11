/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_2_password;
    QPushButton *pushButton_login;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_7;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(490, 687);
        groupBox = new QGroupBox(LoginDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 490, 687));
        QFont font;
        font.setPointSize(12);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 230, 71, 31));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 280, 71, 31));
        label_2->setFont(font1);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(170, 230, 141, 31));
        lineEdit_username->setAutoFillBackground(false);
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 255, 0);"));
        lineEdit_2_password = new QLineEdit(groupBox);
        lineEdit_2_password->setObjectName(QString::fromUtf8("lineEdit_2_password"));
        lineEdit_2_password->setGeometry(QRect(170, 280, 141, 31));
        lineEdit_2_password->setAutoFillBackground(false);
        lineEdit_2_password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 255, 0);"));
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(170, 330, 141, 41));
        pushButton_login->setAutoFillBackground(false);
        pushButton_login->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/logg-inn_active.png);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 600, 141, 41));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 540, 131, 21));
        label_3->setFont(font1);
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 570, 161, 16));
        label_4->setFont(font1);
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 50, 341, 111));
        label_5->setAutoFillBackground(false);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 430, 181, 21));
        label_6->setFont(font1);
        label_6->setAutoFillBackground(false);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 470, 141, 41));
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 20, 80, 21));
        pushButton_3->setAutoFillBackground(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 20, 80, 21));
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(410, 60, 71, 71));
        label_7->setAutoFillBackground(false);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("LoginDialog", "Brukernavn", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "Passord", nullptr));
        pushButton_login->setText(QString());
        pushButton->setText(QCoreApplication::translate("LoginDialog", "Lag konto", nullptr));
        label_3->setText(QCoreApplication::translate("LoginDialog", "Har du ikke konto?", nullptr));
        label_4->setText(QCoreApplication::translate("LoginDialog", "Registrer deg nedenfor", nullptr));
        label_5->setText(QCoreApplication::translate("LoginDialog", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("LoginDialog", "Glemt passord?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginDialog", "Endre passord", nullptr));
        pushButton_3->setText(QCoreApplication::translate("LoginDialog", "Bruker", nullptr));
        pushButton_4->setText(QCoreApplication::translate("LoginDialog", "Ansatt", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
