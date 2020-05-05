#include "textquestiondialog.h"
#include "ui_textquestiondialog.h"

textQuestionDialog::textQuestionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::textQuestionDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

textQuestionDialog::~textQuestionDialog()
{
    delete ui;
}

void textQuestionDialog::chooseNr()
{
    if(textNr == 9)
    {
        text = "Tema: Pubertet";
        text2 = "7. Er du barn eller voksen, eller er du ungdom?";
        ui->label->setText(text);
        ui->label_2->setText(text2);
    }
    else if(textNr == 12)
    {
        text = "Tema: Pubertet";
        text2 = "10. Når er man ungdom?";
        ui->label->setText(text);
        ui->label_2->setText(text2);
    }
    else if(textNr == 13)
    {
        text = "Tema: Pubertet";
        text2 = "11. Når blir man voksen?";
        ui->label->setText(text);
        ui->label_2->setText(text2);
    }
    else if(textNr == 20)
    {
        text = "Tema: Hygiene";
        text2 = "18. Hvorfor vasker vi oss?";
        ui->label->setText(text);
        ui->label_2->setText(text2);
    }
    else if(textNr == 21)
    {
        text = "Tema: Hygiene";
        text2 = "19. Hvorfor må vi ta på rene klær?";
        ui->label->setText(text);
        ui->label_2->setText(text2);
    }
    else if(textNr == 24)
    {
        text = "Tema: Hygiene";
        text2 = "22. Hvorfor må vi pusse tenner?";
        ui->label->setText(text);
        ui->label_2->setText(text2);
    }
    else if(textNr == 29)
    {
        text = "Tema: Følelser og relasjoner";
        text2 = "27. Hvordan kan du se det?";
        ui->label->setText(text);
        ui->label_2->setText(text2);
    }
    else if(textNr == 47)
    {
        text = "Tema: Grenser og overgrep";
        text2 = "45. Er det lov å ha sex med noen som ikke har gitt tillatelse?";
        ui->label->setText(text);
        ui->label_2->setText(text2);
    }
    else if(textNr == 63)
    {
        text = "Tema: Prevensjon og seksualitetsundervisning";
        text2 = "61. Hvor kan man få tak i et kondom?";
        ui->label->setText(text);
        ui->label_2->setText(text2);
    }
    text = "";
    text2 = "";
}

void textQuestionDialog::on_pushButton_clicked()
{
    close();
}

void textQuestionDialog::on_pushButton_2_clicked()
{
    close();
}
