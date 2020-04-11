/********************************************************************************
** Form generated from reading UI file 'rewarddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REWARDDIALOG_H
#define UI_REWARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_rewardDialog
{
public:

    void setupUi(QDialog *rewardDialog)
    {
        if (rewardDialog->objectName().isEmpty())
            rewardDialog->setObjectName(QString::fromUtf8("rewardDialog"));
        rewardDialog->resize(490, 687);

        retranslateUi(rewardDialog);

        QMetaObject::connectSlotsByName(rewardDialog);
    } // setupUi

    void retranslateUi(QDialog *rewardDialog)
    {
        rewardDialog->setWindowTitle(QCoreApplication::translate("rewardDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rewardDialog: public Ui_rewardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REWARDDIALOG_H
