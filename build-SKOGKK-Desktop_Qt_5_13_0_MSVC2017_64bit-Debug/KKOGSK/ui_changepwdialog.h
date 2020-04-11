/********************************************************************************
** Form generated from reading UI file 'changepwdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPWDIALOG_H
#define UI_CHANGEPWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_changePWDialog
{
public:

    void setupUi(QDialog *changePWDialog)
    {
        if (changePWDialog->objectName().isEmpty())
            changePWDialog->setObjectName(QString::fromUtf8("changePWDialog"));
        changePWDialog->resize(490, 687);

        retranslateUi(changePWDialog);

        QMetaObject::connectSlotsByName(changePWDialog);
    } // setupUi

    void retranslateUi(QDialog *changePWDialog)
    {
        changePWDialog->setWindowTitle(QCoreApplication::translate("changePWDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changePWDialog: public Ui_changePWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPWDIALOG_H
