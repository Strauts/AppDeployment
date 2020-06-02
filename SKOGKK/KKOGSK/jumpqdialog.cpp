#include "jumpqdialog.h"
#include "ui_jumpqdialog.h"

jumpQDialog::jumpQDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jumpQDialog)
{
    //ui->setupUi(this);
}

jumpQDialog::~jumpQDialog()
{
    delete ui;
}

void jumpQDialog::nextQuestion()
{
//    if(nextQ.answerCorrect == true)
//    {
//        nextQ.answerCorrect = false;
//        proceedTest.on_pushButton_5_clicked();
//    }
}
