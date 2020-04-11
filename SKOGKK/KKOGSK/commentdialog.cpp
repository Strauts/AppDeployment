#include "commentdialog.h"
#include "ui_commentdialog.h"

commentDialog::commentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::commentDialog)
{
    ui->setupUi(this);
}

commentDialog::~commentDialog()
{
    delete ui;
}

void commentDialog::on_pushButton_clicked()
{
    close();
}
