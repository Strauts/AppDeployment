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

QT_BEGIN_NAMESPACE

class Ui_bodyQuestionDialog
{
public:

    void setupUi(QDialog *bodyQuestionDialog)
    {
        if (bodyQuestionDialog->objectName().isEmpty())
            bodyQuestionDialog->setObjectName(QString::fromUtf8("bodyQuestionDialog"));
        bodyQuestionDialog->resize(490, 687);
        bodyQuestionDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));

        retranslateUi(bodyQuestionDialog);

        QMetaObject::connectSlotsByName(bodyQuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *bodyQuestionDialog)
    {
        bodyQuestionDialog->setWindowTitle(QCoreApplication::translate("bodyQuestionDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bodyQuestionDialog: public Ui_bodyQuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BODYQUESTIONDIALOG_H
