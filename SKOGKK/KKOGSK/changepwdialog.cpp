#include "changepwdialog.h"
#include "ui_changepwdialog.h"

changePWDialog::changePWDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changePWDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

changePWDialog::~changePWDialog()
{
    delete ui;
}
