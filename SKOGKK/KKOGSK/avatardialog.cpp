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
    presetAvatar();
}

avatarDialog::~avatarDialog()
{
    delete ui;
}

void avatarDialog::presetAvatar()
{
    QPixmap pixSex1(":/Assets/Pictures/Bestemor.GIF");
    QMovie *movie = new QMovie(":/Assets/Pictures/Bestemor.GIF");
    ui->label->setPixmap(pixSex1);
    ui->label->setScaledContents(true);
    ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->label->setMovie(movie);
    movie->start();
}

void avatarDialog::on_pushButton_clicked()
{
    close();
}
