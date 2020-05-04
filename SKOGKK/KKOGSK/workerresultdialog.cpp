#include "workerresultdialog.h"
#include "ui_workerresultdialog.h"

workerResultDialog::workerResultDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::workerResultDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

workerResultDialog::~workerResultDialog()
{
    delete ui;
}

void workerResultDialog::on_pushButto_Comment_1_clicked()
{
    openComment.setModal(true);
    openComment.exec();
}

void workerResultDialog::on_pushButton_clicked()
{
    close();
}

void workerResultDialog::on_pushButton_Comment_2_clicked()
{
    openComment.setModal(true);
    openComment.exec();
}

void workerResultDialog::on_pushButton_Comment_3_clicked()
{
    openComment.setModal(true);
    openComment.exec();
}

void workerResultDialog::on_pushButton_Comment_4_clicked()
{
    openComment.setModal(true);
    openComment.exec();
}

void workerResultDialog::on_pushButton_Comment_5_clicked()
{
    openComment.setModal(true);
    openComment.exec();
}

void workerResultDialog::on_pushButton_Comment_6_clicked()
{
    openComment.setModal(true);
    openComment.exec();
}

void workerResultDialog::on_pushButton_Comment_7_clicked()
{
    openComment.setModal(true);
    openComment.exec();
}

void workerResultDialog::on_pushButton_Comment_8_clicked()
{
    openComment.setModal(true);
    openComment.exec();
}

void workerResultDialog::on_pushButton_Comment_9_clicked()
{
    openComment.setModal(true);
    openComment.exec();
}

void workerResultDialog::on_pushButton_Comment_10_clicked()
{
    openComment.setModal(true);
    openComment.exec();
}
