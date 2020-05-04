/********************************************************************************
** Form generated from reading UI file 'profiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEDIALOG_H
#define UI_PROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ProfileDialog
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_Calender_Profile;
    QPushButton *pushButton_Tasks;
    QPushButton *pushButton_Results_Profile;
    QPushButton *pushButton_Avatar_Profile;
    QPushButton *pushButton_Settings_Profile;
    QLabel *label_name;
    QLabel *label_profilePicture;
    QPushButton *pushButton;

    void setupUi(QDialog *ProfileDialog)
    {
        if (ProfileDialog->objectName().isEmpty())
            ProfileDialog->setObjectName(QString::fromUtf8("ProfileDialog"));
        ProfileDialog->resize(490, 687);
        ProfileDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        groupBox = new QGroupBox(ProfileDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 240, 491, 481));
        pushButton_Calender_Profile = new QPushButton(groupBox);
        pushButton_Calender_Profile->setObjectName(QString::fromUtf8("pushButton_Calender_Profile"));
        pushButton_Calender_Profile->setGeometry(QRect(120, 40, 241, 41));
        pushButton_Calender_Profile->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/kalender_active.png);\n"
"border:none;"));
        pushButton_Tasks = new QPushButton(groupBox);
        pushButton_Tasks->setObjectName(QString::fromUtf8("pushButton_Tasks"));
        pushButton_Tasks->setGeometry(QRect(120, 190, 241, 41));
        pushButton_Tasks->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border-image: url(:/Assets/Buttons/oversikt_active.png);"));
        pushButton_Results_Profile = new QPushButton(groupBox);
        pushButton_Results_Profile->setObjectName(QString::fromUtf8("pushButton_Results_Profile"));
        pushButton_Results_Profile->setGeometry(QRect(120, 140, 241, 41));
        pushButton_Results_Profile->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/resultater_active.png);\n"
"border:none;"));
        pushButton_Avatar_Profile = new QPushButton(groupBox);
        pushButton_Avatar_Profile->setObjectName(QString::fromUtf8("pushButton_Avatar_Profile"));
        pushButton_Avatar_Profile->setGeometry(QRect(120, 90, 241, 41));
        pushButton_Avatar_Profile->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);\n"
"color: rgb(0, 0, 0);"));
        pushButton_Settings_Profile = new QPushButton(groupBox);
        pushButton_Settings_Profile->setObjectName(QString::fromUtf8("pushButton_Settings_Profile"));
        pushButton_Settings_Profile->setGeometry(QRect(120, 240, 241, 41));
        pushButton_Settings_Profile->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(146, 232, 255);"));
        label_name = new QLabel(ProfileDialog);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(190, 30, 131, 41));
        QFont font;
        font.setPointSize(16);
        label_name->setFont(font);
        label_name->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_profilePicture = new QLabel(ProfileDialog);
        label_profilePicture->setObjectName(QString::fromUtf8("label_profilePicture"));
        label_profilePicture->setGeometry(QRect(160, 90, 131, 131));
        pushButton = new QPushButton(ProfileDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-tilbake_active.png);"));

        retranslateUi(ProfileDialog);

        QMetaObject::connectSlotsByName(ProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *ProfileDialog)
    {
        ProfileDialog->setWindowTitle(QCoreApplication::translate("ProfileDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        pushButton_Calender_Profile->setText(QString());
        pushButton_Tasks->setText(QString());
        pushButton_Results_Profile->setText(QString());
        pushButton_Avatar_Profile->setText(QCoreApplication::translate("ProfileDialog", "Avatar", nullptr));
        pushButton_Settings_Profile->setText(QCoreApplication::translate("ProfileDialog", "Innstillinger", nullptr));
        label_name->setText(QCoreApplication::translate("ProfileDialog", "Ola Berg", nullptr));
        label_profilePicture->setText(QCoreApplication::translate("ProfileDialog", "TextLabel", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProfileDialog: public Ui_ProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEDIALOG_H
