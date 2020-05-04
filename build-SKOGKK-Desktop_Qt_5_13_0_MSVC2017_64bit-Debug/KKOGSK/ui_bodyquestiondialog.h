/********************************************************************************
** Form generated from reading UI file 'bodyquestiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BODYQUESTIONDIALOG_H
#define UI_BODYQUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_bodyQuestionDialog
{
public:
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_1;
    QPushButton *pushButton_6;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *questionLabel;

    void setupUi(QDialog *bodyQuestionDialog)
    {
        if (bodyQuestionDialog->objectName().isEmpty())
            bodyQuestionDialog->setObjectName(QString::fromUtf8("bodyQuestionDialog"));
        bodyQuestionDialog->resize(490, 687);
        bodyQuestionDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        label_2 = new QLabel(bodyQuestionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(248, 98, 221, 251));
        pushButton_2 = new QPushButton(bodyQuestionDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(248, 359, 221, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);"));
        label_1 = new QLabel(bodyQuestionDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(9, 98, 221, 251));
        pushButton_6 = new QPushButton(bodyQuestionDialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(9, 49, 221, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-tilbake_active.png);"));
        label_4 = new QLabel(bodyQuestionDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(248, 396, 221, 251));
        label_3 = new QLabel(bodyQuestionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(19, 396, 221, 251));
        pushButton = new QPushButton(bodyQuestionDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(9, 359, 221, 21));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);"));
        pushButton_5 = new QPushButton(bodyQuestionDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(248, 49, 221, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-videre_active.png);"));
        pushButton_3 = new QPushButton(bodyQuestionDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(9, 657, 221, 21));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);"));
        pushButton_4 = new QPushButton(bodyQuestionDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(248, 657, 221, 21));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);"));
        questionLabel = new QLabel(bodyQuestionDialog);
        questionLabel->setObjectName(QString::fromUtf8("questionLabel"));
        questionLabel->setGeometry(QRect(20, 10, 441, 31));
        QFont font;
        font.setPointSize(12);
        questionLabel->setFont(font);
        questionLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"color: rgb(0, 0, 0);\n"
"border:none;\n"
""));

        retranslateUi(bodyQuestionDialog);

        QMetaObject::connectSlotsByName(bodyQuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *bodyQuestionDialog)
    {
        bodyQuestionDialog->setWindowTitle(QCoreApplication::translate("bodyQuestionDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("bodyQuestionDialog", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("bodyQuestionDialog", "B", nullptr));
        label_1->setText(QCoreApplication::translate("bodyQuestionDialog", "TextLabel", nullptr));
        pushButton_6->setText(QString());
        label_4->setText(QCoreApplication::translate("bodyQuestionDialog", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("bodyQuestionDialog", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("bodyQuestionDialog", "A", nullptr));
        pushButton_5->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("bodyQuestionDialog", "C", nullptr));
        pushButton_4->setText(QCoreApplication::translate("bodyQuestionDialog", "D", nullptr));
        questionLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bodyQuestionDialog: public Ui_bodyQuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BODYQUESTIONDIALOG_H
