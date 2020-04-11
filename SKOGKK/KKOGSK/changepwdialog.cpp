#include "changepwdialog.h"
#include "ui_changepwdialog.h"

changePWDialog::changePWDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changePWDialog)
{
    ui->setupUi(this);
}

changePWDialog::~changePWDialog()
{
    delete ui;
}
