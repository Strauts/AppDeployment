#include "resultsdialog.h"
#include "ui_resultsdialog.h"

resultsDialog::resultsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resultsDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
}

resultsDialog::~resultsDialog()
{
    delete ui;
}

void resultsDialog::on_pushButton_clicked()
{
    close();
}

void resultsDialog::on_pushButto_Comment_1_clicked()
{
    getQuestionComment.setModal(true);
    getQuestionComment.exec();
}

void resultsDialog::on_pushButton_Comment_2_clicked()
{
    getQuestionComment.setModal(true);
    getQuestionComment.exec();
}


void resultsDialog::on_pushButton_Comment_3_clicked()
{
    getQuestionComment.setModal(true);
    getQuestionComment.exec();
}

void resultsDialog::on_pushButton_Comment_4_clicked()
{
    getQuestionComment.setModal(true);
    getQuestionComment.exec();
}

void resultsDialog::on_pushButton_Comment_5_clicked()
{
    getQuestionComment.setModal(true);
    getQuestionComment.exec();
}

void resultsDialog::on_pushButton_Comment_6_clicked()
{
    getQuestionComment.setModal(true);
    getQuestionComment.exec();
}

void resultsDialog::on_pushButton_Comment_7_clicked()
{
    getQuestionComment.setModal(true);
    getQuestionComment.exec();
}

void resultsDialog::on_pushButton_Comment_8_clicked()
{
    getQuestionComment.setModal(true);
    getQuestionComment.exec();
}

void resultsDialog::on_pushButton_Comment_9_clicked()
{
    getQuestionComment.setModal(true);
    getQuestionComment.exec();
}

void resultsDialog::on_pushButton_Comment_10_clicked()
{
    getQuestionComment.setModal(true);
    getQuestionComment.exec();
}
