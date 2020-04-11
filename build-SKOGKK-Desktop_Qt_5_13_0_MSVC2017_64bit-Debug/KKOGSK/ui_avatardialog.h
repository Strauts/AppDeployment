/********************************************************************************
** Form generated from reading UI file 'avatardialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVATARDIALOG_H
#define UI_AVATARDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_avatarDialog
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_8;
    QPushButton *pushButton;

    void setupUi(QDialog *avatarDialog)
    {
        if (avatarDialog->objectName().isEmpty())
            avatarDialog->setObjectName(QString::fromUtf8("avatarDialog"));
        avatarDialog->resize(490, 687);
        avatarDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        groupBox = new QGroupBox(avatarDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 370, 491, 321));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(avatarDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 70, 321, 281));
        label_8 = new QLabel(avatarDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(200, 10, 71, 51));
        QFont font;
        font.setPointSize(16);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(avatarDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-tilbake_active.png);"));

        retranslateUi(avatarDialog);

        QMetaObject::connectSlotsByName(avatarDialog);
    } // setupUi

    void retranslateUi(QDialog *avatarDialog)
    {
        avatarDialog->setWindowTitle(QCoreApplication::translate("avatarDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("avatarDialog", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("avatarDialog", "Avatar", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class avatarDialog: public Ui_avatarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVATARDIALOG_H
