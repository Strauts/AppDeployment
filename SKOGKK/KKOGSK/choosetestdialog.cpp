#include "choosetestdialog.h"
#include "ui_choosetestdialog.h"
#include <QMessageBox>

chooseTestDialog::chooseTestDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chooseTestDialog)
{
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::Window);
    ui->setupUi(this);
}

chooseTestDialog::~chooseTestDialog()
{
    delete ui;
}

void chooseTestDialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Inactive", "KroppKunn er ikke satt opp");
    //startUpBodyTest.setModal(true);
    //startUpBodyTest.exec();
}

void chooseTestDialog::on_pushButton_2_clicked()
{
    openSexKunn.setModal(true);
    openSexKunn.exec();
}

void chooseTestDialog::on_pushButton_3_clicked()
{
    close();
}
