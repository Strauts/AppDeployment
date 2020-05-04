#include "settingsdialog.h"
#include "ui_settingsdialog.h"

settingsDialog::settingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingsDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

settingsDialog::~settingsDialog()
{
    delete ui;
}

void settingsDialog::on_goBackPushButton_clicked()
{
    close();
}

void settingsDialog::on_settings1_clicked()
{

}

void settingsDialog::on_settings2_clicked()
{

}

void settingsDialog::on_settings3_clicked()
{

}

void settingsDialog::on_settings4_clicked()
{

}

void settingsDialog::on_settings5_clicked()
{

}

void settingsDialog::on_settings6_clicked()
{

}
