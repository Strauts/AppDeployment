/********************************************************************************
** Form generated from reading UI file 'textquestiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTQUESTIONDIALOG_H
#define UI_TEXTQUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_textQuestionDialog
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *textQuestionDialog)
    {
        if (textQuestionDialog->objectName().isEmpty())
            textQuestionDialog->setObjectName(QString::fromUtf8("textQuestionDialog"));
        textQuestionDialog->resize(490, 687);
        textQuestionDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        label = new QLabel(textQuestionDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(16, 10, 451, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        pushButton_2 = new QPushButton(textQuestionDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 631, 211, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-tilbake_active.png);"));
        pushButton = new QPushButton(textQuestionDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(259, 630, 211, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-videre_active.png);"));
        lineEdit = new QLineEdit(textQuestionDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 580, 471, 41));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(textQuestionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 441, 31));
        label_2->setFont(font);
        label_3 = new QLabel(textQuestionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 79, 461, 501));

        retranslateUi(textQuestionDialog);

        QMetaObject::connectSlotsByName(textQuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *textQuestionDialog)
    {
        textQuestionDialog->setWindowTitle(QCoreApplication::translate("textQuestionDialog", "Dialog", nullptr));
        label->setText(QString());
        pushButton_2->setText(QString());
        pushButton->setText(QString());
        label_2->setText(QCoreApplication::translate("textQuestionDialog", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("textQuestionDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class textQuestionDialog: public Ui_textQuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTQUESTIONDIALOG_H
