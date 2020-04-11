#include "secondwindowdialog.h"
#include "ui_secondwindowdialog.h"
#include <QWidget>
#include <QDialog>
#include <ui_mainwindow.h>
#include <QMovie>
#include <QMessageBox>
#include "mainwindow.h"

SecondWindowDialog::SecondWindowDialog(QWidget *parent) :
    QDialog(parent)
  ,ui(new Ui::SecondWindowDialog)
{
    ui->setupUi(this);
}

SecondWindowDialog::~SecondWindowDialog()
{
    delete ui;
}

void SecondWindowDialog::setUpGif()
{
    if(nextQuestion == 0)
    {
        this->setWindowTitle("Hvem har sex?");
        QPixmap pixSex1(":/Assets/Pictures/IMG_0292.PNG");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0288.GIF");
        ui->label->setPixmap(pixSex1);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 1)
    {
        this->setWindowTitle("Hvem er trist?");
        QPixmap pixTrist1(":/Assets/Pictures/Glad_fjes.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Glad_fjes.GIF");
        ui->label->setPixmap(pixTrist1);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 2)
    {
        this->setWindowTitle("Hvem er kvinne?");
        QPixmap pixKvinne1(":/Assets/Pictures/Naken_bestemor.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_bestemor.GIF");
        ui->label->setPixmap(pixKvinne1);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 3)
    {
        this->setWindowTitle("Hva kan du gjøre for å hjelpe noen som føler seg trist?");
        QPixmap pixHjelpe1("D:/Bachelor/wt-4.2.0/SKOGKK/KKOGSK/Assets/Pictures/SepaaTV.GIF");
        QMovie *movie = new QMovie("D:/Bachelor/wt-4.2.0/SKOGKK/KKOGSK/Assets/Pictures/SepaaTV.GIF");
        ui->label->setPixmap(pixHjelpe1);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 4)
    {
        this->setWindowTitle("Hva kan du gjøre for å ikke bli gravid?");
        QPixmap pixGravid1(":/Assets/Pictures/P-PillerFarget.mp4");
        QMovie *movie = new QMovie(":/Assets/Pictures/P-PillerFarget.mp4");
        ui->label->setPixmap(pixGravid1);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
}

void SecondWindowDialog::setUpGif_2()
{
    if(nextQuestion == 0)
    {
        this->setWindowTitle("Hvem har sex?");
        QPixmap pixSex2(":/Assets/Pictures/IMG_0293.PNG");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0289.GIF");
        ui->label->setPixmap(pixSex2);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 1)
    {
        this->setWindowTitle("Hvem er trist?");
        QPixmap pixTrist2(":/Assets/Pictures/Sinna_fjes.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Sinna_fjes.GIF");
        ui->label->setPixmap(pixTrist2);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 2)
    {
        this->setWindowTitle("Hvem er kvinne?");
        QPixmap pixKvinne2(":/Assets/Pictures/Naken_jente.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_jente.GIF");
        ui->label->setPixmap(pixKvinne2);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 3)
    {
        this->setWindowTitle("Hva kan du gjøre for å hjelpe noen som føler seg trist?");
        QPixmap pixHjelpe2(":/Assets/Pictures/Tapaarompe.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tapaarompe.GIF");
        ui->label->setPixmap(pixHjelpe2);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 4)
    {
        this->setWindowTitle("Hva kan du gjøre for å ikke bli gravid?");
        QPixmap pixGravid2(":/Assets/Pictures/Sproyte.mp4");
        QMovie *movie = new QMovie(":/Assets/Pictures/Sproyte.mp4");
        ui->label->setPixmap(pixGravid2);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
}

void SecondWindowDialog::setUpGif_3()
{
    if(nextQuestion == 0)
    {
        this->setWindowTitle("Hvem har sex?");
        QPixmap pixSex3(":/Assets/Pictures/IMG_0294.PNG");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0290.GIF");
        ui->label->setPixmap(pixSex3);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 1)
    {
        this->setWindowTitle("Hvem er trist?");
        QPixmap pixTrist3(":/Assets/Pictures/Noytral_fjes.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Noytral_fjes.GIF");
        ui->label->setPixmap(pixTrist3);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 2)
    {
        this->setWindowTitle("Hvem er kvinne?");
        QPixmap pixKvinne3(":/Assets/Pictures/Naken_kvinne.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_kvinne.GIF");
        ui->label->setPixmap(pixKvinne3);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 3)
    {
        this->setWindowTitle("Hva kan du gjøre for å hjelpe noen som føler seg trist?");
        QPixmap pixHjelpe3(":/Assets/Pictures/KjoresteKlem.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures/KjoresteKlem.gif");
        ui->label->setPixmap(pixHjelpe3);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 4)
    {
        this->setWindowTitle("Hva kan du gjøre for å ikke bli gravid?");
        QPixmap pixGravid3(":/Assets/Pictures/Tannkrem.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tannkrem.GIF");
        ui->label->setPixmap(pixGravid3);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
}

void SecondWindowDialog::setUpGif_4()
{
    if(nextQuestion == 0)
    {
        this->setWindowTitle("Hvem har sex?");
        QPixmap pixSex4(":/Assets/Pictures/IMG_0295.PNG");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0291.GIF");
        ui->label->setPixmap(pixSex4);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 1)
    {
        this->setWindowTitle("Hvem er trist?");
        QPixmap pixTrist4(":/Assets/Pictures/Trist_ansikt.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tris_ansikt.GIF");
        ui->label->setPixmap(pixTrist4);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 2)
    {
        this->setWindowTitle("Hvem er kvinne?");
        QPixmap pixKvinne4(":/Assets/Pictures/Naken_mann2.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann2.GIF");
        ui->label->setPixmap(pixKvinne4);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 3)
    {
        this->setWindowTitle("Hva kan du gjøre for å hjelpe noen som føler seg trist?");
        QPixmap pixHjelpe4(":/Assets/Pictures/Tapaapupper.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tapaapupper.GIF");
        ui->label->setPixmap(pixHjelpe4);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 4)
    {
        this->setWindowTitle("Hva kan du gjøre for å ikke bli gravid?");
        QPixmap pixGravid4(":/Assets/Pictures/Libresse.mp4");
        QMovie *movie = new QMovie(":/Assets/Pictures/Libresse.mp4");
        ui->label->setPixmap(pixGravid4);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
}

void SecondWindowDialog::chooseGif()
{
    if(ID == 1)
    {
        setUpGif();
    }
    else if(ID == 2)
    {
        setUpGif_2();
    }
    else if(ID == 3)
    {
        setUpGif_3();
    }
    else if(ID == 4)
    {
        setUpGif_4();
    }
}

int SecondWindowDialog::getID()
{
    return ID;
}

void SecondWindowDialog::setID(int &value)
{
    ID = value;
}

int SecondWindowDialog::getNextQuestion()
{
    return nextQuestion;
}

void SecondWindowDialog::setNextQuestion(int &value)
{
    nextQuestion = value;
}

void SecondWindowDialog::on_pushButton_clicked()
{
        if(answerCorrect == true)
        {
            QMessageBox::information(this, "Feedback", "Riktig svar!");
            nextQuestion++;
            close();
        }
        else
        {
            QMessageBox::information(this, "Feedback", "Feil Svar!");
            close();
        }
}

void SecondWindowDialog::on_pushButton_2_clicked()
{
    close();
}
