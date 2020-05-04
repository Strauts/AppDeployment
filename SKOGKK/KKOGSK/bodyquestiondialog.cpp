#include "bodyquestiondialog.h"
#include "ui_bodyquestiondialog.h"
#include <QMessageBox>

bodyQuestionDialog::bodyQuestionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bodyQuestionDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

}

bodyQuestionDialog::~bodyQuestionDialog()
{
    delete ui;
}

void bodyQuestionDialog::on_pushButton_6_clicked()
{
    close();
}

void bodyQuestionDialog::on_pushButton_5_clicked()
{

}

void bodyQuestionDialog::on_pushButton_clicked()
{

}

void bodyQuestionDialog::on_pushButton_2_clicked()
{

}

void bodyQuestionDialog::on_pushButton_3_clicked()
{

}

void bodyQuestionDialog::on_pushButton_4_clicked()
{

}
