/********************************************************************************
** Form generated from reading UI file 'resourcehandlerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEHANDLERDIALOG_H
#define UI_RESOURCEHANDLERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_resourceHandlerDialog
{
public:

    void setupUi(QDialog *resourceHandlerDialog)
    {
        if (resourceHandlerDialog->objectName().isEmpty())
            resourceHandlerDialog->setObjectName(QString::fromUtf8("resourceHandlerDialog"));
        resourceHandlerDialog->resize(400, 300);

        retranslateUi(resourceHandlerDialog);

        QMetaObject::connectSlotsByName(resourceHandlerDialog);
    } // setupUi

    void retranslateUi(QDialog *resourceHandlerDialog)
    {
        resourceHandlerDialog->setWindowTitle(QCoreApplication::translate("resourceHandlerDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class resourceHandlerDialog: public Ui_resourceHandlerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEHANDLERDIALOG_H
