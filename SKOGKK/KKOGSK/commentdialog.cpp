#include "commentdialog.h"
#include "ui_commentdialog.h"

commentDialog::commentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::commentDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

commentDialog::~commentDialog()
{
    delete ui;
}

void commentDialog::storeComment()
{
    commentText = ui->textEdit->toPlainText();
}

void commentDialog::on_pushButton_clicked()
{
    storeComment();
    close();
}
