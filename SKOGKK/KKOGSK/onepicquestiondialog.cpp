#include "onepicquestiondialog.h"
#include "ui_onepicquestiondialog.h"
#include <QMovie>
#include <QWidget>

onePicQuestionDialog::onePicQuestionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::onePicQuestionDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

onePicQuestionDialog::~onePicQuestionDialog()
{
    delete ui;
}

void onePicQuestionDialog::chooseImage()
{
    if(imageNr == 4)
    {
        text = "Tema: Kjønn og kropp";
        text2 = "5.a) Hva er dette?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    }
    else if(imageNr == 5)
    {
        text = "Tema: Kjønn og kropp";
        text2 = "5.b) Hva heter det?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    }
    else if(imageNr == 6)
    {
        text = "Tema: Kjønn og kropp";
        text2 = "6.a) Hva er dette?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    }
    else if(imageNr == 7)
    {
        text = "Tema: Kjønn og kropp";
        text2 = "6.b) Hva heter det?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    }
    else if(imageNr == 22)
    {
        text = "Tema: Hygiene";
        text2 = "20. Når må du vaske deg på hendene?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix(":/Assets/Pictures_2/IMG_0586.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0586.GIF");
        ui->label->setPixmap(pix);
        ui->label->setMovie(movie);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        movie->start();
    }
    else if(imageNr == 23)
    {
        text = "Tema: Hygiene";
        text2 = "21. Når må du pusse tennene?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix(":/Assets/Pictures/Tannkrem.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tannkrem.GIF");
        ui->label->setPixmap(pix);
        ui->label->setMovie(movie);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        movie->start();
    }
    else if(imageNr == 31)
    {
        text = "Tema: Følelser og relasjoner";
        text2 = "27. Hvordan kan du se det?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix(":/Assets/JPGS/IMG_0689.PNG");
        QMovie *movie = new QMovie(":/Assets/JPGS/IMG_0689.PNG");
        ui->label->setPixmap(pix);
        ui->label->setMovie(movie);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        movie->start();
    }
    else if(imageNr == 33)
    {
        text = "Tema: Følelser og relasjoner";
        text2 = "32. Hvem kan hun være kjæreste med?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix(":/Assets/Pictures_2/IMG_0477.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0477.GIF");
        ui->label->setPixmap(pix);
        ui->label->setMovie(movie);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        movie->start();
    }
    else if(imageNr == 34)
    {
        text = "Tema: Følelser og relasjoner";
        text2 = "33. Hvem kan han være kjæreste med?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix(":/Assets/Pictures_2/IMG_0469.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0469.GIF");
        ui->label->setPixmap(pix);
        ui->label->setMovie(movie);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        movie->start();
    }
    else if(imageNr == 44)
    {
        text = "Tema: Grenser og overgrep";
        text2 = "43. Hvem av disse kan hun ha sex med?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix(":/Assets/Pictures_2/IMG_0477.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0477.GIF");
        ui->label->setPixmap(pix);
        ui->label->setMovie(movie);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        movie->start();
    }
    else if(imageNr == 45)
    {
        text = "Tema: Grenser og overgrep";
        text2 = "44. Hvem av disse kan han ha sex med?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix(":/Assets/Pictures_2/IMG_0469.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0469.GIF");
        ui->label->setPixmap(pix);
        ui->label->setMovie(movie);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        movie->start();
    }
    else if(imageNr == 49)
    {
        text = "Tema: Grenser og overgrep";
        text2 = "47. Hvordan kan du se det?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix(":/Assets/Pictures/IMG_0385.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0385.GIF");
        ui->label->setPixmap(pix);
        ui->label->setMovie(movie);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        movie->start();
    }
    else if(imageNr == 52)
    {
        text = "Tema: Grenser og overgrep";
        text2 = "51. Har voksne lov til å ha sex med barn på film eller på nettet?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix(":/Assets/Pictures/IMG_0390.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0390.GIF");
        ui->label->setPixmap(pix);
        ui->label->setMovie(movie);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        movie->start();
    }
    else if(imageNr == 53)
    {
        text = "Tema: Grenser og overgrep";
        text2 = "52. Har en voksen lov til å bli kjæreste med et barn på nettet?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix(":/Assets/Pictures/IMG_0391.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0391.GIF");
        ui->label->setPixmap(pix);
        ui->label->setMovie(movie);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        movie->start();
    }
    else if(imageNr == 54)
    {
        text = "Tema: Grenser og overgrep";
        text2 = "53. Her ser du en familie. Mor, far, datter og sønn";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix(":/Assets/Pictures_2/IMG_f9.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f9.gif");
        ui->label->setPixmap(pix);
        ui->label->setMovie(movie);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        movie->start();
    }
    else if(imageNr == 61)
    {
        text = "Tema: Prevensjon og seksualitetsundervisning";
        text2 = "59. Hva heter det?";
        ui->label_2->setText(text);
        ui->label_3->setText(text2);
        QPixmap pix(":/Assets/Pictures/IMG_0387.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0387.GIF");
        ui->label->setPixmap(pix);
        ui->label->setMovie(movie);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        movie->start();
    }
    text = "";
    text2 = "";

}

void onePicQuestionDialog::on_pushButton_2_clicked()
{
    close();
}

void onePicQuestionDialog::on_pushButton_clicked()
{
    close();
}
