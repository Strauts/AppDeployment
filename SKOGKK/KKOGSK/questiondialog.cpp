#include "questiondialog.h"
#include "ui_questiondialog.h"
#include <ui_mainwindow.h>
#include "mainwindow.h"
#include "secondwindowdialog.h"
#include <QAction>
#include <QFileDialog>
#include <QStandardPaths>
#include <QImageReader>
#include <QMessageBox>
#include <QDir>
#include <QLabel>
#include <QByteArray>
#include <Qmovie>
#include <iostream>

QuestionDialog::QuestionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuestionDialog)
{
    ui->setupUi(this);
    setupImage();
}

QuestionDialog::~QuestionDialog()
{
    delete ui;
}

void QuestionDialog::setupImage()
{
    QString text = "Hvem har sex?";
    test = 0;
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/IMG_0292.PNG");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/IMG_0293.PNG");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/IMG_0294.PNG");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/IMG_0295.PNG");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_2()
{
    QString text = "Hvem er trist?";
    test = 1;
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/Glad_fjes.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Sinna_fjes.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Noytral_fjes.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/Tris_ansikt.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_3()
{
    QString text = "Hvem er kvinne?";
    test = 2;
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/Naken_bestemor.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Naken_jente.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Naken_kvinne.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/Naken_mann2.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_4()
{
    QString text = "Hva kan du gjøre for å hjelpe noen som føler seg trist?";
    test = 3;
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/SepaaTV.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Tapaarompe.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/KjoresteKlem.gif");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/Tapaapupper.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_5()
{
    //    test = 4;
    //    this->setWindowTitle("Hva kan du gjøre for å ikke bli gravid?");
    //    QPixmap pix("D:/Bachelor/wt-4.2.0/SKOGKK/KKOGSK/Pictures/P-PillerFarget.mp4");
    //    ui->label_1->setPixmap(pix);
    //    ui->label_1->setScaledContents(true);
    //    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    //    QPixmap pix2("D:/Bachelor/wt-4.2.0/SKOGKK/KKOGSK/Pictures/Sproyte.mp4");
    //    ui->label_2->setPixmap(pix2);
    //    ui->label_2->setScaledContents(true);
    //    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    //    QPixmap pix3("D:/Bachelor/wt-4.2.0/SKOGKK/KKOGSK/Pictures/Tannkrem.GIF");
    //    ui->label_3->setPixmap(pix3);
    //    ui->label_3->setScaledContents(true);
    //    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    //    QPixmap pix4("D:/Bachelor/wt-4.2.0/SKOGKK/KKOGSK/Pictures/Libresse.mp4");
    //    ui->label_4->setPixmap(pix4);
    //    ui->label_4->setScaledContents(true);
    //    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::chooseImage()
{
    gifWindow.getNextQuestion();
    //test = gifWindow.nextQuestion;
    test = test + 1;
    if(test == 0)
    {
        setupImage();
    }
    else if(test == 1)
    {
        setupImage_2();
    }
    else if(test == 2)
    {
        setupImage_3();
    }
    else if(test == 3)
    {
        setupImage_4();
    }
    //    else if(test == 4)
    //    {
    //        setupImage_5();
    //    }
    else
    {
        QMessageBox::information(this, "Feedback", "Du er ferdig med testen");
        close();
    }
}

void QuestionDialog::on_pushButton_clicked()
{
    buttonValue = 1;
    gifWindow.setID(buttonValue);
    gifWindow.getID();
    gifWindow.chooseGif();
    gifWindow.setModal(true);
    gifWindow.exec();
}

void QuestionDialog::on_pushButton_2_clicked()
{
    buttonValue = 2;
    gifWindow.setID(buttonValue);
    gifWindow.getID();
    gifWindow.chooseGif();
    gifWindow.setModal(true);
    gifWindow.exec();
}

void QuestionDialog::on_pushButton_3_clicked()
{
    buttonValue = 3;
    gifWindow.setID(buttonValue);
    gifWindow.getID();
    gifWindow.chooseGif();
    gifWindow.setModal(true);
    gifWindow.exec();
}

void QuestionDialog::on_pushButton_4_clicked()
{
    buttonValue = 4;
    gifWindow.setID(buttonValue);
    gifWindow.getID();
    gifWindow.chooseGif();
    gifWindow.setModal(true);
    gifWindow.exec();
}

void QuestionDialog::on_pushButton_5_clicked()
{
    chooseImage();
    this->exec();
    //    if(gifWindow.answerCorrect == true)
    //    {
    //        chooseImage();
    //        this->exec();
    //    }
    //    else if(gifWindow.answerCorrect == false)
    //    {
    //        QMessageBox::information(this, "Feedback", "Du har ikke svart riktig, prøv igjen!");
    //    }
}

void QuestionDialog::on_pushButton_6_clicked()
{
    close();
}
