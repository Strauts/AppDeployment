/********************************************************************************
** Form generated from reading UI file 'workerresultdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKERRESULTDIALOG_H
#define UI_WORKERRESULTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_workerResultDialog
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_Spm_Title;
    QLabel *label_Answer_Title;
    QLabel *label_Fasit_Title;
    QLabel *label_Comment_Title;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTextEdit *textEdit_Question_1;
    QTextEdit *textEdit_Fasit_9;
    QTextEdit *textEdit_Answer_7;
    QTextEdit *textEdit_Answer_2;
    QTextEdit *textEdit_Answer_9;
    QTextEdit *textEdit_Question_9;
    QTextEdit *textEdit_Question_8;
    QTextEdit *textEdit_Fasit_6;
    QTextEdit *textEdit_Answer_1;
    QTextEdit *textEdit_Answer_8;
    QTextEdit *textEdit_Fasit_5;
    QTextEdit *textEdit_Question_7;
    QTextEdit *textEdit_Fasit_1;
    QTextEdit *textEdit_Question_4;
    QTextEdit *textEdit_Question_2;
    QTextEdit *textEdit_Fasit_4;
    QTextEdit *textEdit_Answer_3;
    QTextEdit *textEdit_Answer_4;
    QTextEdit *textEdit_Fasit_7;
    QTextEdit *textEdit_Fasit_10;
    QTextEdit *textEdit_Question_6;
    QTextEdit *textEdit_Answer_10;
    QTextEdit *textEdit_Question_5;
    QTextEdit *textEdit_Question_3;
    QTextEdit *textEdit_Fasit_2;
    QTextEdit *textEdit_Answer_6;
    QTextEdit *textEdit_Fasit_8;
    QTextEdit *textEdit_Fasit_3;
    QTextEdit *textEdit_Question_10;
    QTextEdit *textEdit_Answer_5;
    QLabel *label;
    QGroupBox *groupBox_3;
    QPushButton *pushButto_Comment_1;
    QPushButton *pushButton_Comment_2;
    QPushButton *pushButton_Comment_3;
    QPushButton *pushButton_Comment_4;
    QPushButton *pushButton_Comment_5;
    QPushButton *pushButton_Comment_6;
    QPushButton *pushButton_Comment_7;
    QPushButton *pushButton_Comment_8;
    QPushButton *pushButton_Comment_9;
    QPushButton *pushButton_Comment_10;

    void setupUi(QDialog *workerResultDialog)
    {
        if (workerResultDialog->objectName().isEmpty())
            workerResultDialog->setObjectName(QString::fromUtf8("workerResultDialog"));
        workerResultDialog->resize(490, 687);
        workerResultDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        groupBox = new QGroupBox(workerResultDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 60, 481, 81));
        groupBox->setStyleSheet(QString::fromUtf8("border:none;"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_Spm_Title = new QLabel(groupBox);
        label_Spm_Title->setObjectName(QString::fromUtf8("label_Spm_Title"));
        QFont font;
        font.setPointSize(14);
        label_Spm_Title->setFont(font);
        label_Spm_Title->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_Spm_Title, 0, 0, 1, 1);

        label_Answer_Title = new QLabel(groupBox);
        label_Answer_Title->setObjectName(QString::fromUtf8("label_Answer_Title"));
        label_Answer_Title->setFont(font);
        label_Answer_Title->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_Answer_Title, 0, 1, 1, 1);

        label_Fasit_Title = new QLabel(groupBox);
        label_Fasit_Title->setObjectName(QString::fromUtf8("label_Fasit_Title"));
        label_Fasit_Title->setFont(font);
        label_Fasit_Title->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_Fasit_Title, 0, 2, 1, 1);

        label_Comment_Title = new QLabel(groupBox);
        label_Comment_Title->setObjectName(QString::fromUtf8("label_Comment_Title"));
        label_Comment_Title->setFont(font);
        label_Comment_Title->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label_Comment_Title, 0, 3, 1, 1);

        pushButton = new QPushButton(workerResultDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-tilbake_active.png);"));
        groupBox_2 = new QGroupBox(workerResultDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 140, 351, 551));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEdit_Question_1 = new QTextEdit(groupBox_2);
        textEdit_Question_1->setObjectName(QString::fromUtf8("textEdit_Question_1"));
        textEdit_Question_1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(textEdit_Question_1, 0, 0, 1, 1);

        textEdit_Fasit_9 = new QTextEdit(groupBox_2);
        textEdit_Fasit_9->setObjectName(QString::fromUtf8("textEdit_Fasit_9"));

        gridLayout_2->addWidget(textEdit_Fasit_9, 8, 2, 1, 1);

        textEdit_Answer_7 = new QTextEdit(groupBox_2);
        textEdit_Answer_7->setObjectName(QString::fromUtf8("textEdit_Answer_7"));

        gridLayout_2->addWidget(textEdit_Answer_7, 6, 1, 1, 1);

        textEdit_Answer_2 = new QTextEdit(groupBox_2);
        textEdit_Answer_2->setObjectName(QString::fromUtf8("textEdit_Answer_2"));

        gridLayout_2->addWidget(textEdit_Answer_2, 1, 1, 1, 1);

        textEdit_Answer_9 = new QTextEdit(groupBox_2);
        textEdit_Answer_9->setObjectName(QString::fromUtf8("textEdit_Answer_9"));

        gridLayout_2->addWidget(textEdit_Answer_9, 8, 1, 1, 1);

        textEdit_Question_9 = new QTextEdit(groupBox_2);
        textEdit_Question_9->setObjectName(QString::fromUtf8("textEdit_Question_9"));
        textEdit_Question_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(textEdit_Question_9, 8, 0, 1, 1);

        textEdit_Question_8 = new QTextEdit(groupBox_2);
        textEdit_Question_8->setObjectName(QString::fromUtf8("textEdit_Question_8"));
        textEdit_Question_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(textEdit_Question_8, 7, 0, 1, 1);

        textEdit_Fasit_6 = new QTextEdit(groupBox_2);
        textEdit_Fasit_6->setObjectName(QString::fromUtf8("textEdit_Fasit_6"));

        gridLayout_2->addWidget(textEdit_Fasit_6, 5, 2, 1, 1);

        textEdit_Answer_1 = new QTextEdit(groupBox_2);
        textEdit_Answer_1->setObjectName(QString::fromUtf8("textEdit_Answer_1"));

        gridLayout_2->addWidget(textEdit_Answer_1, 0, 1, 1, 1);

        textEdit_Answer_8 = new QTextEdit(groupBox_2);
        textEdit_Answer_8->setObjectName(QString::fromUtf8("textEdit_Answer_8"));

        gridLayout_2->addWidget(textEdit_Answer_8, 7, 1, 1, 1);

        textEdit_Fasit_5 = new QTextEdit(groupBox_2);
        textEdit_Fasit_5->setObjectName(QString::fromUtf8("textEdit_Fasit_5"));

        gridLayout_2->addWidget(textEdit_Fasit_5, 4, 2, 1, 1);

        textEdit_Question_7 = new QTextEdit(groupBox_2);
        textEdit_Question_7->setObjectName(QString::fromUtf8("textEdit_Question_7"));
        textEdit_Question_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(textEdit_Question_7, 6, 0, 1, 1);

        textEdit_Fasit_1 = new QTextEdit(groupBox_2);
        textEdit_Fasit_1->setObjectName(QString::fromUtf8("textEdit_Fasit_1"));

        gridLayout_2->addWidget(textEdit_Fasit_1, 0, 2, 1, 1);

        textEdit_Question_4 = new QTextEdit(groupBox_2);
        textEdit_Question_4->setObjectName(QString::fromUtf8("textEdit_Question_4"));
        textEdit_Question_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(textEdit_Question_4, 3, 0, 1, 1);

        textEdit_Question_2 = new QTextEdit(groupBox_2);
        textEdit_Question_2->setObjectName(QString::fromUtf8("textEdit_Question_2"));
        textEdit_Question_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(textEdit_Question_2, 1, 0, 1, 1);

        textEdit_Fasit_4 = new QTextEdit(groupBox_2);
        textEdit_Fasit_4->setObjectName(QString::fromUtf8("textEdit_Fasit_4"));

        gridLayout_2->addWidget(textEdit_Fasit_4, 3, 2, 1, 1);

        textEdit_Answer_3 = new QTextEdit(groupBox_2);
        textEdit_Answer_3->setObjectName(QString::fromUtf8("textEdit_Answer_3"));

        gridLayout_2->addWidget(textEdit_Answer_3, 2, 1, 1, 1);

        textEdit_Answer_4 = new QTextEdit(groupBox_2);
        textEdit_Answer_4->setObjectName(QString::fromUtf8("textEdit_Answer_4"));

        gridLayout_2->addWidget(textEdit_Answer_4, 3, 1, 1, 1);

        textEdit_Fasit_7 = new QTextEdit(groupBox_2);
        textEdit_Fasit_7->setObjectName(QString::fromUtf8("textEdit_Fasit_7"));

        gridLayout_2->addWidget(textEdit_Fasit_7, 6, 2, 1, 1);

        textEdit_Fasit_10 = new QTextEdit(groupBox_2);
        textEdit_Fasit_10->setObjectName(QString::fromUtf8("textEdit_Fasit_10"));

        gridLayout_2->addWidget(textEdit_Fasit_10, 9, 2, 1, 1);

        textEdit_Question_6 = new QTextEdit(groupBox_2);
        textEdit_Question_6->setObjectName(QString::fromUtf8("textEdit_Question_6"));
        textEdit_Question_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(textEdit_Question_6, 5, 0, 1, 1);

        textEdit_Answer_10 = new QTextEdit(groupBox_2);
        textEdit_Answer_10->setObjectName(QString::fromUtf8("textEdit_Answer_10"));

        gridLayout_2->addWidget(textEdit_Answer_10, 9, 1, 1, 1);

        textEdit_Question_5 = new QTextEdit(groupBox_2);
        textEdit_Question_5->setObjectName(QString::fromUtf8("textEdit_Question_5"));
        textEdit_Question_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(textEdit_Question_5, 4, 0, 1, 1);

        textEdit_Question_3 = new QTextEdit(groupBox_2);
        textEdit_Question_3->setObjectName(QString::fromUtf8("textEdit_Question_3"));
        textEdit_Question_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(textEdit_Question_3, 2, 0, 1, 1);

        textEdit_Fasit_2 = new QTextEdit(groupBox_2);
        textEdit_Fasit_2->setObjectName(QString::fromUtf8("textEdit_Fasit_2"));

        gridLayout_2->addWidget(textEdit_Fasit_2, 1, 2, 1, 1);

        textEdit_Answer_6 = new QTextEdit(groupBox_2);
        textEdit_Answer_6->setObjectName(QString::fromUtf8("textEdit_Answer_6"));

        gridLayout_2->addWidget(textEdit_Answer_6, 5, 1, 1, 1);

        textEdit_Fasit_8 = new QTextEdit(groupBox_2);
        textEdit_Fasit_8->setObjectName(QString::fromUtf8("textEdit_Fasit_8"));

        gridLayout_2->addWidget(textEdit_Fasit_8, 7, 2, 1, 1);

        textEdit_Fasit_3 = new QTextEdit(groupBox_2);
        textEdit_Fasit_3->setObjectName(QString::fromUtf8("textEdit_Fasit_3"));

        gridLayout_2->addWidget(textEdit_Fasit_3, 2, 2, 1, 1);

        textEdit_Question_10 = new QTextEdit(groupBox_2);
        textEdit_Question_10->setObjectName(QString::fromUtf8("textEdit_Question_10"));
        textEdit_Question_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout_2->addWidget(textEdit_Question_10, 9, 0, 1, 1);

        textEdit_Answer_5 = new QTextEdit(groupBox_2);
        textEdit_Answer_5->setObjectName(QString::fromUtf8("textEdit_Answer_5"));

        gridLayout_2->addWidget(textEdit_Answer_5, 4, 1, 1, 1);

        label = new QLabel(workerResultDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 10, 211, 51));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border-image: url(:/Assets/Buttons/resultater_active.png);"));
        groupBox_3 = new QGroupBox(workerResultDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(360, 140, 121, 531));
        groupBox_3->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        pushButto_Comment_1 = new QPushButton(groupBox_3);
        pushButto_Comment_1->setObjectName(QString::fromUtf8("pushButto_Comment_1"));
        pushButto_Comment_1->setGeometry(QRect(10, 30, 91, 45));
        pushButto_Comment_1->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/skriv_active.png);"));
        pushButton_Comment_2 = new QPushButton(groupBox_3);
        pushButton_Comment_2->setObjectName(QString::fromUtf8("pushButton_Comment_2"));
        pushButton_Comment_2->setGeometry(QRect(10, 80, 91, 45));
        pushButton_Comment_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/skriv_active.png);"));
        pushButton_Comment_3 = new QPushButton(groupBox_3);
        pushButton_Comment_3->setObjectName(QString::fromUtf8("pushButton_Comment_3"));
        pushButton_Comment_3->setGeometry(QRect(10, 130, 90, 45));
        pushButton_Comment_3->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/skriv_active.png);"));
        pushButton_Comment_4 = new QPushButton(groupBox_3);
        pushButton_Comment_4->setObjectName(QString::fromUtf8("pushButton_Comment_4"));
        pushButton_Comment_4->setGeometry(QRect(10, 180, 91, 45));
        pushButton_Comment_4->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/skriv_active.png);"));
        pushButton_Comment_5 = new QPushButton(groupBox_3);
        pushButton_Comment_5->setObjectName(QString::fromUtf8("pushButton_Comment_5"));
        pushButton_Comment_5->setGeometry(QRect(10, 230, 91, 45));
        pushButton_Comment_5->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/skriv_active.png);"));
        pushButton_Comment_6 = new QPushButton(groupBox_3);
        pushButton_Comment_6->setObjectName(QString::fromUtf8("pushButton_Comment_6"));
        pushButton_Comment_6->setGeometry(QRect(10, 280, 91, 41));
        pushButton_Comment_6->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/skriv_active.png);"));
        pushButton_Comment_7 = new QPushButton(groupBox_3);
        pushButton_Comment_7->setObjectName(QString::fromUtf8("pushButton_Comment_7"));
        pushButton_Comment_7->setGeometry(QRect(10, 330, 91, 45));
        pushButton_Comment_7->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/skriv_active.png);"));
        pushButton_Comment_8 = new QPushButton(groupBox_3);
        pushButton_Comment_8->setObjectName(QString::fromUtf8("pushButton_Comment_8"));
        pushButton_Comment_8->setGeometry(QRect(10, 380, 91, 45));
        pushButton_Comment_8->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/skriv_active.png);"));
        pushButton_Comment_9 = new QPushButton(groupBox_3);
        pushButton_Comment_9->setObjectName(QString::fromUtf8("pushButton_Comment_9"));
        pushButton_Comment_9->setGeometry(QRect(10, 430, 91, 45));
        pushButton_Comment_9->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/skriv_active.png);"));
        pushButton_Comment_10 = new QPushButton(groupBox_3);
        pushButton_Comment_10->setObjectName(QString::fromUtf8("pushButton_Comment_10"));
        pushButton_Comment_10->setGeometry(QRect(10, 480, 91, 45));
        pushButton_Comment_10->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/skriv_active.png);"));

        retranslateUi(workerResultDialog);

        QMetaObject::connectSlotsByName(workerResultDialog);
    } // setupUi

    void retranslateUi(QDialog *workerResultDialog)
    {
        workerResultDialog->setWindowTitle(QCoreApplication::translate("workerResultDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_Spm_Title->setText(QCoreApplication::translate("workerResultDialog", "   Sp\303\270rsm\303\245l", nullptr));
        label_Answer_Title->setText(QCoreApplication::translate("workerResultDialog", "       Svar", nullptr));
        label_Fasit_Title->setText(QCoreApplication::translate("workerResultDialog", "       Fasit", nullptr));
        label_Comment_Title->setText(QCoreApplication::translate("workerResultDialog", "Kommentar", nullptr));
        pushButton->setText(QString());
        groupBox_2->setTitle(QString());
        textEdit_Question_1->setHtml(QCoreApplication::translate("workerResultDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     1</span></p></body></html>", nullptr));
        textEdit_Question_9->setHtml(QCoreApplication::translate("workerResultDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     9</span></p></body></html>", nullptr));
        textEdit_Question_8->setHtml(QCoreApplication::translate("workerResultDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     8</span></p></body></html>", nullptr));
        textEdit_Question_7->setHtml(QCoreApplication::translate("workerResultDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     7</span></p></body></html>", nullptr));
        textEdit_Question_4->setHtml(QCoreApplication::translate("workerResultDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     4</span></p></body></html>", nullptr));
        textEdit_Question_2->setHtml(QCoreApplication::translate("workerResultDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     2</span></p></body></html>", nullptr));
        textEdit_Question_6->setHtml(QCoreApplication::translate("workerResultDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     6</span></p></body></html>", nullptr));
        textEdit_Question_5->setHtml(QCoreApplication::translate("workerResultDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     5</span></p></body></html>", nullptr));
        textEdit_Question_3->setHtml(QCoreApplication::translate("workerResultDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">     3</span></p></body></html>", nullptr));
        textEdit_Question_10->setHtml(QCoreApplication::translate("workerResultDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt;\">    10</span></p></body></html>", nullptr));
        label->setText(QString());
        groupBox_3->setTitle(QString());
        pushButto_Comment_1->setText(QString());
        pushButton_Comment_2->setText(QString());
        pushButton_Comment_3->setText(QString());
        pushButton_Comment_4->setText(QString());
        pushButton_Comment_5->setText(QString());
        pushButton_Comment_6->setText(QString());
        pushButton_Comment_7->setText(QString());
        pushButton_Comment_8->setText(QString());
        pushButton_Comment_9->setText(QString());
        pushButton_Comment_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class workerResultDialog: public Ui_workerResultDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKERRESULTDIALOG_H
