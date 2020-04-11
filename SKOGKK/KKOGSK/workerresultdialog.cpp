#include "workerresultdialog.h"
#include "ui_workerresultdialog.h"

workerResultDialog::workerResultDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::workerResultDialog)
{
    ui->setupUi(this);
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
