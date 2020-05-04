/********************************************************************************
** Form generated from reading UI file 'patientdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTDIALOG_H
#define UI_PATIENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_patientDialog
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *patientDialog)
    {
        if (patientDialog->objectName().isEmpty())
            patientDialog->setObjectName(QString::fromUtf8("patientDialog"));
        patientDialog->resize(490, 687);
        patientDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(146, 232, 255);"));
        groupBox = new QGroupBox(patientDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 70, 371, 611));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(patientDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 10, 211, 41));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        groupBox_2 = new QGroupBox(patientDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(380, 70, 101, 611));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 70, 80, 21));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/Assets/Buttons/gaa-videre_active.png);\n"
"border:none;"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 170, 80, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/Assets/Buttons/gaa-videre_active.png);\n"
"border:none;"));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 270, 80, 21));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/Assets/Buttons/gaa-videre_active.png);\n"
"border:none;"));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 360, 80, 21));
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/Assets/Buttons/gaa-videre_active.png);\n"
"border:none;"));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 460, 80, 21));
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/Assets/Buttons/gaa-videre_active.png);\n"
"border:none;"));
        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 560, 80, 21));
        pushButton_6->setStyleSheet(QString::fromUtf8("image: url(:/Assets/Buttons/gaa-videre_active.png);\n"
"border:none;"));
        pushButton_7 = new QPushButton(patientDialog);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 10, 91, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/Assets/Buttons/gaa-tilbake_active.png);"));

        retranslateUi(patientDialog);

        QMetaObject::connectSlotsByName(patientDialog);
    } // setupUi

    void retranslateUi(QDialog *patientDialog)
    {
        patientDialog->setWindowTitle(QCoreApplication::translate("patientDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_7->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_5->setText(QString());
        label->setText(QCoreApplication::translate("patientDialog", "What information about the usert is wanted in this page?", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("patientDialog", "Bruker Liste", nullptr));
        groupBox_2->setTitle(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class patientDialog: public Ui_patientDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTDIALOG_H
