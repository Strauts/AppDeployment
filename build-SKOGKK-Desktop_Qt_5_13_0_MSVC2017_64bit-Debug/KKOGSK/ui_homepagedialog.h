/********************************************************************************
** Form generated from reading UI file 'homepagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGEDIALOG_H
#define UI_HOMEPAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_homepageDialog
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *label_Thursday;
    QLabel *label_Tuesday;
    QLabel *label_Saturday;
    QLabel *label_Wednesday;
    QLabel *label_Tuesday_NR;
    QLabel *label_Thursday_NR;
    QLabel *label_Monday;
    QLabel *label_Monday_NR;
    QLabel *label_Friday;
    QLabel *label_Saturday_NR;
    QLabel *label_Wednesday_NR;
    QLabel *label_Friday_NR;
    QLabel *label_Sunday;
    QLabel *label_Sunday_NR;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_Profile;
    QPushButton *pushButton_startTest;
    QPushButton *pushButton_Results;
    QPushButton *pushButton_Reminders;
    QPushButton *pushButton;
    QLabel *label_profilePicture_Main;
    QLabel *label_Greeting;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *homepageDialog)
    {
        if (homepageDialog->objectName().isEmpty())
            homepageDialog->setObjectName(QString::fromUtf8("homepageDialog"));
        homepageDialog->resize(490, 687);
        homepageDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        groupBox = new QGroupBox(homepageDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 490, 687));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 210, 471, 101));
        groupBox_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"border:none;"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_Thursday = new QLabel(groupBox_3);
        label_Thursday->setObjectName(QString::fromUtf8("label_Thursday"));
        QFont font;
        font.setPointSize(14);
        label_Thursday->setFont(font);

        gridLayout->addWidget(label_Thursday, 0, 3, 1, 1);

        label_Tuesday = new QLabel(groupBox_3);
        label_Tuesday->setObjectName(QString::fromUtf8("label_Tuesday"));
        label_Tuesday->setFont(font);

        gridLayout->addWidget(label_Tuesday, 0, 1, 1, 1);

        label_Saturday = new QLabel(groupBox_3);
        label_Saturday->setObjectName(QString::fromUtf8("label_Saturday"));
        label_Saturday->setFont(font);

        gridLayout->addWidget(label_Saturday, 0, 5, 1, 1);

        label_Wednesday = new QLabel(groupBox_3);
        label_Wednesday->setObjectName(QString::fromUtf8("label_Wednesday"));
        label_Wednesday->setFont(font);

        gridLayout->addWidget(label_Wednesday, 0, 2, 1, 1);

        label_Tuesday_NR = new QLabel(groupBox_3);
        label_Tuesday_NR->setObjectName(QString::fromUtf8("label_Tuesday_NR"));
        label_Tuesday_NR->setFont(font);

        gridLayout->addWidget(label_Tuesday_NR, 1, 1, 1, 1);

        label_Thursday_NR = new QLabel(groupBox_3);
        label_Thursday_NR->setObjectName(QString::fromUtf8("label_Thursday_NR"));
        label_Thursday_NR->setFont(font);

        gridLayout->addWidget(label_Thursday_NR, 1, 3, 1, 1);

        label_Monday = new QLabel(groupBox_3);
        label_Monday->setObjectName(QString::fromUtf8("label_Monday"));
        label_Monday->setFont(font);

        gridLayout->addWidget(label_Monday, 0, 0, 1, 1);

        label_Monday_NR = new QLabel(groupBox_3);
        label_Monday_NR->setObjectName(QString::fromUtf8("label_Monday_NR"));
        label_Monday_NR->setFont(font);

        gridLayout->addWidget(label_Monday_NR, 1, 0, 1, 1);

        label_Friday = new QLabel(groupBox_3);
        label_Friday->setObjectName(QString::fromUtf8("label_Friday"));
        label_Friday->setFont(font);

        gridLayout->addWidget(label_Friday, 0, 4, 1, 1);

        label_Saturday_NR = new QLabel(groupBox_3);
        label_Saturday_NR->setObjectName(QString::fromUtf8("label_Saturday_NR"));
        label_Saturday_NR->setFont(font);

        gridLayout->addWidget(label_Saturday_NR, 1, 5, 1, 1);

        label_Wednesday_NR = new QLabel(groupBox_3);
        label_Wednesday_NR->setObjectName(QString::fromUtf8("label_Wednesday_NR"));
        label_Wednesday_NR->setFont(font);

        gridLayout->addWidget(label_Wednesday_NR, 1, 2, 1, 1);

        label_Friday_NR = new QLabel(groupBox_3);
        label_Friday_NR->setObjectName(QString::fromUtf8("label_Friday_NR"));
        label_Friday_NR->setFont(font);

        gridLayout->addWidget(label_Friday_NR, 1, 4, 1, 1);

        label_Sunday = new QLabel(groupBox_3);
        label_Sunday->setObjectName(QString::fromUtf8("label_Sunday"));
        label_Sunday->setFont(font);

        gridLayout->addWidget(label_Sunday, 0, 6, 1, 1);

        label_Sunday_NR = new QLabel(groupBox_3);
        label_Sunday_NR->setObjectName(QString::fromUtf8("label_Sunday_NR"));
        label_Sunday_NR->setFont(font);

        gridLayout->addWidget(label_Sunday_NR, 1, 6, 1, 1);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 310, 491, 341));
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_Profile = new QPushButton(groupBox_2);
        pushButton_Profile->setObjectName(QString::fromUtf8("pushButton_Profile"));
        pushButton_Profile->setGeometry(QRect(102, 37, 231, 41));
        pushButton_Profile->setBaseSize(QSize(0, 0));
        pushButton_Profile->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/profil_active.png);"));
        pushButton_startTest = new QPushButton(groupBox_2);
        pushButton_startTest->setObjectName(QString::fromUtf8("pushButton_startTest"));
        pushButton_startTest->setGeometry(QRect(102, 92, 231, 41));
        pushButton_startTest->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(146, 232, 255);"));
        pushButton_Results = new QPushButton(groupBox_2);
        pushButton_Results->setObjectName(QString::fromUtf8("pushButton_Results"));
        pushButton_Results->setGeometry(QRect(102, 147, 231, 41));
        pushButton_Results->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/resultater_active.png);"));
        pushButton_Reminders = new QPushButton(groupBox_2);
        pushButton_Reminders->setObjectName(QString::fromUtf8("pushButton_Reminders"));
        pushButton_Reminders->setGeometry(QRect(102, 202, 231, 41));
        pushButton_Reminders->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(146, 232, 255);"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(102, 257, 231, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(146, 232, 255);"));
        label_profilePicture_Main = new QLabel(groupBox);
        label_profilePicture_Main->setObjectName(QString::fromUtf8("label_profilePicture_Main"));
        label_profilePicture_Main->setGeometry(QRect(180, 70, 91, 91));
        label_Greeting = new QLabel(groupBox);
        label_Greeting->setObjectName(QString::fromUtf8("label_Greeting"));
        label_Greeting->setGeometry(QRect(160, 10, 171, 41));
        QFont font1;
        font1.setPointSize(16);
        label_Greeting->setFont(font1);
        label_Greeting->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 180, 111, 31));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 91, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/avslutt_active.png);"));

        retranslateUi(homepageDialog);

        QMetaObject::connectSlotsByName(homepageDialog);
    } // setupUi

    void retranslateUi(QDialog *homepageDialog)
    {
        homepageDialog->setWindowTitle(QCoreApplication::translate("homepageDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("homepageDialog", "Ukes Kalender", nullptr));
        label_Thursday->setText(QCoreApplication::translate("homepageDialog", "Tor", nullptr));
        label_Tuesday->setText(QCoreApplication::translate("homepageDialog", " Tir", nullptr));
        label_Saturday->setText(QCoreApplication::translate("homepageDialog", "L\303\270r", nullptr));
        label_Wednesday->setText(QCoreApplication::translate("homepageDialog", "Ons", nullptr));
        label_Tuesday_NR->setText(QCoreApplication::translate("homepageDialog", "  8", nullptr));
        label_Thursday_NR->setText(QCoreApplication::translate("homepageDialog", "10", nullptr));
        label_Monday->setText(QCoreApplication::translate("homepageDialog", " Man", nullptr));
        label_Monday_NR->setText(QCoreApplication::translate("homepageDialog", "  7", nullptr));
        label_Friday->setText(QCoreApplication::translate("homepageDialog", "Fre", nullptr));
        label_Saturday_NR->setText(QCoreApplication::translate("homepageDialog", "12", nullptr));
        label_Wednesday_NR->setText(QCoreApplication::translate("homepageDialog", "  9", nullptr));
        label_Friday_NR->setText(QCoreApplication::translate("homepageDialog", "11", nullptr));
        label_Sunday->setText(QCoreApplication::translate("homepageDialog", "S\303\270n", nullptr));
        label_Sunday_NR->setText(QCoreApplication::translate("homepageDialog", "13", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_Profile->setText(QString());
        pushButton_startTest->setText(QCoreApplication::translate("homepageDialog", "Brukerliste", nullptr));
        pushButton_Results->setText(QString());
        pushButton_Reminders->setText(QCoreApplication::translate("homepageDialog", "Gj\303\270rem\303\245l", nullptr));
        pushButton->setText(QCoreApplication::translate("homepageDialog", "Database Test", nullptr));
        label_profilePicture_Main->setText(QCoreApplication::translate("homepageDialog", "TextLabel", nullptr));
        label_Greeting->setText(QCoreApplication::translate("homepageDialog", "God Morgen, Ola!", nullptr));
        label->setText(QCoreApplication::translate("homepageDialog", "  Februar", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class homepageDialog: public Ui_homepageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGEDIALOG_H
