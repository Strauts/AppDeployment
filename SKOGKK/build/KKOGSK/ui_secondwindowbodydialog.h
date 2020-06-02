/********************************************************************************
** Form generated from reading UI file 'secondwindowbodydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOWBODYDIALOG_H
#define UI_SECONDWINDOWBODYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_secondWindowBodyDialog
{
public:

    void setupUi(QDialog *secondWindowBodyDialog)
    {
        if (secondWindowBodyDialog->objectName().isEmpty())
            secondWindowBodyDialog->setObjectName(QString::fromUtf8("secondWindowBodyDialog"));
        secondWindowBodyDialog->resize(490, 687);

        retranslateUi(secondWindowBodyDialog);

        QMetaObject::connectSlotsByName(secondWindowBodyDialog);
    } // setupUi

    void retranslateUi(QDialog *secondWindowBodyDialog)
    {
        secondWindowBodyDialog->setWindowTitle(QCoreApplication::translate("secondWindowBodyDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondWindowBodyDialog: public Ui_secondWindowBodyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOWBODYDIALOG_H
