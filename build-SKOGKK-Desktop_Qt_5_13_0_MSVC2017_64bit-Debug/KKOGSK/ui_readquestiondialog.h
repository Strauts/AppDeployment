/********************************************************************************
** Form generated from reading UI file 'readquestiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READQUESTIONDIALOG_H
#define UI_READQUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_readQuestionDialog
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *readQuestionDialog)
    {
        if (readQuestionDialog->objectName().isEmpty())
            readQuestionDialog->setObjectName(QString::fromUtf8("readQuestionDialog"));
        readQuestionDialog->resize(490, 687);
        readQuestionDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        groupBox = new QGroupBox(readQuestionDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 110, 431, 541));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(2, 9, 431, 531));
        label = new QLabel(readQuestionDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 20, 181, 51));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(readQuestionDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-tilbake_active.png);"));

        retranslateUi(readQuestionDialog);

        QMetaObject::connectSlotsByName(readQuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *readQuestionDialog)
    {
        readQuestionDialog->setWindowTitle(QCoreApplication::translate("readQuestionDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("readQuestionDialog", "Kommentar oppgave \"x\"", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class readQuestionDialog: public Ui_readQuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READQUESTIONDIALOG_H
