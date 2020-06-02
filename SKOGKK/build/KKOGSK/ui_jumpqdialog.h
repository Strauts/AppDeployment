/********************************************************************************
** Form generated from reading UI file 'jumpqdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUMPQDIALOG_H
#define UI_JUMPQDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_jumpQDialog
{
public:

    void setupUi(QDialog *jumpQDialog)
    {
        if (jumpQDialog->objectName().isEmpty())
            jumpQDialog->setObjectName(QString::fromUtf8("jumpQDialog"));
        jumpQDialog->resize(400, 300);

        retranslateUi(jumpQDialog);

        QMetaObject::connectSlotsByName(jumpQDialog);
    } // setupUi

    void retranslateUi(QDialog *jumpQDialog)
    {
        jumpQDialog->setWindowTitle(QCoreApplication::translate("jumpQDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class jumpQDialog: public Ui_jumpQDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUMPQDIALOG_H
