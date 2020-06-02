/********************************************************************************
** Form generated from reading UI file 'calenderdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDERDIALOG_H
#define UI_CALENDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_calenderDialog
{
public:
    QCalendarWidget *calendarWidget;
    QLabel *label_Calender_Picture;
    QPushButton *pushButton;

    void setupUi(QDialog *calenderDialog)
    {
        if (calenderDialog->objectName().isEmpty())
            calenderDialog->setObjectName(QString::fromUtf8("calenderDialog"));
        calenderDialog->resize(490, 687);
        calenderDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        calendarWidget = new QCalendarWidget(calenderDialog);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 260, 491, 421));
        calendarWidget->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(146, 232, 255);\n"
"alternate-background-color: rgb(255, 255, 255);\n"
""));
        label_Calender_Picture = new QLabel(calenderDialog);
        label_Calender_Picture->setObjectName(QString::fromUtf8("label_Calender_Picture"));
        label_Calender_Picture->setGeometry(QRect(0, 0, 491, 261));
        pushButton = new QPushButton(calenderDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-tilbake_active.png);"));

        retranslateUi(calenderDialog);

        QMetaObject::connectSlotsByName(calenderDialog);
    } // setupUi

    void retranslateUi(QDialog *calenderDialog)
    {
        calenderDialog->setWindowTitle(QCoreApplication::translate("calenderDialog", "Dialog", nullptr));
        label_Calender_Picture->setText(QCoreApplication::translate("calenderDialog", "TextLabel", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class calenderDialog: public Ui_calenderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDERDIALOG_H
