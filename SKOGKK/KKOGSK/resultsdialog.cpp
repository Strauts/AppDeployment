#include "resultsdialog.h"
#include "ui_resultsdialog.h"

resultsDialog::resultsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resultsDialog)
{
    ui->setupUi(this);
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
    openCommentDialog.setModal(true);
    openCommentDialog.exec();
}
