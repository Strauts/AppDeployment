/********************************************************************************
** Form generated from reading UI file 'pointquestiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTQUESTIONDIALOG_H
#define UI_POINTQUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pointQuestionDialog
{
public:
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *labelTheme;
    QLabel *label_1;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QLabel *questionLabel;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *pointQuestionDialog)
    {
        if (pointQuestionDialog->objectName().isEmpty())
            pointQuestionDialog->setObjectName(QString::fromUtf8("pointQuestionDialog"));
        pointQuestionDialog->resize(490, 687);
        pointQuestionDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        label_2 = new QLabel(pointQuestionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(248, 128, 221, 421));
        pushButton_2 = new QPushButton(pointQuestionDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 630, 461, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);"));
        labelTheme = new QLabel(pointQuestionDialog);
        labelTheme->setObjectName(QString::fromUtf8("labelTheme"));
        labelTheme->setGeometry(QRect(16, 10, 451, 31));
        QFont font;
        font.setPointSize(12);
        labelTheme->setFont(font);
        label_1 = new QLabel(pointQuestionDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(9, 128, 221, 421));
        pushButton_6 = new QPushButton(pointQuestionDialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(9, 79, 221, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/avslutt_active.png);"));
        pushButton_5 = new QPushButton(pointQuestionDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(248, 79, 221, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-videre_active.png);"));
        questionLabel = new QLabel(pointQuestionDialog);
        questionLabel->setObjectName(QString::fromUtf8("questionLabel"));
        questionLabel->setGeometry(QRect(20, 40, 441, 31));
        questionLabel->setFont(font);
        questionLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border:none;\n"
""));
        lineEdit = new QLineEdit(pointQuestionDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 560, 351, 51));
        label = new QLabel(pointQuestionDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 560, 71, 21));
        label_3 = new QLabel(pointQuestionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 590, 71, 21));

        retranslateUi(pointQuestionDialog);

        QMetaObject::connectSlotsByName(pointQuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *pointQuestionDialog)
    {
        pointQuestionDialog->setWindowTitle(QCoreApplication::translate("pointQuestionDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("pointQuestionDialog", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("pointQuestionDialog", "B", nullptr));
        labelTheme->setText(QString());
        label_1->setText(QCoreApplication::translate("pointQuestionDialog", "TextLabel", nullptr));
        pushButton_6->setText(QString());
        pushButton_5->setText(QString());
        questionLabel->setText(QString());
        label->setText(QCoreApplication::translate("pointQuestionDialog", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("pointQuestionDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pointQuestionDialog: public Ui_pointQuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTQUESTIONDIALOG_H
