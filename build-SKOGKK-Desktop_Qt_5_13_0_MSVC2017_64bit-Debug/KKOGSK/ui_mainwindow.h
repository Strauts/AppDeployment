/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QWidget *centralwidget;
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
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(490, 687);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 471, 651));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 210, 471, 101));
        groupBox_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
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
        groupBox_2->setGeometry(QRect(0, 310, 471, 341));
        pushButton_Profile = new QPushButton(groupBox_2);
        pushButton_Profile->setObjectName(QString::fromUtf8("pushButton_Profile"));
        pushButton_Profile->setGeometry(QRect(102, 37, 231, 41));
        pushButton_Profile->setBaseSize(QSize(0, 0));
        pushButton_Profile->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/profil_active.png);"));
        pushButton_startTest = new QPushButton(groupBox_2);
        pushButton_startTest->setObjectName(QString::fromUtf8("pushButton_startTest"));
        pushButton_startTest->setGeometry(QRect(102, 92, 231, 41));
        pushButton_startTest->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/sexkunn_active.png);"));
        pushButton_Results = new QPushButton(groupBox_2);
        pushButton_Results->setObjectName(QString::fromUtf8("pushButton_Results"));
        pushButton_Results->setGeometry(QRect(102, 147, 231, 41));
        pushButton_Results->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/resultater_active.png);"));
        pushButton_Reminders = new QPushButton(groupBox_2);
        pushButton_Reminders->setObjectName(QString::fromUtf8("pushButton_Reminders"));
        pushButton_Reminders->setGeometry(QRect(102, 202, 231, 41));
        pushButton_Reminders->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(102, 257, 231, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);\n"
"color: rgb(0, 0, 0);"));
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
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 490, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_File);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        groupBox->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Ukes Kalender", nullptr));
        label_Thursday->setText(QCoreApplication::translate("MainWindow", "Tor", nullptr));
        label_Tuesday->setText(QCoreApplication::translate("MainWindow", " Tir", nullptr));
        label_Saturday->setText(QCoreApplication::translate("MainWindow", "L\303\270r", nullptr));
        label_Wednesday->setText(QCoreApplication::translate("MainWindow", "Ons", nullptr));
        label_Tuesday_NR->setText(QCoreApplication::translate("MainWindow", "  8", nullptr));
        label_Thursday_NR->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_Monday->setText(QCoreApplication::translate("MainWindow", " Man", nullptr));
        label_Monday_NR->setText(QCoreApplication::translate("MainWindow", "  7", nullptr));
        label_Friday->setText(QCoreApplication::translate("MainWindow", "Fre", nullptr));
        label_Saturday_NR->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        label_Wednesday_NR->setText(QCoreApplication::translate("MainWindow", "  9", nullptr));
        label_Friday_NR->setText(QCoreApplication::translate("MainWindow", "11", nullptr));
        label_Sunday->setText(QCoreApplication::translate("MainWindow", "S\303\270n", nullptr));
        label_Sunday_NR->setText(QCoreApplication::translate("MainWindow", "13", nullptr));
        groupBox_2->setTitle(QString());
        pushButton_Profile->setText(QString());
        pushButton_startTest->setText(QString());
        pushButton_Results->setText(QString());
        pushButton_Reminders->setText(QCoreApplication::translate("MainWindow", "Gj\303\270rem\303\245l", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Bytt til Arbeider", nullptr));
        label_profilePicture_Main->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_Greeting->setText(QCoreApplication::translate("MainWindow", "God Morgen, Ola!", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "  Februar", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
