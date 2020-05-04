#include "readquestiondialog.h"
#include "ui_readquestiondialog.h"

readQuestionDialog::readQuestionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::readQuestionDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    readComments();
}

readQuestionDialog::~readQuestionDialog()
{
    delete ui;
}

void readQuestionDialog::readComments()
{
    getComment = readComment.commentText;
    getComment = "Hei";
    ui->label_2->setText(getComment);
}

void readQuestionDialog::on_pushButton_clicked()
{
    close();
}
