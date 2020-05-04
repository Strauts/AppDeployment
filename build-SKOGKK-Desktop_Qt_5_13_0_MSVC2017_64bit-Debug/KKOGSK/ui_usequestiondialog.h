/********************************************************************************
** Form generated from reading UI file 'usequestiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEQUESTIONDIALOG_H
#define UI_USEQUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_useQuestionDialog
{
public:

    void setupUi(QDialog *useQuestionDialog)
    {
        if (useQuestionDialog->objectName().isEmpty())
            useQuestionDialog->setObjectName(QString::fromUtf8("useQuestionDialog"));
        useQuestionDialog->resize(490, 687);

        retranslateUi(useQuestionDialog);

        QMetaObject::connectSlotsByName(useQuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *useQuestionDialog)
    {
        useQuestionDialog->setWindowTitle(QCoreApplication::translate("useQuestionDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class useQuestionDialog: public Ui_useQuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEQUESTIONDIALOG_H
