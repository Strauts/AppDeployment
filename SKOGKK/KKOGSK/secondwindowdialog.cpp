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
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

SecondWindowDialog::~SecondWindowDialog()
{
    delete ui;
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
        //nextQuestion++;
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

void SecondWindowDialog::setUpGif()
{
    if(nextQuestion == 1)
    {
        text = "1. Hvem er mann?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0562.GIF");
        QMovie *movie = new QMovie(":Assets/Pictures_2/IMG_0562.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 2)
    {
        text = "2. Hvem er kvinne?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Dame.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Dame.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 3)
    {
        text = "3. Pek på kroppsdelene: Hår, Øyne, Nese, Munn, Pupper, Hals, Hæl,";
        ui->label_2->setText(text);
        ui->label_3->setText("Mannetiss, Hofte, Knær, Dametiss, Navle, Tær, Fingre");


        QPixmap pix(":/Assets/Pictures/Naken_kvinne.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_kvinne.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 4)
    {
        text = "4. Hva brukes de til: Hår, Øyne, Nese, Munn, Pupper, Hals, Hæl,";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_kvinne.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_kvinne.GIF");


        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 5)
    {
        text = "5.a) Hva er dette?";
        ui->label_2->setText(text);
        ui->label_3->setText("");
        QPixmap pix("");
        QMovie *movie = new QMovie("");


        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 6)
    {
        text = "5.b) Hva heter det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");


        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 7)
    {
        text = "6.a) Hva er dette?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        //Annen side?

        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 8)
    {
        text = "6.b) Hva heter det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        //Annen side?

        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 9)
    {
        text = "7. Er du barn eller voksen - eller er du ungdom?";
        ui->label_2->setText(text);
        //Annen side

        answerCorrect = true;

    }
    else if(nextQuestion == 10)
    {
        text = "8.Hvem er barn?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0562.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0562.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 11)
    {
        text = "9. Hvem er voksen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann2.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann2.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 12)
    {
        //        text = "10. Når er man ungdom?";
        //        ui->label_2->setText(text);
        //        //Annen side

                answerCorrect = true;
    }
    else if(nextQuestion == 13)
    {
        text = "11. Når blir man voksen?";
        ui->label_2->setText(text);
        //annen side

        answerCorrect = true;
    }
    else if(nextQuestion == 14)
    {
        text = "12. Hva skjer med kroppen til en gutt når han blir voksen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann2.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann2.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 15)
    {
        text = "13. Hva skjer med kroppen til en jente når hun blir voksen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann2.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann2.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 16)
    {
        text = "14. Hvem er gammel?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_jente.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_jente.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 17)
    {
        text = "15. Hva skjer med kroppen når man blir gammel?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_jente.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_jente.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 18)
    {
        text = "16. Hvem av disse kan ha menstruasjon?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/Mann.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/Mann.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 19)
    {
        text = "17. Hvilke steder på kroppen må du vaske hver dag?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_kvinne.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_kvinne.GIF");
        //annen side

        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 20)
    {
        text = "18. Hvorfor vasker vi oss?";
        ui->label_2->setText(text);
        //annen side

        answerCorrect = true;
    }
    else if(nextQuestion == 21)
    {
        text = "19. Hvorfor må vi ta på rene klær?";
        ui->label_2->setText(text);
        //annen side

        answerCorrect = true;
    }
    else if(nextQuestion == 22)
    {
        text = "20. Når må du vaske deg på hendene?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        //annen side

        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 23)
    {
        text = "21. Når må du pusse tennene?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tannkrem.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tannkrem.GIF");
        //Annen side

        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 24)
    {
        text = "22. Hvorfor må vi pusse tenner?";
        ui->label_2->setText(text);
        //annen side

        answerCorrect = true;
    }
    else if(nextQuestion == 25)
    {
        text = "23. Hvem er glad?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Noytral_fjes.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Noytral_fjes.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 26)
    {
        text = "24. Hvem er sint?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Noytral_fjes.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Noytral_fjes.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 27)
    {
        text = "25. Hvem er lei seg?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Noytral_fjes.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Noytral_fjes.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 28)
    {
        text = "26. Er noen av disse lei seg?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tris_ansikt.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tris_ansikt.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 29)
    {
        text = "27. Hvordan kan du se det?";
        ui->label_2->setText(text);
        //annen side

        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 30)
    {
        text = "28. Hva kan du gjøre når noen er lei seg?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tapaarompe.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tapaarompe.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 31)
    {
        text = "29. Hvem er sjalu?";
        ui->label_2->setText(text);
        //Don't have pictures to go after
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 32)
    {
        text = "30. Hvem er kjærester?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/kyssidel.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/kyssidel.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 33)
    {
        text = "31. Hvem er venner?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 34)
    {
        text = "32. Hvem kan hun være kjæreste med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f1.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f1.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 35)
    {
        text = "33. Hvem kan han være kjæreste med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f6.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f6.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 36)
    {
        text = "34. Hva gjør venner sammen?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 37)
    {
        text = "35. Hva gjør kjærester sammen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/KjoresteKlem.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/KjoresteKlem.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 38)
    {
        text = "36. Hvordan kan man ta på en venn?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tapaapupper.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tapaapupper.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 39)
    {
        text = "37. Hvordan kan man ta på en kjæreste?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tapaarompe.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tapaarompe.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 40)
    {
        text = "38. Hvem av disse har sex?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tapaapupper.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tapaapupper.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 41)
    {
        text = "39. Hvem er kåt?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0291.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0291.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 42)
    {
        text = "40. Hvem onanerer?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0329.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0329.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 43)
    {
        text = "41. Hvem har samleie?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0291.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0291.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 44)
    {
        text = "42. Har noen av disse samleie?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0334.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0334.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 45)
    {
        text = "43. Hvem av disse kan hun ha sex med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f1.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f1.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 46)
    {
        text = "44. Hvem av disse kan han ha sex med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f6.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f6.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 47)
    {
        text = "45. Er det lov å ha sex med noen som ikke har gitt tillatelse(samtykke, sagt ja)?";
        ui->label_2->setText(text);
        answerCorrect = false;
    }
    else if(nextQuestion == 48)
    {
        text = "46. Hvem har sex uten å ha fått lov(tillatelse)?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0337.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0337.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 49)
    {
        text = "47. Hvordan kan du se det?";
        ui->label_2->setText(text);
        answerCorrect = true;
    }
    else if(nextQuestion == 50)
    {
        text = "48. Hvor kan du ha sex?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0335.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0335.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 51)
    {
        text = "49. Hva er lov?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0331.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0331.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 52)
    {
        text = "50. Hva er ulovlig(ikke lov/forbudt)?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/kyssidel.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/kyssidel.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 53)
    {
        text = "51. Har voksne lov til å ha sex med barn på film eller på nettet?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0390.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0390.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 54)
    {
        text = "52. Har en voksen lov til å bli kjæreste med et barn på nettet?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0391.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0391.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 55)
    {
        text = "53. Her ser du en familie. Det er mor, far, en datter og en sønn. Hvem kan ha sex med hverandre?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f13.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f13.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 56)
    {
        text = "54. Hvordan kan en jente bli gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/Jenter_loper.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/Jenter_loper.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 57)
    {
        text = "55. Hva kan en jente bruke for ikke å bli gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/Libresse.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/Libresse.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 58)
    {
        text = "56. Hvordan vet en jente at hun er gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0377.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0377.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 59)
    {
        text = "57. Hva kan en jente gjøre hvis hun ikke vil ha barnet?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0382.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0382.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 60)
    {
        text = "58. Hva kan en gutt bruke for å unngå å gjøre en jente gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0383.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0383.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 61)
    {
        text = "59. Hva heter det?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0387.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0387.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 62)
    {
        text = "60. Hvordan bruker man kondom?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0394.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0394.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 63)
    {
        text = "61. Hvor kan man få tak i et kondom?";
        ui->label_2->setText(text);
        //annen side
        answerCorrect = true;
    }
    else if(nextQuestion == 64)
    {
        text = "62. Hvor kan du lære mer om sex?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0389.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0389.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }

}

void SecondWindowDialog::setUpGif_2()
{
    if(nextQuestion == 1)
    {
        text = "1. Hvem er mann?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Dame.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Dame.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 2)
    {
        text = "2. Hvem er kvinne?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/Mann.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/Mann.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 3)
    {
        text = "3. Pek på...";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann2.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann2.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 4)
    {
        text = "4. Hva brukes den/de til";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann2.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann2.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 5)
    {
        text = "5.a) Hva er dette?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 6)
    {
        text = "5.b) Hva heter det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 7)
    {
        text = "6.a) Hva er dette?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 8)
    {
        text = "6.b) Hva heter det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 9)
    {
        text = "7. Er du barn eller voksen - eller er du ungdom?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 10)
    {
        text = "8.Hvem er barn?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Dame.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Dame.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 11)
    {
        text = "9. Hvem er voksen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann1.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann1.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 12)
    {
        text = "10. Når er man ungdom?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 13)
    {
        text = "11. Når blir man voksen?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 14)
    {
        text = "12. Hva skjer med kroppen til en gutt når han blir voksen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann1.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann1.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 15)
    {
        text = "13. Hva skjer med kroppen til en jente når hun blir voksen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann1.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann1.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 16)
    {
        text = "14. Hvem er gammel?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann2.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann2.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 17)
    {
        text = "15. Hva skjer med kroppen når man blir gammel?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann2.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann2.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 18)
    {
        text = "16. Hvem av disse kan ha menstruasjon?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/Jente.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/Jente.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 19)
    {
        text = "17. Hvilke steder på kroppen må du vaske hver dag?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann2.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann2.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 20)
    {
        text = "18. Hvorfor vasker vi oss?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 21)
    {
        text = "19. Hvorfor må vi ta på rene klær?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 22)
    {
        text = "20. Når må du vaske deg på hendene?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 23)
    {
        text = "21. Når må du pusse tennene?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 24)
    {
        text = "22. Hvorfor må vi pusse tenner?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 25)
    {
        text = "23. Hvem er glad?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Sinna_fjes.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Sinna_fjes.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 26)
    {
        text = "24. Hvem er sint?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Sinna_fjes.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Sinna_fjes.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 27)
    {
        text = "25. Hvem er lei seg?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Sinna_fjes.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Sinna_fjes.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 28)
    {
        text = "26. Er noen av disse lei seg?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/SepaaTV.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/SepaaTV.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 29)
    {
        text = "27. Hvordan kan du se det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 30)
    {
        text = "28. Hva kan du gjøre når noen er lei seg?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 31)
    {
        text = "29. Hvem er sjalu?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 32)
    {
        text = "30. Hvem er kjærester?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0332.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0332.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 33)
    {
        text = "31. Hvem er venner?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 34)
    {
        text = "32. Hvem kan hun være kjæreste med?";
        ui->label_2->setText(text);
        QPixmap pixTrist1(":/Assets/Pictures_2/IMG_f2.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f2.gif");
        ui->label->setPixmap(pixTrist1);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 35)
    {
        text = "33. Hvem kan han være kjæreste med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f5.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f5.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 36)
    {
        text = "34. Hva gjør venner sammen?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 37)
    {
        text = "35. Hva gjør kjærester sammen?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 38)
    {
        text = "36. Hvordan kan man ta på en venn?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 39)
    {
        text = "37. Hvordan kan man ta på en kjæreste?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/KjoresteKlem.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/KjoresteKlem.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 40)
    {
        text = "38. Hvem av disse har sex?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0288.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0288.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 41)
    {
        text = "39. Hvem er kåt?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Spise.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Spise.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 42)
    {
        text = "40. Hvem onanerer?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/SepaaTV.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/SepaaTV.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 43)
    {
        text = "41. Hvem har samleie?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/kyssidel.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/kyssidel.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 44)
    {
        text = "42. Har noen av disse samleie?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0331.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0331.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 45)
    {
        text = "43. Hvem av disse kan hun ha sex med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f2.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f2.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 46)
    {
        text = "44. Hvem av disse kan han ha sex med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f5.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f5.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 47)
    {
        text = "45. Er det lov å ha sex med noen som ikke har gitt tillatelse?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 48)
    {
        text = "46. Hvem har sex uten å ha fått lov(tillatelse)?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0385.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0385.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 49)
    {
        text = "47. Hvordan kan du se det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 50)
    {
        text = "48. Hvor kan du ha sex?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0336.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0336.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 51)
    {
        text = "49. Hva er lov?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tapaapupper.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tapaapupper.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 52)
    {
        text = "50. Hva er ulovlig(ikke lov/forbudt)?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0374.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0374.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 53)
    {
        text = "51. Har voksne lov til å ha sex med barn på film eller på nettet?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 54)
    {
        text = "52. Har en voksen lov til å bli kjæreste med et barn på nettet?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 55)
    {
        text = "53. Her ser du en familie. Det er mor, far, en datter og en sønn. Hvem kan ha sex med hverandre?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f10.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f10.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 56)
    {
        text = "54. Hvordan kan en jente bli gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/KjoresteKlem.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/KjoresteKlem.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 57)
    {
        text = "55. Hva kan en jente bruke for ikke å bli gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Sproyte.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures/Sproyte.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 58)
    {
        text = "56. Hvordan vet en jente at hun er gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0379.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0379.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 59)
    {
        text = "57. Hva kan en jente gjøre hvis hun ikke vil ha barnet?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0337.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0337.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 60)
    {
        text = "58. Hva kan en gutt bruke for å unngå å gjøre en jente gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0544.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0544.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 61)
    {
        text = "59. Hva heter det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 62)
    {
        text = "60. Hvordan bruker man kondom?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0543.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0543.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 62)
    {
        text = "61. Hvor kan man få tak i et kondom?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 63)
    {
        text = "62. Hvor kan du lære mer om sex?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0386.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0386.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
}

void SecondWindowDialog::setUpGif_3()
{
    if(nextQuestion == 1)
    {
        text = "1. Hvem er mann?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/Mann.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/Mann.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 2)
    {
        text = "2. Hvem er kvinne?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/Jente.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/Jente.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 3)
    {
        text = "3. Pek på...";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 4)
    {
        text = "4. Hva brukes den/de til";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 5)
    {
        text = "5.a) Hva er dette?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 6)
    {
        text = "5.b) Hva heter det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 7)
    {
        text = "6.a) Hva er dette?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 8)
    {
        text = "6.b) Hva heter det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 9)
    {
        text = "7. Er du barn eller voksen - eller er du ungdom?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 10)
    {
        text = "8.Hvem er barn?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/Mann.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/Mann.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 11)
    {
        text = "9. Hvem er voksen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_jente.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_jente.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 12)
    {
        text = "10. Når er man ungdom?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 13)
    {
        text = "11. Når blir man voksen?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 14)
    {
        text = "12. Hva skjer med kroppen til en gutt når han blir voksen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_jente.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_jente.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 15)
    {
        text = "13. Hva skjer med kroppen til en jente når hun blir voksen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_jente.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_jente.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 16)
    {
        text = "14. Hvem er gammel?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann1.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann1.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 17)
    {
        text = "15. Hva skjer med kroppen når man blir gammel?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_mann1.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_mann1.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 18)
    {
        text = "16. Hvem av disse kan ha menstruasjon?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Bestemor.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Bestemor.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 19)
    {
        text = "17. Hvilke steder på kroppen må du vaske hver dag?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 20)
    {
        text = "18. Hvorfor vasker vi oss?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;;
    }
    else if(nextQuestion == 21)
    {
        text = "19. Hvorfor må vi ta på rene klær?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 22)
    {
        text = "20. Når må du vaske deg på hendene?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 23)
    {
        text = "21. Når må du pusse tennene?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 24)
    {
        text = "22. Hvorfor må vi pusse tenner?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 25)
    {
        text = "23. Hvem er glad?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Glad_fjes.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Glad_fjes.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 26)
    {
        text = "24. Hvem er sint?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Glad_fjes.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Glad_fjes.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 27)
    {
        text = "25. Hvem er lei seg?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Glad_fjes.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Glad_fjes.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 28)
    {
        text = "26. Er noen av disse lei seg?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f3.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f3.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 29)
    {
        text = "27. Hvordan kan du se det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 30)
    {
        text = "28. Hva kan du gjøre når noen er lei seg?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 31)
    {
        text = "29. Hvem er sjalu?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 32)
    {
        text = "30. Hvem er kjærester?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/SnakkeIRullestol.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/SnakkeIRullestol.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 33)
    {
        text = "31. Hvem er venner?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 34)
    {
        text = "32. Hvem kan hun være kjæreste med?";
        ui->label_2->setText(text);
        QPixmap pixTrist1(":/Assets/Pictures_2/IMG_f3.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f3.gif");
        ui->label->setPixmap(pixTrist1);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 35)
    {
        text = "33. Hvem kan han være kjæreste med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f4.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f4.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 36)
    {
        text = "34. Hva gjør venner sammen?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 37)
    {
        text = "35. Hva gjør kjærester sammen?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 38)
    {
        text = "36. Hvordan kan man ta på en venn?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 39)
    {
        text = "37. Hvordan kan man ta på en kjæreste?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tapaapupper.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tapaapupper.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 40)
    {
        text = "38. Hvem av disse har sex?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0289.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0289.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 41)
    {
        text = "39. Hvem er kåt?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/SnakkeIRullestol.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/SnakkeIRullestol.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 42)
    {
        text = "40. Hvem onanerer?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0288.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0288.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 43)
    {
        text = "41. Hvem har samleie?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tapaapupper.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tapaapupper.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 44)
    {
        text = "42. Har noen av disse samleie?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0333.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0333.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 45)
    {
        text = "43. Hvem av disse kan hun ha sex med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f3.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f3.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 46)
    {
        text = "44. Hvem av disse kan han ha sex med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f4.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f4.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 47)
    {
        text = "45. Er det lov å ha sex med noen som ikke har gitt tillatelse(samtykke, sagt ja)?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 48)
    {
        text = "46. Hvem har sex uten å ha fått lov(tillatelse)?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tapaarompe.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tapaarompe.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 49)
    {
        text = "47. Hvordan kan du se det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 50)
    {
        text = "48. Hvor kan du ha sex?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0376.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0376.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 51)
    {
        text = "49. Hva er lov?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0485.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0485.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 52)
    {
        text = "50. Hva er ulovlig(ikke lov/forbudt)?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0378.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0378.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 53)
    {
        text = "51. Har voksne lov til å ha sex med barn på film eller på nettet?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 54)
    {
        text = "52. Har en voksen lov til å bli kjæreste med et barn på nettet?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 55)
    {
        text = "53. Her ser du en familie. Det er mor, far, en datter og en sønn. Hvem kan ha sex med hverandre?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f11.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f11.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 56)
    {
        text = "54. Hvordan kan en jente bli gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0330.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0330.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 57)
    {
        text = "55. Hva kan en jente bruke for ikke å bli gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tannkrem.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tannkrem.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 58)
    {
        text = "56. Hvordan vet en jente at hun er gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/kyssidel.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/kyssidel.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 59)
    {
        text = "57. Hva kan en jente gjøre hvis hun ikke vil ha barnet?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0381.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0381.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 60)
    {
        text = "58. Hva kan en gutt bruke for å unngå å gjøre en jente gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0387.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0387.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 61)
    {
        text = "59. Hva heter det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 62)
    {
        text = "60. Hvordan bruker man kondom?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 63)
    {
        text = "61. Hvor kan man få tak i et kondom?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 64)
    {
        text = "62. Hvor kan du lære mer om sex?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0337.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0337.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
}

void SecondWindowDialog::setUpGif_4()
{
    if(nextQuestion == 1)
    {
        text = "1. Hvem er mann?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/Jente.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/Jente.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 2)
    {
        text = "2. Hvem er kvinne?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0562.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0562.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 3)
    {
        text = "3. Pek på...";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 4)
    {
        text = "4. Hva brukes den/de til";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 5)
    {
        text = "5.a) Hva er dette?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 6)
    {
        text = "5.b) Hva heter det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 7)
    {
        text = "6.a) Hva er dette?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 8)
    {
        text = "6.b) Hva heter det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 9)
    {
        text = "7. Er du barn eller voksen - eller er du ungdom?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 10)
    {
        text = "8.Hvem er barn?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/Jente.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/Jente.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 11)
    {
        text = "9. Hvem er voksen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_kvinne.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_kvinne.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 12)
    {
        text = "10. Når er man ungdom?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 13)
    {
        text = "11. Når blir man voksen?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 14)
    {
        text = "12. Hva skjer med kroppen til en gutt når han blir voksen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_kvinne.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_kvinne.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 15)
    {
        text = "13. Hva skjer med kroppen til en jente når hun blir voksen?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_kvinne.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_kvinne.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 16)
    {
        text = "14. Hvem er gammel?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_bestemor.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_bestemor.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 17)
    {
        text = "15. Hva skjer med kroppen når man blir gammel?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Naken_bestemor.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Naken_bestemor.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 18)
    {
        text = "16. Hvem av disse kan ha menstruasjon?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Dame.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Dame.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 19)
    {
        text = "17. Hvilke steder på kroppen må du vaske hver dag?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 20)
    {
        text = "18. Hvorfor vasker vi oss?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 21)
    {
        text = "19. Hvorfor må vi ta på rene klær?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 22)
    {
        text = "20. Når må du vaske deg på hendene?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 23)
    {
        text = "21. Når må du pusse tennene?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 24)
    {
        text = "22. Hvorfor må vi pusse tenner?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 25)
    {
        text = "23. Hvem er glad?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tris_ansikt.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tris_ansikt.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 26)
    {
        text = "24. Hvem er sint?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tris_ansikt.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tris_ansikt.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 27)
    {
        text = "25. Hvem er lei seg?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/Tris_ansikt.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/Tris_ansikt.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 28)
    {
        text = "26. Er noen av disse lei seg?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0381.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0381.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 29)
    {
        text = "27. Hvordan kan du se det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 30)
    {
        text = "28. Hva kan du gjøre når noen er lei seg?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 31)
    {
        text = "29. Hvem er sjalu?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 32)
    {
        text = "30. Hvem er kjærester?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/Jenter_loper.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/Jenter_loper.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 33)
    {
        text = "31. Hvem er venner?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 34)
    {
        text = "32. Hvem kan hun være kjæreste med?";
        ui->label_2->setText(text);
        QPixmap pixTrist1(":/Assets/Pictures_2/IMG_f8.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f8.gif");
        ui->label->setPixmap(pixTrist1);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 35)
    {
        text = "33. Hvem kan han være kjæreste med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f7.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f7.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 36)
    {
        text = "34. Hva gjør venner sammen?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 37)
    {
        text = "35. Hva gjør kjærester sammen?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 38)
    {
        text = "36. Hvordan kan man ta på en venn?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 39)
    {
        text = "37. Hvordan kan man ta på en kjæreste?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/kyssidel.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/kyssidel.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 40)
    {
        text = "38. Hvem av disse har sex?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/Jenter_loper.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/Jenter_loper.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 41)
    {
        text = "39. Hvem er kåt?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0302.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0302.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 42)
    {
        text = "40. Hvem onanerer?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0291.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0291.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 43)
    {
        text = "41. Hvem har samleie?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0330.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0330.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 44)
    {
        text = "42. Har noen av disse samleie?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0288.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0288.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 45)
    {
        text = "43. Hvem av disse kan hun ha sex med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f8.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f8.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 46)
    {
        text = "44. Hvem av disse kan han ha sex med?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f7.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f7.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 47)
    {
        text = "45. Er det lov å ha sex med noen som ikke har gitt tillatelse(samtykke, sagt ja)?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 48)
    {
        text = "46. Hvem har sex uten å ha fått lov(tillatelse)?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0332.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0332.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 49)
    {
        text = "47. Hvordan kan du se det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 50)
    {
        text = "48. Hvor kan du ha sex?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0375.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0375.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 51)
    {
        text = "49. Hva er lov?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0385.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0385.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 52)
    {
        text = "50. Hva er ulovlig(ikke lov/forbudt)?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0337.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0337.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 53)
    {
        text = "51. Har voksne lov til å ha sex med barn på film eller på nettet?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 54)
    {
        text = "52. Har en voksen lov til å bli kjæreste med et barn på nettet?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 55)
    {
        text = "53. Her ser du en familie. Det er mor, far, en datter og en sønn. Hvem kan ha sex med hverandre?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_f12.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_f12.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 56)
    {
        text = "54. Hvordan kan en jente bli gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/kyssidel.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/kyssidel.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 57)
    {
        text = "55. Hva kan en jente bruke for ikke å bli gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/P-Piller.gif");
        QMovie *movie = new QMovie(":/Assets/Pictures/P-Piller.gif");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 58)
    {
        text = "56. Hvordan vet en jente at hun er gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0459.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0459.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 59)
    {
        text = "57. Hva kan en jente gjøre hvis hun ikke vil ha barnet?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0386.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0386.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 60)
    {
        text = "58. Hva kan en gutt bruke for å unngå å gjøre en jente gravid?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures/IMG_0388.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures/IMG_0388.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 61)
    {
        text = "59. Hva heter det?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 62)
    {
        text = "60. Hvordan bruker man kondom?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0490.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0490.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = false;
    }
    else if(nextQuestion == 63)
    {
        text = "61. Hvor kan man få tak i et kondom?";
        ui->label_2->setText(text);
        QPixmap pix("");
        QMovie *movie = new QMovie("");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
    else if(nextQuestion == 64)
    {
        text = "62. Hvor kan du lære mer om sex?";
        ui->label_2->setText(text);
        QPixmap pix(":/Assets/Pictures_2/IMG_0492.GIF");
        QMovie *movie = new QMovie(":/Assets/Pictures_2/IMG_0492.GIF");
        ui->label->setPixmap(pix);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->label->setMovie(movie);
        movie->start();
        answerCorrect = true;
    }
}
