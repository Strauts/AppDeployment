/********************************************************************************
** Form generated from reading UI file 'commentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTDIALOG_H
#define UI_COMMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_commentDialog
{
public:
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *commentDialog)
    {
        if (commentDialog->objectName().isEmpty())
            commentDialog->setObjectName(QString::fromUtf8("commentDialog"));
        commentDialog->resize(490, 687);
        commentDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        groupBox = new QGroupBox(commentDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 110, 431, 541));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 431, 541));
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        label = new QLabel(commentDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 20, 181, 51));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(commentDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-tilbake_active.png);"));

        retranslateUi(commentDialog);

        QMetaObject::connectSlotsByName(commentDialog);
    } // setupUi

    void retranslateUi(QDialog *commentDialog)
    {
        commentDialog->setWindowTitle(QCoreApplication::translate("commentDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        textEdit->setHtml(QCoreApplication::translate("commentDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Kommenter - kommentar vil bli koblet til brukerID</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("commentDialog", "Kommentar Oppgave \"x\"", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class commentDialog: public Ui_commentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTDIALOG_H
