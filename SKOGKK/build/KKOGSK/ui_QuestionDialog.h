/********************************************************************************
** Form generated from reading UI file 'questiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONDIALOG_H
#define UI_QUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QuestionDialog
{
public:
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_1;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *questionLabel;
    QLabel *labelTheme;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *QuestionDialog)
    {
        if (QuestionDialog->objectName().isEmpty())
            QuestionDialog->setObjectName(QString::fromUtf8("QuestionDialog"));
        QuestionDialog->resize(490, 687);
        QuestionDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        label_3 = new QLabel(QuestionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 356, 221, 241));
        label_4 = new QLabel(QuestionDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(248, 356, 221, 241));
        label_2 = new QLabel(QuestionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(248, 80, 221, 241));
        label_1 = new QLabel(QuestionDialog);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(10, 80, 221, 251));
        pushButton_5 = new QPushButton(QuestionDialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(249, 630, 221, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-videre_active.png);"));
        pushButton_6 = new QPushButton(QuestionDialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 630, 211, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/avslutt_active.png);"));
        questionLabel = new QLabel(QuestionDialog);
        questionLabel->setObjectName(QString::fromUtf8("questionLabel"));
        questionLabel->setGeometry(QRect(20, 40, 441, 31));
        QFont font;
        font.setPointSize(12);
        questionLabel->setFont(font);
        questionLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border:none;\n"
""));
        labelTheme = new QLabel(QuestionDialog);
        labelTheme->setObjectName(QString::fromUtf8("labelTheme"));
        labelTheme->setGeometry(QRect(16, 10, 451, 31));
        labelTheme->setFont(font);
        pushButton = new QPushButton(QuestionDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 80, 221, 251));
        pushButton_2 = new QPushButton(QuestionDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 80, 221, 251));
        pushButton_3 = new QPushButton(QuestionDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 350, 221, 251));
        pushButton_4 = new QPushButton(QuestionDialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 350, 221, 251));

        retranslateUi(QuestionDialog);

        QMetaObject::connectSlotsByName(QuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *QuestionDialog)
    {
        QuestionDialog->setWindowTitle(QCoreApplication::translate("QuestionDialog", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("QuestionDialog", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("QuestionDialog", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("QuestionDialog", "TextLabel", nullptr));
        label_1->setText(QCoreApplication::translate("QuestionDialog", "TextLabel", nullptr));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        questionLabel->setText(QString());
        labelTheme->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QuestionDialog: public Ui_QuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONDIALOG_H
