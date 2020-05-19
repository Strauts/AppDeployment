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
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    chooseImage();
    ui->pushButton->setStyleSheet("QPushButton{background:transparent;}");
    ui->pushButton_2->setStyleSheet("QPushButton{background:transparent;}");
    ui->pushButton_3->setStyleSheet("QPushButton{background:transparent;}");
    ui->pushButton_4->setStyleSheet("QPushButton{background:transparent;}");
}

QuestionDialog::~QuestionDialog()
{
    delete ui;
}

void QuestionDialog::on_pushButton_clicked()
{
    buttonValue = test;
    buttonValue1 = 1;
    //gifWindow.nextQuestion = test;
    gifWindow.setID(buttonValue1);
    gifWindow.getID();
    gifWindow.setNextQuestion(test);
    gifWindow.getNextQuestion();
    gifWindow.chooseGif();
    gifWindow.setModal(true);
    gifWindow.exec();

}

void QuestionDialog::on_pushButton_2_clicked()
{

    buttonValue = test;
    buttonValue2 = 2;
    //gifWindow.nextQuestion = test;
    gifWindow.setID(buttonValue2);
    gifWindow.getID();
    gifWindow.setNextQuestion(test);
    gifWindow.getNextQuestion();
    gifWindow.chooseGif();
    gifWindow.setModal(true);
    gifWindow.exec();
}

void QuestionDialog::on_pushButton_3_clicked()
{
    buttonValue = test;
    buttonValue3 = 3;
    //gifWindow.nextQuestion = test;
    gifWindow.setID(buttonValue3);
    gifWindow.getID();
    gifWindow.setNextQuestion(test);
    gifWindow.getNextQuestion();
    gifWindow.chooseGif();
    gifWindow.setModal(true);
    gifWindow.exec();
}

void QuestionDialog::on_pushButton_4_clicked()
{
    buttonValue = test;
    buttonValue4 = 4;
    //gifWindow.nextQuestion = test;
    gifWindow.setID(buttonValue4);
    gifWindow.getID();
    gifWindow.setNextQuestion(test);
    gifWindow.getNextQuestion();
    gifWindow.chooseGif();
    gifWindow.setModal(true);
    gifWindow.exec();
}

void QuestionDialog::chooseImage()
{
    //1
    if(test == 0)
    {
        setupImage();
        test++;
    }
    //2
    else if(test == 1)
    {
        setupImage_2();
        test++;
    }
    //3
    else if(test == 2)
    {
        setupImage_3();
        test++;
    }
    //4
    else if(test == 3)
    {
        setupImage_4();
        test++;
    }
    //5.a
    else if(test == 4)
    {
        test = test + 5;
        chooseImage();
        //setupImage_5();
    }
    //5.b
    else if(test == 5)
    {
        //setupImage_6();
        test++;
    }
    //6.a
    else if(test == 6)
    {
        //setupImage_7();
        test++;
    }
    //6.b
    else if(test == 7)
    {
        //setupImage_8();
        test++;
    }
    //7
    else if(test == 8)
    {
        //setupImage_9();
        test++;
    }
    //8
    else if(test == 9)
    {
        setupImage_10();
        chooseNr();
        test++;
    }
    //9
    else if(test == 10)
    {
        setupImage_11();
        test++;
    }
    //10
    else if(test == 11)
    {
        //setupImage_12();
        test++;
        chooseImage();
    }
    //11
    else if(test == 12)
    {
        //setupImage_13();
        chooseNr();
        test++;
        chooseImage();
    }
    //12
    else if(test == 13)
    {
        setupImage_14();
        chooseNr();
        test++;
    }
    //13
    else if(test == 14)
    {
        setupImage_15();
        test++;
    }
    //14
    else if(test == 15)
    {
        setupImage_16();
        test++;
    }
    //15
    else if(test == 16)
    {
        setupImage_17();
        test++;
    }
    //16
    else if(test == 17)
    {
        setupImage_18();
        test++;
    }
    //17
    else if(test == 18)
    {
        setupImage_19();
        test++;;
    }
    //18
    else if(test == 19)
    {
        //setupImage_20();
        test++;
        chooseImage();
    }
    //19
    else if(test == 20)
    {
        //setupImage_21();
        chooseNr();
        test++;
        chooseImage();
    }
    //20
    else if(test == 21)
    {
        //setupImage_22();
        chooseNr();
        test++;
        chooseImage();
    }
    //21
    else if(test == 22)
    {
        //setupImage_23();
        chooseNr();
        test++;
        chooseImage();
    }
    //22
    else if(test == 23)
    {
        //setupImage_24();
        chooseNr();
        test++;
        chooseImage();
    }
    //23
    else if(test == 24)
    {
        setupImage_25();
        chooseNr();
        test++;
    }
    //24
    else if(test == 25)
    {
        setupImage_26();
        test++;
    }
    //25
    else if(test == 26)
    {
        setupImage_27();
        test++;
    }
    //26
    else if(test == 27)
    {
        setupImage_28();
        test++;
    }
    //27
    else if(test == 28)
    {
        //setupImage_29();
        test = test + 3;
        chooseImage();
    }
    //28
    else if(test == 29)
    {
        //setupImage_30();
        test++;
    }
    //29
    else if(test == 30)
    {
        //setupImage_31();
        test++;
    }
    //30
    else if(test == 31)
    {
        setupImage_32();
        chooseNr();
        test++;
    }
    //31
    else if(test == 32)
    {
        // setupImage_33();
        test++;
        chooseImage();
    }
    //32
    else if(test == 33)
    {
        setupImage_34();
        chooseNr();
        test++;
    }
    //33
    else if(test == 34)
    {
        setupImage_35();
        chooseNr();
        test++;
    }
    //34
    else if(test == 35)
    {
        //setupImage_36();
        test = test + 3;
        chooseImage();
    }
    //35
    else if(test == 36)
    {
        //setupImage_37();
        test++;
    }
    //36
    else if(test == 37)
    {
        //setupImage_38();
        test++;
    }
    //37
    else if(test == 38)
    {
        setupImage_39();
        chooseNr();
        test++;
    }
    //38
    else if(test == 39)
    {
        setupImage_40();
        test++;
    }
    //39
    else if(test == 40)
    {
        setupImage_41();
        test++;
    }
    //40
    else if(test == 41)
    {
        setupImage_42();
        test++;
    }
    //41
    else if(test == 42)
    {
        setupImage_43();
        test++;
    }
    //42
    else if(test == 43)
    {
        setupImage_44();
        test++;
    }
    //43
    else if(test == 44)
    {
        setupImage_45();
        chooseNr();
        test++;
    }
    //44
    else if(test == 45)
    {
        setupImage_46();
        chooseNr();
        test++;
    }
    //45
    else if(test == 46)
    {
        //setupImage_47();
        test++;
        chooseImage();
    }
    //46
    else if(test == 47)
    {
        setupImage_48();
        chooseNr();
        test++;
    }
    //47
    else if(test == 48)
    {
        //setupImage_49();
        test++;
        chooseImage();
    }
    //48
    else if(test == 49)
    {
        setupImage_50();
        chooseNr();
        test++;
    }
    //49
    else if(test == 50)
    {
        setupImage_51();
        test++;
    }
    //50
    else if(test == 51)
    {
        setupImage_52();
        test++;
    }
    //51
    else if(test == 52)
    {
        //setupImage_53();
        chooseNr();
        test++;
        chooseImage();
    }
    //52
    else if(test == 53)
    {
        //setupImage_54();
        chooseNr();
        test++;
        chooseImage();

    }
    //53
    else if(test == 54)
    {
        setupImage_55();
        chooseNr();
        test++;
    }
    //54
    else if(test == 55)
    {
        setupImage_56();
        test++;
    }
    //55
    else if(test == 56)
    {
        setupImage_57();
        test++;
    }
    //56
    else if(test == 57)
    {
        setupImage_58();
        test++;
    }
    //57
    else if(test == 58)
    {
        setupImage_59();
        test++;
    }
    //58
    else if(test == 59)
    {
        setupImage_60();
        test++;
    }
    //59
    else if(test == 60)
    {
        //setupImage_61();
        test++;
        chooseImage();
    }
    //60
    else if(test == 61)
    {
        setupImage_62();
        chooseNr();
        test++;
    }
    //61
    else if(test == 62)
    {
        //setupImage_63();
        test++;
        chooseImage();
    }
    //62
    else if(test == 63)
    {
        setupImage_64();
        chooseNr();
        test++;
    }
    else
    {
        QMessageBox::information(this, "Feedback", "Du er ferdig med testen");
        test = 0;
        close();
    }
}

void QuestionDialog::chooseNr()
{
    if(test == 9)
    {
        openText.textNr = test;
        openText.chooseNr();
        openText.setModal(true);
        openText.exec();
    }
    else if(test == 12)
    {
        openText.textNr = test;
        openText.chooseNr();
        openText.setModal(true);
        openText.exec();
    }
    else if(test == 13)
    {
        openText.textNr = test;
        openText.chooseNr();
        openText.setModal(true);
        openText.exec();
    }
    else if(test == 20)
    {
        openText.textNr = test;
        openText.chooseNr();
        openText.setModal(true);
        openText.exec();
    }
    else if(test == 21)
    {
        openText.textNr = test;
        openText.chooseNr();
        openText.setModal(true);
        openText.exec();
    }
    else if(test == 24)
    {
        openText.textNr = test;
        openText.chooseNr();
        openText.setModal(true);
        openText.exec();
    }
    else if(test == 29)
    {
        openText.textNr = test;
        openText.chooseNr();
        openText.setModal(true);
        openText.exec();
    }
    else if(test == 47)
    {
        openText.textNr = test;
        openText.chooseNr();
        openText.setModal(true);
        openText.exec();
    }
    else if(test == 63)
    {
        openText.textNr = test;
        openText.chooseNr();
        openText.setModal(true);
        openText.exec();
    }



    if(test == 22)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
    else if(test == 23)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
    else if(test == 31)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
    else if(test == 33)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
    else if(test == 34)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
    else if(test == 44)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
    else if(test == 45)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
    else if(test == 49)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
    else if(test == 52)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
    else if(test == 53)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
    else if(test == 54)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
    else if(test == 59)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
    else if(test == 61)
    {
        openImage.imageNr = test;
        openImage.chooseImage();
        openImage.setModal(true);
        openImage.exec();
    }
}

void QuestionDialog::on_pushButton_5_clicked()
{
    chooseImage();
}

void QuestionDialog::on_pushButton_6_clicked()
{
    test = 0;
    chooseImage();
    close();

}

void QuestionDialog::setupImage()
{
    test = 0;
    text = "1. Hvem er mann?";
    theme = "Tema: Kjønn og kropp";
    ui->questionLabel->setText(text);
    ui->labelTheme->setText(theme);
    QPixmap pix(":/Assets/Pictures_2/IMG_0562.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Dame.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/Mann.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/Jente.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_2()
{
    text = "2. Hvem er kvinne?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/Dame.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/Mann.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/Jente.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_0562.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_3()
{
    text = "3. Åpne bilde og pek på kroppsdelene";
    ui->questionLabel->setText(text);

    QPixmap pix(":/Assets/Pictures/Naken_kvinne.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Naken_mann3.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);


    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);


}

void QuestionDialog::setupImage_4()
{
    text = "4. Hva bruker den/de til?";
    ui->questionLabel->setText(text);

    QPixmap pix(":/Assets/Pictures/Naken_kvinne.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Naken_mann3.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Naken_mann4.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_5()
{
    text = "5.a) Hva er dette?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_6()
{
    text = "5.b) Hva heter det?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_7()
{
    text = "6.a) Hva er dette?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_8()
{
    text = "6.b) Hva heter det?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_9()
{
    text = "7. Er du barn eller voksen - eller er du ungdom?";
    theme = "Pubertet";
    ui->questionLabel->setText(text);
    ui->labelTheme->setText(theme);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_10()
{
    text = "8. Hvem er barn?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures_2/IMG_0562.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Dame.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/Mann.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/Jente.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_11()
{
    text = "9. Hvem er voksen?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/Naken_mann3.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Naken_mann1.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Naken_jente2.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/Naken_kvinne.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_12()
{
    text = "10. Når er man ungdom?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_13()
{
    text = "11. Når blir man voksen?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_14()
{
    text = "12. Hva skjer med kroppen til en gutt når han blir voksen?";
    ui->questionLabel->setText(text);
    //bilde av hvit mann?
    QPixmap pix(":/Assets/Pictures/Naken_mann3.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Naken_mann1.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Naken_jente2.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/Naken_kvinne.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_15()
{
    text = "13. Hva skjer med kroppen til ei jente når hun blir voksen?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/Naken_mann3.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Naken_mann1.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Naken_jente2.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/Naken_kvinne.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_16()
{
    text = "14. Hvem er gammel?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/Naken_jente.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Naken_mann3.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Naken_mann1.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/Naken_bestemor.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_17()
{
    text = "15. Hva skjer med kroppen når man blir gammel?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/Naken_jente.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Naken_mann3.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Naken_mann1.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/Naken_bestemor.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_18()
{
    text = "16. Hvem av disse kan ha menstruasjon?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures_2/Mann.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/Jente.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Bestemor.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/Dame.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_19()
{
    text = "17. Hvilke steder på kroppen må du vaske hver dag?";
    theme = "Hygiene";
    ui->questionLabel->setText(text);
    ui->labelTheme->setText(theme);

    QPixmap pix(":/Assets/Pictures/Naken_kvinne.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Naken_mann3.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_20()
{
    text = "18. Hvorfor vasker vi oss?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_21()
{
    text = "19. Hvorfor må vi ta på rene klær?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_22()
{
    text = "20. Når må du vaske deg på hendene?";
    ui->questionLabel->setText(text);

    QPixmap pix(":/Assets/Pictures_2/IMG_0586.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_23()
{
    text = "21. Når må du pusse tennene?";
    ui->questionLabel->setText(text);

    QPixmap pix(":/Assets/Pictures/Tannkrem.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_24()
{
    text = "22. Hvorfor må vi pusse tenner?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_25()
{
    text = "23. Hvem er glad?";
    theme = "Følelser og relasjoner";
    ui->questionLabel->setText(text);
    ui->labelTheme->setText(theme);
    QPixmap pix(":/Assets/JPGS/IMG_0692.PNG");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/JPGS/IMG_0691.PNG");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/JPGS/IMG_0690.PNG");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/JPGS/IMG_0689.PNG");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_26()
{
    text = "24. Hvem er sint?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/JPGS/IMG_0692.PNG");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/JPGS/IMG_0691.PNG");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/JPGS/IMG_0690.PNG");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/JPGS/IMG_0689.PNG");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_27()
{
    text = "25. Hvem er lei seg?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/JPGS/IMG_0692.PNG");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/JPGS/IMG_0691.PNG");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/JPGS/IMG_0690.PNG");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/JPGS/IMG_0689.PNG");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_28()
{
    text = "26. Er noen av disse lei seg?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/JPGS/IMG_0688.PNG");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/SepaaTV.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/IMG_f3.gif");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_0381.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_29()
{
    text = "27. Hvordan kan du se det?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_30()
{
    text = "28. Hva kan du gjøre når noen er lei seg?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/Tapaarompe.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/JPGS/IMG_0695.PNG");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/JPGS/IMG_0694.PNG");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/JPGS/IMG_0693.PNG");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_31()
{
    text = "29. Hvem er sjalu?";
    ui->questionLabel->setText(text);
    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_32()
{
    text = "30. Hvem er kjærester?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures_2/kyssidel.gif");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/IMG_0332.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/SnakkeIRullestol.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/Jenter_loper.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_33()
{
    text = "31. Hvem er venner?";
    ui->questionLabel->setText(text);
    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/IMG_0332.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/SnakkeIRullestol.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_34()
{
    text = "32. Hvem kan hun være kjæreste med?";
    ui->questionLabel->setText(text);

    QPixmap pix(":/Assets/Pictures_2/IMG_f1.gif");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/IMG_f2.gif");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/IMG_f3.gif");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_f8.gif");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_35()
{
    text = "33. Hvem kan han være kjæreste med?";
    ui->questionLabel->setText(text);

    QPixmap pix(":/Assets/Pictures_2/IMG_f6.gif");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/IMG_f5.gif");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/IMG_f4.gif");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_f7.gif");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_36()
{
    text = "34. Hva gjør venner sammen?";
    ui->questionLabel->setText(text);
    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/kyssidel.gif");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_37()
{
    text = "35. Hva gjør kjærester sammen?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/KjoresteKlem.gif");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/IMG_0289.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_38()
{
    text = "36. Hvordan kan man ta på en venn?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/Tapaapupper.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/Tapaarompe.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_39()
{
    text = "37. Hvordan kan man ta på en kjæreste?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/Tapaarompe.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/KjoresteKlem.gif");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Tapaapupper.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/kyssidel.gif");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}


void QuestionDialog::setupImage_40()
{
    text = "38. Hvem av disse har sex?";
    theme = "Å ha sex";
    ui->questionLabel->setText(text);
    ui->labelTheme->setText(theme);
    QPixmap pix(":/Assets/Pictures/Tapaapupper.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/IMG_0288.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/IMG_0289.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/Jenter_loper.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_41()
{
    text = "39. Hvem er kåt?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/IMG_0291.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Spise.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/SnakkeIRullestol.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/IMG_0302.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_42()
{
    text = "40. Hvem onanerer?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/IMG_0329.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/SepaaTV.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/IMG_0288.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/IMG_0291.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_43()
{
    text = "41. Hvem har samleie?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/IMG_0291.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/kyssidel.gif");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Tapaapupper.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/IMG_0330.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_44()
{
    text = "42. Har noen av disse samleie?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures_2/IMG_0334.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/IMG_0331.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/IMG_0535.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/IMG_0288.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_45()
{
    text = "43. Hvem av disse kan hun ha sex med?";
    theme = "Grenser og overgrep";
    ui->questionLabel->setText(text);
    ui->labelTheme->setText(theme);

    QPixmap pix(":/Assets/Pictures_2/IMG_f1.gif");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/IMG_f2.gif");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/IMG_f3.gif");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_f8.gif");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_46()
{
    text = "44. Hvem av disse kan han ha sex med?";
    ui->questionLabel->setText(text);

    QPixmap pix(":/Assets/Pictures_2/IMG_f6.gif");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/IMG_f5.gif");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/IMG_f4.gif");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_f7.gif");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_47()
{
    text = "45. Er det lov å ha sex med noen som ikke har gitt tillatelse (samtykke, sagt ja)?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_48()
{
    text = "46. Hvem har sex uten å ha fått lov(tillatelse)?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures_2/IMG_0337.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/IMG_0385.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Tapaarompe.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_0332.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_49()
{
    text = "47. Hvordan kan du se det?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_50()
{
    text = "48. Hvor kan du ha sex?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures_2/IMG_0335.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/IMG_0336.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/IMG_0376.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_0375.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_51()
{
    text = "49. Hva er lov?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/IMG_0331.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Tapaapupper.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/IMG_0302.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/IMG_0385.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_52()
{
    text = "50. Hva er ulovlig (ikke lov/forbudt)?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures_2/kyssidel.gif");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/IMG_0374.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/IMG_0378.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_0337.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_53()
{
    text = "51. Har voksne lov til å ha sex med barn på film eller på nettet?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_54()
{
    text = "52. Har en voksen lov til å bli kjæreste med et barn på nettet?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_55()
{
    text = "53. Hvem kan ha sex med hverandre?";
    ui->questionLabel->setText(text);

    //set up prepage with whole family
    QPixmap pix(":/Assets/Pictures_2/IMG_f13.gif");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/IMG_f10.gif");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/IMG_f11.gif");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_f12.gif");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_56()
{
    text = "54. Hvordan kan en jente bli gravid?";
    theme = "Prevensjon og seksualitetsundervisning";
    ui->questionLabel->setText(text);
    ui->labelTheme->setText(theme);
    QPixmap pix(":/Assets/Pictures_2/Jenter_loper.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/KjoresteKlem.gif");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/IMG_0330.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/kyssidel.gif");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_57()
{
    text = "55. Hva kan en jente bruke for ikke å bli gravid?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures_2/Libresse.gif");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/Sproyte.gif");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures/Tannkrem.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/P-Piller.gif");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_58()
{
    text = "56. Hvordan vet en jente at hun er gravid?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/IMG_0377.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/IMG_0379.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/kyssidel.gif");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_0459.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_59()
{
    text = "57. Hva kan jenta gjøre hvis hun ikke vil ha barnet?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures_2/IMG_0382.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/IMG_0337.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/IMG_0381.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/IMG_0386.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_60()
{
    text = "58. Hva kan en gutt bruke for å unngå å gjøre en jente gravid?";
    ui->questionLabel->setText(text);
    QPixmap pix(":/Assets/Pictures/IMG_0383.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/IMG_0384.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/IMG_0505.PNG");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures/IMG_0388.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_61()
{
    text = "59. Hva heter det?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void::QuestionDialog::setupImage_62()
{
    text = "60. Hvordan bruker man kondom?";
    ui->questionLabel->setText(text);

    QPixmap pix(":/Assets/Pictures/IMG_0394.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures_2/IMG_0543.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_0490.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}
void QuestionDialog::setupImage_63()
{
    text = "61. Hvor kan man få tak i et kondom?";
    ui->questionLabel->setText(text);

    QPixmap pix("");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2("");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3("");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4("");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void QuestionDialog::setupImage_64()
{
    text = "62. Hvor kan du lære mer om sex?";
    ui->questionLabel->setText(text);

    QPixmap pix(":/Assets/Pictures/IMG_0389.GIF");
    ui->label_1->setPixmap(pix);
    ui->label_1->setScaledContents(true);
    ui->label_1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix2(":/Assets/Pictures/IMG_0386.GIF");
    ui->label_2->setPixmap(pix2);
    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix3(":/Assets/Pictures_2/IMG_0337.GIF");
    ui->label_3->setPixmap(pix3);
    ui->label_3->setScaledContents(true);
    ui->label_3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    QPixmap pix4(":/Assets/Pictures_2/IMG_0492.GIF");
    ui->label_4->setPixmap(pix4);
    ui->label_4->setScaledContents(true);
    ui->label_4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}
