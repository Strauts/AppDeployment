/********************************************************************************
** Form generated from reading UI file 'fivepicquestiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIVEPICQUESTIONDIALOG_H
#define UI_FIVEPICQUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_fivePicQuestionDialog
{
public:

    void setupUi(QDialog *fivePicQuestionDialog)
    {
        if (fivePicQuestionDialog->objectName().isEmpty())
            fivePicQuestionDialog->setObjectName(QString::fromUtf8("fivePicQuestionDialog"));
        fivePicQuestionDialog->resize(490, 687);

        retranslateUi(fivePicQuestionDialog);

        QMetaObject::connectSlotsByName(fivePicQuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *fivePicQuestionDialog)
    {
        fivePicQuestionDialog->setWindowTitle(QCoreApplication::translate("fivePicQuestionDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fivePicQuestionDialog: public Ui_fivePicQuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIVEPICQUESTIONDIALOG_H
