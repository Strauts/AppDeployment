#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QWidget>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    presetPicture();
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::presetPicture()
{
    QPixmap pix(":/Assets/Temaer/LOGO.png");
    ui->label_5->setPixmap(pix);
    ui->label_5->setScaledContents(true);
    ui->label_5->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void LoginDialog::on_pushButton_login_clicked(bool loginSucceded)
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_2_password->text();

    //test if username is in database
    if(username == "test" && password == "test")
    {
        QMessageBox::information(this, "Login", "Brukernavn eller passord er riktig");
        loginSucceded = true;
        loginOK = loginSucceded;
        this->close();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Brukernavn eller passord er feil");
    }
}

void LoginDialog::on_pushButton_2_clicked()
{

}

void LoginDialog::on_pushButton_clicked()
{
    regUser.setModal(true);
    regUser.exec();
}

void LoginDialog::on_pushButton_3_clicked()
{
    isWorker = false;
    ui->label_7->setText("Bruker");
}

void LoginDialog::on_pushButton_4_clicked()
{
    isWorker = true;
    ui->label_7->setText("Ansatt");
}
