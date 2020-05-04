/********************************************************************************
** Form generated from reading UI file 'patientinformationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTINFORMATIONDIALOG_H
#define UI_PATIENTINFORMATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_patientInformationDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;

    void setupUi(QDialog *patientInformationDialog)
    {
        if (patientInformationDialog->objectName().isEmpty())
            patientInformationDialog->setObjectName(QString::fromUtf8("patientInformationDialog"));
        patientInformationDialog->resize(490, 687);
        patientInformationDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        label = new QLabel(patientInformationDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 80, 101, 111));
        label_2 = new QLabel(patientInformationDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 80, 211, 41));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3 = new QLabel(patientInformationDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 132, 131, 41));
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        groupBox = new QGroupBox(patientInformationDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 501, 80));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-tilbake_active.png);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 20, 341, 31));
        QFont font2;
        font2.setPointSize(18);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        groupBox_2 = new QGroupBox(patientInformationDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 210, 471, 151));
        groupBox_3 = new QGroupBox(patientInformationDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 370, 471, 151));
        groupBox_4 = new QGroupBox(patientInformationDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 520, 471, 151));

        retranslateUi(patientInformationDialog);

        QMetaObject::connectSlotsByName(patientInformationDialog);
    } // setupUi

    void retranslateUi(QDialog *patientInformationDialog)
    {
        patientInformationDialog->setWindowTitle(QCoreApplication::translate("patientInformationDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("patientInformationDialog", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("patientInformationDialog", "Ola Berg", nullptr));
        label_3->setText(QCoreApplication::translate("patientInformationDialog", "22. Oslo", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QString());
        label_4->setText(QCoreApplication::translate("patientInformationDialog", "Bruker Informasjon", nullptr));
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
        groupBox_4->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class patientInformationDialog: public Ui_patientInformationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTINFORMATIONDIALOG_H
