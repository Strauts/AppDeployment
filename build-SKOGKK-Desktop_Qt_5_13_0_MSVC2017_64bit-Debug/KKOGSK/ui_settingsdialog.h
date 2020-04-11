/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_settingsDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxBackground;
    QGroupBox *groupBoxSettings;
    QPushButton *settings1;
    QPushButton *settings2;
    QPushButton *settings3;
    QPushButton *settings4;
    QPushButton *settings5;
    QPushButton *settings6;
    QLabel *labelTitle;
    QPushButton *goBackPushButton;

    void setupUi(QDialog *settingsDialog)
    {
        if (settingsDialog->objectName().isEmpty())
            settingsDialog->setObjectName(QString::fromUtf8("settingsDialog"));
        settingsDialog->resize(490, 687);
        settingsDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        gridLayout = new QGridLayout(settingsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBoxBackground = new QGroupBox(settingsDialog);
        groupBoxBackground->setObjectName(QString::fromUtf8("groupBoxBackground"));
        groupBoxSettings = new QGroupBox(groupBoxBackground);
        groupBoxSettings->setObjectName(QString::fromUtf8("groupBoxSettings"));
        groupBoxSettings->setGeometry(QRect(-1, 169, 471, 501));
        settings1 = new QPushButton(groupBoxSettings);
        settings1->setObjectName(QString::fromUtf8("settings1"));
        settings1->setGeometry(QRect(100, 70, 241, 41));
        settings1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);"));
        settings2 = new QPushButton(groupBoxSettings);
        settings2->setObjectName(QString::fromUtf8("settings2"));
        settings2->setGeometry(QRect(100, 120, 241, 41));
        settings2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);"));
        settings3 = new QPushButton(groupBoxSettings);
        settings3->setObjectName(QString::fromUtf8("settings3"));
        settings3->setGeometry(QRect(100, 170, 241, 41));
        settings3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);"));
        settings4 = new QPushButton(groupBoxSettings);
        settings4->setObjectName(QString::fromUtf8("settings4"));
        settings4->setGeometry(QRect(100, 220, 241, 41));
        settings4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);"));
        settings5 = new QPushButton(groupBoxSettings);
        settings5->setObjectName(QString::fromUtf8("settings5"));
        settings5->setGeometry(QRect(100, 270, 241, 41));
        settings5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);"));
        settings6 = new QPushButton(groupBoxSettings);
        settings6->setObjectName(QString::fromUtf8("settings6"));
        settings6->setGeometry(QRect(100, 320, 241, 41));
        settings6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 0);"));
        labelTitle = new QLabel(groupBoxBackground);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(170, 20, 121, 51));
        QFont font;
        font.setPointSize(16);
        labelTitle->setFont(font);
        labelTitle->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        goBackPushButton = new QPushButton(groupBoxBackground);
        goBackPushButton->setObjectName(QString::fromUtf8("goBackPushButton"));
        goBackPushButton->setGeometry(QRect(10, 20, 91, 41));
        goBackPushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-tilbake_active.png);"));

        gridLayout->addWidget(groupBoxBackground, 0, 0, 1, 1);


        retranslateUi(settingsDialog);

        QMetaObject::connectSlotsByName(settingsDialog);
    } // setupUi

    void retranslateUi(QDialog *settingsDialog)
    {
        settingsDialog->setWindowTitle(QCoreApplication::translate("settingsDialog", "Dialog", nullptr));
        groupBoxBackground->setTitle(QString());
        groupBoxSettings->setTitle(QString());
        settings1->setText(QCoreApplication::translate("settingsDialog", "Placeholder", nullptr));
        settings2->setText(QCoreApplication::translate("settingsDialog", "Placeholder", nullptr));
        settings3->setText(QCoreApplication::translate("settingsDialog", "Placeholder", nullptr));
        settings4->setText(QCoreApplication::translate("settingsDialog", "Placeholder", nullptr));
        settings5->setText(QCoreApplication::translate("settingsDialog", "Placeholder", nullptr));
        settings6->setText(QCoreApplication::translate("settingsDialog", "Placeholder", nullptr));
        labelTitle->setText(QCoreApplication::translate("settingsDialog", "Innstillinger", nullptr));
        goBackPushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class settingsDialog: public Ui_settingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
