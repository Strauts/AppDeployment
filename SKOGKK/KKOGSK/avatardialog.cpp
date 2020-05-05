#include "avatardialog.h"
#include "ui_avatardialog.h"
#include <QWidget>
#include <QMovie>
#include <QDialog>
#include <QMessageBox>

avatarDialog::avatarDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::avatarDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    presetAvatar();
}

avatarDialog::~avatarDialog()
{
    delete ui;
}

void avatarDialog::presetAvatar()
{
    QPixmap pixSex1(":/Assets/Avatar/image0.png");
//    QMovie *movie = new QMovie(":/Assets/Pictures/Bestemor.GIF");
    ui->label->setPixmap(pixSex1);
    ui->label->setScaledContents(true);
    ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
//    ui->label->setMovie(movie);
//    movie->start();
}

void avatarDialog::on_pushButton_clicked()
{
    close();
}

void avatarDialog::on_pushButton_2_clicked()
{
        QPixmap pixSex1(":/Assets/Avatar/image0.png");
        ui->label->setPixmap(pixSex1);
        ui->label->setScaledContents(true);
        ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void avatarDialog::on_pushButton_3_clicked()
{
    QPixmap pixSex1(":/Assets/Avatar/image1.png");
    ui->label->setPixmap(pixSex1);
    ui->label->setScaledContents(true);
    ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}

void avatarDialog::on_pushButton_4_clicked()
{
    QPixmap pixSex1(":/Assets/Avatar/image2.png");
    ui->label->setPixmap(pixSex1);
    ui->label->setScaledContents(true);
    ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
}
