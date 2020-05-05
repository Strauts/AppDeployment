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
